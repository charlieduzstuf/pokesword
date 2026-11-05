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


// sub_8a3220  (orig 0x8a3220, mov_ret)
uint32_t main_f_8a3220() { return 1; }

// sub_8a3700  (orig 0x8a3700, setter)
void main_f_8a3700(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_8a3860  (orig 0x8a3860, setter)
void main_f_8a3860(void* a0) { *(uint32_t*)((char*)(a0) + 20) = 0; }

// sub_8a3c80  (orig 0x8a3c80, mov_ret)
uint32_t main_f_8a3c80() { return 1; }

// sub_8a3d00  (orig 0x8a3d00, indirect-tailcall)
void main_f_8a3d00(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8a3d30  (orig 0x8a3d30, getter)
uint32_t main_f_8a3d30(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_8a3d40  (orig 0x8a3d40, mov_ret)
uint32_t main_f_8a3d40() { return 1; }

// sub_8a45d0  (orig 0x8a45d0, setter)
void main_f_8a45d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8a5210  (orig 0x8a5210, mov_ret)
uint32_t main_f_8a5210() { return 1; }

// sub_8a5290  (orig 0x8a5290, indirect-tailcall)
void main_f_8a5290(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8a52c0  (orig 0x8a52c0, getter)
uint32_t main_f_8a52c0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8a52d0  (orig 0x8a52d0, mov_ret)
uint32_t main_f_8a52d0() { return 1; }

// sub_8a57b0  (orig 0x8a57b0, setter)
void main_f_8a57b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_8a5910  (orig 0x8a5910, setter)
void main_f_8a5910(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_8a5e90  (orig 0x8a5e90, mov_ret)
uint32_t main_f_8a5e90() { return 1; }

// sub_8a5f10  (orig 0x8a5f10, indirect-tailcall)
void main_f_8a5f10(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8a5f40  (orig 0x8a5f40, getter)
uint32_t main_f_8a5f40(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_8a5f50  (orig 0x8a5f50, mov_ret)
uint32_t main_f_8a5f50() { return 1; }

// sub_8a6d00  (orig 0x8a6d00, straight)
void* main_f_8a6d00(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 117) = (uint8_t)k0;
    return a0;
}

// sub_8a79f0  (orig 0x8a79f0, straight)
void main_f_8a79f0(void* a0) {
    uint32_t k0 = 0;
    uint32_t k1 = 0;
    *(uint32_t*)((char*)(a0) + 20060L) = 0;
    *(uint8_t*)((char*)(a0) + 20056L) = (uint8_t)k0;
    *(uint8_t*)((char*)(a0) + 20064L) = (uint8_t)k1;
}

// sub_8a7a10  (orig 0x8a7a10, straight)
void* main_f_8a7a10(void* a0) {
    *(uint8_t*)((char*)(a0) + 20065L) = 0;
    return a0;
}

// sub_8a7a20  (orig 0x8a7a20, straight-line)
uint32_t main_f_8a7a20(void* a0) { return ((*(uint32_t*)((char*)(a0) + 20060L) == 3) ? 1 : 0); }

// sub_8a7bd0  (orig 0x8a7bd0, straight)
uint64_t main_f_8a7bd0(uint64_t a0) { return (((uint64_t)a0)) + (10032); }

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

// sub_8a7fc0  (orig 0x8a7fc0, straight)
void* main_f_8a7fc0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint8_t k1 = 0;
    uint8_t k2 = 0;
    *(uint32_t*)((char*)(a0)) = (uint32_t)(a1);
    *(uint64_t*)((char*)(p0) + 8) = a2;
    *(uint8_t*)((char*)(p0) + 16) = (uint8_t)(a3);
    *(uint8_t*)((char*)(p0) + 23) = 0;
    *(uint16_t*)((char*)(p0) + 21) = (uint16_t)k1;
    *(uint32_t*)((char*)(p0) + 17) = (uint32_t)k2;
    return a0;
}

// sub_8a8010  (orig 0x8a8010, getter)
uint8_t main_f_8a8010(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_8a8020  (orig 0x8a8020, straight)
void* main_f_8a8020(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 17) = (uint8_t)k0;
    return a0;
}

// sub_8a8100  (orig 0x8a8100, straight)
void main_f_8a8100(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 51) = (uint8_t)((((uint32_t)a1)) & (1));
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

// sub_8aa020  (orig 0x8aa020, indirect-tailcall)
void main_f_8aa020(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uint32_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 1928)))))(((uintptr_t)(a0)), ((uintptr_t)(a1)), ((uintptr_t)(a2)), ((uintptr_t)(a3)), ((uint32_t)(1)));
}

// sub_8aa030  (orig 0x8aa030, indirect-tailcall)
void main_f_8aa030(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uint32_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 1928)))))(((uintptr_t)(a0)), ((uintptr_t)(a1)), ((uintptr_t)(a2)), ((uintptr_t)(a3)), ((uint32_t)(0)));
}

// sub_8aa040  (orig 0x8aa040, indirect-tailcall)
void main_f_8aa040(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uint32_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 1928)))))(((uintptr_t)(a0)), ((uintptr_t)(a1)), ((uintptr_t)(a2)), ((uintptr_t)(a3)), ((uint32_t)(17)));
}

// sub_8aabb0  (orig 0x8aabb0, straight)
void main_f_8aabb0(void* a0, uint32_t a1, uint64_t a2) {
    *(uint64_t*)((char*)(a0) + 28) = 0;
    *(uint64_t*)((char*)(a0) + 20) = 0;
    *(uint64_t*)((char*)(a0) + 12) = 0;
    *(uint64_t*)((char*)(a0) + 4) = 0;
    *(uint16_t*)((char*)(a0)) = (uint16_t)(a2);
    *(uint8_t*)((char*)(a0) + 3) = (uint8_t)((((uint32_t)a1)) & (15));
    *(uint8_t*)((char*)(a0) + 2) = 0;
}

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

// sub_8ac1b0  (orig 0x8ac1b0, setter-chain-zero)
void main_f_8ac1b0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a0 + 114) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint16_t*)((char*)a0 + 112) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 88) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 200) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a0 + 154) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint16_t*)((char*)a0 + 152) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a0 + 194) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint16_t*)((char*)a0 + 192) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 96) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 136) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 120) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 176) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 160) = (struct u64x2){ 0, 0 };
}

// sub_8ac5d0  (orig 0x8ac5d0, setter-chain)
void main_f_8ac5d0(void* a0) { *(uint64_t*)((char*)(a0) + 32) = 0; *(uint8_t*)((char*)(a0) + 26) = 0; *(uint16_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

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

// sub_8acbf0  (orig 0x8acbf0, straight)
void* main_f_8acbf0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    uint32_t k2 = 0;
    *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 16) = *(uint64_t*)((char*)(p0) + 16);
    *(uint64_t*)((char*)(p1) + 24) = *(uint64_t*)((char*)(p0));
    *(uint64_t*)((char*)(p1) + 32) = *(uint64_t*)((char*)(p0) + 24);
    *(uint8_t*)((char*)(p1) + 40) = *(uint8_t*)((char*)(p0) + 32);
    *(uint32_t*)((char*)(p1) + 44) = 0;
    *(uint8_t*)((char*)(p1) + 48) = (uint8_t)k2;
    return a0;
}

// sub_8ad930  (orig 0x8ad930, compare)
bool main_f_8ad930(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0) + 9520L)) > (int64_t)(2); }

// sub_8ad940  (orig 0x8ad940, compare)
bool main_f_8ad940(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 9520L)) == (uint64_t)(8); }

// sub_8ad950  (orig 0x8ad950, straight)
void* main_f_8ad950(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 9541L) = (uint8_t)k0;
    return a0;
}

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
void* main_f_8b14b0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 208) = (uint8_t)k0;
    return a0;
}

// sub_8b14c0  (orig 0x8b14c0, straight)
void* main_f_8b14c0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 208) = (uint8_t)k0;
    return a0;
}

// sub_8b14d0  (orig 0x8b14d0, straight)
void* main_f_8b14d0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 208) = (uint8_t)k0;
    return a0;
}

// sub_8b1760  (orig 0x8b1760, ret_only)
void main_f_8b1760() {}

// sub_8b1770  (orig 0x8b1770, ret_only)
void main_f_8b1770() {}

// sub_8b1780  (orig 0x8b1780, ret_only)
void main_f_8b1780() {}

// sub_8b1790  (orig 0x8b1790, ret_only)
void main_f_8b1790() {}

// sub_8b2660  (orig 0x8b2660, ret_only)
void main_f_8b2660() {}

// sub_8b2710  (orig 0x8b2710, ret_only)
void main_f_8b2710() {}

// sub_8b2720  (orig 0x8b2720, struct-copy)
void main_f_8b2720(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8b2740  (orig 0x8b2740, struct-copy)
void main_f_8b2740(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8b2840  (orig 0x8b2840, ret_only)
void main_f_8b2840() {}

// sub_8b2850  (orig 0x8b2850, struct-copy)
void main_f_8b2850(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8b2870  (orig 0x8b2870, struct-copy)
void main_f_8b2870(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8b2c60  (orig 0x8b2c60, getter)
uint64_t main_f_8b2c60(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_8b5040  (orig 0x8b5040, setter)
void main_f_8b5040(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8b55c0  (orig 0x8b55c0, mov_ret)
uint32_t main_f_8b55c0() { return 1; }

// sub_8b5640  (orig 0x8b5640, indirect-tailcall)
void main_f_8b5640(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8b5670  (orig 0x8b5670, getter)
uint32_t main_f_8b5670(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8b5680  (orig 0x8b5680, mov_ret)
uint32_t main_f_8b5680() { return 1; }

// sub_8b5b60  (orig 0x8b5b60, setter)
void main_f_8b5b60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_8b5cc0  (orig 0x8b5cc0, setter)
void main_f_8b5cc0(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_8b6240  (orig 0x8b6240, mov_ret)
uint32_t main_f_8b6240() { return 1; }

// sub_8b62c0  (orig 0x8b62c0, indirect-tailcall)
void main_f_8b62c0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8b62f0  (orig 0x8b62f0, getter)
uint32_t main_f_8b62f0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_8b6300  (orig 0x8b6300, mov_ret)
uint32_t main_f_8b6300() { return 1; }

// sub_8b6910  (orig 0x8b6910, setter)
void main_f_8b6910(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_8b7230  (orig 0x8b7230, mov_ret)
uint32_t main_f_8b7230() { return 1; }

// sub_8b72b0  (orig 0x8b72b0, indirect-tailcall)
void main_f_8b72b0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8b72e0  (orig 0x8b72e0, getter)
uint32_t main_f_8b72e0(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_8b72f0  (orig 0x8b72f0, mov_ret)
uint32_t main_f_8b72f0() { return 1; }

// sub_8b77e0  (orig 0x8b77e0, setter)
void main_f_8b77e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_8b7940  (orig 0x8b7940, setter)
void main_f_8b7940(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_8b7ec0  (orig 0x8b7ec0, mov_ret)
uint32_t main_f_8b7ec0() { return 1; }

// sub_8b7f40  (orig 0x8b7f40, indirect-tailcall)
void main_f_8b7f40(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8b7f70  (orig 0x8b7f70, getter)
uint32_t main_f_8b7f70(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_8b7f80  (orig 0x8b7f80, mov_ret)
uint32_t main_f_8b7f80() { return 1; }

// sub_8b8570  (orig 0x8b8570, setter)
void main_f_8b8570(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_8b8c70  (orig 0x8b8c70, mov_ret)
uint32_t main_f_8b8c70() { return 1; }

// sub_8b8cf0  (orig 0x8b8cf0, indirect-tailcall)
void main_f_8b8cf0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8b8d20  (orig 0x8b8d20, getter)
uint32_t main_f_8b8d20(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_8b8d30  (orig 0x8b8d30, mov_ret)
uint32_t main_f_8b8d30() { return 1; }

// sub_8b9290  (orig 0x8b9290, setter)
void main_f_8b9290(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8b9810  (orig 0x8b9810, mov_ret)
uint32_t main_f_8b9810() { return 1; }

// sub_8b9890  (orig 0x8b9890, indirect-tailcall)
void main_f_8b9890(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8b98c0  (orig 0x8b98c0, getter)
uint32_t main_f_8b98c0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8b98d0  (orig 0x8b98d0, mov_ret)
uint32_t main_f_8b98d0() { return 1; }

// sub_8b9d60  (orig 0x8b9d60, setter)
void main_f_8b9d60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8ba260  (orig 0x8ba260, mov_ret)
uint32_t main_f_8ba260() { return 1; }

// sub_8ba2e0  (orig 0x8ba2e0, indirect-tailcall)
void main_f_8ba2e0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8ba310  (orig 0x8ba310, getter)
uint32_t main_f_8ba310(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8ba320  (orig 0x8ba320, mov_ret)
uint32_t main_f_8ba320() { return 1; }

// sub_8ba880  (orig 0x8ba880, setter)
void main_f_8ba880(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_8bb050  (orig 0x8bb050, mov_ret)
uint32_t main_f_8bb050() { return 1; }

// sub_8bb0d0  (orig 0x8bb0d0, indirect-tailcall)
void main_f_8bb0d0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8bb100  (orig 0x8bb100, getter)
uint32_t main_f_8bb100(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_8bb110  (orig 0x8bb110, mov_ret)
uint32_t main_f_8bb110() { return 1; }

// sub_8bba10  (orig 0x8bba10, setter)
void main_f_8bba10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8bc980  (orig 0x8bc980, mov_ret)
uint32_t main_f_8bc980() { return 1; }

// sub_8bca00  (orig 0x8bca00, indirect-tailcall)
void main_f_8bca00(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8bca30  (orig 0x8bca30, getter)
uint32_t main_f_8bca30(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8bca40  (orig 0x8bca40, mov_ret)
uint32_t main_f_8bca40() { return 1; }

// sub_8bcf20  (orig 0x8bcf20, setter)
void main_f_8bcf20(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_8bd080  (orig 0x8bd080, setter)
void main_f_8bd080(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_8bd600  (orig 0x8bd600, mov_ret)
uint32_t main_f_8bd600() { return 1; }

// sub_8bd680  (orig 0x8bd680, indirect-tailcall)
void main_f_8bd680(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8bd6b0  (orig 0x8bd6b0, getter)
uint32_t main_f_8bd6b0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_8bd6c0  (orig 0x8bd6c0, mov_ret)
uint32_t main_f_8bd6c0() { return 1; }

// sub_8bdea0  (orig 0x8bdea0, setter)
void main_f_8bdea0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 112) = a1; }

// sub_8bf440  (orig 0x8bf440, mov_ret)
uint32_t main_f_8bf440() { return 1; }

// sub_8bf4c0  (orig 0x8bf4c0, indirect-tailcall)
void main_f_8bf4c0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8bf4f0  (orig 0x8bf4f0, getter)
uint32_t main_f_8bf4f0(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_8bf500  (orig 0x8bf500, mov_ret)
uint32_t main_f_8bf500() { return 1; }

// sub_8bfa90  (orig 0x8bfa90, ret_only)
void main_f_8bfa90() {}

// sub_8bfaa0  (orig 0x8bfaa0, ret_only)
void main_f_8bfaa0() {}

// sub_8c0040  (orig 0x8c0040, getter)
uint8_t main_f_8c0040(void* a0) { return *(uint8_t*)((char*)(a0) + 136); }

// sub_8c0050  (orig 0x8c0050, ptr_add)
void* main_f_8c0050(void* a0) { return (char*)a0 + 116; }

// sub_8c1750  (orig 0x8c1750, getter)
uint8_t main_f_8c1750(void* a0) { return *(uint8_t*)((char*)(a0) + 196); }

// sub_8c1760  (orig 0x8c1760, getter)
uint32_t main_f_8c1760(void* a0) { return *(uint32_t*)((char*)(a0) + 188); }

// sub_8c1d30  (orig 0x8c1d30, ptr_add)
void* main_f_8c1d30(void* a0) { return (char*)a0 + 172; }

// sub_8c1e70  (orig 0x8c1e70, ret_only)
void main_f_8c1e70() {}

// sub_8c1e80  (orig 0x8c1e80, ret_only)
void main_f_8c1e80() {}

// sub_8c1e90  (orig 0x8c1e90, ret_only)
void main_f_8c1e90() {}

// sub_8c1ea0  (orig 0x8c1ea0, ret_only)
void main_f_8c1ea0() {}

// sub_8c1ee0  (orig 0x8c1ee0, ptr_add)
void* main_f_8c1ee0(void* a0) { return (char*)a0 + 112; }

// sub_8c1ef0  (orig 0x8c1ef0, ptr_add)
void* main_f_8c1ef0(void* a0) { return (char*)a0 + 656; }

// sub_8c1f00  (orig 0x8c1f00, getter)
uint64_t main_f_8c1f00(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_8c1f10  (orig 0x8c1f10, getter)
uint64_t main_f_8c1f10(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_8c1f30  (orig 0x8c1f30, getter)
uint64_t main_f_8c1f30(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_8c1f40  (orig 0x8c1f40, getter)
uint64_t main_f_8c1f40(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_8c1f50  (orig 0x8c1f50, getter)
uint64_t main_f_8c1f50(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_8c2040  (orig 0x8c2040, getter)
uint8_t main_f_8c2040(void* a0) { return *(uint8_t*)((char*)(a0) + 136); }

// sub_8c2050  (orig 0x8c2050, getter)
uint32_t main_f_8c2050(void* a0) { return *(uint32_t*)((char*)(a0) + 140); }

// sub_8c2060  (orig 0x8c2060, getter)
uint16_t main_f_8c2060(void* a0) { return *(uint16_t*)((char*)(a0) + 144); }

// sub_8c2610  (orig 0x8c2610, setter)
void main_f_8c2610(void* a0) { *(uint8_t*)((char*)(a0) + 648) = 0; }

// sub_8c2620  (orig 0x8c2620, straight)
void* main_f_8c2620(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 648) = (uint8_t)k0;
    return a0;
}

// sub_8c2630  (orig 0x8c2630, getter)
uint8_t main_f_8c2630(void* a0) { return *(uint8_t*)((char*)(a0) + 648); }

// sub_8c3b80  (orig 0x8c3b80, call)
extern void sub_780ec0();
uint64_t main_f_8c3b80(uint64_t unused0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t))&sub_780ec0)(((uintptr_t)(*(uint32_t*)((char*)(a1)))))) & (1);
    asm volatile("");
    return r0;
}

// sub_8c4400  (orig 0x8c4400, call)
extern void sub_8c6230();
uint64_t main_f_8c4400(uint64_t a0, void* a1) {
    uint64_t r0 = (((uint64_t (*)(uintptr_t, uintptr_t))&sub_8c6230)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(*(uint32_t*)((char*)(a1)))))) & (1);
    asm volatile("");
    return r0;
}

// sub_8c4420  (orig 0x8c4420, call)
extern void sub_8c6230();
uint64_t main_f_8c4420(uint64_t a0, void* a1) {
    uint64_t r0 = ((~((uint64_t)((uint64_t (*)(uintptr_t, uintptr_t))&sub_8c6230)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(*(uint32_t*)((char*)(a1)))))))) & (1);
    asm volatile("");
    return r0;
}

// sub_8c4560  (orig 0x8c4560, call)
extern void sub_8c6180();
uint64_t main_f_8c4560() {
    uint64_t r0 = (((uint64_t (*)(void))&sub_8c6180)()) & (1);
    asm volatile("");
    return r0;
}

// sub_8c4580  (orig 0x8c4580, call)
extern void sub_8c6180();
uint64_t main_f_8c4580() {
    uint64_t r0 = ((~((uint64_t)((uint64_t (*)(void))&sub_8c6180)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_8c4770  (orig 0x8c4770, call)
extern void sub_8c2620();
uint64_t main_f_8c4770() {
    sub_8c2620();
    uint64_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_8c5800  (orig 0x8c5800, call)
extern void sub_8c20a0();
uint8_t main_f_8c5800(uint64_t a0, void* a1) {
    uint64_t f_8c5800__r0 = ((uint64_t (*)(uintptr_t, uintptr_t))&sub_8c20a0)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(*(uint32_t*)((char*)(a1)))));
    void* p0 = (void*)((uintptr_t)(f_8c5800__r0));
    uint8_t r0 = *(uint8_t*)((char*)(p0) + 829);
    asm volatile("");
    return r0;
}

// sub_8c5b00  (orig 0x8c5b00, mov_ret)
uint64_t main_f_8c5b00() { return 0; }

// sub_8c5b10  (orig 0x8c5b10, mov_ret)
uint64_t main_f_8c5b10() { return 0; }

// sub_8c5df0  (orig 0x8c5df0, call)
extern void sub_8c2060();
uint64_t main_f_8c5df0() {
    uint64_t r0 = (((uint64_t (*)(void))&sub_8c2060)()) & (65535);
    asm volatile("");
    return r0;
}

// sub_8c6160  (orig 0x8c6160, call)
extern void sub_8c1ee0();
uint8_t main_f_8c6160(uint64_t a0) {
    uint64_t f_8c6160__r0 = ((uint64_t (*)(uintptr_t))&sub_8c1ee0)(((uintptr_t)(((uint64_t)a0))));
    void* p0 = (void*)((uintptr_t)(f_8c6160__r0));
    uint8_t r0 = *(uint8_t*)((char*)(p0) + 48);
    asm volatile("");
    return r0;
}

// sub_8c67d0  (orig 0x8c67d0, ret_only)
void main_f_8c67d0() {}

// sub_8c67e0  (orig 0x8c67e0, ret_only)
void main_f_8c67e0() {}

// sub_8c6810  (orig 0x8c6810, getter)
uint8_t main_f_8c6810(void* a0) { return *(uint8_t*)((char*)(a0) + 100); }

// sub_8c6820  (orig 0x8c6820, getter)
uint32_t main_f_8c6820(void* a0) { return *(uint32_t*)((char*)(a0) + 92); }

// sub_8c6ea0  (orig 0x8c6ea0, getter)
uint8_t main_f_8c6ea0(void* a0) { return *(uint8_t*)((char*)(a0) + 418); }

// sub_8c82c0  (orig 0x8c82c0, getter)
uint8_t main_f_8c82c0(void* a0) { return *(uint8_t*)((char*)(a0) + 417); }

// sub_8c82d0  (orig 0x8c82d0, getter)
uint32_t main_f_8c82d0(void* a0) { return *(uint32_t*)((char*)(a0) + 408); }

// sub_8c8c70  (orig 0x8c8c70, getter)
uint8_t main_f_8c8c70(void* a0) { return *(uint8_t*)((char*)(a0) + 196); }

// sub_8c8c80  (orig 0x8c8c80, ptr_add)
void* main_f_8c8c80(void* a0) { return (char*)a0 + 248; }

// sub_8ce700  (orig 0x8ce700, ret_only)
void main_f_8ce700() {}

// sub_8ce710  (orig 0x8ce710, ret_only)
void main_f_8ce710() {}

// sub_8ce740  (orig 0x8ce740, ret_only)
void main_f_8ce740() {}

// sub_8cf5c0  (orig 0x8cf5c0, mov_ret)
uint32_t main_f_8cf5c0() { return 12; }

// sub_8cf5d0  (orig 0x8cf5d0, indexed-getter)
uint64_t main_f_8cf5d0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_8cf5e0  (orig 0x8cf5e0, indexed-getter)
uint64_t main_f_8cf5e0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_8cfb90  (orig 0x8cfb90, mov_ret)
uint32_t main_f_8cfb90() { return 1; }

// sub_8cfd00  (orig 0x8cfd00, ret_only)
void main_f_8cfd00() {}

// sub_8d07d0  (orig 0x8d07d0, getter)
uint64_t main_f_8d07d0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_8d0940  (orig 0x8d0940, mov_ret)
uint32_t main_f_8d0940() { return 1; }

// sub_8d0950  (orig 0x8d0950, indexed-getter)
uint64_t main_f_8d0950(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_8d0960  (orig 0x8d0960, indexed-getter)
uint64_t main_f_8d0960(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_8d0d00  (orig 0x8d0d00, call)
extern void sub_8dfba0();
uint64_t main_f_8d0d00(void* a0) {
    uint64_t r0 = ((uint64_t (*)(uintptr_t, uintptr_t))&sub_8dfba0)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 112))), ((uintptr_t)(3)));
    asm volatile("");
    return r0;
}

// sub_8d0d20  (orig 0x8d0d20, call)
extern void sub_8dfba0();
uint64_t main_f_8d0d20(void* a0) {
    uint64_t r0 = ((uint64_t (*)(uintptr_t, uintptr_t))&sub_8dfba0)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 112))), ((uintptr_t)(2)));
    asm volatile("");
    return r0;
}

// sub_8d5c00  (orig 0x8d5c00, ret_only)
void main_f_8d5c00() {}

// sub_8d7c80  (orig 0x8d7c80, getter)
uint32_t main_f_8d7c80(void* a0) { return *(uint32_t*)((char*)(a0) + 1716); }

// sub_8d8450  (orig 0x8d8450, straight)
void main_f_8d8450(uint64_t unused0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1) + 112) = 6;
    *(uint32_t*)((char*)(p0) + 100) = 6;
    *(uint8_t*)((char*)(p0) + 96) = 0;
}

// sub_8d8700  (orig 0x8d8700, ret_only)
void main_f_8d8700() {}

// sub_8d8710  (orig 0x8d8710, copy2)
void main_f_8d8710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8720  (orig 0x8d8720, copy2)
void main_f_8d8720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8750  (orig 0x8d8750, ret_only)
void main_f_8d8750() {}

// sub_8d8760  (orig 0x8d8760, copy2)
void main_f_8d8760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8770  (orig 0x8d8770, copy2)
void main_f_8d8770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8800  (orig 0x8d8800, ret_only)
void main_f_8d8800() {}

// sub_8d8810  (orig 0x8d8810, copy2)
void main_f_8d8810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8820  (orig 0x8d8820, copy2)
void main_f_8d8820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d9250  (orig 0x8d9250, straight)
void main_f_8d9250(uint64_t unused0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1) + 100) = 36;
    *(uint32_t*)((char*)(p0) + 112) = 36;
    *(uint8_t*)((char*)(p0) + 96) = 0;
}

// sub_8da650  (orig 0x8da650, const-field-set)
void main_f_8da650(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0))) + 2664)) = 1; }

// sub_8da660  (orig 0x8da660, ret_only)
void main_f_8da660() {}

// sub_8da670  (orig 0x8da670, copy2)
void main_f_8da670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8da680  (orig 0x8da680, copy2)
void main_f_8da680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8dbb90  (orig 0x8dbb90, ret_only)
void main_f_8dbb90() {}

// sub_8dc120  (orig 0x8dc120, ret_only)
void main_f_8dc120() {}

// sub_8dc670  (orig 0x8dc670, ret_only)
void main_f_8dc670() {}

// sub_8dc9f0  (orig 0x8dc9f0, ret_only)
void main_f_8dc9f0() {}

// sub_8dd190  (orig 0x8dd190, ret_only)
void main_f_8dd190() {}

// sub_8dd7e0  (orig 0x8dd7e0, ret_only)
void main_f_8dd7e0() {}

// sub_8ddba0  (orig 0x8ddba0, ret_only)
void main_f_8ddba0() {}

// sub_8e04b0  (orig 0x8e04b0, compare)
bool main_f_8e04b0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 392)) != (uint64_t)(0); }

// sub_8e16c0  (orig 0x8e16c0, ret_only)
void main_f_8e16c0() {}

// sub_8e16d0  (orig 0x8e16d0, copy2)
void main_f_8e16d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8e16e0  (orig 0x8e16e0, copy2)
void main_f_8e16e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8e2200  (orig 0x8e2200, mov_ret)
uint32_t main_f_8e2200() { return 1; }

// sub_8e2330  (orig 0x8e2330, ret_only)
void main_f_8e2330() {}

// sub_8e4150  (orig 0x8e4150, mov_ret)
uint32_t main_f_8e4150() { return 1; }

// sub_8e4a50  (orig 0x8e4a50, ret_only)
void main_f_8e4a50() {}

// sub_8e4d70  (orig 0x8e4d70, call)
extern void sub_8e4d90();
uint32_t main_f_8e4d70() {
    sub_8e4d90();
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_8e54e0  (orig 0x8e54e0, getter)
uint64_t main_f_8e54e0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_8e5650  (orig 0x8e5650, mov_ret)
uint32_t main_f_8e5650() { return 1; }

// sub_8e5660  (orig 0x8e5660, indexed-getter)
uint64_t main_f_8e5660(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_8e5670  (orig 0x8e5670, indexed-getter)
uint64_t main_f_8e5670(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_8e67d0  (orig 0x8e67d0, copy-chain-store)
void main_f_8e67d0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_8e6880  (orig 0x8e6880, copy-chain-store)
void main_f_8e6880(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_8e7c50  (orig 0x8e7c50, call)
extern void sub_14d9c40();
uint32_t main_f_8e7c50(void* a0) {
    uint64_t f_8e7c50__r0 = ((uint64_t (*)(uintptr_t))&sub_14d9c40)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1888))));
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_8e84a0  (orig 0x8e84a0, ret_only)
void main_f_8e84a0() {}

// sub_8e84b0  (orig 0x8e84b0, copy2)
void main_f_8e84b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8e84c0  (orig 0x8e84c0, copy2)
void main_f_8e84c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8e8530  (orig 0x8e8530, ret_only)
void main_f_8e8530() {}

// sub_8e85b0  (orig 0x8e85b0, ret_only)
void main_f_8e85b0() {}

// sub_8e8630  (orig 0x8e8630, ret_only)
void main_f_8e8630() {}

// sub_8e8710  (orig 0x8e8710, call)
extern void sub_eb6530();
uint32_t main_f_8e8710(void* a0) {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(uintptr_t))&sub_eb6530)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))))))) & (1);
    asm volatile("");
    return r0;
}

