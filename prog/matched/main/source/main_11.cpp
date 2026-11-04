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


// sub_ae66e0  (orig 0xae66e0, ret_only)
void main_f_ae66e0() {}

// sub_ae6700  (orig 0xae6700, const-field-set)
void main_f_ae6700(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae6780  (orig 0xae6780, ret_only)
void main_f_ae6780() {}

// sub_ae67a0  (orig 0xae67a0, const-field-set)
void main_f_ae67a0(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae6820  (orig 0xae6820, ret_only)
void main_f_ae6820() {}

// sub_ae6840  (orig 0xae6840, const-field-set)
void main_f_ae6840(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae68c0  (orig 0xae68c0, ret_only)
void main_f_ae68c0() {}

// sub_ae68e0  (orig 0xae68e0, const-field-set)
void main_f_ae68e0(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae6960  (orig 0xae6960, ret_only)
void main_f_ae6960() {}

// sub_ae6980  (orig 0xae6980, const-field-set)
void main_f_ae6980(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae6a00  (orig 0xae6a00, ret_only)
void main_f_ae6a00() {}

// sub_ae6a20  (orig 0xae6a20, const-field-set)
void main_f_ae6a20(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae6aa0  (orig 0xae6aa0, ret_only)
void main_f_ae6aa0() {}

// sub_ae6ac0  (orig 0xae6ac0, const-field-set)
void main_f_ae6ac0(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae6b40  (orig 0xae6b40, ret_only)
void main_f_ae6b40() {}

// sub_ae6b60  (orig 0xae6b60, copy2)
void main_f_ae6b60(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae6be0  (orig 0xae6be0, ret_only)
void main_f_ae6be0() {}

// sub_ae6c00  (orig 0xae6c00, const-field-set)
void main_f_ae6c00(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 1; }

// sub_ae6c80  (orig 0xae6c80, ret_only)
void main_f_ae6c80() {}

// sub_ae6ca0  (orig 0xae6ca0, copy2)
void main_f_ae6ca0(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae6d20  (orig 0xae6d20, ret_only)
void main_f_ae6d20() {}

// sub_ae6d40  (orig 0xae6d40, const-field-set)
void main_f_ae6d40(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 1; }

// sub_ae6dc0  (orig 0xae6dc0, ret_only)
void main_f_ae6dc0() {}

// sub_ae6de0  (orig 0xae6de0, const-field-set)
void main_f_ae6de0(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 2; }

// sub_ae6e60  (orig 0xae6e60, ret_only)
void main_f_ae6e60() {}

// sub_ae6e80  (orig 0xae6e80, const-field-set)
void main_f_ae6e80(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae6f00  (orig 0xae6f00, ret_only)
void main_f_ae6f00() {}

// sub_ae6f20  (orig 0xae6f20, const-field-set)
void main_f_ae6f20(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae6fa0  (orig 0xae6fa0, ret_only)
void main_f_ae6fa0() {}

// sub_ae6fc0  (orig 0xae6fc0, copy2)
void main_f_ae6fc0(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae7040  (orig 0xae7040, ret_only)
void main_f_ae7040() {}

// sub_ae7060  (orig 0xae7060, const-field-set)
void main_f_ae7060(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 1; }

// sub_ae70e0  (orig 0xae70e0, ret_only)
void main_f_ae70e0() {}

// sub_ae7100  (orig 0xae7100, const-field-set)
void main_f_ae7100(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae7180  (orig 0xae7180, ret_only)
void main_f_ae7180() {}

// sub_ae71a0  (orig 0xae71a0, const-field-set)
void main_f_ae71a0(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae71b0  (orig 0xae71b0, ret_only)
void main_f_ae71b0() {}

// sub_ae7230  (orig 0xae7230, ret_only)
void main_f_ae7230() {}

// sub_ae7250  (orig 0xae7250, const-field-set)
void main_f_ae7250(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae72d0  (orig 0xae72d0, ret_only)
void main_f_ae72d0() {}

// sub_ae72f0  (orig 0xae72f0, const-field-set)
void main_f_ae72f0(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae7370  (orig 0xae7370, ret_only)
void main_f_ae7370() {}

// sub_ae7390  (orig 0xae7390, const-field-set)
void main_f_ae7390(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae7410  (orig 0xae7410, ret_only)
void main_f_ae7410() {}

// sub_ae7430  (orig 0xae7430, const-field-set)
void main_f_ae7430(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae74b0  (orig 0xae74b0, ret_only)
void main_f_ae74b0() {}

// sub_ae74d0  (orig 0xae74d0, const-field-set)
void main_f_ae74d0(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae7550  (orig 0xae7550, ret_only)
void main_f_ae7550() {}

// sub_ae7570  (orig 0xae7570, const-field-set)
void main_f_ae7570(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae75f0  (orig 0xae75f0, ret_only)
void main_f_ae75f0() {}

// sub_ae7610  (orig 0xae7610, const-field-set)
void main_f_ae7610(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae7690  (orig 0xae7690, ret_only)
void main_f_ae7690() {}

// sub_ae76b0  (orig 0xae76b0, const-field-set)
void main_f_ae76b0(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae7730  (orig 0xae7730, ret_only)
void main_f_ae7730() {}

// sub_ae7750  (orig 0xae7750, const-field-set)
void main_f_ae7750(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae77d0  (orig 0xae77d0, ret_only)
void main_f_ae77d0() {}

// sub_ae77f0  (orig 0xae77f0, const-field-set)
void main_f_ae77f0(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0) + 8)) + 2884)) = 1; }

// sub_ae8c30  (orig 0xae8c30, call)
extern void sub_eb6530();
uint32_t main_f_ae8c30() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_ae8e80  (orig 0xae8e80, ret_only)
void main_f_ae8e80() {}

// sub_ae8f70  (orig 0xae8f70, ret_only)
void main_f_ae8f70() {}

// sub_ae9060  (orig 0xae9060, ret_only)
void main_f_ae9060() {}

// sub_ae90e0  (orig 0xae90e0, const-field-set)
void main_f_ae90e0(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0))) + 1536)) = 1; }

// sub_ae90f0  (orig 0xae90f0, ret_only)
void main_f_ae90f0() {}

// sub_ae9100  (orig 0xae9100, copy2)
void main_f_ae9100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ae9110  (orig 0xae9110, copy2)
void main_f_ae9110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_aeac90  (orig 0xaeac90, call)
extern void sub_eb6530();
uint32_t main_f_aeac90() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_aeb0b0  (orig 0xaeb0b0, ret_only)
void main_f_aeb0b0() {}

// sub_aeb0c0  (orig 0xaeb0c0, copy2)
void main_f_aeb0c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_aeb0d0  (orig 0xaeb0d0, copy2)
void main_f_aeb0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_aeb150  (orig 0xaeb150, ret_only)
void main_f_aeb150() {}

// sub_aeb240  (orig 0xaeb240, ret_only)
void main_f_aeb240() {}

// sub_aeb330  (orig 0xaeb330, ret_only)
void main_f_aeb330() {}

// sub_aeb420  (orig 0xaeb420, ret_only)
void main_f_aeb420() {}

// sub_aeb510  (orig 0xaeb510, ret_only)
void main_f_aeb510() {}

// sub_aeb600  (orig 0xaeb600, ret_only)
void main_f_aeb600() {}

// sub_aeb6f0  (orig 0xaeb6f0, ret_only)
void main_f_aeb6f0() {}

// sub_aece80  (orig 0xaece80, call)
extern void sub_eb6530();
uint32_t main_f_aece80() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_aed2a0  (orig 0xaed2a0, ret_only)
void main_f_aed2a0() {}

// sub_aed2b0  (orig 0xaed2b0, copy2)
void main_f_aed2b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_aed2c0  (orig 0xaed2c0, copy2)
void main_f_aed2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_aed340  (orig 0xaed340, ret_only)
void main_f_aed340() {}

// sub_aed430  (orig 0xaed430, ret_only)
void main_f_aed430() {}

// sub_aed760  (orig 0xaed760, ret_only)
void main_f_aed760() {}

// sub_aed850  (orig 0xaed850, ret_only)
void main_f_aed850() {}

// sub_aed940  (orig 0xaed940, ret_only)
void main_f_aed940() {}

// sub_aeda30  (orig 0xaeda30, ret_only)
void main_f_aeda30() {}

// sub_aedb20  (orig 0xaedb20, ret_only)
void main_f_aedb20() {}

// sub_aedc10  (orig 0xaedc10, ret_only)
void main_f_aedc10() {}

// sub_aedd00  (orig 0xaedd00, ret_only)
void main_f_aedd00() {}

// sub_aedec0  (orig 0xaedec0, ret_only)
void main_f_aedec0() {}

// sub_aedfb0  (orig 0xaedfb0, ret_only)
void main_f_aedfb0() {}

// sub_aef9b0  (orig 0xaef9b0, call)
extern void sub_eb6530();
uint32_t main_f_aef9b0() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_aefe90  (orig 0xaefe90, ret_only)
void main_f_aefe90() {}

// sub_aeff80  (orig 0xaeff80, ret_only)
void main_f_aeff80() {}

// sub_af0070  (orig 0xaf0070, ret_only)
void main_f_af0070() {}

// sub_af00f0  (orig 0xaf00f0, const-field-set)
void main_f_af00f0(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0))) + 1536)) = 1; }

// sub_af0100  (orig 0xaf0100, ret_only)
void main_f_af0100() {}

// sub_af0110  (orig 0xaf0110, copy2)
void main_f_af0110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af0120  (orig 0xaf0120, copy2)
void main_f_af0120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af0150  (orig 0xaf0150, ret_only)
void main_f_af0150() {}

// sub_af0160  (orig 0xaf0160, copy2)
void main_f_af0160(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af0170  (orig 0xaf0170, copy2)
void main_f_af0170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af1bd0  (orig 0xaf1bd0, call)
extern void sub_eb6530();
uint32_t main_f_af1bd0() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_af1e00  (orig 0xaf1e00, ret_only)
void main_f_af1e00() {}

// sub_af1e10  (orig 0xaf1e10, copy2)
void main_f_af1e10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af1e20  (orig 0xaf1e20, copy2)
void main_f_af1e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af1ea0  (orig 0xaf1ea0, ret_only)
void main_f_af1ea0() {}

// sub_af1f90  (orig 0xaf1f90, ret_only)
void main_f_af1f90() {}

// sub_af2080  (orig 0xaf2080, ret_only)
void main_f_af2080() {}

// sub_af2170  (orig 0xaf2170, ret_only)
void main_f_af2170() {}

// sub_af2260  (orig 0xaf2260, ret_only)
void main_f_af2260() {}

// sub_af2350  (orig 0xaf2350, ret_only)
void main_f_af2350() {}

// sub_af2440  (orig 0xaf2440, ret_only)
void main_f_af2440() {}

// sub_af2530  (orig 0xaf2530, ret_only)
void main_f_af2530() {}

// sub_af2620  (orig 0xaf2620, ret_only)
void main_f_af2620() {}

// sub_af2710  (orig 0xaf2710, ret_only)
void main_f_af2710() {}

// sub_af2800  (orig 0xaf2800, ret_only)
void main_f_af2800() {}

// sub_af28f0  (orig 0xaf28f0, ret_only)
void main_f_af28f0() {}

// sub_af29e0  (orig 0xaf29e0, ret_only)
void main_f_af29e0() {}

// sub_af2ad0  (orig 0xaf2ad0, ret_only)
void main_f_af2ad0() {}

// sub_af2bc0  (orig 0xaf2bc0, ret_only)
void main_f_af2bc0() {}

// sub_af2cb0  (orig 0xaf2cb0, ret_only)
void main_f_af2cb0() {}

// sub_af3350  (orig 0xaf3350, straight)
void* main_f_af3350(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 1544) = (uint32_t)(a1);
    *(uint32_t*)((char*)(p0) + 1536) = 1;
    return a0;
}

// sub_af4ad0  (orig 0xaf4ad0, setter)
void main_f_af4ad0(void* a0, uint64_t unused1, uint64_t unused2, uint32_t a3) { *(uint32_t*)((char*)(a0) + 2216) = a3; }

// sub_af54f0  (orig 0xaf54f0, call)
extern void sub_eb6530();
uint32_t main_f_af54f0() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_eb6530)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_af5970  (orig 0xaf5970, ret_only)
void main_f_af5970() {}

// sub_af5980  (orig 0xaf5980, struct-copy)
void main_f_af5980(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_af59a0  (orig 0xaf59a0, struct-copy)
void main_f_af59a0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_af5a30  (orig 0xaf5a30, ret_only)
void main_f_af5a30() {}

// sub_af5b20  (orig 0xaf5b20, ret_only)
void main_f_af5b20() {}

// sub_af5c10  (orig 0xaf5c10, ret_only)
void main_f_af5c10() {}

// sub_af5c20  (orig 0xaf5c20, copy2)
void main_f_af5c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af5c30  (orig 0xaf5c30, copy2)
void main_f_af5c30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af6190  (orig 0xaf6190, ret_only)
void main_f_af6190() {}

// sub_af6280  (orig 0xaf6280, ret_only)
void main_f_af6280() {}

// sub_af6370  (orig 0xaf6370, ret_only)
void main_f_af6370() {}

// sub_af6460  (orig 0xaf6460, ret_only)
void main_f_af6460() {}

// sub_af6550  (orig 0xaf6550, ret_only)
void main_f_af6550() {}

// sub_af6640  (orig 0xaf6640, ret_only)
void main_f_af6640() {}

// sub_af6730  (orig 0xaf6730, ret_only)
void main_f_af6730() {}

// sub_af6820  (orig 0xaf6820, ret_only)
void main_f_af6820() {}

// sub_af6910  (orig 0xaf6910, ret_only)
void main_f_af6910() {}

// sub_af6a00  (orig 0xaf6a00, ret_only)
void main_f_af6a00() {}

// sub_af6af0  (orig 0xaf6af0, ret_only)
void main_f_af6af0() {}

// sub_af6be0  (orig 0xaf6be0, ret_only)
void main_f_af6be0() {}

// sub_af6cd0  (orig 0xaf6cd0, ret_only)
void main_f_af6cd0() {}

// sub_af6dc0  (orig 0xaf6dc0, ret_only)
void main_f_af6dc0() {}

// sub_af6eb0  (orig 0xaf6eb0, ret_only)
void main_f_af6eb0() {}

// sub_af6fa0  (orig 0xaf6fa0, ret_only)
void main_f_af6fa0() {}

// sub_af7450  (orig 0xaf7450, ret_only)
void main_f_af7450() {}

// sub_afb5f0  (orig 0xafb5f0, getter)
uint64_t main_f_afb5f0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_afb7c0  (orig 0xafb7c0, getter)
uint64_t main_f_afb7c0(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_afc4b0  (orig 0xafc4b0, ret_only)
void main_f_afc4b0() {}

// sub_b02200  (orig 0xb02200, ret_only)
void main_f_b02200() {}

// sub_b02940  (orig 0xb02940, ret_only)
void main_f_b02940() {}

// sub_b08ef0  (orig 0xb08ef0, ret_only)
void main_f_b08ef0() {}

// sub_b0ade0  (orig 0xb0ade0, ret_only)
void main_f_b0ade0() {}

// sub_b0caa0  (orig 0xb0caa0, straight)
void* main_f_b0caa0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(a0) + 168) = 2;
    *(uint8_t*)((char*)(p0) + 164) = (uint8_t)k1;
    return a0;
}

// sub_b0cac0  (orig 0xb0cac0, straight)
void* main_f_b0cac0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(a0) + 32) = 2;
    *(uint8_t*)((char*)(p0) + 28) = (uint8_t)k1;
    return a0;
}

// sub_b0cae0  (orig 0xb0cae0, straight)
void main_f_b0cae0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 168) = 11;
    *(uint8_t*)((char*)(a0) + 164) = (uint8_t)k0;
    *(uint8_t*)((char*)(a0) + 172) = (*(uint8_t*)((char*)(a0) + 172)) + (1);
}

// sub_b0cb00  (orig 0xb0cb00, straight)
void main_f_b0cb00(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 32) = 11;
    *(uint8_t*)((char*)(a0) + 28) = (uint8_t)k0;
    *(uint8_t*)((char*)(a0) + 36) = (*(uint8_t*)((char*)(a0) + 36)) + (1);
}

// sub_b0cb20  (orig 0xb0cb20, straight)
void main_f_b0cb20(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 173) = (*(uint8_t*)((char*)(a0) + 173)) + (1);
    *(uint32_t*)((char*)(a0) + 168) = (((*(uint8_t*)((char*)(a0) + 592) == 0)) ? (11) : (21));
    *(uint8_t*)((char*)(a0) + 164) = (uint8_t)k0;
}

// sub_b0cb50  (orig 0xb0cb50, straight)
void main_f_b0cb50(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 37) = (*(uint8_t*)((char*)(a0) + 37)) + (1);
    *(uint32_t*)((char*)(a0) + 32) = (((*(uint8_t*)((char*)(a0) + 456) == 0)) ? (11) : (21));
    *(uint8_t*)((char*)(a0) + 28) = (uint8_t)k0;
}

