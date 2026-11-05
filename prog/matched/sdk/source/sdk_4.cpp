/* sdk -- 2000 functions verified to match the original.
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


// sub_31a030  (orig 0x31a030, call)
extern void callee_5233b0();
uint64_t sdk_f_31a030(uint64_t a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5233b0)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31a050  (orig 0x31a050, call)
extern void callee_5233c0();
uint64_t sdk_f_31a050(uint64_t a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_5233c0)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)((((uint32_t)a1)) & (1))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31a070  (orig 0x31a070, call)
extern void callee_5233d0();
uint64_t sdk_f_31a070() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_5233d0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31a090  (orig 0x31a090, call)
extern void callee_5233e0();
uint64_t sdk_f_31a090(uint64_t a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_5233e0)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)((((uint32_t)a1)) & (1))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31a0b0  (orig 0x31a0b0, call)
extern void callee_5233f0();
uint64_t sdk_f_31a0b0(uint64_t a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_5233f0)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)((((uint32_t)a1)) & (1))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31a0d0  (orig 0x31a0d0, call)
extern void callee_523400();
uint64_t sdk_f_31a0d0(uint64_t a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_523400)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)((((uint32_t)a1)) & (1))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31a0f0  (orig 0x31a0f0, call)
extern void callee_523410();
uint64_t sdk_f_31a0f0(uint64_t a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_523410)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)((((uint32_t)a1)) & (1))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31a110  (orig 0x31a110, call)
extern void callee_523420();
uint64_t sdk_f_31a110(uint64_t a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_523420)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)((((uint32_t)a1)) & (1))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31a130  (orig 0x31a130, call)
extern void callee_523430();
uint64_t sdk_f_31a130(uint64_t a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_523430)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)((((uint32_t)a1)) & (1))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31a150  (orig 0x31a150, call)
extern void callee_523440();
uint64_t sdk_f_31a150() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_523440)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31a1c0  (orig 0x31a1c0, ret_only)
void sdk_f_31a1c0() {}

// sub_31a320  (orig 0x31a320, call)
extern void callee_523470();
uint64_t sdk_f_31a320(uint64_t a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_523470)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(21)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31a8d0  (orig 0x31a8d0, call)
extern void callee_523200();
uint64_t sdk_f_31a8d0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_523200)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31a8f0  (orig 0x31a8f0, ret_only)
void sdk_f_31a8f0() {}

// sub_31a900  (orig 0x31a900, delegator)
extern void callee_523550();
void sdk_f_31a900(unsigned long a0) { ((void(*)(unsigned long))callee_523550)(a0); asm volatile(""); }

// sub_31a980  (orig 0x31a980, call)
extern void callee_5235c0();
uint32_t sdk_f_31a980() {
    uint32_t r0 = ((((uint32_t (*)(void))&callee_5235c0)() == 2) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_31a9a0  (orig 0x31a9a0, call)
extern void callee_5235c0();
uint32_t sdk_f_31a9a0() {
    uint32_t r0 = ((((uint32_t (*)(void))&callee_5235c0)() == 3) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_31a9c0  (orig 0x31a9c0, delegator)
extern void callee_5235d0();
void sdk_f_31a9c0(unsigned long a0) { ((void(*)(unsigned long))callee_5235d0)(a0); asm volatile(""); }

// sub_31a9f0  (orig 0x31a9f0, call)
extern void callee_5235e0();
uint64_t sdk_f_31a9f0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_5235e0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31ab70  (orig 0x31ab70, delegator)
extern void callee_523650();
void sdk_f_31ab70(unsigned long a0) { ((void(*)(unsigned long))callee_523650)(a0); asm volatile(""); }

// sub_31ab90  (orig 0x31ab90, call)
extern void callee_523660();
uint64_t sdk_f_31ab90() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_523660)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31abb0  (orig 0x31abb0, ret_only)
void sdk_f_31abb0() {}

// sub_31b110  (orig 0x31b110, straight)
void sdk_f_31b110(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(*(uint32_t*)((char*)(a1)));
    *(uint16_t*)((char*)(a0) + 5) = *(uint16_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 1) = *(uint32_t*)((char*)(a1) + 4);
    *(uint8_t*)((char*)(a0) + 7) = *(uint8_t*)((char*)(a1) + 10);
}

// sub_31b170  (orig 0x31b170, straight)
void* sdk_f_31b170(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint8_t*)((char*)(a0)) = (uint8_t)(*(uint32_t*)((char*)(a1)));
    *(uint8_t*)((char*)(p1) + 1) = (uint8_t)(*(uint32_t*)((char*)(p0) + 4));
    *(uint8_t*)((char*)(p1) + 2) = (uint8_t)(*(uint32_t*)((char*)(p0) + 8));
    return a0;
}

// sub_31b190  (orig 0x31b190, straight)
void* sdk_f_31b190(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint8_t*)((char*)(a1)));
    *(uint32_t*)((char*)(p1) + 4) = (uint32_t)(*(uint8_t*)((char*)(p0) + 1));
    *(uint32_t*)((char*)(p1) + 8) = (uint32_t)(*(uint8_t*)((char*)(p0) + 2));
    return a0;
}

// sub_31b9a0  (orig 0x31b9a0, const-ret)
uint32_t sdk_f_31b9a0() { return 3595418u; }

// sub_31c5c0  (orig 0x31c5c0, ptr_add)
void* sdk_f_31c5c0(void* a0) { return (char*)a0 + 16; }

// sub_31c5d0  (orig 0x31c5d0, call)
extern void callee_512700();
uint64_t sdk_f_31c5d0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_512700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c5f0  (orig 0x31c5f0, call)
extern void callee_5128a0();
uint64_t sdk_f_31c5f0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c610  (orig 0x31c610, call)
extern void callee_5236d0();
uint64_t sdk_f_31c610(void* a0, void* a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5236d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)((((uint64_t)a2)) & (65535))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c640  (orig 0x31c640, call)
extern void callee_5236d0();
uint64_t sdk_f_31c640(void* a0, void* a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5236d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)((((uint64_t)a2)) & (65535))), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c670  (orig 0x31c670, call)
extern void callee_5126d0();
uint64_t sdk_f_31c670(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(5)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c690  (orig 0x31c690, call)
extern void callee_5126d0();
uint64_t sdk_f_31c690(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(7)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c6b0  (orig 0x31c6b0, call)
extern void callee_5236e0();
uint64_t sdk_f_31c6b0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5236e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(21)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c6d0  (orig 0x31c6d0, call)
extern void callee_5236f0();
uint64_t sdk_f_31c6d0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5236f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(23)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c6f0  (orig 0x31c6f0, call)
extern void callee_523700();
uint64_t sdk_f_31c6f0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(25)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c710  (orig 0x31c710, call)
extern void callee_519270();
uint64_t sdk_f_31c710(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_519270)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(26)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c730  (orig 0x31c730, call)
extern void callee_512700();
uint64_t sdk_f_31c730(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_512700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(101)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c750  (orig 0x31c750, call)
extern void callee_512700();
uint64_t sdk_f_31c750(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_512700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(102)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c770  (orig 0x31c770, call)
extern void callee_5126e0();
uint64_t sdk_f_31c770(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(103)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c790  (orig 0x31c790, call)
extern void callee_5128d0();
uint64_t sdk_f_31c790(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5128d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(104)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c7c0  (orig 0x31c7c0, call)
extern void callee_523710();
uint64_t sdk_f_31c7c0(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(111)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31c890  (orig 0x31c890, ptr_add)
void* sdk_f_31c890(void* a0) { return (char*)a0 + 8; }

// sub_31c8a0  (orig 0x31c8a0, straight)
void* sdk_f_31c8a0(void* a0) { return (char*)(a0) - 8; }

// sub_31d160  (orig 0x31d160, ptr_add)
void* sdk_f_31d160(void* a0) { return (char*)a0 + 16; }

// sub_31d170  (orig 0x31d170, call)
extern void callee_5128a0();
uint64_t sdk_f_31d170(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d190  (orig 0x31d190, call)
extern void callee_519270();
uint64_t sdk_f_31d190(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_519270)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d1b0  (orig 0x31d1b0, call)
extern void callee_5236d0();
uint64_t sdk_f_31d1b0(void* a0, void* a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5236d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)((((uint64_t)a2)) & (65535))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d1e0  (orig 0x31d1e0, call)
extern void callee_5126d0();
uint64_t sdk_f_31d1e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d200  (orig 0x31d200, ptr_add)
void* sdk_f_31d200(void* a0) { return (char*)a0 + 8; }

// sub_31d210  (orig 0x31d210, straight)
void* sdk_f_31d210(void* a0) { return (char*)(a0) - 8; }

// sub_31d500  (orig 0x31d500, ptr_add)
void* sdk_f_31d500(void* a0) { return (char*)a0 + 16; }

// sub_31d510  (orig 0x31d510, call)
extern void callee_512700();
uint64_t sdk_f_31d510(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_512700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d530  (orig 0x31d530, call)
extern void callee_5128a0();
uint64_t sdk_f_31d530(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d550  (orig 0x31d550, call)
extern void callee_5236d0();
uint64_t sdk_f_31d550(void* a0, void* a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5236d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)((((uint64_t)a2)) & (65535))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d580  (orig 0x31d580, call)
extern void callee_5236d0();
uint64_t sdk_f_31d580(void* a0, void* a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5236d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)((((uint64_t)a2)) & (65535))), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d5b0  (orig 0x31d5b0, call)
extern void callee_5126d0();
uint64_t sdk_f_31d5b0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(5)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d5d0  (orig 0x31d5d0, call)
extern void callee_5126d0();
uint64_t sdk_f_31d5d0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(7)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d5f0  (orig 0x31d5f0, call)
extern void callee_5236e0();
uint64_t sdk_f_31d5f0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5236e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(21)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d610  (orig 0x31d610, call)
extern void callee_5236f0();
uint64_t sdk_f_31d610(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5236f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(23)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d630  (orig 0x31d630, call)
extern void callee_523700();
uint64_t sdk_f_31d630(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(25)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d650  (orig 0x31d650, call)
extern void callee_519270();
uint64_t sdk_f_31d650(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_519270)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(26)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d670  (orig 0x31d670, call)
extern void callee_512700();
uint64_t sdk_f_31d670(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_512700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(101)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d690  (orig 0x31d690, call)
extern void callee_512700();
uint64_t sdk_f_31d690(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_512700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(102)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d6b0  (orig 0x31d6b0, call)
extern void callee_5126e0();
uint64_t sdk_f_31d6b0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(103)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d6d0  (orig 0x31d6d0, call)
extern void callee_5128d0();
uint64_t sdk_f_31d6d0(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5128d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(104)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d700  (orig 0x31d700, call)
extern void callee_523710();
uint64_t sdk_f_31d700(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(111)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d7d0  (orig 0x31d7d0, call)
extern void callee_512700();
uint64_t sdk_f_31d7d0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_512700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(6)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d7f0  (orig 0x31d7f0, call)
extern void callee_523730();
uint64_t sdk_f_31d7f0(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523730)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(11)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d820  (orig 0x31d820, call)
extern void callee_523730();
uint64_t sdk_f_31d820(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523730)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(12)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d850  (orig 0x31d850, call)
extern void callee_523740();
uint64_t sdk_f_31d850(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523740)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(13)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d880  (orig 0x31d880, call)
extern void callee_523750();
uint64_t sdk_f_31d880(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523750)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(22)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d8a0  (orig 0x31d8a0, call)
extern void callee_523760();
uint64_t sdk_f_31d8a0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(24)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d8c0  (orig 0x31d8c0, call)
extern void callee_5127c0();
uint64_t sdk_f_31d8c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5127c0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(31)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d8e0  (orig 0x31d8e0, call)
extern void callee_5127c0();
uint64_t sdk_f_31d8e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5127c0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(32)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d900  (orig 0x31d900, call)
extern void callee_523770();
uint64_t sdk_f_31d900(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523770)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(33)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d920  (orig 0x31d920, call)
extern void callee_523730();
uint64_t sdk_f_31d920(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523730)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)((*(uint64_t*)((char*)(a1) + 8)) << (3))), ((uintptr_t)(34)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d950  (orig 0x31d950, call)
extern void callee_5126d0();
uint64_t sdk_f_31d950(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(105)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d970  (orig 0x31d970, call)
extern void callee_512700();
uint64_t sdk_f_31d970(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_512700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(112)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d990  (orig 0x31d990, call)
extern void callee_512700();
uint64_t sdk_f_31d990(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_512700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(113)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d9b0  (orig 0x31d9b0, call)
extern void callee_523780();
uint64_t sdk_f_31d9b0(void* a0, void* a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(114)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31d9e0  (orig 0x31d9e0, call)
extern void callee_523790();
uint64_t sdk_f_31d9e0(void* a0, void* a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523790)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(115)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31da10  (orig 0x31da10, call)
extern void callee_5128c0();
uint64_t sdk_f_31da10(void* a0, uint32_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5128c0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(201)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31da40  (orig 0x31da40, call)
extern void callee_512780();
uint64_t sdk_f_31da40(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(202)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31da70  (orig 0x31da70, ptr_add)
void* sdk_f_31da70(void* a0) { return (char*)a0 + 8; }

// sub_31da80  (orig 0x31da80, straight)
void* sdk_f_31da80(void* a0) { return (char*)(a0) - 8; }

// sub_31e700  (orig 0x31e700, ret_only)
void sdk_f_31e700() {}

// sub_31ea90  (orig 0x31ea90, call)
extern void callee_523800();
uint64_t sdk_f_31ea90() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_523800)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31eb30  (orig 0x31eb30, call)
extern void callee_5237d0();
uint64_t sdk_f_31eb30() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_5237d0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31ec50  (orig 0x31ec50, call)
extern void callee_523870();
uint64_t sdk_f_31ec50() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_523870)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31ecc0  (orig 0x31ecc0, call)
extern void callee_523890();
uint64_t sdk_f_31ecc0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_523890)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_31ed30  (orig 0x31ed30, call)
extern void callee_5238b0();
uint64_t sdk_f_31ed30() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_5238b0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3202e0  (orig 0x3202e0, ptr_add)
void* sdk_f_3202e0(void* a0) { return (char*)a0 + 16; }

// sub_3202f0  (orig 0x3202f0, call)
extern void callee_5238f0();
uint64_t sdk_f_3202f0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5238f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(256)), ((uintptr_t)(10)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_320320  (orig 0x320320, call)
extern void callee_523900();
uint64_t sdk_f_320320(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523900)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(8)), ((uintptr_t)(11)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_320350  (orig 0x320350, call)
extern void callee_512b70();
uint64_t sdk_f_320350(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512b70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(12)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_320370  (orig 0x320370, call)
extern void callee_512780();
uint64_t sdk_f_320370(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(13)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3203a0  (orig 0x3203a0, call)
extern void callee_523910();
uint64_t sdk_f_3203a0(void* a0, void* a1, void* a2, uint32_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523910)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(14)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3203e0  (orig 0x3203e0, call)
extern void callee_512760();
uint64_t sdk_f_3203e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(15)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3204d0  (orig 0x3204d0, call)
extern void callee_5238f0();
uint64_t sdk_f_3204d0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5238f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(256)), ((uintptr_t)(40)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_320500  (orig 0x320500, call)
extern void callee_523960();
uint64_t sdk_f_320500(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523960)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(256)), ((uintptr_t)(41)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_320530  (orig 0x320530, call)
extern void callee_5238f0();
uint64_t sdk_f_320530(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5238f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(256)), ((uintptr_t)(42)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_320560  (orig 0x320560, call)
extern void callee_523960();
uint64_t sdk_f_320560(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523960)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(256)), ((uintptr_t)(43)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_320590  (orig 0x320590, call)
extern void callee_523970();
uint64_t sdk_f_320590(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523970)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(76784)), ((uintptr_t)(50)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3205c0  (orig 0x3205c0, call)
extern void callee_523970();
uint64_t sdk_f_3205c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523970)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(76784)), ((uintptr_t)(60)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3205f0  (orig 0x3205f0, call)
extern void callee_523980();
uint64_t sdk_f_3205f0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_523980)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(76784)), ((uintptr_t)(61)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_320620  (orig 0x320620, call)
extern void callee_512700();
uint64_t sdk_f_320620(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_512700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(62)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_320640  (orig 0x320640, call)
extern void callee_512710();
uint64_t sdk_f_320640(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(63)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_320660  (orig 0x320660, ptr_add)
void* sdk_f_320660(void* a0) { return (char*)a0 + 8; }

// sub_320670  (orig 0x320670, straight)
void* sdk_f_320670(void* a0) { return (char*)(a0) - 8; }

// sub_322a10  (orig 0x322a10, mov_ret)
uint32_t sdk_f_322a10() { return 1; }

// sub_322b40  (orig 0x322b40, strlit-ret)
const char *sdk_f_322b40() { static char g_f_322b40[1]; __asm__ volatile("" ::: "memory"); return g_f_322b40; }

// sub_3242d0  (orig 0x3242d0, compare)
bool sdk_f_3242d0(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_324320  (orig 0x324320, setter)
void sdk_f_324320(void* a0) { *(uint16_t*)((char*)(a0)) = 0; }

// sub_324450  (orig 0x324450, setter)
void sdk_f_324450(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_3246b0  (orig 0x3246b0, call)
extern void callee_523b80();
uint32_t sdk_f_3246b0() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&callee_523b80)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_3246d0  (orig 0x3246d0, call)
extern void callee_523b80();
uint32_t sdk_f_3246d0() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&callee_523b80)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_3247c0  (orig 0x3247c0, setter)
void sdk_f_3247c0(void* a0) { *(uint8_t*)((char*)(a0) + 19) = 0; }

// sub_324ab0  (orig 0x324ab0, setter)
void sdk_f_324ab0(void* a0) { *(uint8_t*)((char*)(a0) + 5) = 0; }

// sub_325370  (orig 0x325370, setter)
void sdk_f_325370(void* a0) { *(uint8_t*)((char*)(a0) + 16) = 0; }

// sub_325db0  (orig 0x325db0, setter)
void sdk_f_325db0(void* a0) { *(uint8_t*)((char*)(a0) + 52) = 0; }

// sub_326870  (orig 0x326870, setter)
void sdk_f_326870(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_3268b0  (orig 0x3268b0, ret_only)
void sdk_f_3268b0() {}

// sub_3269f0  (orig 0x3269f0, setter)
void sdk_f_3269f0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 56) = a1; }

// sub_326a00  (orig 0x326a00, getter)
uint64_t sdk_f_326a00(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_326a90  (orig 0x326a90, setter)
void sdk_f_326a90(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_326c90  (orig 0x326c90, setter)
void sdk_f_326c90(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_3270f0  (orig 0x3270f0, compare)
bool sdk_f_3270f0(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0) + 4)) > (int64_t)(0); }

// sub_327650  (orig 0x327650, setter)
void sdk_f_327650(void* a0) { *(uint8_t*)((char*)(a0) + 16) = 0; }

// sub_3278e0  (orig 0x3278e0, getter)
uint32_t sdk_f_3278e0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_327c90  (orig 0x327c90, getter)
uint64_t sdk_f_327c90(void* a0) { return *(uint64_t*)((char*)(a0) + 416); }

// sub_327d10  (orig 0x327d10, straight-line)
int32_t sdk_f_327d10(void* a0) { return *(int16_t*)((char*)(a0) + 68); }

// sub_327e20  (orig 0x327e20, getter)
uint64_t sdk_f_327e20(void* a0) { return *(uint64_t*)((char*)(a0) + 440); }

// sub_327eb0  (orig 0x327eb0, getter)
uint8_t sdk_f_327eb0(void* a0) { return *(uint8_t*)((char*)(a0) + 67); }

// sub_327fe0  (orig 0x327fe0, const-ret)
uint32_t sdk_f_327fe0() { return 19200000u; }

// sub_328440  (orig 0x328440, getter)
uint64_t sdk_f_328440(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_328450  (orig 0x328450, getter)
uint64_t sdk_f_328450(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_328460  (orig 0x328460, getter)
uint32_t sdk_f_328460(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_328970  (orig 0x328970, mov_ret)
uint32_t sdk_f_328970() { return 128; }

// sub_328ab0  (orig 0x328ab0, mov_ret)
uint32_t sdk_f_328ab0() { return -32767; }

// sub_328ac0  (orig 0x328ac0, mov_ret)
uint32_t sdk_f_328ac0() { return -32767; }

// sub_328f80  (orig 0x328f80, call)
extern void callee_510e70();
uint64_t sdk_f_328f80() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_510e70)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_328fa0  (orig 0x328fa0, call)
extern void callee_51a500();
uint64_t sdk_f_328fa0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_51a500)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3292c0  (orig 0x3292c0, call)
extern void callee_510430();
uint64_t sdk_f_3292c0(uint64_t a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_510430)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)((((uint32_t)a2)) & (1))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_329670  (orig 0x329670, call)
extern void callee_50ff20();
uint64_t sdk_f_329670() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_50ff20)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3298b0  (orig 0x3298b0, straight)
uint32_t sdk_f_3298b0(void* a0) {
    uint32_t k0 = 0;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 18) = (uint8_t)k0;
    return *(uint32_t*)((char*)(a0) + 20);
}

// sub_329960  (orig 0x329960, getter)
uint32_t sdk_f_329960(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_329970  (orig 0x329970, getter)
uint32_t sdk_f_329970(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_32a860  (orig 0x32a860, ret_only)
void sdk_f_32a860() {}

// sub_32b160  (orig 0x32b160, straight)
uint64_t sdk_f_32b160(uint64_t a0, uint64_t a1) { return ((((((uint64_t)a1)) + (((uint64_t)a0)) < 9223372036854775807)) ? ((((uint64_t)a1)) + (((uint64_t)a0))) : (9223372036854775807)); }

// sub_32b180  (orig 0x32b180, setter-chain)
void sdk_f_32b180(void* a0) { *(uint64_t*)((char*)(a0) + 32) = 0; *(uint8_t*)((char*)(a0) + 19) = 0; }

// sub_32b940  (orig 0x32b940, mov_ret)
uint32_t sdk_f_32b940() { return 0; }

// sub_32b950  (orig 0x32b950, mov_ret)
uint64_t sdk_f_32b950() { return 9223372036854775807; }

// sub_32bd10  (orig 0x32bd10, mov_ret)
uint32_t sdk_f_32bd10() { return 2; }

// sub_32bd20  (orig 0x32bd20, straight)
uint32_t sdk_f_32bd20(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 48));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(p0) + 20);
    return 1;
}

// sub_32bd40  (orig 0x32bd40, mov_ret)
uint32_t sdk_f_32bd40() { return 2; }

// sub_32bd50  (orig 0x32bd50, ret_only)
void sdk_f_32bd50() {}

// sub_32bd60  (orig 0x32bd60, mov_ret)
uint32_t sdk_f_32bd60() { return 2; }

// sub_32bd70  (orig 0x32bd70, straight)
uint32_t sdk_f_32bd70(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 48));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(p0) + 20);
    return 1;
}

// sub_32bfd0  (orig 0x32bfd0, mov_ret)
uint32_t sdk_f_32bfd0() { return 2; }

// sub_32bfe0  (orig 0x32bfe0, straight)
uint32_t sdk_f_32bfe0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 48);
    return 1;
}

// sub_32d770  (orig 0x32d770, call)
extern void callee_37ea14();
uint32_t sdk_f_32d770() {
    uint32_t r0 = ((((uint32_t (*)(void))&callee_37ea14)() == 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_32e060  (orig 0x32e060, call)
extern void callee_37ea1c();
uint32_t sdk_f_32e060(uint64_t unused0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint32_t r0 = ((((uint32_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_37ea1c)(((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3)))) == 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_32f160  (orig 0x32f160, setter)
void sdk_f_32f160(void* a0) { *(uint32_t*)((char*)(a0)) = 0; }

// sub_32f170  (orig 0x32f170, setter)
void sdk_f_32f170(void* a0) { *(uint32_t*)((char*)(a0)) = 0; }

// sub_32f760  (orig 0x32f760, setter)
void sdk_f_32f760(void* a0) { *(uint32_t*)((char*)(a0)) = 0; }

// sub_32f770  (orig 0x32f770, setter)
void sdk_f_32f770(void* a0) { *(uint32_t*)((char*)(a0)) = 0; }

// sub_332380  (orig 0x332380, setter)
void sdk_f_332380(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_332390  (orig 0x332390, setter)
void sdk_f_332390(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_332740  (orig 0x332740, compare)
bool sdk_f_332740(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_332750  (orig 0x332750, setter)
void sdk_f_332750(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_332760  (orig 0x332760, setter)
void sdk_f_332760(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_332810  (orig 0x332810, getter)
uint32_t sdk_f_332810(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_332820  (orig 0x332820, compare)
bool sdk_f_332820(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_3334c0  (orig 0x3334c0, mov_ret)
uint64_t sdk_f_3334c0() { return 0; }

// sub_333660  (orig 0x333660, ptr_add)
void* sdk_f_333660(void* a0) { return (char*)a0 + 32; }

// sub_3337d0  (orig 0x3337d0, ptr_add)
void* sdk_f_3337d0(void* a0) { return (char*)a0 + 8; }

// sub_3337e0  (orig 0x3337e0, straight)
void* sdk_f_3337e0(void* a0) { return (char*)(a0) - 24; }

// sub_333910  (orig 0x333910, ptr_add)
void* sdk_f_333910(void* a0) { return (char*)a0 + 32; }

// sub_333920  (orig 0x333920, call)
extern void callee_511510();
uint64_t sdk_f_333920(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333940  (orig 0x333940, call)
extern void callee_511510();
uint64_t sdk_f_333940(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1001)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333960  (orig 0x333960, call)
extern void callee_524870();
uint64_t sdk_f_333960(void* a0, uint64_t a1, void* a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524870)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)((((uint64_t)a3)) & (1))), ((uintptr_t)(1002)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333990  (orig 0x333990, call)
extern void callee_524870();
uint64_t sdk_f_333990(void* a0, uint64_t a1, void* a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524870)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)((((uint64_t)a3)) & (1))), ((uintptr_t)(1003)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3339c0  (orig 0x3339c0, call)
extern void callee_511510();
uint64_t sdk_f_3339c0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1004)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3339e0  (orig 0x3339e0, call)
extern void callee_511510();
uint64_t sdk_f_3339e0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1005)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333a00  (orig 0x333a00, call)
extern void callee_5114b0();
uint64_t sdk_f_333a00(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1006)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333a20  (orig 0x333a20, call)
extern void callee_511510();
uint64_t sdk_f_333a20(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1007)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333a40  (orig 0x333a40, call)
extern void callee_511510();
uint64_t sdk_f_333a40(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1008)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333a60  (orig 0x333a60, call)
extern void callee_511510();
uint64_t sdk_f_333a60(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1009)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333a80  (orig 0x333a80, call)
extern void callee_5114b0();
uint64_t sdk_f_333a80(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1010)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333aa0  (orig 0x333aa0, call)
extern void callee_511510();
uint64_t sdk_f_333aa0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1011)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333ac0  (orig 0x333ac0, call)
extern void callee_511390();
uint64_t sdk_f_333ac0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1012)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333ae0  (orig 0x333ae0, call)
extern void callee_511510();
uint64_t sdk_f_333ae0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1013)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333b00  (orig 0x333b00, call)
extern void callee_5117a0();
uint64_t sdk_f_333b00(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5117a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(1014)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333b30  (orig 0x333b30, call)
extern void callee_5151a0();
uint64_t sdk_f_333b30(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5151a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(1015)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333b60  (orig 0x333b60, call)
extern void callee_5117a0();
uint64_t sdk_f_333b60(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5117a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(1016)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333b90  (orig 0x333b90, call)
extern void callee_5114b0();
uint64_t sdk_f_333b90(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1031)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333bb0  (orig 0x333bb0, call)
extern void callee_511390();
uint64_t sdk_f_333bb0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1032)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333bd0  (orig 0x333bd0, call)
extern void callee_511780();
uint64_t sdk_f_333bd0(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(1033)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333c00  (orig 0x333c00, call)
extern void callee_524880();
uint64_t sdk_f_333c00(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524880)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(1034)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333c30  (orig 0x333c30, call)
extern void callee_523090();
uint64_t sdk_f_333c30(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_523090)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1035)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333c50  (orig 0x333c50, call)
extern void callee_524890();
uint64_t sdk_f_333c50(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_524890)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (16777215))), ((uintptr_t)(1036)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333c80  (orig 0x333c80, call)
extern void callee_511390();
uint64_t sdk_f_333c80(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1037)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333ca0  (orig 0x333ca0, call)
extern void callee_511780();
uint64_t sdk_f_333ca0(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(1038)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333cd0  (orig 0x333cd0, call)
extern void callee_511390();
uint64_t sdk_f_333cd0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1039)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333cf0  (orig 0x333cf0, call)
extern void callee_511670();
uint64_t sdk_f_333cf0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511670)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1042)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333d10  (orig 0x333d10, call)
extern void callee_511510();
uint64_t sdk_f_333d10(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1043)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333d30  (orig 0x333d30, call)
extern void callee_522040();
uint64_t sdk_f_333d30(void* a0, uint64_t a1, void* a2, uint32_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_522040)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)((*(uint64_t*)((char*)(a2) + 8)) << (4))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(1044)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333d70  (orig 0x333d70, call)
extern void callee_51b140();
uint64_t sdk_f_333d70(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51b140)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)((*(uint64_t*)((char*)(a1) + 8)) << (4))), ((uintptr_t)(1045)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333da0  (orig 0x333da0, call)
extern void callee_511510();
uint64_t sdk_f_333da0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1046)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333dc0  (orig 0x333dc0, call)
extern void callee_511670();
uint64_t sdk_f_333dc0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511670)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1047)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333de0  (orig 0x333de0, call)
extern void callee_511510();
uint64_t sdk_f_333de0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1048)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333e00  (orig 0x333e00, call)
extern void callee_511510();
uint64_t sdk_f_333e00(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1061)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333e20  (orig 0x333e20, call)
extern void callee_5114b0();
uint64_t sdk_f_333e20(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1062)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333e40  (orig 0x333e40, call)
extern void callee_512050();
uint64_t sdk_f_333e40(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512050)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(1063)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333e70  (orig 0x333e70, call)
extern void callee_511510();
uint64_t sdk_f_333e70(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1064)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333e90  (orig 0x333e90, call)
extern void callee_5114b0();
uint64_t sdk_f_333e90(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1065)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333eb0  (orig 0x333eb0, call)
extern void callee_5117a0();
uint64_t sdk_f_333eb0(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5117a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(1201)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333ee0  (orig 0x333ee0, call)
extern void callee_5117a0();
uint64_t sdk_f_333ee0(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5117a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(1202)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333f10  (orig 0x333f10, call)
extern void callee_5117a0();
uint64_t sdk_f_333f10(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5117a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(1203)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333f40  (orig 0x333f40, call)
extern void callee_51b4e0();
uint64_t sdk_f_333f40(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_51b4e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1204)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333f60  (orig 0x333f60, call)
extern void callee_5248a0();
uint64_t sdk_f_333f60(void* a0, uint64_t a1, uint64_t a2, void* a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5248a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(*(uint64_t*)((char*)(a3)))), ((uintptr_t)(*(uint64_t*)((char*)(a3) + 8))), ((uintptr_t)(1205)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333f90  (orig 0x333f90, call)
extern void callee_511390();
uint64_t sdk_f_333f90(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1206)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333fb0  (orig 0x333fb0, call)
extern void callee_511570();
uint64_t sdk_f_333fb0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511570)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1207)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_333fd0  (orig 0x333fd0, call)
extern void callee_5248b0();
uint64_t sdk_f_333fd0(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5248b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(1208)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334000  (orig 0x334000, call)
extern void callee_5114b0();
uint64_t sdk_f_334000(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1403)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334020  (orig 0x334020, call)
extern void callee_511520();
uint64_t sdk_f_334020(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511520)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1406)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334040  (orig 0x334040, call)
extern void callee_51a730();
uint64_t sdk_f_334040(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51a730)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(1411)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334090  (orig 0x334090, call)
extern void callee_51a680();
uint64_t sdk_f_334090(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51a680)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(1424)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3340b0  (orig 0x3340b0, call)
extern void callee_511500();
uint64_t sdk_f_3340b0(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_511500)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(((*(uint64_t*)((char*)(a2) + 8)) + (((*(uint64_t*)((char*)(a2) + 8)) << 1))) << (5))), ((uintptr_t)(1425)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3340e0  (orig 0x3340e0, call)
extern void callee_511570();
uint64_t sdk_f_3340e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511570)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1432)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334100  (orig 0x334100, call)
extern void callee_511510();
uint64_t sdk_f_334100(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1451)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334120  (orig 0x334120, call)
extern void callee_511510();
uint64_t sdk_f_334120(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1452)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334140  (orig 0x334140, call)
extern void callee_5114b0();
uint64_t sdk_f_334140(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1453)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334160  (orig 0x334160, call)
extern void callee_511520();
uint64_t sdk_f_334160(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511520)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1454)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334180  (orig 0x334180, call)
extern void callee_5114b0();
uint64_t sdk_f_334180(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1455)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3341a0  (orig 0x3341a0, call)
extern void callee_5248d0();
uint64_t sdk_f_3341a0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5248d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1456)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3341c0  (orig 0x3341c0, call)
extern void callee_511570();
uint64_t sdk_f_3341c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511570)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1457)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3341e0  (orig 0x3341e0, call)
extern void callee_5114b0();
uint64_t sdk_f_3341e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1458)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334200  (orig 0x334200, call)
extern void callee_511510();
uint64_t sdk_f_334200(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1471)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334220  (orig 0x334220, call)
extern void callee_511510();
uint64_t sdk_f_334220(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1472)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334240  (orig 0x334240, call)
extern void callee_511570();
uint64_t sdk_f_334240(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511570)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1473)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334260  (orig 0x334260, call)
extern void callee_511510();
uint64_t sdk_f_334260(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1474)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334280  (orig 0x334280, call)
extern void callee_5114b0();
uint64_t sdk_f_334280(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1601)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3342a0  (orig 0x3342a0, call)
extern void callee_5114b0();
uint64_t sdk_f_3342a0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1602)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3342c0  (orig 0x3342c0, call)
extern void callee_5123f0();
uint64_t sdk_f_3342c0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5123f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(1603)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3342e0  (orig 0x3342e0, call)
extern void callee_511670();
uint64_t sdk_f_3342e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511670)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1901)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334300  (orig 0x334300, call)
extern void callee_511510();
uint64_t sdk_f_334300(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1902)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334320  (orig 0x334320, call)
extern void callee_511390();
uint64_t sdk_f_334320(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1903)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334340  (orig 0x334340, call)
extern void callee_522040();
uint64_t sdk_f_334340(void* a0, uint64_t a1, void* a2, uint32_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_522040)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)((*(uint64_t*)((char*)(a2) + 8)) << (4))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(1904)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334380  (orig 0x334380, call)
extern void callee_51b140();
uint64_t sdk_f_334380(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51b140)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)((*(uint64_t*)((char*)(a1) + 8)) << (4))), ((uintptr_t)(1905)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3343b0  (orig 0x3343b0, call)
extern void callee_511670();
uint64_t sdk_f_3343b0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511670)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1906)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3343d0  (orig 0x3343d0, call)
extern void callee_511670();
uint64_t sdk_f_3343d0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511670)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1907)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3343f0  (orig 0x3343f0, call)
extern void callee_511510();
uint64_t sdk_f_3343f0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1908)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334410  (orig 0x334410, call)
extern void callee_511510();
uint64_t sdk_f_334410(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(1941)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334430  (orig 0x334430, call)
extern void callee_5248e0();
uint64_t sdk_f_334430(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5248e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1951)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334450  (orig 0x334450, call)
extern void callee_511520();
uint64_t sdk_f_334450(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511520)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1952)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334470  (orig 0x334470, call)
extern void callee_512050();
uint64_t sdk_f_334470(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512050)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(1953)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3344a0  (orig 0x3344a0, call)
extern void callee_5248f0();
uint64_t sdk_f_3344a0(void* a0, uint64_t a1, uint64_t a2, void* a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5248f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(*(uint64_t*)((char*)(a3)))), ((uintptr_t)(*(uint64_t*)((char*)(a3) + 8))), ((uintptr_t)(2001)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3344d0  (orig 0x3344d0, call)
extern void callee_524900();
uint64_t sdk_f_3344d0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524900)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(2002)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3344f0  (orig 0x3344f0, call)
extern void callee_524910();
uint64_t sdk_f_3344f0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524910)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(2003)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334510  (orig 0x334510, call)
extern void callee_524900();
uint64_t sdk_f_334510(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524900)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(2004)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334530  (orig 0x334530, call)
extern void callee_524920();
uint64_t sdk_f_334530(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524920)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(2005)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334550  (orig 0x334550, call)
extern void callee_524900();
uint64_t sdk_f_334550(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524900)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(2006)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334570  (orig 0x334570, call)
extern void callee_524930();
uint64_t sdk_f_334570(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524930)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)((((uint64_t)a3)) & (1))), ((uintptr_t)(2007)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3345a0  (orig 0x3345a0, call)
extern void callee_524940();
uint64_t sdk_f_3345a0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524940)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)((((uint64_t)a2)) & (1))), ((uintptr_t)(2008)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334690  (orig 0x334690, call)
extern void callee_524920();
uint64_t sdk_f_334690(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524920)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(2013)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3346b0  (orig 0x3346b0, call)
extern void callee_5122f0();
uint64_t sdk_f_3346b0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5122f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2014)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3346d0  (orig 0x3346d0, call)
extern void callee_524990();
uint64_t sdk_f_3346d0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524990)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(2015)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3346f0  (orig 0x3346f0, call)
extern void callee_5249a0();
uint64_t sdk_f_3346f0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5249a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)((((uint64_t)a4)) & (1))), ((uintptr_t)(2016)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_334720  (orig 0x334720, ptr_add)
void* sdk_f_334720(void* a0) { return (char*)a0 + 8; }

// sub_334730  (orig 0x334730, straight)
void* sdk_f_334730(void* a0) { return (char*)(a0) - 24; }

// sub_337710  (orig 0x337710, ptr_add)
void* sdk_f_337710(void* a0) { return (char*)a0 + 16; }

// sub_337750  (orig 0x337750, call)
extern void callee_5249f0();
uint64_t sdk_f_337750(void* a0, uint32_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5249f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_337780  (orig 0x337780, call)
extern void callee_5249f0();
uint64_t sdk_f_337780(void* a0, uint32_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5249f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3377b0  (orig 0x3377b0, call)
extern void callee_5249f0();
uint64_t sdk_f_3377b0(void* a0, uint32_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5249f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3377e0  (orig 0x3377e0, call)
extern void callee_5126d0();
uint64_t sdk_f_3377e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3378c0  (orig 0x3378c0, ptr_add)
void* sdk_f_3378c0(void* a0) { return (char*)a0 + 8; }

// sub_3378d0  (orig 0x3378d0, straight)
void* sdk_f_3378d0(void* a0) { return (char*)(a0) - 8; }

// sub_338d90  (orig 0x338d90, straight)
uint64_t sdk_f_338d90(uint64_t a0, uint64_t a1) { return (((((uint64_t)a0) != 0) ? 1 : 0)) | (((((uint64_t)a1) == 0) ? 1 : 0)); }

// sub_339b90  (orig 0x339b90, setter-chain)
void sdk_f_339b90(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 40) = 0; *(uint64_t*)((char*)(a0) + 48) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; }

// sub_33a420  (orig 0x33a420, getter)
uint64_t sdk_f_33a420(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_33a430  (orig 0x33a430, setter-chain)
void sdk_f_33a430(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 48) = 0; *(uint64_t*)((char*)(a0) + 56) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 40) = 0; }

// sub_33a9c0  (orig 0x33a9c0, straight)
uint64_t sdk_f_33a9c0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 32) = *(uint64_t*)((char*)(a1));
    return 0;
}

// sub_33ad70  (orig 0x33ad70, getter)
uint64_t sdk_f_33ad70(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_33b8a0  (orig 0x33b8a0, ptr_add)
void* sdk_f_33b8a0(void* a0) { return (char*)a0 + 32; }

// sub_33b9b0  (orig 0x33b9b0, call)
extern void callee_511510();
uint64_t sdk_f_33b9b0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(10200)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33b9d0  (orig 0x33b9d0, call)
extern void callee_511390();
uint64_t sdk_f_33b9d0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(10300)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33b9f0  (orig 0x33b9f0, call)
extern void callee_524c70();
uint64_t sdk_f_33b9f0(void* a0, void* a1, uint64_t a2, void* a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524c70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(*(uint64_t*)((char*)(a3)))), ((uintptr_t)(*(uint64_t*)((char*)(a3) + 8))), ((uintptr_t)(20100)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33ba70  (orig 0x33ba70, call)
extern void callee_511670();
uint64_t sdk_f_33ba70(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511670)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(20200)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33ba90  (orig 0x33ba90, call)
extern void callee_511510();
uint64_t sdk_f_33ba90(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(30100)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33bab0  (orig 0x33bab0, call)
extern void callee_511510();
uint64_t sdk_f_33bab0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(30200)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33bad0  (orig 0x33bad0, call)
extern void callee_5120a0();
uint64_t sdk_f_33bad0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5120a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(30300)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33baf0  (orig 0x33baf0, call)
extern void callee_524c90();
uint64_t sdk_f_33baf0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524c90)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(408)), ((uintptr_t)(30400)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33bb20  (orig 0x33bb20, call)
extern void callee_511500();
uint64_t sdk_f_33bb20(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_511500)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)((*(uint64_t*)((char*)(a2) + 8)) << (2))), ((uintptr_t)(30401)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33bb50  (orig 0x33bb50, call)
extern void callee_511510();
uint64_t sdk_f_33bb50(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(30500)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33bb70  (orig 0x33bb70, call)
extern void callee_5114b0();
uint64_t sdk_f_33bb70(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(40100)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33bb90  (orig 0x33bb90, call)
extern void callee_512050();
uint64_t sdk_f_33bb90(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512050)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(40101)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33bbc0  (orig 0x33bbc0, call)
extern void callee_51b430();
uint64_t sdk_f_33bbc0(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51b430)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(90100)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33bbf0  (orig 0x33bbf0, ptr_add)
void* sdk_f_33bbf0(void* a0) { return (char*)a0 + 8; }

// sub_33bc00  (orig 0x33bc00, straight)
void* sdk_f_33bc00(void* a0) { return (char*)(a0) - 24; }

// sub_33c760  (orig 0x33c760, straight)
uint32_t sdk_f_33c760(uint32_t a0) { return (((uint32_t)a0)) & (511); }

// sub_33c770  (orig 0x33c770, straight)
uint32_t sdk_f_33c770(uint32_t a0) { return ((((uint32_t)a0)) >> (9)) & (8191); }

// sub_33c780  (orig 0x33c780, compare)
bool sdk_f_33c780(uint64_t a0) { return (uint32_t)(a0) == (uint64_t)(0); }

// sub_33c790  (orig 0x33c790, compare)
bool sdk_f_33c790(uint64_t a0) { return (uint32_t)(a0) != (uint64_t)(0); }

// sub_33c7a0  (orig 0x33c7a0, mov_ret)
uint64_t sdk_f_33c7a0() { return 0; }

// sub_33ccf0  (orig 0x33ccf0, ret_only)
void sdk_f_33ccf0() {}

// sub_33d0a0  (orig 0x33d0a0, call)
extern void callee_524d20();
uint64_t sdk_f_33d0a0(uint64_t a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4, uint32_t a5) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524d20)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(((uint64_t)a4))), ((uintptr_t)((((uint32_t)a5)) & (1))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33d510  (orig 0x33d510, ptr_add)
void* sdk_f_33d510(void* a0) { return (char*)a0 + 16; }

// sub_33d540  (orig 0x33d540, call)
extern void callee_515b10();
uint64_t sdk_f_33d540(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_515b10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33d560  (orig 0x33d560, call)
extern void callee_524d80();
uint64_t sdk_f_33d560(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524d80)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33d580  (orig 0x33d580, call)
extern void callee_515b10();
uint64_t sdk_f_33d580(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_515b10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33d5a0  (orig 0x33d5a0, call)
extern void callee_524d90();
uint64_t sdk_f_33d5a0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524d90)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33d5c0  (orig 0x33d5c0, call)
extern void callee_524da0();
uint64_t sdk_f_33d5c0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524da0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(((uint64_t)a4))), ((uintptr_t)(10)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_33d5e0  (orig 0x33d5e0, ptr_add)
void* sdk_f_33d5e0(void* a0) { return (char*)a0 + 8; }

// sub_33d5f0  (orig 0x33d5f0, straight)
void* sdk_f_33d5f0(void* a0) { return (char*)(a0) - 8; }

// sub_340440  (orig 0x340440, ptr_add)
void* sdk_f_340440(void* a0) { return (char*)a0 + 16; }

// sub_340570  (orig 0x340570, call)
extern void callee_524f40();
uint64_t sdk_f_340570(void* a0, uint64_t a1, void* a2, uint32_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524f40)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(10)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3405a0  (orig 0x3405a0, call)
extern void callee_512780();
uint64_t sdk_f_3405a0(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(11)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3405d0  (orig 0x3405d0, call)
extern void callee_512760();
uint64_t sdk_f_3405d0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(20)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_340600  (orig 0x340600, call)
extern void callee_516f00();
uint64_t sdk_f_340600(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_516f00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)((*(uint64_t*)((char*)(a1) + 8)) << (8))), ((uintptr_t)(21)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_340630  (orig 0x340630, call)
extern void callee_524f50();
uint64_t sdk_f_340630(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524f50)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(256)), ((uintptr_t)(22)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_340660  (orig 0x340660, ptr_add)
void* sdk_f_340660(void* a0) { return (char*)a0 + 8; }

// sub_340670  (orig 0x340670, straight)
void* sdk_f_340670(void* a0) { return (char*)(a0) - 8; }

// sub_340f10  (orig 0x340f10, ptr_add)
void* sdk_f_340f10(void* a0) { return (char*)a0 + 16; }

// sub_340f40  (orig 0x340f40, call)
extern void callee_5127d0();
uint64_t sdk_f_340f40(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5127d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_340f60  (orig 0x340f60, call)
extern void callee_51dff0();
uint64_t sdk_f_340f60(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51dff0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_340f90  (orig 0x340f90, ptr_add)
void* sdk_f_340f90(void* a0) { return (char*)a0 + 8; }

// sub_340fa0  (orig 0x340fa0, straight)
void* sdk_f_340fa0(void* a0) { return (char*)(a0) - 8; }

// sub_341640  (orig 0x341640, ptr_add)
void* sdk_f_341640(void* a0) { return (char*)a0 + 16; }

// sub_341670  (orig 0x341670, call)
extern void callee_516f00();
uint64_t sdk_f_341670(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_516f00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)((*(uint64_t*)((char*)(a1) + 8)) * (432))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3416a0  (orig 0x3416a0, call)
extern void callee_5129b0();
uint64_t sdk_f_3416a0(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5129b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)((*(uint64_t*)((char*)(a2) + 8)) * (432))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3416d0  (orig 0x3416d0, call)
extern void callee_524f70();
uint64_t sdk_f_3416d0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524f70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(256)), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341700  (orig 0x341700, call)
extern void callee_524f70();
uint64_t sdk_f_341700(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524f70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(256)), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341730  (orig 0x341730, call)
extern void callee_524f80();
uint64_t sdk_f_341730(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_524f80)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(5)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341750  (orig 0x341750, call)
extern void callee_512710();
uint64_t sdk_f_341750(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(7)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341770  (orig 0x341770, call)
extern void callee_512760();
uint64_t sdk_f_341770(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(8)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3417a0  (orig 0x3417a0, call)
extern void callee_524f90();
uint64_t sdk_f_3417a0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_524f90)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(9)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3417c0  (orig 0x3417c0, call)
extern void callee_524fa0();
uint64_t sdk_f_3417c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_524fa0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(10)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3417e0  (orig 0x3417e0, call)
extern void callee_516f00();
uint64_t sdk_f_3417e0(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_516f00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)((*(uint64_t*)((char*)(a1) + 8)) << (9))), ((uintptr_t)(11)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341810  (orig 0x341810, call)
extern void callee_5129b0();
uint64_t sdk_f_341810(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5129b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)((*(uint64_t*)((char*)(a2) + 8)) << (9))), ((uintptr_t)(12)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341840  (orig 0x341840, call)
extern void callee_512b70();
uint64_t sdk_f_341840(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512b70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(13)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341860  (orig 0x341860, call)
extern void callee_524fb0();
uint64_t sdk_f_341860(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_524fb0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(14)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341880  (orig 0x341880, call)
extern void callee_51f9f0();
uint64_t sdk_f_341880(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_51f9f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(15)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3418a0  (orig 0x3418a0, call)
extern void callee_524fc0();
uint64_t sdk_f_3418a0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_524fc0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(16)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3418c0  (orig 0x3418c0, call)
extern void callee_5126e0();
uint64_t sdk_f_3418c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(17)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3418e0  (orig 0x3418e0, call)
extern void callee_512780();
uint64_t sdk_f_3418e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (4294967295))), ((uintptr_t)(18)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341910  (orig 0x341910, call)
extern void callee_51de20();
uint64_t sdk_f_341910(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51de20)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(19)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341940  (orig 0x341940, call)
extern void callee_524fd0();
uint64_t sdk_f_341940(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524fd0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(20)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341970  (orig 0x341970, call)
extern void callee_5129b0();
uint64_t sdk_f_341970(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5129b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(((*(uint64_t*)((char*)(a2) + 8)) + (((*(uint64_t*)((char*)(a2) + 8)) << 1))) << (4))), ((uintptr_t)(21)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3419a0  (orig 0x3419a0, call)
extern void callee_516f00();
uint64_t sdk_f_3419a0(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_516f00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(((*(uint64_t*)((char*)(a1) + 8)) + (((*(uint64_t*)((char*)(a1) + 8)) << 1))) << (4))), ((uintptr_t)(22)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3419d0  (orig 0x3419d0, call)
extern void callee_5126e0();
uint64_t sdk_f_3419d0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(23)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3419f0  (orig 0x3419f0, call)
extern void callee_512780();
uint64_t sdk_f_3419f0(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(24)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341a20  (orig 0x341a20, call)
extern void callee_512710();
uint64_t sdk_f_341a20(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(25)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341a40  (orig 0x341a40, call)
extern void callee_512760();
uint64_t sdk_f_341a40(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(26)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341a70  (orig 0x341a70, call)
extern void callee_512710();
uint64_t sdk_f_341a70(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(27)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341a90  (orig 0x341a90, call)
extern void callee_512760();
uint64_t sdk_f_341a90(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(28)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341ac0  (orig 0x341ac0, call)
extern void callee_524fe0();
uint64_t sdk_f_341ac0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_524fe0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(29)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341ae0  (orig 0x341ae0, call)
extern void callee_51db70();
uint64_t sdk_f_341ae0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_51db70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(30)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341b00  (orig 0x341b00, call)
extern void callee_5129b0();
uint64_t sdk_f_341b00(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5129b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(((*(uint64_t*)((char*)(a2) + 8)) + (((*(uint64_t*)((char*)(a2) + 8)) << 1))) << (3))), ((uintptr_t)(31)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341b30  (orig 0x341b30, call)
extern void callee_516f00();
uint64_t sdk_f_341b30(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_516f00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(((*(uint64_t*)((char*)(a1) + 8)) + (((*(uint64_t*)((char*)(a1) + 8)) << 1))) << (3))), ((uintptr_t)(32)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341b60  (orig 0x341b60, call)
extern void callee_5126e0();
uint64_t sdk_f_341b60(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(35)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341c30  (orig 0x341c30, call)
extern void callee_512960();
uint64_t sdk_f_341c30(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512960)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(39)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341c50  (orig 0x341c50, call)
extern void callee_525010();
uint64_t sdk_f_341c50(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525010)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(40)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341c70  (orig 0x341c70, call)
extern void callee_524f70();
uint64_t sdk_f_341c70(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_524f70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(256)), ((uintptr_t)(41)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341ca0  (orig 0x341ca0, call)
extern void callee_525020();
uint64_t sdk_f_341ca0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_525020)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(256)), ((uintptr_t)(42)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341cd0  (orig 0x341cd0, call)
extern void callee_512de0();
uint64_t sdk_f_341cd0(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512de0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(43)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341d00  (orig 0x341d00, call)
extern void callee_5128b0();
uint64_t sdk_f_341d00(void* a0, uint32_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5128b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(44)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341d30  (orig 0x341d30, call)
extern void callee_512710();
uint64_t sdk_f_341d30(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(45)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341d50  (orig 0x341d50, call)
extern void callee_512760();
uint64_t sdk_f_341d50(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(46)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341d80  (orig 0x341d80, call)
extern void callee_512710();
uint64_t sdk_f_341d80(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(47)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341da0  (orig 0x341da0, call)
extern void callee_512760();
uint64_t sdk_f_341da0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(48)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341dd0  (orig 0x341dd0, call)
extern void callee_5126f0();
uint64_t sdk_f_341dd0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(49)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341df0  (orig 0x341df0, call)
extern void callee_512a70();
uint64_t sdk_f_341df0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512a70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(50)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341e10  (orig 0x341e10, call)
extern void callee_5127d0();
uint64_t sdk_f_341e10(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5127d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(51)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341e30  (orig 0x341e30, call)
extern void callee_5127d0();
uint64_t sdk_f_341e30(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5127d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(52)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341e50  (orig 0x341e50, call)
extern void callee_525030();
uint64_t sdk_f_341e50(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525030)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(53)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341e70  (orig 0x341e70, call)
extern void callee_525040();
uint64_t sdk_f_341e70(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525040)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(54)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341e90  (orig 0x341e90, call)
extern void callee_5127d0();
uint64_t sdk_f_341e90(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5127d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(55)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341eb0  (orig 0x341eb0, call)
extern void callee_51dff0();
uint64_t sdk_f_341eb0(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51dff0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(56)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341ee0  (orig 0x341ee0, call)
extern void callee_512780();
uint64_t sdk_f_341ee0(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(57)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341f10  (orig 0x341f10, call)
extern void callee_51f9f0();
uint64_t sdk_f_341f10(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_51f9f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(58)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341f30  (orig 0x341f30, call)
extern void callee_524fc0();
uint64_t sdk_f_341f30(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_524fc0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(59)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341f50  (orig 0x341f50, call)
extern void callee_512710();
uint64_t sdk_f_341f50(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(60)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341f70  (orig 0x341f70, call)
extern void callee_512760();
uint64_t sdk_f_341f70(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(61)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341fa0  (orig 0x341fa0, call)
extern void callee_512710();
uint64_t sdk_f_341fa0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(62)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341fc0  (orig 0x341fc0, call)
extern void callee_5126e0();
uint64_t sdk_f_341fc0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(63)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_341fe0  (orig 0x341fe0, call)
extern void callee_512780();
uint64_t sdk_f_341fe0(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(64)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342010  (orig 0x342010, call)
extern void callee_512710();
uint64_t sdk_f_342010(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(65)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342030  (orig 0x342030, call)
extern void callee_512760();
uint64_t sdk_f_342030(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(66)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342060  (orig 0x342060, call)
extern void callee_525050();
uint64_t sdk_f_342060(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525050)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(67)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342080  (orig 0x342080, call)
extern void callee_525050();
uint64_t sdk_f_342080(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525050)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(68)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3420a0  (orig 0x3420a0, call)
extern void callee_512710();
uint64_t sdk_f_3420a0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(69)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3420c0  (orig 0x3420c0, call)
extern void callee_512760();
uint64_t sdk_f_3420c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(70)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3420f0  (orig 0x3420f0, call)
extern void callee_525060();
uint64_t sdk_f_3420f0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525060)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(71)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342110  (orig 0x342110, call)
extern void callee_525070();
uint64_t sdk_f_342110(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525070)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(72)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342130  (orig 0x342130, call)
extern void callee_512710();
uint64_t sdk_f_342130(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(73)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342150  (orig 0x342150, call)
extern void callee_512760();
uint64_t sdk_f_342150(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(74)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342180  (orig 0x342180, call)
extern void callee_51f9f0();
uint64_t sdk_f_342180(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_51f9f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(75)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3421a0  (orig 0x3421a0, call)
extern void callee_524fc0();
uint64_t sdk_f_3421a0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_524fc0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(76)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3421c0  (orig 0x3421c0, call)
extern void callee_525080();
uint64_t sdk_f_3421c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_525080)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(128)), ((uintptr_t)(77)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3421f0  (orig 0x3421f0, call)
extern void callee_525090();
uint64_t sdk_f_3421f0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_525090)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(128)), ((uintptr_t)(78)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342220  (orig 0x342220, call)
extern void callee_5126e0();
uint64_t sdk_f_342220(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(79)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342240  (orig 0x342240, call)
extern void callee_5126e0();
uint64_t sdk_f_342240(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(80)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342260  (orig 0x342260, call)
extern void callee_512780();
uint64_t sdk_f_342260(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(81)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342290  (orig 0x342290, call)
extern void callee_5126d0();
uint64_t sdk_f_342290(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(82)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3422b0  (orig 0x3422b0, call)
extern void callee_512990();
uint64_t sdk_f_3422b0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512990)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(83)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3422d0  (orig 0x3422d0, call)
extern void callee_525050();
uint64_t sdk_f_3422d0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525050)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(84)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3422f0  (orig 0x3422f0, call)
extern void callee_5250a0();
uint64_t sdk_f_3422f0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5250a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(85)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342310  (orig 0x342310, call)
extern void callee_524fe0();
uint64_t sdk_f_342310(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_524fe0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(86)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342330  (orig 0x342330, call)
extern void callee_51db70();
uint64_t sdk_f_342330(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_51db70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(87)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342350  (orig 0x342350, call)
extern void callee_512710();
uint64_t sdk_f_342350(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(88)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342370  (orig 0x342370, call)
extern void callee_512760();
uint64_t sdk_f_342370(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(89)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3423a0  (orig 0x3423a0, call)
extern void callee_512b70();
uint64_t sdk_f_3423a0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512b70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(90)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3423c0  (orig 0x3423c0, call)
extern void callee_5128a0();
uint64_t sdk_f_3423c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(91)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3423e0  (orig 0x3423e0, call)
extern void callee_5127d0();
uint64_t sdk_f_3423e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5127d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(92)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342400  (orig 0x342400, call)
extern void callee_5126d0();
uint64_t sdk_f_342400(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(93)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342420  (orig 0x342420, call)
extern void callee_512990();
uint64_t sdk_f_342420(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512990)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(94)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342440  (orig 0x342440, call)
extern void callee_512710();
uint64_t sdk_f_342440(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(95)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342460  (orig 0x342460, call)
extern void callee_512760();
uint64_t sdk_f_342460(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(96)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342490  (orig 0x342490, call)
extern void callee_5129b0();
uint64_t sdk_f_342490(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5129b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)((*(uint64_t*)((char*)(a2) + 8)) * (41))), ((uintptr_t)(97)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3424c0  (orig 0x3424c0, call)
extern void callee_516f00();
uint64_t sdk_f_3424c0(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_516f00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)((*(uint64_t*)((char*)(a1) + 8)) * (41))), ((uintptr_t)(98)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3424f0  (orig 0x3424f0, call)
extern void callee_512710();
uint64_t sdk_f_3424f0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(99)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342510  (orig 0x342510, call)
extern void callee_512760();
uint64_t sdk_f_342510(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(100)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342540  (orig 0x342540, call)
extern void callee_512710();
uint64_t sdk_f_342540(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(101)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342560  (orig 0x342560, call)
extern void callee_512760();
uint64_t sdk_f_342560(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(102)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342590  (orig 0x342590, call)
extern void callee_512710();
uint64_t sdk_f_342590(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(103)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3425b0  (orig 0x3425b0, call)
extern void callee_512760();
uint64_t sdk_f_3425b0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(104)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3425e0  (orig 0x3425e0, call)
extern void callee_5128a0();
uint64_t sdk_f_3425e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(105)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342600  (orig 0x342600, call)
extern void callee_5127d0();
uint64_t sdk_f_342600(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5127d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(106)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342620  (orig 0x342620, call)
extern void callee_5250b0();
uint64_t sdk_f_342620(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5250b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(107)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342640  (orig 0x342640, call)
extern void callee_5250c0();
uint64_t sdk_f_342640(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5250c0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(108)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342660  (orig 0x342660, call)
extern void callee_5126e0();
uint64_t sdk_f_342660(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(109)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342680  (orig 0x342680, call)
extern void callee_512780();
uint64_t sdk_f_342680(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(110)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3426b0  (orig 0x3426b0, call)
extern void callee_512710();
uint64_t sdk_f_3426b0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(111)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3426d0  (orig 0x3426d0, call)
extern void callee_512760();
uint64_t sdk_f_3426d0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(112)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342700  (orig 0x342700, call)
extern void callee_512710();
uint64_t sdk_f_342700(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(113)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342720  (orig 0x342720, call)
extern void callee_512760();
uint64_t sdk_f_342720(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(114)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342750  (orig 0x342750, call)
extern void callee_512710();
uint64_t sdk_f_342750(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(115)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342770  (orig 0x342770, call)
extern void callee_512760();
uint64_t sdk_f_342770(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(116)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3427a0  (orig 0x3427a0, call)
extern void callee_512710();
uint64_t sdk_f_3427a0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(117)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3427c0  (orig 0x3427c0, call)
extern void callee_512760();
uint64_t sdk_f_3427c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(118)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3427f0  (orig 0x3427f0, call)
extern void callee_5250d0();
uint64_t sdk_f_3427f0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5250d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)((((uint64_t)a4)) & (1))), ((uintptr_t)(119)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342820  (orig 0x342820, call)
extern void callee_5126e0();
uint64_t sdk_f_342820(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(120)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342840  (orig 0x342840, call)
extern void callee_512780();
uint64_t sdk_f_342840(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(121)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342870  (orig 0x342870, call)
extern void callee_5126e0();
uint64_t sdk_f_342870(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(122)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342890  (orig 0x342890, call)
extern void callee_512780();
uint64_t sdk_f_342890(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (4294967295))), ((uintptr_t)(123)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3428c0  (orig 0x3428c0, call)
extern void callee_5126e0();
uint64_t sdk_f_3428c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(124)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3428e0  (orig 0x3428e0, call)
extern void callee_512780();
uint64_t sdk_f_3428e0(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(125)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342910  (orig 0x342910, call)
extern void callee_5126e0();
uint64_t sdk_f_342910(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(126)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342930  (orig 0x342930, call)
extern void callee_512780();
uint64_t sdk_f_342930(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (4294967295))), ((uintptr_t)(127)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342960  (orig 0x342960, call)
extern void callee_525060();
uint64_t sdk_f_342960(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525060)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(128)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342980  (orig 0x342980, call)
extern void callee_525070();
uint64_t sdk_f_342980(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525070)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(129)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3429a0  (orig 0x3429a0, call)
extern void callee_525060();
uint64_t sdk_f_3429a0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525060)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(130)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3429c0  (orig 0x3429c0, call)
extern void callee_525070();
uint64_t sdk_f_3429c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525070)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(131)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3429e0  (orig 0x3429e0, call)
extern void callee_5250e0();
uint64_t sdk_f_3429e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5250e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(132)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342a00  (orig 0x342a00, call)
extern void callee_5250f0();
uint64_t sdk_f_342a00(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5250f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(133)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342a20  (orig 0x342a20, call)
extern void callee_5250e0();
uint64_t sdk_f_342a20(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5250e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(134)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342a40  (orig 0x342a40, call)
extern void callee_5250f0();
uint64_t sdk_f_342a40(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5250f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(135)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342a60  (orig 0x342a60, call)
extern void callee_5126e0();
uint64_t sdk_f_342a60(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(136)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342a80  (orig 0x342a80, call)
extern void callee_512780();
uint64_t sdk_f_342a80(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(137)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342ab0  (orig 0x342ab0, call)
extern void callee_512710();
uint64_t sdk_f_342ab0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(138)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342ad0  (orig 0x342ad0, call)
extern void callee_5129b0();
uint64_t sdk_f_342ad0(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5129b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)((*(uint64_t*)((char*)(a2) + 8)) << (8))), ((uintptr_t)(139)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342b00  (orig 0x342b00, call)
extern void callee_5238f0();
uint64_t sdk_f_342b00(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5238f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(256)), ((uintptr_t)(140)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342b30  (orig 0x342b30, call)
extern void callee_512710();
uint64_t sdk_f_342b30(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(141)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342b50  (orig 0x342b50, call)
extern void callee_512760();
uint64_t sdk_f_342b50(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(142)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342b80  (orig 0x342b80, call)
extern void callee_516f00();
uint64_t sdk_f_342b80(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_516f00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)((*(uint64_t*)((char*)(a1) + 8)) << (7))), ((uintptr_t)(143)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342bb0  (orig 0x342bb0, call)
extern void callee_5129b0();
uint64_t sdk_f_342bb0(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5129b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)((*(uint64_t*)((char*)(a2) + 8)) << (7))), ((uintptr_t)(144)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342be0  (orig 0x342be0, call)
extern void callee_525060();
uint64_t sdk_f_342be0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525060)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(145)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342c00  (orig 0x342c00, call)
extern void callee_525070();
uint64_t sdk_f_342c00(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525070)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(146)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342c20  (orig 0x342c20, call)
extern void callee_5250e0();
uint64_t sdk_f_342c20(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5250e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(147)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342c40  (orig 0x342c40, call)
extern void callee_5250f0();
uint64_t sdk_f_342c40(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5250f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(148)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342c60  (orig 0x342c60, call)
extern void callee_525100();
uint64_t sdk_f_342c60(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525100)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(149)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342c80  (orig 0x342c80, call)
extern void callee_525110();
uint64_t sdk_f_342c80(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525110)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(150)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342ca0  (orig 0x342ca0, call)
extern void callee_525120();
uint64_t sdk_f_342ca0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525120)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(151)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342cc0  (orig 0x342cc0, call)
extern void callee_525110();
uint64_t sdk_f_342cc0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525110)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(152)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342ce0  (orig 0x342ce0, call)
extern void callee_525120();
uint64_t sdk_f_342ce0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525120)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(153)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342d00  (orig 0x342d00, call)
extern void callee_5129b0();
uint64_t sdk_f_342d00(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5129b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(((*(uint64_t*)((char*)(a2) + 8)) + (((*(uint64_t*)((char*)(a2) + 8)) << 1))) << (3))), ((uintptr_t)(154)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342d30  (orig 0x342d30, call)
extern void callee_516f00();
uint64_t sdk_f_342d30(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_516f00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(((*(uint64_t*)((char*)(a1) + 8)) + (((*(uint64_t*)((char*)(a1) + 8)) << 1))) << (3))), ((uintptr_t)(155)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342d60  (orig 0x342d60, call)
extern void callee_512710();
uint64_t sdk_f_342d60(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(156)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342d80  (orig 0x342d80, call)
extern void callee_512760();
uint64_t sdk_f_342d80(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(157)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342db0  (orig 0x342db0, call)
extern void callee_512710();
uint64_t sdk_f_342db0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(162)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342dd0  (orig 0x342dd0, call)
extern void callee_512760();
uint64_t sdk_f_342dd0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (255))), ((uintptr_t)(163)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342e00  (orig 0x342e00, call)
extern void callee_512710();
uint64_t sdk_f_342e00(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(164)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342e20  (orig 0x342e20, call)
extern void callee_512760();
uint64_t sdk_f_342e20(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(165)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342e50  (orig 0x342e50, call)
extern void callee_512710();
uint64_t sdk_f_342e50(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(166)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342e70  (orig 0x342e70, call)
extern void callee_512760();
uint64_t sdk_f_342e70(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(167)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342ea0  (orig 0x342ea0, call)
extern void callee_525130();
uint64_t sdk_f_342ea0(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_525130)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(168)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342ed0  (orig 0x342ed0, call)
extern void callee_525140();
uint64_t sdk_f_342ed0(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_525140)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(169)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342f00  (orig 0x342f00, call)
extern void callee_5126e0();
uint64_t sdk_f_342f00(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(170)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342f20  (orig 0x342f20, call)
extern void callee_512780();
uint64_t sdk_f_342f20(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(171)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342f50  (orig 0x342f50, call)
extern void callee_5126e0();
uint64_t sdk_f_342f50(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(172)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342f70  (orig 0x342f70, call)
extern void callee_512780();
uint64_t sdk_f_342f70(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(173)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342fa0  (orig 0x342fa0, call)
extern void callee_5127d0();
uint64_t sdk_f_342fa0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5127d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(175)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342fc0  (orig 0x342fc0, call)
extern void callee_5128a0();
uint64_t sdk_f_342fc0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(176)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_342fe0  (orig 0x342fe0, call)
extern void callee_512b70();
uint64_t sdk_f_342fe0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512b70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(177)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_343000  (orig 0x343000, call)
extern void callee_524fb0();
uint64_t sdk_f_343000(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_524fb0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(178)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_343020  (orig 0x343020, ptr_add)
void* sdk_f_343020(void* a0) { return (char*)a0 + 8; }

// sub_343030  (orig 0x343030, straight)
void* sdk_f_343030(void* a0) { return (char*)(a0) - 8; }

// sub_347cf0  (orig 0x347cf0, mov_ret)
uint32_t sdk_f_347cf0() { return 24938; }

// sub_347d00  (orig 0x347d00, straight)
uint64_t sdk_f_347d00() { return 357911326309; }

// sub_347d10  (orig 0x347d10, mov_ret)
uint32_t sdk_f_347d10() { return 29286; }

// sub_347d20  (orig 0x347d20, mov_ret)
uint32_t sdk_f_347d20() { return 25956; }

// sub_347d30  (orig 0x347d30, mov_ret)
uint32_t sdk_f_347d30() { return 29801; }

// sub_347d40  (orig 0x347d40, mov_ret)
uint32_t sdk_f_347d40() { return 29541; }

// sub_347d50  (orig 0x347d50, straight)
uint64_t sdk_f_347d50() { return 336134498426; }

// sub_347d60  (orig 0x347d60, mov_ret)
uint32_t sdk_f_347d60() { return 28523; }

// sub_347d70  (orig 0x347d70, mov_ret)
uint32_t sdk_f_347d70() { return 27758; }

// sub_347d80  (orig 0x347d80, mov_ret)
uint32_t sdk_f_347d80() { return 29808; }

// sub_347d90  (orig 0x347d90, mov_ret)
uint32_t sdk_f_347d90() { return 30066; }

// sub_347da0  (orig 0x347da0, straight)
uint64_t sdk_f_347da0() { return 375074416762; }

// sub_347db0  (orig 0x347db0, straight)
uint64_t sdk_f_347db0() { return 284662001253; }

// sub_347dc0  (orig 0x347dc0, straight)
uint64_t sdk_f_347dc0() { return 280299926118; }

// sub_347dd0  (orig 0x347dd0, straight)
uint64_t sdk_f_347dd0() { return 62883491574629; }

// sub_347de0  (orig 0x347de0, straight)
uint64_t sdk_f_347de0() { return 32490986423543930; }

// sub_347e00  (orig 0x347e00, straight)
uint64_t sdk_f_347e00() { return 32772461400254586; }

// sub_348220  (orig 0x348220, call)
extern void callee_5257c0();
uint32_t sdk_f_348220() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&callee_5257c0)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_348240  (orig 0x348240, call)
extern void callee_522860();
uint32_t sdk_f_348240() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&callee_522860)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_34d4f0  (orig 0x34d4f0, call)
extern void callee_525f10();
uint64_t sdk_f_34d4f0(uint32_t a0) {
    uint64_t f_34d4f0__r0 = ((uint64_t (*)(uintptr_t))&callee_525f10)(((uintptr_t)((((uint32_t)a0)) & (255))));
    uint64_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_3515d0  (orig 0x3515d0, ptr_add)
void* sdk_f_3515d0(void* a0) { return (char*)a0 + 16; }

// sub_351600  (orig 0x351600, call)
extern void callee_525f30();
uint64_t sdk_f_351600(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525f30)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351620  (orig 0x351620, call)
extern void callee_525f40();
uint64_t sdk_f_351620(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525f40)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351640  (orig 0x351640, call)
extern void callee_525f40();
uint64_t sdk_f_351640(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525f40)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351660  (orig 0x351660, call)
extern void callee_525f40();
uint64_t sdk_f_351660(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525f40)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351680  (orig 0x351680, call)
extern void callee_525f40();
uint64_t sdk_f_351680(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525f40)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(5)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3516a0  (orig 0x3516a0, call)
extern void callee_525f20();
uint64_t sdk_f_3516a0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525f20)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(6)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3516c0  (orig 0x3516c0, call)
extern void callee_5126e0();
uint64_t sdk_f_3516c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(7)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3516e0  (orig 0x3516e0, call)
extern void callee_5152b0();
uint64_t sdk_f_3516e0(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5152b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)((*(uint64_t*)((char*)(a2) + 8)) + (((*(uint64_t*)((char*)(a2) + 8)) << 1)))), ((uintptr_t)(8)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351710  (orig 0x351710, call)
extern void callee_525050();
uint64_t sdk_f_351710(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525050)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(9)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351730  (orig 0x351730, call)
extern void callee_5128a0();
uint64_t sdk_f_351730(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(10)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351750  (orig 0x351750, call)
extern void callee_5128a0();
uint64_t sdk_f_351750(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(11)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351770  (orig 0x351770, call)
extern void callee_525050();
uint64_t sdk_f_351770(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525050)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(12)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351790  (orig 0x351790, call)
extern void callee_525f50();
uint64_t sdk_f_351790(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_525f50)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(384)), ((uintptr_t)(14)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3517c0  (orig 0x3517c0, call)
extern void callee_525f60();
uint64_t sdk_f_3517c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_525f60)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(576)), ((uintptr_t)(15)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3517f0  (orig 0x3517f0, call)
extern void callee_525f70();
uint64_t sdk_f_3517f0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_525f70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(312)), ((uintptr_t)(16)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351820  (orig 0x351820, call)
extern void callee_525f80();
uint64_t sdk_f_351820(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_525f80)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2052)), ((uintptr_t)(17)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351850  (orig 0x351850, call)
extern void callee_525f70();
uint64_t sdk_f_351850(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_525f70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(312)), ((uintptr_t)(18)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351880  (orig 0x351880, call)
extern void callee_525f90();
uint64_t sdk_f_351880(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_525f90)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1024)), ((uintptr_t)(19)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3518b0  (orig 0x3518b0, call)
extern void callee_525fa0();
uint64_t sdk_f_3518b0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525fa0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(20)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3518d0  (orig 0x3518d0, call)
extern void callee_525fb0();
uint64_t sdk_f_3518d0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_525fb0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(584)), ((uintptr_t)(21)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351900  (orig 0x351900, call)
extern void callee_525fc0();
uint64_t sdk_f_351900(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525fc0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(22)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351920  (orig 0x351920, call)
extern void callee_5126e0();
uint64_t sdk_f_351920(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(23)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351940  (orig 0x351940, call)
extern void callee_525f60();
uint64_t sdk_f_351940(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_525f60)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(576)), ((uintptr_t)(24)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351970  (orig 0x351970, call)
extern void callee_525fb0();
uint64_t sdk_f_351970(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_525fb0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(584)), ((uintptr_t)(25)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3519a0  (orig 0x3519a0, call)
extern void callee_525fa0();
uint64_t sdk_f_3519a0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525fa0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(26)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3519c0  (orig 0x3519c0, call)
extern void callee_524fe0();
uint64_t sdk_f_3519c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_524fe0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(27)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3519e0  (orig 0x3519e0, call)
extern void callee_525fd0();
uint64_t sdk_f_3519e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525fd0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(28)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351a00  (orig 0x351a00, call)
extern void callee_525fe0();
uint64_t sdk_f_351a00(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525fe0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(29)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351a20  (orig 0x351a20, call)
extern void callee_5250e0();
uint64_t sdk_f_351a20(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5250e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(30)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351a40  (orig 0x351a40, call)
extern void callee_525ff0();
uint64_t sdk_f_351a40(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_525ff0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(31)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351a60  (orig 0x351a60, call)
extern void callee_512710();
uint64_t sdk_f_351a60(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(32)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351a80  (orig 0x351a80, call)
extern void callee_512710();
uint64_t sdk_f_351a80(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(41)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_351aa0  (orig 0x351aa0, ptr_add)
void* sdk_f_351aa0(void* a0) { return (char*)a0 + 8; }

// sub_351ab0  (orig 0x351ab0, straight)
void* sdk_f_351ab0(void* a0) { return (char*)(a0) - 8; }

// sub_3533b0  (orig 0x3533b0, ptr_add)
void* sdk_f_3533b0(void* a0) { return (char*)a0 + 16; }

// sub_3533e0  (orig 0x3533e0, call)
extern void callee_5152b0();
uint64_t sdk_f_3533e0(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5152b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)((*(uint64_t*)((char*)(a2) + 8)) << (3))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_353410  (orig 0x353410, call)
extern void callee_526000();
uint64_t sdk_f_353410(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_526000)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_353440  (orig 0x353440, call)
extern void callee_5126e0();
uint64_t sdk_f_353440(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_353460  (orig 0x353460, call)
extern void callee_5126e0();
uint64_t sdk_f_353460(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_353480  (orig 0x353480, call)
extern void callee_5129b0();
uint64_t sdk_f_353480(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5129b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)((*(uint64_t*)((char*)(a2) + 8)) << (3))), ((uintptr_t)(5)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3534b0  (orig 0x3534b0, call)
extern void callee_5126e0();
uint64_t sdk_f_3534b0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(6)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3534d0  (orig 0x3534d0, call)
extern void callee_526010();
uint64_t sdk_f_3534d0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_526010)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(4096)), ((uintptr_t)(7)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_353500  (orig 0x353500, call)
extern void callee_512710();
uint64_t sdk_f_353500(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(8)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_353520  (orig 0x353520, call)
extern void callee_526010();
uint64_t sdk_f_353520(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_526010)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(4096)), ((uintptr_t)(9)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_353550  (orig 0x353550, ptr_add)
void* sdk_f_353550(void* a0) { return (char*)a0 + 8; }

// sub_353560  (orig 0x353560, straight)
void* sdk_f_353560(void* a0) { return (char*)(a0) - 8; }

// sub_354de0  (orig 0x354de0, compare)
bool sdk_f_354de0(uint64_t a0, uint64_t a1) { return (uint64_t)(a0) == (uint64_t)(a1); }

// sub_354df0  (orig 0x354df0, call)
extern void callee_518a60();
uint32_t sdk_f_354df0() {
    uint64_t f_354df0__r0 = ((uint64_t (*)(void))&callee_518a60)();
    void* p0 = (void*)((uintptr_t)(f_354df0__r0));
    uint32_t r0 = *(uint32_t*)((char*)(p0) + 256);
    asm volatile("");
    return r0;
}

// sub_354e40  (orig 0x354e40, call)
extern void callee_518a60();
uint8_t sdk_f_354e40() {
    uint64_t f_354e40__r0 = ((uint64_t (*)(void))&callee_518a60)();
    void* p0 = (void*)((uintptr_t)(f_354e40__r0));
    uint8_t r0 = *(uint8_t*)((char*)(p0) + 256);
    asm volatile("");
    return r0;
}

// sub_355a30  (orig 0x355a30, mov_ret)
uint64_t sdk_f_355a30() { return 0; }

// sub_355a40  (orig 0x355a40, ptr_add)
void* sdk_f_355a40(void* a0) { return (char*)a0 + 8; }

// sub_355d20  (orig 0x355d20, ret_only)
void sdk_f_355d20() {}

// sub_355d30  (orig 0x355d30, ret_only)
void sdk_f_355d30() {}

// sub_355d40  (orig 0x355d40, ptr_add)
void* sdk_f_355d40(void* a0) { return (char*)a0 + 16; }

// sub_355d50  (orig 0x355d50, call)
extern void sub_355e30();
uint64_t sdk_f_355d50(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t))&sub_355e30)(((uintptr_t)(*(uint32_t*)((char*)(a0) + 12))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_355d70  (orig 0x355d70, call)
extern void sub_356070();
uint64_t sdk_f_355d70(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&sub_356070)(((uintptr_t)(*(uint32_t*)((char*)(a0) + 12))), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)((((uint64_t)a2)) & (4294967295))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_355da0  (orig 0x355da0, call)
extern void sub_356410();
uint64_t sdk_f_355da0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t))&sub_356410)(((uintptr_t)(*(uint32_t*)((char*)(a0) + 12))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_355dc0  (orig 0x355dc0, call)
extern void sub_3566a0();
uint64_t sdk_f_355dc0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t))&sub_3566a0)(((uintptr_t)(*(uint32_t*)((char*)(a0) + 12))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_355de0  (orig 0x355de0, call)
extern void sub_356070();
uint64_t sdk_f_355de0(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&sub_356070)(((uintptr_t)(*(uint32_t*)((char*)(a0) + 12))), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_355e10  (orig 0x355e10, ptr_add)
void* sdk_f_355e10(void* a0) { return (char*)a0 + 8; }

// sub_355e20  (orig 0x355e20, straight)
void* sdk_f_355e20(void* a0) { return (char*)(a0) - 8; }

// sub_356d70  (orig 0x356d70, copy2)
void sdk_f_356d70(void* a0, uint64_t a1) { (*(uint16_t *)((char *)(*(void **)((char*)(a0) + 24)) + 0)) = a1; }

// sub_356d80  (orig 0x356d80, getter-chain)
uint32_t sdk_f_356d80(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 24)))); }

// sub_356d90  (orig 0x356d90, straight-line)
void sdk_f_356d90(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 40));
    *(uint64_t*)((char*)(p0)) = a1;
}

// sub_356da0  (orig 0x356da0, getter-chain)
uint64_t sdk_f_356da0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 40)))); }

// sub_356db0  (orig 0x356db0, straight-line)
void sdk_f_356db0(void* a0, int32_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 48));
    *(uint32_t*)(((char*)(p0) + (uintptr_t)a1 * 4)) = (uint32_t)(a2);
}

// sub_356dc0  (orig 0x356dc0, straight)
uint32_t sdk_f_356dc0(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 48));
    return *(uint32_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 4)));
}

// sub_356dd0  (orig 0x356dd0, straight-line)
void sdk_f_356dd0(void* a0, int32_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 56));
    *(uint32_t*)(((char*)(p0) + (uintptr_t)a1 * 4)) = (uint32_t)(a2);
}

// sub_356de0  (orig 0x356de0, straight)
uint32_t sdk_f_356de0(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 56));
    return *(uint32_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 4)));
}

// sub_357030  (orig 0x357030, getter)
uint64_t sdk_f_357030(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_357ee0  (orig 0x357ee0, straight)
uint64_t sdk_f_357ee0(uint64_t unused0, void* a1) {
    *(uint64_t*)((char*)(a1)) = 0;
    return 0;
}

// sub_357ef0  (orig 0x357ef0, ret_only)
void sdk_f_357ef0() {}

// sub_357f00  (orig 0x357f00, ret_only)
void sdk_f_357f00() {}

// sub_357f10  (orig 0x357f10, ret_only)
void sdk_f_357f10() {}

// sub_357f20  (orig 0x357f20, ret_only)
void sdk_f_357f20() {}

// sub_357fc0  (orig 0x357fc0, call)
extern void callee_526250();
uint64_t sdk_f_357fc0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t))&callee_526250)(((uintptr_t)(*(uint32_t*)((char*)(a0) + 68))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_358340  (orig 0x358340, setter)
void sdk_f_358340(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_358660  (orig 0x358660, mov_ret)
uint32_t sdk_f_358660() { return 523; }

// sub_359060  (orig 0x359060, mov_ret)
uint32_t sdk_f_359060() { return 523; }

// sub_3594c0  (orig 0x3594c0, ret_only)
void sdk_f_3594c0() {}

// sub_359830  (orig 0x359830, ret_only)
void sdk_f_359830() {}

// sub_359840  (orig 0x359840, ret_only)
void sdk_f_359840() {}

// sub_359930  (orig 0x359930, call)
extern void callee_526310();
uint64_t sdk_f_359930(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_526310)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)((((uint64_t)a2)) & (4294967295))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_359970  (orig 0x359970, straight)
uint64_t sdk_f_359970(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    *(uint16_t*)((char*)(a1)) = (uint16_t)(*(uint64_t*)((char*)(p0) + 96));
    return 0;
}

// sub_359fd0  (orig 0x359fd0, indirect-tailcall)
void sdk_f_359fd0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 80)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))));
}

// sub_35bc20  (orig 0x35bc20, straight)
uint64_t sdk_f_35bc20(uint64_t unused0, void* a1) {
    *(uint64_t*)((char*)(a1)) = 0;
    return 0;
}

// sub_35bc30  (orig 0x35bc30, ret_only)
void sdk_f_35bc30() {}

// sub_35bc40  (orig 0x35bc40, ret_only)
void sdk_f_35bc40() {}

// sub_35bc50  (orig 0x35bc50, call)
extern void callee_526250();
uint64_t sdk_f_35bc50(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t))&callee_526250)(((uintptr_t)(*(uint32_t*)((char*)(a0) + 68))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_35c150  (orig 0x35c150, mov_ret)
uint32_t sdk_f_35c150() { return 523; }

// sub_35c160  (orig 0x35c160, mov_ret)
uint32_t sdk_f_35c160() { return 523; }

// sub_35c2b0  (orig 0x35c2b0, mov_ret)
uint32_t sdk_f_35c2b0() { return 523; }

// sub_35c630  (orig 0x35c630, ret_only)
void sdk_f_35c630() {}

// sub_35c640  (orig 0x35c640, ret_only)
void sdk_f_35c640() {}

// sub_35c730  (orig 0x35c730, call)
extern void callee_526480();
uint64_t sdk_f_35c730(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_526480)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)((((uint64_t)a2)) & (4294967295))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_35c770  (orig 0x35c770, straight)
uint64_t sdk_f_35c770(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    *(uint16_t*)((char*)(a1)) = (uint16_t)(*(uint64_t*)((char*)(p0) + 96));
    return 0;
}

// sub_35cb90  (orig 0x35cb90, call)
extern void callee_37ed54();
uint64_t sdk_f_35cb90(uint64_t a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_37ed54)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)((((uint64_t)a1)) & (4294967295))))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_35dd90  (orig 0x35dd90, compare)
bool sdk_f_35dd90(uint64_t a0, uint64_t a1) { return (uint64_t)(a0) == (uint64_t)(a1); }

// sub_35f070  (orig 0x35f070, straight)
void* sdk_f_35f070(void* a0, uint32_t a1) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(((uint32_t)a1));
    return a0;
}

// sub_35f290  (orig 0x35f290, mov_ret)
uint64_t sdk_f_35f290() { return 0; }

// sub_35f710  (orig 0x35f710, ptr_add)
void* sdk_f_35f710(void* a0) { return (char*)a0 + 16; }

// sub_35f740  (orig 0x35f740, call)
extern void callee_526570();
uint64_t sdk_f_35f740(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_526570)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_35f760  (orig 0x35f760, call)
extern void callee_526580();
uint64_t sdk_f_35f760(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint64_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_526580)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)((((uint64_t)a4)) & (1))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_35f790  (orig 0x35f790, call)
extern void callee_524f60();
uint64_t sdk_f_35f790(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_524f60)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_35f7b0  (orig 0x35f7b0, ptr_add)
void* sdk_f_35f7b0(void* a0) { return (char*)a0 + 8; }

// sub_35f7c0  (orig 0x35f7c0, straight)
void* sdk_f_35f7c0(void* a0) { return (char*)(a0) - 8; }

// sub_35fef0  (orig 0x35fef0, ptr_add)
void* sdk_f_35fef0(void* a0) { return (char*)a0 + 16; }

// sub_35ff30  (orig 0x35ff30, call)
extern void callee_5128a0();
uint64_t sdk_f_35ff30(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_35ff50  (orig 0x35ff50, ptr_add)
void* sdk_f_35ff50(void* a0) { return (char*)a0 + 8; }

// sub_35ff60  (orig 0x35ff60, straight)
void* sdk_f_35ff60(void* a0) { return (char*)(a0) - 8; }

// sub_360860  (orig 0x360860, call)
extern void callee_5269f0();
uint64_t sdk_f_360860() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_5269f0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_360880  (orig 0x360880, call)
extern void callee_526a00();
uint64_t sdk_f_360880() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_526a00)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3608a0  (orig 0x3608a0, call)
extern void callee_526a10();
uint64_t sdk_f_3608a0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_526a10)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_360da0  (orig 0x360da0, call)
extern void callee_526db0();
uint64_t sdk_f_360da0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_526db0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_360dc0  (orig 0x360dc0, call)
extern void callee_526dc0();
uint64_t sdk_f_360dc0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_526dc0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_363250  (orig 0x363250, mov_ret)
uint32_t sdk_f_363250() { return 4; }

// sub_363260  (orig 0x363260, mov_ret)
uint32_t sdk_f_363260() { return 4; }

// sub_363a50  (orig 0x363a50, call)
extern void callee_527120();
uint64_t sdk_f_363a50(uint64_t a0, void* a1) {
    uint64_t f_363a50__r0 = ((uint64_t (*)(uintptr_t, uintptr_t))&callee_527120)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)((char*)(a1) + 4)));
    uint64_t r0 = (f_363a50__r0) + (12);
    asm volatile("");
    return r0;
}

// sub_363a70  (orig 0x363a70, call)
extern void callee_527130();
uint64_t sdk_f_363a70(uint64_t a0, void* a1) {
    uint64_t f_363a70__r0 = ((uint64_t (*)(uintptr_t, uintptr_t))&callee_527130)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)((char*)(a1) + 4)));
    uint64_t r0 = (f_363a70__r0) + (12);
    asm volatile("");
    return r0;
}

// sub_363e10  (orig 0x363e10, mov_ret)
uint32_t sdk_f_363e10() { return 28; }

// sub_364dc0  (orig 0x364dc0, call)
extern void callee_5271c0();
uint64_t sdk_f_364dc0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_5271c0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36b070  (orig 0x36b070, straight-line)
uint32_t sdk_f_36b070(uint32_t a0) { return (__builtin_bswap32(((uint32_t)a0))) >> (16); }

// sub_36b080  (orig 0x36b080, straight-line)
uint32_t sdk_f_36b080(uint32_t a0) { return __builtin_bswap32(((uint32_t)a0)); }

// sub_36b090  (orig 0x36b090, straight-line)
uint32_t sdk_f_36b090(uint32_t a0) { return (__builtin_bswap32(((uint32_t)a0))) >> (16); }

// sub_36b0a0  (orig 0x36b0a0, straight-line)
uint32_t sdk_f_36b0a0(uint32_t a0) { return __builtin_bswap32(((uint32_t)a0)); }

// sub_36b0b0  (orig 0x36b0b0, ret_only)
void sdk_f_36b0b0() {}

// sub_36b860  (orig 0x36b860, ptr_add)
void* sdk_f_36b860(void* a0) { return (char*)a0 + 16; }

// sub_36b890  (orig 0x36b890, call)
extern void callee_519270();
uint64_t sdk_f_36b890(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_519270)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36b8b0  (orig 0x36b8b0, call)
extern void callee_51e3d0();
uint64_t sdk_f_36b8b0(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint32_t a4, uint32_t a5) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51e3d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(((uint32_t)a5))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36b8e0  (orig 0x36b8e0, call)
extern void callee_51e3d0();
uint64_t sdk_f_36b8e0(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint32_t a4, uint32_t a5) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51e3d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(((uint32_t)a5))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36b910  (orig 0x36b910, call)
extern void callee_5272b0();
uint64_t sdk_f_36b910(void* a0, uint64_t a1, uint64_t a2, void* a3, uint32_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5272b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(*(uint64_t*)((char*)(a3)))), ((uintptr_t)(*(uint64_t*)((char*)(a3) + 8))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36bbb0  (orig 0x36bbb0, call)
extern void callee_527340();
uint64_t sdk_f_36bbb0(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, void* a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527340)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(*(uint64_t*)((char*)(a4)))), ((uintptr_t)(*(uint64_t*)((char*)(a4) + 8))), ((uintptr_t)(13)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36bbe0  (orig 0x36bbe0, call)
extern void callee_527340();
uint64_t sdk_f_36bbe0(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, void* a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527340)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(*(uint64_t*)((char*)(a4)))), ((uintptr_t)(*(uint64_t*)((char*)(a4) + 8))), ((uintptr_t)(14)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36bcc0  (orig 0x36bcc0, call)
extern void callee_51e390();
uint64_t sdk_f_36bcc0(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint32_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51e390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(18)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36bd90  (orig 0x36bd90, call)
extern void callee_51e3d0();
uint64_t sdk_f_36bd90(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint32_t a4, uint32_t a5) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51e3d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(((uint32_t)a5))), ((uintptr_t)(20)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36be00  (orig 0x36be00, call)
extern void callee_51e390();
uint64_t sdk_f_36be00(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint32_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51e390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(22)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36be30  (orig 0x36be30, call)
extern void callee_51e370();
uint64_t sdk_f_36be30(void* a0, uint64_t a1, uint64_t a2, uint32_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51e370)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(23)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36be60  (orig 0x36be60, call)
extern void callee_527340();
uint64_t sdk_f_36be60(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, void* a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527340)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(*(uint64_t*)((char*)(a4)))), ((uintptr_t)(*(uint64_t*)((char*)(a4) + 8))), ((uintptr_t)(24)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36be90  (orig 0x36be90, call)
extern void callee_527380();
uint64_t sdk_f_36be90(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, void* a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527380)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(*(uint64_t*)((char*)(a4)))), ((uintptr_t)(*(uint64_t*)((char*)(a4) + 8))), ((uintptr_t)(25)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36bec0  (orig 0x36bec0, call)
extern void callee_51e370();
uint64_t sdk_f_36bec0(void* a0, uint64_t a1, uint64_t a2, uint32_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51e370)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(26)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36bef0  (orig 0x36bef0, call)
extern void callee_527390();
uint64_t sdk_f_36bef0(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint64_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint64_t)a4))), ((uintptr_t)(27)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36c010  (orig 0x36c010, call)
extern void callee_5273d0();
uint64_t sdk_f_36c010(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint32_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5273d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(31)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36c040  (orig 0x36c040, call)
extern void callee_5273e0();
uint64_t sdk_f_36c040(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, void* a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5273e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(*(uint64_t*)((char*)(a4)))), ((uintptr_t)(*(uint64_t*)((char*)(a4) + 8))), ((uintptr_t)(32)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36c070  (orig 0x36c070, ptr_add)
void* sdk_f_36c070(void* a0) { return (char*)a0 + 8; }

// sub_36c080  (orig 0x36c080, straight)
void* sdk_f_36c080(void* a0) { return (char*)(a0) - 8; }

// sub_36f1d0  (orig 0x36f1d0, ptr_add)
void* sdk_f_36f1d0(void* a0) { return (char*)a0 + 32; }

// sub_36f200  (orig 0x36f200, call)
extern void callee_511440();
uint64_t sdk_f_36f200(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511440)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f220  (orig 0x36f220, call)
extern void callee_51e540();
uint64_t sdk_f_36f220(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint32_t a4, uint32_t a5) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51e540)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(((uint32_t)a5))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f250  (orig 0x36f250, call)
extern void callee_51e540();
uint64_t sdk_f_36f250(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint32_t a4, uint32_t a5) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51e540)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(((uint32_t)a5))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f280  (orig 0x36f280, call)
extern void callee_527400();
uint64_t sdk_f_36f280(void* a0, uint64_t a1, uint64_t a2, void* a3, uint32_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527400)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(*(uint64_t*)((char*)(a3)))), ((uintptr_t)(*(uint64_t*)((char*)(a3) + 8))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f520  (orig 0x36f520, call)
extern void callee_527490();
uint64_t sdk_f_36f520(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, void* a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527490)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(*(uint64_t*)((char*)(a4)))), ((uintptr_t)(*(uint64_t*)((char*)(a4) + 8))), ((uintptr_t)(13)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f550  (orig 0x36f550, call)
extern void callee_527490();
uint64_t sdk_f_36f550(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, void* a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527490)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(*(uint64_t*)((char*)(a4)))), ((uintptr_t)(*(uint64_t*)((char*)(a4) + 8))), ((uintptr_t)(14)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f630  (orig 0x36f630, call)
extern void callee_51e500();
uint64_t sdk_f_36f630(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint32_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51e500)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(18)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f700  (orig 0x36f700, call)
extern void callee_51e540();
uint64_t sdk_f_36f700(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint32_t a4, uint32_t a5) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51e540)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(((uint32_t)a5))), ((uintptr_t)(20)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f770  (orig 0x36f770, call)
extern void callee_51e500();
uint64_t sdk_f_36f770(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint32_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51e500)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(22)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f7a0  (orig 0x36f7a0, call)
extern void callee_51b5a0();
uint64_t sdk_f_36f7a0(void* a0, uint64_t a1, uint64_t a2, uint32_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51b5a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(23)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f7d0  (orig 0x36f7d0, call)
extern void callee_527490();
uint64_t sdk_f_36f7d0(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, void* a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527490)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(*(uint64_t*)((char*)(a4)))), ((uintptr_t)(*(uint64_t*)((char*)(a4) + 8))), ((uintptr_t)(24)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f800  (orig 0x36f800, call)
extern void callee_5274d0();
uint64_t sdk_f_36f800(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, void* a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5274d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(*(uint64_t*)((char*)(a4)))), ((uintptr_t)(*(uint64_t*)((char*)(a4) + 8))), ((uintptr_t)(25)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f830  (orig 0x36f830, call)
extern void callee_51b5a0();
uint64_t sdk_f_36f830(void* a0, uint64_t a1, uint64_t a2, uint32_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51b5a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(26)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f860  (orig 0x36f860, call)
extern void callee_5274e0();
uint64_t sdk_f_36f860(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint64_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5274e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint64_t)a4))), ((uintptr_t)(27)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f980  (orig 0x36f980, call)
extern void callee_527520();
uint64_t sdk_f_36f980(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint32_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527520)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(31)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f9b0  (orig 0x36f9b0, call)
extern void callee_527530();
uint64_t sdk_f_36f9b0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, void* a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527530)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(*(uint64_t*)((char*)(a4)))), ((uintptr_t)(*(uint64_t*)((char*)(a4) + 8))), ((uintptr_t)(32)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_36f9e0  (orig 0x36f9e0, ptr_add)
void* sdk_f_36f9e0(void* a0) { return (char*)a0 + 8; }

// sub_36f9f0  (orig 0x36f9f0, straight)
void* sdk_f_36f9f0(void* a0) { return (char*)(a0) - 24; }

// sub_373020  (orig 0x373020, guarded)
void* sdk_f_373020(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    if (a0) {
        *(uint8_t*)((char*)(a0)) = *(uint8_t*)((char*)(a1));
        *(uint8_t*)((char*)(p1) + 1) = *(uint8_t*)((char*)(p0) + 1);
        *(uint16_t*)((char*)(p1) + 2) = *(uint16_t*)((char*)(p0) + 2);
        *(uint32_t*)((char*)(p1) + 4) = *(uint32_t*)((char*)(p0) + 4);
        *(uint64_t*)((char*)(p1) + 8) = *(uint64_t*)((char*)(p0) + 8);
        return a0;
    }
    return 0;
}

// sub_373270  (orig 0x373270, straight)
uint32_t sdk_f_373270(uint32_t a0) { return (((uint32_t)a0)) & (15); }

// sub_373280  (orig 0x373280, straight)
void sdk_f_373280(void* a0) {
    *(uint64_t*)((char*)(a0)) = (*(uint64_t*)((char*)(a0))) & (18446744073709551600);
}

// sub_3734b0  (orig 0x3734b0, mov_ret)
uint64_t sdk_f_3734b0() { return 0; }

// sub_375600  (orig 0x375600, call)
extern void callee_527730();
uint64_t sdk_f_375600() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_527730)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3756f0  (orig 0x3756f0, call)
extern void callee_527760();
uint64_t sdk_f_3756f0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_527760)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_375c10  (orig 0x375c10, ptr_add)
void* sdk_f_375c10(void* a0) { return (char*)a0 + 16; }

// sub_375c50  (orig 0x375c50, call)
extern void callee_527780();
uint64_t sdk_f_375c50(void* a0, uint32_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_375d40  (orig 0x375d40, call)
extern void callee_527780();
uint64_t sdk_f_375d40(void* a0, uint32_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_375d70  (orig 0x375d70, call)
extern void callee_527780();
uint64_t sdk_f_375d70(void* a0, uint32_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(5)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_375e70  (orig 0x375e70, call)
extern void callee_51dda0();
uint64_t sdk_f_375e70(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51dda0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(8)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_375e90  (orig 0x375e90, call)
extern void callee_51dd20();
uint64_t sdk_f_375e90(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51dd20)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(9)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_376150  (orig 0x376150, ptr_add)
void* sdk_f_376150(void* a0) { return (char*)a0 + 8; }

// sub_376160  (orig 0x376160, straight)
void* sdk_f_376160(void* a0) { return (char*)(a0) - 8; }

// sub_3784a0  (orig 0x3784a0, delegator)
extern void callee_527650();
void sdk_f_3784a0(unsigned long a0) { ((void(*)(unsigned long))callee_527650)(a0); asm volatile(""); }

// sub_3784c0  (orig 0x3784c0, delegator)
extern void callee_527650();
void sdk_f_3784c0(unsigned long a0) { ((void(*)(unsigned long))callee_527650)(a0); asm volatile(""); }

// sub_3784e0  (orig 0x3784e0, setter)
void sdk_f_3784e0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_3784f0  (orig 0x3784f0, ret_only)
void sdk_f_3784f0() {}

// sub_378e40  (orig 0x378e40, ret_only)
void sdk_f_378e40() {}

// sub_378e50  (orig 0x378e50, ret_only)
void sdk_f_378e50() {}

// sub_378e60  (orig 0x378e60, call)
extern void callee_527960();
uint64_t sdk_f_378e60() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_527960)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_378ea0  (orig 0x378ea0, ret_only)
void sdk_f_378ea0() {}

// sub_379ce0  (orig 0x379ce0, call)
extern void callee_527980();
uint64_t sdk_f_379ce0(void* a0, uint64_t a1, uint64_t a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint64_t f_379ce0__r0 = ((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527980)(((uintptr_t)(a0)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))), ((uintptr_t)(*(uint32_t*)((char*)(p0) + 32))));
    uint64_t r0 = (f_379ce0__r0) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37aaf0  (orig 0x37aaf0, setter-chain-zero)
void sdk_f_37aaf0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_37abe0  (orig 0x37abe0, ret_only)
void sdk_f_37abe0() {}

// sub_37af40  (orig 0x37af40, call)
extern void callee_527990();
uint64_t sdk_f_37af40() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_527990)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37af60  (orig 0x37af60, call)
extern void callee_5279a0();
uint64_t sdk_f_37af60() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_5279a0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37af80  (orig 0x37af80, call)
extern void callee_5279b0();
uint64_t sdk_f_37af80() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_5279b0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37b580  (orig 0x37b580, call)
extern void callee_527ba0();
uint64_t sdk_f_37b580() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_527ba0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37b5a0  (orig 0x37b5a0, call)
extern void callee_527bb0();
uint64_t sdk_f_37b5a0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_527bb0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37baf0  (orig 0x37baf0, call)
extern void callee_527c50();
uint64_t sdk_f_37baf0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_527c50)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37bbc0  (orig 0x37bbc0, ret_only)
void sdk_f_37bbc0() {}

// sub_37bbd0  (orig 0x37bbd0, getter)
uint32_t sdk_f_37bbd0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_37bbe0  (orig 0x37bbe0, getter)
uint32_t sdk_f_37bbe0(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_37bbf0  (orig 0x37bbf0, getter)
uint64_t sdk_f_37bbf0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_37bc10  (orig 0x37bc10, indirect-tailcall)
void sdk_f_37bc10(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 16)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 16))));
}

// sub_37c000  (orig 0x37c000, ptr_add)
void* sdk_f_37c000(void* a0) { return (char*)a0 + 32; }

// sub_37c0c0  (orig 0x37c0c0, call)
extern void callee_511390();
uint64_t sdk_f_37c0c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c0e0  (orig 0x37c0e0, call)
extern void callee_527cb0();
uint64_t sdk_f_37c0e0(void* a0, void* a1, uint64_t a2, void* a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527cb0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(*(uint64_t*)((char*)(a3)))), ((uintptr_t)(*(uint64_t*)((char*)(a3) + 8))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c120  (orig 0x37c120, call)
extern void callee_527cc0();
uint64_t sdk_f_37c120(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527cc0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c190  (orig 0x37c190, call)
extern void callee_511780();
uint64_t sdk_f_37c190(void* a0, uint32_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(5)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c1c0  (orig 0x37c1c0, call)
extern void callee_527ce0();
uint64_t sdk_f_37c1c0(void* a0, uint64_t a1, void* a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527ce0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)((((uint64_t)a3)) & (4294967295))), ((uintptr_t)(6)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c1f0  (orig 0x37c1f0, call)
extern void callee_51b330();
uint64_t sdk_f_37c1f0(void* a0, void* a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51b330)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)((((uint64_t)a2)) & (4294967295))), ((uintptr_t)(7)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c220  (orig 0x37c220, call)
extern void callee_527cf0();
uint64_t sdk_f_37c220(void* a0, void* a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527cf0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)((((uint64_t)a2)) & (4294967295))), ((uintptr_t)(8)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c250  (orig 0x37c250, ptr_add)
void* sdk_f_37c250(void* a0) { return (char*)a0 + 8; }

// sub_37c260  (orig 0x37c260, straight)
void* sdk_f_37c260(void* a0) { return (char*)(a0) - 24; }

// sub_37c5a0  (orig 0x37c5a0, ptr_add)
void* sdk_f_37c5a0(void* a0) { return (char*)a0 + 32; }

// sub_37c5e0  (orig 0x37c5e0, call)
extern void callee_522030();
uint64_t sdk_f_37c5e0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_522030)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)((((uint64_t)a2)) & (4294967295))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c6b0  (orig 0x37c6b0, call)
extern void callee_511390();
uint64_t sdk_f_37c6b0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c6d0  (orig 0x37c6d0, call)
extern void callee_527d10();
uint64_t sdk_f_37c6d0(void* a0, uint64_t a1, void* a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527d10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)((((uint64_t)a3)) & (4294967295))), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c700  (orig 0x37c700, call)
extern void callee_527d20();
uint64_t sdk_f_37c700(void* a0, uint64_t a1, void* a2, void* a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527d20)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(*(uint64_t*)((char*)(a3)))), ((uintptr_t)(*(uint64_t*)((char*)(a3) + 8))), ((uintptr_t)(5)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c730  (orig 0x37c730, call)
extern void callee_511670();
uint64_t sdk_f_37c730(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511670)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(6)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c750  (orig 0x37c750, call)
extern void callee_511670();
uint64_t sdk_f_37c750(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511670)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(7)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c770  (orig 0x37c770, call)
extern void callee_51b520();
uint64_t sdk_f_37c770(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51b520)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)((((uint64_t)a2)) & (4294967295))), ((uintptr_t)(8)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c7a0  (orig 0x37c7a0, call)
extern void callee_51b140();
uint64_t sdk_f_37c7a0(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51b140)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(9)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c7d0  (orig 0x37c7d0, call)
extern void callee_512070();
uint64_t sdk_f_37c7d0(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512070)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(10)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c800  (orig 0x37c800, call)
extern void callee_511670();
uint64_t sdk_f_37c800(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511670)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(11)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c820  (orig 0x37c820, ptr_add)
void* sdk_f_37c820(void* a0) { return (char*)a0 + 8; }

// sub_37c830  (orig 0x37c830, straight)
void* sdk_f_37c830(void* a0) { return (char*)(a0) - 24; }

// sub_37c980  (orig 0x37c980, ptr_add)
void* sdk_f_37c980(void* a0) { return (char*)a0 + 32; }

// sub_37c9c0  (orig 0x37c9c0, call)
extern void callee_51b140();
uint64_t sdk_f_37c9c0(void* a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51b140)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37c9f0  (orig 0x37c9f0, call)
extern void callee_511780();
uint64_t sdk_f_37c9f0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (4294967295))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37ca20  (orig 0x37ca20, call)
extern void callee_511780();
uint64_t sdk_f_37ca20(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (4294967295))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37ca50  (orig 0x37ca50, call)
extern void callee_511390();
uint64_t sdk_f_37ca50(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37caa0  (orig 0x37caa0, call)
extern void callee_511390();
uint64_t sdk_f_37caa0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(6)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cac0  (orig 0x37cac0, call)
extern void callee_511390();
uint64_t sdk_f_37cac0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(7)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cae0  (orig 0x37cae0, call)
extern void callee_511510();
uint64_t sdk_f_37cae0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(8)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cb00  (orig 0x37cb00, call)
extern void callee_527d40();
uint64_t sdk_f_37cb00(void* a0, uint64_t a1, uint64_t a2, void* a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527d40)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(*(uint64_t*)((char*)(a3)))), ((uintptr_t)(*(uint64_t*)((char*)(a3) + 8))), ((uintptr_t)(9)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cb30  (orig 0x37cb30, call)
extern void callee_511500();
uint64_t sdk_f_37cb30(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_511500)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(10)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cb60  (orig 0x37cb60, call)
extern void callee_527cc0();
uint64_t sdk_f_37cb60(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527cc0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(11)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cb90  (orig 0x37cb90, call)
extern void callee_511390();
uint64_t sdk_f_37cb90(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(12)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cbb0  (orig 0x37cbb0, call)
extern void callee_511500();
uint64_t sdk_f_37cbb0(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_511500)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(13)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cbe0  (orig 0x37cbe0, call)
extern void callee_527d50();
uint64_t sdk_f_37cbe0(void* a0, uint64_t a1, uint64_t a2, uint32_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527d50)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)((((uint64_t)a2)) & (4294967295))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(14)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cc10  (orig 0x37cc10, call)
extern void callee_511510();
uint64_t sdk_f_37cc10(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(15)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cc30  (orig 0x37cc30, call)
extern void callee_511390();
uint64_t sdk_f_37cc30(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(16)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cc50  (orig 0x37cc50, call)
extern void callee_511780();
uint64_t sdk_f_37cc50(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (4294967295))), ((uintptr_t)(17)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cc80  (orig 0x37cc80, call)
extern void callee_511390();
uint64_t sdk_f_37cc80(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(18)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cca0  (orig 0x37cca0, call)
extern void callee_511510();
uint64_t sdk_f_37cca0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_511510)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(19)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37ccc0  (orig 0x37ccc0, call)
extern void callee_511780();
uint64_t sdk_f_37ccc0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511780)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (4294967295))), ((uintptr_t)(20)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37ccf0  (orig 0x37ccf0, call)
extern void callee_511390();
uint64_t sdk_f_37ccf0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(21)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cd10  (orig 0x37cd10, call)
extern void callee_5121a0();
uint64_t sdk_f_37cd10(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5121a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (4294967295))), ((uintptr_t)((((uint64_t)a2)) & (1))), ((uintptr_t)(22)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cd40  (orig 0x37cd40, call)
extern void callee_51b540();
uint64_t sdk_f_37cd40(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51b540)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)((((uint64_t)a2)) & (4294967295))), ((uintptr_t)(23)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cda0  (orig 0x37cda0, call)
extern void callee_527d70();
uint64_t sdk_f_37cda0(void* a0, uint32_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_527d70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint32_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(*(uint64_t*)((char*)(a2) + 8))), ((uintptr_t)(25)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_37cdd0  (orig 0x37cdd0, ptr_add)
void* sdk_f_37cdd0(void* a0) { return (char*)a0 + 8; }

// sub_37cde0  (orig 0x37cde0, straight)
void* sdk_f_37cde0(void* a0) { return (char*)(a0) - 24; }

// sub_37f1a0  (orig 0x37f1a0, mov_ret)
uint32_t sdk_f_37f1a0() { return 2004; }

// sub_37f9b0  (orig 0x37f9b0, setter-chain)
void sdk_f_37f9b0(void* a0) { *(uint64_t*)((char*)(a0) + 984) = 0; *(uint8_t*)((char*)(a0) + 976) = 0; *(uint64_t*)((char*)(a0) + 968) = 0; *(uint64_t*)((char*)(a0) + 960) = 0; }

// sub_37fce0  (orig 0x37fce0, mov_ret)
uint32_t sdk_f_37fce0() { return 2004; }

// sub_37fe60  (orig 0x37fe60, setter)
void sdk_f_37fe60(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 22) = a1; }

// sub_37fee0  (orig 0x37fee0, setter)
void sdk_f_37fee0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 24) = a1; }

// sub_380630  (orig 0x380630, ret_only)
void sdk_f_380630() {}

// sub_380640  (orig 0x380640, mov_ret)
uint32_t sdk_f_380640() { return 1656; }

// sub_380bf0  (orig 0x380bf0, ret_only)
void sdk_f_380bf0() {}

// sub_3811c0  (orig 0x3811c0, straight)
void sdk_f_3811c0(void* a0) {
    *(uint64_t*)((char*)(a0) + 112) = ((*(uint64_t*)((char*)(a0) + 112)) & (18446744073709551611)) | (128);
}

// sub_381220  (orig 0x381220, straight)
void sdk_f_381220(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 132) = (uint32_t)(a1);
    *(uint64_t*)((char*)(a0) + 112) = (*(uint64_t*)((char*)(a0) + 112)) | (16);
}

// sub_382630  (orig 0x382630, straight)
void sdk_f_382630(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 1222) = (uint8_t)((((uint32_t)a1)) & (1));
    *(uint64_t*)((char*)(a0) + 112) = (*(uint64_t*)((char*)(a0) + 112)) | (32768);
}

// sub_382650  (orig 0x382650, setter)
void sdk_f_382650(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 16) = a1; }

// sub_382660  (orig 0x382660, setter)
void sdk_f_382660(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 24) = a1; }

// sub_382670  (orig 0x382670, setter)
void sdk_f_382670(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 32) = a1; }

// sub_382680  (orig 0x382680, setter)
void sdk_f_382680(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 40) = a1; }

// sub_382690  (orig 0x382690, setter)
void sdk_f_382690(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 48) = a1; }

// sub_3826a0  (orig 0x3826a0, setter)
void sdk_f_3826a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 56) = a1; }

// sub_3826b0  (orig 0x3826b0, setter)
void sdk_f_3826b0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 64) = a1; }

// sub_3826c0  (orig 0x3826c0, setter)
void sdk_f_3826c0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 72) = a1; }

// sub_3826d0  (orig 0x3826d0, setter)
void sdk_f_3826d0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 80) = a1; }

// sub_3826e0  (orig 0x3826e0, setter)
void sdk_f_3826e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 88) = a1; }

// sub_3826f0  (orig 0x3826f0, setter)
void sdk_f_3826f0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 96) = a1; }

// sub_382700  (orig 0x382700, straight)
void* sdk_f_382700(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = 1280;
    *(uint32_t*)((char*)(a1)) = 720;
    return a0;
}

// sub_382b00  (orig 0x382b00, getter)
uint64_t sdk_f_382b00(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_382b10  (orig 0x382b10, ret_only)
void sdk_f_382b10() {}

// sub_382c60  (orig 0x382c60, getter)
uint64_t sdk_f_382c60(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_382c70  (orig 0x382c70, ret_only)
void sdk_f_382c70() {}

// sub_382d50  (orig 0x382d50, call)
extern void sub_382d70();
uint64_t sdk_f_382d50() {
    uint64_t r0 = (((uint64_t (*)(uintptr_t))&sub_382d70)(((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_383000  (orig 0x383000, call)
extern void sub_382d70();
uint64_t sdk_f_383000() {
    uint64_t r0 = (((uint64_t (*)(uintptr_t))&sub_382d70)(((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_383020  (orig 0x383020, call)
extern void sub_382d70();
uint64_t sdk_f_383020() {
    uint64_t r0 = (((uint64_t (*)(uintptr_t))&sub_382d70)(((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_383040  (orig 0x383040, call)
extern void sub_382d70();
uint64_t sdk_f_383040() {
    uint64_t r0 = (((uint64_t (*)(uintptr_t))&sub_382d70)(((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_383470  (orig 0x383470, call)
extern void callee_528270();
uint64_t sdk_f_383470() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_528270)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_383570  (orig 0x383570, ret_only)
void sdk_f_383570() {}

// sub_383db0  (orig 0x383db0, ret_only)
void sdk_f_383db0() {}

// sub_383dc0  (orig 0x383dc0, call)
extern void callee_528350();
uint64_t sdk_f_383dc0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_528350)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_383df0  (orig 0x383df0, setter-chain-zero)
void sdk_f_383df0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a0 + 128) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 112) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 96) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 80) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 64) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 48) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_383e70  (orig 0x383e70, call)
extern void callee_528390();
uint64_t sdk_f_383e70() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_528390)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_383e90  (orig 0x383e90, call)
extern void callee_5283a0();
uint64_t sdk_f_383e90() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_5283a0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_383eb0  (orig 0x383eb0, delegator)
extern void callee_5283b0();
void sdk_f_383eb0(unsigned long a0) { ((void(*)(unsigned long))callee_5283b0)(a0); asm volatile(""); }

// sub_3847f0  (orig 0x3847f0, call)
extern void callee_528330();
uint64_t sdk_f_3847f0() {
    uint64_t f_3847f0__r0 = ((uint64_t (*)(void))&callee_528330)();
    void* p0 = (void*)((uintptr_t)(f_3847f0__r0));
    uint64_t r0 = *(uint64_t*)((char*)(p0) + 64);
    asm volatile("");
    return r0;
}

// sub_384840  (orig 0x384840, call)
extern void callee_528330();
uint64_t sdk_f_384840() {
    uint64_t f_384840__r0 = ((uint64_t (*)(void))&callee_528330)();
    void* p0 = (void*)((uintptr_t)(f_384840__r0));
    uint64_t r0 = *(uint64_t*)((char*)(p0) + 80);
    asm volatile("");
    return r0;
}

// sub_3848a0  (orig 0x3848a0, call)
extern void callee_528330();
uint64_t sdk_f_3848a0() {
    uint64_t f_3848a0__r0 = ((uint64_t (*)(void))&callee_528330)();
    void* p0 = (void*)((uintptr_t)(f_3848a0__r0));
    uint64_t r0 = *(uint64_t*)((char*)(p0) + 72);
    asm volatile("");
    return r0;
}

// sub_3848f0  (orig 0x3848f0, call)
extern void callee_528330();
uint64_t sdk_f_3848f0() {
    uint64_t f_3848f0__r0 = ((uint64_t (*)(void))&callee_528330)();
    void* p0 = (void*)((uintptr_t)(f_3848f0__r0));
    uint64_t r0 = *(uint64_t*)((char*)(p0) + 88);
    asm volatile("");
    return r0;
}

// sub_385550  (orig 0x385550, getter)
uint64_t sdk_f_385550(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_385560  (orig 0x385560, ret_only)
void sdk_f_385560() {}

// sub_385870  (orig 0x385870, getter)
uint64_t sdk_f_385870(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_385880  (orig 0x385880, ret_only)
void sdk_f_385880() {}

// sub_385ea0  (orig 0x385ea0, getter)
uint64_t sdk_f_385ea0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_385eb0  (orig 0x385eb0, ret_only)
void sdk_f_385eb0() {}

// sub_386330  (orig 0x386330, ret_only)
void sdk_f_386330() {}

// sub_386340  (orig 0x386340, ret_only)
void sdk_f_386340() {}

// sub_386350  (orig 0x386350, getter)
uint8_t sdk_f_386350(void* a0) { return *(uint8_t*)((char*)(a0) + 205); }

// sub_386360  (orig 0x386360, getter)
uint8_t sdk_f_386360(void* a0) { return *(uint8_t*)((char*)(a0) + 204); }

// sub_386370  (orig 0x386370, call)
extern void callee_528330();
uint8_t sdk_f_386370(void* a0) {
    uint64_t f_386370__r0 = ((uint64_t (*)(uintptr_t))&callee_528330)(((uintptr_t)((char*)(a0) + 208)));
    void* p0 = (void*)((uintptr_t)(f_386370__r0));
    uint8_t r0 = ((*(uint8_t*)((char*)(p0) + 205) != 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_387390  (orig 0x387390, ret_only)
void sdk_f_387390() {}

// sub_3873a0  (orig 0x3873a0, ret_only)
void sdk_f_3873a0() {}

// sub_387e60  (orig 0x387e60, ptr_add)
void* sdk_f_387e60(void* a0) { return (char*)a0 + 32; }

// sub_388230  (orig 0x388230, call)
extern void callee_511570();
uint64_t sdk_f_388230(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511570)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(20)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388250  (orig 0x388250, call)
extern void callee_511570();
uint64_t sdk_f_388250(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511570)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(30)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388270  (orig 0x388270, call)
extern void callee_511570();
uint64_t sdk_f_388270(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511570)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(31)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388290  (orig 0x388290, call)
extern void callee_511670();
uint64_t sdk_f_388290(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511670)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(50)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3882b0  (orig 0x3882b0, call)
extern void callee_5114b0();
uint64_t sdk_f_3882b0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(100)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3882d0  (orig 0x3882d0, call)
extern void callee_512050();
uint64_t sdk_f_3882d0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512050)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(101)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388300  (orig 0x388300, call)
extern void callee_511390();
uint64_t sdk_f_388300(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(102)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388320  (orig 0x388320, call)
extern void callee_5114b0();
uint64_t sdk_f_388320(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(200)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388340  (orig 0x388340, call)
extern void callee_528650();
uint64_t sdk_f_388340(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_528650)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(201)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388360  (orig 0x388360, call)
extern void callee_528660();
uint64_t sdk_f_388360(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528660)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(300)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388380  (orig 0x388380, call)
extern void callee_528670();
uint64_t sdk_f_388380(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528670)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(208)), ((uintptr_t)((((uint64_t)a2)) & (255))), ((uintptr_t)(400)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388450  (orig 0x388450, ptr_add)
void* sdk_f_388450(void* a0) { return (char*)a0 + 8; }

// sub_388460  (orig 0x388460, straight)
void* sdk_f_388460(void* a0) { return (char*)(a0) - 24; }

// sub_388590  (orig 0x388590, ptr_add)
void* sdk_f_388590(void* a0) { return (char*)a0 + 32; }

// sub_3885c0  (orig 0x3885c0, call)
extern void callee_511670();
uint64_t sdk_f_3885c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511670)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3885e0  (orig 0x3885e0, call)
extern void callee_5286a0();
uint64_t sdk_f_3885e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5286a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388600  (orig 0x388600, call)
extern void callee_5286b0();
uint64_t sdk_f_388600(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5286b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388620  (orig 0x388620, ptr_add)
void* sdk_f_388620(void* a0) { return (char*)a0 + 8; }

// sub_388630  (orig 0x388630, straight)
void* sdk_f_388630(void* a0) { return (char*)(a0) - 24; }

// sub_388a10  (orig 0x388a10, ptr_add)
void* sdk_f_388a10(void* a0) { return (char*)a0 + 32; }

// sub_388a40  (orig 0x388a40, call)
extern void callee_511520();
uint64_t sdk_f_388a40(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511520)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388a60  (orig 0x388a60, call)
extern void callee_511670();
uint64_t sdk_f_388a60(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511670)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388a80  (orig 0x388a80, call)
extern void callee_511520();
uint64_t sdk_f_388a80(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511520)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(100)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388aa0  (orig 0x388aa0, call)
extern void callee_5114b0();
uint64_t sdk_f_388aa0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5114b0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(101)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388ac0  (orig 0x388ac0, call)
extern void callee_511390();
uint64_t sdk_f_388ac0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(102)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388ae0  (orig 0x388ae0, call)
extern void callee_511520();
uint64_t sdk_f_388ae0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511520)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(200)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388b00  (orig 0x388b00, ptr_add)
void* sdk_f_388b00(void* a0) { return (char*)a0 + 8; }

// sub_388b10  (orig 0x388b10, straight)
void* sdk_f_388b10(void* a0) { return (char*)(a0) - 24; }

// sub_388da0  (orig 0x388da0, ptr_add)
void* sdk_f_388da0(void* a0) { return (char*)a0 + 32; }

// sub_388dd0  (orig 0x388dd0, call)
extern void callee_5286d0();
uint64_t sdk_f_388dd0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5286d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388df0  (orig 0x388df0, call)
extern void callee_511390();
uint64_t sdk_f_388df0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_511390)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388e10  (orig 0x388e10, call)
extern void callee_522040();
uint64_t sdk_f_388e10(void* a0, uint64_t a1, void* a2, uint32_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_522040)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(((*(uint64_t*)((char*)(a2) + 8)) + (((*(uint64_t*)((char*)(a2) + 8)) << 3))) << (2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388e80  (orig 0x388e80, call)
extern void callee_5123e0();
uint64_t sdk_f_388e80(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5123e0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(5)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388ea0  (orig 0x388ea0, call)
extern void callee_5286f0();
uint64_t sdk_f_388ea0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_5286f0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(6)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388ec0  (orig 0x388ec0, call)
extern void callee_528700();
uint64_t sdk_f_388ec0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(((uint64_t)a4))), ((uintptr_t)(16384)), ((uintptr_t)(100)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388ef0  (orig 0x388ef0, call)
extern void callee_528710();
uint64_t sdk_f_388ef0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(101)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_388f80  (orig 0x388f80, ptr_add)
void* sdk_f_388f80(void* a0) { return (char*)a0 + 8; }

// sub_388f90  (orig 0x388f90, straight)
void* sdk_f_388f90(void* a0) { return (char*)(a0) - 24; }

// sub_38b0d0  (orig 0x38b0d0, call)
extern void callee_528750();
uint64_t sdk_f_38b0d0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_528750)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_38b100  (orig 0x38b100, delegator)
extern void callee_528770();
void sdk_f_38b100(unsigned long a0) { ((void(*)(unsigned long))callee_528770)(a0); asm volatile(""); }

// sub_38b120  (orig 0x38b120, call)
extern void callee_528780();
uint64_t sdk_f_38b120() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_528780)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_38b710  (orig 0x38b710, ptr_add)
void* sdk_f_38b710(void* a0) { return (char*)a0 + 16; }

// sub_38b7d0  (orig 0x38b7d0, call)
extern void callee_512700();
uint64_t sdk_f_38b7d0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_512700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(100)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_38b7f0  (orig 0x38b7f0, call)
extern void callee_512700();
uint64_t sdk_f_38b7f0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_512700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(101)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_38b810  (orig 0x38b810, ptr_add)
void* sdk_f_38b810(void* a0) { return (char*)a0 + 8; }

// sub_38b820  (orig 0x38b820, straight)
void* sdk_f_38b820(void* a0) { return (char*)(a0) - 8; }

// sub_38b9a0  (orig 0x38b9a0, ptr_add)
void* sdk_f_38b9a0(void* a0) { return (char*)a0 + 16; }

// sub_38b9d0  (orig 0x38b9d0, call)
extern void callee_5126d0();
uint64_t sdk_f_38b9d0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5126d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_38b9f0  (orig 0x38b9f0, call)
extern void callee_512700();
uint64_t sdk_f_38b9f0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_512700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(2)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_38ba10  (orig 0x38ba10, call)
extern void callee_512700();
uint64_t sdk_f_38ba10(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&callee_512700)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(3)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_38ba30  (orig 0x38ba30, call)
extern void callee_512710();
uint64_t sdk_f_38ba30(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512710)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(4)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_38ba50  (orig 0x38ba50, call)
extern void callee_5127d0();
uint64_t sdk_f_38ba50(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5127d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(5)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_38ba70  (orig 0x38ba70, ptr_add)
void* sdk_f_38ba70(void* a0) { return (char*)a0 + 8; }

// sub_38ba80  (orig 0x38ba80, straight)
void* sdk_f_38ba80(void* a0) { return (char*)(a0) - 8; }

// sub_38bce0  (orig 0x38bce0, ptr_add)
void* sdk_f_38bce0(void* a0) { return (char*)a0 + 8; }

// sub_38bcf0  (orig 0x38bcf0, indirect-tailcall)
void sdk_f_38bcf0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 56)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_38c310  (orig 0x38c310, strlit-ret)
const char *sdk_f_38c310() { static char g_f_38c310[1]; __asm__ volatile("" ::: "memory"); return g_f_38c310; }

// f_1_2_11_f_NINTENDO_SDK_v1  (orig 0x397ee0, strlit-ret)
const char *sdk_f_397ee0() { static char g_f_397ee0[1]; __asm__ volatile("" ::: "memory"); return g_f_397ee0; }

// sub_397ef0  (orig 0x397ef0, mov_ret)
uint32_t sdk_f_397ef0() { return 169; }

// sub_398620  (orig 0x398620, compare)
bool sdk_f_398620(void* a0, uint64_t a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) == (uint64_t)(a1); }

// sub_3986b0  (orig 0x3986b0, straight)
uint16_t sdk_f_3986b0(void* a0) { return (*(uint16_t*)((char*)(a0) + 20)) & (1); }

// sub_3986d0  (orig 0x3986d0, setter)
void sdk_f_3986d0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 12) = a1; }

// sub_3986e0  (orig 0x3986e0, straight)
void* sdk_f_3986e0(void* a0) {
    uint32_t k0 = 64;
    *(uint8_t*)((char*)(a0) + 15) = (uint8_t)k0;
    return a0;
}

// sub_3986f0  (orig 0x3986f0, getter)
uint32_t sdk_f_3986f0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_398700  (orig 0x398700, setter)
void sdk_f_398700(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_398a10  (orig 0x398a10, getter)
uint32_t sdk_f_398a10(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_398a40  (orig 0x398a40, setter)
void sdk_f_398a40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 8) = a1; }

// sub_398a50  (orig 0x398a50, setter)
void sdk_f_398a50(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_398a60  (orig 0x398a60, getter)
uint64_t sdk_f_398a60(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_398a70  (orig 0x398a70, straight)
uint64_t sdk_f_398a70(void* a0, uint64_t a1) { return (((uint64_t)a1)) + (*(uint32_t*)((char*)(a0) + 8)); }

// sub_398aa0  (orig 0x398aa0, getter)
uint32_t sdk_f_398aa0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_398da0  (orig 0x398da0, straight-line)
uint64_t sdk_f_398da0(uint64_t a0, uint32_t a1) { return ((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(24))))))) + (16); }

// sub_398db0  (orig 0x398db0, straight-line)
uint64_t sdk_f_398db0(uint64_t a0, uint32_t a1) { return ((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(24))))))) + (16); }

// sub_398dc0  (orig 0x398dc0, straight)
void sdk_f_398dc0(void* a0) {
    uint64_t k0 = 1414287967;
    *(uint32_t*)((char*)(a0)) = (uint32_t)k0;
}

// sub_398df0  (orig 0x398df0, getter)
uint32_t sdk_f_398df0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_398e00  (orig 0x398e00, setter)
void sdk_f_398e00(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 16) = a1; }

// sub_398e10  (orig 0x398e10, straight)
void sdk_f_398e10(void* a0) {
    uint64_t k0 = 1381258079;
    *(uint32_t*)((char*)(a0)) = (uint32_t)k0;
}

// sub_399980  (orig 0x399980, ret_only)
void sdk_f_399980() {}

// sub_399a60  (orig 0x399a60, indexed-getter)
uint32_t sdk_f_399a60(uint64_t a0, void* a1) { return *(uint32_t *)(((char *)a1 + a0 * 1 + -4)); }

// sub_39a2b0  (orig 0x39a2b0, setter)
void sdk_f_39a2b0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_39a2d0  (orig 0x39a2d0, setter)
void sdk_f_39a2d0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_39cac0  (orig 0x39cac0, mov_ret)
uint32_t sdk_f_39cac0() { return 9; }

// sub_39cd30  (orig 0x39cd30, ret_only)
void sdk_f_39cd30() {}

// sub_3a1d90  (orig 0x3a1d90, mov_ret)
uint64_t sdk_f_3a1d90(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_3a1da0  (orig 0x3a1da0, mov_ret)
uint64_t sdk_f_3a1da0(uint64_t a0, uint64_t a1) { return a1; }

// sub_3a21f0  (orig 0x3a21f0, straight)
uint64_t sdk_f_3a21f0(uint64_t unused0, void* a1) {
    *(uint64_t*)((char*)(a1)) = -1;
    return 0;
}

// sub_3a23b0  (orig 0x3a23b0, mov_ret)
uint32_t sdk_f_3a23b0() { return 1; }

// sub_3a23e0  (orig 0x3a23e0, ret_only)
void sdk_f_3a23e0() {}

// sub_3a2400  (orig 0x3a2400, mov_ret)
uint32_t sdk_f_3a2400() { return 1; }

// sub_3a2410  (orig 0x3a2410, ret_only)
void sdk_f_3a2410() {}

// sub_3a2430  (orig 0x3a2430, mov_ret)
uint32_t sdk_f_3a2430() { return 1; }

// sub_3a26d0  (orig 0x3a26d0, straight)
uint64_t sdk_f_3a26d0(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(p0) + 80) = (*(uint64_t*)((char*)(a0) + 80)) + (((uint64_t)a1));
    return ((uint64_t)a1);
}

// sub_3a2ac0  (orig 0x3a2ac0, setter)
void sdk_f_3a2ac0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_3a2e80  (orig 0x3a2e80, straight)
void* sdk_f_3a2e80(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1));
    *(uint64_t*)((char*)(p1) + 8) = *(uint64_t*)((char*)(p0) + 8);
    *(uint64_t*)((char*)(p0)) = 0;
    *(uint64_t*)((char*)(p0) + 8) = 0;
    return a0;
}

// sub_3a2ef0  (orig 0x3a2ef0, compare)
bool sdk_f_3a2ef0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 8)) != (uint64_t)(0); }

// sub_3a31b0  (orig 0x3a31b0, call)
extern void callee_528c60();
uint64_t sdk_f_3a31b0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_528c60)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a31d0  (orig 0x3a31d0, call)
extern void callee_528c70();
uint64_t sdk_f_3a31d0() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_528c70)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a3250  (orig 0x3a3250, call)
extern void callee_528ca0();
uint64_t sdk_f_3a3250() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_528ca0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a3270  (orig 0x3a3270, call)
extern void callee_528cb0();
uint64_t sdk_f_3a3270() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_528cb0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a3290  (orig 0x3a3290, call)
extern void callee_528cc0();
uint64_t sdk_f_3a3290() {
    uint64_t r0 = (((uint64_t (*)(void))&callee_528cc0)()) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a39a0  (orig 0x3a39a0, strlit-ret)
const char *sdk_f_3a39a0() { static char g_f_3a39a0[1]; __asm__ volatile("" ::: "memory"); return g_f_3a39a0; }

// sub_3a4d80  (orig 0x3a4d80, ptr_add)
void* sdk_f_3a4d80(void* a0) { return (char*)a0 + 16; }

// sub_3a4ef0  (orig 0x3a4ef0, ptr_add)
void* sdk_f_3a4ef0(void* a0) { return (char*)a0 + 8; }

// sub_3a4f00  (orig 0x3a4f00, straight)
void* sdk_f_3a4f00(void* a0) { return (char*)(a0) - 8; }

// sub_3a5080  (orig 0x3a5080, ptr_add)
void* sdk_f_3a5080(void* a0) { return (char*)a0 + 16; }

// sub_3a5310  (orig 0x3a5310, call)
extern void callee_51dff0();
uint64_t sdk_f_3a5310(void* a0, uint64_t a1, void* a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51dff0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(*(uint64_t*)((char*)(a2)))), ((uintptr_t)(((*(uint64_t*)((char*)(a2) + 8)) + (((*(uint64_t*)((char*)(a2) + 8)) << 1))) << (5))), ((uintptr_t)(1000)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5340  (orig 0x3a5340, call)
extern void callee_528df0();
uint64_t sdk_f_3a5340(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528df0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(1010)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5360  (orig 0x3a5360, call)
extern void callee_5127d0();
uint64_t sdk_f_3a5360(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5127d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1011)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5380  (orig 0x3a5380, call)
extern void callee_5128a0();
uint64_t sdk_f_3a5380(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1020)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a53a0  (orig 0x3a53a0, call)
extern void callee_51ded0();
uint64_t sdk_f_3a53a0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51ded0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)((((uint64_t)a2)) & (1))), ((uintptr_t)(1101)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a53d0  (orig 0x3a53d0, call)
extern void callee_528e00();
uint64_t sdk_f_3a53d0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528e00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(1102)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5430  (orig 0x3a5430, call)
extern void callee_5128a0();
uint64_t sdk_f_3a5430(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2021)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5490  (orig 0x3a5490, call)
extern void callee_5128a0();
uint64_t sdk_f_3a5490(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2031)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a54b0  (orig 0x3a54b0, call)
extern void callee_51df30();
uint64_t sdk_f_3a54b0(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51df30)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(2101)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a54e0  (orig 0x3a54e0, call)
extern void callee_51ddd0();
uint64_t sdk_f_3a54e0(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51ddd0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(2102)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a55c0  (orig 0x3a55c0, call)
extern void callee_528e50();
uint64_t sdk_f_3a55c0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528e50)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(((uint64_t)a4))), ((uintptr_t)(2460)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a55e0  (orig 0x3a55e0, call)
extern void callee_512c10();
uint64_t sdk_f_3a55e0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(5202)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5600  (orig 0x3a5600, call)
extern void callee_512c10();
uint64_t sdk_f_3a5600(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(5203)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5620  (orig 0x3a5620, ptr_add)
void* sdk_f_3a5620(void* a0) { return (char*)a0 + 8; }

// sub_3a5630  (orig 0x3a5630, straight)
void* sdk_f_3a5630(void* a0) { return (char*)(a0) - 8; }

// sub_3a57b0  (orig 0x3a57b0, ptr_add)
void* sdk_f_3a57b0(void* a0) { return (char*)a0 + 16; }

// sub_3a57c0  (orig 0x3a57c0, call)
extern void callee_515c00();
uint64_t sdk_f_3a57c0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_515c00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(1200)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a57e0  (orig 0x3a57e0, call)
extern void callee_515c00();
uint64_t sdk_f_3a57e0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_515c00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(1202)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5800  (orig 0x3a5800, call)
extern void callee_528e60();
uint64_t sdk_f_3a5800(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528e60)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(1203)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5820  (orig 0x3a5820, call)
extern void callee_528e70();
uint64_t sdk_f_3a5820(void* a0, uint64_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528e70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(((uint32_t)a5))), ((uintptr_t)(1204)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5880  (orig 0x3a5880, call)
extern void callee_51dee0();
uint64_t sdk_f_3a5880(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51dee0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(2203)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a58a0  (orig 0x3a58a0, call)
extern void callee_515c00();
uint64_t sdk_f_3a58a0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_515c00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(2204)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a58c0  (orig 0x3a58c0, call)
extern void callee_513970();
uint64_t sdk_f_3a58c0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_513970)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(2205)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a58e0  (orig 0x3a58e0, call)
extern void callee_51ded0();
uint64_t sdk_f_3a58e0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51ded0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)((((uint64_t)a2)) & (1))), ((uintptr_t)(2207)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5970  (orig 0x3a5970, call)
extern void callee_5128a0();
uint64_t sdk_f_3a5970(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2401)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5990  (orig 0x3a5990, call)
extern void callee_5128a0();
uint64_t sdk_f_3a5990(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2402)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5a40  (orig 0x3a5a40, call)
extern void callee_528e90();
uint64_t sdk_f_3a5a40(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528e90)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(3200)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5a60  (orig 0x3a5a60, call)
extern void callee_528ea0();
uint64_t sdk_f_3a5a60(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528ea0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(3201)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5a80  (orig 0x3a5a80, call)
extern void callee_515c00();
uint64_t sdk_f_3a5a80(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_515c00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(3202)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5aa0  (orig 0x3a5aa0, call)
extern void callee_513970();
uint64_t sdk_f_3a5aa0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_513970)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(3203)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5ac0  (orig 0x3a5ac0, call)
extern void callee_512c50();
uint64_t sdk_f_3a5ac0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c50)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(3204)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5ae0  (orig 0x3a5ae0, call)
extern void callee_51df30();
uint64_t sdk_f_3a5ae0(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51df30)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(3205)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5b10  (orig 0x3a5b10, call)
extern void callee_512c50();
uint64_t sdk_f_3a5b10(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c50)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(3206)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5b30  (orig 0x3a5b30, call)
extern void callee_51df30();
uint64_t sdk_f_3a5b30(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51df30)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(3207)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5b60  (orig 0x3a5b60, call)
extern void callee_512c50();
uint64_t sdk_f_3a5b60(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c50)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(3208)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5b80  (orig 0x3a5b80, call)
extern void callee_51df30();
uint64_t sdk_f_3a5b80(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51df30)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(3209)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5bb0  (orig 0x3a5bb0, call)
extern void callee_512c50();
uint64_t sdk_f_3a5bb0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c50)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(3210)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5c00  (orig 0x3a5c00, call)
extern void callee_512c50();
uint64_t sdk_f_3a5c00(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c50)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(3214)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5c50  (orig 0x3a5c50, call)
extern void callee_512c50();
uint64_t sdk_f_3a5c50(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c50)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(3216)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5cd0  (orig 0x3a5cd0, call)
extern void callee_515b10();
uint64_t sdk_f_3a5cd0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_515b10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(8250)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5cf0  (orig 0x3a5cf0, call)
extern void callee_5128a0();
uint64_t sdk_f_3a5cf0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(8251)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5d10  (orig 0x3a5d10, call)
extern void callee_5128a0();
uint64_t sdk_f_3a5d10(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(8252)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5d30  (orig 0x3a5d30, call)
extern void callee_5128a0();
uint64_t sdk_f_3a5d30(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(8253)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5d50  (orig 0x3a5d50, call)
extern void callee_528ec0();
uint64_t sdk_f_3a5d50(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528ec0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(((uint64_t)a4))), ((uintptr_t)(8254)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5da0  (orig 0x3a5da0, call)
extern void callee_512c10();
uint64_t sdk_f_3a5da0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(8256)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5df0  (orig 0x3a5df0, call)
extern void callee_513970();
uint64_t sdk_f_3a5df0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_513970)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(8258)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a5e10  (orig 0x3a5e10, ptr_add)
void* sdk_f_3a5e10(void* a0) { return (char*)a0 + 8; }

// sub_3a5e20  (orig 0x3a5e20, straight)
void* sdk_f_3a5e20(void* a0) { return (char*)(a0) - 8; }

// sub_3a7160  (orig 0x3a7160, ptr_add)
void* sdk_f_3a7160(void* a0) { return (char*)a0 + 16; }

// sub_3a7170  (orig 0x3a7170, call)
extern void callee_515c00();
uint64_t sdk_f_3a7170(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_515c00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(200)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7190  (orig 0x3a7190, call)
extern void callee_5128a0();
uint64_t sdk_f_3a7190(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(201)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a71b0  (orig 0x3a71b0, call)
extern void callee_528e00();
uint64_t sdk_f_3a71b0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528e00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(1102)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a71d0  (orig 0x3a71d0, call)
extern void callee_528ef0();
uint64_t sdk_f_3a71d0(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint64_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528ef0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint64_t)a4))), ((uintptr_t)(2010)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7200  (orig 0x3a7200, call)
extern void callee_5128a0();
uint64_t sdk_f_3a7200(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2011)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7260  (orig 0x3a7260, call)
extern void callee_5127d0();
uint64_t sdk_f_3a7260(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5127d0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2050)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7280  (orig 0x3a7280, call)
extern void callee_5128a0();
uint64_t sdk_f_3a7280(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2051)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a72a0  (orig 0x3a72a0, call)
extern void callee_51e020();
uint64_t sdk_f_3a72a0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51e020)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(2052)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a72c0  (orig 0x3a72c0, call)
extern void callee_5128a0();
uint64_t sdk_f_3a72c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2053)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a72e0  (orig 0x3a72e0, call)
extern void callee_51e020();
uint64_t sdk_f_3a72e0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51e020)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(2054)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7300  (orig 0x3a7300, call)
extern void callee_5128a0();
uint64_t sdk_f_3a7300(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2055)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7320  (orig 0x3a7320, call)
extern void callee_512c10();
uint64_t sdk_f_3a7320(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(2300)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7340  (orig 0x3a7340, call)
extern void callee_5128a0();
uint64_t sdk_f_3a7340(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(2301)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7360  (orig 0x3a7360, call)
extern void callee_512c10();
uint64_t sdk_f_3a7360(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(2302)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7380  (orig 0x3a7380, call)
extern void callee_512c10();
uint64_t sdk_f_3a7380(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(2303)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a73a0  (orig 0x3a73a0, call)
extern void callee_512c50();
uint64_t sdk_f_3a73a0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c50)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(2402)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a73f0  (orig 0x3a73f0, call)
extern void callee_512c10();
uint64_t sdk_f_3a73f0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(2601)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7440  (orig 0x3a7440, call)
extern void callee_51df30();
uint64_t sdk_f_3a7440(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51df30)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(4203)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7470  (orig 0x3a7470, call)
extern void callee_51df30();
uint64_t sdk_f_3a7470(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51df30)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(4205)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a74a0  (orig 0x3a74a0, call)
extern void callee_5128a0();
uint64_t sdk_f_3a74a0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(4206)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a74c0  (orig 0x3a74c0, call)
extern void callee_51df30();
uint64_t sdk_f_3a74c0(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51df30)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(6000)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a74f0  (orig 0x3a74f0, call)
extern void callee_51df30();
uint64_t sdk_f_3a74f0(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51df30)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(6001)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7520  (orig 0x3a7520, call)
extern void callee_51ded0();
uint64_t sdk_f_3a7520(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51ded0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)((((uint64_t)a2)) & (1))), ((uintptr_t)(6002)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7550  (orig 0x3a7550, call)
extern void callee_528f10();
uint64_t sdk_f_3a7550(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528f10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(6003)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7570  (orig 0x3a7570, call)
extern void callee_5128a0();
uint64_t sdk_f_3a7570(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(6004)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7590  (orig 0x3a7590, call)
extern void callee_5128a0();
uint64_t sdk_f_3a7590(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(6005)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a75b0  (orig 0x3a75b0, call)
extern void callee_5128a0();
uint64_t sdk_f_3a75b0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(6006)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a75d0  (orig 0x3a75d0, call)
extern void callee_5128a0();
uint64_t sdk_f_3a75d0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(6007)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a75f0  (orig 0x3a75f0, call)
extern void callee_5128a0();
uint64_t sdk_f_3a75f0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(6008)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7610  (orig 0x3a7610, call)
extern void callee_5128a0();
uint64_t sdk_f_3a7610(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(6009)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7630  (orig 0x3a7630, call)
extern void callee_512c10();
uint64_t sdk_f_3a7630(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(6010)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7650  (orig 0x3a7650, call)
extern void callee_528f20();
uint64_t sdk_f_3a7650(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint32_t a4, uint64_t a5) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528f20)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(((uint32_t)a4))), ((uintptr_t)(((uint64_t)a5))), ((uintptr_t)(6011)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7680  (orig 0x3a7680, call)
extern void callee_5128a0();
uint64_t sdk_f_3a7680(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(6012)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a76a0  (orig 0x3a76a0, call)
extern void callee_512760();
uint64_t sdk_f_3a76a0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_512760)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)((((uint64_t)a1)) & (1))), ((uintptr_t)(7000)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a76d0  (orig 0x3a76d0, call)
extern void callee_51ded0();
uint64_t sdk_f_3a76d0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51ded0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)((((uint64_t)a2)) & (1))), ((uintptr_t)(8000)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7700  (orig 0x3a7700, call)
extern void callee_51dee0();
uint64_t sdk_f_3a7700(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51dee0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(8100)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7720  (orig 0x3a7720, call)
extern void callee_528f30();
uint64_t sdk_f_3a7720(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528f30)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(392)), ((uintptr_t)(8200)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7750  (orig 0x3a7750, call)
extern void callee_528f40();
uint64_t sdk_f_3a7750(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528f40)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(((uint64_t)a4))), ((uintptr_t)(392)), ((uintptr_t)(8201)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7780  (orig 0x3a7780, call)
extern void callee_5128a0();
uint64_t sdk_f_3a7780(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(8202)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a77a0  (orig 0x3a77a0, call)
extern void callee_528f50();
uint64_t sdk_f_3a77a0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528f50)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(8203)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a77c0  (orig 0x3a77c0, call)
extern void callee_515b10();
uint64_t sdk_f_3a77c0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_515b10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(8204)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a77e0  (orig 0x3a77e0, call)
extern void callee_5128a0();
uint64_t sdk_f_3a77e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(8207)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7800  (orig 0x3a7800, call)
extern void callee_513970();
uint64_t sdk_f_3a7800(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_513970)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(8208)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7820  (orig 0x3a7820, call)
extern void callee_5128a0();
uint64_t sdk_f_3a7820(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(8209)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7840  (orig 0x3a7840, call)
extern void callee_515c00();
uint64_t sdk_f_3a7840(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_515c00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(8210)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7860  (orig 0x3a7860, call)
extern void callee_5128a0();
uint64_t sdk_f_3a7860(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(8211)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7880  (orig 0x3a7880, call)
extern void callee_528f60();
uint64_t sdk_f_3a7880(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528f60)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(8216)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a78a0  (orig 0x3a78a0, call)
extern void callee_5128a0();
uint64_t sdk_f_3a78a0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(8217)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a78c0  (orig 0x3a78c0, call)
extern void callee_5128a0();
uint64_t sdk_f_3a78c0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(8218)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a78e0  (orig 0x3a78e0, call)
extern void callee_5128a0();
uint64_t sdk_f_3a78e0(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5128a0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(8219)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7900  (orig 0x3a7900, call)
extern void callee_512c10();
uint64_t sdk_f_3a7900(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(8220)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7920  (orig 0x3a7920, call)
extern void callee_512c10();
uint64_t sdk_f_3a7920(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c10)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(8221)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7940  (orig 0x3a7940, call)
extern void callee_515c00();
uint64_t sdk_f_3a7940(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_515c00)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(8222)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7960  (orig 0x3a7960, call)
extern void callee_513970();
uint64_t sdk_f_3a7960(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_513970)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(8223)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7980  (orig 0x3a7980, call)
extern void callee_513970();
uint64_t sdk_f_3a7980(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_513970)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(8224)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a79a0  (orig 0x3a79a0, call)
extern void callee_528f30();
uint64_t sdk_f_3a79a0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528f30)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(392)), ((uintptr_t)(8227)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a79d0  (orig 0x3a79d0, call)
extern void callee_512c50();
uint64_t sdk_f_3a79d0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_512c50)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(8228)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a79f0  (orig 0x3a79f0, call)
extern void callee_51df30();
uint64_t sdk_f_3a79f0(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51df30)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint32_t)a2))), ((uintptr_t)(8229)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7a20  (orig 0x3a7a20, call)
extern void callee_51dee0();
uint64_t sdk_f_3a7a20(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_51dee0)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(8291)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7a40  (orig 0x3a7a40, call)
extern void callee_528f70();
uint64_t sdk_f_3a7a40(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint64_t a4) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528f70)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint32_t)a3))), ((uintptr_t)(((uint64_t)a4))), ((uintptr_t)(8292)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7bb0  (orig 0x3a7bb0, call)
extern void callee_528f60();
uint64_t sdk_f_3a7bb0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_528f60)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))), ((uintptr_t)(8298)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3a7bd0  (orig 0x3a7bd0, ptr_add)
void* sdk_f_3a7bd0(void* a0) { return (char*)a0 + 8; }

// sub_3a7be0  (orig 0x3a7be0, straight)
void* sdk_f_3a7be0(void* a0) { return (char*)(a0) - 8; }

// sub_3aa290  (orig 0x3aa290, ptr_add)
void* sdk_f_3aa290(void* a0) { return (char*)a0 + 16; }

// sub_3aa350  (orig 0x3aa350, ptr_add)
void* sdk_f_3aa350(void* a0) { return (char*)a0 + 8; }

// sub_3aa360  (orig 0x3aa360, straight)
void* sdk_f_3aa360(void* a0) { return (char*)(a0) - 8; }

// sub_3aa3d0  (orig 0x3aa3d0, ret_only)
void sdk_f_3aa3d0() {}

// sub_3aa640  (orig 0x3aa640, ptr_add)
void* sdk_f_3aa640(void* a0) { return (char*)a0 + 16; }

// sub_3aa7b0  (orig 0x3aa7b0, ptr_add)
void* sdk_f_3aa7b0(void* a0) { return (char*)a0 + 8; }

// sub_3aa7c0  (orig 0x3aa7c0, straight)
void* sdk_f_3aa7c0(void* a0) { return (char*)(a0) - 8; }

// sub_3add30  (orig 0x3add30, mov_ret)
uint32_t sdk_f_3add30() { return 5746; }

// sub_3addd0  (orig 0x3addd0, call)
extern void sub_3ade40();
uint64_t sdk_f_3addd0(uint64_t a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&sub_3ade40)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(0)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3ae1b0  (orig 0x3ae1b0, mov_ret)
uint64_t sdk_f_3ae1b0() { return 0; }

// sub_3ae760  (orig 0x3ae760, ret_only)
void sdk_f_3ae760() {}

// sub_3ae770  (orig 0x3ae770, ret_only)
void sdk_f_3ae770() {}

// sub_3ae7c0  (orig 0x3ae7c0, ret_only)
void sdk_f_3ae7c0() {}

// sub_3ae8b0  (orig 0x3ae8b0, strlit-ret)
const char *sdk_f_3ae8b0() { static char g_f_3ae8b0[1]; __asm__ volatile("" ::: "memory"); return g_f_3ae8b0; }

// sub_3aead0  (orig 0x3aead0, strlit-ret)
const char *sdk_f_3aead0() { static char g_f_3aead0[1]; __asm__ volatile("" ::: "memory"); return g_f_3aead0; }

// sub_3af280  (orig 0x3af280, straight-line)
uint64_t sdk_f_3af280(uint64_t a0, uint32_t a1) { return ((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(24))))))) + (32); }

// sub_3af500  (orig 0x3af500, ret_only)
void sdk_f_3af500() {}

// sub_3b05b0  (orig 0x3b05b0, getter)
uint64_t sdk_f_3b05b0(void* a0) { return *(uint64_t*)((char*)(a0) + 992); }

// sub_3b05c0  (orig 0x3b05c0, ret_only)
void sdk_f_3b05c0() {}

// sub_3b0760  (orig 0x3b0760, straight-line)
void* sdk_f_3b0760(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    return (((*(uint64_t*)((char*)(a0) + 8) == 0)) ? (void *)(uintptr_t)(0) : ((char*)(p0) + 16));
}

// sub_3b0a10  (orig 0x3b0a10, setter-chain-zero)
void sdk_f_3b0a10(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 256) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 240) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 224) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 208) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 192) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 176) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 160) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 144) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 128) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 112) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 96) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 80) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 64) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 48) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
}

// sub_3b0a60  (orig 0x3b0a60, ret_only)
void sdk_f_3b0a60() {}

// sub_3b11f0  (orig 0x3b11f0, straight)
uint64_t sdk_f_3b11f0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 120);
    return 0;
}

// sub_3b15e0  (orig 0x3b15e0, straight)
void sdk_f_3b15e0(void* a0) {
    *(uint64_t*)((char*)(a0)) = 3092376454400;
    *(uint32_t*)((char*)(a0) + 8) = 0;
}

// sub_3b1610  (orig 0x3b1610, getter)
uint32_t sdk_f_3b1610(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_3b1620  (orig 0x3b1620, setter)
void sdk_f_3b1620(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0)) = a1; }

// sub_3b1630  (orig 0x3b1630, getter)
uint32_t sdk_f_3b1630(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_3b1640  (orig 0x3b1640, setter)
void sdk_f_3b1640(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 4) = a1; }

// sub_3b1660  (orig 0x3b1660, straight)
uint32_t sdk_f_3b1660(void* a0) { return (*(uint32_t*)((char*)(a0) + 8)) & (1); }

// sub_3b2ab0  (orig 0x3b2ab0, ret_only)
void sdk_f_3b2ab0() {}

// sub_3b2af0  (orig 0x3b2af0, getter)
uint32_t sdk_f_3b2af0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_3b2b00  (orig 0x3b2b00, ptr_add)
void* sdk_f_3b2b00(void* a0) { return (char*)a0 + 8; }

// sub_3b2b10  (orig 0x3b2b10, getter)
uint64_t sdk_f_3b2b10(void* a0) { return *(uint64_t*)((char*)(a0) + 4104L); }

// sub_3b4160  (orig 0x3b4160, setter)
void sdk_f_3b4160(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_3b4170  (orig 0x3b4170, ret_only)
void sdk_f_3b4170() {}

// sub_3b4180  (orig 0x3b4180, mov_ret)
uint32_t sdk_f_3b4180() { return 208; }

// sub_3b43e0  (orig 0x3b43e0, compare-pred)
bool sdk_f_3b43e0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(*(uint64_t*)(char*)a0) + 32)) != (uint64_t)(0); }

// sub_3b5360  (orig 0x3b5360, ret_only)
void sdk_f_3b5360() {}

// sub_3b53a0  (orig 0x3b53a0, getter)
uint32_t sdk_f_3b53a0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_3b53b0  (orig 0x3b53b0, ptr_add)
void* sdk_f_3b53b0(void* a0) { return (char*)a0 + 8; }

// sub_3b53c0  (orig 0x3b53c0, getter)
uint64_t sdk_f_3b53c0(void* a0) { return *(uint64_t*)((char*)(a0) + 4104L); }

// sub_3b5a40  (orig 0x3b5a40, ret_only)
void sdk_f_3b5a40() {}

// sub_3b5a50  (orig 0x3b5a50, setter)
void sdk_f_3b5a50(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_3b5a60  (orig 0x3b5a60, ret_only)
void sdk_f_3b5a60() {}

// sub_3b5a70  (orig 0x3b5a70, mov_ret)
uint32_t sdk_f_3b5a70() { return 208; }

// sub_3b5cd0  (orig 0x3b5cd0, compare-pred)
bool sdk_f_3b5cd0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(*(uint64_t*)(char*)a0) + 32)) != (uint64_t)(0); }

// sub_3b6260  (orig 0x3b6260, straight-line)
uint32_t sdk_f_3b6260(uint32_t a0) { return (((((uint32_t)a0) == 0)) ? (0) : ((((((uint32_t)a0) != 256)) ? ((1) + (1)) : (1)))); }

// sub_3b6280  (orig 0x3b6280, compare)
bool sdk_f_3b6280(uint64_t a0) { return (uint32_t)(a0) == (uint64_t)(0); }

// sub_3b6290  (orig 0x3b6290, compare)
bool sdk_f_3b6290(uint64_t a0) { return (uint32_t)(a0) == (uint64_t)(256); }

// sub_3b6c70  (orig 0x3b6c70, setter)
void sdk_f_3b6c70(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_3b7700  (orig 0x3b7700, mov_ret)
uint32_t sdk_f_3b7700() { return 0; }

// sub_3b7850  (orig 0x3b7850, mov_ret)
uint32_t sdk_f_3b7850() { return 95; }

// sub_3b7970  (orig 0x3b7970, mov_ret)
uint32_t sdk_f_3b7970() { return 95; }

// sub_3b7980  (orig 0x3b7980, mov_ret)
uint32_t sdk_f_3b7980() { return 95; }

// sub_3b7990  (orig 0x3b7990, mov_ret)
uint32_t sdk_f_3b7990() { return 95; }

// sub_3b7c70  (orig 0x3b7c70, mov_ret)
uint32_t sdk_f_3b7c70() { return 95; }

// sub_3b7c80  (orig 0x3b7c80, mov_ret)
uint32_t sdk_f_3b7c80() { return 95; }

// sub_3b7c90  (orig 0x3b7c90, mov_ret)
uint32_t sdk_f_3b7c90() { return 95; }

// sub_3b7ca0  (orig 0x3b7ca0, mov_ret)
uint32_t sdk_f_3b7ca0() { return 95; }

// sub_3b7cb0  (orig 0x3b7cb0, mov_ret)
uint32_t sdk_f_3b7cb0() { return 95; }

// sub_3b7cc0  (orig 0x3b7cc0, mov_ret)
uint32_t sdk_f_3b7cc0() { return 95; }

// sub_3b81a0  (orig 0x3b81a0, mov_ret)
uint32_t sdk_f_3b81a0() { return 95; }

// sub_3b8290  (orig 0x3b8290, mov_ret)
uint32_t sdk_f_3b8290() { return 95; }

// sub_3b8330  (orig 0x3b8330, mov_ret)
uint32_t sdk_f_3b8330() { return 95; }

// sub_3b8400  (orig 0x3b8400, mov_ret)
uint32_t sdk_f_3b8400() { return 95; }

// sub_3b8460  (orig 0x3b8460, mov_ret)
uint32_t sdk_f_3b8460() { return 95; }

// sub_3b84d0  (orig 0x3b84d0, mov_ret)
uint32_t sdk_f_3b84d0() { return 95; }

// sub_3b8ba0  (orig 0x3b8ba0, mov_ret)
uint32_t sdk_f_3b8ba0() { return 95; }

// sub_3b8bb0  (orig 0x3b8bb0, mov_ret)
uint32_t sdk_f_3b8bb0() { return 38; }

// sub_3b8bc0  (orig 0x3b8bc0, mov_ret)
uint32_t sdk_f_3b8bc0() { return 38; }

// sub_3b8bd0  (orig 0x3b8bd0, mov_ret)
uint32_t sdk_f_3b8bd0() { return 38; }

// sub_3b9110  (orig 0x3b9110, mov_ret)
uint32_t sdk_f_3b9110() { return 95; }

// sub_3b92a0  (orig 0x3b92a0, mov_ret)
uint32_t sdk_f_3b92a0() { return 95; }

// sub_3b9aa0  (orig 0x3b9aa0, mov_ret)
uint32_t sdk_f_3b9aa0() { return 95; }

// sub_3b9ab0  (orig 0x3b9ab0, mov_ret)
uint32_t sdk_f_3b9ab0() { return 95; }

// sub_3b9ac0  (orig 0x3b9ac0, mov_ret)
uint32_t sdk_f_3b9ac0() { return 95; }

// sub_3b9ad0  (orig 0x3b9ad0, mov_ret)
uint32_t sdk_f_3b9ad0() { return 95; }

// sub_3b9b20  (orig 0x3b9b20, mov_ret)
uint32_t sdk_f_3b9b20() { return 95; }

// sub_3b9b30  (orig 0x3b9b30, mov_ret)
uint32_t sdk_f_3b9b30() { return 95; }

// sub_3bb8e0  (orig 0x3bb8e0, ptr_add)
void* sdk_f_3bb8e0(void* a0) { return (char*)a0 + 16; }

// sub_3bb8f0  (orig 0x3bb8f0, mov_ret)
uint64_t sdk_f_3bb8f0() { return 0; }

// sub_3bb960  (orig 0x3bb960, call)
extern void sub_3bbe30();
uint64_t sdk_f_3bb960(void* a0, uint64_t a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&sub_3bbe30)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3bb980  (orig 0x3bb980, ptr_add)
void* sdk_f_3bb980(void* a0) { return (char*)a0 + 8; }

// sub_3bb990  (orig 0x3bb990, straight)
void* sdk_f_3bb990(void* a0) { return (char*)(a0) - 8; }

// sub_3bc110  (orig 0x3bc110, ret_only)
void sdk_f_3bc110() {}

// sub_3bc120  (orig 0x3bc120, ret_only)
void sdk_f_3bc120() {}

// sub_3bc130  (orig 0x3bc130, ret_only)
void sdk_f_3bc130() {}

// sub_3bcd20  (orig 0x3bcd20, setter-chain)
void sdk_f_3bcd20(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = a2; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint32_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0) + 48) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 40) = 0; *(uint64_t*)((char*)(a0) + 56) = 0; *(uint64_t*)((char*)(a0) + 64) = 0; }

// sub_3bde10  (orig 0x3bde10, call)
extern void callee_50feb0();
uint32_t sdk_f_3bde10() {
    uint32_t r0 = ((((uint32_t (*)(void))&callee_50feb0)() == 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_3bdeb0  (orig 0x3bdeb0, compare)
bool sdk_f_3bdeb0(uint64_t a0, uint64_t a1) { return (uint64_t)(a0) == (uint64_t)(a1); }

// sub_3be5e0  (orig 0x3be5e0, ret_only)
void sdk_f_3be5e0() {}

// sub_3c2590  (orig 0x3c2590, mov_ret)
uint64_t sdk_f_3c2590() { return 0; }

// sub_3c25a0  (orig 0x3c25a0, ret_only)
void sdk_f_3c25a0() {}

// sub_3c25b0  (orig 0x3c25b0, ret_only)
void sdk_f_3c25b0() {}

// sub_3c2e10  (orig 0x3c2e10, call)
extern void callee_510e80();
uint32_t sdk_f_3c2e10() {
    callee_510e80();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_3c3430  (orig 0x3c3430, call)
extern void callee_5103b0();
uint32_t sdk_f_3c3430() {
    callee_5103b0();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_3c3450  (orig 0x3c3450, call)
extern void callee_524290();
uint32_t sdk_f_3c3450() {
    callee_524290();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_3c3470  (orig 0x3c3470, call)
extern void callee_510480();
uint32_t sdk_f_3c3470() {
    callee_510480();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_3c3490  (orig 0x3c3490, call)
extern void callee_5242a0();
uint32_t sdk_f_3c3490(uint64_t a0, uint64_t a1, uint32_t a2) {
    uint64_t f_3c3490__r0 = ((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_5242a0)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)((((uint64_t)(((uint32_t)(((uint32_t)a2)))))) * (((uint64_t)(((uint32_t)(1000))))))));
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_3c3700  (orig 0x3c3700, mov_ret)
uint32_t sdk_f_3c3700() { return 1; }

// sub_3c3710  (orig 0x3c3710, mov_ret)
uint32_t sdk_f_3c3710() { return 0; }

// sub_3c3720  (orig 0x3c3720, mov_ret)
uint32_t sdk_f_3c3720() { return 2; }

// sub_3c3730  (orig 0x3c3730, ret_only)
void sdk_f_3c3730() {}

// sub_3c3fe0  (orig 0x3c3fe0, straight)
uint32_t sdk_f_3c3fe0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 8);
    return 0;
}

// sub_3c4310  (orig 0x3c4310, strlit-ret)
const char *sdk_f_3c4310() { static char g_f_3c4310[1]; __asm__ volatile("" ::: "memory"); return g_f_3c4310; }

// sub_3c43a0  (orig 0x3c43a0, strlit-ret)
const char *sdk_f_3c43a0() { static char g_f_3c43a0[1]; __asm__ volatile("" ::: "memory"); return g_f_3c43a0; }

// sub_3c4430  (orig 0x3c4430, strlit-ret)
const char *sdk_f_3c4430() { static char g_f_3c4430[1]; __asm__ volatile("" ::: "memory"); return g_f_3c4430; }

// sub_3c44c0  (orig 0x3c44c0, strlit-ret)
const char *sdk_f_3c44c0() { static char g_f_3c44c0[1]; __asm__ volatile("" ::: "memory"); return g_f_3c44c0; }

// sub_3c4570  (orig 0x3c4570, mov_ret)
uint32_t sdk_f_3c4570() { return 1; }

// sub_3c47b0  (orig 0x3c47b0, ret_only)
void sdk_f_3c47b0() {}

// sub_3c47d0  (orig 0x3c47d0, mov_ret)
uint32_t sdk_f_3c47d0() { return 1; }

// sub_3c47e0  (orig 0x3c47e0, mov_ret)
uint32_t sdk_f_3c47e0() { return 1; }

// sub_3c47f0  (orig 0x3c47f0, ret_only)
void sdk_f_3c47f0() {}

// sub_3c4800  (orig 0x3c4800, mov_ret)
uint32_t sdk_f_3c4800() { return 1; }

// sub_3c4810  (orig 0x3c4810, ret_only)
void sdk_f_3c4810() {}

// sub_3c4830  (orig 0x3c4830, mov_ret)
uint32_t sdk_f_3c4830() { return 1; }

// sub_3c4840  (orig 0x3c4840, mov_ret)
uint32_t sdk_f_3c4840() { return 1; }

// sub_3c4850  (orig 0x3c4850, mov_ret)
uint32_t sdk_f_3c4850() { return 1; }

// sub_3c4860  (orig 0x3c4860, mov_ret)
uint32_t sdk_f_3c4860() { return 1; }

// sub_3c4870  (orig 0x3c4870, mov_ret)
uint32_t sdk_f_3c4870() { return 1; }

// sub_3c4880  (orig 0x3c4880, ret_only)
void sdk_f_3c4880() {}

// sub_3c4890  (orig 0x3c4890, ret_only)
void sdk_f_3c4890() {}

// sub_3c48a0  (orig 0x3c48a0, mov_ret)
uint32_t sdk_f_3c48a0() { return 2; }

// sub_3c48b0  (orig 0x3c48b0, mov_ret)
uint64_t sdk_f_3c48b0() { return 0; }

// sub_3c48c0  (orig 0x3c48c0, ret_only)
void sdk_f_3c48c0() {}

// sub_3c48d0  (orig 0x3c48d0, ret_only)
void sdk_f_3c48d0() {}

// sub_3c48e0  (orig 0x3c48e0, mov_ret)
uint32_t sdk_f_3c48e0() { return 1; }

// sub_3c48f0  (orig 0x3c48f0, mov_ret)
uint32_t sdk_f_3c48f0() { return 1; }

// sub_3c4900  (orig 0x3c4900, mov_ret)
uint32_t sdk_f_3c4900() { return 0; }

// sub_3c4910  (orig 0x3c4910, mov_ret)
uint32_t sdk_f_3c4910() { return 0; }

// sub_3c4920  (orig 0x3c4920, ret_only)
void sdk_f_3c4920() {}

// sub_3c5600  (orig 0x3c5600, ptr_add)
void* sdk_f_3c5600(void* a0) { return (char*)a0 + 16; }

// sub_3c5610  (orig 0x3c5610, mov_ret)
uint64_t sdk_f_3c5610() { return 0; }

// sub_3c58c0  (orig 0x3c58c0, call)
extern void ProcessImpl_6();
uint64_t sdk_f_3c58c0(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&ProcessImpl_6)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(6)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3c59a0  (orig 0x3c59a0, call)
extern void ProcessImpl_9();
uint64_t sdk_f_3c59a0(void* a0) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&ProcessImpl_9)(((uintptr_t)((char*)(a0) + 8)), ((uintptr_t)(9)))) & (4294967295);
    asm volatile("");
    return r0;
}

// sub_3c5bb0  (orig 0x3c5bb0, ptr_add)
void* sdk_f_3c5bb0(void* a0) { return (char*)a0 + 8; }

// sub_3c5bc0  (orig 0x3c5bc0, straight)
void* sdk_f_3c5bc0(void* a0) { return (char*)(a0) - 8; }

// sub_3ca050  (orig 0x3ca050, straight)
void* sdk_f_3ca050(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint64_t*)((char*)(a0) + 12) = -1;
    *(uint64_t*)((char*)(p0) + 20) = (uint64_t)k1;
    *(uint32_t*)((char*)(p0) + 32) = 0;
    *(uint32_t*)((char*)(p0) + 40) = 0;
    return a0;
}

// sub_3cbac0  (orig 0x3cbac0, straight)
uint32_t sdk_f_3cbac0(uint64_t unused0, uint64_t unused1, uint64_t unused2, void* a3, uint64_t a4, void* a5) {
    *(uint64_t*)((char*)(a5)) = a4;
    *(uint64_t*)((char*)(a3)) = 0;
    return 0;
}

// sub_3cbd40  (orig 0x3cbd40, mov_ret)
uint32_t sdk_f_3cbd40() { return 3; }

// sub_3cd9b0  (orig 0x3cd9b0, guarded)
uint32_t sdk_f_3cd9b0(void* a0) {
    if (a0) {
        return *(uint32_t*)((char*)(a0));
    }
    return 0;
}

// sub_3cda00  (orig 0x3cda00, straight-line)
uint64_t sdk_f_3cda00(void* a0) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0) + 24)) + (*(int32_t*)((char*)(a0) + 4))));
    return (((*(uint32_t*)((char*)(p0)) == 2)) ? ((*(uint64_t*)((char*)(a0) + 24)) + (*(int32_t*)((char*)(a0) + 4))) : (0));
}

// sub_3cde80  (orig 0x3cde80, getter)
uint32_t sdk_f_3cde80(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_3cec30  (orig 0x3cec30, ret_only)
void sdk_f_3cec30() {}

// sub_3ceca0  (orig 0x3ceca0, mov_ret)
uint32_t sdk_f_3ceca0() { return 33; }

// sub_3cecb0  (orig 0x3cecb0, mov_ret)
uint32_t sdk_f_3cecb0() { return 0; }

// sub_3cecc0  (orig 0x3cecc0, mov_ret)
uint32_t sdk_f_3cecc0() { return 11; }

// sub_3cf760  (orig 0x3cf760, mov_ret)
uint64_t sdk_f_3cf760() { return -1; }

// sub_3cf770  (orig 0x3cf770, mov_ret)
uint32_t sdk_f_3cf770() { return 2; }

// sub_3cf780  (orig 0x3cf780, mov_ret)
uint64_t sdk_f_3cf780() { return -1; }

// sub_3cf790  (orig 0x3cf790, ret_only)
void sdk_f_3cf790() {}

// sub_3cfa30  (orig 0x3cfa30, ret_only)
void sdk_f_3cfa30() {}

// sub_3d00f0  (orig 0x3d00f0, mov_ret)
uint32_t sdk_f_3d00f0() { return 2; }

// sub_3d0100  (orig 0x3d0100, mov_ret)
uint32_t sdk_f_3d0100() { return 2; }

// sub_3d0110  (orig 0x3d0110, mov_ret)
uint32_t sdk_f_3d0110() { return 2; }

// sub_3d0120  (orig 0x3d0120, mov_ret)
uint32_t sdk_f_3d0120() { return 2; }

// sub_3d0130  (orig 0x3d0130, mov_ret)
uint32_t sdk_f_3d0130() { return 2; }

// sub_3d0140  (orig 0x3d0140, ret_only)
void sdk_f_3d0140() {}

// sub_3d0150  (orig 0x3d0150, mov_ret)
uint32_t sdk_f_3d0150() { return 2; }

// sub_3d0740  (orig 0x3d0740, straight-line)
uint32_t sdk_f_3d0740(uint32_t a0) { return ((((uint32_t)a0)) * (24)) + (40); }

// sub_3d07c0  (orig 0x3d07c0, ret_only)
void sdk_f_3d07c0() {}

// sub_3d0d20  (orig 0x3d0d20, mov_ret)
uint32_t sdk_f_3d0d20() { return 2; }

// sub_3d1250  (orig 0x3d1250, mov_ret)
uint32_t sdk_f_3d1250() { return 0; }

// sub_3d1410  (orig 0x3d1410, mov_ret)
uint32_t sdk_f_3d1410() { return 2; }

// sub_3d1420  (orig 0x3d1420, mov_ret)
uint64_t sdk_f_3d1420() { return 0; }

// sub_3d1430  (orig 0x3d1430, mov_ret)
uint32_t sdk_f_3d1430() { return 2; }

// sub_3d1440  (orig 0x3d1440, mov_ret)
uint64_t sdk_f_3d1440() { return 0; }

// sub_3d1450  (orig 0x3d1450, ret_only)
void sdk_f_3d1450() {}

// sub_3d1460  (orig 0x3d1460, mov_ret)
uint32_t sdk_f_3d1460() { return 0; }

// sub_3d1470  (orig 0x3d1470, mov_ret)
uint32_t sdk_f_3d1470() { return 1; }

// sub_3d1480  (orig 0x3d1480, mov_ret)
uint32_t sdk_f_3d1480() { return 1; }

// sub_3d2070  (orig 0x3d2070, straight)
uint32_t sdk_f_3d2070(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = 0;
    return *(uint32_t*)((char*)(a0) + 12);
}

// sub_3d2ff0  (orig 0x3d2ff0, ret_only)
void sdk_f_3d2ff0() {}

// sub_3d3f40  (orig 0x3d3f40, mov_ret)
uint32_t sdk_f_3d3f40() { return 4; }

// sub_3d3f50  (orig 0x3d3f50, mov_ret)
uint32_t sdk_f_3d3f50() { return 2; }

// sub_3d4260  (orig 0x3d4260, mov_ret)
uint32_t sdk_f_3d4260() { return 1; }

// sub_3d4270  (orig 0x3d4270, mov_ret)
uint32_t sdk_f_3d4270() { return 1; }

// sub_3d4750  (orig 0x3d4750, mov_ret)
uint32_t sdk_f_3d4750() { return 2; }

// sub_3d4760  (orig 0x3d4760, ret_only)
void sdk_f_3d4760() {}

// sub_3d4770  (orig 0x3d4770, mov_ret)
uint32_t sdk_f_3d4770() { return 0; }

// sub_3d4780  (orig 0x3d4780, mov_ret)
uint32_t sdk_f_3d4780() { return 1; }

// sub_3d4790  (orig 0x3d4790, mov_ret)
uint32_t sdk_f_3d4790() { return 0; }

// sub_3d47a0  (orig 0x3d47a0, mov_ret)
uint32_t sdk_f_3d47a0() { return 0; }

// sub_3d4ea0  (orig 0x3d4ea0, mov_ret)
uint32_t sdk_f_3d4ea0() { return 1; }

// sub_3d4f50  (orig 0x3d4f50, mov_ret)
uint32_t sdk_f_3d4f50() { return 1; }

// sub_3d5070  (orig 0x3d5070, mov_ret)
uint32_t sdk_f_3d5070() { return 0; }

// sub_3d5080  (orig 0x3d5080, ret_only)
void sdk_f_3d5080() {}

// sub_3d5090  (orig 0x3d5090, ret_only)
void sdk_f_3d5090() {}

// sub_3d50a0  (orig 0x3d50a0, mov_ret)
uint32_t sdk_f_3d50a0() { return 2; }

// sub_3d5290  (orig 0x3d5290, ret_only)
void sdk_f_3d5290() {}

// sub_3d53e0  (orig 0x3d53e0, mov_ret)
uint32_t sdk_f_3d53e0() { return 2; }

// sub_3d53f0  (orig 0x3d53f0, mov_ret)
uint32_t sdk_f_3d53f0() { return 2; }

// sub_3d5400  (orig 0x3d5400, mov_ret)
uint32_t sdk_f_3d5400() { return 2; }

// sub_3d5410  (orig 0x3d5410, mov_ret)
uint32_t sdk_f_3d5410() { return 2; }

// sub_3d5420  (orig 0x3d5420, mov_ret)
uint32_t sdk_f_3d5420() { return 2; }

// sub_3d5430  (orig 0x3d5430, mov_ret)
uint32_t sdk_f_3d5430() { return 2; }

// sub_3d54d0  (orig 0x3d54d0, mov_ret)
uint32_t sdk_f_3d54d0() { return 2; }

// sub_3d55f0  (orig 0x3d55f0, mov_ret)
uint32_t sdk_f_3d55f0() { return 0; }

// sub_3d5600  (orig 0x3d5600, ret_only)
void sdk_f_3d5600() {}

// sub_3d5610  (orig 0x3d5610, ret_only)
void sdk_f_3d5610() {}

// sub_3d5620  (orig 0x3d5620, mov_ret)
uint64_t sdk_f_3d5620() { return 0; }

// sub_3d5630  (orig 0x3d5630, ret_only)
void sdk_f_3d5630() {}

// sub_3d5640  (orig 0x3d5640, mov_ret)
uint32_t sdk_f_3d5640() { return -1; }

// sub_3d9340  (orig 0x3d9340, ret_only)
void sdk_f_3d9340() {}

// sub_3d9350  (orig 0x3d9350, ret_only)
void sdk_f_3d9350() {}

// sub_3deed0  (orig 0x3deed0, mov_ret)
uint32_t sdk_f_3deed0() { return 0; }

// sub_3df780  (orig 0x3df780, straight)
void sdk_f_3df780(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 48) = 1;
}

// sub_3df790  (orig 0x3df790, straight)
void sdk_f_3df790(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 48) = 3;
}

// sub_3df7a0  (orig 0x3df7a0, straight)
void sdk_f_3df7a0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 48) = 1;
}

// sub_3df7b0  (orig 0x3df7b0, straight)
uint64_t sdk_f_3df7b0(uint64_t unused0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((*(int32_t*)((char*)(a1) + 44)) * (8))));
}

// sub_3ebc80  (orig 0x3ebc80, straight)
void* sdk_f_3ebc80(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 88));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(p1) + 88) = (uint64_t)((char*)(p0) + 4);
    *(uint32_t*)((char*)(p0)) = (uint32_t)(a1);
    return a0;
}

// sub_3ec7b0  (orig 0x3ec7b0, mov_ret)
uint32_t sdk_f_3ec7b0() { return 1552; }

// sub_3edac0  (orig 0x3edac0, mov_ret)
uint32_t sdk_f_3edac0() { return 1; }

// sub_3edad0  (orig 0x3edad0, straight-line)
uint32_t sdk_f_3edad0(uint64_t unused0, uint32_t a1) { return (((((uint32_t)a1) & (uint64_t)(255))) ? ((1) + (1)) : (1)); }

// sub_3edae0  (orig 0x3edae0, ret_only)
void sdk_f_3edae0() {}

// sub_3eddd0  (orig 0x3eddd0, compare)
bool sdk_f_3eddd0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 32)) == (uint64_t)(2); }

// sub_3ede20  (orig 0x3ede20, straight)
uint32_t sdk_f_3ede20(void* a0) { return ((*(uint32_t*)((char*)(a0) + 36)) >> (14)) & (1); }

// sub_3ede30  (orig 0x3ede30, compare)
bool sdk_f_3ede30(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 32)) == (uint64_t)(1); }

// sub_3ede40  (orig 0x3ede40, getter)
uint32_t sdk_f_3ede40(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_3ede50  (orig 0x3ede50, getter)
uint32_t sdk_f_3ede50(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_3ede60  (orig 0x3ede60, getter)
uint32_t sdk_f_3ede60(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_3ede70  (orig 0x3ede70, getter)
uint32_t sdk_f_3ede70(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_3ee020  (orig 0x3ee020, getter-chain)
uint32_t sdk_f_3ee020(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 328))) + 4); }

// sub_3ee080  (orig 0x3ee080, getter-chain)
uint32_t sdk_f_3ee080(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 328);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 64);
    return *(uint32_t*)((char*)(t1) + 268);
}

// sub_3ee090  (orig 0x3ee090, copy-chain-store)
void sdk_f_3ee090(void* a0, uint32_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 328);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 64);
    *(uint32_t*)((char*)(t1) + 268) = (uint32_t)a1;
}

// sub_3ee0a0  (orig 0x3ee0a0, copy-chain-store)
void sdk_f_3ee0a0(void* a0, uint64_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 328);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 64);
    *(uint64_t*)((char*)(t1) + 312) = (uint64_t)a1;
}

// sub_3ee820  (orig 0x3ee820, indirect-tailcall)
void sdk_f_3ee820(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 200)))))(((uintptr_t)(a0)));
}

// sub_3ee840  (orig 0x3ee840, indirect-tailcall)
void sdk_f_3ee840(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 216)))))(((uintptr_t)(a0)));
}

// sub_3ee850  (orig 0x3ee850, indirect-tailcall)
void sdk_f_3ee850(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 224)))))(((uintptr_t)(a0)));
}

// sub_3eeac0  (orig 0x3eeac0, indirect-tailcall)
void sdk_f_3eeac0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 72)))))(((uintptr_t)(a0)));
}

// sub_3eef60  (orig 0x3eef60, indirect-tailcall)
void sdk_f_3eef60(void* a0, uint64_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 56)))))(((uintptr_t)(a0)), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a1))));
}

// sub_3ef080  (orig 0x3ef080, indirect-tailcall)
void sdk_f_3ef080(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uint32_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 120)))))(((uintptr_t)(a0)), ((uint32_t)(0)));
}

// sub_3ef270  (orig 0x3ef270, indirect-tailcall)
void sdk_f_3ef270(void* a0, uint32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)((((uint32_t)a1)) & (1))));
}

// sub_3ef780  (orig 0x3ef780, ret_only)
void sdk_f_3ef780() {}

// sub_3ef9a0  (orig 0x3ef9a0, straight)
void* sdk_f_3ef9a0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
    return a0;
}

// sub_3efaa0  (orig 0x3efaa0, strlit-ret)
const char *sdk_f_3efaa0() { static char g_f_3efaa0[1]; __asm__ volatile("" ::: "memory"); return g_f_3efaa0; }

// sub_3efab0  (orig 0x3efab0, ret_only)
void sdk_f_3efab0() {}

// sub_3efc90  (orig 0x3efc90, mov_ret)
uint32_t sdk_f_3efc90() { return 2; }

// sub_3efca0  (orig 0x3efca0, mov_ret)
uint32_t sdk_f_3efca0() { return 2; }

// sub_3efcb0  (orig 0x3efcb0, mov_ret)
uint32_t sdk_f_3efcb0() { return 2; }

// sub_3efcc0  (orig 0x3efcc0, mov_ret)
uint32_t sdk_f_3efcc0() { return 2; }

// sub_3efcd0  (orig 0x3efcd0, mov_ret)
uint32_t sdk_f_3efcd0() { return 2; }

// sub_3efce0  (orig 0x3efce0, mov_ret)
uint32_t sdk_f_3efce0() { return 2; }

// sub_3efcf0  (orig 0x3efcf0, mov_ret)
uint32_t sdk_f_3efcf0() { return 2; }

// sub_3efd00  (orig 0x3efd00, mov_ret)
uint32_t sdk_f_3efd00() { return 2; }

// sub_3efd10  (orig 0x3efd10, mov_ret)
uint32_t sdk_f_3efd10() { return 2; }

// sub_3efd20  (orig 0x3efd20, mov_ret)
uint32_t sdk_f_3efd20() { return 2; }

// sub_3efd30  (orig 0x3efd30, mov_ret)
uint32_t sdk_f_3efd30() { return 2; }

// sub_3efd40  (orig 0x3efd40, mov_ret)
uint32_t sdk_f_3efd40() { return 2; }

// sub_3efd50  (orig 0x3efd50, mov_ret)
uint32_t sdk_f_3efd50() { return 2; }

// sub_3efd70  (orig 0x3efd70, mov_ret)
uint32_t sdk_f_3efd70() { return 2; }

// sub_3efd80  (orig 0x3efd80, mov_ret)
uint32_t sdk_f_3efd80() { return 2; }

// sub_3efd90  (orig 0x3efd90, mov_ret)
uint32_t sdk_f_3efd90() { return 2; }

// sub_3efda0  (orig 0x3efda0, mov_ret)
uint32_t sdk_f_3efda0() { return 2; }

// sub_3efdb0  (orig 0x3efdb0, mov_ret)
uint32_t sdk_f_3efdb0() { return 2; }

// sub_3efdc0  (orig 0x3efdc0, mov_ret)
uint32_t sdk_f_3efdc0() { return 2; }

// sub_3efdd0  (orig 0x3efdd0, mov_ret)
uint32_t sdk_f_3efdd0() { return 2; }

// sub_3efde0  (orig 0x3efde0, mov_ret)
uint32_t sdk_f_3efde0() { return 2; }

// sub_3efdf0  (orig 0x3efdf0, mov_ret)
uint32_t sdk_f_3efdf0() { return 2; }

// sub_3efe00  (orig 0x3efe00, mov_ret)
uint32_t sdk_f_3efe00() { return 2; }

// sub_3efe10  (orig 0x3efe10, mov_ret)
uint32_t sdk_f_3efe10() { return 2; }

// sub_3efe20  (orig 0x3efe20, mov_ret)
uint32_t sdk_f_3efe20() { return 2; }

// sub_3efe30  (orig 0x3efe30, mov_ret)
uint32_t sdk_f_3efe30() { return 2; }

// sub_3efe40  (orig 0x3efe40, mov_ret)
uint32_t sdk_f_3efe40() { return 2; }

// sub_3efe50  (orig 0x3efe50, mov_ret)
uint32_t sdk_f_3efe50() { return 2; }

// sub_3efe60  (orig 0x3efe60, mov_ret)
uint32_t sdk_f_3efe60() { return 2; }

// sub_3efe70  (orig 0x3efe70, mov_ret)
uint32_t sdk_f_3efe70() { return 2; }

// sub_3efea0  (orig 0x3efea0, mov_ret)
uint32_t sdk_f_3efea0() { return 0; }

// sub_3efee0  (orig 0x3efee0, strlit-ret)
const char *sdk_f_3efee0() { static char g_f_3efee0[1]; __asm__ volatile("" ::: "memory"); return g_f_3efee0; }

// sub_3eff10  (orig 0x3eff10, strlit-ret)
const char *sdk_f_3eff10() { static char g_f_3eff10[1]; __asm__ volatile("" ::: "memory"); return g_f_3eff10; }

// sub_3eff20  (orig 0x3eff20, mov_ret)
uint32_t sdk_f_3eff20() { return 2; }

// sub_3eff50  (orig 0x3eff50, mov_ret)
uint32_t sdk_f_3eff50() { return 2; }

// sub_3eff60  (orig 0x3eff60, mov_ret)
uint32_t sdk_f_3eff60() { return 2; }

// sub_3eff70  (orig 0x3eff70, mov_ret)
uint32_t sdk_f_3eff70() { return 2; }

// sub_3eff80  (orig 0x3eff80, mov_ret)
uint32_t sdk_f_3eff80() { return 2; }

// sub_3eff90  (orig 0x3eff90, mov_ret)
uint32_t sdk_f_3eff90() { return 2; }

// sub_3effa0  (orig 0x3effa0, mov_ret)
uint32_t sdk_f_3effa0() { return 2; }

// sub_3effb0  (orig 0x3effb0, mov_ret)
uint32_t sdk_f_3effb0() { return 2; }

// sub_3effc0  (orig 0x3effc0, mov_ret)
uint32_t sdk_f_3effc0() { return 2; }

// sub_3effd0  (orig 0x3effd0, mov_ret)
uint32_t sdk_f_3effd0() { return 2; }

// sub_3effe0  (orig 0x3effe0, mov_ret)
uint32_t sdk_f_3effe0() { return 2; }

// sub_3efff0  (orig 0x3efff0, mov_ret)
uint32_t sdk_f_3efff0() { return 2; }

// sub_3f0000  (orig 0x3f0000, mov_ret)
uint32_t sdk_f_3f0000() { return 2; }

// sub_3f0010  (orig 0x3f0010, mov_ret)
uint32_t sdk_f_3f0010() { return 2; }

// sub_3f0020  (orig 0x3f0020, mov_ret)
uint32_t sdk_f_3f0020() { return 2; }

// sub_3f0030  (orig 0x3f0030, strlit-ret)
const char *sdk_f_3f0030() { static char g_f_3f0030[1]; __asm__ volatile("" ::: "memory"); return g_f_3f0030; }

// sub_3f0080  (orig 0x3f0080, mov_ret)
uint32_t sdk_f_3f0080() { return 2; }

// sub_3f0090  (orig 0x3f0090, mov_ret)
uint32_t sdk_f_3f0090() { return 2; }

// sub_3f00a0  (orig 0x3f00a0, mov_ret)
uint32_t sdk_f_3f00a0() { return 2; }

// sub_3f00b0  (orig 0x3f00b0, mov_ret)
uint32_t sdk_f_3f00b0() { return 2; }

// sub_3f00c0  (orig 0x3f00c0, mov_ret)
uint32_t sdk_f_3f00c0() { return 2; }

// sub_3f00d0  (orig 0x3f00d0, mov_ret)
uint32_t sdk_f_3f00d0() { return 2; }

// sub_3f00e0  (orig 0x3f00e0, mov_ret)
uint32_t sdk_f_3f00e0() { return 2; }

// sub_3f00f0  (orig 0x3f00f0, mov_ret)
uint32_t sdk_f_3f00f0() { return 2; }

// sub_3f0100  (orig 0x3f0100, mov_ret)
uint32_t sdk_f_3f0100() { return 2; }

// sub_3f0110  (orig 0x3f0110, mov_ret)
uint32_t sdk_f_3f0110() { return 2; }

// sub_3f0120  (orig 0x3f0120, mov_ret)
uint32_t sdk_f_3f0120() { return 2; }

// sub_3f0130  (orig 0x3f0130, mov_ret)
uint32_t sdk_f_3f0130() { return 2; }

// sub_3f0140  (orig 0x3f0140, mov_ret)
uint32_t sdk_f_3f0140() { return 2; }

// sub_3f0150  (orig 0x3f0150, strlit-ret)
const char *sdk_f_3f0150() { static char g_f_3f0150[1]; __asm__ volatile("" ::: "memory"); return g_f_3f0150; }

// sub_3f0180  (orig 0x3f0180, strlit-ret)
const char *sdk_f_3f0180() { static char g_f_3f0180[1]; __asm__ volatile("" ::: "memory"); return g_f_3f0180; }

// sub_3f0190  (orig 0x3f0190, mov_ret)
uint32_t sdk_f_3f0190() { return 2; }

// sub_3f01a0  (orig 0x3f01a0, strlit-ret)
const char *sdk_f_3f01a0() { static char g_f_3f01a0[1]; __asm__ volatile("" ::: "memory"); return g_f_3f01a0; }

// sub_3f0340  (orig 0x3f0340, strlit-ret)
const char *sdk_f_3f0340() { static char g_f_3f0340[1]; __asm__ volatile("" ::: "memory"); return g_f_3f0340; }

// sub_3f0350  (orig 0x3f0350, mov_ret)
uint32_t sdk_f_3f0350() { return 2; }

// sub_3f0360  (orig 0x3f0360, mov_ret)
uint32_t sdk_f_3f0360() { return 2; }

// sub_3f0370  (orig 0x3f0370, mov_ret)
uint32_t sdk_f_3f0370() { return 2; }

// sub_3f0380  (orig 0x3f0380, mov_ret)
uint32_t sdk_f_3f0380() { return 2; }

// sub_3f0390  (orig 0x3f0390, mov_ret)
uint32_t sdk_f_3f0390() { return 2; }

// sub_3f03a0  (orig 0x3f03a0, mov_ret)
uint32_t sdk_f_3f03a0() { return 2; }

// sub_3f03d0  (orig 0x3f03d0, strlit-ret)
const char *sdk_f_3f03d0() { static char g_f_3f03d0[1]; __asm__ volatile("" ::: "memory"); return g_f_3f03d0; }

// sub_3f03e0  (orig 0x3f03e0, setter-chain)
void sdk_f_3f03e0(uint64_t unused0, void* a1) { *(uint64_t*)((char*)(a1) + 16) = 0; *(uint64_t*)((char*)(a1) + 24) = 0; *(uint64_t*)((char*)(a1)) = 0; *(uint64_t*)((char*)(a1) + 8) = 0; }

// sub_3f0470  (orig 0x3f0470, ret_only)
void sdk_f_3f0470() {}

// sub_3f0490  (orig 0x3f0490, ret_only)
void sdk_f_3f0490() {}

// sub_3f04b0  (orig 0x3f04b0, ret_only)
void sdk_f_3f04b0() {}

// sub_3f0f70  (orig 0x3f0f70, straight-line)
uint16_t sdk_f_3f0f70(void* a0, void* a1) { return (((*(uint16_t*)((char*)(a0)) >= *(uint16_t*)((char*)(a1)))) ? (((*(uint16_t*)((char*)(a0)) > *(uint16_t*)((char*)(a1))) ? 1 : 0)) : ((0) - (1))); }

// sub_3f14f0  (orig 0x3f14f0, call)
extern void sub_3f1510();
uint32_t sdk_f_3f14f0() {
    uint32_t r0 = ((((uint32_t (*)(void))&sub_3f1510)() != 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_3f29e0  (orig 0x3f29e0, ptr_add)
void* sdk_f_3f29e0(void* a0) { return (char*)a0 + 24; }

// sub_3f29f0  (orig 0x3f29f0, getter)
uint64_t sdk_f_3f29f0(void* a0) { return *(uint64_t*)((char*)(a0) + 752); }

// sub_3f2a00  (orig 0x3f2a00, getter)
uint64_t sdk_f_3f2a00(void* a0) { return *(uint64_t*)((char*)(a0) + 760); }

// sub_3f2c00  (orig 0x3f2c00, mov_ret)
uint32_t sdk_f_3f2c00() { return 2; }

// sub_3f2c10  (orig 0x3f2c10, mov_ret)
uint32_t sdk_f_3f2c10() { return 2; }

// sub_3f2c20  (orig 0x3f2c20, mov_ret)
uint32_t sdk_f_3f2c20() { return 2; }

// sub_3f2c30  (orig 0x3f2c30, mov_ret)
uint32_t sdk_f_3f2c30() { return 2; }

// sub_3f2c40  (orig 0x3f2c40, mov_ret)
uint32_t sdk_f_3f2c40() { return 2; }

// sub_3f2f90  (orig 0x3f2f90, mov_ret)
uint32_t sdk_f_3f2f90() { return 0; }

// sub_3f2fa0  (orig 0x3f2fa0, mov_ret)
uint32_t sdk_f_3f2fa0() { return 2; }

// sub_3f3250  (orig 0x3f3250, mov_ret)
uint32_t sdk_f_3f3250() { return 0; }

// sub_3f3290  (orig 0x3f3290, struct-copy)
void sdk_f_3f3290(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)((char*)a0 + 24);
    uint64_t v1 = *(uint64_t*)((char*)a0 + 40);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_3f3370  (orig 0x3f3370, mov_ret)
uint32_t sdk_f_3f3370() { return 2; }

// sub_3f3380  (orig 0x3f3380, mov_ret)
uint32_t sdk_f_3f3380() { return 2; }

// sub_3f3390  (orig 0x3f3390, mov_ret)
uint32_t sdk_f_3f3390() { return 2; }

// sub_3f33a0  (orig 0x3f33a0, mov_ret)
uint32_t sdk_f_3f33a0() { return 2; }

// sub_3f35f0  (orig 0x3f35f0, ret_only)
void sdk_f_3f35f0() {}

// sub_3f3600  (orig 0x3f3600, straight)
uint32_t sdk_f_3f3600(uint64_t unused0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a1)) = 0;
    *(uint64_t*)((char*)(a2)) = 0;
    return 0;
}

// sub_3f3610  (orig 0x3f3610, straight)
uint32_t sdk_f_3f3610(uint64_t unused0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a1)) = 0;
    *(uint64_t*)((char*)(a2)) = 0;
    return 0;
}

// sub_3f3620  (orig 0x3f3620, straight)
uint32_t sdk_f_3f3620(uint64_t unused0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a1)) = 0;
    *(uint64_t*)((char*)(a2)) = 0;
    return 0;
}

// sub_3f3630  (orig 0x3f3630, straight)
uint32_t sdk_f_3f3630(uint64_t unused0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a1)) = 0;
    *(uint64_t*)((char*)(a2)) = 0;
    return 0;
}

// sub_3f3640  (orig 0x3f3640, mov_ret)
uint32_t sdk_f_3f3640() { return 1; }

// sub_3f3650  (orig 0x3f3650, mov_ret)
uint32_t sdk_f_3f3650() { return 0; }

// sub_3f36f0  (orig 0x3f36f0, straight)
uint64_t sdk_f_3f36f0(uint64_t unused0, uint64_t a1) { return (((uint64_t)a1)) << (3); }

// sub_3f37e0  (orig 0x3f37e0, mov_ret)
uint32_t sdk_f_3f37e0() { return 65536; }

// sub_3f3ef0  (orig 0x3f3ef0, mov_ret)
uint32_t sdk_f_3f3ef0() { return 254; }

// sub_3f40d0  (orig 0x3f40d0, mov_ret)
uint32_t sdk_f_3f40d0() { return 8; }

// sub_3f4130  (orig 0x3f4130, mov_ret)
uint32_t sdk_f_3f4130() { return 512; }

// sub_3f4140  (orig 0x3f4140, mov_ret)
uint32_t sdk_f_3f4140() { return 16; }

// sub_3f4150  (orig 0x3f4150, mov_ret)
uint32_t sdk_f_3f4150() { return 160; }

// sub_3f4160  (orig 0x3f4160, mov_ret)
uint32_t sdk_f_3f4160() { return 1; }

// sub_3f4170  (orig 0x3f4170, mov_ret)
uint32_t sdk_f_3f4170() { return 2; }

// sub_3f4180  (orig 0x3f4180, const-ret)
uint32_t sdk_f_3f4180() { return 200704u; }

// sub_3f4190  (orig 0x3f4190, mov_ret)
uint32_t sdk_f_3f4190() { return 1; }

// sub_3f41a0  (orig 0x3f41a0, mov_ret)
uint32_t sdk_f_3f41a0() { return 65536; }

// sub_3f41b0  (orig 0x3f41b0, straight)
uint32_t sdk_f_3f41b0(uint64_t unused0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(a1)) = 0;
    *(uint32_t*)((char*)(p0) + 8) = 1;
    return 0;
}

// sub_3f41d0  (orig 0x3f41d0, mov_ret)
uint32_t sdk_f_3f41d0() { return 0; }

// sub_3f4280  (orig 0x3f4280, mov_ret)
uint32_t sdk_f_3f4280() { return 21; }

// sub_3f4290  (orig 0x3f4290, mov_ret)
uint32_t sdk_f_3f4290() { return 0; }

// sub_3f43d0  (orig 0x3f43d0, const-ret)
uint32_t sdk_f_3f43d0() { return 2166784u; }

// sub_3f43e0  (orig 0x3f43e0, straight)
uint32_t sdk_f_3f43e0(uint64_t unused0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(a1)) = 0;
    *(uint32_t*)((char*)(p0) + 8) = 1;
    return 0;
}

// sub_3f4530  (orig 0x3f4530, compare)
bool sdk_f_3f4530(uint64_t unused0, uint64_t unused1, uint64_t a2) { return (uint32_t)(a2) != (uint64_t)(2); }

// sub_3f4540  (orig 0x3f4540, mov_ret)
uint32_t sdk_f_3f4540() { return 4096; }

// sub_3f48f0  (orig 0x3f48f0, straight)
uint64_t sdk_f_3f48f0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 64);
    return *(uint64_t*)((char*)(p0) + 56);
}

// sub_3f49a0  (orig 0x3f49a0, getter)
uint32_t sdk_f_3f49a0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_3f49b0  (orig 0x3f49b0, copy2)
void sdk_f_3f49b0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 24); }

// sub_3f4b50  (orig 0x3f4b50, getter)
uint32_t sdk_f_3f4b50(void* a0) { return *(uint32_t*)((char*)(a0) + 168); }

// sub_3f4b60  (orig 0x3f4b60, getter)
uint32_t sdk_f_3f4b60(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_3f4b70  (orig 0x3f4b70, getter)
uint32_t sdk_f_3f4b70(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_3f4b80  (orig 0x3f4b80, getter)
uint32_t sdk_f_3f4b80(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_3f4d00  (orig 0x3f4d00, getter)
uint64_t sdk_f_3f4d00(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_3f4d10  (orig 0x3f4d10, mov_ret)
uint32_t sdk_f_3f4d10() { return 0; }

// sub_3f5170  (orig 0x3f5170, getter)
uint32_t sdk_f_3f5170(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1) + 4); }

// sub_3f5180  (orig 0x3f5180, mov_ret)
uint32_t sdk_f_3f5180() { return 0; }

// sub_3f5190  (orig 0x3f5190, mov_ret)
uint32_t sdk_f_3f5190() { return 2; }

// sub_3f7500  (orig 0x3f7500, getter)
uint64_t sdk_f_3f7500(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_3f79c0  (orig 0x3f79c0, mov_ret)
uint32_t sdk_f_3f79c0() { return 2; }

// sub_3f79d0  (orig 0x3f79d0, mov_ret)
uint32_t sdk_f_3f79d0() { return 2; }

// sub_3f7e60  (orig 0x3f7e60, mov_ret)
uint32_t sdk_f_3f7e60() { return 2; }

// sub_3f91c0  (orig 0x3f91c0, ptr_add)
void* sdk_f_3f91c0(void* a0) { return (char*)a0 + 560; }

// sub_3f91d0  (orig 0x3f91d0, getter)
uint64_t sdk_f_3f91d0(void* a0) { return *(uint64_t*)((char*)(a0) + 336); }

// sub_3f91e0  (orig 0x3f91e0, getter)
uint64_t sdk_f_3f91e0(void* a0) { return *(uint64_t*)((char*)(a0) + 304); }

// sub_3f9310  (orig 0x3f9310, straight)
uint32_t sdk_f_3f9310(uint64_t unused0, void* a1) {
    *(uint64_t*)((char*)(a1)) = 0;
    return 0;
}

// sub_3f9d00  (orig 0x3f9d00, mov_ret)
uint32_t sdk_f_3f9d00() { return 2; }

// sub_3f9e50  (orig 0x3f9e50, mov_ret)
uint32_t sdk_f_3f9e50() { return 2; }

// sub_3f9e60  (orig 0x3f9e60, mov_ret)
uint32_t sdk_f_3f9e60() { return 2; }

// sub_3f9f90  (orig 0x3f9f90, mov_ret)
uint32_t sdk_f_3f9f90() { return 2; }

// sub_3fa000  (orig 0x3fa000, mov_ret)
uint32_t sdk_f_3fa000() { return 2; }

// sub_3fa010  (orig 0x3fa010, mov_ret)
uint32_t sdk_f_3fa010() { return 2; }

// sub_3fa020  (orig 0x3fa020, mov_ret)
uint32_t sdk_f_3fa020() { return 2; }

// sub_3fa030  (orig 0x3fa030, mov_ret)
uint32_t sdk_f_3fa030() { return 2; }

// sub_3fa040  (orig 0x3fa040, mov_ret)
uint32_t sdk_f_3fa040() { return 2; }

// sub_3fa050  (orig 0x3fa050, mov_ret)
uint32_t sdk_f_3fa050() { return 2; }

// sub_3fa060  (orig 0x3fa060, mov_ret)
uint32_t sdk_f_3fa060() { return 2; }

// sub_3fa070  (orig 0x3fa070, mov_ret)
uint32_t sdk_f_3fa070() { return 2; }

// sub_3fa080  (orig 0x3fa080, mov_ret)
uint32_t sdk_f_3fa080() { return 2; }

// sub_3fa090  (orig 0x3fa090, mov_ret)
uint32_t sdk_f_3fa090() { return 2; }

// sub_3fa0a0  (orig 0x3fa0a0, mov_ret)
uint32_t sdk_f_3fa0a0() { return 2; }

// sub_3fa150  (orig 0x3fa150, mov_ret)
uint32_t sdk_f_3fa150() { return 2; }

// sub_3fa560  (orig 0x3fa560, mov_ret)
uint32_t sdk_f_3fa560() { return 2; }

// sub_3fa570  (orig 0x3fa570, mov_ret)
uint32_t sdk_f_3fa570() { return 2; }

// sub_3fa6d0  (orig 0x3fa6d0, straight)
void* sdk_f_3fa6d0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 32);
    *(uint64_t*)((char*)(p1) + 8) = *(uint64_t*)((char*)(p0) + 40);
    *(uint32_t*)((char*)(p1) + 16) = *(uint32_t*)((char*)(p0) + 48);
    *(uint32_t*)((char*)(p1) + 20) = *(uint32_t*)((char*)(p0) + 52);
    return a0;
}

// sub_3fae70  (orig 0x3fae70, mov_ret)
uint32_t sdk_f_3fae70() { return 2; }

// sub_3fae80  (orig 0x3fae80, mov_ret)
uint32_t sdk_f_3fae80() { return 2; }

// sub_3fb710  (orig 0x3fb710, mov_ret)
uint32_t sdk_f_3fb710() { return 2; }

// sub_3fc040  (orig 0x3fc040, straight)
uint32_t sdk_f_3fc040(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    return (((*(uint8_t*)((char*)(p0) + 633) == 0)) ? (2) : (11));
}

// sub_3fc060  (orig 0x3fc060, mov_ret)
uint32_t sdk_f_3fc060() { return 2; }

// sub_3fc070  (orig 0x3fc070, mov_ret)
uint32_t sdk_f_3fc070() { return 2; }

// sub_3fc080  (orig 0x3fc080, mov_ret)
uint32_t sdk_f_3fc080() { return 2; }

// sub_3fc090  (orig 0x3fc090, mov_ret)
uint32_t sdk_f_3fc090() { return 2; }

// sub_3fc510  (orig 0x3fc510, getter)
uint64_t sdk_f_3fc510(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_3fc570  (orig 0x3fc570, mov_ret)
uint32_t sdk_f_3fc570() { return 0; }

// sub_3fc580  (orig 0x3fc580, straight)
void* sdk_f_3fc580(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(a1) + 16) = 0;
    *(uint64_t*)((char*)(a1) + 24) = 0;
    *(uint64_t*)((char*)(a1)) = 0;
    *(uint64_t*)((char*)(a1) + 8) = 0;
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 32);
    *(uint64_t*)((char*)(p1) + 8) = *(uint64_t*)((char*)(p0) + 24);
    *(uint64_t*)((char*)(p1) + 16) = *(uint64_t*)((char*)(p0) + 8);
    *(uint32_t*)((char*)(p1) + 24) = *(uint32_t*)((char*)(p0) + 36);
    return a0;
}

// sub_3fc5b0  (orig 0x3fc5b0, ret_only)
void sdk_f_3fc5b0() {}

// sub_3fd140  (orig 0x3fd140, mov_ret)
uint32_t sdk_f_3fd140() { return 0; }

// sub_3fd150  (orig 0x3fd150, getter)
uint64_t sdk_f_3fd150(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_3fd4b0  (orig 0x3fd4b0, getter)
uint64_t sdk_f_3fd4b0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_3fd750  (orig 0x3fd750, setter-chain)
void sdk_f_3fd750(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4, uint64_t a5) { *(uint64_t*)((char*)(a0) + 40) = a1; *(uint64_t*)((char*)(a0) + 48) = a2; *(uint64_t*)((char*)(a0) + 72) = a5; *(uint64_t*)((char*)(a0) + 56) = a3; *(uint64_t*)((char*)(a0) + 64) = a4; }

// sub_3fd7a0  (orig 0x3fd7a0, strlit-ret)
const char *sdk_f_3fd7a0() { static char g_f_3fd7a0[1]; __asm__ volatile("" ::: "memory"); return g_f_3fd7a0; }

// sub_3fd7d0  (orig 0x3fd7d0, straight-line)
uint32_t sdk_f_3fd7d0(void* a0) { return ((*(uint32_t*)((char*)(a0)) == 2220070483) ? 1 : 0); }

// sub_3fd7f0  (orig 0x3fd7f0, straight-line)
uint32_t sdk_f_3fd7f0(void* a0) { return ((*(uint32_t*)((char*)(a0)) == 2555787621) ? 1 : 0); }

// sub_3fd810  (orig 0x3fd810, straight)
uint32_t sdk_f_3fd810(uint64_t a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = a0;
    return 0;
}

// sub_3fd820  (orig 0x3fd820, ret_only)
void sdk_f_3fd820() {}

// sub_3fdae0  (orig 0x3fdae0, straight)
uint32_t sdk_f_3fdae0(uint64_t unused0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a1) + 9) = (uint8_t)k0;
    return 0;
}

// sub_3fdaf0  (orig 0x3fdaf0, getter)
uint64_t sdk_f_3fdaf0(uint64_t unused0, void* a1) { return *(uint64_t*)((char*)(a1) + 120); }

// sub_3fdbb0  (orig 0x3fdbb0, getter)
uint64_t sdk_f_3fdbb0(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_3fde90  (orig 0x3fde90, mov_ret)
uint32_t sdk_f_3fde90() { return 0; }

// sub_3fdea0  (orig 0x3fdea0, mov_ret)
uint32_t sdk_f_3fdea0() { return 0; }

// sub_3fdef0  (orig 0x3fdef0, ret_only)
void sdk_f_3fdef0() {}

// sub_3fdf00  (orig 0x3fdf00, ret_only)
void sdk_f_3fdf00() {}

// sub_3fdf10  (orig 0x3fdf10, ptr_add)
void* sdk_f_3fdf10(void* a0) { return (char*)a0 + 368; }

// sub_3fe2c0  (orig 0x3fe2c0, indirect-tailcall)
void sdk_f_3fe2c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 368));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 88)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 368))));
}

// sub_3fe300  (orig 0x3fe300, indirect-tailcall)
void sdk_f_3fe300(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 368));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 368))));
}

// sub_3fe320  (orig 0x3fe320, indirect-tailcall)
void sdk_f_3fe320(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 368));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 112)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 368))));
}

// sub_3fe330  (orig 0x3fe330, indirect-tailcall)
void sdk_f_3fe330(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 368));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 120)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 368))));
}

// sub_3fe360  (orig 0x3fe360, indirect-tailcall)
void sdk_f_3fe360(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 368));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 48)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 368))));
}

// sub_3fe3d0  (orig 0x3fe3d0, straight)
uint64_t sdk_f_3fe3d0(void* a0) { return (*(uint64_t*)((char*)(a0) + 368)) >> (3); }

// sub_3fe560  (orig 0x3fe560, indirect-tailcall)
void sdk_f_3fe560(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 368));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 8)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 368))));
}

// sub_3fe570  (orig 0x3fe570, indirect-tailcall)
void sdk_f_3fe570(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 368));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 16)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 368))));
}

// sub_3fe590  (orig 0x3fe590, indirect-tailcall)
void sdk_f_3fe590(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 368));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 40)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 368))));
}

// sub_3fe5a0  (orig 0x3fe5a0, indirect-tailcall)
void sdk_f_3fe5a0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 368));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 344)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 368))));
}

// sub_3fe5b0  (orig 0x3fe5b0, indirect-tailcall)
void sdk_f_3fe5b0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 368));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 352)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 368))));
}

// sub_3fe650  (orig 0x3fe650, strlit-ret)
const char *sdk_f_3fe650() { static char g_f_3fe650[1]; __asm__ volatile("" ::: "memory"); return g_f_3fe650; }

// sub_3fe660  (orig 0x3fe660, compare)
bool sdk_f_3fe660(uint64_t a0) { return (uint64_t)(a0) == (uint64_t)(0); }

// sub_3fe670  (orig 0x3fe670, straight-line)
uint32_t sdk_f_3fe670(void* a0) { return ((*(uint32_t*)((char*)(a0)) == 1601662564) ? 1 : 0); }

// sub_3feca0  (orig 0x3feca0, call)
extern void callee_52a0b0();
uint32_t sdk_f_3feca0(uint64_t unused0, uint64_t a1, uint64_t a2, uint64_t a3) {
    uint32_t r0 = (((((uint32_t (*)(uintptr_t, uintptr_t, uintptr_t))&callee_52a0b0)(((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3)))) == 0)) ? (0) : (2));
    asm volatile("");
    return r0;
}

// sub_3fef10  (orig 0x3fef10, getter-chain)
uint64_t sdk_f_3fef10(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 224))) + 96); }

// sub_3ffa80  (orig 0x3ffa80, straight)
uint32_t sdk_f_3ffa80(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 244);
    return 0;
}

// sub_3ffde0  (orig 0x3ffde0, indirect-tailcall)
void sdk_f_3ffde0(void* a0, uint32_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 216));
    return ((void (*)(uintptr_t, uint32_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 152)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 216))), ((uint32_t)(4)), ((uintptr_t)(((int64_t)(((int32_t)(((uint32_t)a1))))))));
}

// sub_3ffe70  (orig 0x3ffe70, ret_only)
void sdk_f_3ffe70() {}

// sub_400070  (orig 0x400070, getter)
uint64_t sdk_f_400070(void* a0) { return *(uint64_t*)((char*)(a0) + 376); }

// sub_400100  (orig 0x400100, strlit-ret)
const char *sdk_f_400100() { static char g_f_400100[1]; __asm__ volatile("" ::: "memory"); return g_f_400100; }

// sub_400110  (orig 0x400110, straight)
uint64_t sdk_f_400110(uint64_t a0) { return (((((uint64_t)a0) == 0) ? 1 : 0)) | (((((uint64_t)a0) == 1372672003) ? 1 : 0)); }

// sub_400130  (orig 0x400130, straight-line)
uint32_t sdk_f_400130(void* a0) { return ((*(uint32_t*)((char*)(a0)) == 1372672001) ? 1 : 0); }

// sub_400150  (orig 0x400150, straight-line)
uint32_t sdk_f_400150(void* a0) { return ((*(uint32_t*)((char*)(a0)) == 1372672002) ? 1 : 0); }

// sub_4004a0  (orig 0x4004a0, straight)
uint32_t sdk_f_4004a0(uint64_t unused0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a1) + 9) = (uint8_t)k0;
    return 0;
}

// sub_400540  (orig 0x400540, setter)
void sdk_f_400540(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 256) = a1; }

// sub_400970  (orig 0x400970, mov_ret)
uint32_t sdk_f_400970() { return 0; }

// sub_400980  (orig 0x400980, mov_ret)
uint32_t sdk_f_400980() { return 0; }

// sub_4009c0  (orig 0x4009c0, ret_only)
void sdk_f_4009c0() {}

// sub_4009d0  (orig 0x4009d0, ret_only)
void sdk_f_4009d0() {}

// sub_4009e0  (orig 0x4009e0, ret_only)
void sdk_f_4009e0() {}

// sub_402500  (orig 0x402500, setter)
void sdk_f_402500(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_402510  (orig 0x402510, setter-chain)
void sdk_f_402510(void* a0) { *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; __asm__ __volatile__("" ::: "memory");; *(uint64_t*)((char*)(a0) + 32) = 0; }

// sub_402520  (orig 0x402520, setter-chain)
void sdk_f_402520(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) { *(uint64_t*)((char*)(a0) + 16) = a1; *(uint64_t*)((char*)(a0) + 24) = a2; *(uint64_t*)((char*)(a0) + 32) = a3; }

// sub_402530  (orig 0x402530, getter)
uint64_t sdk_f_402530(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_402540  (orig 0x402540, getter)
uint64_t sdk_f_402540(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_402550  (orig 0x402550, getter)
uint64_t sdk_f_402550(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_402560  (orig 0x402560, getter)
uint64_t sdk_f_402560(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_4025c0  (orig 0x4025c0, ret_only)
void sdk_f_4025c0() {}

// sub_402690  (orig 0x402690, getter)
uint64_t sdk_f_402690(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_4026a0  (orig 0x4026a0, getter)
uint64_t sdk_f_4026a0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_4026b0  (orig 0x4026b0, getter)
uint64_t sdk_f_4026b0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_4026c0  (orig 0x4026c0, mov_ret)
uint64_t sdk_f_4026c0() { return 0; }

// sub_402730  (orig 0x402730, ret_only)
void sdk_f_402730() {}

// sub_402740  (orig 0x402740, setter)
void sdk_f_402740(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_402750  (orig 0x402750, setter)
void sdk_f_402750(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 16) = a1; }

// sub_402760  (orig 0x402760, getter)
uint64_t sdk_f_402760(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_402770  (orig 0x402770, getter)
uint64_t sdk_f_402770(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_402780  (orig 0x402780, straight)
void sdk_f_402780(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 109) = (uint8_t)(((((uint32_t)a1) & (uint64_t)(255)) ? 1 : 0));
}

// sub_402a40  (orig 0x402a40, straight)
uint64_t sdk_f_402a40(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    return (*(uint64_t*)((char*)(a0) + 32)) - (*(uint64_t*)((char*)(p0) + 80));
}

// sub_402a50  (orig 0x402a50, straight)
uint64_t sdk_f_402a50(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    return (*(uint64_t*)((char*)(a0) + 24)) - (*(uint64_t*)((char*)(p0) + 80));
}

// sub_402a60  (orig 0x402a60, straight-line)
uint64_t sdk_f_402a60(void* a0) { return (*(uint64_t*)((char*)(a0) + 32)) - (*(uint64_t*)((char*)(a0) + 24)); }

// sub_402a90  (orig 0x402a90, straight)
uint64_t sdk_f_402a90(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    return (*(uint64_t*)((char*)(a0) + 48)) - (*(uint64_t*)((char*)(p0) + 88));
}

// sub_404bf0  (orig 0x404bf0, getter)
uint8_t sdk_f_404bf0(void* a0) { return *(uint8_t*)((char*)(a0) + 104); }

// sub_404c00  (orig 0x404c00, ret_only)
void sdk_f_404c00() {}

// sub_40b580  (orig 0x40b580, setter)
void sdk_f_40b580(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 136) = a1; }

// sub_40b590  (orig 0x40b590, setter)
void sdk_f_40b590(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 140) = a1; }

// sub_40b5a0  (orig 0x40b5a0, getter)
uint32_t sdk_f_40b5a0(void* a0) { return *(uint32_t*)((char*)(a0) + 136); }

// sub_40b5b0  (orig 0x40b5b0, getter)
uint32_t sdk_f_40b5b0(void* a0) { return *(uint32_t*)((char*)(a0) + 140); }

// sub_40b700  (orig 0x40b700, ret_only)
void sdk_f_40b700() {}

// sub_40b710  (orig 0x40b710, ret_only)
void sdk_f_40b710() {}

// sub_40b720  (orig 0x40b720, ret_only)
void sdk_f_40b720() {}

// sub_40b730  (orig 0x40b730, ret_only)
void sdk_f_40b730() {}

// sub_40b740  (orig 0x40b740, ret_only)
void sdk_f_40b740() {}

// sub_40b750  (orig 0x40b750, ret_only)
void sdk_f_40b750() {}

// sub_40b760  (orig 0x40b760, ret_only)
void sdk_f_40b760() {}

// sub_40b770  (orig 0x40b770, ret_only)
void sdk_f_40b770() {}

// sub_40b780  (orig 0x40b780, ret_only)
void sdk_f_40b780() {}

// sub_40b790  (orig 0x40b790, ret_only)
void sdk_f_40b790() {}

// sub_40b7a0  (orig 0x40b7a0, ret_only)
void sdk_f_40b7a0() {}

// sub_40b7b0  (orig 0x40b7b0, ret_only)
void sdk_f_40b7b0() {}

// sub_40b7c0  (orig 0x40b7c0, ret_only)
void sdk_f_40b7c0() {}

// sub_40b820  (orig 0x40b820, ret_only)
void sdk_f_40b820() {}

// sub_40b830  (orig 0x40b830, getter)
uint32_t sdk_f_40b830(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_40b840  (orig 0x40b840, setter-chain)
void sdk_f_40b840(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; __asm__ __volatile__("" ::: "memory");; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_40b850  (orig 0x40b850, setter)
void sdk_f_40b850(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 4) = a1; }

// sub_40ba60  (orig 0x40ba60, getter)
uint32_t sdk_f_40ba60(void* a0) { return *(uint32_t*)((char*)(a0) + 6540L); }

// sub_40ba70  (orig 0x40ba70, straight-line)
int64_t sdk_f_40ba70(uint64_t unused0, uint32_t a1) { return ((int64_t)(((int32_t)(((uint32_t)a1))))); }

// sub_40bad0  (orig 0x40bad0, straight-line)
int64_t sdk_f_40bad0(uint64_t unused0, uint32_t a1) { return (((int64_t)(((int32_t)(((uint32_t)a1)))))) | (4294967296); }

// sub_40bae0  (orig 0x40bae0, straight-line)
int64_t sdk_f_40bae0(uint64_t unused0, uint32_t a1) { return (((int64_t)(((int32_t)(((uint32_t)a1)))))) | (4294967296); }

// sub_40baf0  (orig 0x40baf0, straight-line)
int64_t sdk_f_40baf0(uint64_t unused0, uint32_t a1, uint32_t a2) { return (((int64_t)(((int32_t)((((uint32_t)a1)) | (((((uint32_t)a2)) << 20))))))) | (4294967296); }

// sub_40bb00  (orig 0x40bb00, straight-line)
uint64_t sdk_f_40bb00(void* a0, void* a1) { return ((((uint64_t)(((*(uint64_t*)((char*)(a1) + 8)) - (((((uint64_t)(*(uint64_t*)((char*)(a1) + 8)))) / (((uint64_t)(*(uint32_t*)((char*)(a0) + 92))))) * (*(uint32_t*)((char*)(a0) + 92)))) * (*(uint32_t*)((char*)(a0) + 88))))) / (((uint64_t)(*(uint32_t*)((char*)(a0) + 92))))) + (((((uint64_t)(*(uint64_t*)((char*)(a1) + 8)))) / (((uint64_t)(*(uint32_t*)((char*)(a0) + 92))))) * (*(uint32_t*)((char*)(a0) + 88))); }

// sub_40bb20  (orig 0x40bb20, getter)
uint32_t sdk_f_40bb20(void* a0) { return *(uint32_t*)((char*)(a0) + 6536L); }

// sub_40bb40  (orig 0x40bb40, mov_ret)
uint32_t sdk_f_40bb40() { return 0; }

// sub_40bb90  (orig 0x40bb90, setter)
void sdk_f_40bb90(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 6540L) = a1; }

// sub_40bba0  (orig 0x40bba0, ret_only)
void sdk_f_40bba0() {}

// sub_40bbb0  (orig 0x40bbb0, setter)
void sdk_f_40bbb0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 6536L) = a1; }

// sub_40bbc0  (orig 0x40bbc0, ret_only)
void sdk_f_40bbc0() {}

// sub_40c040  (orig 0x40c040, ret_only)
void sdk_f_40c040() {}

// sub_40c050  (orig 0x40c050, setter-chain)
void sdk_f_40c050(void* a0, uint32_t a1, uint64_t a2) { *(uint32_t*)((char*)(a0) + 8) = a1; *(uint64_t*)((char*)(a0) + 16) = a2; }

// sub_40c060  (orig 0x40c060, straight)
uint32_t sdk_f_40c060(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 16);
    return *(uint32_t*)((char*)(p0) + 8);
}

// sub_40c070  (orig 0x40c070, compare)
bool sdk_f_40c070(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 6584L)) != (uint64_t)(0); }

// sub_40d550  (orig 0x40d550, ret_only)
void sdk_f_40d550() {}

// sub_40d570  (orig 0x40d570, strlit-ret)
const char *sdk_f_40d570() { static char g_f_40d570[1]; __asm__ volatile("" ::: "memory"); return g_f_40d570; }

// sub_40d740  (orig 0x40d740, straight)
uint64_t sdk_f_40d740(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 8);
    return *(uint64_t*)((char*)(p0));
}

// sub_40d7e0  (orig 0x40d7e0, ret_only)
void sdk_f_40d7e0() {}

// sub_40d7f0  (orig 0x40d7f0, getter-chain)
uint32_t sdk_f_40d7f0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 8)))); }

// sub_40db50  (orig 0x40db50, mov_ret)
uint32_t sdk_f_40db50(uint32_t a0, uint32_t a1) { return a1; }

// sub_40db60  (orig 0x40db60, getter)
uint32_t sdk_f_40db60(void* a0) { return *(uint32_t*)((char*)(a0) + 144); }

// sub_40dd60  (orig 0x40dd60, mov_ret)
uint32_t sdk_f_40dd60() { return 0; }

// sub_40dd70  (orig 0x40dd70, compare)
bool sdk_f_40dd70(uint64_t a0, uint64_t a1) { return (uint32_t)(a0) == (uint32_t)(a1); }

// sub_40dd80  (orig 0x40dd80, mov_ret)
uint64_t sdk_f_40dd80() { return 0; }

// sub_40e1e0  (orig 0x40e1e0, call)
extern void callee_5296f0();
uint32_t sdk_f_40e1e0() {
    callee_5296f0();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_40e3d0  (orig 0x40e3d0, mov_ret)
uint64_t sdk_f_40e3d0() { return 0; }

// sub_40e3e0  (orig 0x40e3e0, ret_only)
void sdk_f_40e3e0() {}

// sub_40e400  (orig 0x40e400, mov_ret)
uint32_t sdk_f_40e400() { return 1; }

// sub_40e410  (orig 0x40e410, delegator)
extern void callee_52a170();
void sdk_f_40e410(unsigned long a0) { ((void(*)(unsigned long))callee_52a170)(a0); asm volatile(""); }

// sub_40e5f0  (orig 0x40e5f0, setter)
void sdk_f_40e5f0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_40e620  (orig 0x40e620, setter-chain)
void sdk_f_40e620(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 16) = a1; *(uint64_t*)((char*)(a0) + 24) = a2; *(uint32_t*)((char*)(a0) + 36) = 0; }

// sub_40e630  (orig 0x40e630, setter-chain)
void sdk_f_40e630(void* a0, uint32_t a1) { *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_40e640  (orig 0x40e640, getter)
uint32_t sdk_f_40e640(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_40e650  (orig 0x40e650, mov_ret)
uint32_t sdk_f_40e650() { return 1; }

// sub_40e660  (orig 0x40e660, setter)
void sdk_f_40e660(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 40) = a1; }

// sub_40e670  (orig 0x40e670, straight)
void* sdk_f_40e670(void* a0, void* a1, void* a2, void* a3) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 40);
    *(uint64_t*)((char*)(a2)) = *(uint64_t*)((char*)(p0) + 48);
    *(uint64_t*)((char*)(a3)) = *(uint64_t*)((char*)(p0) + 56);
    return a0;
}

// sub_40e690  (orig 0x40e690, setter)
void sdk_f_40e690(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 48) = a1; }

// sub_40e6a0  (orig 0x40e6a0, setter)
void sdk_f_40e6a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 56) = a1; }

// sub_40e6b0  (orig 0x40e6b0, indirect-tailcall)
void sdk_f_40e6b0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 64)))))(((uintptr_t)(a0)));
}

// sub_40e6c0  (orig 0x40e6c0, indirect-tailcall)
void sdk_f_40e6c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 72)))))(((uintptr_t)(a0)));
}

// sub_40e6d0  (orig 0x40e6d0, setter)
void sdk_f_40e6d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_40e6e0  (orig 0x40e6e0, getter)
uint64_t sdk_f_40e6e0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_40e6f0  (orig 0x40e6f0, getter)
uint64_t sdk_f_40e6f0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_40e700  (orig 0x40e700, getter)
uint64_t sdk_f_40e700(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_40e710  (orig 0x40e710, getter)
uint32_t sdk_f_40e710(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_40e920  (orig 0x40e920, indirect-tailcall)
void sdk_f_40e920(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 40)))))(((uintptr_t)(a0)));
}

// sub_40e950  (orig 0x40e950, indirect-tailcall)
void sdk_f_40e950(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 56)))))(((uintptr_t)(a0)));
}

// sub_40e9d0  (orig 0x40e9d0, getter)
uint64_t sdk_f_40e9d0(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_40e9e0  (orig 0x40e9e0, straight)
uint32_t sdk_f_40e9e0(void* a0) { return (*(uint32_t*)((char*)(a0) + 16)) & (1073741823); }

// sub_40f720  (orig 0x40f720, mov_ret)
uint32_t sdk_f_40f720() { return 0; }

// sub_4101a0  (orig 0x4101a0, mov_ret)
uint32_t sdk_f_4101a0() { return 1; }

// sub_4101b0  (orig 0x4101b0, ret_only)
void sdk_f_4101b0() {}

// sub_410a60  (orig 0x410a60, straight)
void* sdk_f_410a60(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 104);
    *(uint32_t*)((char*)(p1) + 4) = *(uint32_t*)((char*)(p0) + 180);
    return a0;
}

// sub_410b40  (orig 0x410b40, mov_ret)
uint64_t sdk_f_410b40() { return 0; }

// sub_410cf0  (orig 0x410cf0, mov_ret)
uint64_t sdk_f_410cf0() { return 0; }

// sub_410d00  (orig 0x410d00, getter)
uint64_t sdk_f_410d00(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_411bd0  (orig 0x411bd0, setter)
void sdk_f_411bd0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 120) = a1; }

// sub_411be0  (orig 0x411be0, getter)
uint64_t sdk_f_411be0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_411bf0  (orig 0x411bf0, mov_ret)
uint32_t sdk_f_411bf0() { return 1984; }

// sub_411c00  (orig 0x411c00, getter-chain)
uint32_t sdk_f_411c00(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16)))); }

// sub_411c10  (orig 0x411c10, getter-chain)
uint32_t sdk_f_411c10(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 4); }

// sub_411c20  (orig 0x411c20, getter-chain)
uint32_t sdk_f_411c20(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 8); }

// sub_411c30  (orig 0x411c30, getter-chain)
uint32_t sdk_f_411c30(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 12); }

// sub_411c40  (orig 0x411c40, getter-chain)
uint32_t sdk_f_411c40(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 16); }

// sub_411c50  (orig 0x411c50, getter-chain)
uint32_t sdk_f_411c50(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1784); }

// sub_411c60  (orig 0x411c60, getter-chain)
uint32_t sdk_f_411c60(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1788); }

// sub_411c70  (orig 0x411c70, getter-chain)
uint32_t sdk_f_411c70(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1792); }

// sub_411c80  (orig 0x411c80, getter-chain)
uint32_t sdk_f_411c80(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1796); }

// sub_411c90  (orig 0x411c90, getter-chain)
uint32_t sdk_f_411c90(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1800); }

// sub_411ca0  (orig 0x411ca0, getter-chain)
uint32_t sdk_f_411ca0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1804); }

// sub_411cb0  (orig 0x411cb0, getter-chain)
uint32_t sdk_f_411cb0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1808); }

// sub_411cc0  (orig 0x411cc0, getter-chain)
uint32_t sdk_f_411cc0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1812); }

// sub_411cd0  (orig 0x411cd0, getter-chain)
uint32_t sdk_f_411cd0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 20); }

// sub_411ce0  (orig 0x411ce0, getter-chain)
uint32_t sdk_f_411ce0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 24); }

// sub_411cf0  (orig 0x411cf0, getter-chain)
uint32_t sdk_f_411cf0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 28); }

// sub_411d00  (orig 0x411d00, getter-chain)
uint32_t sdk_f_411d00(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 32); }

// sub_411d10  (orig 0x411d10, getter-chain)
uint32_t sdk_f_411d10(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 36); }

// sub_411d20  (orig 0x411d20, getter-chain)
uint32_t sdk_f_411d20(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 44); }

// sub_411d30  (orig 0x411d30, getter-chain)
uint32_t sdk_f_411d30(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 40); }

// sub_411d40  (orig 0x411d40, getter-chain)
uint32_t sdk_f_411d40(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 48); }

// sub_411d50  (orig 0x411d50, getter-chain)
uint32_t sdk_f_411d50(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 52); }

// sub_411d60  (orig 0x411d60, getter-chain)
uint8_t sdk_f_411d60(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 56); }

// sub_411d70  (orig 0x411d70, straight)
void* sdk_f_411d70(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 57;
}

// sub_411d80  (orig 0x411d80, straight)
void* sdk_f_411d80(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 90;
}

// sub_411d90  (orig 0x411d90, straight)
void* sdk_f_411d90(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 154;
}

// sub_411da0  (orig 0x411da0, straight)
void* sdk_f_411da0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 186;
}

// sub_411db0  (orig 0x411db0, mov_ret)
uint32_t sdk_f_411db0() { return 4; }

// sub_411dc0  (orig 0x411dc0, mov_ret)
uint32_t sdk_f_411dc0() { return 128; }

// sub_411dd0  (orig 0x411dd0, straight)
uint8_t sdk_f_411dd0(void* a0, uint32_t a1, uint32_t a2) {
    void* p0 = (void*)((uintptr_t)(((*(uint64_t*)((char*)(a0) + 16)) + (((((uint32_t)a1)) << 7))) + (((uint32_t)a2))));
    return *(uint8_t*)((char*)(p0) + 220);
}

// sub_411df0  (orig 0x411df0, straight)
uint8_t sdk_f_411df0(void* a0, uint32_t a1, uint32_t a2) {
    void* p0 = (void*)((uintptr_t)(((*(uint64_t*)((char*)(a0) + 16)) + (((((uint32_t)a1)) << 7))) + (((uint32_t)a2))));
    return *(uint8_t*)((char*)(p0) + 732);
}

// sub_411e10  (orig 0x411e10, straight)
uint8_t sdk_f_411e10(void* a0, uint32_t a1, uint32_t a2) {
    void* p0 = (void*)((uintptr_t)(((*(uint64_t*)((char*)(a0) + 16)) + (((((uint32_t)a1)) << 7))) + (((uint32_t)a2))));
    return *(uint8_t*)((char*)(p0) + 1244);
}

// sub_411e40  (orig 0x411e40, straight)
uint8_t sdk_f_411e40(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0) + 16)) + (((uint32_t)a1))));
    return *(uint8_t*)((char*)(p0) + 1764);
}

// sub_411e50  (orig 0x411e50, straight)
uint8_t sdk_f_411e50(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0) + 16)) + (((uint32_t)a1))));
    return *(uint8_t*)((char*)(p0) + 1768);
}

// sub_411e60  (orig 0x411e60, getter-chain)
uint8_t sdk_f_411e60(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1772); }

// sub_411e70  (orig 0x411e70, getter-chain)
uint8_t sdk_f_411e70(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1773); }

// sub_411e80  (orig 0x411e80, getter-chain)
uint32_t sdk_f_411e80(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1776); }

// sub_411e90  (orig 0x411e90, getter-chain)
uint32_t sdk_f_411e90(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1780); }

// sub_411ea0  (orig 0x411ea0, getter-chain)
uint8_t sdk_f_411ea0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1816); }

// sub_411eb0  (orig 0x411eb0, getter-chain)
uint8_t sdk_f_411eb0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1817); }

// sub_411ec0  (orig 0x411ec0, getter-chain)
uint8_t sdk_f_411ec0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1818); }

// sub_411ed0  (orig 0x411ed0, getter-chain)
uint8_t sdk_f_411ed0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1819); }

// sub_411ee0  (orig 0x411ee0, getter-chain)
uint8_t sdk_f_411ee0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1820); }

// sub_411ef0  (orig 0x411ef0, getter-chain)
uint8_t sdk_f_411ef0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1821); }

// sub_411f00  (orig 0x411f00, getter-chain)
uint8_t sdk_f_411f00(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1864); }

// sub_411f10  (orig 0x411f10, getter-chain)
uint8_t sdk_f_411f10(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1865); }

// sub_411f20  (orig 0x411f20, getter-chain)
uint8_t sdk_f_411f20(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 24))) + 1866); }

// sub_411f30  (orig 0x411f30, getter-chain)
uint32_t sdk_f_411f30(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1824); }

// sub_411f40  (orig 0x411f40, getter-chain)
uint32_t sdk_f_411f40(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1844); }

// sub_411f50  (orig 0x411f50, straight)
void* sdk_f_411f50(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 1828;
}

// sub_411f60  (orig 0x411f60, getter-chain)
uint32_t sdk_f_411f60(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1848); }

// sub_411f70  (orig 0x411f70, getter-chain)
uint32_t sdk_f_411f70(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1852); }

// sub_411f80  (orig 0x411f80, getter-chain)
uint32_t sdk_f_411f80(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1856); }

// sub_411f90  (orig 0x411f90, getter-chain)
uint32_t sdk_f_411f90(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1860); }

// sub_411fa0  (orig 0x411fa0, getter-chain)
uint8_t sdk_f_411fa0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 48))) + 1944); }

// sub_411fb0  (orig 0x411fb0, getter-chain)
uint8_t sdk_f_411fb0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 48))) + 1945); }

// sub_411fc0  (orig 0x411fc0, getter-chain)
uint8_t sdk_f_411fc0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 48))) + 1946); }

// sub_411fd0  (orig 0x411fd0, straight)
void* sdk_f_411fd0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 48));
    return (char*)(p0) + 1952;
}

// sub_411fe0  (orig 0x411fe0, straight)
void* sdk_f_411fe0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 1864;
}

// sub_411ff0  (orig 0x411ff0, getter-chain)
uint32_t sdk_f_411ff0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1876); }

// sub_412000  (orig 0x412000, getter-chain)
uint32_t sdk_f_412000(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1880); }

// sub_412010  (orig 0x412010, getter-chain)
uint32_t sdk_f_412010(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1884); }

// sub_412020  (orig 0x412020, getter-chain)
uint32_t sdk_f_412020(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1888); }

// sub_412030  (orig 0x412030, getter-chain)
uint32_t sdk_f_412030(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1892); }

// sub_412050  (orig 0x412050, getter-chain)
uint64_t sdk_f_412050(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1912); }

// sub_412060  (orig 0x412060, getter-chain)
uint32_t sdk_f_412060(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1920); }

// sub_412070  (orig 0x412070, getter-chain)
uint8_t sdk_f_412070(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 32))) + 1928); }

// sub_412080  (orig 0x412080, getter-chain)
uint64_t sdk_f_412080(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 40))) + 1936); }

// sub_412090  (orig 0x412090, mov_ret)
uint32_t sdk_f_412090() { return 0; }

// sub_4120a0  (orig 0x4120a0, mov_ret)
uint32_t sdk_f_4120a0() { return 0; }

// sub_4120b0  (orig 0x4120b0, mov_ret)
uint32_t sdk_f_4120b0() { return 0; }

// sub_4120c0  (orig 0x4120c0, getter-chain)
uint32_t sdk_f_4120c0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1864); }

// sub_4120d0  (orig 0x4120d0, getter-chain)
uint32_t sdk_f_4120d0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1868); }

// sub_4120e0  (orig 0x4120e0, getter-chain)
uint32_t sdk_f_4120e0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1872); }

// sub_4120f0  (orig 0x4120f0, getter-chain)
uint32_t sdk_f_4120f0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1876); }

// sub_412100  (orig 0x412100, getter-chain)
uint32_t sdk_f_412100(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1880); }

// sub_412110  (orig 0x412110, getter-chain)
uint32_t sdk_f_412110(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1884); }

// sub_412120  (orig 0x412120, mov_ret)
uint32_t sdk_f_412120() { return 0; }

// sub_412130  (orig 0x412130, mov_ret)
uint32_t sdk_f_412130() { return 0; }

// sub_412140  (orig 0x412140, mov_ret)
uint32_t sdk_f_412140() { return 0; }

// sub_412150  (orig 0x412150, mov_ret)
uint32_t sdk_f_412150() { return 0; }

// sub_412160  (orig 0x412160, mov_ret)
uint32_t sdk_f_412160() { return 0; }

// sub_412170  (orig 0x412170, mov_ret)
uint32_t sdk_f_412170() { return 0; }

// sub_412180  (orig 0x412180, mov_ret)
uint32_t sdk_f_412180() { return 0; }

// sub_412190  (orig 0x412190, mov_ret)
uint32_t sdk_f_412190() { return 0; }

// sub_4121a0  (orig 0x4121a0, mov_ret)
uint32_t sdk_f_4121a0() { return 0; }

// sub_4121b0  (orig 0x4121b0, mov_ret)
uint32_t sdk_f_4121b0() { return 0; }

// sub_4121c0  (orig 0x4121c0, mov_ret)
uint32_t sdk_f_4121c0() { return 0; }

// sub_4121d0  (orig 0x4121d0, mov_ret)
uint64_t sdk_f_4121d0() { return 0; }

// sub_4121e0  (orig 0x4121e0, mov_ret)
uint64_t sdk_f_4121e0() { return 0; }

// sub_4121f0  (orig 0x4121f0, mov_ret)
uint64_t sdk_f_4121f0() { return 0; }

// sub_412200  (orig 0x412200, mov_ret)
uint64_t sdk_f_412200() { return 0; }

// sub_412210  (orig 0x412210, mov_ret)
uint64_t sdk_f_412210() { return 0; }

// sub_412220  (orig 0x412220, mov_ret)
uint32_t sdk_f_412220() { return 0; }

// sub_412230  (orig 0x412230, mov_ret)
uint32_t sdk_f_412230() { return 0; }

// sub_412240  (orig 0x412240, mov_ret)
uint32_t sdk_f_412240() { return -1; }

// sub_412250  (orig 0x412250, mov_ret)
uint32_t sdk_f_412250() { return 0; }

// sub_412260  (orig 0x412260, mov_ret)
uint32_t sdk_f_412260() { return 0; }

// sub_412270  (orig 0x412270, mov_ret)
uint32_t sdk_f_412270() { return 0; }

// sub_412280  (orig 0x412280, mov_ret)
uint32_t sdk_f_412280() { return 0; }

// sub_412290  (orig 0x412290, mov_ret)
uint32_t sdk_f_412290() { return 0; }

// sub_4122a0  (orig 0x4122a0, mov_ret)
uint32_t sdk_f_4122a0() { return 0; }

// sub_4122b0  (orig 0x4122b0, mov_ret)
uint32_t sdk_f_4122b0() { return 0; }

// sub_4122d0  (orig 0x4122d0, mov_ret)
uint32_t sdk_f_4122d0() { return 1992; }

// sub_4122e0  (orig 0x4122e0, getter-chain)
uint8_t sdk_f_4122e0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 56))) + 1984); }

// sub_412300  (orig 0x412300, mov_ret)
uint32_t sdk_f_412300() { return 2000; }

// sub_412310  (orig 0x412310, getter-chain)
uint32_t sdk_f_412310(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 64))) + 1992); }

// sub_412320  (orig 0x412320, getter-chain)
uint32_t sdk_f_412320(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 64))) + 1996); }

// sub_412340  (orig 0x412340, mov_ret)
uint32_t sdk_f_412340() { return 2088; }

// sub_412350  (orig 0x412350, getter-chain)
uint32_t sdk_f_412350(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2024); }

// sub_412360  (orig 0x412360, getter-chain)
uint32_t sdk_f_412360(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2028); }

// sub_412370  (orig 0x412370, getter-chain)
uint32_t sdk_f_412370(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2032); }

// sub_412380  (orig 0x412380, getter-chain)
uint32_t sdk_f_412380(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2036); }

// sub_412390  (orig 0x412390, getter)
uint8_t sdk_f_412390(uint64_t unused0, void* a1) { return *(uint8_t*)((char*)(a1)); }

// sub_4123a0  (orig 0x4123a0, compare)
bool sdk_f_4123a0(uint64_t unused0, void* a1) { return (uint8_t)(*(uint8_t*)((char*)(a1) + 1)) != (uint64_t)(0); }

// sub_4123b0  (orig 0x4123b0, getter)
uint16_t sdk_f_4123b0(uint64_t unused0, void* a1) { return *(uint16_t*)((char*)(a1) + 2); }

// sub_4123c0  (orig 0x4123c0, getter)
uint32_t sdk_f_4123c0(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1) + 4); }

// sub_4123d0  (orig 0x4123d0, getter)
uint32_t sdk_f_4123d0(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1) + 8); }

// sub_4123e0  (orig 0x4123e0, getter-chain)
uint8_t sdk_f_4123e0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2040); }

// sub_4123f0  (orig 0x4123f0, getter-chain)
uint8_t sdk_f_4123f0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2041); }

// sub_412400  (orig 0x412400, straight)
void* sdk_f_412400(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 72));
    return (char*)(p0) + 2044;
}

// sub_412410  (orig 0x412410, straight)
void* sdk_f_412410(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 72));
    return (char*)(p0) + 2052;
}

// sub_412420  (orig 0x412420, getter-chain)
uint64_t sdk_f_412420(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2000); }

// sub_412430  (orig 0x412430, getter-chain)
uint64_t sdk_f_412430(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2008); }

// sub_412440  (orig 0x412440, getter-chain)
uint64_t sdk_f_412440(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2016); }

// sub_412450  (orig 0x412450, compare-pred)
bool sdk_f_412450(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)((char*)a0 + 72)) + 2042)) != (uint32_t)(0); }

// sub_4124b0  (orig 0x4124b0, mov_ret)
uint32_t sdk_f_4124b0() { return 2096; }

// sub_4124c0  (orig 0x4124c0, getter-chain)
uint32_t sdk_f_4124c0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 80))) + 2088); }

// sub_4124e0  (orig 0x4124e0, mov_ret)
uint32_t sdk_f_4124e0() { return 2104; }

// sub_4124f0  (orig 0x4124f0, getter-chain)
uint8_t sdk_f_4124f0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 2096); }

// sub_412500  (orig 0x412500, getter-chain)
uint8_t sdk_f_412500(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 2097); }

// sub_412510  (orig 0x412510, getter-chain)
uint8_t sdk_f_412510(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 2098); }

// sub_412530  (orig 0x412530, mov_ret)
uint32_t sdk_f_412530() { return 2112; }

// sub_412540  (orig 0x412540, getter-chain)
uint32_t sdk_f_412540(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 96))) + 2104); }

// sub_412550  (orig 0x412550, getter-chain)
uint32_t sdk_f_412550(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 96))) + 2108); }

// sub_412570  (orig 0x412570, mov_ret)
uint32_t sdk_f_412570() { return 2120; }

// sub_412580  (orig 0x412580, getter-chain)
uint8_t sdk_f_412580(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 104))) + 2112); }

// sub_412590  (orig 0x412590, getter-chain)
uint8_t sdk_f_412590(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 104))) + 2113); }

// sub_4125a0  (orig 0x4125a0, ret_only)
void sdk_f_4125a0() {}

// sub_412c80  (orig 0x412c80, setter)
void sdk_f_412c80(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_412cb0  (orig 0x412cb0, setter)
void sdk_f_412cb0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 16) = a1; }

// sub_412cc0  (orig 0x412cc0, straight)
void* sdk_f_412cc0(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint8_t*)((char*)(a0) + 20) = (uint8_t)k1;
    *(uint32_t*)((char*)(p0) + 24) = (uint32_t)(a1);
    return a0;
}

// sub_412cd0  (orig 0x412cd0, straight)
void* sdk_f_412cd0(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint8_t*)((char*)(a0) + 21) = (uint8_t)k1;
    *(uint32_t*)((char*)(p0) + 28) = (uint32_t)(a1);
    return a0;
}

// sub_412ce0  (orig 0x412ce0, straight)
void* sdk_f_412ce0(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint8_t*)((char*)(a0) + 22) = (uint8_t)k1;
    *(uint32_t*)((char*)(p0) + 32) = (uint32_t)(a1);
    return a0;
}

// sub_412cf0  (orig 0x412cf0, straight)
void* sdk_f_412cf0(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint8_t*)((char*)(a0) + 23) = (uint8_t)k1;
    *(uint32_t*)((char*)(p0) + 40) = (uint32_t)(a1);
    return a0;
}

// sub_412d00  (orig 0x412d00, setter-chain)
void sdk_f_412d00(void* a0, uint64_t a1, uint32_t a2) { *(uint32_t*)((char*)(a0) + 36) = a2; *(uint64_t*)((char*)(a0) + 48) = a1; }

// sub_413060  (orig 0x413060, getter)
uint64_t sdk_f_413060(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_413070  (orig 0x413070, getter)
uint32_t sdk_f_413070(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_413080  (orig 0x413080, straight)
uint8_t sdk_f_413080(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 24);
    return *(uint8_t*)((char*)(p0) + 20);
}

// sub_413090  (orig 0x413090, straight)
uint8_t sdk_f_413090(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 28);
    return *(uint8_t*)((char*)(p0) + 21);
}

// sub_4130a0  (orig 0x4130a0, straight)
uint8_t sdk_f_4130a0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 32);
    return *(uint8_t*)((char*)(p0) + 22);
}

// sub_4130b0  (orig 0x4130b0, straight)
uint8_t sdk_f_4130b0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 40);
    return *(uint8_t*)((char*)(p0) + 23);
}

// sub_4130c0  (orig 0x4130c0, getter)
uint32_t sdk_f_4130c0(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_4130d0  (orig 0x4130d0, getter)
uint64_t sdk_f_4130d0(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_4130e0  (orig 0x4130e0, setter)
void sdk_f_4130e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 56) = a1; }

// sub_4130f0  (orig 0x4130f0, call)
extern void sub_410af0();
uint32_t sdk_f_4130f0(void* a0) {
    uint64_t f_4130f0__r0 = ((uint64_t (*)(uintptr_t))&sub_410af0)(((uintptr_t)((char*)(a0) + 24)));
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_413110  (orig 0x413110, getter)
uint32_t sdk_f_413110(void* a0) { return *(uint32_t*)((char*)(a0) + 56); }

// sub_414c00  (orig 0x414c00, straight)
uint64_t sdk_f_414c00(void* a0) { return ((*(uint64_t*)((char*)(a0) + 5816L)) + (*(uint64_t*)((char*)(a0) + 5936L))) - (*(uint64_t*)((char*)(a0) + 5832L)); }

// sub_414c60  (orig 0x414c60, getter)
uint64_t sdk_f_414c60(void* a0) { return *(uint64_t*)((char*)(a0) + 5960L); }

// sub_414d30  (orig 0x414d30, straight)
void* sdk_f_414d30(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 80));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(p1) + 40) = *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
    return a0;
}

// sub_414d40  (orig 0x414d40, ret_only)
void sdk_f_414d40() {}

// sub_414d60  (orig 0x414d60, copy-chain-store)
void sdk_f_414d60(void* a0, int32_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 48);
    uint64_t t1 = *(uint64_t*)((char*)a0 + 80);
    *(uint64_t*)((char*)(t1) + (uintptr_t)(a1) * 8) = (uint64_t)(t0);
}

// sub_414e50  (orig 0x414e50, setter)
void sdk_f_414e50(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_414ed0  (orig 0x414ed0, setter)
void sdk_f_414ed0(void* a0, float a1) { *(float*)((char*)(a0) + 36) = a1; }

// sub_414ef0  (orig 0x414ef0, straight)
void* sdk_f_414ef0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 48) = *(uint32_t*)((char*)(a1));
    *(uint32_t*)((char*)(p1) + 52) = *(uint32_t*)((char*)(p0) + 4);
    *(uint32_t*)((char*)(p1) + 56) = *(uint32_t*)((char*)(p0) + 8);
    *(uint32_t*)((char*)(p1) + 60) = *(uint32_t*)((char*)(p0) + 12);
    return a0;
}

// sub_414f20  (orig 0x414f20, straight)
void* sdk_f_414f20(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 48) = *(uint32_t*)((char*)(a1));
    *(uint32_t*)((char*)(p1) + 52) = *(uint32_t*)((char*)(p0) + 4);
    *(uint32_t*)((char*)(p1) + 56) = *(uint32_t*)((char*)(p0) + 8);
    *(uint32_t*)((char*)(p1) + 60) = *(uint32_t*)((char*)(p0) + 12);
    return a0;
}

// sub_414f50  (orig 0x414f50, straight)
void* sdk_f_414f50(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 48) = *(uint32_t*)((char*)(a1));
    *(uint32_t*)((char*)(p1) + 52) = *(uint32_t*)((char*)(p0) + 4);
    *(uint32_t*)((char*)(p1) + 56) = *(uint32_t*)((char*)(p0) + 8);
    *(uint32_t*)((char*)(p1) + 60) = *(uint32_t*)((char*)(p0) + 12);
    return a0;
}

// sub_414f80  (orig 0x414f80, setter)
void sdk_f_414f80(void* a0, float a1) { *(float*)((char*)(a0) + 64) = a1; }

// sub_414f90  (orig 0x414f90, setter)
void sdk_f_414f90(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 68) = a1; }

// sub_414fa0  (orig 0x414fa0, setter)
void sdk_f_414fa0(void* a0, float a1) { *(float*)((char*)(a0) + 72) = a1; }

// sub_414fb0  (orig 0x414fb0, getter)
uint64_t sdk_f_414fb0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_414fc0  (orig 0x414fc0, straight)
void* sdk_f_414fc0(void* a0, void* a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 8);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(p0) + 12);
    return a0;
}

// sub_414fe0  (orig 0x414fe0, straight)
void* sdk_f_414fe0(void* a0, void* a1, void* a2, void* a3) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 16);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(p0) + 20);
    *(uint32_t*)((char*)(a3)) = *(uint32_t*)((char*)(p0) + 24);
    return a0;
}

// sub_415000  (orig 0x415000, straight)
void* sdk_f_415000(void* a0, void* a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 28);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(p0) + 32);
    return a0;
}

// sub_415020  (orig 0x415020, getter)
float sdk_f_415020(void* a0) { return *(float*)((char*)(a0) + 36); }

// sub_415030  (orig 0x415030, straight)
void* sdk_f_415030(void* a0, void* a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 40);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(p0) + 44);
    return a0;
}

// sub_415050  (orig 0x415050, straight)
void* sdk_f_415050(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 48);
    *(uint32_t*)((char*)(p1) + 4) = *(uint32_t*)((char*)(p0) + 52);
    *(uint32_t*)((char*)(p1) + 8) = *(uint32_t*)((char*)(p0) + 56);
    *(uint32_t*)((char*)(p1) + 12) = *(uint32_t*)((char*)(p0) + 60);
    return a0;
}

// sub_415080  (orig 0x415080, straight)
void* sdk_f_415080(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 48);
    *(uint32_t*)((char*)(p1) + 4) = *(uint32_t*)((char*)(p0) + 52);
    *(uint32_t*)((char*)(p1) + 8) = *(uint32_t*)((char*)(p0) + 56);
    *(uint32_t*)((char*)(p1) + 12) = *(uint32_t*)((char*)(p0) + 60);
    return a0;
}

// sub_4150b0  (orig 0x4150b0, straight)
void* sdk_f_4150b0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 48);
    *(uint32_t*)((char*)(p1) + 4) = *(uint32_t*)((char*)(p0) + 52);
    *(uint32_t*)((char*)(p1) + 8) = *(uint32_t*)((char*)(p0) + 56);
    *(uint32_t*)((char*)(p1) + 12) = *(uint32_t*)((char*)(p0) + 60);
    return a0;
}

// sub_4150e0  (orig 0x4150e0, getter)
float sdk_f_4150e0(void* a0) { return *(float*)((char*)(a0) + 64); }

// sub_4150f0  (orig 0x4150f0, getter)
uint32_t sdk_f_4150f0(void* a0) { return *(uint32_t*)((char*)(a0) + 68); }

// sub_415100  (orig 0x415100, getter)
float sdk_f_415100(void* a0) { return *(float*)((char*)(a0) + 72); }

// sub_415150  (orig 0x415150, ret_only)
void sdk_f_415150() {}

// sub_415160  (orig 0x415160, straight)
void* sdk_f_415160(void* a0, void* a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 16);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(p0) + 20);
    return a0;
}

// sub_415180  (orig 0x415180, straight)
void* sdk_f_415180(void* a0, void* a1, void* a2, void* a3) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 24);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(p0) + 28);
    *(uint32_t*)((char*)(a3)) = *(uint32_t*)((char*)(p0) + 32);
    return a0;
}

// sub_4151a0  (orig 0x4151a0, straight)
void* sdk_f_4151a0(void* a0, void* a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 36);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(p0) + 40);
    return a0;
}

// sub_4151c0  (orig 0x4151c0, getter)
float sdk_f_4151c0(void* a0) { return *(float*)((char*)(a0) + 44); }

// sub_4151d0  (orig 0x4151d0, straight)
void* sdk_f_4151d0(void* a0, void* a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 48);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(p0) + 52);
    return a0;
}

// sub_4151f0  (orig 0x4151f0, straight)
void* sdk_f_4151f0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 56);
    *(uint32_t*)((char*)(p1) + 4) = *(uint32_t*)((char*)(p0) + 60);
    *(uint32_t*)((char*)(p1) + 8) = *(uint32_t*)((char*)(p0) + 64);
    *(uint32_t*)((char*)(p1) + 12) = *(uint32_t*)((char*)(p0) + 68);
    return a0;
}

// sub_415220  (orig 0x415220, straight)
void* sdk_f_415220(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 56);
    *(uint32_t*)((char*)(p1) + 4) = *(uint32_t*)((char*)(p0) + 60);
    *(uint32_t*)((char*)(p1) + 8) = *(uint32_t*)((char*)(p0) + 64);
    *(uint32_t*)((char*)(p1) + 12) = *(uint32_t*)((char*)(p0) + 68);
    return a0;
}

// sub_415250  (orig 0x415250, straight)
void* sdk_f_415250(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 56);
    *(uint32_t*)((char*)(p1) + 4) = *(uint32_t*)((char*)(p0) + 60);
    *(uint32_t*)((char*)(p1) + 8) = *(uint32_t*)((char*)(p0) + 64);
    *(uint32_t*)((char*)(p1) + 12) = *(uint32_t*)((char*)(p0) + 68);
    return a0;
}

// sub_415280  (orig 0x415280, getter)
float sdk_f_415280(void* a0) { return *(float*)((char*)(a0) + 72); }

// sub_415290  (orig 0x415290, getter)
uint32_t sdk_f_415290(void* a0) { return *(uint32_t*)((char*)(a0) + 76); }

// sub_415580  (orig 0x415580, ret_only)
void sdk_f_415580() {}

// sub_415660  (orig 0x415660, getter)
uint64_t sdk_f_415660(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_415670  (orig 0x415670, getter)
uint64_t sdk_f_415670(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_415680  (orig 0x415680, getter)
uint32_t sdk_f_415680(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4157a0  (orig 0x4157a0, mov_ret)
uint64_t sdk_f_4157a0() { return 0; }

// sub_4157b0  (orig 0x4157b0, straight)
void sdk_f_4157b0(void* a0) {
    *(uint64_t*)((char*)(a0)) = 72621652378910720;
}

// sub_4157d0  (orig 0x4157d0, straight)
void sdk_f_4157d0(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4294967288)) | (((uint32_t)a1));
}

// sub_415860  (orig 0x415860, straight-line)
void sdk_f_415860(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4294951167)) | (((((uint32_t)a1)) << 8));
}

// sub_415880  (orig 0x415880, straight-line)
void sdk_f_415880(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4294770687)) | (((((uint32_t)a1)) << 16));
}

// sub_4158e0  (orig 0x4158e0, straight)
uint32_t sdk_f_4158e0(void* a0) { return (*(uint32_t*)((char*)(a0))) & (7); }

// sub_4158f0  (orig 0x4158f0, straight)
void sdk_f_4158f0(void* a0, void* a1, void* a2, void* a3, void* a4) {
    *(uint32_t*)((char*)(a1)) = (*(uint32_t*)((char*)(a0) + 4)) & (127);
    *(uint32_t*)((char*)(a2)) = ((*(uint32_t*)((char*)(a0) + 4)) >> (8)) & (127);
    *(uint32_t*)((char*)(a3)) = (uint32_t)((*(uint16_t*)((char*)(a0) + 6)) & (127));
    *(uint32_t*)((char*)(a4)) = (uint32_t)((*(uint8_t*)((char*)(a0) + 7)) & (127));
}

// sub_415930  (orig 0x415930, straight)
void sdk_f_415930(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a1)) = (uint32_t)((*(uint8_t*)((char*)(a0) + 3)) & (7));
    *(uint32_t*)((char*)(a2)) = ((*(uint32_t*)((char*)(a0))) >> (28)) & (7);
}

// sub_415950  (orig 0x415950, straight)
uint32_t sdk_f_415950(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (8)) & (63); }

// sub_415960  (orig 0x415960, straight)
uint16_t sdk_f_415960(void* a0) { return (*(uint16_t*)((char*)(a0) + 2)) & (3); }

// sub_415970  (orig 0x415970, straight)
uint32_t sdk_f_415970(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (18)) & (1); }

// sub_415980  (orig 0x415980, straight)
uint32_t sdk_f_415980(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (19)) & (1); }

// sub_415990  (orig 0x415990, straight)
void* sdk_f_415990(void* a0) {
    *(uint32_t*)((char*)(a0)) = -1;
    return a0;
}

// sub_415a30  (orig 0x415a30, straight)
void* sdk_f_415a30(void* a0) {
    *(uint32_t*)((char*)(a0)) = 134414336;
    return a0;
}

// sub_415a80  (orig 0x415a80, straight-line)
void sdk_f_415a80(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4278255615)) | (((((uint32_t)a1)) << 16));
}

// sub_415aa0  (orig 0x415aa0, straight-line)
void sdk_f_415aa0(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4043309055)) | (((((uint32_t)a1)) << 24));
}

// sub_415ad0  (orig 0x415ad0, getter)
uint8_t sdk_f_415ad0(void* a0) { return *(uint8_t*)((char*)(a0) + 2); }

// sub_415ae0  (orig 0x415ae0, straight)
uint8_t sdk_f_415ae0(void* a0) { return (*(uint8_t*)((char*)(a0) + 3)) & (15); }

// sub_415af0  (orig 0x415af0, setter)
void sdk_f_415af0(void* a0) { *(uint32_t*)((char*)(a0)) = 0; }

// sub_415b20  (orig 0x415b20, straight)
void sdk_f_415b20(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4294967264)) | (((uint32_t)a1));
}

// sub_415b60  (orig 0x415b60, straight)
uint32_t sdk_f_415b60(void* a0) { return (*(uint32_t*)((char*)(a0))) & (31); }

// sub_415b70  (orig 0x415b70, setter)
void sdk_f_415b70(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_415b80  (orig 0x415b80, setter)
void sdk_f_415b80(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0)) = a1; }

// sub_415b90  (orig 0x415b90, setter)
void sdk_f_415b90(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 4) = a1; }

// sub_415ba0  (orig 0x415ba0, getter)
uint32_t sdk_f_415ba0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_415bb0  (orig 0x415bb0, getter)
uint32_t sdk_f_415bb0(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_415bc0  (orig 0x415bc0, straight)
void sdk_f_415bc0(void* a0) {
    *(uint64_t*)((char*)(a0)) = 1231753292862717986;
}

// sub_415c20  (orig 0x415c20, straight-line)
void sdk_f_415c20(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4294967055)) | (((((uint32_t)a1)) << 4));
}

// sub_415cf0  (orig 0x415cf0, straight)
uint8_t sdk_f_415cf0(void* a0) { return (*(uint8_t*)((char*)(a0))) & (1); }

// sub_415d00  (orig 0x415d00, straight)
uint32_t sdk_f_415d00(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (1)) & (1); }

// sub_415d10  (orig 0x415d10, straight)
uint32_t sdk_f_415d10(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (4)) & (15); }

// sub_415d20  (orig 0x415d20, straight)
uint32_t sdk_f_415d20(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (2)) & (1); }

// sub_415d30  (orig 0x415d30, straight)
uint32_t sdk_f_415d30(void* a0, uint32_t a1) { return ((((((uint32_t)a1) == 2)) ? ((*(uint32_t*)((char*)(a0) + 4)) >> (16)) : (*(uint32_t*)((char*)(a0) + 4)))) & (15); }

// sub_415da0  (orig 0x415da0, straight)
void* sdk_f_415da0(void* a0) {
    *(uint32_t*)((char*)(a0)) = 20;
    return a0;
}

// sub_415db0  (orig 0x415db0, straight)
void sdk_f_415db0(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4294967292)) | (((uint32_t)a1));
}

// sub_415dd0  (orig 0x415dd0, straight-line)
void sdk_f_415dd0(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4294967291)) | (((((uint32_t)a1)) << 2));
}

// sub_415df0  (orig 0x415df0, straight-line)
void sdk_f_415df0(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4294967271)) | (((((uint32_t)a1)) << 3));
}

// sub_415e10  (orig 0x415e10, straight-line)
void sdk_f_415e10(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4294475775)) | (((((uint32_t)a1)) << 15));
}

// sub_415e30  (orig 0x415e30, straight)
uint32_t sdk_f_415e30(void* a0) { return (*(uint32_t*)((char*)(a0))) & (3); }

// sub_415e40  (orig 0x415e40, straight)
uint32_t sdk_f_415e40(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (2)) & (1); }

// sub_415e50  (orig 0x415e50, straight)
uint32_t sdk_f_415e50(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (3)) & (3); }

// sub_415e60  (orig 0x415e60, straight)
uint32_t sdk_f_415e60(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (15)) & (15); }

// sub_415e70  (orig 0x415e70, straight)
void* sdk_f_415e70(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0)) = 5;
    *(uint32_t*)((char*)(p0) + 20) = 0;
    *(uint64_t*)((char*)(p0) + 12) = -8608480567731124088;
    *(uint64_t*)((char*)(p0) + 4) = -8608480567731124088;
    return a0;
}

// sub_415ef0  (orig 0x415ef0, straight-line)
void sdk_f_415ef0(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4294959359)) | (((((uint32_t)a1)) << 8));
}

// sub_415f10  (orig 0x415f10, straight)
uint8_t sdk_f_415f10(void* a0) { return (*(uint8_t*)((char*)(a0))) & (1); }

// sub_415f20  (orig 0x415f20, straight)
uint32_t sdk_f_415f20(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (8)) & (31); }

// sub_415f30  (orig 0x415f30, straight)
uint32_t sdk_f_415f30(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (1)) & (1); }

// sub_415f40  (orig 0x415f40, straight)
uint32_t sdk_f_415f40(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (2)) & (1); }

// sub_415f50  (orig 0x415f50, straight-line)
void sdk_f_415f50(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4293951487)) | (((((uint32_t)a1)) << 15));
}

// sub_415f70  (orig 0x415f70, straight)
uint32_t sdk_f_415f70(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (15)) & (31); }

// sub_415f80  (orig 0x415f80, straight-line)
void sdk_f_415f80(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4294942719)) | (((((uint32_t)a1)) << 13));
}

// sub_415fa0  (orig 0x415fa0, straight)
uint32_t sdk_f_415fa0(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (13)) & (3); }

// sub_415fd0  (orig 0x415fd0, straight)
uint32_t sdk_f_415fd0(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (20)) & (1); }

// sub_415fe0  (orig 0x415fe0, straight-line)
void sdk_f_415fe0(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a0))) & (4280287231)) | (((((uint32_t)a1)) << 21));
}

// sub_416000  (orig 0x416000, straight)
uint32_t sdk_f_416000(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (21)) & (7); }

// sub_416030  (orig 0x416030, straight)
uint32_t sdk_f_416030(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (3)) & (1); }

// sub_4160d0  (orig 0x4160d0, straight)
uint32_t sdk_f_4160d0(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (4)) & (1); }

// sub_416dd0  (orig 0x416dd0, setter)
void sdk_f_416dd0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_416e20  (orig 0x416e20, setter)
void sdk_f_416e20(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_416e30  (orig 0x416e30, setter)
void sdk_f_416e30(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_416e40  (orig 0x416e40, setter)
void sdk_f_416e40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_416e50  (orig 0x416e50, setter)
void sdk_f_416e50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_416e60  (orig 0x416e60, setter)
void sdk_f_416e60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 48) = a1; }

// sub_416ea0  (orig 0x416ea0, setter)
void sdk_f_416ea0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 52) = a1; }

// sub_416eb0  (orig 0x416eb0, setter)
void sdk_f_416eb0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 56) = a1; }

// sub_416ec0  (orig 0x416ec0, setter)
void sdk_f_416ec0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 60) = a1; }

// sub_416ee0  (orig 0x416ee0, setter)
void sdk_f_416ee0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 80) = a1; }

// sub_416f00  (orig 0x416f00, setter)
void sdk_f_416f00(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 104) = a1; }

// sub_416f10  (orig 0x416f10, setter)
void sdk_f_416f10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 100) = a1; }

// sub_416f20  (orig 0x416f20, getter)
uint64_t sdk_f_416f20(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_416f30  (orig 0x416f30, getter)
uint32_t sdk_f_416f30(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_416f40  (orig 0x416f40, getter)
uint32_t sdk_f_416f40(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_416f50  (orig 0x416f50, getter)
uint32_t sdk_f_416f50(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_416f60  (orig 0x416f60, getter)
uint32_t sdk_f_416f60(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_416f70  (orig 0x416f70, getter)
uint32_t sdk_f_416f70(void* a0) { return *(uint32_t*)((char*)(a0) + 48); }

// sub_416f80  (orig 0x416f80, getter)
uint32_t sdk_f_416f80(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_416f90  (orig 0x416f90, getter)
uint32_t sdk_f_416f90(void* a0) { return *(uint32_t*)((char*)(a0) + 56); }

// sub_416fa0  (orig 0x416fa0, getter)
uint32_t sdk_f_416fa0(void* a0) { return *(uint32_t*)((char*)(a0) + 60); }

// sub_416fb0  (orig 0x416fb0, straight)
void* sdk_f_416fb0(void* a0, void* a1, void* a2, void* a3, void* a4) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 64);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(p0) + 68);
    *(uint32_t*)((char*)(a3)) = *(uint32_t*)((char*)(p0) + 72);
    *(uint32_t*)((char*)(a4)) = *(uint32_t*)((char*)(p0) + 76);
    return a0;
}

// sub_416fe0  (orig 0x416fe0, getter)
uint32_t sdk_f_416fe0(void* a0) { return *(uint32_t*)((char*)(a0) + 80); }

// sub_416ff0  (orig 0x416ff0, getter)
uint64_t sdk_f_416ff0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_417050  (orig 0x417050, getter)
uint32_t sdk_f_417050(void* a0) { return *(uint32_t*)((char*)(a0) + 100); }

// sub_417060  (orig 0x417060, getter)
uint64_t sdk_f_417060(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_417070  (orig 0x417070, getter)
uint64_t sdk_f_417070(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_4172d0  (orig 0x4172d0, getter)
uint32_t sdk_f_4172d0(void* a0) { return *(uint32_t*)((char*)(a0) + 104); }

// sub_4172e0  (orig 0x4172e0, setter)
void sdk_f_4172e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 88) = a1; }

// sub_4173c0  (orig 0x4173c0, straight)
void sdk_f_4173c0(void* a0, uint64_t a1, uint64_t a2) {
    *(uint8_t*)((char*)(a0)) = (*(uint8_t*)((char*)(a0))) | (1);
    *(uint8_t*)((char*)(a0) + 1) = (uint8_t)(a1);
    *(uint8_t*)((char*)(a0) + 2) = (uint8_t)(a2);
}

// sub_4173e0  (orig 0x4173e0, straight)
void sdk_f_4173e0(void* a0, uint64_t a1, uint64_t a2) {
    *(uint8_t*)((char*)(a0)) = (*(uint8_t*)((char*)(a0))) | (2);
    *(uint16_t*)((char*)(a0) + 4) = (uint16_t)(a1);
    *(uint16_t*)((char*)(a0) + 6) = (uint16_t)(a2);
}

// sub_417400  (orig 0x417400, straight)
void sdk_f_417400(void* a0, uint64_t a1) {
    *(uint8_t*)((char*)(a0)) = (*(uint8_t*)((char*)(a0))) | (4);
    *(uint32_t*)((char*)(a0) + 8) = (uint32_t)(a1);
}

// sub_417440  (orig 0x417440, straight)
void sdk_f_417440(void* a0, uint64_t a1) {
    *(uint8_t*)((char*)(a0)) = (*(uint8_t*)((char*)(a0))) | (16);
    *(uint32_t*)((char*)(a0) + 28) = (uint32_t)(a1);
}

// sub_417460  (orig 0x417460, straight)
uint8_t sdk_f_417460(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a1)) = (uint32_t)(*(uint8_t*)((char*)(a0) + 1));
    *(uint32_t*)((char*)(a2)) = (uint32_t)(*(uint8_t*)((char*)(a0) + 2));
    return (*(uint8_t*)((char*)(a0))) & (1);
}

// sub_417480  (orig 0x417480, straight)
uint8_t sdk_f_417480(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a1)) = (uint32_t)(*(uint16_t*)((char*)(a0) + 4));
    *(uint32_t*)((char*)(a2)) = (uint32_t)(*(uint16_t*)((char*)(a0) + 6));
    return ((*(uint8_t*)((char*)(a0))) >> (1)) & (1);
}

// sub_4174a0  (orig 0x4174a0, straight)
uint8_t sdk_f_4174a0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 8);
    return ((*(uint8_t*)((char*)(a0))) >> (2)) & (1);
}

// sub_4174c0  (orig 0x4174c0, straight)
uint8_t sdk_f_4174c0(void* a0, void* a1, void* a2, void* a3, void* a4) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 12);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(a0) + 16);
    *(uint32_t*)((char*)(a3)) = *(uint32_t*)((char*)(a0) + 20);
    *(uint32_t*)((char*)(a4)) = *(uint32_t*)((char*)(a0) + 24);
    return ((*(uint8_t*)((char*)(a0))) >> (3)) & (1);
}

// sub_4174f0  (orig 0x4174f0, straight)
uint8_t sdk_f_4174f0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 28);
    return ((*(uint8_t*)((char*)(a0))) >> (4)) & (1);
}

// sub_417510  (orig 0x417510, straight)
uint8_t sdk_f_417510(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 32);
    return ((*(uint8_t*)((char*)(a0))) >> (5)) & (1);
}

// sub_417530  (orig 0x417530, straight)
void sdk_f_417530(void* a0, uint64_t a1) {
    *(uint8_t*)((char*)(a0)) = (*(uint8_t*)((char*)(a0))) | (32);
    *(uint32_t*)((char*)(a0) + 32) = (uint32_t)(a1);
}

// sub_418300  (orig 0x418300, ret_only)
void sdk_f_418300() {}

// sub_418400  (orig 0x418400, getter)
uint32_t sdk_f_418400(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_418410  (orig 0x418410, getter)
uint32_t sdk_f_418410(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_418420  (orig 0x418420, getter)
uint32_t sdk_f_418420(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_418430  (orig 0x418430, getter)
uint32_t sdk_f_418430(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_418440  (orig 0x418440, getter)
uint32_t sdk_f_418440(void* a0) { return *(uint32_t*)((char*)(a0) + 48); }

// sub_418450  (orig 0x418450, getter)
uint32_t sdk_f_418450(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_418460  (orig 0x418460, getter)
uint32_t sdk_f_418460(void* a0) { return *(uint32_t*)((char*)(a0) + 56); }

// sub_418470  (orig 0x418470, getter)
uint32_t sdk_f_418470(void* a0) { return *(uint32_t*)((char*)(a0) + 60); }

// sub_418480  (orig 0x418480, straight)
void* sdk_f_418480(void* a0, void* a1, void* a2, void* a3, void* a4) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 64);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(p0) + 68);
    *(uint32_t*)((char*)(a3)) = *(uint32_t*)((char*)(p0) + 72);
    *(uint32_t*)((char*)(a4)) = *(uint32_t*)((char*)(p0) + 76);
    return a0;
}

// sub_4184b0  (orig 0x4184b0, getter)
uint32_t sdk_f_4184b0(void* a0) { return *(uint32_t*)((char*)(a0) + 80); }

// sub_4184c0  (orig 0x4184c0, getter)
uint32_t sdk_f_4184c0(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_4184d0  (orig 0x4184d0, getter)
uint64_t sdk_f_4184d0(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_418500  (orig 0x418500, ret_only)
void sdk_f_418500() {}

// sub_418830  (orig 0x418830, getter)
uint64_t sdk_f_418830(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_418840  (orig 0x418840, getter)
uint64_t sdk_f_418840(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_418850  (orig 0x418850, getter)
uint32_t sdk_f_418850(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_418eb0  (orig 0x418eb0, getter)
uint64_t sdk_f_418eb0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_418ec0  (orig 0x418ec0, getter)
uint64_t sdk_f_418ec0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_418ed0  (orig 0x418ed0, getter)
uint32_t sdk_f_418ed0(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_419010  (orig 0x419010, mov_ret)
uint64_t sdk_f_419010() { return 0; }

// sub_419080  (orig 0x419080, setter)
void sdk_f_419080(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_419090  (orig 0x419090, setter-chain)
void sdk_f_419090(void* a0) { *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 40) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; }

// sub_4190a0  (orig 0x4190a0, setter)
void sdk_f_4190a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 32) = a1; }

// sub_4190b0  (orig 0x4190b0, setter-chain)
void sdk_f_4190b0(void* a0, uint32_t a1, uint64_t a2) { *(uint32_t*)((char*)(a0) + 16) = a1; *(uint64_t*)((char*)(a0) + 24) = a2; }

// sub_4190d0  (orig 0x4190d0, setter)
void sdk_f_4190d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_4190e0  (orig 0x4190e0, getter)
uint64_t sdk_f_4190e0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_4190f0  (orig 0x4190f0, getter)
uint32_t sdk_f_4190f0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_419120  (orig 0x419120, straight)
uint32_t sdk_f_419120(void* a0) { return (*(uint32_t*)((char*)(a0) + 40)) + (1); }

// sub_419130  (orig 0x419130, getter)
uint32_t sdk_f_419130(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_419140  (orig 0x419140, getter)
uint64_t sdk_f_419140(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_4195f0  (orig 0x4195f0, getter)
uint64_t sdk_f_4195f0(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_419600  (orig 0x419600, getter)
uint32_t sdk_f_419600(void* a0) { return *(uint32_t*)((char*)(a0) + 64); }

// sub_419680  (orig 0x419680, straight)
void* sdk_f_419680(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 176);
    *(uint32_t*)((char*)(p1) + 4) = *(uint32_t*)((char*)(p0) + 180);
    *(uint32_t*)((char*)(p1) + 8) = *(uint32_t*)((char*)(p0) + 184);
    *(uint32_t*)((char*)(p1) + 12) = *(uint32_t*)((char*)(p0) + 188);
    return a0;
}

// sub_4196b0  (orig 0x4196b0, getter)
uint32_t sdk_f_4196b0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_41a300  (orig 0x41a300, mov_ret)
uint32_t sdk_f_41a300() { return 0; }

// sub_41a840  (orig 0x41a840, straight)
uint64_t sdk_f_41a840(void* a0, void* a1) { return (*(uint64_t*)((char*)(a1) + 24)) + (*(uint64_t*)((char*)(a0) + 64)); }

// sub_41ab00  (orig 0x41ab00, mov_ret)
uint32_t sdk_f_41ab00() { return 0; }

// sub_41ab10  (orig 0x41ab10, getter)
uint64_t sdk_f_41ab10(void* a0) { return *(uint64_t*)((char*)(a0) + 112); }

// sub_41ab20  (orig 0x41ab20, getter)
uint64_t sdk_f_41ab20(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_41ab30  (orig 0x41ab30, getter)
uint64_t sdk_f_41ab30(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_41ab40  (orig 0x41ab40, getter)
uint64_t sdk_f_41ab40(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_41ab50  (orig 0x41ab50, getter)
uint32_t sdk_f_41ab50(void* a0) { return *(uint32_t*)((char*)(a0) + 104); }

// sub_41ab60  (orig 0x41ab60, mov_ret)
uint64_t sdk_f_41ab60() { return 0; }

// sub_41ab70  (orig 0x41ab70, mov_ret)
uint64_t sdk_f_41ab70() { return 0; }

// sub_41ab80  (orig 0x41ab80, mov_ret)
uint64_t sdk_f_41ab80() { return 0; }

// sub_41ab90  (orig 0x41ab90, getter)
uint64_t sdk_f_41ab90(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_41aba0  (orig 0x41aba0, mov_ret)
uint64_t sdk_f_41aba0() { return 0; }

// sub_41abb0  (orig 0x41abb0, mov_ret)
uint64_t sdk_f_41abb0() { return 0; }

// sub_41abc0  (orig 0x41abc0, mov_ret)
uint32_t sdk_f_41abc0() { return 0; }

// sub_41abd0  (orig 0x41abd0, mov_ret)
uint64_t sdk_f_41abd0() { return 0; }

// sub_428310  (orig 0x428310, straight)
void sdk_f_428310(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 272) = a1;
    *(uint8_t*)((char*)(a0) + 264) = (*(uint8_t*)((char*)(a0) + 264)) | (65);
}

// sub_429b40  (orig 0x429b40, straight)
void sdk_f_429b40(void* a0, void* a1) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a1)) = 2;
    *(uint8_t*)((char*)(a1) + 5) = ((*(uint8_t*)((char*)(a0) + 148)) >> (4)) & (1);
    *(uint8_t*)((char*)(a1) + 4) = (uint8_t)k0;
    *(uint8_t*)((char*)(a1) + 6) = (*(uint8_t*)((char*)(a0) + 148)) & (1);
}

// sub_436610  (orig 0x436610, strlit-ret)
const char *sdk_f_436610() { static char g_f_436610[1]; __asm__ volatile("" ::: "memory"); return g_f_436610; }

// sub_436620  (orig 0x436620, getter)
uint64_t sdk_f_436620(void* a0) { return *(uint64_t*)((char*)(a0) + 6560L); }

// sub_436630  (orig 0x436630, getter)
uint64_t sdk_f_436630(void* a0) { return *(uint64_t*)((char*)(a0) + 3288); }

// sub_436700  (orig 0x436700, getter)
uint64_t sdk_f_436700(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_436750  (orig 0x436750, ret_only)
void sdk_f_436750() {}

// sub_4367e0  (orig 0x4367e0, ret_only)
void sdk_f_4367e0() {}

// sub_436980  (orig 0x436980, getter)
uint64_t sdk_f_436980(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_436a10  (orig 0x436a10, setter)
void sdk_f_436a10(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 48) = a1; }

// sub_437460  (orig 0x437460, getter)
uint64_t sdk_f_437460(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_4374a0  (orig 0x4374a0, call)
extern void sub_43abb0();
uint32_t sdk_f_4374a0() {
    uint32_t r0 = ((((uint32_t (*)(void))&sub_43abb0)() == 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_4374c0  (orig 0x4374c0, guarded)
void* sdk_f_4374c0(void* a0, void* a1) {
    if (a0) {
        *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 8);
        return a0;
    }
    return 0;
}

// sub_437530  (orig 0x437530, call)
extern void callee_52a400();
uint32_t sdk_f_437530(void* a0) {
    uint32_t r0 = ((((uint32_t (*)(uintptr_t))&callee_52a400)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 2344)))) == 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_4379a0  (orig 0x4379a0, getter-chain)
uint64_t sdk_f_4379a0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 6824L))) + 24); }

// sub_4379b0  (orig 0x4379b0, getter)
uint64_t sdk_f_4379b0(void* a0) { return *(uint64_t*)((char*)(a0) + 272); }

// sub_437e40  (orig 0x437e40, ret_only)
void sdk_f_437e40() {}

// sub_4383b0  (orig 0x4383b0, straight)
void sdk_f_4383b0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = (uint64_t)((char*)(a0) + 208);
}

// sub_4383c0  (orig 0x4383c0, straight)
void sdk_f_4383c0(void* a0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a1)) = (uint64_t)((char*)(a0) + 1884);
    *(uint64_t*)((char*)(a2)) = (uint64_t)((char*)(a0) + 2140);
}

// sub_438ad0  (orig 0x438ad0, mov_ret)
uint32_t sdk_f_438ad0() { return 6; }

// sub_439c80  (orig 0x439c80, straight-line)
void sdk_f_439c80(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 16) = *(uint64_t*)((char*)(a0) + 8);
}

// sub_439ee0  (orig 0x439ee0, mov_ret)
uint32_t sdk_f_439ee0() { return 6; }

// sub_439ef0  (orig 0x439ef0, mov_ret)
uint32_t sdk_f_439ef0() { return 6; }

// sub_439f30  (orig 0x439f30, mov_ret)
uint32_t sdk_f_439f30() { return 3; }

// sub_439fa0  (orig 0x439fa0, mov_ret)
uint32_t sdk_f_439fa0() { return 3; }

// sub_43a140  (orig 0x43a140, mov_ret)
uint32_t sdk_f_43a140() { return 6; }

// sub_43a150  (orig 0x43a150, mov_ret)
uint32_t sdk_f_43a150() { return 6; }

// sub_43a160  (orig 0x43a160, call)
extern void sub_440520();
uint32_t sdk_f_43a160(void* a0) {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))&sub_440520)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))), ((uintptr_t)(*(uint64_t*)((char*)(a0) + 16))), ((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))), ((uintptr_t)(*(uint64_t*)((char*)(a0) + 32))), ((uintptr_t)((char*)(a0) + 40)))))) & (1);
    asm volatile("");
    return r0;
}

// sub_43a190  (orig 0x43a190, mov_ret)
uint32_t sdk_f_43a190() { return 6; }

// sub_43a1a0  (orig 0x43a1a0, straight)
uint32_t sdk_f_43a1a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 24) = 1;
    return 0;
}

// sub_43a1b0  (orig 0x43a1b0, straight)
uint32_t sdk_f_43a1b0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(p0) + 24) = *(uint64_t*)((char*)(a0) + 16);
    return 0;
}

// sub_43adf0  (orig 0x43adf0, mov_ret)
uint32_t sdk_f_43adf0() { return 3; }

// sub_43ae00  (orig 0x43ae00, mov_ret)
uint32_t sdk_f_43ae00() { return 3; }

// sub_43bd20  (orig 0x43bd20, mov_ret)
uint32_t sdk_f_43bd20() { return 0; }

// sub_43bd30  (orig 0x43bd30, mov_ret)
uint32_t sdk_f_43bd30() { return 0; }

// sub_43bd40  (orig 0x43bd40, mov_ret)
uint32_t sdk_f_43bd40() { return 0; }

// sub_43bd50  (orig 0x43bd50, mov_ret)
uint32_t sdk_f_43bd50() { return 0; }

// sub_43c420  (orig 0x43c420, mov_ret)
uint32_t sdk_f_43c420() { return 3; }

// sub_43c430  (orig 0x43c430, mov_ret)
uint32_t sdk_f_43c430() { return 3; }

// sub_43c900  (orig 0x43c900, mov_ret)
uint32_t sdk_f_43c900() { return 3; }

// sub_43c910  (orig 0x43c910, mov_ret)
uint32_t sdk_f_43c910() { return 3; }

// sub_43cbb0  (orig 0x43cbb0, mov_ret)
uint32_t sdk_f_43cbb0() { return 3; }

// sub_43cbc0  (orig 0x43cbc0, mov_ret)
uint32_t sdk_f_43cbc0() { return 3; }

// sub_43cc60  (orig 0x43cc60, mov_ret)
uint32_t sdk_f_43cc60() { return 3; }

// sub_43cc70  (orig 0x43cc70, mov_ret)
uint32_t sdk_f_43cc70() { return 3; }

// sub_43cf30  (orig 0x43cf30, setter-chain)
void sdk_f_43cf30(void* a0) { *(uint32_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_43cf40  (orig 0x43cf40, ret_only)
void sdk_f_43cf40() {}