// sub_8e8730  (orig 0x8e8730, ret_only)
void main_f_8e8730() {}

// sub_8e9560  (orig 0x8e9560, ret_only)
void main_f_8e9560() {}

// sub_8e9900  (orig 0x8e9900, indirect-tailcall)
void main_f_8e9900(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 136));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 136)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 136))));
}

// sub_8e9910  (orig 0x8e9910, ret_only)
void main_f_8e9910() {}

// sub_8e9d50  (orig 0x8e9d50, ret_only)
void main_f_8e9d50() {}

// sub_8eb220  (orig 0x8eb220, ret_only)
void main_f_8eb220() {}

// sub_8ebfd0  (orig 0x8ebfd0, straight-line)
uint32_t main_f_8ebfd0(uint32_t a0) { return ((((uint32_t)a0) < 7) ? 1 : 0); }

// sub_8ec4c0  (orig 0x8ec4c0, getter)
uint8_t main_f_8ec4c0(void* a0) { return *(uint8_t*)((char*)(a0) + 66); }

// sub_8ec4d0  (orig 0x8ec4d0, const-field-set)
void main_f_8ec4d0(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 16)) + 96)) = 1; }

// sub_8ec510  (orig 0x8ec510, straight)
void main_f_8ec510(void* a0, uint64_t a1, uint64_t a2, uint32_t a3, uint64_t a4) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 44) = (uint8_t)((((uint32_t)a3)) & (1));
    *(uint64_t*)((char*)(a0) + 32) = a1;
    *(uint32_t*)((char*)(a0) + 40) = (uint32_t)(a2);
    *(uint64_t*)((char*)(a0) + 48) = a4;
    *(uint16_t*)((char*)(a0) + 56) = (uint16_t)k0;
    *(uint8_t*)((char*)(a0) + 58) = 0;
}

// sub_8ec540  (orig 0x8ec540, getter)
uint8_t main_f_8ec540(void* a0) { return *(uint8_t*)((char*)(a0) + 58); }

// sub_8ec550  (orig 0x8ec550, const-field-set)
void main_f_8ec550(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 16)) + 96)) = 1; }

// sub_8ec680  (orig 0x8ec680, straight)
void* main_f_8ec680(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    uint32_t k2 = 0;
    uint32_t k3 = 1;
    *(uint32_t*)((char*)(a0) + 36) = 0;
    *(uint16_t*)((char*)(p0) + 40) = (uint16_t)k2;
    *(uint8_t*)((char*)(p0) + 32) = *(uint8_t*)((char*)(a1));
    *(uint8_t*)((char*)(p0) + 33) = *(uint8_t*)((char*)(p1) + 1);
    *(uint8_t*)((char*)(p0) + 40) = (uint8_t)k3;
    return a0;
}

// sub_8ec6f0  (orig 0x8ec6f0, ret_only)
void main_f_8ec6f0() {}

// sub_8ec7f0  (orig 0x8ec7f0, ret_only)
void main_f_8ec7f0() {}

// sub_8ec830  (orig 0x8ec830, getter)
uint32_t main_f_8ec830(void* a0) { return *(uint32_t*)((char*)(a0) + 80); }

// sub_8ec840  (orig 0x8ec840, const-field-set)
void main_f_8ec840(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 16)) + 96)) = 1; }

// sub_8ec850  (orig 0x8ec850, straight)
void main_f_8ec850(void* a0, uint64_t a1, uint64_t a2, void* a3, uint64_t a4) {
    uint16_t k0 = 0;
    uint32_t k1 = 1;
    *(uint64_t*)((char*)(a0) + 48) = 0;
    *(uint16_t*)((char*)(a0) + 56) = 0;
    *(uint32_t*)((char*)(a0) + 40) = (uint32_t)k0;
    *(uint64_t*)((char*)(a0) + 32) = a1;
    *(uint8_t*)((char*)(a0) + 40) = (uint8_t)(a2);
    *(uint8_t*)((char*)(a0) + 43) = *(uint8_t*)((char*)(a3) + 2);
    *(uint16_t*)((char*)(a0) + 41) = *(uint16_t*)((char*)(a3));
    *(uint64_t*)((char*)(a0) + 48) = a4;
    *(uint8_t*)((char*)(a0) + 56) = (uint8_t)k1;
}

// sub_8ec890  (orig 0x8ec890, straight)
void* main_f_8ec890(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint8_t*)((char*)(a0) + 40) = (uint8_t)(a1);
    *(uint16_t*)((char*)(p0) + 56) = (uint16_t)k1;
    return a0;
}

// sub_8ec8a0  (orig 0x8ec8a0, getter)
uint8_t main_f_8ec8a0(void* a0) { return *(uint8_t*)((char*)(a0) + 57); }

// sub_8ec8b0  (orig 0x8ec8b0, const-field-set)
void main_f_8ec8b0(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 16)) + 96)) = 1; }

// sub_8ec8c0  (orig 0x8ec8c0, straight)
void* main_f_8ec8c0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint16_t k1 = 0;
    uint32_t k2 = 1;
    *(uint16_t*)((char*)(a0) + 56) = 0;
    *(uint8_t*)((char*)(p0) + 58) = (uint8_t)k1;
    *(uint64_t*)((char*)(p0) + 32) = a2;
    *(uint8_t*)((char*)(p0) + 40) = (uint8_t)(a1);
    *(uint64_t*)((char*)(p0) + 48) = a3;
    *(uint8_t*)((char*)(p0) + 56) = (uint8_t)k2;
    return a0;
}

// sub_8ec900  (orig 0x8ec900, const-field-set)
void main_f_8ec900(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 16)) + 96)) = 1; }

// sub_8ec910  (orig 0x8ec910, straight)
void* main_f_8ec910(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4, uint64_t a5) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 38) = 4294967296;
    *(uint8_t*)((char*)(p0) + 32) = (uint8_t)(a1);
    *(uint8_t*)((char*)(p0) + 33) = (uint8_t)(a2);
    *(uint8_t*)((char*)(p0) + 34) = (uint8_t)(a3);
    *(uint8_t*)((char*)(p0) + 35) = (uint8_t)(a4);
    *(uint8_t*)((char*)(p0) + 36) = (uint8_t)(a5);
    return a0;
}

// sub_8ec930  (orig 0x8ec930, getter)
uint8_t main_f_8ec930(void* a0) { return *(uint8_t*)((char*)(a0) + 45); }

// sub_8ec940  (orig 0x8ec940, getter)
uint16_t main_f_8ec940(void* a0) { return *(uint16_t*)((char*)(a0) + 38); }

// sub_8ec950  (orig 0x8ec950, getter)
uint8_t main_f_8ec950(void* a0) { return *(uint8_t*)((char*)(a0) + 40); }

// sub_8ec960  (orig 0x8ec960, getter)
uint8_t main_f_8ec960(void* a0) { return *(uint8_t*)((char*)(a0) + 41); }

// sub_8ec970  (orig 0x8ec970, ret_only)
void main_f_8ec970() {}

// sub_8ec980  (orig 0x8ec980, const-field-set)
void main_f_8ec980(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 16)) + 96)) = 1; }

// sub_8ec9e0  (orig 0x8ec9e0, getter)
uint8_t main_f_8ec9e0(void* a0) { return *(uint8_t*)((char*)(a0) + 432); }

// sub_8eca00  (orig 0x8eca00, setter-chain)
void main_f_8eca00(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; *(uint8_t*)((char*)(a0) + 12) = 0; *(uint16_t*)((char*)(a0) + 16) = 0; *(uint32_t*)((char*)(a0) + 20) = 0; *(uint16_t*)((char*)(a0) + 24) = 0; *(uint32_t*)((char*)(a0) + 28) = 0; *(uint16_t*)((char*)(a0) + 32) = 0; *(uint32_t*)((char*)(a0) + 36) = 0; *(uint16_t*)((char*)(a0) + 40) = 0; *(uint32_t*)((char*)(a0) + 44) = 0; *(uint16_t*)((char*)(a0) + 48) = 0; *(uint32_t*)((char*)(a0) + 52) = 0; *(uint16_t*)((char*)(a0) + 56) = 0; *(uint32_t*)((char*)(a0) + 60) = 0; *(uint16_t*)((char*)(a0) + 64) = 0; *(uint32_t*)((char*)(a0) + 68) = 0; *(uint16_t*)((char*)(a0) + 72) = 0; *(uint32_t*)((char*)(a0) + 76) = 0; *(uint16_t*)((char*)(a0) + 80) = 0; *(uint32_t*)((char*)(a0) + 84) = 0; *(uint16_t*)((char*)(a0) + 88) = 0; *(uint32_t*)((char*)(a0) + 92) = 0; *(uint16_t*)((char*)(a0) + 96) = 0; *(uint32_t*)((char*)(a0) + 100) = 0; *(uint16_t*)((char*)(a0) + 104) = 0; *(uint32_t*)((char*)(a0) + 108) = 0; *(uint16_t*)((char*)(a0) + 112) = 0; *(uint32_t*)((char*)(a0) + 116) = 0; *(uint16_t*)((char*)(a0) + 120) = 0; *(uint32_t*)((char*)(a0) + 124) = 0; *(uint16_t*)((char*)(a0) + 128) = 0; *(uint32_t*)((char*)(a0) + 132) = 0; *(uint16_t*)((char*)(a0) + 136) = 0; *(uint32_t*)((char*)(a0) + 140) = 0; *(uint16_t*)((char*)(a0) + 144) = 0; *(uint32_t*)((char*)(a0) + 148) = 0; *(uint16_t*)((char*)(a0) + 152) = 0; *(uint32_t*)((char*)(a0) + 156) = 0; *(uint16_t*)((char*)(a0) + 160) = 0; *(uint32_t*)((char*)(a0) + 164) = 0; *(uint16_t*)((char*)(a0) + 168) = 0; *(uint32_t*)((char*)(a0) + 172) = 0; *(uint16_t*)((char*)(a0) + 176) = 0; *(uint32_t*)((char*)(a0) + 180) = 0; *(uint16_t*)((char*)(a0) + 184) = 0; *(uint32_t*)((char*)(a0) + 188) = 0; *(uint16_t*)((char*)(a0) + 192) = 0; *(uint32_t*)((char*)(a0) + 196) = 0; *(uint16_t*)((char*)(a0) + 200) = 0; *(uint32_t*)((char*)(a0) + 204) = 0; *(uint16_t*)((char*)(a0) + 208) = 0; *(uint32_t*)((char*)(a0) + 212) = 0; *(uint16_t*)((char*)(a0) + 216) = 0; *(uint32_t*)((char*)(a0) + 220) = 0; *(uint16_t*)((char*)(a0) + 224) = 0; *(uint32_t*)((char*)(a0) + 228) = 0; *(uint16_t*)((char*)(a0) + 232) = 0; *(uint32_t*)((char*)(a0) + 236) = 0; *(uint16_t*)((char*)(a0) + 240) = 0; *(uint32_t*)((char*)(a0) + 244) = 0; *(uint16_t*)((char*)(a0) + 248) = 0; *(uint32_t*)((char*)(a0) + 252) = 0; *(uint16_t*)((char*)(a0) + 256) = 0; *(uint32_t*)((char*)(a0) + 260) = 0; *(uint16_t*)((char*)(a0) + 264) = 0; *(uint32_t*)((char*)(a0) + 268) = 0; *(uint16_t*)((char*)(a0) + 272) = 0; *(uint32_t*)((char*)(a0) + 276) = 0; *(uint16_t*)((char*)(a0) + 280) = 0; *(uint32_t*)((char*)(a0) + 284) = 0; *(uint16_t*)((char*)(a0) + 288) = 0; *(uint32_t*)((char*)(a0) + 292) = 0; *(uint16_t*)((char*)(a0) + 296) = 0; *(uint32_t*)((char*)(a0) + 300) = 0; *(uint16_t*)((char*)(a0) + 304) = 0; *(uint32_t*)((char*)(a0) + 308) = 0; *(uint16_t*)((char*)(a0) + 312) = 0; *(uint32_t*)((char*)(a0) + 316) = 0; *(uint16_t*)((char*)(a0) + 320) = 0; *(uint32_t*)((char*)(a0) + 324) = 0; *(uint16_t*)((char*)(a0) + 328) = 0; *(uint32_t*)((char*)(a0) + 332) = 0; *(uint16_t*)((char*)(a0) + 336) = 0; *(uint32_t*)((char*)(a0) + 340) = 0; *(uint16_t*)((char*)(a0) + 344) = 0; *(uint32_t*)((char*)(a0) + 348) = 0; *(uint16_t*)((char*)(a0) + 352) = 0; *(uint32_t*)((char*)(a0) + 356) = 0; *(uint16_t*)((char*)(a0) + 360) = 0; *(uint32_t*)((char*)(a0) + 364) = 0; *(uint16_t*)((char*)(a0) + 368) = 0; *(uint32_t*)((char*)(a0) + 372) = 0; *(uint16_t*)((char*)(a0) + 376) = 0; *(uint32_t*)((char*)(a0) + 380) = 0; *(uint16_t*)((char*)(a0) + 384) = 0; *(uint32_t*)((char*)(a0) + 388) = 0; *(uint16_t*)((char*)(a0) + 392) = 0; *(uint32_t*)((char*)(a0) + 396) = 0; }

// sub_8edd80  (orig 0x8edd80, strlit-ret)
const char *main_f_8edd80() { static char g_f_8edd80[1]; __asm__ volatile("" ::: "memory"); return g_f_8edd80; }

// sub_8edd90  (orig 0x8edd90, mov_ret)
uint32_t main_f_8edd90() { return 75; }

// sub_8efda0  (orig 0x8efda0, ret_only)
void main_f_8efda0() {}

// sub_8efdb0  (orig 0x8efdb0, ret_only)
void main_f_8efdb0() {}

// sub_8f0770  (orig 0x8f0770, ret_only)
void main_f_8f0770() {}

// sub_8f0780  (orig 0x8f0780, copy2)
void main_f_8f0780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8f0790  (orig 0x8f0790, copy2)
void main_f_8f0790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8f1dd0  (orig 0x8f1dd0, getter-chain)
uint32_t main_f_8f1dd0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 344))) + 240); }

// sub_8f2890  (orig 0x8f2890, straight)
void main_f_8f2890(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 288) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_8f3740  (orig 0x8f3740, ret_only)
void main_f_8f3740() {}

// anime_switch  (orig 0x8f4080, straight)
void main_f_8f4080(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 128));
    *(uint8_t*)((char*)(p0) + 88) = (*(uint8_t*)((char*)(p0) + 88)) | (1);
}

// anime_switch  (orig 0x8f40a0, straight)
void main_f_8f40a0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 128));
    *(uint8_t*)((char*)(p0) + 88) = (*(uint8_t*)((char*)(p0) + 88)) & (254);
}

// sub_8faf50  (orig 0x8faf50, ret_only)
void main_f_8faf50() {}

// sub_8faf60  (orig 0x8faf60, struct-copy)
void main_f_8faf60(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8faf80  (orig 0x8faf80, struct-copy)
void main_f_8faf80(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8faff0  (orig 0x8faff0, ret_only)
void main_f_8faff0() {}

// sub_8fb000  (orig 0x8fb000, struct-copy)
void main_f_8fb000(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8fb020  (orig 0x8fb020, struct-copy)
void main_f_8fb020(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8ffe50  (orig 0x8ffe50, call)
extern void sub_8ff9a0();
uint32_t main_f_8ffe50(void* a0) {
    uint64_t f_8ffe50__r0 = ((uint64_t (*)(uintptr_t))&sub_8ff9a0)(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_8ffe70  (orig 0x8ffe70, ret_only)
void main_f_8ffe70() {}

// sub_8ffe80  (orig 0x8ffe80, copy2)
void main_f_8ffe80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8ffe90  (orig 0x8ffe90, copy2)
void main_f_8ffe90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901010  (orig 0x901010, ret_only)
void main_f_901010() {}

// sub_901020  (orig 0x901020, copy2)
void main_f_901020(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901030  (orig 0x901030, copy2)
void main_f_901030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901060  (orig 0x901060, ret_only)
void main_f_901060() {}

// sub_901070  (orig 0x901070, copy2)
void main_f_901070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901080  (orig 0x901080, copy2)
void main_f_901080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9010b0  (orig 0x9010b0, ret_only)
void main_f_9010b0() {}

// sub_9010c0  (orig 0x9010c0, copy2)
void main_f_9010c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9010d0  (orig 0x9010d0, copy2)
void main_f_9010d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901100  (orig 0x901100, ret_only)
void main_f_901100() {}

// sub_901110  (orig 0x901110, copy2)
void main_f_901110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901120  (orig 0x901120, copy2)
void main_f_901120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901130  (orig 0x901130, call)
extern void btl_app();
uint32_t main_f_901130(void* a0) {
    uint64_t f_901130__r0 = ((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&btl_app)(((uintptr_t)(*(uint64_t*)((char*)(a0)))), ((uintptr_t)((((*(uint8_t*)((char*)(a0) + 16) == 0)) ? (0) : (*(uint64_t*)((char*)(a0) + 8))))), ((uintptr_t)((((*(uint8_t*)((char*)(a0) + 16) == 0)) ? (*(uint64_t*)((char*)(a0) + 8)) : (0)))));
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_901160  (orig 0x901160, ret_only)
void main_f_901160() {}

// sub_901170  (orig 0x901170, struct-copy)
void main_f_901170(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_901190  (orig 0x901190, struct-copy)
void main_f_901190(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_90e2d0  (orig 0x90e2d0, ret_only)
void main_f_90e2d0() {}

// sub_913870  (orig 0x913870, getter-chain)
uint64_t main_f_913870(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 1832); }

// sub_913880  (orig 0x913880, ret_only)
void main_f_913880() {}

// sub_913890  (orig 0x913890, copy2)
void main_f_913890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9138a0  (orig 0x9138a0, copy2)
void main_f_9138a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9176b0  (orig 0x9176b0, ret_only)
void main_f_9176b0() {}

// sub_9176c0  (orig 0x9176c0, struct-copy)
void main_f_9176c0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_9176e0  (orig 0x9176e0, struct-copy)
void main_f_9176e0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_917750  (orig 0x917750, ret_only)
void main_f_917750() {}

// sub_917760  (orig 0x917760, struct-copy)
void main_f_917760(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_917780  (orig 0x917780, struct-copy)
void main_f_917780(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_917990  (orig 0x917990, ret_only)
void main_f_917990() {}

// sub_9179a0  (orig 0x9179a0, struct-copy)
void main_f_9179a0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_9179c0  (orig 0x9179c0, struct-copy)
void main_f_9179c0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_919be0  (orig 0x919be0, ret_only)
void main_f_919be0() {}

// sub_919bf0  (orig 0x919bf0, copy2)
void main_f_919bf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_919c00  (orig 0x919c00, copy2)
void main_f_919c00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_919f80  (orig 0x919f80, ret_only)
void main_f_919f80() {}

// sub_91b5f0  (orig 0x91b5f0, ret_only)
void main_f_91b5f0() {}

// sub_91b600  (orig 0x91b600, ret_only)
void main_f_91b600() {}

// sub_91c920  (orig 0x91c920, call)
extern void sub_91b530();
uint32_t main_f_91c920() {
    sub_91b530();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_91d190  (orig 0x91d190, straight)
void main_f_91d190(uint64_t unused0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a1)) = (uint8_t)k0;
}

// sub_91d4d0  (orig 0x91d4d0, ret_only)
void main_f_91d4d0() {}

// sub_91db00  (orig 0x91db00, indirect-tailcall)
void main_f_91db00(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 112)))))(((uintptr_t)(a0)));
}

// sub_91dfe0  (orig 0x91dfe0, ret_only)
void main_f_91dfe0() {}

// sub_91e870  (orig 0x91e870, ret_only)
void main_f_91e870() {}

// sub_91f4c0  (orig 0x91f4c0, call)
extern void sub_eb6530();
uint32_t main_f_91f4c0() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_91f910  (orig 0x91f910, setter-chain)
void main_f_91f910(void* a0) { *(uint64_t*)((char*)(a0) + 1520) = 0; *(uint32_t*)((char*)(a0) + 1536) = 0; *(uint32_t*)((char*)(a0) + 1544) = 0; }

// sub_91ff60  (orig 0x91ff60, ret_only)
void main_f_91ff60() {}

// sub_91ff70  (orig 0x91ff70, copy2)
void main_f_91ff70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_91ff80  (orig 0x91ff80, copy2)
void main_f_91ff80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_91ffa0  (orig 0x91ffa0, ret_only)
void main_f_91ffa0() {}

// sub_91ffb0  (orig 0x91ffb0, copy2)
void main_f_91ffb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_91ffc0  (orig 0x91ffc0, copy2)
void main_f_91ffc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_921590  (orig 0x921590, const-field-set)
void main_f_921590(void* a0) { *(uint16_t *)(((char *)(*(void **)((char*)(a0))) + 1896)) = 257; }

// sub_9215a0  (orig 0x9215a0, ret_only)
void main_f_9215a0() {}

// sub_9215b0  (orig 0x9215b0, copy2)
void main_f_9215b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9215c0  (orig 0x9215c0, copy2)
void main_f_9215c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_921f70  (orig 0x921f70, ret_only)
void main_f_921f70() {}

// sub_921f80  (orig 0x921f80, copy2)
void main_f_921f80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_921f90  (orig 0x921f90, copy2)
void main_f_921f90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_922960  (orig 0x922960, getter)
uint32_t main_f_922960(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_922fc0  (orig 0x922fc0, straight-line)
uint8_t main_f_922fc0(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0) + 224)) + ((((uint64_t)(((uint32_t)(((uint32_t)a1)))))) * (((uint64_t)(((uint32_t)(12))))))));
    return *(uint8_t*)((char*)(p0) + 8);
}

// sub_923620  (orig 0x923620, ret_only)
void main_f_923620() {}

// sub_923630  (orig 0x923630, copy2)
void main_f_923630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_923640  (orig 0x923640, copy2)
void main_f_923640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9244c0  (orig 0x9244c0, mov_ret)
uint32_t main_f_9244c0() { return 0; }

// sub_9244d0  (orig 0x9244d0, ret_only)
void main_f_9244d0() {}

// sub_924780  (orig 0x924780, straight)
void main_f_924780(uint64_t unused0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a1)) = (uint8_t)k0;
}