// sub_b0cb80  (orig 0xb0cb80, straight)
void* main_f_b0cb80(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(a0) + 168) = 18;
    *(uint8_t*)((char*)(p0) + 164) = (uint8_t)k1;
    return a0;
}

// sub_b0cba0  (orig 0xb0cba0, straight)
void* main_f_b0cba0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(a0) + 32) = 18;
    *(uint8_t*)((char*)(p0) + 28) = (uint8_t)k1;
    return a0;
}

// sub_b0ec90  (orig 0xb0ec90, setter)
void main_f_b0ec90(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_b0edf0  (orig 0xb0edf0, ret_only)
void main_f_b0edf0() {}

// sub_b0eea0  (orig 0xb0eea0, ret_only)
void main_f_b0eea0() {}

// sub_b0eeb0  (orig 0xb0eeb0, mov_ret)
uint64_t main_f_b0eeb0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_b0eec0  (orig 0xb0eec0, straight)
uint32_t main_f_b0eec0(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_b0f0a0  (orig 0xb0f0a0, mov_ret)
uint32_t main_f_b0f0a0() { return 1; }

// sub_b0f120  (orig 0xb0f120, indirect-tailcall)
void main_f_b0f120(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_b0f150  (orig 0xb0f150, getter)
uint32_t main_f_b0f150(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_b0f160  (orig 0xb0f160, mov_ret)
uint32_t main_f_b0f160() { return 1; }

// sub_b0f6f0  (orig 0xb0f6f0, setter)
void main_f_b0f6f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_b0fbf0  (orig 0xb0fbf0, mov_ret)
uint32_t main_f_b0fbf0() { return 1; }

// sub_b0fc70  (orig 0xb0fc70, indirect-tailcall)
void main_f_b0fc70(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_b0fca0  (orig 0xb0fca0, getter)
uint32_t main_f_b0fca0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_b0fcb0  (orig 0xb0fcb0, mov_ret)
uint32_t main_f_b0fcb0() { return 1; }

// sub_b10120  (orig 0xb10120, ret_only)
void main_f_b10120() {}

// sub_b14b20  (orig 0xb14b20, ret_only)
void main_f_b14b20() {}

// sub_b16960  (orig 0xb16960, straight)
void main_f_b16960(void* a0) {
    *(uint32_t*)((char*)(a0) + 144) = (((*(uint8_t*)((char*)(a0) + 216) == 0)) ? (13) : (15));
}

// sub_b16980  (orig 0xb16980, straight)
void main_f_b16980(void* a0) {
    *(uint32_t*)((char*)(a0) + 8) = (((*(uint8_t*)((char*)(a0) + 80) == 0)) ? (13) : (15));
}

// sub_b16c80  (orig 0xb16c80, ret_only)
void main_f_b16c80() {}

// sub_b19480  (orig 0xb19480, ret_only)
void main_f_b19480() {}

// sub_b1f0c0  (orig 0xb1f0c0, ret_only)
void main_f_b1f0c0() {}

// sub_b23690  (orig 0xb23690, ret_only)
void main_f_b23690() {}

// sub_b25570  (orig 0xb25570, ret_only)
void main_f_b25570() {}

// sub_b27050  (orig 0xb27050, ret_only)
void main_f_b27050() {}

// sub_b294d0  (orig 0xb294d0, ret_only)
void main_f_b294d0() {}

// sub_b2a060  (orig 0xb2a060, ret_only)
void main_f_b2a060() {}

// sub_b2b5a0  (orig 0xb2b5a0, mov_ret)
uint32_t main_f_b2b5a0() { return 1; }

// sub_b2b5b0  (orig 0xb2b5b0, ret_only)
void main_f_b2b5b0() {}

// sub_b2b5c0  (orig 0xb2b5c0, ret_only)
void main_f_b2b5c0() {}

// sub_b2bdb0  (orig 0xb2bdb0, mov_ret)
uint32_t main_f_b2bdb0() { return 1; }

// sub_b2bdc0  (orig 0xb2bdc0, ret_only)
void main_f_b2bdc0() {}

// sub_b2bdd0  (orig 0xb2bdd0, ret_only)
void main_f_b2bdd0() {}

// sub_b2bf50  (orig 0xb2bf50, mov_ret)
uint32_t main_f_b2bf50() { return 1; }

// sub_b2c630  (orig 0xb2c630, getter)
uint64_t main_f_b2c630(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_b2c7a0  (orig 0xb2c7a0, mov_ret)
uint32_t main_f_b2c7a0() { return 1; }

// sub_b2c7b0  (orig 0xb2c7b0, indexed-getter)
uint64_t main_f_b2c7b0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b2c7c0  (orig 0xb2c7c0, indexed-getter)
uint64_t main_f_b2c7c0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b2d500  (orig 0xb2d500, ret_only)
void main_f_b2d500() {}

// sub_b2d510  (orig 0xb2d510, straight)
void* main_f_b2d510(void* a0) {
    *(uint32_t*)((char*)(a0) + 132) = 3;
    return a0;
}

// sub_b2d520  (orig 0xb2d520, straight)
void* main_f_b2d520(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = 3;
    return a0;
}

// sub_b2d530  (orig 0xb2d530, straight)
void* main_f_b2d530(void* a0) {
    *(uint32_t*)((char*)(a0) + 132) = 4;
    return a0;
}

// sub_b2d540  (orig 0xb2d540, straight)
void* main_f_b2d540(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = 4;
    return a0;
}

// sub_b2d550  (orig 0xb2d550, straight)
void* main_f_b2d550(void* a0) {
    *(uint32_t*)((char*)(a0) + 132) = 4;
    return a0;
}

// sub_b2d560  (orig 0xb2d560, straight)
void* main_f_b2d560(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = 4;
    return a0;
}

// sub_b2d570  (orig 0xb2d570, straight)
void* main_f_b2d570(void* a0) {
    *(uint32_t*)((char*)(a0) + 132) = 4;
    return a0;
}

// sub_b2d580  (orig 0xb2d580, straight)
void* main_f_b2d580(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = 4;
    return a0;
}

// sub_b2dd00  (orig 0xb2dd00, mov_ret)
uint32_t main_f_b2dd00() { return 1; }

// sub_b2dd10  (orig 0xb2dd10, ret_only)
void main_f_b2dd10() {}

// sub_b2ea50  (orig 0xb2ea50, mov_ret)
uint32_t main_f_b2ea50() { return 1; }

// sub_b2f090  (orig 0xb2f090, ret_only)
void main_f_b2f090() {}

// sub_b2f400  (orig 0xb2f400, mov_ret)
uint32_t main_f_b2f400() { return 1; }

// sub_b30080  (orig 0xb30080, getter)
uint64_t main_f_b30080(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_b301f0  (orig 0xb301f0, mov_ret)
uint32_t main_f_b301f0() { return 1; }

// sub_b30200  (orig 0xb30200, indexed-getter)
uint64_t main_f_b30200(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b30210  (orig 0xb30210, indexed-getter)
uint64_t main_f_b30210(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b314f0  (orig 0xb314f0, ret_only)
void main_f_b314f0() {}

// sub_b327a0  (orig 0xb327a0, straight)
void* main_f_b327a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 140) = 4;
    return a0;
}

// sub_b327b0  (orig 0xb327b0, straight)
void* main_f_b327b0(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 4;
    return a0;
}

// sub_b327c0  (orig 0xb327c0, guarded)
void* main_f_b327c0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    if ((*(uint32_t*)((char*)(a0) + 140)) != (1)) {
        *(uint32_t*)((char*)(p0) + 140) = 5;
        return a0;
    }
    return a0;
}

// sub_b327e0  (orig 0xb327e0, guarded)
void* main_f_b327e0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    if ((*(uint32_t*)((char*)(a0) + 20)) != (1)) {
        *(uint32_t*)((char*)(p0) + 20) = 5;
        return a0;
    }
    return a0;
}

// sub_b32800  (orig 0xb32800, straight)
void* main_f_b32800(void* a0) {
    *(uint32_t*)((char*)(a0) + 140) = 5;
    return a0;
}

// sub_b32810  (orig 0xb32810, straight)
void* main_f_b32810(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 5;
    return a0;
}

// sub_b32820  (orig 0xb32820, straight)
void* main_f_b32820(void* a0) {
    *(uint32_t*)((char*)(a0) + 140) = 5;
    return a0;
}

// sub_b32830  (orig 0xb32830, straight)
void* main_f_b32830(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 5;
    return a0;
}

// sub_b32840  (orig 0xb32840, straight)
void* main_f_b32840(void* a0) {
    *(uint32_t*)((char*)(a0) + 140) = 5;
    return a0;
}

// sub_b32850  (orig 0xb32850, straight)
void* main_f_b32850(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 5;
    return a0;
}

// sub_b32af0  (orig 0xb32af0, ret_only)
void main_f_b32af0() {}

// sub_b32b00  (orig 0xb32b00, ret_only)
void main_f_b32b00() {}

// sub_b32eb0  (orig 0xb32eb0, ret_only)
void main_f_b32eb0() {}

// sub_b334c0  (orig 0xb334c0, call)
extern void sub_b364c0();
uint64_t main_f_b334c0(void* a0) {
    uint64_t r0 = ((uint64_t (*)(uintptr_t))&sub_b364c0)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
    asm volatile("");
    return r0;
}

// sub_b37010  (orig 0xb37010, getter)
uint64_t main_f_b37010(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_b40ea0  (orig 0xb40ea0, straight)
uint64_t main_f_b40ea0(void* a0, int32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a1)) * 8)));
    return *(uint64_t*)((char*)(p0) + 312);
}

// sub_b40eb0  (orig 0xb40eb0, getter)
uint64_t main_f_b40eb0(void* a0) { return *(uint64_t*)((char*)(a0) + 328); }

// sub_b42020  (orig 0xb42020, straight)
uint32_t main_f_b42020(void* a0) { return (((*(uint32_t*)((char*)(a0) + 148) == 3) ? 1 : 0)) | (((*(uint32_t*)((char*)(a0) + 148) == 5) ? 1 : 0)); }

// sub_b42040  (orig 0xb42040, compare)
bool main_f_b42040(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 148)) == (uint64_t)(5); }

