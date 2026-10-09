/* main -- 90 functions verified to match the original.
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

// sub_179c900  (orig 0x179c900, straight)
void* main_f_179c900(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 608));
    return ((char *)(char*)(p0) + (uintptr_t)(((int32_t)a1)) * 8);
}

// sub_179e670  (orig 0x179e670, ret_only)
void main_f_179e670() {}

// sub_17a0130  (orig 0x17a0130, getter-chain)
uint64_t main_f_17a0130(void* a0, int32_t a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(uint64_t*)((char*)(t0) + (uintptr_t)(a1) * 8);
}

// sub_17a0140  (orig 0x17a0140, straight)
uint32_t main_f_17a0140(void* a0) { return (*(uint32_t*)((char*)(a0) + 8)) - (1); }

// sub_17a2d10  (orig 0x17a2d10, mov_ret)
uint32_t main_f_17a2d10() { return 1; }

// sub_17a2e30  (orig 0x17a2e30, compare)
bool main_f_17a2e30(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 16)) == (uint64_t)(4); }

// sub_17a3150  (orig 0x17a3150, compare)
bool main_f_17a3150(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 16)) == (uint64_t)(11); }

// sub_17a37a0  (orig 0x17a37a0, ret_only)
void main_f_17a37a0() {}

// sub_17a4330  (orig 0x17a4330, getter)
uint64_t main_f_17a4330(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_17a4340  (orig 0x17a4340, straight)
void main_f_17a4340(void* a0) {
    *(uint16_t*)((char*)(a0) + 80) = (*(uint16_t*)((char*)(a0) + 80)) & (4294967287);
}

// sub_17a43d0  (orig 0x17a43d0, ret_only)
void main_f_17a43d0() {}

// sub_17ab1b0  (orig 0x17ab1b0, mov_ret)
uint32_t main_f_17ab1b0() { return -1; }

// sub_17ab1c0  (orig 0x17ab1c0, ret_only)
void main_f_17ab1c0() {}

// sub_17ab210  (orig 0x17ab210, mov_ret)
uint32_t main_f_17ab210() { return 255; }

// sub_17ab220  (orig 0x17ab220, ret_only)
void main_f_17ab220() {}

// sub_17ac430  (orig 0x17ac430, ret_only)
void main_f_17ac430() {}

// sub_17ac6f0  (orig 0x17ac6f0, mov_ret)
uint32_t main_f_17ac6f0() { return 0; }

// sub_17b0e00  (orig 0x17b0e00, compare)
bool main_f_17b0e00(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 216)) != (uint64_t)(0); }

// sub_17b0fa0  (orig 0x17b0fa0, straight-line)
uint32_t main_f_17b0fa0(void* a0, int32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a1)) * 4)));
    return *(uint32_t*)((char*)(p0) + 224);
}

// sub_17b0fb0  (orig 0x17b0fb0, straight)
void main_f_17b0fb0(void* a0, int32_t a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a1)) * 4)));
    *(uint32_t*)((char*)(p0) + 224) = *(uint32_t*)((char*)(a2));
}

// sub_17b2c00  (orig 0x17b2c00, ret_only)
void main_f_17b2c00() {}

// sub_17b2d00  (orig 0x17b2d00, ret_only)
void main_f_17b2d00() {}

// sub_17b2f40  (orig 0x17b2f40, mov_ret)
uint64_t main_f_17b2f40() { return 0; }

// sub_17b2f50  (orig 0x17b2f50, ret_only)
void main_f_17b2f50() {}

// sub_17b3330  (orig 0x17b3330, ret_only)
void main_f_17b3330() {}

// sub_17b3ab0  (orig 0x17b3ab0, straight-line)
void main_f_17b3ab0(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0) + 8) = ((*(uint32_t*)((char*)(a0) + 8)) & (4294967055)) | (((((uint32_t)a1)) << 4));
}

// sub_17b3ad0  (orig 0x17b3ad0, straight)
void main_f_17b3ad0(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0) + 8) = ((*(uint32_t*)((char*)(a0) + 8)) & (4294967288)) | (((uint32_t)a1));
}

// sub_17b3ff0  (orig 0x17b3ff0, straight)
uint32_t main_f_17b3ff0(void* a0) { return ((*(uint32_t*)((char*)(a0) + 8)) >> (4)) & (15); }

// sub_17b49d0  (orig 0x17b49d0, ret_only)
void main_f_17b49d0() {}

// sub_17b49f0  (orig 0x17b49f0, straight)
void main_f_17b49f0(void* a0) {
    *(uint64_t*)((char*)(a0) + 8) = 0;
    *(uint16_t*)((char*)(a0)) = ((*(uint16_t*)((char*)(a0))) & (57344)) | (144);
}

// sub_17b4a70  (orig 0x17b4a70, ret_only)
void main_f_17b4a70() {}

// sub_17b4a80  (orig 0x17b4a80, ret_only)
void main_f_17b4a80() {}

// sub_17b5cb0  (orig 0x17b5cb0, compare)
bool main_f_17b5cb0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 320)) != (uint64_t)(0); }

// sub_17b7510  (orig 0x17b7510, getter)
uint64_t main_f_17b7510(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_17b7780  (orig 0x17b7780, ret_only)
void main_f_17b7780() {}

// sub_17b8250  (orig 0x17b8250, ret_only)
void main_f_17b8250() {}

// sub_17b8990  (orig 0x17b8990, getter-chain)
uint32_t main_f_17b8990(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 28); }

// sub_17b89f0  (orig 0x17b89f0, getter-chain)
uint64_t main_f_17b89f0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 136); }

// sub_17b8a00  (orig 0x17b8a00, getter-chain)
uint64_t main_f_17b8a00(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 136); }

// sub_17b8e00  (orig 0x17b8e00, getter)
uint32_t main_f_17b8e00(void* a0) { return *(uint32_t*)((char*)(a0) + 208); }

// sub_17b8e10  (orig 0x17b8e10, compare)
bool main_f_17b8e10(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 208)) != (uint64_t)(0); }

// sub_17b8e20  (orig 0x17b8e20, getter)
uint64_t main_f_17b8e20(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_17b8e30  (orig 0x17b8e30, getter)
uint64_t main_f_17b8e30(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_17b8e40  (orig 0x17b8e40, getter)
uint64_t main_f_17b8e40(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_17b8f30  (orig 0x17b8f30, straight-line)
typedef struct { unsigned char b[24]; } __S_f_17b8f30;
__S_f_17b8f30 main_f_17b8f30() {
    __S_f_17b8f30 r;
    *(uint32_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_17b8f40  (orig 0x17b8f40, mov_ret)
uint32_t main_f_17b8f40() { return 1; }

// sub_17b8f50  (orig 0x17b8f50, mov_ret)
uint64_t main_f_17b8f50() { return 0; }

// sub_17b8f60  (orig 0x17b8f60, mov_ret)
uint64_t main_f_17b8f60() { return 0; }

// sub_17bb4a0  (orig 0x17bb4a0, ret_only)
void main_f_17bb4a0() {}

// sub_17bbf70  (orig 0x17bbf70, straight-line)
uint32_t main_f_17bbf70(void* a0, int32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a1)) * 4)));
    return *(uint32_t*)((char*)(p0) + 232);
}

// sub_17bbf80  (orig 0x17bbf80, straight)
void main_f_17bbf80(void* a0, int32_t a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a1)) * 4)));
    *(uint32_t*)((char*)(p0) + 232) = *(uint32_t*)((char*)(a2));
}

// sub_17bbff0  (orig 0x17bbff0, straight)
uint8_t main_f_17bbff0(void* a0) { return (*(uint8_t*)((char*)(a0) + 265)) + (1); }

// sub_17c02d0  (orig 0x17c02d0, mov_ret)
uint32_t main_f_17c02d0() { return 1; }

// sub_17c19e0  (orig 0x17c19e0, straight)
void main_f_17c19e0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 9) = (uint8_t)k0;
}

// sub_17c1b90  (orig 0x17c1b90, getter-chain)
uint8_t main_f_17c1b90(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 568))) + 42); }

// sub_17c48e0  (orig 0x17c48e0, ret_only)
void main_f_17c48e0() {}

// sub_17c9ae0  (orig 0x17c9ae0, setter)
void main_f_17c9ae0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1024) = a1; }

// sub_17ccc00  (orig 0x17ccc00, ret_only)
void main_f_17ccc00() {}

// sub_17d4c20  (orig 0x17d4c20, getter)
uint32_t main_f_17d4c20(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_17d4c30  (orig 0x17d4c30, getter)
uint32_t main_f_17d4c30(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_17d4c40  (orig 0x17d4c40, getter)
uint64_t main_f_17d4c40(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_17d4c50  (orig 0x17d4c50, getter)
uint64_t main_f_17d4c50(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_17d4c70  (orig 0x17d4c70, ptr_add)
void* main_f_17d4c70(void* a0) { return (char*)a0 + 72; }

// sub_17d4c80  (orig 0x17d4c80, mov_ret)
uint32_t main_f_17d4c80() { return 1; }

// sub_17d4c90  (orig 0x17d4c90, mov_ret)
uint32_t main_f_17d4c90() { return 0; }

// sub_17d4ca0  (orig 0x17d4ca0, mov_ret)
uint32_t main_f_17d4ca0() { return 6405; }

// sub_17d4cb0  (orig 0x17d4cb0, mov_ret)
uint32_t main_f_17d4cb0() { return 2; }

// sub_17d4cc0  (orig 0x17d4cc0, straight-line)
uint64_t main_f_17d4cc0(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((uint32_t)a1)) * 8)));
    return *(uint64_t*)((char*)(p0) + 112);
}

// sub_17d4df0  (orig 0x17d4df0, getter-chain)
uint32_t main_f_17d4df0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 24))) + 80); }

// sub_17d4e00  (orig 0x17d4e00, getter-chain)
uint32_t main_f_17d4e00(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 40))) + 44); }

// sub_17d4e60  (orig 0x17d4e60, ptr_add)
void* main_f_17d4e60(void* a0) { return (char*)a0 + 48; }

// sub_17d4e70  (orig 0x17d4e70, getter-chain)
uint8_t main_f_17d4e70(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 24))) + 77); }

// sub_17d4e80  (orig 0x17d4e80, straight-line)
uint32_t main_f_17d4e80(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((uint32_t)a1)) * 4)));
    return *(uint32_t*)((char*)(p0) + 84);
}

// sub_17d4e90  (orig 0x17d4e90, straight-line)
uint32_t main_f_17d4e90(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((uint32_t)a1)) * 4)));
    return *(uint32_t*)((char*)(p0) + 64);
}

// sub_17d4ea0  (orig 0x17d4ea0, getter-chain)
uint32_t main_f_17d4ea0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 40))) + 40); }

// sub_17d4eb0  (orig 0x17d4eb0, straight-line)
uint64_t main_f_17d4eb0(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((uint32_t)a1)) * 8)));
    return *(uint64_t*)((char*)(p0) + 104);
}

// sub_17d57a0  (orig 0x17d57a0, setter-chain-zero)
void main_f_17d57a0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 8) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 16) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 48) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 24) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
}

// sub_17d5c10  (orig 0x17d5c10, setter-chain-zero)
void main_f_17d5c10(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 40) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
}

// sub_17d60b0  (orig 0x17d60b0, setter)
void main_f_17d60b0(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_17d6d30  (orig 0x17d6d30, mov_ret)
uint32_t main_f_17d6d30() { return 1; }

// sub_17de500  (orig 0x17de500, copy2)
void main_f_17de500(void* a0, void* a1) { *(uint64_t*)((char*)(a1) + 152) = *(uint64_t*)((char*)(a0) + 2240); }

// sub_17df790  (orig 0x17df790, setter-chain)
void main_f_17df790(void* a0, uint32_t a1, uint64_t a2) { *(uint32_t*)((char*)(a0) + 4488L) = a1; *(uint64_t*)((char*)(a0) + 4520L) = a2; }

// sub_17e5360  (orig 0x17e5360, mov_ret)
uint32_t main_f_17e5360() { return 1; }

// sub_17e53a0  (orig 0x17e53a0, mov_ret)
uint32_t main_f_17e53a0() { return 1; }

// sub_17e5d50  (orig 0x17e5d50, ret_only)
void main_f_17e5d50() {}

// sub_17e8260  (orig 0x17e8260, setter-chain)
void main_f_17e8260(void* a0) { *(uint32_t*)((char*)(a0)) = 0; *(uint8_t*)((char*)(a0) + 48) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_17e84c0  (orig 0x17e84c0, ret_only)
void main_f_17e84c0() {}

// sub_17e8d00  (orig 0x17e8d00, setter-chain-zero)
void main_f_17e8d00(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 80) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 64) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 48) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
}

// sub_17e8ec0  (orig 0x17e8ec0, straight-line)
uint64_t main_f_17e8ec0(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((uint32_t)a1)) * 8)));
    return *(uint64_t*)((char*)(p0) + 80);
}

// sub_17e8ed0  (orig 0x17e8ed0, ret_only)
void main_f_17e8ed0() {}