// sub_924ab0  (orig 0x924ab0, ret_only)
void main_f_924ab0() {}

// sub_925490  (orig 0x925490, setter)
void main_f_925490(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_925ad0  (orig 0x925ad0, ret_only)
void main_f_925ad0() {}

// sub_9260c0  (orig 0x9260c0, straight)
void main_f_9260c0(uint64_t unused0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a1)) = (uint8_t)k0;
}

// sub_926380  (orig 0x926380, ret_only)
void main_f_926380() {}

// sub_9269f0  (orig 0x9269f0, ret_only)
void main_f_9269f0() {}

// sub_927530  (orig 0x927530, ret_only)
void main_f_927530() {}

// sub_92a7c0  (orig 0x92a7c0, ret_only)
void main_f_92a7c0() {}

// sub_92a7d0  (orig 0x92a7d0, copy2)
void main_f_92a7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92a7e0  (orig 0x92a7e0, copy2)
void main_f_92a7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92a7f0  (orig 0x92a7f0, const-field-set)
void main_f_92a7f0(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0))) + 1492)) = 1; }

// sub_92a800  (orig 0x92a800, ret_only)
void main_f_92a800() {}

// sub_92a810  (orig 0x92a810, copy2)
void main_f_92a810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92a820  (orig 0x92a820, copy2)
void main_f_92a820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92a920  (orig 0x92a920, straight)
void main_f_92a920(uint64_t unused0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a1)) = (uint8_t)k0;
}

// sub_92aab0  (orig 0x92aab0, straight)
void* main_f_92aab0(void* a0) {
    *(uint32_t*)((char*)(a0) + 124) = 3;
    return a0;
}

// sub_92aac0  (orig 0x92aac0, ret_only)
void main_f_92aac0() {}

// sub_92ad60  (orig 0x92ad60, straight)
void main_f_92ad60(uint64_t unused0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a1)) = (uint8_t)k0;
}

// sub_92bcb0  (orig 0x92bcb0, ret_only)
void main_f_92bcb0() {}

// sub_92c2a0  (orig 0x92c2a0, compare-pred)
bool main_f_92c2a0(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)(*(uint64_t*)(char*)a0) + 136)) + 1484)) == (uint32_t)(2); }

// sub_92c2c0  (orig 0x92c2c0, ret_only)
void main_f_92c2c0() {}

// sub_92c2d0  (orig 0x92c2d0, copy2)
void main_f_92c2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c2e0  (orig 0x92c2e0, copy2)
void main_f_92c2e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c300  (orig 0x92c300, ret_only)
void main_f_92c300() {}

// sub_92c310  (orig 0x92c310, copy2)
void main_f_92c310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c320  (orig 0x92c320, copy2)
void main_f_92c320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c370  (orig 0x92c370, ret_only)
void main_f_92c370() {}

// sub_92c380  (orig 0x92c380, copy2)
void main_f_92c380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c390  (orig 0x92c390, copy2)
void main_f_92c390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c590  (orig 0x92c590, ret_only)
void main_f_92c590() {}

// sub_92c5a0  (orig 0x92c5a0, ret_only)
void main_f_92c5a0() {}

// sub_92c5b0  (orig 0x92c5b0, call)
extern void sub_7eef40();
uint32_t main_f_92c5b0(void* a0) {
    uint32_t r0 = (((uint32_t (*)(uintptr_t))&sub_7eef40)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))))) & (65535);
    asm volatile("");
    return r0;
}

// sub_92c5d0  (orig 0x92c5d0, getter-chain)
uint8_t main_f_92c5d0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 8))) + 829); }

// sub_92c5e0  (orig 0x92c5e0, call)
extern void sub_7f0130();
uint32_t main_f_92c5e0(void* a0) {
    uint32_t r0 = (((uint32_t (*)(uintptr_t))&sub_7f0130)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))))) & (65535);
    asm volatile("");
    return r0;
}

// sub_92c600  (orig 0x92c600, call)
extern void sub_7f01d0();
uint32_t main_f_92c600(void* a0) {
    uint32_t r0 = (((uint32_t (*)(uintptr_t))&sub_7f01d0)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))))) & (65535);
    asm volatile("");
    return r0;
}

// sub_92c650  (orig 0x92c650, copy2)
void main_f_92c650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c660  (orig 0x92c660, copy2)
void main_f_92c660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c670  (orig 0x92c670, compare-pred)
bool main_f_92c670(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)(*(uint64_t*)(char*)a0) + 136)) + 1484)) == (uint32_t)(2); }

// sub_92c690  (orig 0x92c690, ret_only)
void main_f_92c690() {}

// sub_92c6a0  (orig 0x92c6a0, copy2)
void main_f_92c6a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c6b0  (orig 0x92c6b0, copy2)
void main_f_92c6b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c760  (orig 0x92c760, ret_only)
void main_f_92c760() {}

// sub_92c770  (orig 0x92c770, copy2)
void main_f_92c770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c780  (orig 0x92c780, copy2)
void main_f_92c780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c7e0  (orig 0x92c7e0, ret_only)
void main_f_92c7e0() {}

// sub_92c7f0  (orig 0x92c7f0, copy2)
void main_f_92c7f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c800  (orig 0x92c800, copy2)
void main_f_92c800(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c980  (orig 0x92c980, ret_only)
void main_f_92c980() {}

// sub_92c990  (orig 0x92c990, copy2)
void main_f_92c990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c9a0  (orig 0x92c9a0, copy2)
void main_f_92c9a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92fb90  (orig 0x92fb90, ret_only)
void main_f_92fb90() {}

// sub_92fdd0  (orig 0x92fdd0, straight)
void main_f_92fdd0(uint64_t unused0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a1)) = (uint8_t)k0;
}

// sub_930060  (orig 0x930060, getter-chain)
uint8_t main_f_930060(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 128))) + 1492); }

// sub_9305a0  (orig 0x9305a0, straight)
void main_f_9305a0(uint64_t unused0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a1)) = (uint8_t)k0;
}

// sub_930f90  (orig 0x930f90, straight)
void main_f_930f90(uint64_t unused0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a1)) = (uint8_t)k0;
}

// sub_931f70  (orig 0x931f70, ret_only)
void main_f_931f70() {}

// sub_932220  (orig 0x932220, straight)
void main_f_932220(uint64_t unused0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a1)) = (uint8_t)k0;
}

// sub_932b30  (orig 0x932b30, ret_only)
void main_f_932b30() {}

// sub_936450  (orig 0x936450, ret_only)
void main_f_936450() {}

// sub_936460  (orig 0x936460, copy2)
void main_f_936460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_936470  (orig 0x936470, copy2)
void main_f_936470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_936490  (orig 0x936490, ret_only)
void main_f_936490() {}

// sub_9364a0  (orig 0x9364a0, copy2)
void main_f_9364a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9364b0  (orig 0x9364b0, copy2)
void main_f_9364b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_936640  (orig 0x936640, ret_only)
void main_f_936640() {}

// sub_9372c0  (orig 0x9372c0, ret_only)
void main_f_9372c0() {}

// sub_9372d0  (orig 0x9372d0, copy2)
void main_f_9372d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9372e0  (orig 0x9372e0, copy2)
void main_f_9372e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_937e00  (orig 0x937e00, straight)
void main_f_937e00(uint64_t unused0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a1)) = (uint8_t)k0;
}

// sub_9380b0  (orig 0x9380b0, getter-chain)
uint8_t main_f_9380b0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 128))) + 1928); }

// sub_938620  (orig 0x938620, indirect-tailcall)
void main_f_938620(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 120));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 136)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_939650  (orig 0x939650, setter)
void main_f_939650(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 56) = a1; }

// sub_939f60  (orig 0x939f60, ret_only)
void main_f_939f60() {}

// sub_93a6e0  (orig 0x93a6e0, straight)
uint64_t main_f_93a6e0() { return 10723886409828204938; }

// sub_93bf30  (orig 0x93bf30, straight)
void main_f_93bf30(void* a0) {
    *(uint64_t*)((char*)(a0) + 1680) = 15159528952870462595;
    *(uint64_t*)((char*)(a0) + 1688) = 14835384022698827581;
    *(uint64_t*)((char*)(a0) + 1696) = 9320558797348122864;
}

// sub_93c150  (orig 0x93c150, straight)
uint64_t main_f_93c150() { return 10379046512583960743; }

// sub_93c440  (orig 0x93c440, ret_only)
void main_f_93c440() {}

// sub_93c8b0  (orig 0x93c8b0, ret_only)
void main_f_93c8b0() {}

// sub_93c8c0  (orig 0x93c8c0, copy2)
void main_f_93c8c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_93c8d0  (orig 0x93c8d0, copy2)
void main_f_93c8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_93cbf0  (orig 0x93cbf0, call)
extern void sub_17b5b70();
uint32_t main_f_93cbf0(void* a0) {
    uint32_t r0 = (((uint32_t (*)(uintptr_t))&sub_17b5b70)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))))) & (65535);
    asm volatile("");
    return r0;
}

// sub_93ccc0  (orig 0x93ccc0, mov_ret)
uint32_t main_f_93ccc0() { return 0; }

// sub_93dfa0  (orig 0x93dfa0, mov_ret)
uint32_t main_f_93dfa0() { return 1; }

// sub_93fbe0  (orig 0x93fbe0, mov_ret)
uint32_t main_f_93fbe0() { return 1; }

// sub_93fee0  (orig 0x93fee0, ret_only)
void main_f_93fee0() {}

// sub_93fef0  (orig 0x93fef0, struct-copy)
void main_f_93fef0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_93ff10  (orig 0x93ff10, struct-copy)
void main_f_93ff10(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_9411c0  (orig 0x9411c0, straight)
void main_f_9411c0(void* a0) {
    uint16_t k0 = 0;
    *(uint64_t*)((char*)(a0) + 5892L) = 1095216660735;
    *(uint64_t*)((char*)(a0) + 5900L) = 1095216660735;
    *(uint64_t*)((char*)(a0) + 5908L) = 1095216660735;
    *(uint64_t*)((char*)(a0) + 5916L) = 1095216660735;
    *(uint64_t*)((char*)(a0) + 5884L) = 1095216660735;
    *(uint32_t*)((char*)(a0) + 5924L) = 255;
    *(uint64_t*)((char*)(a0) + 5952L) = 17179869188;
    *(uint64_t*)((char*)(a0) + 5960L) = 17179869188;
    *(uint16_t*)((char*)(a0) + 5937L) = 0;
    *(uint8_t*)((char*)(a0) + 5939L) = (uint8_t)k0;
}

// sub_941220  (orig 0x941220, straight)
void main_f_941220(void* a0) {
    *(uint64_t*)((char*)(a0) + 6060L) = 0;
    *(uint64_t*)((char*)(a0) + 6052L) = 0;
    *(uint64_t*)((char*)(a0) + 6092L) = -1;
    *(uint64_t*)((char*)(a0) + 6084L) = -1;
    *(uint64_t*)((char*)(a0) + 6076L) = -1;
    *(uint64_t*)((char*)(a0) + 6068L) = -1;
}

// sub_9470b0  (orig 0x9470b0, mov_ret)
uint32_t main_f_9470b0() { return 1; }

// sub_953950  (orig 0x953950, straight)
void* main_f_953950(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 1112));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 152) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 144) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_95abd0  (orig 0x95abd0, compare)
bool main_f_95abd0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 160)) == (uint64_t)(0); }

// sub_95bd10  (orig 0x95bd10, straight-line)
uint8_t main_f_95bd10(void* a0) { return ((*(uint8_t*)((char*)(a0) + 6048L) == 0) ? 1 : 0); }

// sub_95be00  (orig 0x95be00, indirect-tailcall)
void main_f_95be00(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 2576)))))(((uintptr_t)(a0)));
}

// sub_962410  (orig 0x962410, straight)
void main_f_962410(void* a0, uint8_t a1, uint64_t a2) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (a1) * 4)));
    *(uint32_t*)((char*)(p0) + 6052L) = (uint32_t)(a2);
}

// sub_962420  (orig 0x962420, straight)
uint32_t main_f_962420(void* a0, uint8_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (a1) * 4)));
    return *(uint32_t*)((char*)(p0) + 6052L);
}

// sub_962430  (orig 0x962430, straight)
void main_f_962430(void* a0, uint8_t a1, uint64_t a2, uint64_t a3) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (a1) * 8)));
    *(uint32_t*)((char*)(p0) + 6068L) = (uint32_t)(a2);
    *(uint32_t*)((char*)(p0) + 6072L) = (uint32_t)(a3);
}

// sub_962440  (orig 0x962440, straight)
uint32_t main_f_962440(void* a0, uint8_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (a1) * 8)));
    return *(uint32_t*)((char*)(p0) + 6068L);
}

// sub_962450  (orig 0x962450, straight)
uint32_t main_f_962450(void* a0, uint8_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (a1) * 8)));
    return *(uint32_t*)((char*)(p0) + 6072L);
}

// sub_967110  (orig 0x967110, mov_ret)
uint32_t main_f_967110() { return 1; }

// sub_967120  (orig 0x967120, mov_ret)
uint32_t main_f_967120() { return 1; }

// sub_967130  (orig 0x967130, ret_only)
void main_f_967130() {}

// sub_967140  (orig 0x967140, ret_only)
void main_f_967140() {}

// sub_967150  (orig 0x967150, ret_only)
void main_f_967150() {}

// sub_967160  (orig 0x967160, straight)
void* main_f_967160(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 8048L) = (uint8_t)k0;
    return a0;
}

// sub_967190  (orig 0x967190, mov_ret)
uint32_t main_f_967190() { return 0; }

// sub_967920  (orig 0x967920, mov_ret)
uint32_t main_f_967920() { return 16; }

// sub_967930  (orig 0x967930, indexed-getter)
uint64_t main_f_967930(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_967940  (orig 0x967940, indexed-getter)
uint64_t main_f_967940(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_967b80  (orig 0x967b80, mov_ret)
uint32_t main_f_967b80() { return 1; }

// sub_967b90  (orig 0x967b90, mov_ret)
uint32_t main_f_967b90() { return 1; }

// sub_967ba0  (orig 0x967ba0, ret_only)
void main_f_967ba0() {}

// sub_967bb0  (orig 0x967bb0, ret_only)
void main_f_967bb0() {}

// sub_967bc0  (orig 0x967bc0, ret_only)
void main_f_967bc0() {}

// sub_96a390  (orig 0x96a390, ret_only)
void main_f_96a390() {}

// sub_96a570  (orig 0x96a570, ret_only)
void main_f_96a570() {}

// sub_96a580  (orig 0x96a580, copy2)
void main_f_96a580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96a590  (orig 0x96a590, copy2)
void main_f_96a590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b000  (orig 0x96b000, ret_only)
void main_f_96b000() {}

// sub_96b010  (orig 0x96b010, copy2)
void main_f_96b010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b020  (orig 0x96b020, copy2)
void main_f_96b020(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b080  (orig 0x96b080, ret_only)
void main_f_96b080() {}

// sub_96b090  (orig 0x96b090, copy2)
void main_f_96b090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b0a0  (orig 0x96b0a0, copy2)
void main_f_96b0a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b2c0  (orig 0x96b2c0, ret_only)
void main_f_96b2c0() {}

// sub_96b940  (orig 0x96b940, copy2)
void main_f_96b940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b950  (orig 0x96b950, copy2)
void main_f_96b950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96bb70  (orig 0x96bb70, ret_only)
void main_f_96bb70() {}

// sub_96c8e0  (orig 0x96c8e0, straight)
void* main_f_96c8e0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_96c900  (orig 0x96c900, ret_only)
void main_f_96c900() {}

// sub_96c910  (orig 0x96c910, copy2)
void main_f_96c910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96c920  (orig 0x96c920, copy2)
void main_f_96c920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96ca70  (orig 0x96ca70, straight)
void* main_f_96ca70(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_96ca90  (orig 0x96ca90, ret_only)
void main_f_96ca90() {}

// sub_96caa0  (orig 0x96caa0, copy2)
void main_f_96caa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cab0  (orig 0x96cab0, copy2)
void main_f_96cab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cac0  (orig 0x96cac0, straight)
void* main_f_96cac0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_96cae0  (orig 0x96cae0, ret_only)
void main_f_96cae0() {}

// sub_96caf0  (orig 0x96caf0, copy2)
void main_f_96caf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cb00  (orig 0x96cb00, copy2)
void main_f_96cb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cb10  (orig 0x96cb10, straight)
void* main_f_96cb10(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1064) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1056) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_96cb30  (orig 0x96cb30, ret_only)
void main_f_96cb30() {}

// sub_96cb40  (orig 0x96cb40, copy2)
void main_f_96cb40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cb50  (orig 0x96cb50, copy2)
void main_f_96cb50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cca0  (orig 0x96cca0, straight)
void* main_f_96cca0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1080) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1072) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_96ccc0  (orig 0x96ccc0, ret_only)
void main_f_96ccc0() {}

// sub_96ccd0  (orig 0x96ccd0, copy2)
void main_f_96ccd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cce0  (orig 0x96cce0, copy2)
void main_f_96cce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96d2b0  (orig 0x96d2b0, ret_only)
void main_f_96d2b0() {}

// sub_96d2c0  (orig 0x96d2c0, struct-copy)
void main_f_96d2c0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_96d2e0  (orig 0x96d2e0, struct-copy)
void main_f_96d2e0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_96d950  (orig 0x96d950, straight)
void* main_f_96d950(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_96d970  (orig 0x96d970, ret_only)
void main_f_96d970() {}

// sub_96d980  (orig 0x96d980, copy2)
void main_f_96d980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96d990  (orig 0x96d990, copy2)
void main_f_96d990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96dae0  (orig 0x96dae0, straight)
void* main_f_96dae0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_96db00  (orig 0x96db00, ret_only)
void main_f_96db00() {}

// sub_96db10  (orig 0x96db10, copy2)
void main_f_96db10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96db20  (orig 0x96db20, copy2)
void main_f_96db20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96db30  (orig 0x96db30, straight)
void* main_f_96db30(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_96db50  (orig 0x96db50, ret_only)
void main_f_96db50() {}

// sub_96db60  (orig 0x96db60, copy2)
void main_f_96db60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96db70  (orig 0x96db70, copy2)
void main_f_96db70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96dd70  (orig 0x96dd70, ret_only)
void main_f_96dd70() {}

// sub_96e0c0  (orig 0x96e0c0, ret_only)
void main_f_96e0c0() {}

// sub_96e490  (orig 0x96e490, ret_only)
void main_f_96e490() {}

// sub_96e6b0  (orig 0x96e6b0, ret_only)
void main_f_96e6b0() {}

// sub_96e8d0  (orig 0x96e8d0, ret_only)
void main_f_96e8d0() {}

// sub_96eaf0  (orig 0x96eaf0, ret_only)
void main_f_96eaf0() {}

// sub_96ed10  (orig 0x96ed10, ret_only)
void main_f_96ed10() {}

// sub_96ef30  (orig 0x96ef30, ret_only)
void main_f_96ef30() {}

// sub_96f150  (orig 0x96f150, ret_only)
void main_f_96f150() {}

// sub_96f370  (orig 0x96f370, ret_only)
void main_f_96f370() {}

// sub_96f3c0  (orig 0x96f3c0, ret_only)
void main_f_96f3c0() {}

// sub_96f3d0  (orig 0x96f3d0, struct-copy)
void main_f_96f3d0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_96f3f0  (orig 0x96f3f0, struct-copy)
void main_f_96f3f0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_96f500  (orig 0x96f500, ret_only)
void main_f_96f500() {}

// sub_96f510  (orig 0x96f510, copy2)
void main_f_96f510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96f520  (orig 0x96f520, copy2)
void main_f_96f520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96f5d0  (orig 0x96f5d0, ret_only)
void main_f_96f5d0() {}

// sub_96f670  (orig 0x96f670, ret_only)
void main_f_96f670() {}

// sub_96f790  (orig 0x96f790, ret_only)
void main_f_96f790() {}

// sub_96f7f0  (orig 0x96f7f0, ret_only)
void main_f_96f7f0() {}

// sub_96fa00  (orig 0x96fa00, ret_only)
void main_f_96fa00() {}

// sub_96fa10  (orig 0x96fa10, copy2)
void main_f_96fa10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96fa20  (orig 0x96fa20, copy2)
void main_f_96fa20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96fb20  (orig 0x96fb20, ret_only)
void main_f_96fb20() {}

// sub_96fb30  (orig 0x96fb30, ret_only)
void main_f_96fb30() {}

// sub_96fb40  (orig 0x96fb40, ret_only)
void main_f_96fb40() {}

// sub_970160  (orig 0x970160, straight)
void* main_f_970160(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 257;
    *(uint32_t*)((char*)(a0) + 1120) = 257;
    *(uint16_t*)((char*)(p0) + 1124) = (uint16_t)k1;
    return a0;
}

// sub_974740  (orig 0x974740, indirect-tailcall)
void main_f_974740(void* a0, uint32_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t, uint32_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 416)))))(((uintptr_t)(a0)), ((uintptr_t)((((uint32_t)a1)) & (1))), ((uint32_t)(2)));
}

// sub_974780  (orig 0x974780, indirect-tailcall)
void main_f_974780(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uint32_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 432)))))(((uintptr_t)(a0)), ((uint32_t)(2)));
}

// sub_976010  (orig 0x976010, indirect-tailcall)
void main_f_976010(void* a0, uint32_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t, uint32_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 488)))))(((uintptr_t)(a0)), ((uintptr_t)((((uint32_t)a1)) & (1))), ((uint32_t)(2)));
}

// sub_9760b0  (orig 0x9760b0, indirect-tailcall)
void main_f_9760b0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uint32_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 432)))))(((uintptr_t)(a0)), ((uint32_t)(2)));
}

// sub_976110  (orig 0x976110, indirect-tailcall)
void main_f_976110(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 400)))))(((uintptr_t)(a0)));
}

// sub_9780f0  (orig 0x9780f0, ret_only)
void main_f_9780f0() {}

// sub_978100  (orig 0x978100, ret_only)
void main_f_978100() {}

// sub_978110  (orig 0x978110, mov_ret)
uint32_t main_f_978110() { return 0; }

// sub_978120  (orig 0x978120, getter)
uint8_t main_f_978120(void* a0) { return *(uint8_t*)((char*)(a0) + 480); }

// sub_978130  (orig 0x978130, getter)
uint8_t main_f_978130(void* a0) { return *(uint8_t*)((char*)(a0) + 481); }

// sub_978140  (orig 0x978140, getter)
uint8_t main_f_978140(void* a0) { return *(uint8_t*)((char*)(a0) + 482); }

// sub_9781a0  (orig 0x9781a0, compare)
bool main_f_9781a0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 488)) != (uint64_t)(0); }