// sub_b42050  (orig 0xb42050, compare)
bool main_f_b42050(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 148)) == (uint64_t)(0); }

// sub_b42340  (orig 0xb42340, ret_only)
void main_f_b42340() {}

// sub_b443d0  (orig 0xb443d0, ret_only)
void main_f_b443d0() {}

// sub_b44420  (orig 0xb44420, ret_only)
void main_f_b44420() {}

// sub_b45370  (orig 0xb45370, ret_only)
void main_f_b45370() {}

// sub_b45380  (orig 0xb45380, ret_only)
void main_f_b45380() {}

// sub_b45390  (orig 0xb45390, ret_only)
void main_f_b45390() {}

// sub_b453a0  (orig 0xb453a0, ret_only)
void main_f_b453a0() {}

// sub_b453b0  (orig 0xb453b0, ret_only)
void main_f_b453b0() {}

// sub_b453c0  (orig 0xb453c0, mov_ret)
uint32_t main_f_b453c0() { return 0; }

// sub_b453d0  (orig 0xb453d0, mov_ret)
uint32_t main_f_b453d0() { return 1; }

// sub_b453e0  (orig 0xb453e0, straight-line)
typedef struct { unsigned char b[24]; } __S_f_b453e0;
__S_f_b453e0 main_f_b453e0() {
    __S_f_b453e0 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_b453f0  (orig 0xb453f0, straight-line)
typedef struct { unsigned char b[24]; } __S_f_b453f0;
__S_f_b453f0 main_f_b453f0() {
    __S_f_b453f0 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_b45400  (orig 0xb45400, straight-line)
typedef struct { unsigned char b[24]; } __S_f_b45400;
__S_f_b45400 main_f_b45400() {
    __S_f_b45400 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_b45880  (orig 0xb45880, straight-line)
typedef struct { unsigned char b[24]; } __S_f_b45880;
__S_f_b45880 main_f_b45880() {
    __S_f_b45880 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_b45890  (orig 0xb45890, straight-line)
typedef struct { unsigned char b[24]; } __S_f_b45890;
__S_f_b45890 main_f_b45890() {
    __S_f_b45890 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_b45af0  (orig 0xb45af0, ret_only)
void main_f_b45af0() {}

// sub_b45b00  (orig 0xb45b00, ret_only)
void main_f_b45b00() {}

// sub_b45b10  (orig 0xb45b10, ret_only)
void main_f_b45b10() {}

// sub_b45b20  (orig 0xb45b20, ret_only)
void main_f_b45b20() {}

// sub_b45b30  (orig 0xb45b30, mov_ret)
uint32_t main_f_b45b30() { return 1; }

// sub_b45b40  (orig 0xb45b40, ret_only)
void main_f_b45b40() {}

// sub_b45b50  (orig 0xb45b50, ret_only)
void main_f_b45b50() {}

// sub_b45b60  (orig 0xb45b60, ret_only)
void main_f_b45b60() {}

// sub_b45b70  (orig 0xb45b70, ret_only)
void main_f_b45b70() {}

// sub_b45b80  (orig 0xb45b80, mov_ret)
uint32_t main_f_b45b80() { return 0; }

// sub_b45b90  (orig 0xb45b90, ret_only)
void main_f_b45b90() {}

// sub_b45ba0  (orig 0xb45ba0, ret_only)
void main_f_b45ba0() {}

// sub_b45bb0  (orig 0xb45bb0, mov_ret)
uint32_t main_f_b45bb0() { return 1; }

// sub_b45bc0  (orig 0xb45bc0, mov_ret)
uint64_t main_f_b45bc0() { return 0; }

// sub_b45bd0  (orig 0xb45bd0, mov_ret)
uint64_t main_f_b45bd0() { return 0; }

// sub_b46310  (orig 0xb46310, ret_only)
void main_f_b46310() {}

// sub_b46a10  (orig 0xb46a10, indirect-tailcall)
void main_f_b46a10(void* a0, uint32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 144));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 232)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 144))), ((uintptr_t)((((uint32_t)a1)) & (1))));
}

// sub_b47a50  (orig 0xb47a50, indirect-tailcall)
void main_f_b47a50(void* a0, uint32_t a1, uint64_t a2, uint64_t a3, uint64_t a4, uint32_t a5) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 144));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 272)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 144))), ((uintptr_t)((((uint32_t)a1)) & (1))), ((uintptr_t)(a2)), ((uintptr_t)(a3)), ((uintptr_t)(a4)), ((uintptr_t)((((uint32_t)a5)) & (1))));
}

// sub_b47a70  (orig 0xb47a70, indirect-tailcall)
void main_f_b47a70(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 144));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 280)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 144))));
}

// sub_b47a80  (orig 0xb47a80, indirect-tailcall)
void main_f_b47a80(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 144));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 288)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 144))));
}

// sub_b47a90  (orig 0xb47a90, indirect-tailcall)
void main_f_b47a90(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 144));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 256)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 144))));
}

// sub_b488c0  (orig 0xb488c0, ret_only)
void main_f_b488c0() {}

// sub_b489a0  (orig 0xb489a0, ret_only)
void main_f_b489a0() {}

// sub_b48a80  (orig 0xb48a80, ret_only)
void main_f_b48a80() {}

// sub_b48dd0  (orig 0xb48dd0, ret_only)
void main_f_b48dd0() {}

// sub_b48e00  (orig 0xb48e00, ret_only)
void main_f_b48e00() {}

// sub_b48e80  (orig 0xb48e80, ret_only)
void main_f_b48e80() {}

// sub_b48f20  (orig 0xb48f20, ret_only)
void main_f_b48f20() {}

// sub_b48fd0  (orig 0xb48fd0, ret_only)
void main_f_b48fd0() {}

// sub_b49070  (orig 0xb49070, ret_only)
void main_f_b49070() {}

// sub_b498a0  (orig 0xb498a0, ret_only)
void main_f_b498a0() {}

// sub_b498b0  (orig 0xb498b0, setter)
void main_f_b498b0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_b498c0  (orig 0xb498c0, ret_only)
void main_f_b498c0() {}

// sub_b4a240  (orig 0xb4a240, straight)
void main_f_b4a240(void* a0) {
    void* p0 = (void*)((char*)(a0) + 420);
    void* p1 = (void*)((char*)(a0) + 412);
    *(uint64_t*)((char*)(p0)) = 0;
    *(uint64_t*)((char*)(p1)) = 0;
}