// sub_9781b0  (orig 0x9781b0, ret_only)
void main_f_9781b0() {}

// sub_9781c0  (orig 0x9781c0, ret_only)
void main_f_9781c0() {}

// sub_9781d0  (orig 0x9781d0, mov_ret)
uint32_t main_f_9781d0() { return 0; }

// sub_9781e0  (orig 0x9781e0, ret_only)
void main_f_9781e0() {}

// sub_978200  (orig 0x978200, copy2)
void main_f_978200(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 392) = *(uint64_t*)((char*)(a1)); }

// sub_978210  (orig 0x978210, ret_only)
void main_f_978210() {}

// sub_978220  (orig 0x978220, ret_only)
void main_f_978220() {}

// sub_978230  (orig 0x978230, ret_only)
void main_f_978230() {}

// sub_978240  (orig 0x978240, mov_ret)
uint32_t main_f_978240() { return 0; }

// sub_978250  (orig 0x978250, ret_only)
void main_f_978250() {}

// sub_978260  (orig 0x978260, ret_only)
void main_f_978260() {}

// sub_978270  (orig 0x978270, mov_ret)
uint32_t main_f_978270() { return 0; }

// sub_978280  (orig 0x978280, straight)
void main_f_978280(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 1122) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_978290  (orig 0x978290, mov_ret)
uint64_t main_f_978290() { return 0; }

// sub_9782a0  (orig 0x9782a0, mov_ret)
uint32_t main_f_9782a0() { return 0; }

// sub_9782b0  (orig 0x9782b0, mov_ret)
uint32_t main_f_9782b0() { return 1; }

// sub_9782c0  (orig 0x9782c0, straight)
typedef struct { unsigned char b[32]; } __S_f_9782c0;
__S_f_9782c0 main_f_9782c0() {
    __S_f_9782c0 r;
    uint32_t k0 = 0;
    uint32_t k1 = 0;
    *(uint32_t *)((char *)&r + 24) = -1;
    *(uint32_t *)((char *)&r + 0) = 0;
    *(uint16_t *)((char *)&r + 4) = (uint16_t)k0;
    *(uint32_t *)((char *)&r + 8) = 0;
    *(uint16_t *)((char *)&r + 12) = (uint16_t)k1;
    *(uint64_t *)((char *)&r + 16) = 0;
    return r;
}

// sub_9782e0  (orig 0x9782e0, mov_ret)
uint32_t main_f_9782e0() { return 15; }

// sub_978890  (orig 0x978890, getter)
uint32_t main_f_978890(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_9788a0  (orig 0x9788a0, getter)
uint32_t main_f_9788a0(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_9788b0  (orig 0x9788b0, straight)
void* main_f_9788b0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 116) = (uint8_t)k0;
    return a0;
}

// sub_9788c0  (orig 0x9788c0, getter)
uint8_t main_f_9788c0(void* a0) { return *(uint8_t*)((char*)(a0) + 116); }

// sub_9788d0  (orig 0x9788d0, ret_only)
void main_f_9788d0() {}

// sub_978b20  (orig 0x978b20, getter)
uint32_t main_f_978b20(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_978b30  (orig 0x978b30, getter)
uint32_t main_f_978b30(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_978b40  (orig 0x978b40, straight)
void* main_f_978b40(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 44) = (uint8_t)k0;
    return a0;
}

// sub_978b50  (orig 0x978b50, getter)
uint8_t main_f_978b50(void* a0) { return *(uint8_t*)((char*)(a0) + 44); }

// sub_981b60  (orig 0x981b60, straight)
void main_f_981b60(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 1345) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_983f60  (orig 0x983f60, getter)
uint8_t main_f_983f60(void* a0) { return *(uint8_t*)((char*)(a0) + 1201); }

// sub_984f30  (orig 0x984f30, getter)
uint32_t main_f_984f30(void* a0) { return *(uint32_t*)((char*)(a0) + 1216); }

// sub_984f40  (orig 0x984f40, getter)
uint8_t main_f_984f40(void* a0) { return *(uint8_t*)((char*)(a0) + 1220); }

// sub_984f50  (orig 0x984f50, straight)
typedef struct { unsigned char b[32]; } __S_f_984f50;
__S_f_984f50 main_f_984f50(void* a0) {
    __S_f_984f50 r;
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t *)((char *)&r + 0) = *(uint32_t*)((char*)(a0) + 1248);
    *(uint16_t *)((char *)&r + 4) = *(uint16_t*)((char*)(p0) + 1252);
    *(uint32_t *)((char *)&r + 8) = *(uint32_t*)((char*)(p0) + 1256);
    *(uint8_t *)((char *)&r + 12) = *(uint8_t*)((char*)(p0) + 1260);
    *(uint8_t *)((char *)&r + 13) = *(uint8_t*)((char*)(p0) + 1261);
    *(uint32_t *)((char *)&r + 16) = *(uint32_t*)((char*)(p0) + 1264);
    *(uint32_t *)((char *)&r + 20) = *(uint32_t*)((char*)(p0) + 1268);
    *(uint32_t *)((char *)&r + 24) = *(uint32_t*)((char*)(p0) + 1272);
    return r;
}

// sub_984fa0  (orig 0x984fa0, getter)
uint32_t main_f_984fa0(void* a0) { return *(uint32_t*)((char*)(a0) + 1236); }

// sub_985010  (orig 0x985010, ret_only)
void main_f_985010() {}

// sub_985e20  (orig 0x985e20, ret_only)
void main_f_985e20() {}

// sub_9861d0  (orig 0x9861d0, ret_only)
void main_f_9861d0() {}

// sub_9861e0  (orig 0x9861e0, copy2)
void main_f_9861e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9861f0  (orig 0x9861f0, copy2)
void main_f_9861f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_986650  (orig 0x986650, ret_only)
void main_f_986650() {}

// sub_986720  (orig 0x986720, ret_only)
void main_f_986720() {}

// sub_986820  (orig 0x986820, ret_only)
void main_f_986820() {}

// sub_9868b0  (orig 0x9868b0, ret_only)
void main_f_9868b0() {}

// sub_986930  (orig 0x986930, ret_only)
void main_f_986930() {}

// sub_986a30  (orig 0x986a30, ret_only)
void main_f_986a30() {}

// sub_9871a0  (orig 0x9871a0, ret_only)
void main_f_9871a0() {}

// sub_987410  (orig 0x987410, getter)
__int128 main_f_987410(void* a0) { return *(__int128*)((char*)(a0)); }

// sub_987420  (orig 0x987420, ret_only)
void main_f_987420() {}

// sub_987430  (orig 0x987430, straight)
void* main_f_987430(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(p1)) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_987450  (orig 0x987450, straight)
void* main_f_987450(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(p1)) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_9874e0  (orig 0x9874e0, ret_only)
void main_f_9874e0() {}

// sub_9875a0  (orig 0x9875a0, getter)
__int128 main_f_9875a0(void* a0) { return *(__int128*)((char*)(a0)); }

// sub_9875b0  (orig 0x9875b0, ret_only)
void main_f_9875b0() {}

// sub_9875c0  (orig 0x9875c0, straight)
void* main_f_9875c0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(p1)) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_9875e0  (orig 0x9875e0, straight)
void* main_f_9875e0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(p1)) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_987600  (orig 0x987600, getter)
float main_f_987600(void* a0) { return *(float*)((char*)(a0)); }

// sub_987610  (orig 0x987610, ret_only)
void main_f_987610() {}

// sub_987620  (orig 0x987620, copy2)
void main_f_987620(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_987630  (orig 0x987630, copy2)
void main_f_987630(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_9876b0  (orig 0x9876b0, ret_only)
void main_f_9876b0() {}

// sub_987770  (orig 0x987770, getter)
float main_f_987770(void* a0) { return *(float*)((char*)(a0)); }

// sub_987780  (orig 0x987780, ret_only)
void main_f_987780() {}

// sub_987790  (orig 0x987790, copy2)
void main_f_987790(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_9877a0  (orig 0x9877a0, copy2)
void main_f_9877a0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_9877b0  (orig 0x9877b0, compare)
bool main_f_9877b0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_9877c0  (orig 0x9877c0, ret_only)
void main_f_9877c0() {}

// sub_9877d0  (orig 0x9877d0, copy2)
void main_f_9877d0(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_9877e0  (orig 0x9877e0, copy2)
void main_f_9877e0(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_9877f0  (orig 0x9877f0, ret_only)
void main_f_9877f0() {}

// sub_987870  (orig 0x987870, ret_only)
void main_f_987870() {}

// sub_987930  (orig 0x987930, compare)
bool main_f_987930(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_987940  (orig 0x987940, ret_only)
void main_f_987940() {}

// sub_987950  (orig 0x987950, copy2)
void main_f_987950(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_987960  (orig 0x987960, copy2)
void main_f_987960(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_9879e0  (orig 0x9879e0, ret_only)
void main_f_9879e0() {}

// sub_987af0  (orig 0x987af0, ret_only)
void main_f_987af0() {}

// sub_987c00  (orig 0x987c00, ret_only)
void main_f_987c00() {}

// sub_987e90  (orig 0x987e90, guarded)
void main_f_987e90(void* a0, int32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a1)) * 1)));
    if ((a1) <= (15)) {
        *(uint8_t*)((char*)(p0) + 8) = 0;
        return;
    }
}

// fel_999  (orig 0x987eb0, straight)
void main_f_987eb0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 24) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_987ec0  (orig 0x987ec0, ret_only)
void main_f_987ec0() {}

// sub_98aee0  (orig 0x98aee0, straight)
void main_f_98aee0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 32) = (*(uint64_t*)((char*)(p0) + 32)) | (1);
}

// sub_98af00  (orig 0x98af00, ret_only)
void main_f_98af00() {}

// sub_98af10  (orig 0x98af10, copy2)
void main_f_98af10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_98af20  (orig 0x98af20, copy2)
void main_f_98af20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_98dc80  (orig 0x98dc80, getter)
uint32_t main_f_98dc80(void* a0) { return *(uint32_t*)((char*)(a0) + 1200); }

// sub_98dc90  (orig 0x98dc90, getter)
uint8_t main_f_98dc90(void* a0) { return *(uint8_t*)((char*)(a0) + 1204); }

// sub_98dca0  (orig 0x98dca0, straight)
typedef struct { unsigned char b[32]; } __S_f_98dca0;
__S_f_98dca0 main_f_98dca0(void* a0) {
    __S_f_98dca0 r;
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t *)((char *)&r + 0) = *(uint32_t*)((char*)(a0) + 1224);
    *(uint16_t *)((char *)&r + 4) = *(uint16_t*)((char*)(p0) + 1228);
    *(uint32_t *)((char *)&r + 8) = *(uint32_t*)((char*)(p0) + 1232);
    *(uint8_t *)((char *)&r + 12) = *(uint8_t*)((char*)(p0) + 1236);
    *(uint8_t *)((char *)&r + 13) = *(uint8_t*)((char*)(p0) + 1237);
    *(uint32_t *)((char *)&r + 16) = *(uint32_t*)((char*)(p0) + 1240);
    *(uint32_t *)((char *)&r + 20) = *(uint32_t*)((char*)(p0) + 1244);
    *(uint32_t *)((char *)&r + 24) = *(uint32_t*)((char*)(p0) + 1248);
    return r;
}

// sub_98def0  (orig 0x98def0, ret_only)
void main_f_98def0() {}

// sub_98e040  (orig 0x98e040, ret_only)
void main_f_98e040() {}

// sub_98e140  (orig 0x98e140, ret_only)
void main_f_98e140() {}

// sub_98e820  (orig 0x98e820, ret_only)
void main_f_98e820() {}

// sub_9a42f0  (orig 0x9a42f0, ret_only)
void main_f_9a42f0() {}

// sub_9a4600  (orig 0x9a4600, straight)
void* main_f_9a4600(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_9a4680  (orig 0x9a4680, copy-chain-store)
void main_f_9a4680(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_9a4690  (orig 0x9a4690, straight)
void* main_f_9a4690(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_9a4710  (orig 0x9a4710, copy-chain-store)
void main_f_9a4710(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_9a4720  (orig 0x9a4720, straight)
void* main_f_9a4720(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_9a47a0  (orig 0x9a47a0, copy-chain-store)
void main_f_9a47a0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_9a47b0  (orig 0x9a47b0, straight)
void* main_f_9a47b0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_9a4830  (orig 0x9a4830, copy-chain-store)
void main_f_9a4830(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_9a4840  (orig 0x9a4840, straight)
void* main_f_9a4840(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_9a48c0  (orig 0x9a48c0, copy-chain-store)
void main_f_9a48c0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_9a48d0  (orig 0x9a48d0, straight)
void* main_f_9a48d0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_9a48f0  (orig 0x9a48f0, ret_only)
void main_f_9a48f0() {}

// sub_9a4900  (orig 0x9a4900, copy2)
void main_f_9a4900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9a4910  (orig 0x9a4910, copy2)
void main_f_9a4910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9a71a0  (orig 0x9a71a0, straight)
void* main_f_9a71a0(void* a0, void* a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    void* p2 = (void*)((uintptr_t)(a2));
    uint32_t k3 = 1;
    *(uint64_t*)((char*)(a0) + 56) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 48) = *(uint64_t*)((char*)(p0));
    *(uint64_t*)((char*)(p1) + 72) = *(uint64_t*)((char*)(a2) + 8);
    *(uint64_t*)((char*)(p1) + 64) = *(uint64_t*)((char*)(p2));
    *(uint8_t*)((char*)(p1) + 128) = (uint8_t)k3;
    return a0;
}

// sub_9a71e0  (orig 0x9a71e0, straight)
void* main_f_9a71e0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    uint32_t k2 = 1;
    *(uint64_t*)((char*)(a0) + 104) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 96) = *(uint64_t*)((char*)(p0));
    *(uint8_t*)((char*)(p1) + 128) = (uint8_t)k2;
    return a0;
}

// sub_9a7200  (orig 0x9a7200, straight)
void* main_f_9a7200(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    uint32_t k2 = 1;
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 112) = *(uint64_t*)((char*)(p0));
    *(uint8_t*)((char*)(p1) + 128) = (uint8_t)k2;
    return a0;
}

// sub_9a78c0  (orig 0x9a78c0, setter)
void main_f_9a78c0(void* a0) { *(uint8_t*)((char*)(a0) + 256) = 0; }

// sub_9ac5e0  (orig 0x9ac5e0, ret_only)
void main_f_9ac5e0() {}

// sub_9ac5f0  (orig 0x9ac5f0, ret_only)
void main_f_9ac5f0() {}

// sub_9acf50  (orig 0x9acf50, ret_only)
void main_f_9acf50() {}

// sub_9ad060  (orig 0x9ad060, ret_only)
void main_f_9ad060() {}

// sub_9ae1b0  (orig 0x9ae1b0, ret_only)
void main_f_9ae1b0() {}

// sub_9ae3b0  (orig 0x9ae3b0, ret_only)
void main_f_9ae3b0() {}

// sub_9b02f0  (orig 0x9b02f0, ret_only)
void main_f_9b02f0() {}

// sub_9b32b0  (orig 0x9b32b0, mov_ret)
uint32_t main_f_9b32b0() { return 1; }

// sub_9b7700  (orig 0x9b7700, mov_ret)
uint32_t main_f_9b7700() { return 1; }

// sub_9b7730  (orig 0x9b7730, mov_ret)
uint32_t main_f_9b7730() { return 1; }

// sub_9b79b0  (orig 0x9b79b0, mov_ret)
uint32_t main_f_9b79b0() { return 0; }

// sub_9b84c0  (orig 0x9b84c0, ret_only)
void main_f_9b84c0() {}

// sub_9b84d0  (orig 0x9b84d0, mov_ret)
uint32_t main_f_9b84d0() { return 1; }

// sub_9b8c30  (orig 0x9b8c30, call)
extern void sub_98ab90();
uint64_t main_f_9b8c30(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 1480));
    uint32_t k1 = 1;
    uint64_t f_9b8c30__r0 = ((uint64_t (*)(uintptr_t))&sub_98ab90)(((uintptr_t)(*(uint64_t*)((char*)(p0) + 56))));
    void* p1 = (void*)((uintptr_t)(f_9b8c30__r0));
    *(uint16_t*)((char*)(p1) + 1432) = (uint16_t)k1;
    uint64_t r0 = f_9b8c30__r0;
    asm volatile("");
    return r0;
}

// sub_9b8c60  (orig 0x9b8c60, call)
extern void sub_98ab90();
uint8_t main_f_9b8c60(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 1480));
    uint64_t f_9b8c60__r0 = ((uint64_t (*)(uintptr_t))&sub_98ab90)(((uintptr_t)(*(uint64_t*)((char*)(p0) + 56))));
    void* p1 = (void*)((uintptr_t)(f_9b8c60__r0));
    uint8_t r0 = *(uint8_t*)((char*)(p1) + 1433);
    asm volatile("");
    return r0;
}

// sub_9bad40  (orig 0x9bad40, compare)
bool main_f_9bad40(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 16)) == (uint64_t)(4); }

// sub_9bbb40  (orig 0x9bbb40, ret_only)
void main_f_9bbb40() {}

// sub_9bbb50  (orig 0x9bbb50, struct-copy)
void main_f_9bbb50(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_9bbb70  (orig 0x9bbb70, struct-copy)
void main_f_9bbb70(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_9bc910  (orig 0x9bc910, ret_only)
void main_f_9bc910() {}

// sub_9bde40  (orig 0x9bde40, straight)
void* main_f_9bde40(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 52) = (uint8_t)k0;
    return a0;
}

// sub_9bde50  (orig 0x9bde50, compare)
bool main_f_9bde50(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 16)) == (uint64_t)(0); }

// sub_9be200  (orig 0x9be200, mov_ret)
uint32_t main_f_9be200() { return 1; }

// sub_9be840  (orig 0x9be840, ret_only)
void main_f_9be840() {}

// sub_9f9350  (orig 0x9f9350, compare)
bool main_f_9f9350(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 16)) == (uint64_t)(0); }

// sub_a37b70  (orig 0xa37b70, ret_only)
void main_f_a37b70() {}

// sub_a37b80  (orig 0xa37b80, ret_only)
void main_f_a37b80() {}

// sub_a37b90  (orig 0xa37b90, ret_only)
void main_f_a37b90() {}

// sub_a3cdd0  (orig 0xa3cdd0, ret_only)
void main_f_a3cdd0() {}

// sub_a3cde0  (orig 0xa3cde0, ret_only)
void main_f_a3cde0() {}

// sub_a3ec10  (orig 0xa3ec10, ret_only)
void main_f_a3ec10() {}

// sub_a40220  (orig 0xa40220, ret_only)
void main_f_a40220() {}

// sub_a40840  (orig 0xa40840, ret_only)
void main_f_a40840() {}

// sub_a40ab0  (orig 0xa40ab0, ret_only)
void main_f_a40ab0() {}

// sub_a41560  (orig 0xa41560, ret_only)
void main_f_a41560() {}

// sub_a41880  (orig 0xa41880, ret_only)
void main_f_a41880() {}

// sub_a42630  (orig 0xa42630, ret_only)
void main_f_a42630() {}

// sub_a42800  (orig 0xa42800, ret_only)
void main_f_a42800() {}

// sub_a42980  (orig 0xa42980, ret_only)
void main_f_a42980() {}

// sub_a42b50  (orig 0xa42b50, ret_only)
void main_f_a42b50() {}

// sub_a42cd0  (orig 0xa42cd0, ret_only)
void main_f_a42cd0() {}

// sub_a47fc0  (orig 0xa47fc0, ret_only)
void main_f_a47fc0() {}

// sub_a488f0  (orig 0xa488f0, ret_only)
void main_f_a488f0() {}

// sub_a49140  (orig 0xa49140, ret_only)
void main_f_a49140() {}

// sub_a497e0  (orig 0xa497e0, ret_only)
void main_f_a497e0() {}

// sub_a4c310  (orig 0xa4c310, ret_only)
void main_f_a4c310() {}

// sub_a4c9a0  (orig 0xa4c9a0, ret_only)
void main_f_a4c9a0() {}

// sub_a4ddb0  (orig 0xa4ddb0, ret_only)
void main_f_a4ddb0() {}

// sub_a4ddc0  (orig 0xa4ddc0, ret_only)
void main_f_a4ddc0() {}

// sub_a4e380  (orig 0xa4e380, ret_only)
void main_f_a4e380() {}

// sub_a4ea20  (orig 0xa4ea20, ret_only)
void main_f_a4ea20() {}

// sub_a4ebf0  (orig 0xa4ebf0, ret_only)
void main_f_a4ebf0() {}

// sub_a4f260  (orig 0xa4f260, ret_only)
void main_f_a4f260() {}

// sub_a51e30  (orig 0xa51e30, ret_only)
void main_f_a51e30() {}

// sub_a51e40  (orig 0xa51e40, ret_only)
void main_f_a51e40() {}

// sub_a51e50  (orig 0xa51e50, ret_only)
void main_f_a51e50() {}

// sub_a51e60  (orig 0xa51e60, ret_only)
void main_f_a51e60() {}

// sub_a51e70  (orig 0xa51e70, ret_only)
void main_f_a51e70() {}

// sub_a51e80  (orig 0xa51e80, ret_only)
void main_f_a51e80() {}

// sub_a51e90  (orig 0xa51e90, ret_only)
void main_f_a51e90() {}

// sub_a51ea0  (orig 0xa51ea0, ret_only)
void main_f_a51ea0() {}

// sub_a51eb0  (orig 0xa51eb0, ret_only)
void main_f_a51eb0() {}

// sub_a51ec0  (orig 0xa51ec0, ret_only)
void main_f_a51ec0() {}

// sub_a51ed0  (orig 0xa51ed0, ret_only)
void main_f_a51ed0() {}

// sub_a51ee0  (orig 0xa51ee0, ret_only)
void main_f_a51ee0() {}

// sub_a51ef0  (orig 0xa51ef0, ret_only)
void main_f_a51ef0() {}

// sub_a529a0  (orig 0xa529a0, ret_only)
void main_f_a529a0() {}

// sub_a53990  (orig 0xa53990, ret_only)
void main_f_a53990() {}

// sub_a53b30  (orig 0xa53b30, ret_only)
void main_f_a53b30() {}

// sub_a53b40  (orig 0xa53b40, ret_only)
void main_f_a53b40() {}

// sub_a5bb00  (orig 0xa5bb00, ret_only)
void main_f_a5bb00() {}

// sub_a5bb10  (orig 0xa5bb10, ret_only)
void main_f_a5bb10() {}

// sub_a5bb20  (orig 0xa5bb20, ret_only)
void main_f_a5bb20() {}

// sub_a5bb30  (orig 0xa5bb30, ret_only)
void main_f_a5bb30() {}

// sub_a5bb40  (orig 0xa5bb40, ret_only)
void main_f_a5bb40() {}

// sub_a5bb50  (orig 0xa5bb50, ret_only)
void main_f_a5bb50() {}

// sub_a5bb60  (orig 0xa5bb60, ret_only)
void main_f_a5bb60() {}

// sub_a5bb70  (orig 0xa5bb70, ret_only)
void main_f_a5bb70() {}

// sub_a5bb80  (orig 0xa5bb80, ret_only)
void main_f_a5bb80() {}

// sub_a5bb90  (orig 0xa5bb90, ret_only)
void main_f_a5bb90() {}

// sub_a5bba0  (orig 0xa5bba0, ret_only)
void main_f_a5bba0() {}

// sub_a5bbb0  (orig 0xa5bbb0, ret_only)
void main_f_a5bbb0() {}

// sub_a5bbc0  (orig 0xa5bbc0, ret_only)
void main_f_a5bbc0() {}

// sub_a5bbd0  (orig 0xa5bbd0, ret_only)
void main_f_a5bbd0() {}

// sub_a5bbe0  (orig 0xa5bbe0, ret_only)
void main_f_a5bbe0() {}

// sub_a5bbf0  (orig 0xa5bbf0, ret_only)
void main_f_a5bbf0() {}

// sub_a5bc00  (orig 0xa5bc00, ret_only)
void main_f_a5bc00() {}

// sub_a5bc10  (orig 0xa5bc10, ret_only)
void main_f_a5bc10() {}

// sub_a5bc20  (orig 0xa5bc20, ret_only)
void main_f_a5bc20() {}

// sub_a5bc30  (orig 0xa5bc30, ret_only)
void main_f_a5bc30() {}

// sub_a5bc90  (orig 0xa5bc90, ret_only)
void main_f_a5bc90() {}

// sub_a5bca0  (orig 0xa5bca0, ret_only)
void main_f_a5bca0() {}

// sub_a5d4e0  (orig 0xa5d4e0, ret_only)
void main_f_a5d4e0() {}

// sub_a5d4f0  (orig 0xa5d4f0, ret_only)
void main_f_a5d4f0() {}

// sub_a5d500  (orig 0xa5d500, ret_only)
void main_f_a5d500() {}

// sub_a5d510  (orig 0xa5d510, ret_only)
void main_f_a5d510() {}

// sub_a5d520  (orig 0xa5d520, ret_only)
void main_f_a5d520() {}

// sub_a5da20  (orig 0xa5da20, ret_only)
void main_f_a5da20() {}

// sub_a5ef70  (orig 0xa5ef70, ret_only)
void main_f_a5ef70() {}

// sub_a5f350  (orig 0xa5f350, ret_only)
void main_f_a5f350() {}

// sub_a5fb30  (orig 0xa5fb30, ret_only)
void main_f_a5fb30() {}

// sub_a5fb40  (orig 0xa5fb40, ret_only)
void main_f_a5fb40() {}

// sub_a5fb50  (orig 0xa5fb50, ret_only)
void main_f_a5fb50() {}

// sub_a5fb60  (orig 0xa5fb60, ret_only)
void main_f_a5fb60() {}

// sub_a5fb70  (orig 0xa5fb70, ret_only)
void main_f_a5fb70() {}

// sub_a5fb80  (orig 0xa5fb80, ret_only)
void main_f_a5fb80() {}

// sub_a5fb90  (orig 0xa5fb90, ret_only)
void main_f_a5fb90() {}

// sub_a61150  (orig 0xa61150, ret_only)
void main_f_a61150() {}

// sub_a61160  (orig 0xa61160, ret_only)
void main_f_a61160() {}

// sub_a61170  (orig 0xa61170, ret_only)
void main_f_a61170() {}

// sub_a61180  (orig 0xa61180, ret_only)
void main_f_a61180() {}

// sub_a61190  (orig 0xa61190, ret_only)
void main_f_a61190() {}

// sub_a61470  (orig 0xa61470, ret_only)
void main_f_a61470() {}

// sub_a63590  (orig 0xa63590, ret_only)
void main_f_a63590() {}

// sub_a635a0  (orig 0xa635a0, ret_only)
void main_f_a635a0() {}

// sub_a63760  (orig 0xa63760, ret_only)
void main_f_a63760() {}

// sub_a63770  (orig 0xa63770, ret_only)
void main_f_a63770() {}

// sub_a63780  (orig 0xa63780, ret_only)
void main_f_a63780() {}

// sub_a63790  (orig 0xa63790, ret_only)
void main_f_a63790() {}

// sub_a637a0  (orig 0xa637a0, ret_only)
void main_f_a637a0() {}

// sub_a637b0  (orig 0xa637b0, ret_only)
void main_f_a637b0() {}

// sub_a637c0  (orig 0xa637c0, ret_only)
void main_f_a637c0() {}

// sub_a637d0  (orig 0xa637d0, ret_only)
void main_f_a637d0() {}

// sub_a637e0  (orig 0xa637e0, ret_only)
void main_f_a637e0() {}

// sub_a637f0  (orig 0xa637f0, ret_only)
void main_f_a637f0() {}

// sub_a63800  (orig 0xa63800, ret_only)
void main_f_a63800() {}

// sub_a63810  (orig 0xa63810, ret_only)
void main_f_a63810() {}

// sub_a63820  (orig 0xa63820, ret_only)
void main_f_a63820() {}

// sub_a63830  (orig 0xa63830, ret_only)
void main_f_a63830() {}

// sub_a63840  (orig 0xa63840, ret_only)
void main_f_a63840() {}

// sub_a63850  (orig 0xa63850, ret_only)
void main_f_a63850() {}

// sub_a63860  (orig 0xa63860, ret_only)
void main_f_a63860() {}

// sub_a63870  (orig 0xa63870, ret_only)
void main_f_a63870() {}

// sub_a63880  (orig 0xa63880, ret_only)
void main_f_a63880() {}

// sub_a63890  (orig 0xa63890, ret_only)
void main_f_a63890() {}

// sub_a638a0  (orig 0xa638a0, ret_only)
void main_f_a638a0() {}

// sub_a638b0  (orig 0xa638b0, ret_only)
void main_f_a638b0() {}

// sub_a638c0  (orig 0xa638c0, ret_only)
void main_f_a638c0() {}

// sub_a638d0  (orig 0xa638d0, ret_only)
void main_f_a638d0() {}

// sub_a638e0  (orig 0xa638e0, ret_only)
void main_f_a638e0() {}

// sub_a638f0  (orig 0xa638f0, ret_only)
void main_f_a638f0() {}

// sub_a63900  (orig 0xa63900, ret_only)
void main_f_a63900() {}

// sub_a63910  (orig 0xa63910, ret_only)
void main_f_a63910() {}

// sub_a63920  (orig 0xa63920, ret_only)
void main_f_a63920() {}

// sub_a63930  (orig 0xa63930, ret_only)
void main_f_a63930() {}

// sub_a63940  (orig 0xa63940, ret_only)
void main_f_a63940() {}

// sub_a63950  (orig 0xa63950, ret_only)
void main_f_a63950() {}

// sub_a63960  (orig 0xa63960, ret_only)
void main_f_a63960() {}

// sub_a63970  (orig 0xa63970, ret_only)
void main_f_a63970() {}

// sub_a63980  (orig 0xa63980, ret_only)
void main_f_a63980() {}

// sub_a63990  (orig 0xa63990, ret_only)
void main_f_a63990() {}

// sub_a639a0  (orig 0xa639a0, ret_only)
void main_f_a639a0() {}

// sub_a639b0  (orig 0xa639b0, ret_only)
void main_f_a639b0() {}

// sub_a639c0  (orig 0xa639c0, ret_only)
void main_f_a639c0() {}

// sub_a639d0  (orig 0xa639d0, ret_only)
void main_f_a639d0() {}

// sub_a639e0  (orig 0xa639e0, ret_only)
void main_f_a639e0() {}

// sub_a639f0  (orig 0xa639f0, ret_only)
void main_f_a639f0() {}

// sub_a63a00  (orig 0xa63a00, ret_only)
void main_f_a63a00() {}

// sub_a63a10  (orig 0xa63a10, ret_only)
void main_f_a63a10() {}

// sub_a63a20  (orig 0xa63a20, ret_only)
void main_f_a63a20() {}

// sub_a63a30  (orig 0xa63a30, ret_only)
void main_f_a63a30() {}

// sub_a63a40  (orig 0xa63a40, ret_only)
void main_f_a63a40() {}

// sub_a63a50  (orig 0xa63a50, ret_only)
void main_f_a63a50() {}

// sub_a63a60  (orig 0xa63a60, ret_only)
void main_f_a63a60() {}

// sub_a63a70  (orig 0xa63a70, ret_only)
void main_f_a63a70() {}

// sub_a63a80  (orig 0xa63a80, ret_only)
void main_f_a63a80() {}

// sub_a63a90  (orig 0xa63a90, ret_only)
void main_f_a63a90() {}

// sub_a63aa0  (orig 0xa63aa0, ret_only)
void main_f_a63aa0() {}

// sub_a63ab0  (orig 0xa63ab0, ret_only)
void main_f_a63ab0() {}

// sub_a63ac0  (orig 0xa63ac0, ret_only)
void main_f_a63ac0() {}

// sub_a63ad0  (orig 0xa63ad0, ret_only)
void main_f_a63ad0() {}

// sub_a63ae0  (orig 0xa63ae0, ret_only)
void main_f_a63ae0() {}

// sub_a63af0  (orig 0xa63af0, ret_only)
void main_f_a63af0() {}

// sub_a63b00  (orig 0xa63b00, ret_only)
void main_f_a63b00() {}

// sub_a63b10  (orig 0xa63b10, ret_only)
void main_f_a63b10() {}

// sub_a63b20  (orig 0xa63b20, ret_only)
void main_f_a63b20() {}

// sub_a63b30  (orig 0xa63b30, ret_only)
void main_f_a63b30() {}

// sub_a63b40  (orig 0xa63b40, ret_only)
void main_f_a63b40() {}

// sub_a63b50  (orig 0xa63b50, ret_only)
void main_f_a63b50() {}

// sub_a63b60  (orig 0xa63b60, ret_only)
void main_f_a63b60() {}

// sub_a63b70  (orig 0xa63b70, ret_only)
void main_f_a63b70() {}

// sub_a63b80  (orig 0xa63b80, ret_only)
void main_f_a63b80() {}

// sub_a63b90  (orig 0xa63b90, ret_only)
void main_f_a63b90() {}

// sub_a63ba0  (orig 0xa63ba0, ret_only)
void main_f_a63ba0() {}

// sub_a63bb0  (orig 0xa63bb0, ret_only)
void main_f_a63bb0() {}

// sub_a63bc0  (orig 0xa63bc0, ret_only)
void main_f_a63bc0() {}

// sub_a63bd0  (orig 0xa63bd0, ret_only)
void main_f_a63bd0() {}

// sub_a63be0  (orig 0xa63be0, ret_only)
void main_f_a63be0() {}

// sub_a63bf0  (orig 0xa63bf0, ret_only)
void main_f_a63bf0() {}

// sub_a63c00  (orig 0xa63c00, ret_only)
void main_f_a63c00() {}

// sub_a63c10  (orig 0xa63c10, ret_only)
void main_f_a63c10() {}

// sub_a63c20  (orig 0xa63c20, ret_only)
void main_f_a63c20() {}

// sub_a63c30  (orig 0xa63c30, ret_only)
void main_f_a63c30() {}

// sub_a63c40  (orig 0xa63c40, ret_only)
void main_f_a63c40() {}

// sub_a63c50  (orig 0xa63c50, ret_only)
void main_f_a63c50() {}

// sub_a63c60  (orig 0xa63c60, ret_only)
void main_f_a63c60() {}

// sub_a63c70  (orig 0xa63c70, ret_only)
void main_f_a63c70() {}

// sub_a63c80  (orig 0xa63c80, ret_only)
void main_f_a63c80() {}

// sub_a63c90  (orig 0xa63c90, ret_only)
void main_f_a63c90() {}

// sub_a63ca0  (orig 0xa63ca0, ret_only)
void main_f_a63ca0() {}

// sub_a63cb0  (orig 0xa63cb0, ret_only)
void main_f_a63cb0() {}

// sub_a63cc0  (orig 0xa63cc0, ret_only)
void main_f_a63cc0() {}

// sub_a63cd0  (orig 0xa63cd0, ret_only)
void main_f_a63cd0() {}

// sub_a63ce0  (orig 0xa63ce0, ret_only)
void main_f_a63ce0() {}

// sub_a63cf0  (orig 0xa63cf0, ret_only)
void main_f_a63cf0() {}

// sub_a63d00  (orig 0xa63d00, ret_only)
void main_f_a63d00() {}

// sub_a63d10  (orig 0xa63d10, ret_only)
void main_f_a63d10() {}

// sub_a63d20  (orig 0xa63d20, ret_only)
void main_f_a63d20() {}

// sub_a63d30  (orig 0xa63d30, ret_only)
void main_f_a63d30() {}

// sub_a63d40  (orig 0xa63d40, ret_only)
void main_f_a63d40() {}

// sub_a63d50  (orig 0xa63d50, ret_only)
void main_f_a63d50() {}

// sub_a63d60  (orig 0xa63d60, ret_only)
void main_f_a63d60() {}

// sub_a63d70  (orig 0xa63d70, ret_only)
void main_f_a63d70() {}

// sub_a63d80  (orig 0xa63d80, ret_only)
void main_f_a63d80() {}

// sub_a63d90  (orig 0xa63d90, ret_only)
void main_f_a63d90() {}

// sub_a63da0  (orig 0xa63da0, ret_only)
void main_f_a63da0() {}

// sub_a63db0  (orig 0xa63db0, ret_only)
void main_f_a63db0() {}

// sub_a63dc0  (orig 0xa63dc0, ret_only)
void main_f_a63dc0() {}

// sub_a63dd0  (orig 0xa63dd0, ret_only)
void main_f_a63dd0() {}

// sub_a63de0  (orig 0xa63de0, ret_only)
void main_f_a63de0() {}

// sub_a63df0  (orig 0xa63df0, ret_only)
void main_f_a63df0() {}

// sub_a63e00  (orig 0xa63e00, ret_only)
void main_f_a63e00() {}

// sub_a63e10  (orig 0xa63e10, ret_only)
void main_f_a63e10() {}

// sub_a63e20  (orig 0xa63e20, ret_only)
void main_f_a63e20() {}

// sub_a63e30  (orig 0xa63e30, ret_only)
void main_f_a63e30() {}

// sub_a63e40  (orig 0xa63e40, ret_only)
void main_f_a63e40() {}

// sub_a63e50  (orig 0xa63e50, ret_only)
void main_f_a63e50() {}

// sub_a63e60  (orig 0xa63e60, ret_only)
void main_f_a63e60() {}

// sub_a63e70  (orig 0xa63e70, ret_only)
void main_f_a63e70() {}

// sub_a63e80  (orig 0xa63e80, ret_only)
void main_f_a63e80() {}

// sub_a63e90  (orig 0xa63e90, ret_only)
void main_f_a63e90() {}

// sub_a63ea0  (orig 0xa63ea0, ret_only)
void main_f_a63ea0() {}

// sub_a63eb0  (orig 0xa63eb0, ret_only)
void main_f_a63eb0() {}

// sub_a63ec0  (orig 0xa63ec0, ret_only)
void main_f_a63ec0() {}

// sub_a63ed0  (orig 0xa63ed0, ret_only)
void main_f_a63ed0() {}

// sub_a63ee0  (orig 0xa63ee0, ret_only)
void main_f_a63ee0() {}

// sub_a63ef0  (orig 0xa63ef0, ret_only)
void main_f_a63ef0() {}

// sub_a63f00  (orig 0xa63f00, ret_only)
void main_f_a63f00() {}

// sub_a63f10  (orig 0xa63f10, ret_only)
void main_f_a63f10() {}

// sub_a63f20  (orig 0xa63f20, ret_only)
void main_f_a63f20() {}

// sub_a63f30  (orig 0xa63f30, ret_only)
void main_f_a63f30() {}

// sub_a63f40  (orig 0xa63f40, ret_only)
void main_f_a63f40() {}

// sub_a63f50  (orig 0xa63f50, ret_only)
void main_f_a63f50() {}

// sub_a63f60  (orig 0xa63f60, ret_only)
void main_f_a63f60() {}

// sub_a63f70  (orig 0xa63f70, ret_only)
void main_f_a63f70() {}

// sub_a63f80  (orig 0xa63f80, ret_only)
void main_f_a63f80() {}

// sub_a63f90  (orig 0xa63f90, ret_only)
void main_f_a63f90() {}

// sub_a63fa0  (orig 0xa63fa0, ret_only)
void main_f_a63fa0() {}

// sub_a63fb0  (orig 0xa63fb0, ret_only)
void main_f_a63fb0() {}

// sub_a63fc0  (orig 0xa63fc0, ret_only)
void main_f_a63fc0() {}

// sub_a63fd0  (orig 0xa63fd0, ret_only)
void main_f_a63fd0() {}

// sub_a63fe0  (orig 0xa63fe0, ret_only)
void main_f_a63fe0() {}

// sub_a63ff0  (orig 0xa63ff0, ret_only)
void main_f_a63ff0() {}

// sub_a64000  (orig 0xa64000, ret_only)
void main_f_a64000() {}

// sub_a64010  (orig 0xa64010, ret_only)
void main_f_a64010() {}

// sub_a64020  (orig 0xa64020, ret_only)
void main_f_a64020() {}

// sub_a64030  (orig 0xa64030, ret_only)
void main_f_a64030() {}

// sub_a64040  (orig 0xa64040, ret_only)
void main_f_a64040() {}

// sub_a64050  (orig 0xa64050, ret_only)
void main_f_a64050() {}

// sub_a64060  (orig 0xa64060, ret_only)
void main_f_a64060() {}

// sub_a64070  (orig 0xa64070, ret_only)
void main_f_a64070() {}

// sub_a64080  (orig 0xa64080, ret_only)
void main_f_a64080() {}

// sub_a64090  (orig 0xa64090, ret_only)
void main_f_a64090() {}

// sub_a640a0  (orig 0xa640a0, ret_only)
void main_f_a640a0() {}

// sub_a640b0  (orig 0xa640b0, ret_only)
void main_f_a640b0() {}

// sub_a640c0  (orig 0xa640c0, ret_only)
void main_f_a640c0() {}

// sub_a640d0  (orig 0xa640d0, ret_only)
void main_f_a640d0() {}

// sub_a640e0  (orig 0xa640e0, ret_only)
void main_f_a640e0() {}

// sub_a640f0  (orig 0xa640f0, ret_only)
void main_f_a640f0() {}

// sub_a64100  (orig 0xa64100, ret_only)
void main_f_a64100() {}

// sub_a64110  (orig 0xa64110, ret_only)
void main_f_a64110() {}

// sub_a64120  (orig 0xa64120, ret_only)
void main_f_a64120() {}

// sub_a64130  (orig 0xa64130, ret_only)
void main_f_a64130() {}

// sub_a64140  (orig 0xa64140, ret_only)
void main_f_a64140() {}

// sub_a64150  (orig 0xa64150, ret_only)
void main_f_a64150() {}

// sub_a64160  (orig 0xa64160, ret_only)
void main_f_a64160() {}

// sub_a64170  (orig 0xa64170, ret_only)
void main_f_a64170() {}

// sub_a64180  (orig 0xa64180, ret_only)
void main_f_a64180() {}

// sub_a64190  (orig 0xa64190, ret_only)
void main_f_a64190() {}

// sub_a641a0  (orig 0xa641a0, ret_only)
void main_f_a641a0() {}

// sub_a641b0  (orig 0xa641b0, ret_only)
void main_f_a641b0() {}

// sub_a641c0  (orig 0xa641c0, ret_only)
void main_f_a641c0() {}

// sub_a641d0  (orig 0xa641d0, ret_only)
void main_f_a641d0() {}

// sub_a641e0  (orig 0xa641e0, ret_only)
void main_f_a641e0() {}

// sub_a641f0  (orig 0xa641f0, ret_only)
void main_f_a641f0() {}

// sub_a64200  (orig 0xa64200, ret_only)
void main_f_a64200() {}

// sub_a64210  (orig 0xa64210, ret_only)
void main_f_a64210() {}

// sub_a64220  (orig 0xa64220, ret_only)
void main_f_a64220() {}

// sub_a64230  (orig 0xa64230, ret_only)
void main_f_a64230() {}

// sub_a64240  (orig 0xa64240, ret_only)
void main_f_a64240() {}

// sub_a64250  (orig 0xa64250, ret_only)
void main_f_a64250() {}

// sub_a64260  (orig 0xa64260, ret_only)
void main_f_a64260() {}

// sub_a64270  (orig 0xa64270, ret_only)
void main_f_a64270() {}

// sub_a64280  (orig 0xa64280, ret_only)
void main_f_a64280() {}

// sub_a64290  (orig 0xa64290, ret_only)
void main_f_a64290() {}

// sub_a642a0  (orig 0xa642a0, ret_only)
void main_f_a642a0() {}

// sub_a642b0  (orig 0xa642b0, ret_only)
void main_f_a642b0() {}

// sub_a642c0  (orig 0xa642c0, ret_only)
void main_f_a642c0() {}

// sub_a642d0  (orig 0xa642d0, ret_only)
void main_f_a642d0() {}

// sub_a642e0  (orig 0xa642e0, ret_only)
void main_f_a642e0() {}

// sub_a642f0  (orig 0xa642f0, ret_only)
void main_f_a642f0() {}

// sub_a64300  (orig 0xa64300, ret_only)
void main_f_a64300() {}

// sub_a64310  (orig 0xa64310, ret_only)
void main_f_a64310() {}

// sub_a64320  (orig 0xa64320, ret_only)
void main_f_a64320() {}

// sub_a64330  (orig 0xa64330, ret_only)
void main_f_a64330() {}

// sub_a64340  (orig 0xa64340, ret_only)
void main_f_a64340() {}

// sub_a64350  (orig 0xa64350, ret_only)
void main_f_a64350() {}

// sub_a64360  (orig 0xa64360, ret_only)
void main_f_a64360() {}

// sub_a64370  (orig 0xa64370, ret_only)
void main_f_a64370() {}

// sub_a64380  (orig 0xa64380, ret_only)
void main_f_a64380() {}

// sub_a64390  (orig 0xa64390, ret_only)
void main_f_a64390() {}

// sub_a643a0  (orig 0xa643a0, ret_only)
void main_f_a643a0() {}

// sub_a643b0  (orig 0xa643b0, ret_only)
void main_f_a643b0() {}

// sub_a643c0  (orig 0xa643c0, ret_only)
void main_f_a643c0() {}

// sub_a643d0  (orig 0xa643d0, ret_only)
void main_f_a643d0() {}

// sub_a643e0  (orig 0xa643e0, ret_only)
void main_f_a643e0() {}

// sub_a643f0  (orig 0xa643f0, ret_only)
void main_f_a643f0() {}

// sub_a64400  (orig 0xa64400, ret_only)
void main_f_a64400() {}

// sub_a64410  (orig 0xa64410, ret_only)
void main_f_a64410() {}

// sub_a64420  (orig 0xa64420, ret_only)
void main_f_a64420() {}

// sub_a64430  (orig 0xa64430, ret_only)
void main_f_a64430() {}

// sub_a64440  (orig 0xa64440, ret_only)
void main_f_a64440() {}

// sub_a64450  (orig 0xa64450, ret_only)
void main_f_a64450() {}

// sub_a64460  (orig 0xa64460, ret_only)
void main_f_a64460() {}

// sub_a64470  (orig 0xa64470, ret_only)
void main_f_a64470() {}

// sub_a64480  (orig 0xa64480, ret_only)
void main_f_a64480() {}

// sub_a64490  (orig 0xa64490, ret_only)
void main_f_a64490() {}

// sub_a644a0  (orig 0xa644a0, ret_only)
void main_f_a644a0() {}

// sub_a644b0  (orig 0xa644b0, ret_only)
void main_f_a644b0() {}

// sub_a644c0  (orig 0xa644c0, ret_only)
void main_f_a644c0() {}

// sub_a644d0  (orig 0xa644d0, ret_only)
void main_f_a644d0() {}

// sub_a644e0  (orig 0xa644e0, ret_only)
void main_f_a644e0() {}

// sub_a644f0  (orig 0xa644f0, ret_only)
void main_f_a644f0() {}

// sub_a64500  (orig 0xa64500, ret_only)
void main_f_a64500() {}

// sub_a64510  (orig 0xa64510, ret_only)
void main_f_a64510() {}

// sub_a64520  (orig 0xa64520, ret_only)
void main_f_a64520() {}

// sub_a64530  (orig 0xa64530, ret_only)
void main_f_a64530() {}

// sub_a64540  (orig 0xa64540, ret_only)
void main_f_a64540() {}

// sub_a64550  (orig 0xa64550, ret_only)
void main_f_a64550() {}

// sub_a64560  (orig 0xa64560, ret_only)
void main_f_a64560() {}

// sub_a64570  (orig 0xa64570, ret_only)
void main_f_a64570() {}

// sub_a64580  (orig 0xa64580, ret_only)
void main_f_a64580() {}

// sub_a64590  (orig 0xa64590, ret_only)
void main_f_a64590() {}

// sub_a645a0  (orig 0xa645a0, ret_only)
void main_f_a645a0() {}

// sub_a645b0  (orig 0xa645b0, ret_only)
void main_f_a645b0() {}

// sub_a645c0  (orig 0xa645c0, ret_only)
void main_f_a645c0() {}

// sub_a645d0  (orig 0xa645d0, ret_only)
void main_f_a645d0() {}

// sub_a645e0  (orig 0xa645e0, ret_only)
void main_f_a645e0() {}

// sub_a645f0  (orig 0xa645f0, ret_only)
void main_f_a645f0() {}

// sub_a64600  (orig 0xa64600, ret_only)
void main_f_a64600() {}

// sub_a64610  (orig 0xa64610, ret_only)
void main_f_a64610() {}

// sub_a64620  (orig 0xa64620, ret_only)
void main_f_a64620() {}

// sub_a64630  (orig 0xa64630, ret_only)
void main_f_a64630() {}

// sub_a64640  (orig 0xa64640, ret_only)
void main_f_a64640() {}

// sub_a64650  (orig 0xa64650, ret_only)
void main_f_a64650() {}

// sub_a64660  (orig 0xa64660, ret_only)
void main_f_a64660() {}

// sub_a64670  (orig 0xa64670, ret_only)
void main_f_a64670() {}

// sub_a64680  (orig 0xa64680, ret_only)
void main_f_a64680() {}

// sub_a64690  (orig 0xa64690, ret_only)
void main_f_a64690() {}

// sub_a646a0  (orig 0xa646a0, ret_only)
void main_f_a646a0() {}

// sub_a646b0  (orig 0xa646b0, ret_only)
void main_f_a646b0() {}

// sub_a646c0  (orig 0xa646c0, ret_only)
void main_f_a646c0() {}

// sub_a646d0  (orig 0xa646d0, ret_only)
void main_f_a646d0() {}