// sub_b4a380  (orig 0xb4a380, straight)
void main_f_b4a380(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 408) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_b4a450  (orig 0xb4a450, setter)
void main_f_b4a450(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_b4a780  (orig 0xb4a780, ret_only)
void main_f_b4a780() {}

// sub_b4ce10  (orig 0xb4ce10, mov_ret)
uint32_t main_f_b4ce10() { return 1; }

// sub_b4ce20  (orig 0xb4ce20, indexed-getter)
uint64_t main_f_b4ce20(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b4ce30  (orig 0xb4ce30, indexed-getter)
uint64_t main_f_b4ce30(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b4d2e0  (orig 0xb4d2e0, mov_ret)
uint32_t main_f_b4d2e0() { return 9; }

// sub_b4d2f0  (orig 0xb4d2f0, indexed-getter)
uint64_t main_f_b4d2f0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b4d300  (orig 0xb4d300, indexed-getter)
uint64_t main_f_b4d300(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b4dbe0  (orig 0xb4dbe0, mov_ret)
uint32_t main_f_b4dbe0() { return 28; }

// sub_b4dbf0  (orig 0xb4dbf0, indexed-getter)
uint64_t main_f_b4dbf0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b4dc00  (orig 0xb4dc00, indexed-getter)
uint64_t main_f_b4dc00(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b4e290  (orig 0xb4e290, mov_ret)
uint32_t main_f_b4e290() { return 28; }

// sub_b4e2a0  (orig 0xb4e2a0, indexed-getter)
uint64_t main_f_b4e2a0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b4e2b0  (orig 0xb4e2b0, indexed-getter)
uint64_t main_f_b4e2b0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b4e700  (orig 0xb4e700, mov_ret)
uint32_t main_f_b4e700() { return 8; }

// sub_b4e710  (orig 0xb4e710, indexed-getter)
uint64_t main_f_b4e710(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b4e720  (orig 0xb4e720, indexed-getter)
uint64_t main_f_b4e720(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b4ed80  (orig 0xb4ed80, mov_ret)
uint32_t main_f_b4ed80() { return 8; }

// sub_b4ed90  (orig 0xb4ed90, indexed-getter)
uint64_t main_f_b4ed90(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b4eda0  (orig 0xb4eda0, indexed-getter)
uint64_t main_f_b4eda0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b4f640  (orig 0xb4f640, mov_ret)
uint32_t main_f_b4f640() { return 28; }

// sub_b4f650  (orig 0xb4f650, indexed-getter)
uint64_t main_f_b4f650(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b4f660  (orig 0xb4f660, indexed-getter)
uint64_t main_f_b4f660(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b4fcf0  (orig 0xb4fcf0, mov_ret)
uint32_t main_f_b4fcf0() { return 28; }

// sub_b4fd00  (orig 0xb4fd00, indexed-getter)
uint64_t main_f_b4fd00(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b4fd10  (orig 0xb4fd10, indexed-getter)
uint64_t main_f_b4fd10(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b50110  (orig 0xb50110, mov_ret)
uint32_t main_f_b50110() { return 7; }

// sub_b50120  (orig 0xb50120, indexed-getter)
uint64_t main_f_b50120(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b50130  (orig 0xb50130, indexed-getter)
uint64_t main_f_b50130(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b50710  (orig 0xb50710, mov_ret)
uint32_t main_f_b50710() { return 7; }

// sub_b50720  (orig 0xb50720, indexed-getter)
uint64_t main_f_b50720(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b50730  (orig 0xb50730, indexed-getter)
uint64_t main_f_b50730(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b50d10  (orig 0xb50d10, mov_ret)
uint32_t main_f_b50d10() { return 7; }

// sub_b50d20  (orig 0xb50d20, indexed-getter)
uint64_t main_f_b50d20(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b50d30  (orig 0xb50d30, indexed-getter)
uint64_t main_f_b50d30(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b513d0  (orig 0xb513d0, mov_ret)
uint32_t main_f_b513d0() { return 4; }

// sub_b513e0  (orig 0xb513e0, indexed-getter)
uint64_t main_f_b513e0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b513f0  (orig 0xb513f0, indexed-getter)
uint64_t main_f_b513f0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b518b0  (orig 0xb518b0, mov_ret)
uint32_t main_f_b518b0() { return 4; }

// sub_b518c0  (orig 0xb518c0, indexed-getter)
uint64_t main_f_b518c0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b518d0  (orig 0xb518d0, indexed-getter)
uint64_t main_f_b518d0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b51d00  (orig 0xb51d00, mov_ret)
uint32_t main_f_b51d00() { return 3; }

// sub_b51d10  (orig 0xb51d10, indexed-getter)
uint64_t main_f_b51d10(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b51d20  (orig 0xb51d20, indexed-getter)
uint64_t main_f_b51d20(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b52150  (orig 0xb52150, mov_ret)
uint32_t main_f_b52150() { return 3; }

// sub_b52160  (orig 0xb52160, indexed-getter)
uint64_t main_f_b52160(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b52170  (orig 0xb52170, indexed-getter)
uint64_t main_f_b52170(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b526b0  (orig 0xb526b0, mov_ret)
uint32_t main_f_b526b0() { return 20; }

// sub_b526c0  (orig 0xb526c0, indexed-getter)
uint64_t main_f_b526c0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b526d0  (orig 0xb526d0, indexed-getter)
uint64_t main_f_b526d0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b530e0  (orig 0xb530e0, mov_ret)
uint32_t main_f_b530e0() { return 20; }

// sub_b530f0  (orig 0xb530f0, indexed-getter)
uint64_t main_f_b530f0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b53100  (orig 0xb53100, indexed-getter)
uint64_t main_f_b53100(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b53ad0  (orig 0xb53ad0, mov_ret)
uint32_t main_f_b53ad0() { return 16; }

// sub_b53ae0  (orig 0xb53ae0, indexed-getter)
uint64_t main_f_b53ae0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b53af0  (orig 0xb53af0, indexed-getter)
uint64_t main_f_b53af0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b54420  (orig 0xb54420, mov_ret)
uint32_t main_f_b54420() { return 20; }

// sub_b54430  (orig 0xb54430, indexed-getter)
uint64_t main_f_b54430(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b54440  (orig 0xb54440, indexed-getter)
uint64_t main_f_b54440(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b54e50  (orig 0xb54e50, mov_ret)
uint32_t main_f_b54e50() { return 20; }

// sub_b54e60  (orig 0xb54e60, indexed-getter)
uint64_t main_f_b54e60(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b54e70  (orig 0xb54e70, indexed-getter)
uint64_t main_f_b54e70(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b55840  (orig 0xb55840, mov_ret)
uint32_t main_f_b55840() { return 16; }

// sub_b55850  (orig 0xb55850, indexed-getter)
uint64_t main_f_b55850(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b55860  (orig 0xb55860, indexed-getter)
uint64_t main_f_b55860(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b55fb0  (orig 0xb55fb0, mov_ret)
uint32_t main_f_b55fb0() { return 1; }

// sub_b55fc0  (orig 0xb55fc0, indexed-getter)
uint64_t main_f_b55fc0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_b55fd0  (orig 0xb55fd0, indexed-getter)
uint64_t main_f_b55fd0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_b57170  (orig 0xb57170, getter)
uint64_t main_f_b57170(void* a0) { return *(uint64_t*)((char*)(a0) + 576); }

// sub_b57180  (orig 0xb57180, getter)
uint64_t main_f_b57180(void* a0) { return *(uint64_t*)((char*)(a0) + 584); }

// sub_b571b0  (orig 0xb571b0, getter)
uint64_t main_f_b571b0(void* a0) { return *(uint64_t*)((char*)(a0) + 592); }

// sub_b571c0  (orig 0xb571c0, getter)
uint64_t main_f_b571c0(void* a0) { return *(uint64_t*)((char*)(a0) + 600); }

// sub_b571d0  (orig 0xb571d0, getter)
uint64_t main_f_b571d0(void* a0) { return *(uint64_t*)((char*)(a0) + 608); }

// sub_b571e0  (orig 0xb571e0, getter)
uint64_t main_f_b571e0(void* a0) { return *(uint64_t*)((char*)(a0) + 616); }

// sub_b571f0  (orig 0xb571f0, getter)
uint64_t main_f_b571f0(void* a0) { return *(uint64_t*)((char*)(a0) + 624); }

// sub_b57200  (orig 0xb57200, getter)
uint64_t main_f_b57200(void* a0) { return *(uint64_t*)((char*)(a0) + 632); }

// sub_b57210  (orig 0xb57210, getter)
uint64_t main_f_b57210(void* a0) { return *(uint64_t*)((char*)(a0) + 640); }

// sub_b572c0  (orig 0xb572c0, ret_only)
void main_f_b572c0() {}

// sub_b572d0  (orig 0xb572d0, copy2)
void main_f_b572d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b572e0  (orig 0xb572e0, copy2)
void main_f_b572e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b57af0  (orig 0xb57af0, ptr_add)
void* main_f_b57af0(void* a0) { return (char*)a0 + 384; }

// sub_b58170  (orig 0xb58170, strlit-ret)
const char *main_f_b58170() { static char g_f_b58170[1]; __asm__ volatile("" ::: "memory"); return g_f_b58170; }

// sub_b58460  (orig 0xb58460, strlit-ret)
const char *main_f_b58460() { static char g_f_b58460[1]; __asm__ volatile("" ::: "memory"); return g_f_b58460; }

// sub_b5af10  (orig 0xb5af10, ret_only)
void main_f_b5af10() {}

// sub_b5af20  (orig 0xb5af20, ret_only)
void main_f_b5af20() {}

// sub_b5af30  (orig 0xb5af30, ret_only)
void main_f_b5af30() {}

// sub_b5b310  (orig 0xb5b310, ret_only)
void main_f_b5b310() {}

// sub_b5b320  (orig 0xb5b320, ret_only)
void main_f_b5b320() {}

// sub_b5b330  (orig 0xb5b330, ret_only)
void main_f_b5b330() {}

// sub_b5b420  (orig 0xb5b420, ret_only)
void main_f_b5b420() {}

// sub_b5b430  (orig 0xb5b430, copy2)
void main_f_b5b430(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b440  (orig 0xb5b440, copy2)
void main_f_b5b440(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b530  (orig 0xb5b530, ret_only)
void main_f_b5b530() {}

// sub_b5b540  (orig 0xb5b540, copy2)
void main_f_b5b540(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b550  (orig 0xb5b550, copy2)
void main_f_b5b550(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b640  (orig 0xb5b640, ret_only)
void main_f_b5b640() {}

// sub_b5b650  (orig 0xb5b650, copy2)
void main_f_b5b650(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b660  (orig 0xb5b660, copy2)
void main_f_b5b660(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b750  (orig 0xb5b750, ret_only)
void main_f_b5b750() {}

// sub_b5b760  (orig 0xb5b760, copy2)
void main_f_b5b760(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b770  (orig 0xb5b770, copy2)
void main_f_b5b770(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b860  (orig 0xb5b860, ret_only)
void main_f_b5b860() {}

// sub_b5b870  (orig 0xb5b870, copy2)
void main_f_b5b870(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b880  (orig 0xb5b880, copy2)
void main_f_b5b880(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b970  (orig 0xb5b970, ret_only)
void main_f_b5b970() {}

// sub_b5b980  (orig 0xb5b980, copy2)
void main_f_b5b980(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b990  (orig 0xb5b990, copy2)
void main_f_b5b990(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5ba80  (orig 0xb5ba80, ret_only)
void main_f_b5ba80() {}

// sub_b5ba90  (orig 0xb5ba90, copy2)
void main_f_b5ba90(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5baa0  (orig 0xb5baa0, copy2)
void main_f_b5baa0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bb90  (orig 0xb5bb90, ret_only)
void main_f_b5bb90() {}

// sub_b5bba0  (orig 0xb5bba0, copy2)
void main_f_b5bba0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bbb0  (orig 0xb5bbb0, copy2)
void main_f_b5bbb0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bca0  (orig 0xb5bca0, ret_only)
void main_f_b5bca0() {}

// sub_b5bcb0  (orig 0xb5bcb0, copy2)
void main_f_b5bcb0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bcc0  (orig 0xb5bcc0, copy2)
void main_f_b5bcc0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bdb0  (orig 0xb5bdb0, ret_only)
void main_f_b5bdb0() {}

// sub_b5bdc0  (orig 0xb5bdc0, copy2)
void main_f_b5bdc0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bdd0  (orig 0xb5bdd0, copy2)
void main_f_b5bdd0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bec0  (orig 0xb5bec0, ret_only)
void main_f_b5bec0() {}

// sub_b5bed0  (orig 0xb5bed0, copy2)
void main_f_b5bed0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bee0  (orig 0xb5bee0, copy2)
void main_f_b5bee0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bfd0  (orig 0xb5bfd0, ret_only)
void main_f_b5bfd0() {}

// sub_b5bfe0  (orig 0xb5bfe0, copy2)
void main_f_b5bfe0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bff0  (orig 0xb5bff0, copy2)
void main_f_b5bff0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5c740  (orig 0xb5c740, ret_only)
void main_f_b5c740() {}

// sub_b5c750  (orig 0xb5c750, ret_only)
void main_f_b5c750() {}

// sub_b5c760  (orig 0xb5c760, ret_only)
void main_f_b5c760() {}

// sub_b5ceb0  (orig 0xb5ceb0, ret_only)
void main_f_b5ceb0() {}

// sub_b5cec0  (orig 0xb5cec0, ret_only)
void main_f_b5cec0() {}

// sub_b5ced0  (orig 0xb5ced0, ret_only)
void main_f_b5ced0() {}

// sub_b5cfe0  (orig 0xb5cfe0, ret_only)
void main_f_b5cfe0() {}

// sub_b5cff0  (orig 0xb5cff0, ret_only)
void main_f_b5cff0() {}

// sub_b5d000  (orig 0xb5d000, ret_only)
void main_f_b5d000() {}

// sub_b5d110  (orig 0xb5d110, ret_only)
void main_f_b5d110() {}

// sub_b5d120  (orig 0xb5d120, ret_only)
void main_f_b5d120() {}

// sub_b5d130  (orig 0xb5d130, ret_only)
void main_f_b5d130() {}

// sub_b5d760  (orig 0xb5d760, ret_only)
void main_f_b5d760() {}

// sub_b5d770  (orig 0xb5d770, ret_only)
void main_f_b5d770() {}

// sub_b5d780  (orig 0xb5d780, ret_only)
void main_f_b5d780() {}

// sub_b5d820  (orig 0xb5d820, ret_only)
void main_f_b5d820() {}

// sub_b5d830  (orig 0xb5d830, ret_only)
void main_f_b5d830() {}

// sub_b5d840  (orig 0xb5d840, ret_only)
void main_f_b5d840() {}

// sub_b6f890  (orig 0xb6f890, ret_only)
void main_f_b6f890() {}

// sub_b6f8a0  (orig 0xb6f8a0, copy2)
void main_f_b6f8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b6f8b0  (orig 0xb6f8b0, copy2)
void main_f_b6f8b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b6fb40  (orig 0xb6fb40, getter)
uint8_t main_f_b6fb40(void* a0) { return *(uint8_t*)((char*)(a0) + 5); }

// sub_b6fb50  (orig 0xb6fb50, setter)
void main_f_b6fb50(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 5) = a1; }

// sub_b6fb60  (orig 0xb6fb60, copy2)
void main_f_b6fb60(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1)); }

// sub_b70ea0  (orig 0xb70ea0, ret_only)
void main_f_b70ea0() {}

// sub_b73f00  (orig 0xb73f00, straight-line)
void* main_f_b73f00(void* a0, uint32_t a1) { return ((char *)(char*)(a0) + 96 + (uintptr_t)(((int64_t)(((int32_t)(((uint32_t)a1)))))) * 32); }

// sub_b744c0  (orig 0xb744c0, strlit-ret)
const char *main_f_b744c0() { static char g_f_b744c0[1]; __asm__ volatile("" ::: "memory"); return g_f_b744c0; }

// sub_b74840  (orig 0xb74840, strlit-ret)
const char *main_f_b74840() { static char g_f_b74840[1]; __asm__ volatile("" ::: "memory"); return g_f_b74840; }

// sub_b75640  (orig 0xb75640, setter-chain-zero)
void main_f_b75640(void* a0) {
    struct u64x2 { uint64_t a, b; };
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

// sub_b75f00  (orig 0xb75f00, getter)
uint64_t main_f_b75f00(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_b76130  (orig 0xb76130, compare)
bool main_f_b76130(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 120)) == (uint64_t)(4); }

// sub_b76140  (orig 0xb76140, compare)
bool main_f_b76140(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 120)) == (uint64_t)(0); }

// sub_b76150  (orig 0xb76150, compare-pred)
bool main_f_b76150(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 120) | 4)) == (uint32_t)(4); }

// sub_b765d0  (orig 0xb765d0, ret_only)
void main_f_b765d0() {}

// sub_b765e0  (orig 0xb765e0, ret_only)
void main_f_b765e0() {}

// sub_b765f0  (orig 0xb765f0, ret_only)
void main_f_b765f0() {}

// sub_b76600  (orig 0xb76600, ret_only)
void main_f_b76600() {}

// sub_b76610  (orig 0xb76610, ret_only)
void main_f_b76610() {}

// sub_b76620  (orig 0xb76620, ret_only)
void main_f_b76620() {}

// sub_b76630  (orig 0xb76630, mov_ret)
uint32_t main_f_b76630() { return 1; }

// sub_b77330  (orig 0xb77330, getter)
uint64_t main_f_b77330(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_b77340  (orig 0xb77340, getter)
uint64_t main_f_b77340(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_b79510  (orig 0xb79510, getter)
uint64_t main_f_b79510(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_b79e00  (orig 0xb79e00, ret_only)
void main_f_b79e00() {}

// sub_b7a140  (orig 0xb7a140, ret_only)
void main_f_b7a140() {}

// sub_b7c630  (orig 0xb7c630, straight-line)
void main_f_b7c630(void* a0) {
    *(uint32_t*)((char*)(a0) + 80) = ((*(uint32_t*)((char*)(a0) + 80)) + (1)) - (((((int32_t)((*(uint32_t*)((char*)(a0) + 80)) + (1)))) / (((int32_t)(*(uint32_t*)((char*)(a0) + 8))))) * (*(uint32_t*)((char*)(a0) + 8)));
}

// sub_b7e3c0  (orig 0xb7e3c0, getter)
uint32_t main_f_b7e3c0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_b7f2f0  (orig 0xb7f2f0, getter)
uint64_t main_f_b7f2f0(void* a0) { return *(uint64_t*)((char*)(a0) + 200); }

// sub_b80690  (orig 0xb80690, setter)
void main_f_b80690(void* a0) { *(uint32_t*)((char*)(a0) + 120) = 0; }

// sub_b80fd0  (orig 0xb80fd0, ret_only)
void main_f_b80fd0() {}

// sub_b80fe0  (orig 0xb80fe0, copy2)
void main_f_b80fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b80ff0  (orig 0xb80ff0, copy2)
void main_f_b80ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b81210  (orig 0xb81210, setter)
void main_f_b81210(void* a0) { *(uint32_t*)((char*)(a0) + 120) = 0; }

// sub_b839f0  (orig 0xb839f0, strlit-ret)
const char *main_f_b839f0() { static char g_f_b839f0[1]; __asm__ volatile("" ::: "memory"); return g_f_b839f0; }

// sub_b83d50  (orig 0xb83d50, strlit-ret)
const char *main_f_b83d50() { static char g_f_b83d50[1]; __asm__ volatile("" ::: "memory"); return g_f_b83d50; }

// sub_b86230  (orig 0xb86230, ret_only)
void main_f_b86230() {}

// sub_b864c0  (orig 0xb864c0, copy2)
void main_f_b864c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b864d0  (orig 0xb864d0, copy2)
void main_f_b864d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b8a620  (orig 0xb8a620, straight)
uint64_t main_f_b8a620(void* a0, int32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a1)) * 8)));
    return *(uint64_t*)((char*)(p0) + 304);
}

// sub_b8a630  (orig 0xb8a630, getter)
uint64_t main_f_b8a630(void* a0) { return *(uint64_t*)((char*)(a0) + 320); }

// sub_b8b8c0  (orig 0xb8b8c0, ret_only)
void main_f_b8b8c0() {}

// sub_b8b8d0  (orig 0xb8b8d0, copy2)
void main_f_b8b8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b8b8e0  (orig 0xb8b8e0, copy2)
void main_f_b8b8e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b8bc20  (orig 0xb8bc20, ret_only)
void main_f_b8bc20() {}

// sub_b8bc30  (orig 0xb8bc30, copy2)
void main_f_b8bc30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b8bc40  (orig 0xb8bc40, copy2)
void main_f_b8bc40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b8bf20  (orig 0xb8bf20, ret_only)
void main_f_b8bf20() {}

// sub_b8bf30  (orig 0xb8bf30, copy2)
void main_f_b8bf30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b8bf40  (orig 0xb8bf40, copy2)
void main_f_b8bf40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b918e0  (orig 0xb918e0, indirect-tailcall)
void main_f_b918e0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 88)))))(((uintptr_t)(a0)));
}

// sub_b918f0  (orig 0xb918f0, ptr_add)
void* main_f_b918f0(void* a0) { return (char*)a0 + 472; }

// sub_b99170  (orig 0xb99170, ret_only)
void main_f_b99170() {}

// sub_b99180  (orig 0xb99180, ret_only)
void main_f_b99180() {}

// sub_b99190  (orig 0xb99190, ret_only)
void main_f_b99190() {}

// sub_b99210  (orig 0xb99210, ret_only)
void main_f_b99210() {}

// sub_b995a0  (orig 0xb995a0, ret_only)
void main_f_b995a0() {}

// sub_b99930  (orig 0xb99930, ret_only)
void main_f_b99930() {}

// sub_b99e00  (orig 0xb99e00, ret_only)
void main_f_b99e00() {}

// sub_b9a030  (orig 0xb9a030, ret_only)
void main_f_b9a030() {}

// sub_b9a260  (orig 0xb9a260, ret_only)
void main_f_b9a260() {}

// sub_b9a340  (orig 0xb9a340, ret_only)
void main_f_b9a340() {}

// sub_b9a3c0  (orig 0xb9a3c0, ret_only)
void main_f_b9a3c0() {}

// sub_ba0070  (orig 0xba0070, ret_only)
void main_f_ba0070() {}

// sub_ba0100  (orig 0xba0100, ret_only)
void main_f_ba0100() {}

// sub_ba0110  (orig 0xba0110, copy2)
void main_f_ba0110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba0120  (orig 0xba0120, copy2)
void main_f_ba0120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba0240  (orig 0xba0240, ret_only)
void main_f_ba0240() {}

// sub_ba0250  (orig 0xba0250, struct-copy)
void main_f_ba0250(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ba0270  (orig 0xba0270, struct-copy)
void main_f_ba0270(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ba0390  (orig 0xba0390, ret_only)
void main_f_ba0390() {}

// sub_ba03a0  (orig 0xba03a0, copy2)
void main_f_ba03a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba03b0  (orig 0xba03b0, copy2)
void main_f_ba03b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba04c0  (orig 0xba04c0, ret_only)
void main_f_ba04c0() {}

// sub_ba04d0  (orig 0xba04d0, copy2)
void main_f_ba04d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba04e0  (orig 0xba04e0, copy2)
void main_f_ba04e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba0a70  (orig 0xba0a70, mov_ret)
uint32_t main_f_ba0a70() { return 1; }

// sub_ba0a80  (orig 0xba0a80, ret_only)
void main_f_ba0a80() {}

// sub_ba0a90  (orig 0xba0a90, ret_only)
void main_f_ba0a90() {}

// sub_ba3630  (orig 0xba3630, ret_only)
void main_f_ba3630() {}

// sub_ba4030  (orig 0xba4030, getter)
uint64_t main_f_ba4030(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_ba41a0  (orig 0xba41a0, mov_ret)
uint32_t main_f_ba41a0() { return 1; }

// sub_ba41b0  (orig 0xba41b0, indexed-getter)
uint64_t main_f_ba41b0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_ba41c0  (orig 0xba41c0, indexed-getter)
uint64_t main_f_ba41c0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_ba7260  (orig 0xba7260, ret_only)
void main_f_ba7260() {}

// sub_ba7270  (orig 0xba7270, copy2)
void main_f_ba7270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba7280  (orig 0xba7280, copy2)
void main_f_ba7280(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba7a30  (orig 0xba7a30, ret_only)
void main_f_ba7a30() {}

// sub_ba7a40  (orig 0xba7a40, ret_only)
void main_f_ba7a40() {}

// sub_ba8de0  (orig 0xba8de0, guarded)
extern void callee_14e6d50();
uint64_t main_f_ba8de0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 1504));
    if (p0) {
        uint64_t f_ba8de0__r0 = ((uint64_t (*)(uintptr_t, uintptr_t))&callee_14e6d50)(((uintptr_t)(p0)), ((uintptr_t)(((uint64_t)a1))));
        return (f_ba8de0__r0) >> (32);
    }
    return 0;
}

// sub_bab600  (orig 0xbab600, mov_ret)
uint32_t main_f_bab600() { return 0; }

// sub_bad4d0  (orig 0xbad4d0, ret_only)
void main_f_bad4d0() {}

// sub_bad4e0  (orig 0xbad4e0, copy2)
void main_f_bad4e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bad4f0  (orig 0xbad4f0, copy2)
void main_f_bad4f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bad500  (orig 0xbad500, ret_only)
void main_f_bad500() {}

// sub_bad6f0  (orig 0xbad6f0, mov_ret)
uint32_t main_f_bad6f0() { return 0; }

// sub_bb0b60  (orig 0xbb0b60, ret_only)
void main_f_bb0b60() {}

// sub_bb0b70  (orig 0xbb0b70, copy2)
void main_f_bb0b70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb0b80  (orig 0xbb0b80, copy2)
void main_f_bb0b80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb0ba0  (orig 0xbb0ba0, ret_only)
void main_f_bb0ba0() {}

// sub_bb0bb0  (orig 0xbb0bb0, copy2)
void main_f_bb0bb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb0bc0  (orig 0xbb0bc0, copy2)
void main_f_bb0bc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb1020  (orig 0xbb1020, straight-line)
uint8_t main_f_bb1020(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0) + 224)) + ((((uint64_t)(((uint32_t)(((uint32_t)a1)))))) * (((uint64_t)(((uint32_t)(28))))))));
    return *(uint8_t*)((char*)(p0) + 24);
}

// sub_bb11a0  (orig 0xbb11a0, getter)
uint32_t main_f_bb11a0(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_bb1660  (orig 0xbb1660, ret_only)
void main_f_bb1660() {}

// sub_bb1670  (orig 0xbb1670, copy2)
void main_f_bb1670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb1680  (orig 0xbb1680, copy2)
void main_f_bb1680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb16a0  (orig 0xbb16a0, ret_only)
void main_f_bb16a0() {}

// sub_bb16b0  (orig 0xbb16b0, copy2)
void main_f_bb16b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb16c0  (orig 0xbb16c0, copy2)
void main_f_bb16c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb4070  (orig 0xbb4070, straight)
void main_f_bb4070(void* a0) {
    *(uint32_t*)((char*)(a0) + 432) = (((*(uint32_t*)((char*)(a0) + 432) == 12)) ? (6) : ((((*(uint32_t*)((char*)(a0) + 432) == 23)) ? (26) : (24))));
    *(uint8_t*)((char*)(a0) + 458) = 0;
}

// sub_bb40a0  (orig 0xbb40a0, straight)
void main_f_bb40a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 32) = (((*(uint32_t*)((char*)(a0) + 32) == 12)) ? (6) : ((((*(uint32_t*)((char*)(a0) + 32) == 23)) ? (26) : (24))));
    *(uint8_t*)((char*)(a0) + 58) = 0;
}

// sub_bb40d0  (orig 0xbb40d0, straight)
void* main_f_bb40d0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 432) = 26;
    *(uint8_t*)((char*)(p0) + 458) = 0;
    return a0;
}

// sub_bb40e0  (orig 0xbb40e0, straight)
void* main_f_bb40e0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 32) = 26;
    *(uint8_t*)((char*)(p0) + 58) = 0;
    return a0;
}

// sub_bb40f0  (orig 0xbb40f0, ret_only)
void main_f_bb40f0() {}

// sub_bb4100  (orig 0xbb4100, ret_only)
void main_f_bb4100() {}

// sub_bb4110  (orig 0xbb4110, straight)
void* main_f_bb4110(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 459) = (uint8_t)k0;
    return a0;
}

// sub_bb4120  (orig 0xbb4120, straight)
void* main_f_bb4120(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 51) = (uint8_t)k0;
    return a0;
}

// sub_bb4ce0  (orig 0xbb4ce0, ret_only)
void main_f_bb4ce0() {}

// sub_bb4cf0  (orig 0xbb4cf0, ret_only)
void main_f_bb4cf0() {}

// sub_bb4d00  (orig 0xbb4d00, ret_only)
void main_f_bb4d00() {}

// sub_bb4d10  (orig 0xbb4d10, ret_only)
void main_f_bb4d10() {}

// sub_bb4d20  (orig 0xbb4d20, ret_only)
void main_f_bb4d20() {}

// sub_bb4d30  (orig 0xbb4d30, ret_only)
void main_f_bb4d30() {}

// sub_bb54f0  (orig 0xbb54f0, straight)
void main_f_bb54f0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint32_t*)((char*)(p0) + 432) = (((*(uint8_t*)((char*)(p0) + 456) == 0)) ? (8) : (3));
}

// sub_bb5510  (orig 0xbb5510, ret_only)
void main_f_bb5510() {}

// sub_bb5520  (orig 0xbb5520, copy2)
void main_f_bb5520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5530  (orig 0xbb5530, copy2)
void main_f_bb5530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5600  (orig 0xbb5600, ret_only)
void main_f_bb5600() {}

// sub_bb5610  (orig 0xbb5610, copy2)
void main_f_bb5610(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5620  (orig 0xbb5620, copy2)
void main_f_bb5620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5630  (orig 0xbb5630, const-field-set)
void main_f_bb5630(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0))) + 432)) = 29; }

// sub_bb5640  (orig 0xbb5640, ret_only)
void main_f_bb5640() {}

// sub_bb5650  (orig 0xbb5650, copy2)
void main_f_bb5650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5660  (orig 0xbb5660, copy2)
void main_f_bb5660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5670  (orig 0xbb5670, const-field-set)
void main_f_bb5670(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0))) + 432)) = 10; }

// sub_bb5680  (orig 0xbb5680, ret_only)
void main_f_bb5680() {}

// sub_bb5690  (orig 0xbb5690, copy2)
void main_f_bb5690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb56a0  (orig 0xbb56a0, copy2)
void main_f_bb56a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb56b0  (orig 0xbb56b0, const-field-set)
void main_f_bb56b0(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0))) + 432)) = 17; }

// sub_bb56c0  (orig 0xbb56c0, ret_only)
void main_f_bb56c0() {}

// sub_bb56d0  (orig 0xbb56d0, copy2)
void main_f_bb56d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb56e0  (orig 0xbb56e0, copy2)
void main_f_bb56e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb56f0  (orig 0xbb56f0, const-field-set)
void main_f_bb56f0(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0))) + 432)) = 10; }

// sub_bb5700  (orig 0xbb5700, ret_only)
void main_f_bb5700() {}

// sub_bb5710  (orig 0xbb5710, copy2)
void main_f_bb5710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5720  (orig 0xbb5720, copy2)
void main_f_bb5720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb6c80  (orig 0xbb6c80, ret_only)
void main_f_bb6c80() {}

// sub_bb6d30  (orig 0xbb6d30, ret_only)
void main_f_bb6d30() {}

// sub_bb6d40  (orig 0xbb6d40, struct-copy)
void main_f_bb6d40(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_bb6d60  (orig 0xbb6d60, struct-copy)
void main_f_bb6d60(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_bb6e60  (orig 0xbb6e60, ret_only)
void main_f_bb6e60() {}

// sub_bb6e70  (orig 0xbb6e70, struct-copy)
void main_f_bb6e70(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_bb6e90  (orig 0xbb6e90, struct-copy)
void main_f_bb6e90(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_bb7190  (orig 0xbb7190, getter)
uint64_t main_f_bb7190(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_bb7b40  (orig 0xbb7b40, ret_only)
void main_f_bb7b40() {}

// sub_bb8690  (orig 0xbb8690, setter)
void main_f_bb8690(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_bb8d40  (orig 0xbb8d40, mov_ret)
uint32_t main_f_bb8d40() { return 1; }

// sub_bb8dc0  (orig 0xbb8dc0, indirect-tailcall)
void main_f_bb8dc0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_bb8df0  (orig 0xbb8df0, getter)
uint32_t main_f_bb8df0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_bb8e00  (orig 0xbb8e00, mov_ret)
uint32_t main_f_bb8e00() { return 1; }

// sub_bb9350  (orig 0xbb9350, setter)
void main_f_bb9350(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_bb98d0  (orig 0xbb98d0, mov_ret)
uint32_t main_f_bb98d0() { return 1; }

// sub_bb9950  (orig 0xbb9950, indirect-tailcall)
void main_f_bb9950(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_bb9980  (orig 0xbb9980, getter)
uint32_t main_f_bb9980(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_bb9990  (orig 0xbb9990, mov_ret)
uint32_t main_f_bb9990() { return 1; }

// sub_bb9e50  (orig 0xbb9e50, setter)
void main_f_bb9e50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_bb9fb0  (orig 0xbb9fb0, ret_only)
void main_f_bb9fb0() {}

// sub_bba060  (orig 0xbba060, ret_only)
void main_f_bba060() {}

// sub_bba070  (orig 0xbba070, mov_ret)
uint64_t main_f_bba070(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_bba080  (orig 0xbba080, straight)
uint32_t main_f_bba080(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_bba260  (orig 0xbba260, mov_ret)
uint32_t main_f_bba260() { return 1; }

// sub_bba2e0  (orig 0xbba2e0, indirect-tailcall)
void main_f_bba2e0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_bba310  (orig 0xbba310, getter)
uint32_t main_f_bba310(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_bba320  (orig 0xbba320, mov_ret)
uint32_t main_f_bba320() { return 1; }

// sub_bbcf30  (orig 0xbbcf30, ret_only)
void main_f_bbcf30() {}

// sub_bbcf40  (orig 0xbbcf40, copy2)
void main_f_bbcf40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbcf50  (orig 0xbbcf50, copy2)
void main_f_bbcf50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbcf70  (orig 0xbbcf70, ret_only)
void main_f_bbcf70() {}

// sub_bbcf80  (orig 0xbbcf80, copy2)
void main_f_bbcf80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbcf90  (orig 0xbbcf90, copy2)
void main_f_bbcf90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd0c0  (orig 0xbbd0c0, ret_only)
void main_f_bbd0c0() {}

// sub_bbd0d0  (orig 0xbbd0d0, copy2)
void main_f_bbd0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd0e0  (orig 0xbbd0e0, copy2)
void main_f_bbd0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd3c0  (orig 0xbbd3c0, ret_only)
void main_f_bbd3c0() {}

// sub_bbd3d0  (orig 0xbbd3d0, copy2)
void main_f_bbd3d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd3e0  (orig 0xbbd3e0, copy2)
void main_f_bbd3e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd520  (orig 0xbbd520, ret_only)
void main_f_bbd520() {}

// sub_bbd530  (orig 0xbbd530, copy2)
void main_f_bbd530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd540  (orig 0xbbd540, copy2)
void main_f_bbd540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd5d0  (orig 0xbbd5d0, ret_only)
void main_f_bbd5d0() {}

// sub_bbd5e0  (orig 0xbbd5e0, copy2)
void main_f_bbd5e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd5f0  (orig 0xbbd5f0, copy2)
void main_f_bbd5f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd710  (orig 0xbbd710, ret_only)
void main_f_bbd710() {}

// sub_bbd720  (orig 0xbbd720, copy2)
void main_f_bbd720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd730  (orig 0xbbd730, copy2)
void main_f_bbd730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd7c0  (orig 0xbbd7c0, ret_only)
void main_f_bbd7c0() {}

// sub_bbd7d0  (orig 0xbbd7d0, copy2)
void main_f_bbd7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd7e0  (orig 0xbbd7e0, copy2)
void main_f_bbd7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbf7f0  (orig 0xbbf7f0, ret_only)
void main_f_bbf7f0() {}

// sub_bbf800  (orig 0xbbf800, copy2)
void main_f_bbf800(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbf810  (orig 0xbbf810, copy2)
void main_f_bbf810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbf830  (orig 0xbbf830, ret_only)
void main_f_bbf830() {}

// sub_bbf840  (orig 0xbbf840, copy2)
void main_f_bbf840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbf850  (orig 0xbbf850, copy2)
void main_f_bbf850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbfa20  (orig 0xbbfa20, ret_only)
void main_f_bbfa20() {}

// sub_bbfa30  (orig 0xbbfa30, copy2)
void main_f_bbfa30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbfa40  (orig 0xbbfa40, copy2)
void main_f_bbfa40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbfa90  (orig 0xbbfa90, ret_only)
void main_f_bbfa90() {}

// sub_bbfaa0  (orig 0xbbfaa0, copy2)
void main_f_bbfaa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbfab0  (orig 0xbbfab0, copy2)
void main_f_bbfab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbfd00  (orig 0xbbfd00, ret_only)
void main_f_bbfd00() {}

// sub_bbfd10  (orig 0xbbfd10, copy2)
void main_f_bbfd10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbfd20  (orig 0xbbfd20, copy2)
void main_f_bbfd20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbfe60  (orig 0xbbfe60, ret_only)
void main_f_bbfe60() {}

// sub_bbff10  (orig 0xbbff10, ret_only)
void main_f_bbff10() {}

// sub_bbff20  (orig 0xbbff20, copy2)
void main_f_bbff20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbff30  (orig 0xbbff30, copy2)
void main_f_bbff30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0070  (orig 0xbc0070, ret_only)
void main_f_bc0070() {}

// sub_bc0080  (orig 0xbc0080, copy2)
void main_f_bc0080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0090  (orig 0xbc0090, copy2)
void main_f_bc0090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0120  (orig 0xbc0120, ret_only)
void main_f_bc0120() {}

// sub_bc0130  (orig 0xbc0130, copy2)
void main_f_bc0130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0140  (orig 0xbc0140, copy2)
void main_f_bc0140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0260  (orig 0xbc0260, ret_only)
void main_f_bc0260() {}

// sub_bc0270  (orig 0xbc0270, copy2)
void main_f_bc0270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0280  (orig 0xbc0280, copy2)
void main_f_bc0280(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0310  (orig 0xbc0310, ret_only)
void main_f_bc0310() {}

// sub_bc0320  (orig 0xbc0320, copy2)
void main_f_bc0320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0330  (orig 0xbc0330, copy2)
void main_f_bc0330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0a00  (orig 0xbc0a00, copy2)
void main_f_bc0a00(void* a0) { (*(uint8_t *)((char *)(*(void **)((char*)(a0) + 696)) + 2004)) = 0; }

// sub_bc5730  (orig 0xbc5730, straight)
void main_f_bc5730(void* a0) {
    *(uint32_t*)((char*)(a0) + 704) = 5;
    *(uint32_t*)((char*)(a0) + 708) = ((*(uint32_t*)((char*)(a0) + 800) == 2) ? 1 : 0);
}

// sub_bc7670  (orig 0xbc7670, ret_only)
void main_f_bc7670() {}

// sub_bc76c0  (orig 0xbc76c0, ret_only)
void main_f_bc76c0() {}

// sub_bc76d0  (orig 0xbc76d0, struct-copy)
void main_f_bc76d0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_bc76f0  (orig 0xbc76f0, struct-copy)
void main_f_bc76f0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_bc7a80  (orig 0xbc7a80, ret_only)
void main_f_bc7a80() {}

// sub_bc7a90  (orig 0xbc7a90, ret_only)
void main_f_bc7a90() {}

// sub_bc7b30  (orig 0xbc7b30, ret_only)
void main_f_bc7b30() {}

// sub_bc7b40  (orig 0xbc7b40, ret_only)
void main_f_bc7b40() {}

// sub_bc9de0  (orig 0xbc9de0, ret_only)
void main_f_bc9de0() {}

// sub_bc9df0  (orig 0xbc9df0, mov_ret)
uint32_t main_f_bc9df0() { return 1; }

// sub_bc9e70  (orig 0xbc9e70, ret_only)
void main_f_bc9e70() {}

// sub_bca050  (orig 0xbca050, copy2)
void main_f_bca050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bca060  (orig 0xbca060, copy2)
void main_f_bca060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bca310  (orig 0xbca310, ret_only)
void main_f_bca310() {}

// sub_bca4d0  (orig 0xbca4d0, ret_only)
void main_f_bca4d0() {}

// sub_bcaa80  (orig 0xbcaa80, copy2)
void main_f_bcaa80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcaa90  (orig 0xbcaa90, copy2)
void main_f_bcaa90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcaee0  (orig 0xbcaee0, ret_only)
void main_f_bcaee0() {}

// sub_bcafb0  (orig 0xbcafb0, copy2)
void main_f_bcafb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcafc0  (orig 0xbcafc0, copy2)
void main_f_bcafc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcb190  (orig 0xbcb190, ret_only)
void main_f_bcb190() {}

// sub_bcb1a0  (orig 0xbcb1a0, copy2)
void main_f_bcb1a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcb1b0  (orig 0xbcb1b0, copy2)
void main_f_bcb1b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcb730  (orig 0xbcb730, ret_only)
void main_f_bcb730() {}

// sub_bcb740  (orig 0xbcb740, copy2)
void main_f_bcb740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcb750  (orig 0xbcb750, copy2)
void main_f_bcb750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcb940  (orig 0xbcb940, ret_only)
void main_f_bcb940() {}

// sub_bcb950  (orig 0xbcb950, copy2)
void main_f_bcb950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcb960  (orig 0xbcb960, copy2)
void main_f_bcb960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcc660  (orig 0xbcc660, ret_only)
void main_f_bcc660() {}

// sub_bccc20  (orig 0xbccc20, copy2)
void main_f_bccc20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bccc30  (orig 0xbccc30, copy2)
void main_f_bccc30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bccce0  (orig 0xbccce0, ret_only)
void main_f_bccce0() {}

// sub_bcd070  (orig 0xbcd070, copy2)
void main_f_bcd070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd080  (orig 0xbcd080, copy2)
void main_f_bcd080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd140  (orig 0xbcd140, ret_only)
void main_f_bcd140() {}

// sub_bcd150  (orig 0xbcd150, copy2)
void main_f_bcd150(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd160  (orig 0xbcd160, copy2)
void main_f_bcd160(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd300  (orig 0xbcd300, ret_only)
void main_f_bcd300() {}

// sub_bcd580  (orig 0xbcd580, ret_only)
void main_f_bcd580() {}

// sub_bcd590  (orig 0xbcd590, copy2)
void main_f_bcd590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd5a0  (orig 0xbcd5a0, copy2)
void main_f_bcd5a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd700  (orig 0xbcd700, ret_only)
void main_f_bcd700() {}

// sub_bcd710  (orig 0xbcd710, copy2)
void main_f_bcd710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd720  (orig 0xbcd720, copy2)
void main_f_bcd720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcdaf0  (orig 0xbcdaf0, ret_only)
void main_f_bcdaf0() {}

// sub_bcde20  (orig 0xbcde20, copy2)
void main_f_bcde20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcde30  (orig 0xbcde30, copy2)
void main_f_bcde30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bce610  (orig 0xbce610, ret_only)
void main_f_bce610() {}

// sub_bce7c0  (orig 0xbce7c0, copy2)
void main_f_bce7c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bce7d0  (orig 0xbce7d0, copy2)
void main_f_bce7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcf000  (orig 0xbcf000, ret_only)
void main_f_bcf000() {}

// sub_bcf400  (orig 0xbcf400, copy2)
void main_f_bcf400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcf410  (orig 0xbcf410, copy2)
void main_f_bcf410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcf430  (orig 0xbcf430, ret_only)
void main_f_bcf430() {}

// sub_bcf600  (orig 0xbcf600, copy2)
void main_f_bcf600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcf610  (orig 0xbcf610, copy2)
void main_f_bcf610(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd1180  (orig 0xbd1180, ret_only)
void main_f_bd1180() {}

// sub_bd1190  (orig 0xbd1190, copy2)
void main_f_bd1190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd11a0  (orig 0xbd11a0, copy2)
void main_f_bd11a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd1720  (orig 0xbd1720, ret_only)
void main_f_bd1720() {}

// sub_bd1730  (orig 0xbd1730, copy2)
void main_f_bd1730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd1740  (orig 0xbd1740, copy2)
void main_f_bd1740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd18e0  (orig 0xbd18e0, ret_only)
void main_f_bd18e0() {}

// sub_bd1bb0  (orig 0xbd1bb0, ret_only)
void main_f_bd1bb0() {}

// sub_bd1bc0  (orig 0xbd1bc0, copy2)
void main_f_bd1bc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd1bd0  (orig 0xbd1bd0, copy2)
void main_f_bd1bd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd1bf0  (orig 0xbd1bf0, ret_only)
void main_f_bd1bf0() {}

// sub_bd1d90  (orig 0xbd1d90, copy2)
void main_f_bd1d90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd1da0  (orig 0xbd1da0, copy2)
void main_f_bd1da0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd2170  (orig 0xbd2170, ret_only)
void main_f_bd2170() {}

// sub_bd2480  (orig 0xbd2480, copy2)
void main_f_bd2480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd2490  (orig 0xbd2490, copy2)
void main_f_bd2490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd3d90  (orig 0xbd3d90, ret_only)
void main_f_bd3d90() {}

// sub_bd4770  (orig 0xbd4770, copy2)
void main_f_bd4770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd4780  (orig 0xbd4780, copy2)
void main_f_bd4780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd47a0  (orig 0xbd47a0, ret_only)
void main_f_bd47a0() {}

// sub_bd4c20  (orig 0xbd4c20, copy2)
void main_f_bd4c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd4c30  (orig 0xbd4c30, copy2)
void main_f_bd4c30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd53b0  (orig 0xbd53b0, ret_only)
void main_f_bd53b0() {}

// sub_bd5c60  (orig 0xbd5c60, copy2)
void main_f_bd5c60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd5c70  (orig 0xbd5c70, copy2)
void main_f_bd5c70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd5c90  (orig 0xbd5c90, ret_only)
void main_f_bd5c90() {}

// sub_bd5f30  (orig 0xbd5f30, copy2)
void main_f_bd5f30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd5f40  (orig 0xbd5f40, copy2)
void main_f_bd5f40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd62e0  (orig 0xbd62e0, ret_only)
void main_f_bd62e0() {}

// sub_bd6530  (orig 0xbd6530, copy2)
void main_f_bd6530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd6540  (orig 0xbd6540, copy2)
void main_f_bd6540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd74c0  (orig 0xbd74c0, ret_only)
void main_f_bd74c0() {}

// sub_bd7690  (orig 0xbd7690, copy2)
void main_f_bd7690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd76a0  (orig 0xbd76a0, copy2)
void main_f_bd76a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd7770  (orig 0xbd7770, ret_only)
void main_f_bd7770() {}

// sub_bd7780  (orig 0xbd7780, copy2)
void main_f_bd7780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd7790  (orig 0xbd7790, copy2)
void main_f_bd7790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd7b80  (orig 0xbd7b80, ret_only)
void main_f_bd7b80() {}

// sub_bd7ca0  (orig 0xbd7ca0, copy2)
void main_f_bd7ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd7cb0  (orig 0xbd7cb0, copy2)
void main_f_bd7cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd81d0  (orig 0xbd81d0, ret_only)
void main_f_bd81d0() {}

// sub_bd81e0  (orig 0xbd81e0, copy2)
void main_f_bd81e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd81f0  (orig 0xbd81f0, copy2)
void main_f_bd81f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8240  (orig 0xbd8240, ret_only)
void main_f_bd8240() {}

// sub_bd8250  (orig 0xbd8250, copy2)
void main_f_bd8250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8260  (orig 0xbd8260, copy2)
void main_f_bd8260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8290  (orig 0xbd8290, ret_only)
void main_f_bd8290() {}

// sub_bd82a0  (orig 0xbd82a0, copy2)
void main_f_bd82a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd82b0  (orig 0xbd82b0, copy2)
void main_f_bd82b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd82f0  (orig 0xbd82f0, ret_only)
void main_f_bd82f0() {}

// sub_bd8300  (orig 0xbd8300, copy2)
void main_f_bd8300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8310  (orig 0xbd8310, copy2)
void main_f_bd8310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8830  (orig 0xbd8830, ret_only)
void main_f_bd8830() {}

// sub_bd8840  (orig 0xbd8840, copy2)
void main_f_bd8840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8850  (orig 0xbd8850, copy2)
void main_f_bd8850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8920  (orig 0xbd8920, ret_only)
void main_f_bd8920() {}

// sub_bd8930  (orig 0xbd8930, copy2)
void main_f_bd8930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8940  (orig 0xbd8940, copy2)
void main_f_bd8940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8a10  (orig 0xbd8a10, ret_only)
void main_f_bd8a10() {}

// sub_bd8a20  (orig 0xbd8a20, copy2)
void main_f_bd8a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8a30  (orig 0xbd8a30, copy2)
void main_f_bd8a30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8f60  (orig 0xbd8f60, ret_only)
void main_f_bd8f60() {}

// sub_bd90e0  (orig 0xbd90e0, copy2)
void main_f_bd90e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd90f0  (orig 0xbd90f0, copy2)
void main_f_bd90f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd98b0  (orig 0xbd98b0, ret_only)
void main_f_bd98b0() {}

// sub_bd9da0  (orig 0xbd9da0, getter-chain)
uint8x16_t main_f_bd9da0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return vld1q_u8((const uint8_t *)((char*)(t0) + 880));
}

// sub_bd9db0  (orig 0xbd9db0, ret_only)
void main_f_bd9db0() {}

// sub_bd9dc0  (orig 0xbd9dc0, copy2)
void main_f_bd9dc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd9dd0  (orig 0xbd9dd0, copy2)
void main_f_bd9dd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd9de0  (orig 0xbd9de0, copy2)
void main_f_bd9de0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd9df0  (orig 0xbd9df0, copy2)
void main_f_bd9df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd9f30  (orig 0xbd9f30, ret_only)
void main_f_bd9f30() {}

// sub_bd9f40  (orig 0xbd9f40, copy2)
void main_f_bd9f40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd9f50  (orig 0xbd9f50, copy2)
void main_f_bd9f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bda550  (orig 0xbda550, ret_only)
void main_f_bda550() {}

// sub_bda850  (orig 0xbda850, copy2)
void main_f_bda850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bda860  (orig 0xbda860, copy2)
void main_f_bda860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdaf00  (orig 0xbdaf00, ret_only)
void main_f_bdaf00() {}

// sub_bdb3f0  (orig 0xbdb3f0, getter-chain)
float main_f_bdb3f0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 856);
}

// sub_bdb400  (orig 0xbdb400, ret_only)
void main_f_bdb400() {}

// sub_bdb410  (orig 0xbdb410, copy2)
void main_f_bdb410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdb420  (orig 0xbdb420, copy2)
void main_f_bdb420(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdb430  (orig 0xbdb430, copy2)
void main_f_bdb430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdb440  (orig 0xbdb440, copy2)
void main_f_bdb440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdb4d0  (orig 0xbdb4d0, ret_only)
void main_f_bdb4d0() {}

// sub_bdb4e0  (orig 0xbdb4e0, copy2)
void main_f_bdb4e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdb4f0  (orig 0xbdb4f0, copy2)
void main_f_bdb4f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdbaf0  (orig 0xbdbaf0, ret_only)
void main_f_bdbaf0() {}

// sub_bdbdf0  (orig 0xbdbdf0, copy2)
void main_f_bdbdf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdbe00  (orig 0xbdbe00, copy2)
void main_f_bdbe00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdc410  (orig 0xbdc410, ret_only)
void main_f_bdc410() {}

// sub_bdc770  (orig 0xbdc770, getter-chain)
uint8_t main_f_bdc770(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 848); }

// sub_bdc780  (orig 0xbdc780, ret_only)
void main_f_bdc780() {}

// sub_bdc790  (orig 0xbdc790, copy2)
void main_f_bdc790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdc7a0  (orig 0xbdc7a0, copy2)
void main_f_bdc7a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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
void* main_f_be55a0(void* a0) {
    uint32_t k0 = 2;
    *(uint64_t*)((char*)(a0) + 156) = (uint64_t)k0;
    return a0;
}

// sub_be55b0  (orig 0xbe55b0, straight)
void* main_f_be55b0(void* a0) {
    uint32_t k0 = 3;
    *(uint64_t*)((char*)(a0) + 156) = (uint64_t)k0;
    return a0;
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
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t *)((char *)&r + 0) = *(uint32_t*)((char*)(a0) + 852);
    *(uint16_t *)((char *)&r + 4) = *(uint16_t*)((char*)(p0) + 856);
    *(uint32_t *)((char *)&r + 8) = *(uint32_t*)((char*)(p0) + 860);
    *(uint8_t *)((char *)&r + 12) = *(uint8_t*)((char*)(p0) + 864);
    *(uint8_t *)((char *)&r + 13) = *(uint8_t*)((char*)(p0) + 865);
    *(uint32_t *)((char *)&r + 16) = *(uint32_t*)((char*)(p0) + 868);
    *(uint32_t *)((char *)&r + 20) = *(uint32_t*)((char*)(p0) + 872);
    *(uint32_t *)((char *)&r + 24) = *(uint32_t*)((char*)(p0) + 876);
    *(uint64_t *)((char *)&r + 28) = *(uint64_t*)((char*)(p0) + 880);
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

// sub_c21020  (orig 0xc21020, straight-line)
uint32_t main_f_c21020(uint32_t a0) { return (((((uint32_t)a0) == 1)) ? (24) : ((((((uint32_t)a0) == 2)) ? (10) : (0)))); }

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

// sub_c25ce0  (orig 0xc25ce0, straight-line)
uint32_t main_f_c25ce0(uint64_t a0, void* a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + ((*(uint8_t*)((char*)(a1))) * (48))));
    return (((*(uint64_t*)((char*)(p0) + 16)) - (*(uint64_t*)((char*)(p0) + 8))) >> (6)) * (3435973837);
}

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
void* main_f_c338a0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 232) = (uint8_t)k0;
    return a0;
}

// sub_c33940  (orig 0xc33940, straight)
void* main_f_c33940(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 234) = (uint8_t)k0;
    return a0;
}

// sub_c36400  (orig 0xc36400, call)
extern void sub_ed29f0();
uint32_t main_f_c36400(void* a0) {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(uintptr_t))&sub_ed29f0)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 272))))))) & (1);
    asm volatile("");
    return r0;
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
void* main_f_c49340(void* a0) {
    *(uint32_t*)((char*)(a0) + 112) = 1;
    return a0;
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

// sub_c63390  (orig 0xc63390, straight-line)
void main_f_c63390(void* a0) {
    *(uint64_t*)((char*)(a0) + 776) = *(uint64_t*)((char*)(a0) + 184);
    *(uint64_t*)((char*)(a0) + 768) = *(uint64_t*)((char*)(a0) + 176);
}

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
void* main_f_c65b50(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
    return a0;
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
void* main_f_c73a20(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 1626) = (uint8_t)k0;
    return a0;
}

// sub_c74100  (orig 0xc74100, straight-line)
typedef struct { unsigned char b[24]; } __S_f_c74100;
__S_f_c74100 main_f_c74100() {
    __S_f_c74100 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_c75b40  (orig 0xc75b40, ret_only)
void main_f_c75b40() {}

// sub_c75b60  (orig 0xc75b60, straight)
void* main_f_c75b60(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1));
    *(uint64_t*)((char*)(p1) + 24) = *(uint64_t*)((char*)(p0) + 24);
    *(uint64_t*)((char*)(p1) + 16) = *(uint64_t*)((char*)(p0) + 16);
    return a0;
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
void* main_f_c86490(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)k0;
    return a0;
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
void* main_f_c87450(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)k0;
    return a0;
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
void* main_f_c87e90(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)k0;
    return a0;
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
void* main_f_c88820(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)k0;
    return a0;
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

// sub_c95340  (orig 0xc95340, const-field-set)
void main_f_c95340(void* a0) { *(uint8_t *)(((char *)(*(void **)((char*)(a0))) + 689)) = 1; }

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
void* main_f_c9be70(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
    return a0;
}

// sub_c9be80  (orig 0xc9be80, straight)
void main_f_c9be80(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 200) = *(uint64_t*)((char*)(a1) + 24);
    *(uint64_t*)((char*)(a0) + 184) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 176) = *(uint64_t*)((char*)(a1));
    *(uint16_t*)((char*)(a0) + 208) = *(uint16_t*)((char*)(a1) + 32);
    *(uint64_t*)((char*)(a0) + 192) = *(uint64_t*)((char*)(a1) + 16);
}