// sub_a646e0  (orig 0xa646e0, ret_only)
void main_f_a646e0() {}

// sub_a646f0  (orig 0xa646f0, ret_only)
void main_f_a646f0() {}

// sub_a64700  (orig 0xa64700, ret_only)
void main_f_a64700() {}

// sub_a64710  (orig 0xa64710, ret_only)
void main_f_a64710() {}

// sub_a64720  (orig 0xa64720, ret_only)
void main_f_a64720() {}

// sub_a64730  (orig 0xa64730, ret_only)
void main_f_a64730() {}

// sub_a64740  (orig 0xa64740, ret_only)
void main_f_a64740() {}

// sub_a64750  (orig 0xa64750, ret_only)
void main_f_a64750() {}

// sub_a64760  (orig 0xa64760, ret_only)
void main_f_a64760() {}

// sub_a64770  (orig 0xa64770, ret_only)
void main_f_a64770() {}

// sub_a64780  (orig 0xa64780, ret_only)
void main_f_a64780() {}

// sub_a64790  (orig 0xa64790, ret_only)
void main_f_a64790() {}

// sub_a647a0  (orig 0xa647a0, ret_only)
void main_f_a647a0() {}

// sub_a647b0  (orig 0xa647b0, ret_only)
void main_f_a647b0() {}

// sub_a647c0  (orig 0xa647c0, ret_only)
void main_f_a647c0() {}

// sub_a647d0  (orig 0xa647d0, ret_only)
void main_f_a647d0() {}

// sub_a647e0  (orig 0xa647e0, ret_only)
void main_f_a647e0() {}

// sub_a647f0  (orig 0xa647f0, ret_only)
void main_f_a647f0() {}

// sub_a64800  (orig 0xa64800, ret_only)
void main_f_a64800() {}

// sub_a64810  (orig 0xa64810, ret_only)
void main_f_a64810() {}

// sub_a64820  (orig 0xa64820, ret_only)
void main_f_a64820() {}

// sub_a64830  (orig 0xa64830, ret_only)
void main_f_a64830() {}

// sub_a64840  (orig 0xa64840, ret_only)
void main_f_a64840() {}

// sub_a64850  (orig 0xa64850, ret_only)
void main_f_a64850() {}

// sub_a64860  (orig 0xa64860, ret_only)
void main_f_a64860() {}

// sub_a64870  (orig 0xa64870, ret_only)
void main_f_a64870() {}

// sub_a64880  (orig 0xa64880, ret_only)
void main_f_a64880() {}

// sub_a64890  (orig 0xa64890, ret_only)
void main_f_a64890() {}

// sub_a648a0  (orig 0xa648a0, ret_only)
void main_f_a648a0() {}

// sub_a648b0  (orig 0xa648b0, ret_only)
void main_f_a648b0() {}

// sub_a648c0  (orig 0xa648c0, ret_only)
void main_f_a648c0() {}

// sub_a648d0  (orig 0xa648d0, ret_only)
void main_f_a648d0() {}

// sub_a648e0  (orig 0xa648e0, ret_only)
void main_f_a648e0() {}

// sub_a648f0  (orig 0xa648f0, ret_only)
void main_f_a648f0() {}

// sub_a64900  (orig 0xa64900, ret_only)
void main_f_a64900() {}

// sub_a64910  (orig 0xa64910, ret_only)
void main_f_a64910() {}

// sub_a64920  (orig 0xa64920, ret_only)
void main_f_a64920() {}

// sub_a64930  (orig 0xa64930, ret_only)
void main_f_a64930() {}

// sub_a64940  (orig 0xa64940, ret_only)
void main_f_a64940() {}

// sub_a64950  (orig 0xa64950, ret_only)
void main_f_a64950() {}

// sub_a64960  (orig 0xa64960, ret_only)
void main_f_a64960() {}

// sub_a64970  (orig 0xa64970, ret_only)
void main_f_a64970() {}

// sub_a64980  (orig 0xa64980, ret_only)
void main_f_a64980() {}

// sub_a64990  (orig 0xa64990, ret_only)
void main_f_a64990() {}

// sub_a649a0  (orig 0xa649a0, ret_only)
void main_f_a649a0() {}

// sub_a649b0  (orig 0xa649b0, ret_only)
void main_f_a649b0() {}

// sub_a649c0  (orig 0xa649c0, ret_only)
void main_f_a649c0() {}

// sub_a649d0  (orig 0xa649d0, ret_only)
void main_f_a649d0() {}

// sub_a649e0  (orig 0xa649e0, ret_only)
void main_f_a649e0() {}

// sub_a649f0  (orig 0xa649f0, ret_only)
void main_f_a649f0() {}

// sub_a64a00  (orig 0xa64a00, ret_only)
void main_f_a64a00() {}

// sub_a64a10  (orig 0xa64a10, ret_only)
void main_f_a64a10() {}

// sub_a64a20  (orig 0xa64a20, ret_only)
void main_f_a64a20() {}

// sub_a64a30  (orig 0xa64a30, ret_only)
void main_f_a64a30() {}

// sub_a64a40  (orig 0xa64a40, ret_only)
void main_f_a64a40() {}

// sub_a64a50  (orig 0xa64a50, ret_only)
void main_f_a64a50() {}

// sub_a64a60  (orig 0xa64a60, ret_only)
void main_f_a64a60() {}

// sub_a64a70  (orig 0xa64a70, ret_only)
void main_f_a64a70() {}

// sub_a64a80  (orig 0xa64a80, ret_only)
void main_f_a64a80() {}

// sub_a64a90  (orig 0xa64a90, ret_only)
void main_f_a64a90() {}

// sub_a64aa0  (orig 0xa64aa0, ret_only)
void main_f_a64aa0() {}

// sub_a64ab0  (orig 0xa64ab0, ret_only)
void main_f_a64ab0() {}

// sub_a64ac0  (orig 0xa64ac0, ret_only)
void main_f_a64ac0() {}

// sub_a64ad0  (orig 0xa64ad0, ret_only)
void main_f_a64ad0() {}

// sub_a64ae0  (orig 0xa64ae0, ret_only)
void main_f_a64ae0() {}

// sub_a64af0  (orig 0xa64af0, ret_only)
void main_f_a64af0() {}

// sub_a64b00  (orig 0xa64b00, ret_only)
void main_f_a64b00() {}

// sub_a64b10  (orig 0xa64b10, ret_only)
void main_f_a64b10() {}

// sub_a64b20  (orig 0xa64b20, ret_only)
void main_f_a64b20() {}

// sub_a64b30  (orig 0xa64b30, ret_only)
void main_f_a64b30() {}

// sub_a64b40  (orig 0xa64b40, ret_only)
void main_f_a64b40() {}

// sub_a64b50  (orig 0xa64b50, ret_only)
void main_f_a64b50() {}

// sub_a64b60  (orig 0xa64b60, ret_only)
void main_f_a64b60() {}

// sub_a64b70  (orig 0xa64b70, ret_only)
void main_f_a64b70() {}

// sub_a64b80  (orig 0xa64b80, ret_only)
void main_f_a64b80() {}

// sub_a64b90  (orig 0xa64b90, ret_only)
void main_f_a64b90() {}

// sub_a64ba0  (orig 0xa64ba0, ret_only)
void main_f_a64ba0() {}

// sub_a64bb0  (orig 0xa64bb0, ret_only)
void main_f_a64bb0() {}

// sub_a64bc0  (orig 0xa64bc0, ret_only)
void main_f_a64bc0() {}

// sub_a64bd0  (orig 0xa64bd0, ret_only)
void main_f_a64bd0() {}

// sub_a64be0  (orig 0xa64be0, ret_only)
void main_f_a64be0() {}

// sub_a64bf0  (orig 0xa64bf0, ret_only)
void main_f_a64bf0() {}

// sub_a64c00  (orig 0xa64c00, ret_only)
void main_f_a64c00() {}

// sub_a64c10  (orig 0xa64c10, ret_only)
void main_f_a64c10() {}

// sub_a64c20  (orig 0xa64c20, ret_only)
void main_f_a64c20() {}

// sub_a64c30  (orig 0xa64c30, ret_only)
void main_f_a64c30() {}

// sub_a64c40  (orig 0xa64c40, ret_only)
void main_f_a64c40() {}

// sub_a64c50  (orig 0xa64c50, ret_only)
void main_f_a64c50() {}

// sub_a64c60  (orig 0xa64c60, ret_only)
void main_f_a64c60() {}

// sub_a64c70  (orig 0xa64c70, ret_only)
void main_f_a64c70() {}

// sub_a64c80  (orig 0xa64c80, ret_only)
void main_f_a64c80() {}

// sub_a64c90  (orig 0xa64c90, ret_only)
void main_f_a64c90() {}

// sub_a64ca0  (orig 0xa64ca0, ret_only)
void main_f_a64ca0() {}

// sub_a64cb0  (orig 0xa64cb0, ret_only)
void main_f_a64cb0() {}

// sub_a64cc0  (orig 0xa64cc0, ret_only)
void main_f_a64cc0() {}

// sub_a64cd0  (orig 0xa64cd0, ret_only)
void main_f_a64cd0() {}

// sub_a64ce0  (orig 0xa64ce0, ret_only)
void main_f_a64ce0() {}

// sub_a64cf0  (orig 0xa64cf0, ret_only)
void main_f_a64cf0() {}

// sub_a64d00  (orig 0xa64d00, ret_only)
void main_f_a64d00() {}

// sub_a64d10  (orig 0xa64d10, ret_only)
void main_f_a64d10() {}

// sub_a64d20  (orig 0xa64d20, ret_only)
void main_f_a64d20() {}

// sub_a64d30  (orig 0xa64d30, ret_only)
void main_f_a64d30() {}

// sub_a64d40  (orig 0xa64d40, ret_only)
void main_f_a64d40() {}

// sub_a64d50  (orig 0xa64d50, ret_only)
void main_f_a64d50() {}

// sub_a64d60  (orig 0xa64d60, ret_only)
void main_f_a64d60() {}

// sub_a64d70  (orig 0xa64d70, ret_only)
void main_f_a64d70() {}

// sub_a64d80  (orig 0xa64d80, ret_only)
void main_f_a64d80() {}

// sub_a64d90  (orig 0xa64d90, ret_only)
void main_f_a64d90() {}

// sub_a64da0  (orig 0xa64da0, ret_only)
void main_f_a64da0() {}

// sub_a64db0  (orig 0xa64db0, ret_only)
void main_f_a64db0() {}

// sub_a64dc0  (orig 0xa64dc0, ret_only)
void main_f_a64dc0() {}

// sub_a64dd0  (orig 0xa64dd0, ret_only)
void main_f_a64dd0() {}

// sub_a64de0  (orig 0xa64de0, ret_only)
void main_f_a64de0() {}

// sub_a64df0  (orig 0xa64df0, ret_only)
void main_f_a64df0() {}

// sub_a64e00  (orig 0xa64e00, ret_only)
void main_f_a64e00() {}

// sub_a64e10  (orig 0xa64e10, ret_only)
void main_f_a64e10() {}

// sub_a64e20  (orig 0xa64e20, ret_only)
void main_f_a64e20() {}

// sub_a64e30  (orig 0xa64e30, ret_only)
void main_f_a64e30() {}

// sub_a64e40  (orig 0xa64e40, ret_only)
void main_f_a64e40() {}

// sub_a64e50  (orig 0xa64e50, ret_only)
void main_f_a64e50() {}

// sub_a64e60  (orig 0xa64e60, ret_only)
void main_f_a64e60() {}

// sub_a64e70  (orig 0xa64e70, ret_only)
void main_f_a64e70() {}

// sub_a64e80  (orig 0xa64e80, ret_only)
void main_f_a64e80() {}

// sub_a64e90  (orig 0xa64e90, ret_only)
void main_f_a64e90() {}

// sub_a64ea0  (orig 0xa64ea0, ret_only)
void main_f_a64ea0() {}

// sub_a64eb0  (orig 0xa64eb0, ret_only)
void main_f_a64eb0() {}

// sub_a64ec0  (orig 0xa64ec0, ret_only)
void main_f_a64ec0() {}

// sub_a64ed0  (orig 0xa64ed0, ret_only)
void main_f_a64ed0() {}

// sub_a64ee0  (orig 0xa64ee0, ret_only)
void main_f_a64ee0() {}

// sub_a64ef0  (orig 0xa64ef0, ret_only)
void main_f_a64ef0() {}

// sub_a64f00  (orig 0xa64f00, ret_only)
void main_f_a64f00() {}

// sub_a64f10  (orig 0xa64f10, ret_only)
void main_f_a64f10() {}

// sub_a64f20  (orig 0xa64f20, ret_only)
void main_f_a64f20() {}

// sub_a64f30  (orig 0xa64f30, ret_only)
void main_f_a64f30() {}

// sub_a64f40  (orig 0xa64f40, ret_only)
void main_f_a64f40() {}

// sub_a64f50  (orig 0xa64f50, ret_only)
void main_f_a64f50() {}

// sub_a64f60  (orig 0xa64f60, ret_only)
void main_f_a64f60() {}

// sub_a64f70  (orig 0xa64f70, ret_only)
void main_f_a64f70() {}

// sub_a64f80  (orig 0xa64f80, ret_only)
void main_f_a64f80() {}

// sub_a64f90  (orig 0xa64f90, ret_only)
void main_f_a64f90() {}

// sub_a64fa0  (orig 0xa64fa0, ret_only)
void main_f_a64fa0() {}

// sub_a64fb0  (orig 0xa64fb0, ret_only)
void main_f_a64fb0() {}

// sub_a64fc0  (orig 0xa64fc0, ret_only)
void main_f_a64fc0() {}

// sub_a64fd0  (orig 0xa64fd0, ret_only)
void main_f_a64fd0() {}

// sub_a64ff0  (orig 0xa64ff0, ret_only)
void main_f_a64ff0() {}

// sub_a65000  (orig 0xa65000, copy2)
void main_f_a65000(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65010  (orig 0xa65010, copy2)
void main_f_a65010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65020  (orig 0xa65020, getter-chain)
uint8x16_t main_f_a65020(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return vld1q_u8((const uint8_t *)((char*)(t0) + 96));
}

// sub_a65030  (orig 0xa65030, ret_only)
void main_f_a65030() {}

// sub_a65040  (orig 0xa65040, copy2)
void main_f_a65040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65050  (orig 0xa65050, copy2)
void main_f_a65050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65290  (orig 0xa65290, ret_only)
void main_f_a65290() {}

// sub_a652a0  (orig 0xa652a0, copy2)
void main_f_a652a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a652b0  (orig 0xa652b0, copy2)
void main_f_a652b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a652c0  (orig 0xa652c0, getter-chain)
uint8x16_t main_f_a652c0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return vld1q_u8((const uint8_t *)((char*)(t0) + 112));
}

// sub_a652d0  (orig 0xa652d0, ret_only)
void main_f_a652d0() {}

// sub_a652e0  (orig 0xa652e0, copy2)
void main_f_a652e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a652f0  (orig 0xa652f0, copy2)
void main_f_a652f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65310  (orig 0xa65310, ret_only)
void main_f_a65310() {}