// sub_c9e610  (orig 0xc9e610, straight)
void* main_f_c9e610(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)(*(uint64_t *)((char*)(a0) + 112));
    uint32_t k2 = 1;
    *(uint64_t*)((char*)(p1) + 168) = *(uint64_t*)((char*)(p0) + 200);
    *(uint64_t*)((char*)(p1) + 160) = *(uint64_t*)((char*)(p0) + 192);
    *(uint8_t*)((char*)(p1) + 192) = (uint8_t)k2;
    return a0;
}

// sub_c9ecd0  (orig 0xc9ecd0, straight)
void* main_f_c9ecd0(void* a0) {
    *(uint32_t*)((char*)(a0) + 164) = 45;
    return a0;
}

// sub_c9f590  (orig 0xc9f590, ret_only)
void main_f_c9f590() {}

// sub_c9ffd0  (orig 0xc9ffd0, ret_only)
void main_f_c9ffd0() {}

// sub_ca07b0  (orig 0xca07b0, setter)
void main_f_ca07b0(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_ca07c0  (orig 0xca07c0, straight)
void* main_f_ca07c0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
    return a0;
}

// sub_ca07d0  (orig 0xca07d0, straight)
void* main_f_ca07d0(void* a0, void* a1, uint64_t a2) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 136) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 128) = *(uint64_t*)((char*)(p0));
    *(uint32_t*)((char*)(p1) + 180) = (uint32_t)(a2);
    return a0;
}