// sub_a65320  (orig 0xa65320, copy2)
void main_f_a65320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65330  (orig 0xa65330, copy2)
void main_f_a65330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65480  (orig 0xa65480, straight)
void* main_f_a65480(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a654a0  (orig 0xa654a0, ret_only)
void main_f_a654a0() {}

// sub_a654b0  (orig 0xa654b0, copy2)
void main_f_a654b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a654c0  (orig 0xa654c0, copy2)
void main_f_a654c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65610  (orig 0xa65610, straight)
void* main_f_a65610(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a65630  (orig 0xa65630, ret_only)
void main_f_a65630() {}

// sub_a65640  (orig 0xa65640, copy2)
void main_f_a65640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65650  (orig 0xa65650, copy2)
void main_f_a65650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a657a0  (orig 0xa657a0, straight)
void* main_f_a657a0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a657c0  (orig 0xa657c0, ret_only)
void main_f_a657c0() {}

// sub_a657d0  (orig 0xa657d0, copy2)
void main_f_a657d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a657e0  (orig 0xa657e0, copy2)
void main_f_a657e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a657f0  (orig 0xa657f0, straight)
void* main_f_a657f0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a65810  (orig 0xa65810, ret_only)
void main_f_a65810() {}

// sub_a65820  (orig 0xa65820, copy2)
void main_f_a65820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65830  (orig 0xa65830, copy2)
void main_f_a65830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65840  (orig 0xa65840, straight)
void* main_f_a65840(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1064) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1056) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a65860  (orig 0xa65860, ret_only)
void main_f_a65860() {}

// sub_a65870  (orig 0xa65870, copy2)
void main_f_a65870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65880  (orig 0xa65880, copy2)
void main_f_a65880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65890  (orig 0xa65890, straight)
void* main_f_a65890(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a658b0  (orig 0xa658b0, ret_only)
void main_f_a658b0() {}

// sub_a658c0  (orig 0xa658c0, copy2)
void main_f_a658c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a658d0  (orig 0xa658d0, copy2)
void main_f_a658d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a658e0  (orig 0xa658e0, straight)
void* main_f_a658e0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a65900  (orig 0xa65900, ret_only)
void main_f_a65900() {}

// sub_a65910  (orig 0xa65910, copy2)
void main_f_a65910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65920  (orig 0xa65920, copy2)
void main_f_a65920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65930  (orig 0xa65930, straight)
void* main_f_a65930(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a65950  (orig 0xa65950, ret_only)
void main_f_a65950() {}

// sub_a65960  (orig 0xa65960, copy2)
void main_f_a65960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65970  (orig 0xa65970, copy2)
void main_f_a65970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65980  (orig 0xa65980, straight)
void* main_f_a65980(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a659a0  (orig 0xa659a0, ret_only)
void main_f_a659a0() {}

// sub_a659b0  (orig 0xa659b0, copy2)
void main_f_a659b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a659c0  (orig 0xa659c0, copy2)
void main_f_a659c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65bf0  (orig 0xa65bf0, ret_only)
void main_f_a65bf0() {}

// sub_a65c30  (orig 0xa65c30, ret_only)
void main_f_a65c30() {}

// sub_a65c40  (orig 0xa65c40, copy2)
void main_f_a65c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65c50  (orig 0xa65c50, copy2)
void main_f_a65c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65da0  (orig 0xa65da0, straight)
void* main_f_a65da0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a65dc0  (orig 0xa65dc0, ret_only)
void main_f_a65dc0() {}

// sub_a65dd0  (orig 0xa65dd0, copy2)
void main_f_a65dd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65de0  (orig 0xa65de0, copy2)
void main_f_a65de0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65f30  (orig 0xa65f30, straight)
void* main_f_a65f30(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a65f50  (orig 0xa65f50, ret_only)
void main_f_a65f50() {}

// sub_a65f60  (orig 0xa65f60, copy2)
void main_f_a65f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65f70  (orig 0xa65f70, copy2)
void main_f_a65f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65f80  (orig 0xa65f80, getter-chain)
uint8x16_t main_f_a65f80(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return vld1q_u8((const uint8_t *)((char*)(t0) + 976));
}

// sub_a65f90  (orig 0xa65f90, ret_only)
void main_f_a65f90() {}

// sub_a65fa0  (orig 0xa65fa0, copy2)
void main_f_a65fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65fb0  (orig 0xa65fb0, copy2)
void main_f_a65fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65fc0  (orig 0xa65fc0, getter-chain)
uint8x16_t main_f_a65fc0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return vld1q_u8((const uint8_t *)((char*)(t0) + 1088));
}

// sub_a65fd0  (orig 0xa65fd0, ret_only)
void main_f_a65fd0() {}

// sub_a65fe0  (orig 0xa65fe0, copy2)
void main_f_a65fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65ff0  (orig 0xa65ff0, copy2)
void main_f_a65ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a66290  (orig 0xa66290, ret_only)
void main_f_a66290() {}

// sub_a662a0  (orig 0xa662a0, copy2)
void main_f_a662a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a662b0  (orig 0xa662b0, copy2)
void main_f_a662b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a66fb0  (orig 0xa66fb0, straight)
void* main_f_a66fb0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a66fd0  (orig 0xa66fd0, ret_only)
void main_f_a66fd0() {}

// sub_a66fe0  (orig 0xa66fe0, copy2)
void main_f_a66fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a66ff0  (orig 0xa66ff0, copy2)
void main_f_a66ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67000  (orig 0xa67000, straight)
void* main_f_a67000(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a67020  (orig 0xa67020, ret_only)
void main_f_a67020() {}

// sub_a67030  (orig 0xa67030, copy2)
void main_f_a67030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67040  (orig 0xa67040, copy2)
void main_f_a67040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67050  (orig 0xa67050, straight)
void* main_f_a67050(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a67070  (orig 0xa67070, ret_only)
void main_f_a67070() {}

// sub_a67080  (orig 0xa67080, copy2)
void main_f_a67080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67090  (orig 0xa67090, copy2)
void main_f_a67090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a670a0  (orig 0xa670a0, straight)
void* main_f_a670a0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a670c0  (orig 0xa670c0, ret_only)
void main_f_a670c0() {}

// sub_a670d0  (orig 0xa670d0, copy2)
void main_f_a670d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a670e0  (orig 0xa670e0, copy2)
void main_f_a670e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a670f0  (orig 0xa670f0, straight)
void* main_f_a670f0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a67110  (orig 0xa67110, ret_only)
void main_f_a67110() {}

// sub_a67120  (orig 0xa67120, copy2)
void main_f_a67120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67130  (orig 0xa67130, copy2)
void main_f_a67130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67140  (orig 0xa67140, straight)
void* main_f_a67140(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a67160  (orig 0xa67160, ret_only)
void main_f_a67160() {}

// sub_a67170  (orig 0xa67170, copy2)
void main_f_a67170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67180  (orig 0xa67180, copy2)
void main_f_a67180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67190  (orig 0xa67190, straight)
void* main_f_a67190(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a671b0  (orig 0xa671b0, ret_only)
void main_f_a671b0() {}

// sub_a671c0  (orig 0xa671c0, copy2)
void main_f_a671c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a671d0  (orig 0xa671d0, copy2)
void main_f_a671d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a671e0  (orig 0xa671e0, straight)
void* main_f_a671e0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a67200  (orig 0xa67200, ret_only)
void main_f_a67200() {}

// sub_a67210  (orig 0xa67210, copy2)
void main_f_a67210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67220  (orig 0xa67220, copy2)
void main_f_a67220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67230  (orig 0xa67230, straight)
void* main_f_a67230(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1112) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1104) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a67250  (orig 0xa67250, ret_only)
void main_f_a67250() {}

// sub_a67260  (orig 0xa67260, copy2)
void main_f_a67260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67270  (orig 0xa67270, copy2)
void main_f_a67270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67280  (orig 0xa67280, straight)
void* main_f_a67280(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a672a0  (orig 0xa672a0, ret_only)
void main_f_a672a0() {}

// sub_a672b0  (orig 0xa672b0, copy2)
void main_f_a672b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a672c0  (orig 0xa672c0, copy2)
void main_f_a672c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a672d0  (orig 0xa672d0, straight)
void* main_f_a672d0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a672f0  (orig 0xa672f0, ret_only)
void main_f_a672f0() {}

// sub_a67300  (orig 0xa67300, copy2)
void main_f_a67300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67310  (orig 0xa67310, copy2)
void main_f_a67310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67320  (orig 0xa67320, straight)
void* main_f_a67320(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a67340  (orig 0xa67340, ret_only)
void main_f_a67340() {}

// sub_a67350  (orig 0xa67350, copy2)
void main_f_a67350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67360  (orig 0xa67360, copy2)
void main_f_a67360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67510  (orig 0xa67510, straight)
void* main_f_a67510(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a67530  (orig 0xa67530, ret_only)
void main_f_a67530() {}

// sub_a67540  (orig 0xa67540, copy2)
void main_f_a67540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67550  (orig 0xa67550, copy2)
void main_f_a67550(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67560  (orig 0xa67560, straight)
void* main_f_a67560(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a67580  (orig 0xa67580, ret_only)
void main_f_a67580() {}

// sub_a67590  (orig 0xa67590, copy2)
void main_f_a67590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a675a0  (orig 0xa675a0, copy2)
void main_f_a675a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a675b0  (orig 0xa675b0, getter-chain)
uint8x16_t main_f_a675b0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return vld1q_u8((const uint8_t *)((char*)(t0) + 976));
}

// sub_a675c0  (orig 0xa675c0, ret_only)
void main_f_a675c0() {}

// sub_a675d0  (orig 0xa675d0, copy2)
void main_f_a675d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a675e0  (orig 0xa675e0, copy2)
void main_f_a675e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a675f0  (orig 0xa675f0, getter-chain)
uint8x16_t main_f_a675f0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return vld1q_u8((const uint8_t *)((char*)(t0) + 1088));
}

// sub_a67600  (orig 0xa67600, ret_only)
void main_f_a67600() {}

// sub_a67610  (orig 0xa67610, copy2)
void main_f_a67610(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67620  (orig 0xa67620, copy2)
void main_f_a67620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68280  (orig 0xa68280, straight)
void* main_f_a68280(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a682a0  (orig 0xa682a0, ret_only)
void main_f_a682a0() {}

// sub_a682b0  (orig 0xa682b0, copy2)
void main_f_a682b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a682c0  (orig 0xa682c0, copy2)
void main_f_a682c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a682d0  (orig 0xa682d0, straight)
void* main_f_a682d0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a682f0  (orig 0xa682f0, ret_only)
void main_f_a682f0() {}

// sub_a68300  (orig 0xa68300, copy2)
void main_f_a68300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68310  (orig 0xa68310, copy2)
void main_f_a68310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68320  (orig 0xa68320, straight)
void* main_f_a68320(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a68340  (orig 0xa68340, ret_only)
void main_f_a68340() {}

// sub_a68350  (orig 0xa68350, copy2)
void main_f_a68350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68360  (orig 0xa68360, copy2)
void main_f_a68360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68370  (orig 0xa68370, straight)
void* main_f_a68370(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a68390  (orig 0xa68390, ret_only)
void main_f_a68390() {}

// sub_a683a0  (orig 0xa683a0, copy2)
void main_f_a683a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a683b0  (orig 0xa683b0, copy2)
void main_f_a683b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a683c0  (orig 0xa683c0, straight)
void* main_f_a683c0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a683e0  (orig 0xa683e0, ret_only)
void main_f_a683e0() {}

// sub_a683f0  (orig 0xa683f0, copy2)
void main_f_a683f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68400  (orig 0xa68400, copy2)
void main_f_a68400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68410  (orig 0xa68410, straight)
void* main_f_a68410(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a68430  (orig 0xa68430, ret_only)
void main_f_a68430() {}

// sub_a68440  (orig 0xa68440, copy2)
void main_f_a68440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68450  (orig 0xa68450, copy2)
void main_f_a68450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68460  (orig 0xa68460, straight)
void* main_f_a68460(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1112) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1104) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a68480  (orig 0xa68480, ret_only)
void main_f_a68480() {}

// sub_a68490  (orig 0xa68490, copy2)
void main_f_a68490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a684a0  (orig 0xa684a0, copy2)
void main_f_a684a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a684b0  (orig 0xa684b0, straight)
void* main_f_a684b0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a684d0  (orig 0xa684d0, ret_only)
void main_f_a684d0() {}

// sub_a684e0  (orig 0xa684e0, copy2)
void main_f_a684e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a684f0  (orig 0xa684f0, copy2)
void main_f_a684f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68500  (orig 0xa68500, straight)
void* main_f_a68500(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a68520  (orig 0xa68520, ret_only)
void main_f_a68520() {}

// sub_a68530  (orig 0xa68530, copy2)
void main_f_a68530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68540  (orig 0xa68540, copy2)
void main_f_a68540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68550  (orig 0xa68550, straight)
void* main_f_a68550(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a68570  (orig 0xa68570, ret_only)
void main_f_a68570() {}

// sub_a68580  (orig 0xa68580, copy2)
void main_f_a68580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68590  (orig 0xa68590, copy2)
void main_f_a68590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a685c0  (orig 0xa685c0, ret_only)
void main_f_a685c0() {}

// sub_a68610  (orig 0xa68610, ret_only)
void main_f_a68610() {}

// sub_a68640  (orig 0xa68640, straight)
void* main_f_a68640(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a68660  (orig 0xa68660, ret_only)
void main_f_a68660() {}

// sub_a68670  (orig 0xa68670, copy2)
void main_f_a68670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68680  (orig 0xa68680, copy2)
void main_f_a68680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68690  (orig 0xa68690, straight)
void* main_f_a68690(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a686b0  (orig 0xa686b0, ret_only)
void main_f_a686b0() {}

// sub_a686c0  (orig 0xa686c0, copy2)
void main_f_a686c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a686d0  (orig 0xa686d0, copy2)
void main_f_a686d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a686e0  (orig 0xa686e0, getter-chain)
uint8x16_t main_f_a686e0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return vld1q_u8((const uint8_t *)((char*)(t0) + 976));
}

// sub_a686f0  (orig 0xa686f0, ret_only)
void main_f_a686f0() {}

// sub_a68700  (orig 0xa68700, copy2)
void main_f_a68700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68710  (orig 0xa68710, copy2)
void main_f_a68710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68720  (orig 0xa68720, getter-chain)
uint8x16_t main_f_a68720(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return vld1q_u8((const uint8_t *)((char*)(t0) + 1088));
}

// sub_a68730  (orig 0xa68730, ret_only)
void main_f_a68730() {}

// sub_a68740  (orig 0xa68740, copy2)
void main_f_a68740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68750  (orig 0xa68750, copy2)
void main_f_a68750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68760  (orig 0xa68760, straight)
void main_f_a68760(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    uint32_t k2 = 1;
    *(uint8_t*)((char*)(p0) + 6376L) = (uint8_t)k1;
    *(uint8_t*)((char*)(p0) + 6377L) = (uint8_t)k2;
}

// sub_a68780  (orig 0xa68780, ret_only)
void main_f_a68780() {}

// sub_a68790  (orig 0xa68790, copy2)
void main_f_a68790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a687a0  (orig 0xa687a0, copy2)
void main_f_a687a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69270  (orig 0xa69270, straight)
void* main_f_a69270(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a69290  (orig 0xa69290, ret_only)
void main_f_a69290() {}

// sub_a692a0  (orig 0xa692a0, copy2)
void main_f_a692a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a692b0  (orig 0xa692b0, copy2)
void main_f_a692b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a692c0  (orig 0xa692c0, straight)
void* main_f_a692c0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a692e0  (orig 0xa692e0, ret_only)
void main_f_a692e0() {}

// sub_a692f0  (orig 0xa692f0, copy2)
void main_f_a692f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69300  (orig 0xa69300, copy2)
void main_f_a69300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69310  (orig 0xa69310, straight)
void* main_f_a69310(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a69330  (orig 0xa69330, ret_only)
void main_f_a69330() {}

// sub_a69340  (orig 0xa69340, copy2)
void main_f_a69340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69350  (orig 0xa69350, copy2)
void main_f_a69350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69450  (orig 0xa69450, copy-chain-store)
void main_f_a69450(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_a695a0  (orig 0xa695a0, ret_only)
void main_f_a695a0() {}

// sub_a695f0  (orig 0xa695f0, ret_only)
void main_f_a695f0() {}

// sub_a6a000  (orig 0xa6a000, ret_only)
void main_f_a6a000() {}

// sub_a6a010  (orig 0xa6a010, ret_only)
void main_f_a6a010() {}

// sub_a6a020  (orig 0xa6a020, ret_only)
void main_f_a6a020() {}

// sub_a6a180  (orig 0xa6a180, ret_only)
void main_f_a6a180() {}

// sub_a6a190  (orig 0xa6a190, ret_only)
void main_f_a6a190() {}

// sub_a6a1a0  (orig 0xa6a1a0, ret_only)
void main_f_a6a1a0() {}

// sub_a6a2a0  (orig 0xa6a2a0, ret_only)
void main_f_a6a2a0() {}

// sub_a6a2b0  (orig 0xa6a2b0, copy2)
void main_f_a6a2b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6a2c0  (orig 0xa6a2c0, copy2)
void main_f_a6a2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6aca0  (orig 0xa6aca0, ret_only)
void main_f_a6aca0() {}

// sub_a6aee0  (orig 0xa6aee0, ret_only)
void main_f_a6aee0() {}

// sub_a6b100  (orig 0xa6b100, ret_only)
void main_f_a6b100() {}

// sub_a6b950  (orig 0xa6b950, ret_only)
void main_f_a6b950() {}

// sub_a6b960  (orig 0xa6b960, copy2)
void main_f_a6b960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6b970  (orig 0xa6b970, copy2)
void main_f_a6b970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bb10  (orig 0xa6bb10, straight)
void* main_f_a6bb10(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a6bb30  (orig 0xa6bb30, ret_only)
void main_f_a6bb30() {}

// sub_a6bb40  (orig 0xa6bb40, copy2)
void main_f_a6bb40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bb50  (orig 0xa6bb50, copy2)
void main_f_a6bb50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bb60  (orig 0xa6bb60, straight)
void* main_f_a6bb60(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a6bb80  (orig 0xa6bb80, ret_only)
void main_f_a6bb80() {}

// sub_a6bb90  (orig 0xa6bb90, copy2)
void main_f_a6bb90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bba0  (orig 0xa6bba0, copy2)
void main_f_a6bba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bbb0  (orig 0xa6bbb0, straight)
void* main_f_a6bbb0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a6bbd0  (orig 0xa6bbd0, ret_only)
void main_f_a6bbd0() {}

// sub_a6bbe0  (orig 0xa6bbe0, copy2)
void main_f_a6bbe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bbf0  (orig 0xa6bbf0, copy2)
void main_f_a6bbf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bc10  (orig 0xa6bc10, ret_only)
void main_f_a6bc10() {}

// sub_a6bc20  (orig 0xa6bc20, copy2)
void main_f_a6bc20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bc30  (orig 0xa6bc30, copy2)
void main_f_a6bc30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bc60  (orig 0xa6bc60, ret_only)
void main_f_a6bc60() {}

// sub_a6bc70  (orig 0xa6bc70, copy2)
void main_f_a6bc70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bc80  (orig 0xa6bc80, copy2)
void main_f_a6bc80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bc90  (orig 0xa6bc90, straight)
void* main_f_a6bc90(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint8_t*)((char*)(p0) + 7992L) = 0;
    return a0;
}

// sub_a6bca0  (orig 0xa6bca0, ret_only)
void main_f_a6bca0() {}

// sub_a6bcb0  (orig 0xa6bcb0, copy2)
void main_f_a6bcb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bcc0  (orig 0xa6bcc0, copy2)
void main_f_a6bcc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bcd0  (orig 0xa6bcd0, straight)
void main_f_a6bcd0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    uint32_t k2 = 1;
    *(uint8_t*)((char*)(p0) + 7993L) = (uint8_t)k1;
    *(uint8_t*)((char*)(p0) + 7994L) = (uint8_t)k2;
}

// sub_a6bcf0  (orig 0xa6bcf0, ret_only)
void main_f_a6bcf0() {}

// sub_a6bd00  (orig 0xa6bd00, copy2)
void main_f_a6bd00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bd10  (orig 0xa6bd10, copy2)
void main_f_a6bd10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bf80  (orig 0xa6bf80, ret_only)
void main_f_a6bf80() {}

// sub_a6bf90  (orig 0xa6bf90, copy2)
void main_f_a6bf90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bfa0  (orig 0xa6bfa0, copy2)
void main_f_a6bfa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c050  (orig 0xa6c050, copy-chain-store)
void main_f_a6c050(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_a6c100  (orig 0xa6c100, copy-chain-store)
void main_f_a6c100(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_a6c160  (orig 0xa6c160, ret_only)
void main_f_a6c160() {}

// sub_a6c170  (orig 0xa6c170, copy2)
void main_f_a6c170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c180  (orig 0xa6c180, copy2)
void main_f_a6c180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c1a0  (orig 0xa6c1a0, ret_only)
void main_f_a6c1a0() {}

// sub_a6c1b0  (orig 0xa6c1b0, copy2)
void main_f_a6c1b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c1c0  (orig 0xa6c1c0, copy2)
void main_f_a6c1c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c1e0  (orig 0xa6c1e0, ret_only)
void main_f_a6c1e0() {}

// sub_a6c1f0  (orig 0xa6c1f0, copy2)
void main_f_a6c1f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c200  (orig 0xa6c200, copy2)
void main_f_a6c200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c280  (orig 0xa6c280, copy-chain-store)
void main_f_a6c280(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_a6c290  (orig 0xa6c290, straight)
void* main_f_a6c290(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a6c2b0  (orig 0xa6c2b0, ret_only)
void main_f_a6c2b0() {}

// sub_a6c2c0  (orig 0xa6c2c0, copy2)
void main_f_a6c2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c2d0  (orig 0xa6c2d0, copy2)
void main_f_a6c2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c2e0  (orig 0xa6c2e0, straight)
void* main_f_a6c2e0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a6c300  (orig 0xa6c300, ret_only)
void main_f_a6c300() {}

// sub_a6c310  (orig 0xa6c310, copy2)
void main_f_a6c310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c320  (orig 0xa6c320, copy2)
void main_f_a6c320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c330  (orig 0xa6c330, straight)
void* main_f_a6c330(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1064) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1056) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a6c350  (orig 0xa6c350, ret_only)
void main_f_a6c350() {}

// sub_a6c360  (orig 0xa6c360, copy2)
void main_f_a6c360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c370  (orig 0xa6c370, copy2)
void main_f_a6c370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c380  (orig 0xa6c380, straight)
void* main_f_a6c380(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a6c3a0  (orig 0xa6c3a0, ret_only)
void main_f_a6c3a0() {}

// sub_a6c3b0  (orig 0xa6c3b0, copy2)
void main_f_a6c3b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c3c0  (orig 0xa6c3c0, copy2)
void main_f_a6c3c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c3d0  (orig 0xa6c3d0, straight)
void* main_f_a6c3d0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_a6c3f0  (orig 0xa6c3f0, ret_only)
void main_f_a6c3f0() {}

// sub_a6c400  (orig 0xa6c400, copy2)
void main_f_a6c400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c410  (orig 0xa6c410, copy2)
void main_f_a6c410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6d010  (orig 0xa6d010, mov_ret)
uint64_t main_f_a6d010() { return 0; }

// sub_a6d170  (orig 0xa6d170, straight)
uint16_t main_f_a6d170(void* a0, uint8_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (a1) * 2)));
    return *(uint16_t*)((char*)(p0) + 8612L);
}

// sub_a6d180  (orig 0xa6d180, straight)
uint64_t main_f_a6d180(void* a0, uint8_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (a1) * 8)));
    return *(uint64_t*)((char*)(p0) + 8624L);
}

// Stop_Battle_Music  (orig 0xa6d200, straight)
void main_f_a6d200(void* a0) {
    uint16_t k0 = 0;
    *(uint64_t*)((char*)(a0) + 5892L) = 1095216660735;
    *(uint64_t*)((char*)(a0) + 5900L) = 1095216660735;
    *(uint64_t*)((char*)(a0) + 5908L) = 1095216660735;
    *(uint64_t*)((char*)(a0) + 5916L) = 1095216660735;
    *(uint64_t*)((char*)(a0) + 5884L) = 1095216660735;
    *(uint32_t*)((char*)(a0) + 5924L) = 255;
    *(uint64_t*)((char*)(a0) + 5952L) = 17179869188;
    *(uint64_t*)((char*)(a0) + 5960L) = 17179869188;
    *(uint16_t*)((char*)(a0) + 5937L) = 0;
    *(uint8_t*)((char*)(a0) + 5939L) = (uint8_t)k0;
}

// sub_a6d260  (orig 0xa6d260, straight)
uint64_t main_f_a6d260(uint64_t a0) { return (((uint64_t)a0)) + (8256); }

// sub_a6d270  (orig 0xa6d270, straight)
uint64_t main_f_a6d270(uint64_t a0) { return (((uint64_t)a0)) + (8736); }

// sub_a6d400  (orig 0xa6d400, getter)
uint64_t main_f_a6d400(void* a0) { return *(uint64_t*)((char*)(a0) + 8664L); }

// sub_a6d410  (orig 0xa6d410, mov_ret)
uint64_t main_f_a6d410() { return 0; }

// sub_a6d420  (orig 0xa6d420, getter)
uint64_t main_f_a6d420(void* a0) { return *(uint64_t*)((char*)(a0) + 8704L); }

// sub_a6df80  (orig 0xa6df80, mov_ret)
uint32_t main_f_a6df80() { return 0; }

// sub_a6df90  (orig 0xa6df90, getter)
uint32_t main_f_a6df90(void* a0) { return *(uint32_t*)((char*)(a0) + 8608L); }

// sub_a6dfa0  (orig 0xa6dfa0, compare)
bool main_f_a6dfa0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 8608L)) == (uint64_t)(1); }

// sub_a6dfb0  (orig 0xa6dfb0, mov_ret)
uint32_t main_f_a6dfb0() { return 1; }

// sub_a6e120  (orig 0xa6e120, ret_only)
void main_f_a6e120() {}

// sub_a6e6d0  (orig 0xa6e6d0, mov_ret)
uint32_t main_f_a6e6d0() { return 1; }

// sub_a6e6e0  (orig 0xa6e6e0, ret_only)
void main_f_a6e6e0() {}

// sub_a6e6f0  (orig 0xa6e6f0, ret_only)
void main_f_a6e6f0() {}

// sub_a6ef60  (orig 0xa6ef60, getter)
uint64_t main_f_a6ef60(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_a6f0d0  (orig 0xa6f0d0, mov_ret)
uint32_t main_f_a6f0d0() { return 1; }

// sub_a6f0e0  (orig 0xa6f0e0, indexed-getter)
uint64_t main_f_a6f0e0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_a6f0f0  (orig 0xa6f0f0, indexed-getter)
uint64_t main_f_a6f0f0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_a6fd90  (orig 0xa6fd90, mov_ret)
uint32_t main_f_a6fd90() { return 1; }

// sub_a6fda0  (orig 0xa6fda0, ret_only)
void main_f_a6fda0() {}

// sub_a6fdb0  (orig 0xa6fdb0, ret_only)
void main_f_a6fdb0() {}

// sub_a6ff90  (orig 0xa6ff90, mov_ret)
uint32_t main_f_a6ff90() { return 1; }

// sub_a716e0  (orig 0xa716e0, ret_only)
void main_f_a716e0() {}

// sub_a72840  (orig 0xa72840, straight)
void main_f_a72840(uint64_t unused0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1) + 104) = 14;
    *(uint8_t*)((char*)(p0) + 96) = 0;
}

// sub_a72850  (orig 0xa72850, mov_ret)
uint32_t main_f_a72850() { return 0; }

// sub_a73370  (orig 0xa73370, ret_only)
void main_f_a73370() {}

// sub_a73380  (orig 0xa73380, struct-copy)
void main_f_a73380(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_a733a0  (orig 0xa733a0, struct-copy)
void main_f_a733a0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_a73430  (orig 0xa73430, ret_only)
void main_f_a73430() {}

// sub_a73440  (orig 0xa73440, copy2)
void main_f_a73440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a73450  (orig 0xa73450, copy2)
void main_f_a73450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a74150  (orig 0xa74150, ret_only)
void main_f_a74150() {}

// sub_a74c10  (orig 0xa74c10, mov_ret)
uint32_t main_f_a74c10() { return 1; }

// sub_a75fe0  (orig 0xa75fe0, ret_only)
void main_f_a75fe0() {}

// sub_a75ff0  (orig 0xa75ff0, ret_only)
void main_f_a75ff0() {}

// sub_a76000  (orig 0xa76000, ret_only)
void main_f_a76000() {}

// sub_a76010  (orig 0xa76010, ret_only)
void main_f_a76010() {}

// sub_a76540  (orig 0xa76540, getter)
uint64_t main_f_a76540(void* a0) { return *(uint64_t*)((char*)(a0) + 280); }

// sub_a766d0  (orig 0xa766d0, mov_ret)
uint32_t main_f_a766d0() { return 7; }

// sub_a766e0  (orig 0xa766e0, indexed-getter)
uint64_t main_f_a766e0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_a766f0  (orig 0xa766f0, indexed-getter)
uint64_t main_f_a766f0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_a76e20  (orig 0xa76e20, getter)
uint64_t main_f_a76e20(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_a76f90  (orig 0xa76f90, mov_ret)
uint32_t main_f_a76f90() { return 1; }

// sub_a76fa0  (orig 0xa76fa0, indexed-getter)
uint64_t main_f_a76fa0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_a76fb0  (orig 0xa76fb0, indexed-getter)
uint64_t main_f_a76fb0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_a77140  (orig 0xa77140, getter)
uint32_t main_f_a77140(void* a0) { return *(uint32_t*)((char*)(a0) + 104); }

// sub_a77150  (orig 0xa77150, setter)
void main_f_a77150(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 100) = a1; }

// sub_a77160  (orig 0xa77160, getter)
uint64_t main_f_a77160(void* a0) { return *(uint64_t*)((char*)(a0) + 112); }

// sub_a77460  (orig 0xa77460, setter)
void main_f_a77460(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 120) = a1; }

// sub_a774c0  (orig 0xa774c0, straight)
void* main_f_a774c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 112));
    *(uint8_t*)((char*)(p0) + 400) = 0;
    *(uint64_t*)((char*)(p0) + 392) = 0;
    return a0;
}

// sub_a775e0  (orig 0xa775e0, getter)
uint32_t main_f_a775e0(void* a0) { return *(uint32_t*)((char*)(a0) + 136); }

// sub_a77790  (orig 0xa77790, setter)
void main_f_a77790(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 176) = a1; }

// sub_a777c0  (orig 0xa777c0, setter)
void main_f_a777c0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1984) = a1; }

// sub_a7e580  (orig 0xa7e580, ret_only)
void main_f_a7e580() {}

// sub_a7eb60  (orig 0xa7eb60, ret_only)
void main_f_a7eb60() {}

// sub_a7efa0  (orig 0xa7efa0, ret_only)
void main_f_a7efa0() {}

// sub_a7ff30  (orig 0xa7ff30, ret_only)
void main_f_a7ff30() {}

// sub_a80e90  (orig 0xa80e90, ret_only)
void main_f_a80e90() {}

// sub_a81530  (orig 0xa81530, ret_only)
void main_f_a81530() {}

// sub_a82740  (orig 0xa82740, ret_only)
void main_f_a82740() {}

// sub_a82c10  (orig 0xa82c10, ret_only)
void main_f_a82c10() {}

// sub_a830f0  (orig 0xa830f0, ret_only)
void main_f_a830f0() {}

// sub_a849e0  (orig 0xa849e0, ret_only)
void main_f_a849e0() {}

// sub_a850a0  (orig 0xa850a0, ret_only)
void main_f_a850a0() {}

// sub_a86450  (orig 0xa86450, ret_only)
void main_f_a86450() {}

// sub_a870e0  (orig 0xa870e0, ret_only)
void main_f_a870e0() {}

// sub_a87760  (orig 0xa87760, ret_only)
void main_f_a87760() {}

// sub_a87c60  (orig 0xa87c60, ret_only)
void main_f_a87c60() {}

// sub_a88170  (orig 0xa88170, ret_only)
void main_f_a88170() {}

// sub_a88680  (orig 0xa88680, ret_only)
void main_f_a88680() {}

// sub_a88dc0  (orig 0xa88dc0, ret_only)
void main_f_a88dc0() {}

// sub_a89830  (orig 0xa89830, ret_only)
void main_f_a89830() {}

// sub_a89c70  (orig 0xa89c70, ret_only)
void main_f_a89c70() {}

// sub_a8a240  (orig 0xa8a240, ret_only)
void main_f_a8a240() {}

// sub_a8a970  (orig 0xa8a970, ret_only)
void main_f_a8a970() {}

// sub_a8b330  (orig 0xa8b330, ret_only)
void main_f_a8b330() {}

// sub_a8b680  (orig 0xa8b680, ret_only)
void main_f_a8b680() {}

// sub_a8b690  (orig 0xa8b690, ret_only)
void main_f_a8b690() {}

// sub_a8b7e0  (orig 0xa8b7e0, call)
extern void sub_eb6530();
uint32_t main_f_a8b7e0() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_a8b800  (orig 0xa8b800, getter)
uint32_t main_f_a8b800(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_a8b810  (orig 0xa8b810, setter)
void main_f_a8b810(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_a8bfa0  (orig 0xa8bfa0, ret_only)
void main_f_a8bfa0() {}

// sub_a8c950  (orig 0xa8c950, call)
extern void sub_eb6530();
uint32_t main_f_a8c950() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_a8c970  (orig 0xa8c970, getter)
uint32_t main_f_a8c970(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_a8c980  (orig 0xa8c980, setter)
void main_f_a8c980(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_a8c990  (orig 0xa8c990, setter)
void main_f_a8c990(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1488) = a1; }

// sub_a91970  (orig 0xa91970, getter)
uint32_t main_f_a91970(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_a92440  (orig 0xa92440, straight-line)
uint8_t main_f_a92440(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0) + 224)) + ((((uint64_t)(((uint32_t)(((uint32_t)a1)))))) * (((uint64_t)(((uint32_t)(6))))))));
    return *(uint8_t*)((char*)(p0) + 4);
}

// sub_a92580  (orig 0xa92580, getter)
uint32_t main_f_a92580(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_a92a60  (orig 0xa92a60, ret_only)
void main_f_a92a60() {}

// sub_a92a70  (orig 0xa92a70, struct-copy)
void main_f_a92a70(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_a92a90  (orig 0xa92a90, struct-copy)
void main_f_a92a90(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_a94040  (orig 0xa94040, getter)
uint32_t main_f_a94040(void* a0) { return *(uint32_t*)((char*)(a0) + 1556); }

// sub_a95a60  (orig 0xa95a60, ret_only)
void main_f_a95a60() {}

// sub_a96af0  (orig 0xa96af0, call)
extern void sub_eb6530();
uint32_t main_f_a96af0() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_a96b20  (orig 0xa96b20, getter)
uint32_t main_f_a96b20(void* a0) { return *(uint32_t*)((char*)(a0) + 1544); }

// sub_a96b30  (orig 0xa96b30, setter)
void main_f_a96b30(void* a0) { *(uint32_t*)((char*)(a0) + 1544) = 0; }

// sub_a96b40  (orig 0xa96b40, setter)
void main_f_a96b40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1484) = a1; }

// sub_a96bb0  (orig 0xa96bb0, setter-chain)
void main_f_a96bb0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 1488) = a1; *(uint64_t*)((char*)(a0) + 1496) = a2; }

// sub_a96bc0  (orig 0xa96bc0, setter)
void main_f_a96bc0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1756) = a1; }

// sub_a96bd0  (orig 0xa96bd0, setter)
void main_f_a96bd0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1560) = a1; }

// sub_a96be0  (orig 0xa96be0, getter)
uint32_t main_f_a96be0(void* a0) { return *(uint32_t*)((char*)(a0) + 1560); }

// sub_a97440  (orig 0xa97440, setter)
void main_f_a97440(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1556) = a1; }

// sub_aa0b40  (orig 0xaa0b40, compare)
bool main_f_aa0b40(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 1754)) == (uint16_t)(*(uint16_t*)((char*)(a0) + 1752)); }