// sub_ca2420  (orig 0xca2420, setter)
void main_f_ca2420(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_ca2430  (orig 0xca2430, straight)
void* main_f_ca2430(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
    return a0;
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
void* main_f_cb3470(void* a0, void* a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 152) = *(uint32_t*)((char*)(a1));
    *(uint16_t*)((char*)(p0) + 156) = *(uint16_t*)((char*)(a2));
    return a0;
}

// sub_cb5bc0  (orig 0xcb5bc0, ret_only)
void main_f_cb5bc0() {}

// sub_cb5bd0  (orig 0xcb5bd0, ret_only)
void main_f_cb5bd0() {}

// sub_cc1260  (orig 0xcc1260, indirect-tailcall)
void main_f_cc1260(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 232));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 72)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 232))));
}

// sub_cc65c0  (orig 0xcc65c0, indirect-tailcall)
void main_f_cc65c0(void* a0, uint32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 232));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 56)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 232))), ((uintptr_t)((((uint32_t)a1)) & (1))));
}

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

// sub_ccb4a0  (orig 0xccb4a0, indirect-tailcall)
void main_f_ccb4a0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 104)))))(((uintptr_t)(a0)));
}

// sub_ccb550  (orig 0xccb550, indirect-tailcall)
void main_f_ccb550(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_ccb560  (orig 0xccb560, ret_only)
void main_f_ccb560() {}

// sub_ccb570  (orig 0xccb570, copy2)
void main_f_ccb570(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccb580  (orig 0xccb580, copy2)
void main_f_ccb580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccc260  (orig 0xccc260, mov_ret)
uint32_t main_f_ccc260() { return 0; }

// sub_ccc2c0  (orig 0xccc2c0, indirect-tailcall)
void main_f_ccc2c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_ccc2d0  (orig 0xccc2d0, ret_only)
void main_f_ccc2d0() {}

// sub_ccc2e0  (orig 0xccc2e0, copy2)
void main_f_ccc2e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccc2f0  (orig 0xccc2f0, copy2)
void main_f_ccc2f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccc980  (orig 0xccc980, mov_ret)
uint32_t main_f_ccc980() { return 0; }

// sub_ccc9e0  (orig 0xccc9e0, indirect-tailcall)
void main_f_ccc9e0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_ccc9f0  (orig 0xccc9f0, ret_only)
void main_f_ccc9f0() {}

// sub_ccca00  (orig 0xccca00, copy2)
void main_f_ccca00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccca10  (orig 0xccca10, copy2)
void main_f_ccca10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccd0a0  (orig 0xccd0a0, mov_ret)
uint32_t main_f_ccd0a0() { return 0; }

// sub_ccd100  (orig 0xccd100, indirect-tailcall)
void main_f_ccd100(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_ccda90  (orig 0xccda90, indirect-tailcall)
void main_f_ccda90(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cce1a0  (orig 0xcce1a0, indirect-tailcall)
void main_f_cce1a0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cce8b0  (orig 0xcce8b0, indirect-tailcall)
void main_f_cce8b0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_ccefc0  (orig 0xccefc0, indirect-tailcall)
void main_f_ccefc0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_ccf870  (orig 0xccf870, indirect-tailcall)
void main_f_ccf870(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_ccff80  (orig 0xccff80, indirect-tailcall)
void main_f_ccff80(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd0690  (orig 0xcd0690, indirect-tailcall)
void main_f_cd0690(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd0da0  (orig 0xcd0da0, indirect-tailcall)
void main_f_cd0da0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd14b0  (orig 0xcd14b0, indirect-tailcall)
void main_f_cd14b0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_cd14c0  (orig 0xcd14c0, ret_only)
void main_f_cd14c0() {}

// sub_cd14d0  (orig 0xcd14d0, copy2)
void main_f_cd14d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd14e0  (orig 0xcd14e0, copy2)
void main_f_cd14e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd1b70  (orig 0xcd1b70, mov_ret)
uint32_t main_f_cd1b70() { return 1; }

// sub_cd1bd0  (orig 0xcd1bd0, indirect-tailcall)
void main_f_cd1bd0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd22e0  (orig 0xcd22e0, indirect-tailcall)
void main_f_cd22e0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd29f0  (orig 0xcd29f0, indirect-tailcall)
void main_f_cd29f0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd3100  (orig 0xcd3100, indirect-tailcall)
void main_f_cd3100(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd3810  (orig 0xcd3810, indirect-tailcall)
void main_f_cd3810(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd3f20  (orig 0xcd3f20, indirect-tailcall)
void main_f_cd3f20(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd4630  (orig 0xcd4630, indirect-tailcall)
void main_f_cd4630(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd4d40  (orig 0xcd4d40, indirect-tailcall)
void main_f_cd4d40(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_cd4d50  (orig 0xcd4d50, ret_only)
void main_f_cd4d50() {}

// sub_cd4d60  (orig 0xcd4d60, copy2)
void main_f_cd4d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd4d70  (orig 0xcd4d70, copy2)
void main_f_cd4d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd5400  (orig 0xcd5400, mov_ret)
uint32_t main_f_cd5400() { return 1; }

// sub_cd5460  (orig 0xcd5460, indirect-tailcall)
void main_f_cd5460(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd5b70  (orig 0xcd5b70, indirect-tailcall)
void main_f_cd5b70(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd6280  (orig 0xcd6280, indirect-tailcall)
void main_f_cd6280(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd6990  (orig 0xcd6990, indirect-tailcall)
void main_f_cd6990(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd70a0  (orig 0xcd70a0, indirect-tailcall)
void main_f_cd70a0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd77b0  (orig 0xcd77b0, indirect-tailcall)
void main_f_cd77b0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd7ec0  (orig 0xcd7ec0, indirect-tailcall)
void main_f_cd7ec0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd85d0  (orig 0xcd85d0, indirect-tailcall)
void main_f_cd85d0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd8ce0  (orig 0xcd8ce0, indirect-tailcall)
void main_f_cd8ce0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd93f0  (orig 0xcd93f0, indirect-tailcall)
void main_f_cd93f0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cd9b00  (orig 0xcd9b00, indirect-tailcall)
void main_f_cd9b00(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_cda210  (orig 0xcda210, indirect-tailcall)
void main_f_cda210(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_cda220  (orig 0xcda220, ret_only)
void main_f_cda220() {}

// sub_cda230  (orig 0xcda230, copy2)
void main_f_cda230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cda240  (orig 0xcda240, copy2)
void main_f_cda240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cda8d0  (orig 0xcda8d0, mov_ret)
uint32_t main_f_cda8d0() { return 1; }

// sub_cda930  (orig 0xcda930, indirect-tailcall)
void main_f_cda930(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 104)))))(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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
void* main_f_cf25d0(void* a0, void* a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 392) = *(uint64_t*)((char*)(a1));
    *(uint64_t*)((char*)(p0) + 1360) = *(uint64_t*)((char*)(a2));
    return a0;
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

// RThigh_2  (orig 0xcf4bf0, straight-line)
void main_f_cf4bf0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 120));
    *(uint64_t*)((char*)(p0) + 312) = a1;
}

// sub_cf4f90  (orig 0xcf4f90, ret_only)
void main_f_cf4f90() {}

// sub_cf4fa0  (orig 0xcf4fa0, ret_only)
void main_f_cf4fa0() {}

// sub_cf7230  (orig 0xcf7230, straight-line)
void main_f_cf7230(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 120));
    *(uint64_t*)((char*)(p0) + 96) = a1;
}

// sub_cf93e0  (orig 0xcf93e0, straight)
void* main_f_cf93e0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(p0) + 128) = (*(uint32_t*)((char*)(a0) + 128)) - (1);
    return a0;
}

// sub_cf9870  (orig 0xcf9870, straight)
void* main_f_cf9870(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(p0) + 156) = (*(uint32_t*)((char*)(a0) + 156)) - (1);
    return a0;
}

// sub_cf9b90  (orig 0xcf9b90, straight)
void* main_f_cf9b90(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(p0) + 184) = (*(uint32_t*)((char*)(a0) + 184)) - (1);
    return a0;
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
void* main_f_cfa880(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 113) = (uint8_t)k0;
    return a0;
}

// sub_cfa890  (orig 0xcfa890, setter)
void main_f_cfa890(void* a0) { *(uint8_t*)((char*)(a0) + 113) = 0; }

// sub_cfb070  (orig 0xcfb070, straight)
void main_f_cfb070(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 144) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_cfb0a0  (orig 0xcfb0a0, straight)
void* main_f_cfb0a0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 145) = (uint8_t)k0;
    return a0;
}

// sub_cfb0b0  (orig 0xcfb0b0, setter)
void main_f_cfb0b0(void* a0) { *(uint8_t*)((char*)(a0) + 145) = 0; }

// sub_cfb150  (orig 0xcfb150, straight)
void* main_f_cfb150(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 112) = *(uint64_t*)((char*)(p0));
    return a0;
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
void* main_f_cfb1e0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 136) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 128) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_cfc200  (orig 0xcfc200, straight)
void main_f_cfc200(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 128) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_cfc230  (orig 0xcfc230, straight)
void* main_f_cfc230(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 129) = (uint8_t)k0;
    return a0;
}

// sub_cfc240  (orig 0xcfc240, setter)
void main_f_cfc240(void* a0) { *(uint8_t*)((char*)(a0) + 129) = 0; }

// sub_cfc550  (orig 0xcfc550, setter)
void main_f_cfc550(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 96) = a1; }

// sub_cfc560  (orig 0xcfc560, getter)
uint32_t main_f_cfc560(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_cfc570  (orig 0xcfc570, straight)
void* main_f_cfc570(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 112) = *(uint64_t*)((char*)(p0));
    return a0;
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
void* main_f_cfe850(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
    return a0;
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
void* main_f_d00de0(void* a0, void* a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 1716) = *(uint32_t*)((char*)(a1));
    *(uint32_t*)((char*)(p0) + 1720) = *(uint32_t*)((char*)(a2));
    return a0;
}

// sub_d01720  (orig 0xd01720, straight)
uint64_t main_f_d01720(void* a0, int32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a1)) * 16)));
    return *(uint64_t*)((char*)(p0) + 1520);
}

// sub_d01730  (orig 0xd01730, straight)
void main_f_d01730(void* a0, int32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a1)) * 16)));
    *(uint64_t*)((char*)(p0) + 1520) = 14695981039346656837;
    *(uint8_t*)((char*)(p0) + 1528) = 0;
}

// sub_d01750  (orig 0xd01750, straight)
uint64_t main_f_d01750(void* a0, int32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a1)) * 8)));
    return *(uint64_t*)((char*)(p0) + 1680);
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