// sub_aa4660  (orig 0xaa4660, getter)
uint8_t main_f_aa4660(void* a0) { return *(uint8_t*)((char*)(a0) + 1665); }

// sub_aa4670  (orig 0xaa4670, getter)
uint32_t main_f_aa4670(void* a0) { return *(uint32_t*)((char*)(a0) + 1668); }

// sub_aa5440  (orig 0xaa5440, getter)
uint32_t main_f_aa5440(void* a0) { return *(uint32_t*)((char*)(a0) + 1672); }

// sub_aa6650  (orig 0xaa6650, compare)
bool main_f_aa6650(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1676)) != (uint64_t)(1); }

// sub_aa75b0  (orig 0xaa75b0, compare)
bool main_f_aa75b0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1676)) == (uint64_t)(2); }

// sub_aaa310  (orig 0xaaa310, getter)
uint16_t main_f_aaa310(void* a0) { return *(uint16_t*)((char*)(a0) + 1754); }

// sub_aab1a0  (orig 0xaab1a0, getter)
uint8_t main_f_aab1a0(void* a0) { return *(uint8_t*)((char*)(a0) + 1664); }

// sub_aab1b0  (orig 0xaab1b0, getter)
uint8_t main_f_aab1b0(void* a0) { return *(uint8_t*)((char*)(a0) + 1568); }

// sub_aab2c0  (orig 0xaab2c0, straight)
void main_f_aab2c0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 1784) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_aab8b0  (orig 0xaab8b0, getter)
uint8_t main_f_aab8b0(void* a0) { return *(uint8_t*)((char*)(a0) + 1548); }

// sub_aabcf0  (orig 0xaabcf0, ret_only)
void main_f_aabcf0() {}

// sub_aabd00  (orig 0xaabd00, struct-copy)
void main_f_aabd00(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_aabd20  (orig 0xaabd20, struct-copy)
void main_f_aabd20(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_aabd60  (orig 0xaabd60, ret_only)
void main_f_aabd60() {}

// sub_aabd70  (orig 0xaabd70, struct-copy)
void main_f_aabd70(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_aabd90  (orig 0xaabd90, struct-copy)
void main_f_aabd90(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_aabf70  (orig 0xaabf70, ret_only)
void main_f_aabf70() {}

// sub_aabf80  (orig 0xaabf80, struct-copy)
void main_f_aabf80(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_aabfa0  (orig 0xaabfa0, struct-copy)
void main_f_aabfa0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_aad500  (orig 0xaad500, getter)
uint32_t main_f_aad500(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_aad510  (orig 0xaad510, setter)
void main_f_aad510(void* a0) { *(uint32_t*)((char*)(a0) + 128) = 0; }

// sub_aaf5d0  (orig 0xaaf5d0, straight-line)
uint32_t main_f_aaf5d0(uint32_t a0, uint32_t a1, uint32_t a2) { return (((((uint32_t)a0) == 1)) ? (((uint32_t)a2)) : ((((((uint32_t)a0) != 0)) ? (0) : ((((uint32_t)a1)) + ((((uint32_t)a2)) * (6)))))); }

// sub_aafb90  (orig 0xaafb90, setter-chain)
void main_f_aafb90(void* a0, uint32_t a1, uint8_t a2, uint8_t a3, uint16_t a4) { *(uint32_t*)((char*)(a0) + 1680) = a1; *(uint8_t*)((char*)(a0) + 1684) = a2; *(uint8_t*)((char*)(a0) + 1685) = a3; *(uint16_t*)((char*)(a0) + 1686) = a4; }

// sub_aafbb0  (orig 0xaafbb0, ptr_add)
void* main_f_aafbb0(void* a0) { return (char*)a0 + 1680; }

// sub_ab16c0  (orig 0xab16c0, straight)
void* main_f_ab16c0(void* a0) {
    uint32_t k0 = 2;
    *(uint64_t*)((char*)(a0) + 12296L) = (uint64_t)k0;
    return a0;
}

// sub_ab1ad0  (orig 0xab1ad0, straight)
uint64_t main_f_ab1ad0(uint64_t a0) { return (((uint64_t)a0)) + (12296); }

// sub_ab3620  (orig 0xab3620, ret_only)
void main_f_ab3620() {}

// sub_ab3ad0  (orig 0xab3ad0, call)
extern void sub_eb6530();
uint32_t main_f_ab3ad0() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_ab3af0  (orig 0xab3af0, getter)
uint32_t main_f_ab3af0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_ab3b00  (orig 0xab3b00, setter)
void main_f_ab3b00(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_ab4130  (orig 0xab4130, straight)
void* main_f_ab4130(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 1484) = 1;
    *(uint32_t*)((char*)(p0) + 1488) = (uint32_t)(a1);
    return a0;
}

// sub_ab4260  (orig 0xab4260, getter)
uint32_t main_f_ab4260(void* a0) { return *(uint32_t*)((char*)(a0) + 1488); }

// sub_ab4870  (orig 0xab4870, ret_only)
void main_f_ab4870() {}

// sub_ab4880  (orig 0xab4880, struct-copy)
void main_f_ab4880(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ab48a0  (orig 0xab48a0, struct-copy)
void main_f_ab48a0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ab4dd0  (orig 0xab4dd0, mov_ret)
uint32_t main_f_ab4dd0() { return 1; }

// sub_ab8c20  (orig 0xab8c20, getter)
uint64_t main_f_ab8c20(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_ab8d90  (orig 0xab8d90, mov_ret)
uint32_t main_f_ab8d90() { return 1; }

// sub_ab8da0  (orig 0xab8da0, indexed-getter)
uint64_t main_f_ab8da0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_ab8db0  (orig 0xab8db0, indexed-getter)
uint64_t main_f_ab8db0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_ab97a0  (orig 0xab97a0, setter)
void main_f_ab97a0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 480) = a1; }

// sub_ab97b0  (orig 0xab97b0, getter)
uint8_t main_f_ab97b0(void* a0) { return *(uint8_t*)((char*)(a0) + 480); }

// sub_ab97e0  (orig 0xab97e0, setter)
void main_f_ab97e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 2616) = a1; }

// sub_ab97f0  (orig 0xab97f0, getter)
uint64_t main_f_ab97f0(void* a0) { return *(uint64_t*)((char*)(a0) + 2616); }

// sub_ab9ea0  (orig 0xab9ea0, straight-line)
void* main_f_ab9ea0(void* a0) { return (((*(uint8_t*)((char*)(a0) + 2688) == 0)) ? (void *)(uintptr_t)(0) : ((char*)(a0) + 2704)); }

// sub_aba260  (orig 0xaba260, straight)
uint64_t main_f_aba260(void* a0) { return *(uint64_t*)((char*)(a0) + 6336L); }

// sub_aba270  (orig 0xaba270, straight)
uint8_t main_f_aba270(void* a0) { return *(uint8_t*)((char*)(a0) + 6352L); }

// sub_aba280  (orig 0xaba280, straight)
void* main_f_aba280(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint8_t*)((char*)(a0) + 6336L) = 0;
    *(uint8_t*)((char*)(p0) + 6352L) = 0;
    return a0;
}

// sub_aba2a0  (orig 0xaba2a0, straight)
void* main_f_aba2a0(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint64_t*)((char*)(a0) + 6344L) = a1;
    *(uint8_t*)((char*)(p0) + 6336L) = (uint8_t)k1;
    return a0;
}

// sub_aba2c0  (orig 0xaba2c0, straight)
void* main_f_aba2c0(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint64_t*)((char*)(a0) + 6248L) = a1;
    *(uint8_t*)((char*)(p0) + 6240L) = (uint8_t)k1;
    return a0;
}

// sub_aba2e0  (orig 0xaba2e0, ret_only)
void main_f_aba2e0() {}

// sub_aba2f0  (orig 0xaba2f0, ret_only)
void main_f_aba2f0() {}

// sub_aba670  (orig 0xaba670, getter)
uint64_t main_f_aba670(void* a0) { return *(uint64_t*)((char*)(a0) + 6408L); }

// sub_aba6f0  (orig 0xaba6f0, setter)
void main_f_aba6f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 6404L) = a1; }

// sub_aba700  (orig 0xaba700, getter)
uint32_t main_f_aba700(void* a0) { return *(uint32_t*)((char*)(a0) + 6404L); }

// sub_aba710  (orig 0xaba710, setter)
void main_f_aba710(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 6408L) = a1; }

// sub_abaf70  (orig 0xabaf70, getter)
uint64_t main_f_abaf70(void* a0) { return *(uint64_t*)((char*)(a0) + 6416L); }

// sub_abaf80  (orig 0xabaf80, getter)
uint64_t main_f_abaf80(void* a0) { return *(uint64_t*)((char*)(a0) + 6424L); }

// sub_abb050  (orig 0xabb050, setter)
void main_f_abb050(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 6656L) = a1; }

// sub_abb060  (orig 0xabb060, getter)
uint16_t main_f_abb060(void* a0) { return *(uint16_t*)((char*)(a0) + 6656L); }

// sub_abb070  (orig 0xabb070, setter)
void main_f_abb070(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 6392L) = a1; }

// sub_abb080  (orig 0xabb080, getter)
uint32_t main_f_abb080(void* a0) { return *(uint32_t*)((char*)(a0) + 6392L); }

// StateBtlSpotRankMatchAnimation_2  (orig 0xabb090, straight)
void main_f_abb090(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 6396L) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_abb0a0  (orig 0xabb0a0, straight)
uint8_t main_f_abb0a0(void* a0) { return *(uint8_t*)((char*)(a0) + 6396L); }

// sub_abb7c0  (orig 0xabb7c0, setter)
void main_f_abb7c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 6412L) = a1; }

// sub_abb7d0  (orig 0xabb7d0, getter)
uint32_t main_f_abb7d0(void* a0) { return *(uint32_t*)((char*)(a0) + 6412L); }

// sub_abb8f0  (orig 0xabb8f0, setter-chain)
void main_f_abb8f0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 6656L) = a1; *(uint64_t*)((char*)(a0) + 6664L) = a2; }

// sub_abb900  (orig 0xabb900, straight)
uint64_t main_f_abb900(void* a0) { return *(uint64_t*)((char*)(a0) + 6656L); }

// sub_abbd50  (orig 0xabbd50, straight)
uint64_t main_f_abbd50(uint64_t a0) { return (((uint64_t)a0)) + (6752); }

// sub_abbd60  (orig 0xabbd60, straight)
void* main_f_abbd60(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint64_t*)((char*)(a0) + 6808L) = a1;
    *(uint8_t*)((char*)(p0) + 6800L) = (uint8_t)k1;
    return a0;
}

// sub_abbd80  (orig 0xabbd80, straight)
uint64_t main_f_abbd80(void* a0) { return *(uint64_t*)((char*)(a0) + 6800L); }

// sub_abc650  (orig 0xabc650, getter)
uint32_t main_f_abc650(void* a0) { return *(uint32_t*)((char*)(a0) + 104); }

// sub_abcf10  (orig 0xabcf10, mov_ret)
uint32_t main_f_abcf10() { return 1; }

// sub_abd310  (orig 0xabd310, mov_ret)
uint32_t main_f_abd310() { return 2; }

// sub_abd7f0  (orig 0xabd7f0, mov_ret)
uint32_t main_f_abd7f0() { return 3; }

// sub_abf2c0  (orig 0xabf2c0, getter)
uint8_t main_f_abf2c0(void* a0) { return *(uint8_t*)((char*)(a0) + 146); }

// sub_ac0c60  (orig 0xac0c60, straight)
uint32_t main_f_ac0c60(uint32_t a0) { return (((((uint32_t)a0) < 9999999)) ? (((uint32_t)a0)) : (9999999)); }

// sub_ac0c80  (orig 0xac0c80, straight)
uint32_t main_f_ac0c80(uint32_t a0) { return (((((uint32_t)a0) < 9999)) ? (((uint32_t)a0)) : (9999)); }

// sub_ac14f0  (orig 0xac14f0, straight)
uint32_t main_f_ac14f0(uint32_t a0) { return (((((uint32_t)a0) < 9999999)) ? (((uint32_t)a0)) : (9999999)); }

// sub_ac1510  (orig 0xac1510, straight)
uint32_t main_f_ac1510(uint32_t a0) { return (((((uint32_t)a0) < 9999999)) ? (((uint32_t)a0)) : (9999999)); }

// sub_ac1530  (orig 0xac1530, straight)
uint32_t main_f_ac1530(uint32_t a0) { return (((((uint32_t)a0) < 9999999)) ? (((uint32_t)a0)) : (9999999)); }

// sub_ac1b00  (orig 0xac1b00, getter)
uint32_t main_f_ac1b00(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_ac1db0  (orig 0xac1db0, compare)
bool main_f_ac1db0(void* a0, uint64_t a1) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 142)) <= (uint32_t)(a1); }

// sub_ac7470  (orig 0xac7470, straight)
void main_f_ac7470(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 1584));
    *(uint8_t*)((char*)(p0) + 88) = (*(uint8_t*)((char*)(p0) + 88)) & (254);
}

// sub_aced10  (orig 0xaced10, setter-chain)
void main_f_aced10(void* a0) { *(uint64_t*)((char*)(a0) + 1536) = 0; *(uint32_t*)((char*)(a0) + 1544) = 0; }

// sub_ad0bd0  (orig 0xad0bd0, ret_only)
void main_f_ad0bd0() {}

// sub_ad0be0  (orig 0xad0be0, mov_ret)
uint32_t main_f_ad0be0() { return 1; }

// sub_ad0bf0  (orig 0xad0bf0, ret_only)
void main_f_ad0bf0() {}

// sub_ad0dc0  (orig 0xad0dc0, const-field-set)
void main_f_ad0dc0(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0))) + 1536)) = 1; }

// sub_ad0dd0  (orig 0xad0dd0, ret_only)
void main_f_ad0dd0() {}

// sub_ad0de0  (orig 0xad0de0, copy2)
void main_f_ad0de0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0df0  (orig 0xad0df0, copy2)
void main_f_ad0df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e00  (orig 0xad0e00, const-field-set)
void main_f_ad0e00(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0))) + 1536)) = 3; }

// sub_ad0e10  (orig 0xad0e10, ret_only)
void main_f_ad0e10() {}

// sub_ad0e20  (orig 0xad0e20, copy2)
void main_f_ad0e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e30  (orig 0xad0e30, copy2)
void main_f_ad0e30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e40  (orig 0xad0e40, const-field-set)
void main_f_ad0e40(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0))) + 1536)) = 4; }

// sub_ad0e50  (orig 0xad0e50, ret_only)
void main_f_ad0e50() {}

// sub_ad0e60  (orig 0xad0e60, copy2)
void main_f_ad0e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e70  (orig 0xad0e70, copy2)
void main_f_ad0e70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e80  (orig 0xad0e80, const-field-set)
void main_f_ad0e80(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0))) + 1536)) = 2; }

// sub_ad0e90  (orig 0xad0e90, ret_only)
void main_f_ad0e90() {}

// sub_ad0ea0  (orig 0xad0ea0, copy2)
void main_f_ad0ea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0eb0  (orig 0xad0eb0, copy2)
void main_f_ad0eb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad6070  (orig 0xad6070, call)
extern void sub_eb6530();
uint32_t main_f_ad6070() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_ad6ea0  (orig 0xad6ea0, call)
extern void sub_eb6530();
uint32_t main_f_ad6ea0() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_ad70f0  (orig 0xad70f0, ret_only)
void main_f_ad70f0() {}

// sub_ad7170  (orig 0xad7170, ret_only)
void main_f_ad7170() {}

// sub_ad71f0  (orig 0xad71f0, ret_only)
void main_f_ad71f0() {}

// sub_ad72e0  (orig 0xad72e0, ret_only)
void main_f_ad72e0() {}

// sub_ad7360  (orig 0xad7360, const-field-set)
void main_f_ad7360(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0))) + 1536)) = 1; }

// sub_ad7370  (orig 0xad7370, ret_only)
void main_f_ad7370() {}

// sub_ad7380  (orig 0xad7380, copy2)
void main_f_ad7380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad7390  (orig 0xad7390, copy2)
void main_f_ad7390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad9140  (orig 0xad9140, call)
extern void sub_eb6530();
uint32_t main_f_ad9140() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_ad9320  (orig 0xad9320, ret_only)
void main_f_ad9320() {}

// sub_ad93a0  (orig 0xad93a0, ret_only)
void main_f_ad93a0() {}

// sub_ad9730  (orig 0xad9730, const-field-set)
void main_f_ad9730(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0))) + 1536)) = 1; }

// sub_ad9740  (orig 0xad9740, ret_only)
void main_f_ad9740() {}

// sub_ad9750  (orig 0xad9750, copy2)
void main_f_ad9750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad9760  (orig 0xad9760, copy2)
void main_f_ad9760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad97e0  (orig 0xad97e0, ret_only)
void main_f_ad97e0() {}

// sub_ad98d0  (orig 0xad98d0, ret_only)
void main_f_ad98d0() {}

// sub_ad99c0  (orig 0xad99c0, ret_only)
void main_f_ad99c0() {}

// sub_ad9ab0  (orig 0xad9ab0, ret_only)
void main_f_ad9ab0() {}

// sub_ad9ba0  (orig 0xad9ba0, ret_only)
void main_f_ad9ba0() {}

// sub_ada1c0  (orig 0xada1c0, call)
extern void sub_eb6530();
uint32_t main_f_ada1c0() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_ada4c0  (orig 0xada4c0, getter-chain)
uint8_t main_f_ada4c0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 2120))) + 408); }

// sub_ada530  (orig 0xada530, call)
extern void sub_14d9c40();
uint32_t main_f_ada530(void* a0) {
    uint64_t f_ada530__r0 = ((uint64_t (*)(uintptr_t))&sub_14d9c40)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 2120))));
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_ada660  (orig 0xada660, call)
extern void sub_eb6530();
uint32_t main_f_ada660() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_adc790  (orig 0xadc790, call)
extern void sub_eb6530();
uint32_t main_f_adc790() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_adc9e0  (orig 0xadc9e0, ret_only)
void main_f_adc9e0() {}

// sub_adc9f0  (orig 0xadc9f0, struct-copy)
void main_f_adc9f0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_adca10  (orig 0xadca10, struct-copy)
void main_f_adca10(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_adcaa0  (orig 0xadcaa0, ret_only)
void main_f_adcaa0() {}

// sub_adcb90  (orig 0xadcb90, ret_only)
void main_f_adcb90() {}

// sub_adcdd0  (orig 0xadcdd0, setter)
void main_f_adcdd0(void* a0) { *(uint8_t*)((char*)(a0) + 1504) = 0; }

// sub_add260  (orig 0xadd260, mov_ret)
uint32_t main_f_add260() { return 0; }

// sub_add3d0  (orig 0xadd3d0, straight)
void main_f_add3d0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 1520));
    *(uint8_t*)((char*)(p0) + 88) = (*(uint8_t*)((char*)(p0) + 88)) & (254);
}

// sub_adede0  (orig 0xadede0, call)
extern void sub_eb6530();
uint32_t main_f_adede0() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_adee70  (orig 0xadee70, ret_only)
void main_f_adee70() {}

// sub_adee80  (orig 0xadee80, copy2)
void main_f_adee80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_adee90  (orig 0xadee90, copy2)
void main_f_adee90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ae05c0  (orig 0xae05c0, call)
extern void sub_eb6530();
uint32_t main_f_ae05c0() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_ae0c40  (orig 0xae0c40, ret_only)
void main_f_ae0c40() {}

// sub_ae0c50  (orig 0xae0c50, struct-copy)
void main_f_ae0c50(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ae0c70  (orig 0xae0c70, struct-copy)
void main_f_ae0c70(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ae0ca0  (orig 0xae0ca0, ret_only)
void main_f_ae0ca0() {}

// sub_ae0cb0  (orig 0xae0cb0, copy2)
void main_f_ae0cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ae0cc0  (orig 0xae0cc0, copy2)
void main_f_ae0cc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ae0ce0  (orig 0xae0ce0, ret_only)
void main_f_ae0ce0() {}

// sub_ae0cf0  (orig 0xae0cf0, copy2)
void main_f_ae0cf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ae0d00  (orig 0xae0d00, copy2)
void main_f_ae0d00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ae1070  (orig 0xae1070, straight)
void* main_f_ae1070(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 2880) = 999;
    *(uint8_t*)((char*)(p0) + 2884) = 0;
    return a0;
}

// sub_ae1600  (orig 0xae1600, compare)
bool main_f_ae1600(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1784)) == (uint64_t)(4); }

// sub_ae1800  (orig 0xae1800, getter)
uint64_t main_f_ae1800(void* a0) { return *(uint64_t*)((char*)(a0) + 2880); }

// sub_ae4810  (orig 0xae4810, ret_only)
void main_f_ae4810() {}

// sub_ae48e0  (orig 0xae48e0, ret_only)
void main_f_ae48e0() {}

// sub_ae4900  (orig 0xae4900, const-field-set)
void main_f_ae4900(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae4980  (orig 0xae4980, ret_only)
void main_f_ae4980() {}

// sub_ae49a0  (orig 0xae49a0, const-field-set)
void main_f_ae49a0(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae4a20  (orig 0xae4a20, ret_only)
void main_f_ae4a20() {}

// sub_ae4a40  (orig 0xae4a40, const-field-set)
void main_f_ae4a40(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae4ac0  (orig 0xae4ac0, ret_only)
void main_f_ae4ac0() {}

// sub_ae4ae0  (orig 0xae4ae0, const-field-set)
void main_f_ae4ae0(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae4b60  (orig 0xae4b60, ret_only)
void main_f_ae4b60() {}

// sub_ae4b80  (orig 0xae4b80, copy2)
void main_f_ae4b80(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae4c00  (orig 0xae4c00, ret_only)
void main_f_ae4c00() {}

// sub_ae4c20  (orig 0xae4c20, const-field-set)
void main_f_ae4c20(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 1; }

// sub_ae4ca0  (orig 0xae4ca0, ret_only)
void main_f_ae4ca0() {}

// sub_ae4cc0  (orig 0xae4cc0, const-field-set)
void main_f_ae4cc0(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 2; }

// sub_ae4d40  (orig 0xae4d40, ret_only)
void main_f_ae4d40() {}

// sub_ae4d60  (orig 0xae4d60, const-field-set)
void main_f_ae4d60(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae4de0  (orig 0xae4de0, ret_only)
void main_f_ae4de0() {}

// sub_ae4e00  (orig 0xae4e00, const-field-set)
void main_f_ae4e00(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae4e80  (orig 0xae4e80, ret_only)
void main_f_ae4e80() {}

// sub_ae4ea0  (orig 0xae4ea0, const-field-set)
void main_f_ae4ea0(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae4f20  (orig 0xae4f20, ret_only)
void main_f_ae4f20() {}

// sub_ae4f40  (orig 0xae4f40, copy2)
void main_f_ae4f40(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae4fc0  (orig 0xae4fc0, ret_only)
void main_f_ae4fc0() {}

// sub_ae4fe0  (orig 0xae4fe0, const-field-set)
void main_f_ae4fe0(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 1; }

// sub_ae5060  (orig 0xae5060, ret_only)
void main_f_ae5060() {}

// sub_ae5080  (orig 0xae5080, const-field-set)
void main_f_ae5080(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 2; }

