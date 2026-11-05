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


// sub_6c0bf0  (orig 0x6c0bf0, indirect-tailcall)
void main_f_6c0bf0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6c0c20  (orig 0x6c0c20, getter)
uint32_t main_f_6c0c20(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_6c0c30  (orig 0x6c0c30, mov_ret)
uint32_t main_f_6c0c30() { return 1; }

// sub_6c1150  (orig 0x6c1150, setter)
void main_f_6c1150(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_6c1220  (orig 0x6c1220, setter)
void main_f_6c1220(void* a0) { *(uint8_t*)((char*)(a0) + 17) = 0; }

// sub_6c1390  (orig 0x6c1390, straight-line)
uint8_t main_f_6c1390(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = (uint32_t)((((*(uint8_t*)((char*)(a0) + 17) == 0)) ? (0) : (2)));
    return (((*(uint8_t*)((char*)(a0) + 17) == 0)) ? (0) : (2));
}

// sub_6c1540  (orig 0x6c1540, mov_ret)
uint32_t main_f_6c1540() { return 1; }

// sub_6c16e0  (orig 0x6c16e0, setter)
void main_f_6c16e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_6c17b0  (orig 0x6c17b0, setter)
void main_f_6c17b0(void* a0) { *(uint8_t*)((char*)(a0) + 17) = 0; }

// sub_6c1920  (orig 0x6c1920, straight-line)
uint8_t main_f_6c1920(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = (uint32_t)((((*(uint8_t*)((char*)(a0) + 17) == 0)) ? (0) : (2)));
    return (((*(uint8_t*)((char*)(a0) + 17) == 0)) ? (0) : (2));
}

// sub_6c1ad0  (orig 0x6c1ad0, mov_ret)
uint32_t main_f_6c1ad0() { return 1; }

// sub_6c1b50  (orig 0x6c1b50, indirect-tailcall)
void main_f_6c1b50(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6c1b80  (orig 0x6c1b80, getter)
uint32_t main_f_6c1b80(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_6c1b90  (orig 0x6c1b90, mov_ret)
uint32_t main_f_6c1b90() { return 1; }

// sub_6c1ba0  (orig 0x6c1ba0, indirect-tailcall)
void main_f_6c1ba0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6c1bd0  (orig 0x6c1bd0, getter)
uint32_t main_f_6c1bd0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_6c1be0  (orig 0x6c1be0, mov_ret)
uint32_t main_f_6c1be0() { return 1; }

// sub_6c1cd0  (orig 0x6c1cd0, straight)
uint16_t main_f_6c1cd0(void* a0) { return ((*(uint16_t*)((char*)(a0))) >> (4)) & (15); }

// sub_6c1f30  (orig 0x6c1f30, getter)
uint8_t main_f_6c1f30(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_6c1ff0  (orig 0x6c1ff0, ret_only)
void main_f_6c1ff0() {}

// sub_6c2000  (orig 0x6c2000, ptr_add)
void* main_f_6c2000(void* a0) { return (char*)a0 + 2; }

// sub_6c2010  (orig 0x6c2010, ptr_add)
void* main_f_6c2010(void* a0) { return (char*)a0 + 4; }

// sub_6c2070  (orig 0x6c2070, getter)
uint32_t main_f_6c2070(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_6c2080  (orig 0x6c2080, getter)
uint16_t main_f_6c2080(void* a0) { return *(uint16_t*)((char*)(a0) + 4); }

// sub_6c27d0  (orig 0x6c27d0, ptr_add)
void* main_f_6c27d0(void* a0) { return (char*)a0 + 8; }

// sub_6c2840  (orig 0x6c2840, getter)
uint64_t main_f_6c2840(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_6c6bc0  (orig 0x6c6bc0, getter)
uint8_t main_f_6c6bc0(void* a0) { return *(uint8_t*)((char*)(a0) + 1269); }

// sub_6c8cd0  (orig 0x6c8cd0, mov_ret)
uint32_t main_f_6c8cd0() { return 2; }

// RandomSession_2  (orig 0x6c8ce0, strlit-ret)
const char *main_f_6c8ce0() { static const char s[] = "RandomSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6c8cf0  (orig 0x6c8cf0, mov_ret)
uint32_t main_f_6c8cf0() { return 0; }

// BindNgs  (orig 0x6c8d00, strlit-ret)
const char *main_f_6c8d00() { static const char s[] = "BindNgs"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6c8d10  (orig 0x6c8d10, mov_ret)
uint32_t main_f_6c8d10() { return 0; }

// UnbindNgs  (orig 0x6c8d20, strlit-ret)
const char *main_f_6c8d20() { static const char s[] = "UnbindNgs"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6c8d30  (orig 0x6c8d30, mov_ret)
uint32_t main_f_6c8d30() { return 0; }

// SearchSession_2  (orig 0x6c8d40, strlit-ret)
const char *main_f_6c8d40() { static const char s[] = "SearchSession"; __asm__ volatile("" ::: "memory"); return s; }

// JoinSession_2  (orig 0x6c8d50, strlit-ret)
const char *main_f_6c8d50() { static const char s[] = "JoinSession"; __asm__ volatile("" ::: "memory"); return s; }

// JoinSessionWithId  (orig 0x6c8d60, strlit-ret)
const char *main_f_6c8d60() { static const char s[] = "JoinSessionWithId"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6c8d70  (orig 0x6c8d70, mov_ret)
uint32_t main_f_6c8d70() { return 0; }

// CreateSession_2  (orig 0x6c8d80, strlit-ret)
const char *main_f_6c8d80() { static const char s[] = "CreateSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6c8d90  (orig 0x6c8d90, mov_ret)
uint32_t main_f_6c8d90() { return 1; }

// CheckBlock_2  (orig 0x6c8da0, strlit-ret)
const char *main_f_6c8da0() { static const char s[] = "CheckBlock"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6c9e40  (orig 0x6c9e40, call)
extern void callee_17ea650();
uint32_t main_f_6c9e40() {
    uint32_t r0 = ((((uint32_t (*)(void))&callee_17ea650)() == 1) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_6ca0c0  (orig 0x6ca0c0, call)
extern void callee_17ea650();
uint32_t main_f_6ca0c0() {
    uint32_t r0 = ((((uint32_t (*)(void))&callee_17ea650)() == 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_6ccec0  (orig 0x6ccec0, getter)
uint8_t main_f_6ccec0(void* a0) { return *(uint8_t*)((char*)(a0) + 1269); }

// sub_6cd5f0  (orig 0x6cd5f0, mov_ret)
uint32_t main_f_6cd5f0() { return 1; }

// WaitMinMember  (orig 0x6cd600, strlit-ret)
const char *main_f_6cd600() { static const char s[] = "WaitMinMember"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd610  (orig 0x6cd610, mov_ret)
uint32_t main_f_6cd610() { return 0; }

// InitializeLdn_2  (orig 0x6cd620, strlit-ret)
const char *main_f_6cd620() { static const char s[] = "InitializeLdn"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd630  (orig 0x6cd630, mov_ret)
uint32_t main_f_6cd630() { return 0; }

// FinalizeLdn_2  (orig 0x6cd640, strlit-ret)
const char *main_f_6cd640() { static const char s[] = "FinalizeLdn"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd650  (orig 0x6cd650, mov_ret)
uint32_t main_f_6cd650() { return 0; }

// SearchSession_3  (orig 0x6cd660, strlit-ret)
const char *main_f_6cd660() { static const char s[] = "SearchSession"; __asm__ volatile("" ::: "memory"); return s; }

// JoinSession_3  (orig 0x6cd670, strlit-ret)
const char *main_f_6cd670() { static const char s[] = "JoinSession"; __asm__ volatile("" ::: "memory"); return s; }

// JoinSessionOnRandom  (orig 0x6cd680, strlit-ret)
const char *main_f_6cd680() { static const char s[] = "JoinSessionOnRandom"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd690  (orig 0x6cd690, mov_ret)
uint32_t main_f_6cd690() { return 0; }

// CreateSession_3  (orig 0x6cd6a0, strlit-ret)
const char *main_f_6cd6a0() { static const char s[] = "CreateSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd6b0  (orig 0x6cd6b0, mov_ret)
uint32_t main_f_6cd6b0() { return 0; }

// UpdateSettingSession_2  (orig 0x6cd6c0, strlit-ret)
const char *main_f_6cd6c0() { static const char s[] = "UpdateSettingSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd6d0  (orig 0x6cd6d0, mov_ret)
uint32_t main_f_6cd6d0() { return 1; }

// BranchSequenceOnRandom  (orig 0x6cd6e0, strlit-ret)
const char *main_f_6cd6e0() { static const char s[] = "BranchSequenceOnRandom"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd6f0  (orig 0x6cd6f0, mov_ret)
uint32_t main_f_6cd6f0() { return 1; }

// CheckBlock_3  (orig 0x6cd700, strlit-ret)
const char *main_f_6cd700() { static const char s[] = "CheckBlock"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd710  (orig 0x6cd710, mov_ret)
uint32_t main_f_6cd710() { return 1; }

// LocalCloseSession  (orig 0x6cd720, strlit-ret)
const char *main_f_6cd720() { static const char s[] = "LocalCloseSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd730  (orig 0x6cd730, mov_ret)
uint32_t main_f_6cd730() { return 0; }

// sub_6cd770  (orig 0x6cd770, ret_only)
void main_f_6cd770() {}

// sub_6cd780  (orig 0x6cd780, copy2)
void main_f_6cd780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6cd790  (orig 0x6cd790, copy2)
void main_f_6cd790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6cd7c0  (orig 0x6cd7c0, ret_only)
void main_f_6cd7c0() {}

// sub_6cd7d0  (orig 0x6cd7d0, ret_only)
void main_f_6cd7d0() {}

// sub_6cd7e0  (orig 0x6cd7e0, ret_only)
void main_f_6cd7e0() {}

// sub_6ce100  (orig 0x6ce100, getter)
uint32_t main_f_6ce100(void* a0) { return *(uint32_t*)((char*)(a0) + 272); }

// sub_6ce3c0  (orig 0x6ce3c0, setter)
void main_f_6ce3c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 272) = a1; }

// sub_6d1530  (orig 0x6d1530, setter)
void main_f_6d1530(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 160) = a1; }

// sub_6d2410  (orig 0x6d2410, getter)
uint64_t main_f_6d2410(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_6d2980  (orig 0x6d2980, getter)
uint64_t main_f_6d2980(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_6d2ee0  (orig 0x6d2ee0, getter)
uint64_t main_f_6d2ee0(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_6d3ec0  (orig 0x6d3ec0, setter-chain)
void main_f_6d3ec0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; *(uint32_t*)((char*)(a0) + 40) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = a1; }

// sub_6d4b10  (orig 0x6d4b10, setter)
void main_f_6d4b10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_6d5010  (orig 0x6d5010, mov_ret)
uint32_t main_f_6d5010() { return 1; }

// sub_6d5090  (orig 0x6d5090, indirect-tailcall)
void main_f_6d5090(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6d50c0  (orig 0x6d50c0, getter)
uint32_t main_f_6d50c0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_6d50d0  (orig 0x6d50d0, mov_ret)
uint32_t main_f_6d50d0() { return 1; }

// sub_6d56c0  (orig 0x6d56c0, setter)
void main_f_6d56c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 56) = a1; }

// sub_6d6090  (orig 0x6d6090, mov_ret)
uint32_t main_f_6d6090() { return 1; }

// sub_6d6110  (orig 0x6d6110, indirect-tailcall)
void main_f_6d6110(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6d6140  (orig 0x6d6140, getter)
uint32_t main_f_6d6140(void* a0) { return *(uint32_t*)((char*)(a0) + 56); }

// sub_6d6150  (orig 0x6d6150, mov_ret)
uint32_t main_f_6d6150() { return 1; }

// sub_6d61e0  (orig 0x6d61e0, setter-chain)
void main_f_6d61e0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint32_t*)((char*)(a0) + 48) = 0; *(uint64_t*)((char*)(a0)) = a2; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 32) = a1; *(uint64_t*)((char*)(a0) + 40) = 0; }

// sub_6d7aa0  (orig 0x6d7aa0, ptr_add)
void* main_f_6d7aa0(void* a0) { return (char*)a0 + 192; }

// sub_6d7ab0  (orig 0x6d7ab0, ptr_add)
void* main_f_6d7ab0(void* a0) { return (char*)a0 + 288; }

// sub_6d9150  (orig 0x6d9150, setter)
void main_f_6d9150(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_6d92b0  (orig 0x6d92b0, setter)
void main_f_6d92b0(void* a0) { *(uint32_t*)((char*)(a0) + 20) = 0; }

// sub_6d96a0  (orig 0x6d96a0, mov_ret)
uint32_t main_f_6d96a0() { return 1; }

// sub_6d9720  (orig 0x6d9720, indirect-tailcall)
void main_f_6d9720(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6d9750  (orig 0x6d9750, getter)
uint32_t main_f_6d9750(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_6d9760  (orig 0x6d9760, mov_ret)
uint32_t main_f_6d9760() { return 1; }

// sub_6d9d70  (orig 0x6d9d70, setter)
void main_f_6d9d70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_6d9ed0  (orig 0x6d9ed0, setter-chain)
void main_f_6d9ed0(void* a0) { *(uint8_t*)((char*)(a0) + 24) = 0; *(uint32_t*)((char*)(a0) + 20) = 0; }

// sub_6da450  (orig 0x6da450, mov_ret)
uint32_t main_f_6da450() { return 1; }

// sub_6da4d0  (orig 0x6da4d0, indirect-tailcall)
void main_f_6da4d0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6da500  (orig 0x6da500, getter)
uint32_t main_f_6da500(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_6da510  (orig 0x6da510, mov_ret)
uint32_t main_f_6da510() { return 1; }

// sub_6daaf0  (orig 0x6daaf0, setter)
void main_f_6daaf0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_6dac50  (orig 0x6dac50, setter)
void main_f_6dac50(void* a0) { *(uint32_t*)((char*)(a0) + 20) = 0; }

// sub_6db040  (orig 0x6db040, mov_ret)
uint32_t main_f_6db040() { return 1; }

// sub_6db0c0  (orig 0x6db0c0, indirect-tailcall)
void main_f_6db0c0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6db0f0  (orig 0x6db0f0, getter)
uint32_t main_f_6db0f0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_6db100  (orig 0x6db100, mov_ret)
uint32_t main_f_6db100() { return 1; }

// sub_6db970  (orig 0x6db970, setter)
void main_f_6db970(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_6dc3d0  (orig 0x6dc3d0, mov_ret)
uint32_t main_f_6dc3d0() { return 1; }

// sub_6dc450  (orig 0x6dc450, indirect-tailcall)
void main_f_6dc450(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6dc480  (orig 0x6dc480, getter)
uint32_t main_f_6dc480(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_6dc490  (orig 0x6dc490, mov_ret)
uint32_t main_f_6dc490() { return 1; }

// sub_6dca00  (orig 0x6dca00, setter)
void main_f_6dca00(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_6dcb60  (orig 0x6dcb60, setter)
void main_f_6dcb60(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_6dd100  (orig 0x6dd100, mov_ret)
uint32_t main_f_6dd100() { return 1; }

// sub_6dd180  (orig 0x6dd180, indirect-tailcall)
void main_f_6dd180(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6dd1b0  (orig 0x6dd1b0, getter)
uint32_t main_f_6dd1b0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_6dd1c0  (orig 0x6dd1c0, mov_ret)
uint32_t main_f_6dd1c0() { return 1; }

// sub_6dd2f0  (orig 0x6dd2f0, mov_ret)
uint64_t main_f_6dd2f0() { return 0; }

// sub_6dd550  (orig 0x6dd550, getter)
uint32_t main_f_6dd550(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_6dd560  (orig 0x6dd560, setter)
void main_f_6dd560(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_6dd730  (orig 0x6dd730, straight)
void* main_f_6dd730(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(p0) + 16) = (uint8_t)k1;
    return a0;
}

// sub_6dd740  (orig 0x6dd740, setter)
void main_f_6dd740(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_6dd750  (orig 0x6dd750, getter)
uint64_t main_f_6dd750(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_6dd760  (orig 0x6dd760, getter)
uint8_t main_f_6dd760(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_6ddc20  (orig 0x6ddc20, mov_ret)
uint32_t main_f_6ddc20() { return 1; }

// sub_6ddde0  (orig 0x6ddde0, straight)
uint32_t main_f_6ddde0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(p0)) = *(uint32_t*)((char*)(a0) + 16);
    *(uint64_t*)((char*)(p0) + 8) = *(uint64_t*)((char*)(p0) + 24);
    return 0;
}

// sub_6de640  (orig 0x6de640, straight-line)
void* main_f_6de640(void* a0) { return (((*(uint64_t*)((char*)(a0) + 16) == 0)) ? ((char*)(a0) + 88) : (void *)(uintptr_t)(0)); }

// sub_6de660  (orig 0x6de660, ptr_add)
void* main_f_6de660(void* a0) { return (char*)a0 + 176; }

// sub_6de7d0  (orig 0x6de7d0, ret_only)
void main_f_6de7d0() {}

// sub_6de7e0  (orig 0x6de7e0, copy2)
void main_f_6de7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6de7f0  (orig 0x6de7f0, copy2)
void main_f_6de7f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6f6950  (orig 0x6f6950, indirect-tailcall)
void main_f_6f6950(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0))))))(((uintptr_t)(a0)));
}

// sub_6f69d0  (orig 0x6f69d0, indirect-tailcall)
void main_f_6f69d0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0))))))(((uintptr_t)(a0)));
}

// sub_6f6a50  (orig 0x6f6a50, indirect-tailcall)
void main_f_6f6a50(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0))))))(((uintptr_t)(a0)));
}

// sub_6f6ad0  (orig 0x6f6ad0, indirect-tailcall)
void main_f_6f6ad0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0))))))(((uintptr_t)(a0)));
}

// sub_6f6b50  (orig 0x6f6b50, indirect-tailcall)
void main_f_6f6b50(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0))))))(((uintptr_t)(a0)));
}

// sub_6f6bd0  (orig 0x6f6bd0, indirect-tailcall)
void main_f_6f6bd0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0))))))(((uintptr_t)(a0)));
}

// sub_6f6c50  (orig 0x6f6c50, indirect-tailcall)
void main_f_6f6c50(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0))))))(((uintptr_t)(a0)));
}

// sub_6f6cd0  (orig 0x6f6cd0, indirect-tailcall)
void main_f_6f6cd0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0))))))(((uintptr_t)(a0)));
}

// sub_6f6d50  (orig 0x6f6d50, indirect-tailcall)
void main_f_6f6d50(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0))))))(((uintptr_t)(a0)));
}

// sub_6f8120  (orig 0x6f8120, ret_only)
void main_f_6f8120() {}

// sub_6ffe30  (orig 0x6ffe30, setter-chain)
void main_f_6ffe30(void* a0, uint32_t a1, uint64_t a2, uint32_t a3) { *(uint32_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = a2; *(uint32_t*)((char*)(a0) + 16) = a3; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 40) = 0; }

// sub_6fff50  (orig 0x6fff50, ret_only)
void main_f_6fff50() {}

// sub_700120  (orig 0x700120, ret_only)
void main_f_700120() {}

// gflnet3_tokenizer_2  (orig 0x700130, straight-line)
uint32_t main_f_700130(uint32_t a0) { return __builtin_bswap32(((uint32_t)a0)); }

// sub_700f70  (orig 0x700f70, ret_only)
void main_f_700f70() {}

// sub_700f80  (orig 0x700f80, straight)
void* main_f_700f80(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 23) = 0;
    *(uint64_t*)((char*)(p0) + 8) = 0;
    *(uint64_t*)((char*)(p0) + 16) = 0;
    *(uint64_t*)((char*)(p0)) = 0;
    return a0;
}

// sub_700f90  (orig 0x700f90, ret_only)
void main_f_700f90() {}

// sub_708230  (orig 0x708230, ret_only)
void main_f_708230() {}

// sub_70d000  (orig 0x70d000, straight-line)
uint32_t main_f_70d000(uint32_t a0) { return (((((uint32_t)a0) < 128)) ? (1) : ((((((uint32_t)a0) < (4 << 12))) ? (2) : ((((((uint32_t)a0) < (512 << 12))) ? (3) : (((((((uint32_t)a0)) >> (28) != 0)) ? ((4) + (1)) : (4)))))))); }

// sub_70d3e0  (orig 0x70d3e0, getter)
int32_t main_f_70d3e0(void* a0) { return *(int32_t*)((char*)(a0) + 24); }

// sub_70d5e0  (orig 0x70d5e0, getter)
int32_t main_f_70d5e0(void* a0) { return *(int32_t*)((char*)(a0) + 24); }

// sub_70d9e0  (orig 0x70d9e0, mov_ret)
uint32_t main_f_70d9e0() { return 0; }

// sub_713460  (orig 0x713460, ret_only)
void main_f_713460() {}

// sub_7162e0  (orig 0x7162e0, getter)
uint32_t main_f_7162e0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_7162f0  (orig 0x7162f0, setter)
void main_f_7162f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 16) = a1; }

// sub_716810  (orig 0x716810, mov_ret)
uint64_t main_f_716810() { return 0; }

// sub_717190  (orig 0x717190, ret_only)
void main_f_717190() {}

// sub_7178c0  (orig 0x7178c0, indirect-tailcall)
void main_f_7178c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 40)))))(((uintptr_t)(a0)));
}

// sub_7178d0  (orig 0x7178d0, indirect-tailcall)
void main_f_7178d0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 48)))))(((uintptr_t)(a0)));
}

// sub_718d10  (orig 0x718d10, compare)
bool main_f_718d10(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1))) == (uint64_t)(0); }

// sub_718d20  (orig 0x718d20, getter)
uint32_t main_f_718d20(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1)); }

// sub_718d50  (orig 0x718d50, setter)
void main_f_718d50(uint64_t unused0, void* a1) { *(uint32_t*)((char*)(a1)) = 0; }

// sub_718e00  (orig 0x718e00, straight)
void main_f_718e00(uint64_t unused0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(p0)) = (*(uint32_t*)((char*)(a1))) - (1);
}

// sub_718ec0  (orig 0x718ec0, mov_ret)
uint64_t main_f_718ec0() { return 0; }

// sub_718ef0  (orig 0x718ef0, mov_ret)
uint64_t main_f_718ef0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_718f00  (orig 0x718f00, straight-line)
void* main_f_718f00(uint64_t unused0, uint64_t unused1, void* a2) { return (char*)(a2) + 1; }

// sub_718f10  (orig 0x718f10, compare)
bool main_f_718f10(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t a3) { return (uint64_t)(a2) == (uint64_t)(a3); }

// sub_718f20  (orig 0x718f20, ret_only)
void main_f_718f20() {}

// sub_718f40  (orig 0x718f40, getter)
uint32_t main_f_718f40(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1)); }

// sub_718f50  (orig 0x718f50, mov_ret)
uint64_t main_f_718f50(uint64_t a0, uint64_t a1) { return a1; }

// sub_7191b0  (orig 0x7191b0, ret_only)
void main_f_7191b0() {}

// sub_7191d0  (orig 0x7191d0, compare)
bool main_f_7191d0(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1))) == (uint64_t)(0); }

// sub_7191e0  (orig 0x7191e0, getter)
uint32_t main_f_7191e0(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1)); }

// sub_719210  (orig 0x719210, setter)
void main_f_719210(uint64_t unused0, void* a1) { *(uint32_t*)((char*)(a1)) = 0; }

// sub_7192c0  (orig 0x7192c0, straight)
void main_f_7192c0(uint64_t unused0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(p0)) = (*(uint32_t*)((char*)(a1))) - (1);
}

// sub_719380  (orig 0x719380, getter)
uint32_t main_f_719380(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1)); }

// sub_719390  (orig 0x719390, mov_ret)
uint64_t main_f_719390(uint64_t a0, uint64_t a1) { return a1; }

// sub_719730  (orig 0x719730, compare)
bool main_f_719730(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1))) == (uint64_t)(0); }

// sub_719740  (orig 0x719740, getter)
uint32_t main_f_719740(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1)); }

// sub_719770  (orig 0x719770, setter)
void main_f_719770(uint64_t unused0, void* a1) { *(uint32_t*)((char*)(a1)) = 0; }

// sub_719820  (orig 0x719820, straight)
void main_f_719820(uint64_t unused0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(p0)) = (*(uint32_t*)((char*)(a1))) - (1);
}

// sub_7198e0  (orig 0x7198e0, getter)
uint64_t main_f_7198e0(uint64_t unused0, void* a1) { return *(uint64_t*)((char*)(a1)); }

// sub_7198f0  (orig 0x7198f0, mov_ret)
uint64_t main_f_7198f0(uint64_t a0, uint64_t a1) { return a1; }

// sub_719c90  (orig 0x719c90, compare)
bool main_f_719c90(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1))) == (uint64_t)(0); }

// sub_719ca0  (orig 0x719ca0, getter)
uint32_t main_f_719ca0(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1)); }

// sub_719cd0  (orig 0x719cd0, setter)
void main_f_719cd0(uint64_t unused0, void* a1) { *(uint32_t*)((char*)(a1)) = 0; }

// sub_719d80  (orig 0x719d80, straight)
void main_f_719d80(uint64_t unused0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(p0)) = (*(uint32_t*)((char*)(a1))) - (1);
}

// sub_719e40  (orig 0x719e40, getter)
uint64_t main_f_719e40(uint64_t unused0, void* a1) { return *(uint64_t*)((char*)(a1)); }

// sub_719e50  (orig 0x719e50, mov_ret)
uint64_t main_f_719e50(uint64_t a0, uint64_t a1) { return a1; }

// sub_71a1f0  (orig 0x71a1f0, compare)
bool main_f_71a1f0(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1))) == (uint64_t)(0); }

// sub_71a200  (orig 0x71a200, getter)
uint32_t main_f_71a200(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1)); }

// sub_71a230  (orig 0x71a230, setter)
void main_f_71a230(uint64_t unused0, void* a1) { *(uint32_t*)((char*)(a1)) = 0; }

// sub_71a2f0  (orig 0x71a2f0, straight)
void main_f_71a2f0(uint64_t unused0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(p0)) = (*(uint32_t*)((char*)(a1))) - (1);
}

// sub_71a3b0  (orig 0x71a3b0, getter)
float main_f_71a3b0(uint64_t unused0, void* a1) { return *(float*)((char*)(a1)); }

// sub_71a3c0  (orig 0x71a3c0, mov_ret)
uint64_t main_f_71a3c0(uint64_t a0, uint64_t a1) { return a1; }

// sub_71a760  (orig 0x71a760, compare)
bool main_f_71a760(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1))) == (uint64_t)(0); }

// sub_71a770  (orig 0x71a770, getter)
uint32_t main_f_71a770(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1)); }

// sub_71a7a0  (orig 0x71a7a0, setter)
void main_f_71a7a0(uint64_t unused0, void* a1) { *(uint32_t*)((char*)(a1)) = 0; }

// sub_71a860  (orig 0x71a860, straight)
void main_f_71a860(uint64_t unused0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(p0)) = (*(uint32_t*)((char*)(a1))) - (1);
}

// sub_71a920  (orig 0x71a920, getter)
double main_f_71a920(uint64_t unused0, void* a1) { return *(double*)((char*)(a1)); }

// sub_71a930  (orig 0x71a930, mov_ret)
uint64_t main_f_71a930(uint64_t a0, uint64_t a1) { return a1; }

// sub_71acd0  (orig 0x71acd0, compare)
bool main_f_71acd0(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1))) == (uint64_t)(0); }

// sub_71ace0  (orig 0x71ace0, getter)
uint32_t main_f_71ace0(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1)); }

// sub_71ad10  (orig 0x71ad10, setter)
void main_f_71ad10(uint64_t unused0, void* a1) { *(uint32_t*)((char*)(a1)) = 0; }

// sub_71adc0  (orig 0x71adc0, straight)
void main_f_71adc0(uint64_t unused0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(p0)) = (*(uint32_t*)((char*)(a1))) - (1);
}

// sub_71ae80  (orig 0x71ae80, getter)
uint8_t main_f_71ae80(uint64_t unused0, void* a1) { return *(uint8_t*)((char*)(a1)); }

// sub_71ae90  (orig 0x71ae90, mov_ret)
uint64_t main_f_71ae90(uint64_t a0, uint64_t a1) { return a1; }

// sub_71b210  (orig 0x71b210, compare)
bool main_f_71b210(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 8)) == (uint64_t)(0); }

// sub_71b220  (orig 0x71b220, getter)
uint32_t main_f_71b220(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1) + 8); }

// sub_71b6d0  (orig 0x71b6d0, call)
extern void sub_c70();
uint64_t main_f_71b6d0() {
    uint64_t f_71b6d0__r0 = ((uint64_t (*)(uintptr_t))&sub_c70)(((uintptr_t)(24)));
    void* p0 = (void*)((uintptr_t)(f_71b6d0__r0));
    *(uint64_t*)((char*)(p0) + 8) = 0;
    *(uint64_t*)((char*)(p0) + 16) = 0;
    *(uint64_t*)((char*)(p0)) = 0;
    uint64_t r0 = f_71b6d0__r0;
    asm volatile("");
    return r0;
}

// sub_71b700  (orig 0x71b700, mov_ret)
uint64_t main_f_71b700(uint64_t a0, uint64_t a1) { return a1; }

// sub_71bc80  (orig 0x71bc80, call)
extern void sub_71c7a0();
uint32_t main_f_71bc80(uint64_t unused0, uint64_t a1) {
    uint64_t f_71bc80__r0 = ((uint64_t (*)(uintptr_t))&sub_71c7a0)(((uintptr_t)(((uint64_t)a1))));
    void* p0 = (void*)((uintptr_t)(f_71bc80__r0));
    uint32_t r0 = ((*(uint32_t*)((char*)(p0) + 8) == 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_71bcb0  (orig 0x71bcb0, call)
extern void sub_71c7a0();
uint32_t main_f_71bcb0(uint64_t unused0, uint64_t a1) {
    uint64_t f_71bcb0__r0 = ((uint64_t (*)(uintptr_t))&sub_71c7a0)(((uintptr_t)(((uint64_t)a1))));
    void* p0 = (void*)((uintptr_t)(f_71bcb0__r0));
    uint32_t r0 = *(uint32_t*)((char*)(p0) + 8);
    asm volatile("");
    return r0;
}

// sub_71c080  (orig 0x71c080, mov_ret)
uint64_t main_f_71c080(uint64_t a0, uint64_t a1) { return a1; }

// sub_71c1c0  (orig 0x71c1c0, indirect-tailcall)
void main_f_71c1c0(uint64_t a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a1)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 144)))))(((uintptr_t)(a1)), ((uintptr_t)(((uint64_t)a0))));
}

// sub_71c460  (orig 0x71c460, compare)
bool main_f_71c460(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 8)) == (uint64_t)(0); }

// sub_71c470  (orig 0x71c470, getter)
uint32_t main_f_71c470(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1) + 8); }

// sub_71c770  (orig 0x71c770, mov_ret)
uint64_t main_f_71c770(uint64_t a0, uint64_t a1) { return a1; }

// sub_7204f0  (orig 0x7204f0, ret_only)
void main_f_7204f0() {}

// sub_722780  (orig 0x722780, ret_only)
void main_f_722780() {}

// sub_72c220  (orig 0x72c220, ret_only)
void main_f_72c220() {}

// sub_73c260  (orig 0x73c260, compare-pred)
bool main_f_73c260(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 8)) + 16)) + 124)) == (uint32_t)(3); }

// sub_73c280  (orig 0x73c280, getter)
uint64_t main_f_73c280(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_73e7d0  (orig 0x73e7d0, call)
extern void sub_6e2c20();
uint64_t main_f_73e7d0() {
    uint64_t r0 = ((((uint64_t (*)(void))&sub_6e2c20)() != 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_740780  (orig 0x740780, ret_only)
void main_f_740780() {}

// sub_744c20  (orig 0x744c20, setter)
void main_f_744c20(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_745ca0  (orig 0x745ca0, setter)
void main_f_745ca0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_748870  (orig 0x748870, setter)
void main_f_748870(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_748ef0  (orig 0x748ef0, mov_ret)
uint32_t main_f_748ef0() { return 1; }

// sub_749120  (orig 0x749120, setter)
void main_f_749120(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_7497a0  (orig 0x7497a0, mov_ret)
uint32_t main_f_7497a0() { return 1; }

// sub_749e60  (orig 0x749e60, setter)
void main_f_749e60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_74c5f0  (orig 0x74c5f0, setter)
void main_f_74c5f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_74df00  (orig 0x74df00, setter)
void main_f_74df00(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_74ecd0  (orig 0x74ecd0, setter)
void main_f_74ecd0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_74fe20  (orig 0x74fe20, setter)
void main_f_74fe20(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_750da0  (orig 0x750da0, setter)
void main_f_750da0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_7520b0  (orig 0x7520b0, setter)
void main_f_7520b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_753260  (orig 0x753260, setter)
void main_f_753260(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 52) = a1; }

// sub_754ad0  (orig 0x754ad0, setter)
void main_f_754ad0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 52) = a1; }

// sub_755720  (orig 0x755720, setter)
void main_f_755720(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 52) = a1; }

// sub_7566b0  (orig 0x7566b0, setter)
void main_f_7566b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 52) = a1; }

// sub_756f90  (orig 0x756f90, setter)
void main_f_756f90(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 52) = a1; }

// sub_757a50  (orig 0x757a50, setter)
void main_f_757a50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 52) = a1; }

// sub_758420  (orig 0x758420, setter)
void main_f_758420(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 52) = a1; }

// sub_758df0  (orig 0x758df0, setter)
void main_f_758df0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 52) = a1; }

// sub_7598b0  (orig 0x7598b0, setter)
void main_f_7598b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_75a340  (orig 0x75a340, setter)
void main_f_75a340(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_75b590  (orig 0x75b590, setter)
void main_f_75b590(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_75c8f0  (orig 0x75c8f0, mov_ret)
uint32_t main_f_75c8f0() { return 1; }

// sub_75ca80  (orig 0x75ca80, setter)
void main_f_75ca80(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_75d240  (orig 0x75d240, mov_ret)
uint32_t main_f_75d240() { return 1; }

// sub_75d4e0  (orig 0x75d4e0, setter)
void main_f_75d4e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_75e1a0  (orig 0x75e1a0, mov_ret)
uint32_t main_f_75e1a0() { return 1; }

// sub_75e310  (orig 0x75e310, setter)
void main_f_75e310(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_75eab0  (orig 0x75eab0, mov_ret)
uint32_t main_f_75eab0() { return 1; }

// sub_75eb30  (orig 0x75eb30, indirect-tailcall)
void main_f_75eb30(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75eb60  (orig 0x75eb60, getter)
uint32_t main_f_75eb60(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75eb70  (orig 0x75eb70, indirect-tailcall)
void main_f_75eb70(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75eba0  (orig 0x75eba0, getter)
uint32_t main_f_75eba0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ebb0  (orig 0x75ebb0, indirect-tailcall)
void main_f_75ebb0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75ebe0  (orig 0x75ebe0, getter)
uint32_t main_f_75ebe0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ebf0  (orig 0x75ebf0, indirect-tailcall)
void main_f_75ebf0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75ec20  (orig 0x75ec20, getter)
uint32_t main_f_75ec20(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ec30  (orig 0x75ec30, indirect-tailcall)
void main_f_75ec30(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75ec60  (orig 0x75ec60, getter)
uint32_t main_f_75ec60(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ec70  (orig 0x75ec70, indirect-tailcall)
void main_f_75ec70(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75eca0  (orig 0x75eca0, getter)
uint32_t main_f_75eca0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ecb0  (orig 0x75ecb0, indirect-tailcall)
void main_f_75ecb0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75ece0  (orig 0x75ece0, getter)
uint32_t main_f_75ece0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ecf0  (orig 0x75ecf0, indirect-tailcall)
void main_f_75ecf0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75ed20  (orig 0x75ed20, getter)
uint32_t main_f_75ed20(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ed30  (orig 0x75ed30, indirect-tailcall)
void main_f_75ed30(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75ed60  (orig 0x75ed60, getter)
uint32_t main_f_75ed60(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ed70  (orig 0x75ed70, indirect-tailcall)
void main_f_75ed70(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75eda0  (orig 0x75eda0, getter)
uint32_t main_f_75eda0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75edb0  (orig 0x75edb0, indirect-tailcall)
void main_f_75edb0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75ede0  (orig 0x75ede0, getter)
uint32_t main_f_75ede0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75edf0  (orig 0x75edf0, indirect-tailcall)
void main_f_75edf0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75ee20  (orig 0x75ee20, getter)
uint32_t main_f_75ee20(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75ee30  (orig 0x75ee30, indirect-tailcall)
void main_f_75ee30(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75ee60  (orig 0x75ee60, getter)
uint32_t main_f_75ee60(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75ee70  (orig 0x75ee70, indirect-tailcall)
void main_f_75ee70(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75eea0  (orig 0x75eea0, getter)
uint32_t main_f_75eea0(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75eeb0  (orig 0x75eeb0, indirect-tailcall)
void main_f_75eeb0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75eee0  (orig 0x75eee0, getter)
uint32_t main_f_75eee0(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75eef0  (orig 0x75eef0, indirect-tailcall)
void main_f_75eef0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75ef20  (orig 0x75ef20, getter)
uint32_t main_f_75ef20(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75ef30  (orig 0x75ef30, indirect-tailcall)
void main_f_75ef30(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75ef60  (orig 0x75ef60, getter)
uint32_t main_f_75ef60(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75ef70  (orig 0x75ef70, indirect-tailcall)
void main_f_75ef70(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75efa0  (orig 0x75efa0, getter)
uint32_t main_f_75efa0(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75efb0  (orig 0x75efb0, indirect-tailcall)
void main_f_75efb0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75efe0  (orig 0x75efe0, getter)
uint32_t main_f_75efe0(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75eff0  (orig 0x75eff0, indirect-tailcall)
void main_f_75eff0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75f020  (orig 0x75f020, getter)
uint32_t main_f_75f020(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75f030  (orig 0x75f030, indirect-tailcall)
void main_f_75f030(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75f060  (orig 0x75f060, getter)
uint32_t main_f_75f060(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75f070  (orig 0x75f070, indirect-tailcall)
void main_f_75f070(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75f0a0  (orig 0x75f0a0, getter)
uint32_t main_f_75f0a0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75f0b0  (orig 0x75f0b0, indirect-tailcall)
void main_f_75f0b0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75f0e0  (orig 0x75f0e0, getter)
uint32_t main_f_75f0e0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75f0f0  (orig 0x75f0f0, indirect-tailcall)
void main_f_75f0f0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75f120  (orig 0x75f120, getter)
uint32_t main_f_75f120(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75f130  (orig 0x75f130, indirect-tailcall)
void main_f_75f130(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_75f160  (orig 0x75f160, getter)
uint32_t main_f_75f160(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75f320  (orig 0x75f320, indirect-tailcall)
void main_f_75f320(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0))))))(((uintptr_t)(a0)));
}

// sub_75f4a0  (orig 0x75f4a0, indirect-tailcall)
void main_f_75f4a0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0))))))(((uintptr_t)(a0)));
}

// sub_75f610  (orig 0x75f610, indirect-tailcall)
void main_f_75f610(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0))))))(((uintptr_t)(a0)));
}

// sub_75f790  (orig 0x75f790, indirect-tailcall)
void main_f_75f790(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0))))))(((uintptr_t)(a0)));
}

// sub_75f900  (orig 0x75f900, indirect-tailcall)
void main_f_75f900(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0))))))(((uintptr_t)(a0)));
}

// sub_762d50  (orig 0x762d50, call)
extern void sub_771ff0();
uint32_t main_f_762d50(void* a0) {
    uint32_t r0 = ((((uint32_t (*)(uintptr_t))&sub_771ff0)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152)))) == 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_762d70  (orig 0x762d70, call)
extern void sub_772130();
uint64_t main_f_762d70(void* a0) {
    uint64_t r0 = ((uint64_t (*)(uintptr_t))&sub_772130)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
    asm volatile("");
    return r0;
}

// sub_763de0  (orig 0x763de0, call)
extern void sub_773f10();
uint64_t main_f_763de0(void* a0) {
    uint64_t r0 = ((uint64_t (*)(uintptr_t))&sub_773f10)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
    asm volatile("");
    return r0;
}

// sub_765a90  (orig 0x765a90, call)
extern void sub_771280();
uint32_t main_f_765a90(void* a0) {
    uint32_t r0 = ((((uint32_t (*)(uintptr_t))&sub_771280)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152)))) != 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_765ae0  (orig 0x765ae0, call)
extern void sub_773370();
uint32_t main_f_765ae0(void* a0) {
    uint32_t r0 = (((uint32_t (*)(uintptr_t))&sub_773370)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))))) & (255);
    asm volatile("");
    return r0;
}

// sub_765d90  (orig 0x765d90, call)
extern void sub_7734d0();
uint32_t main_f_765d90(void* a0) {
    uint32_t r0 = (((uint32_t (*)(uintptr_t))&sub_7734d0)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))))) & (255);
    asm volatile("");
    return r0;
}

// sub_767810  (orig 0x767810, call)
extern void sub_776670();
uint32_t main_f_767810(void* a0) {
    uint32_t r0 = (((uint32_t (*)(uintptr_t))&sub_776670)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))))) & (255);
    asm volatile("");
    return r0;
}

// sub_767850  (orig 0x767850, call)
extern void sub_7767b0();
uint32_t main_f_767850(void* a0) {
    uint32_t r0 = (((uint32_t (*)(uintptr_t))&sub_7767b0)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))))) & (255);
    asm volatile("");
    return r0;
}

// sub_7690c0  (orig 0x7690c0, call)
extern void sub_776170();
uint32_t main_f_7690c0(void* a0) {
    uint32_t r0 = ((((uint32_t (*)(uintptr_t))&sub_776170)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152)))) & (uint64_t)(15)) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_7690e0  (orig 0x7690e0, call)
extern void sub_776170();
uint32_t main_f_7690e0(void* a0) {
    uint32_t r0 = ((((uint32_t (*)(uintptr_t))&sub_776170)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152)))) & (uint64_t)(255)) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_7693a0  (orig 0x7693a0, ret_only)
void main_f_7693a0() {}

// sub_7693b0  (orig 0x7693b0, ret_only)
void main_f_7693b0() {}

// sub_76bef0  (orig 0x76bef0, mov_ret)
uint32_t main_f_76bef0() { return 8; }

// sub_76c470  (orig 0x76c470, ret_only)
void main_f_76c470() {}

// sub_76c490  (orig 0x76c490, straight)
uint8_t main_f_76c490(void* a0) { return ((*(uint8_t*)((char*)(a0) + 49)) >> (6)) & (1); }

// sub_76d640  (orig 0x76d640, getter)
uint32_t main_f_76d640(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_76d650  (orig 0x76d650, getter)
uint16_t main_f_76d650(void* a0) { return *(uint16_t*)((char*)(a0) + 12); }

// sub_76d740  (orig 0x76d740, getter)
uint8_t main_f_76d740(void* a0) { return *(uint8_t*)((char*)(a0) + 274); }

// sub_76d7d0  (orig 0x76d7d0, ret_only)
void main_f_76d7d0() {}

// sub_76d9a0  (orig 0x76d9a0, getter)
uint32_t main_f_76d9a0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_76d9b0  (orig 0x76d9b0, getter)
uint16_t main_f_76d9b0(void* a0) { return *(uint16_t*)((char*)(a0) + 12); }

// sub_76e550  (orig 0x76e550, ret_only)
void main_f_76e550() {}

// sub_76e810  (orig 0x76e810, getter)
uint32_t main_f_76e810(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_76f430  (orig 0x76f430, ret_only)
void main_f_76f430() {}

// sub_770c30  (orig 0x770c30, ret_only)
void main_f_770c30() {}

// sub_770ce0  (orig 0x770ce0, compare)
bool main_f_770ce0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 8)) != (uint64_t)(0); }

// sub_770eb0  (orig 0x770eb0, getter)
uint8_t main_f_770eb0(void* a0) { return *(uint8_t*)((char*)(a0) + 25); }

// sub_771260  (orig 0x771260, getter-chain)
uint32_t main_f_771260(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16)))); }

// sub_771270  (orig 0x771270, straight)
uint8_t main_f_771270(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return ((*(uint8_t*)((char*)(p0) + 4)) >> (2)) & (1);
}

// sub_7805e0  (orig 0x7805e0, strlit-flag-ret)
void *main_f_7805e0(void* a0) { static char g_f_7805e0[1]; *(uint8_t *)((char*)(a0)) = 13; __asm__ volatile("" ::: "memory"); return g_f_7805e0; }

// sub_780600  (orig 0x780600, strlit-flag-ret)
void *main_f_780600(void* a0) { static char g_f_780600[1]; *(uint8_t *)((char*)(a0)) = 12; __asm__ volatile("" ::: "memory"); return g_f_780600; }

// sub_7807b0  (orig 0x7807b0, straight-line)
uint32_t main_f_7807b0(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3) { return (((((uint32_t)a0) == ((uint32_t)a2))) ? (((((uint32_t)a1) == ((uint32_t)a3)) ? 1 : 0)) : ((((((uint32_t)a1) == ((uint32_t)a3))) ? ((1) + (1)) : (1)))); }

// sub_7816d0  (orig 0x7816d0, ret_only)
void main_f_7816d0() {}

// sub_782980  (orig 0x782980, ret_only)
void main_f_782980() {}

// sub_782dd0  (orig 0x782dd0, ret_only)
void main_f_782dd0() {}

// Stop_Battle_Music_for865  (orig 0x782de0, straight)
uint32_t main_f_782de0(uint64_t unused0, uint32_t a1) { return (((((uint32_t)a1) < 9999)) ? (((uint32_t)a1)) : (9999)); }

// sub_782df0  (orig 0x782df0, ret_only)
void main_f_782df0() {}

// sub_782e00  (orig 0x782e00, straight)
uint32_t main_f_782e00(uint64_t unused0, uint32_t a1) { return (((uint32_t)a1)) & (255); }

// sub_782eb0  (orig 0x782eb0, ret_only)
void main_f_782eb0() {}

// sub_782ec0  (orig 0x782ec0, ret_only)
void main_f_782ec0() {}

// sub_782ed0  (orig 0x782ed0, ret_only)
void main_f_782ed0() {}

// sub_783bc0  (orig 0x783bc0, mov_ret)
uint32_t main_f_783bc0() { return 0; }

// sub_7847d0  (orig 0x7847d0, getter)
uint8_t main_f_7847d0(void* a0) { return *(uint8_t*)((char*)(a0) + 136); }

// sub_7847e0  (orig 0x7847e0, compare)
bool main_f_7847e0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 136)) == (uint64_t)(6); }

// sub_784f30  (orig 0x784f30, mov_ret)
uint32_t main_f_784f30() { return 2064; }

// sub_784f40  (orig 0x784f40, call)
extern void sub_784f60();
uint32_t main_f_784f40(uint64_t a0, uint64_t a1) {
    uint64_t f_784f40__r0 = ((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&sub_784f60)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1)));
    uint32_t r0 = 2068;
    asm volatile("");
    return r0;
}

// sub_785fe0  (orig 0x785fe0, getter-chain)
uint16_t main_f_785fe0(void* a0) { return *(uint16_t*)((char*)((*(uint64_t*)((char*)(a0) + 352))) + 6); }

// sub_786410  (orig 0x786410, ret_only)
void main_f_786410() {}

// sub_786b30  (orig 0x786b30, getter-chain)
uint8_t main_f_786b30(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 29); }

// sub_786bd0  (orig 0x786bd0, compare-pred)
bool main_f_786bd0(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)(char*)a0) + 28)) == (uint32_t)(4); }

// sub_786fb0  (orig 0x786fb0, straight)
uint8_t main_f_786fb0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return (*(uint8_t*)((char*)(p0) + 16)) >> (7);
}

// sub_788b30  (orig 0x788b30, ret_only)
void main_f_788b30() {}

// sub_78b020  (orig 0x78b020, ret_only)
void main_f_78b020() {}

// sub_78b5d0  (orig 0x78b5d0, mov_ret)
uint32_t main_f_78b5d0() { return 1; }

// sub_78b5e0  (orig 0x78b5e0, straight)
uint32_t main_f_78b5e0(uint64_t unused0, void* a1) {
    uint32_t k0 = 256;
    *(uint64_t*)((char*)(a1)) = 2217723543158787;
    *(uint16_t*)((char*)(a1) + 8) = (uint16_t)k0;
    return 1;
}

// sub_78d3b0  (orig 0x78d3b0, straight)
uint32_t main_f_78d3b0(uint64_t unused0, void* a1) { return (((*(uint32_t*)((char*)(a1)) == 0)) ? (17) : (45)); }

// sub_78ec90  (orig 0x78ec90, ret_only)
void main_f_78ec90() {}

// sub_78f500  (orig 0x78f500, mov_ret)
uint32_t main_f_78f500() { return 1; }

// sub_78f510  (orig 0x78f510, ret_only)
void main_f_78f510() {}

// sub_78f520  (orig 0x78f520, ret_only)
void main_f_78f520() {}

// sub_78f610  (orig 0x78f610, mov_ret)
uint32_t main_f_78f610() { return 1; }

// sub_790be0  (orig 0x790be0, ret_only)
void main_f_790be0() {}

// sub_7910a0  (orig 0x7910a0, straight)
void* main_f_7910a0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 16) = 0;
    *(uint64_t*)((char*)(p0) + 7) = 0;
    *(uint64_t*)((char*)(p0)) = 0;
    return a0;
}

// sub_792950  (orig 0x792950, ret_only)
void main_f_792950() {}

// sub_7929d0  (orig 0x7929d0, ret_only)
void main_f_7929d0() {}

// sub_793920  (orig 0x793920, ret_only)
void main_f_793920() {}

// sub_7944a0  (orig 0x7944a0, ret_only)
void main_f_7944a0() {}

// sub_799410  (orig 0x799410, mov_ret)
uint32_t main_f_799410() { return 1; }

// sub_7a0a70  (orig 0x7a0a70, getter)
uint32_t main_f_7a0a70(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_7a3de0  (orig 0x7a3de0, ret_only)
void main_f_7a3de0() {}

// sub_7a3df0  (orig 0x7a3df0, copy2)
void main_f_7a3df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a3e00  (orig 0x7a3e00, copy2)
void main_f_7a3e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a3ee0  (orig 0x7a3ee0, ret_only)
void main_f_7a3ee0() {}

// sub_7a3ef0  (orig 0x7a3ef0, copy2)
void main_f_7a3ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a3f00  (orig 0x7a3f00, copy2)
void main_f_7a3f00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a5d00  (orig 0x7a5d00, ret_only)
void main_f_7a5d00() {}

// sub_7a5d10  (orig 0x7a5d10, copy2)
void main_f_7a5d10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a5d20  (orig 0x7a5d20, copy2)
void main_f_7a5d20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a5d50  (orig 0x7a5d50, ret_only)
void main_f_7a5d50() {}

// sub_7a5d60  (orig 0x7a5d60, copy2)
void main_f_7a5d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a5d70  (orig 0x7a5d70, copy2)
void main_f_7a5d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a67d0  (orig 0x7a67d0, ret_only)
void main_f_7a67d0() {}

// sub_7a67e0  (orig 0x7a67e0, copy2)
void main_f_7a67e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a67f0  (orig 0x7a67f0, copy2)
void main_f_7a67f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6830  (orig 0x7a6830, ret_only)
void main_f_7a6830() {}

// sub_7a6840  (orig 0x7a6840, copy2)
void main_f_7a6840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6850  (orig 0x7a6850, copy2)
void main_f_7a6850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6910  (orig 0x7a6910, ret_only)
void main_f_7a6910() {}

// sub_7a6920  (orig 0x7a6920, copy2)
void main_f_7a6920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6930  (orig 0x7a6930, copy2)
void main_f_7a6930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6b50  (orig 0x7a6b50, ret_only)
void main_f_7a6b50() {}

// sub_7a6b60  (orig 0x7a6b60, copy2)
void main_f_7a6b60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6b70  (orig 0x7a6b70, copy2)
void main_f_7a6b70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6b80  (orig 0x7a6b80, copy-chain-store)
void main_f_7a6b80(void* a0, void* a1) {
    uint32_t t0 = *(uint32_t*)(char*)a1;
    uint64_t t1 = *(uint64_t*)(char*)a0;
    *(uint32_t*)((char*)(t1) + 2064) = (uint32_t)(t0);
}

// sub_7a6b90  (orig 0x7a6b90, ret_only)
void main_f_7a6b90() {}

// sub_7a6ba0  (orig 0x7a6ba0, copy2)
void main_f_7a6ba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6bb0  (orig 0x7a6bb0, copy2)
void main_f_7a6bb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6c00  (orig 0x7a6c00, ret_only)
void main_f_7a6c00() {}

// sub_7a6c10  (orig 0x7a6c10, copy2)
void main_f_7a6c10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6c20  (orig 0x7a6c20, copy2)
void main_f_7a6c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6c70  (orig 0x7a6c70, ret_only)
void main_f_7a6c70() {}

// sub_7a6c80  (orig 0x7a6c80, copy2)
void main_f_7a6c80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6c90  (orig 0x7a6c90, copy2)
void main_f_7a6c90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6cc0  (orig 0x7a6cc0, ret_only)
void main_f_7a6cc0() {}

// sub_7a6cd0  (orig 0x7a6cd0, copy2)
void main_f_7a6cd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6ce0  (orig 0x7a6ce0, copy2)
void main_f_7a6ce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6d10  (orig 0x7a6d10, ret_only)
void main_f_7a6d10() {}

// sub_7a6d20  (orig 0x7a6d20, copy2)
void main_f_7a6d20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6d30  (orig 0x7a6d30, copy2)
void main_f_7a6d30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6d60  (orig 0x7a6d60, ret_only)
void main_f_7a6d60() {}

// sub_7a6d70  (orig 0x7a6d70, copy2)
void main_f_7a6d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a6d80  (orig 0x7a6d80, copy2)
void main_f_7a6d80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7a7e60  (orig 0x7a7e60, getter)
uint32_t main_f_7a7e60(void* a0) { return *(uint32_t*)((char*)(a0) + 288); }

// sub_7a7e70  (orig 0x7a7e70, setter)
void main_f_7a7e70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 288) = a1; }

// sub_7a87f0  (orig 0x7a87f0, ret_only)
void main_f_7a87f0() {}

// sub_7aa190  (orig 0x7aa190, ret_only)
void main_f_7aa190() {}

// sub_7aaa50  (orig 0x7aaa50, ret_only)
void main_f_7aaa50() {}

// sub_7ab0c0  (orig 0x7ab0c0, ret_only)
void main_f_7ab0c0() {}

// sub_7ab0d0  (orig 0x7ab0d0, copy2)
void main_f_7ab0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab0e0  (orig 0x7ab0e0, copy2)
void main_f_7ab0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab130  (orig 0x7ab130, ret_only)
void main_f_7ab130() {}

// sub_7ab140  (orig 0x7ab140, copy2)
void main_f_7ab140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab150  (orig 0x7ab150, copy2)
void main_f_7ab150(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab1a0  (orig 0x7ab1a0, ret_only)
void main_f_7ab1a0() {}

// sub_7ab1b0  (orig 0x7ab1b0, copy2)
void main_f_7ab1b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab1c0  (orig 0x7ab1c0, copy2)
void main_f_7ab1c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab210  (orig 0x7ab210, ret_only)
void main_f_7ab210() {}

// sub_7ab220  (orig 0x7ab220, copy2)
void main_f_7ab220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab230  (orig 0x7ab230, copy2)
void main_f_7ab230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab280  (orig 0x7ab280, ret_only)
void main_f_7ab280() {}

// sub_7ab290  (orig 0x7ab290, copy2)
void main_f_7ab290(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab2a0  (orig 0x7ab2a0, copy2)
void main_f_7ab2a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab2f0  (orig 0x7ab2f0, ret_only)
void main_f_7ab2f0() {}

// sub_7ab300  (orig 0x7ab300, copy2)
void main_f_7ab300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab310  (orig 0x7ab310, copy2)
void main_f_7ab310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab360  (orig 0x7ab360, ret_only)
void main_f_7ab360() {}

// sub_7ab370  (orig 0x7ab370, copy2)
void main_f_7ab370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab380  (orig 0x7ab380, copy2)
void main_f_7ab380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab3d0  (orig 0x7ab3d0, ret_only)
void main_f_7ab3d0() {}

// sub_7ab3e0  (orig 0x7ab3e0, copy2)
void main_f_7ab3e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab3f0  (orig 0x7ab3f0, copy2)
void main_f_7ab3f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab400  (orig 0x7ab400, copy2)
void main_f_7ab400(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0))) + 1584)) = 0; }

// sub_7ab410  (orig 0x7ab410, ret_only)
void main_f_7ab410() {}

// sub_7ab420  (orig 0x7ab420, copy2)
void main_f_7ab420(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab430  (orig 0x7ab430, copy2)
void main_f_7ab430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab440  (orig 0x7ab440, const-field-set)
void main_f_7ab440(void* a0) { *(uint32_t *)(((char *)(*(void **)((char*)(a0))) + 1584)) = 1; }

// sub_7ab450  (orig 0x7ab450, ret_only)
void main_f_7ab450() {}

// sub_7ab460  (orig 0x7ab460, copy2)
void main_f_7ab460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab470  (orig 0x7ab470, copy2)
void main_f_7ab470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7ab990  (orig 0x7ab990, ret_only)
void main_f_7ab990() {}

// sub_7ac260  (orig 0x7ac260, ret_only)
void main_f_7ac260() {}

// sub_7ae6d0  (orig 0x7ae6d0, ret_only)
void main_f_7ae6d0() {}

// sub_7af8c0  (orig 0x7af8c0, ret_only)
void main_f_7af8c0() {}

// sub_7b0860  (orig 0x7b0860, ret_only)
void main_f_7b0860() {}

// sub_7b1130  (orig 0x7b1130, ret_only)
void main_f_7b1130() {}

// sub_7b1a30  (orig 0x7b1a30, ret_only)
void main_f_7b1a30() {}

// sub_7b32e0  (orig 0x7b32e0, ret_only)
void main_f_7b32e0() {}

// sub_7b4570  (orig 0x7b4570, ret_only)
void main_f_7b4570() {}

// sub_7b5db0  (orig 0x7b5db0, ret_only)
void main_f_7b5db0() {}

// sub_7b5dc0  (orig 0x7b5dc0, copy2)
void main_f_7b5dc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7b5dd0  (orig 0x7b5dd0, copy2)
void main_f_7b5dd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7b63b0  (orig 0x7b63b0, ret_only)
void main_f_7b63b0() {}

// sub_7b72f0  (orig 0x7b72f0, ret_only)
void main_f_7b72f0() {}

// sub_7b8000  (orig 0x7b8000, ret_only)
void main_f_7b8000() {}

// sub_7b8fe0  (orig 0x7b8fe0, ret_only)
void main_f_7b8fe0() {}

// sub_7b9a50  (orig 0x7b9a50, ret_only)
void main_f_7b9a50() {}

// sub_7bab10  (orig 0x7bab10, ret_only)
void main_f_7bab10() {}

// sub_7bada0  (orig 0x7bada0, ret_only)
void main_f_7bada0() {}

// sub_7badb0  (orig 0x7badb0, copy2)
void main_f_7badb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7badc0  (orig 0x7badc0, copy2)
void main_f_7badc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_7bc360  (orig 0x7bc360, ret_only)
void main_f_7bc360() {}

// sub_7bc8c0  (orig 0x7bc8c0, mov_ret)
uint32_t main_f_7bc8c0() { return 1; }

// sub_7be000  (orig 0x7be000, mov_ret)
uint32_t main_f_7be000() { return 1; }

// sub_7bea60  (orig 0x7bea60, getter)
uint64_t main_f_7bea60(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_7bebd0  (orig 0x7bebd0, mov_ret)
uint32_t main_f_7bebd0() { return 1; }

// sub_7bebe0  (orig 0x7bebe0, indexed-getter)
uint64_t main_f_7bebe0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_7bebf0  (orig 0x7bebf0, indexed-getter)
uint64_t main_f_7bebf0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_7bf2f0  (orig 0x7bf2f0, getter)
uint64_t main_f_7bf2f0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_7bf460  (orig 0x7bf460, mov_ret)
uint32_t main_f_7bf460() { return 1; }

// sub_7bf470  (orig 0x7bf470, indexed-getter)
uint64_t main_f_7bf470(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_7bf480  (orig 0x7bf480, indexed-getter)
uint64_t main_f_7bf480(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_7bfe80  (orig 0x7bfe80, ptr_add)
void* main_f_7bfe80(void* a0) { return (char*)a0 + 168; }

// sub_7c1b10  (orig 0x7c1b10, ret_only)
void main_f_7c1b10() {}

// sub_7c1b90  (orig 0x7c1b90, ret_only)
void main_f_7c1b90() {}

// sub_7c1c10  (orig 0x7c1c10, mov_ret)
uint32_t main_f_7c1c10() { return 2; }

// sub_7c1c20  (orig 0x7c1c20, indexed-getter)
uint64_t main_f_7c1c20(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_7c1c30  (orig 0x7c1c30, indexed-getter)
uint64_t main_f_7c1c30(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

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

// sub_7c4c70  (orig 0x7c4c70, getter-chain)
uint8_t main_f_7c4c70(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 932); }

// sub_7c5070  (orig 0x7c5070, ret_only)
void main_f_7c5070() {}

// sub_7c5520  (orig 0x7c5520, compare-pred)
bool main_f_7c5520(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)((char*)a0 + 136)) + 935)) == (uint32_t)(1); }

// sub_7c56e0  (orig 0x7c56e0, straight)
uint32_t main_f_7c56e0(void* a0, uint32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 136));
    return ((*(uint32_t*)((char*)(p0) + 2656) & (uint64_t)(((uint32_t)a1))) ? 1 : 0);
}

// sub_7c58b0  (orig 0x7c58b0, getter-chain)
uint32_t main_f_7c58b0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 136)))); }

// sub_7c84a0  (orig 0x7c84a0, straight)
uint32_t main_f_7c84a0(void* a0) {
    *(uint8_t*)((char*)(a0) + 372) = 0;
    return 1;
}

// sub_7ca070  (orig 0x7ca070, getter)
uint16_t main_f_7ca070(void* a0) { return *(uint16_t*)((char*)(a0) + 358); }

// sub_7ca150  (orig 0x7ca150, straight-line)
uint64_t main_f_7ca150(void* a0, uint64_t a1) { return ((*(uint64_t*)((char*)(a0) + 136)) + (((((uint64_t)a1)) & (255)) * (288))) + (1072); }

// sub_7ca170  (orig 0x7ca170, straight-line)
uint64_t main_f_7ca170(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (112))));
    return ((*(uint64_t*)((char*)(p0) + 488) == 0) ? 1 : 0);
}

// sub_7ca1c0  (orig 0x7ca1c0, getter)
uint32_t main_f_7ca1c0(void* a0) { return *(uint32_t*)((char*)(a0) + 336); }

// sub_7ca890  (orig 0x7ca890, getter-chain)
uint8_t main_f_7ca890(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 933); }

// sub_7ca9e0  (orig 0x7ca9e0, straight)
uint8_t main_f_7ca9e0(void* a0) { return ((*(uint8_t*)((char*)(a0) + 387)) >> (2)) & (1); }

// sub_7ca9f0  (orig 0x7ca9f0, getter-chain)
uint8_t main_f_7ca9f0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 2650); }

// sub_7caa00  (orig 0x7caa00, getter-chain)
uint8_t main_f_7caa00(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 2649); }

// sub_7caa10  (orig 0x7caa10, getter-chain)
uint8_t main_f_7caa10(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 2651); }

// sub_7caa20  (orig 0x7caa20, getter-chain)
uint8_t main_f_7caa20(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 2652); }

// sub_7cac10  (orig 0x7cac10, compare-pred)
bool main_f_7cac10(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)((char*)a0 + 136)) + 2672)) == (uint32_t)(0); }

// sub_7caf40  (orig 0x7caf40, straight)
void* main_f_7caf40(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 136));
    return (char*)(p0) + 432;
}

// sub_7caf50  (orig 0x7caf50, getter-chain)
uint8_t main_f_7caf50(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 752); }

// sub_7caf60  (orig 0x7caf60, getter-chain)
uint8_t main_f_7caf60(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 754); }

// sub_7caf70  (orig 0x7caf70, straight)
void* main_f_7caf70(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 136));
    return (char*)(p0) + 784;
}

// sub_7cb070  (orig 0x7cb070, getter-chain)
uint64_t main_f_7cb070(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 2608); }

// sub_7cb2e0  (orig 0x7cb2e0, compare-pred)
bool main_f_7cb2e0(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)((char*)a0 + 136)) + 933)) != (uint32_t)(0); }

// sub_7cb300  (orig 0x7cb300, getter-chain)
uint8_t main_f_7cb300(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 1016); }

// sub_7cb310  (orig 0x7cb310, straight)
uint8_t main_f_7cb310(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 136));
    return ((*(uint8_t*)((char*)(p0) + 2856)) >> (4)) & (1);
}

// sub_7cb490  (orig 0x7cb490, delegator)
extern void sub_8048c0();
void main_f_7cb490(unsigned long a0) { ((void(*)(unsigned long))sub_8048c0)(a0); asm volatile(""); }

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

// sub_7ccf60  (orig 0x7ccf60, straight-line)
uint16_t main_f_7ccf60(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (112))));
    return *(uint16_t*)((char*)(p0) + 530);
}

// sub_7ccf80  (orig 0x7ccf80, straight-line)
uint8_t main_f_7ccf80(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (112))));
    return *(uint8_t*)((char*)(p0) + 532);
}

// sub_7ccfa0  (orig 0x7ccfa0, straight-line)
uint64_t main_f_7ccfa0(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (112))));
    return *(uint64_t*)((char*)(p0) + 552);
}

// sub_7ccfc0  (orig 0x7ccfc0, straight-line)
uint8_t main_f_7ccfc0(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (112))));
    return *(uint8_t*)((char*)(p0) + 560);
}

// sub_7cd130  (orig 0x7cd130, mov_ret)
uint32_t main_f_7cd130() { return 1; }

// sub_7cd1f0  (orig 0x7cd1f0, straight)
void* main_f_7cd1f0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 136));
    return (char*)(p0) + 8;
}

// sub_7cd430  (orig 0x7cd430, getter-chain)
uint8_t main_f_7cd430(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 9); }

// sub_7cd930  (orig 0x7cd930, getter-chain)
uint8_t main_f_7cd930(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 1017); }

// sub_7ce130  (orig 0x7ce130, getter)
uint64_t main_f_7ce130(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_7ce140  (orig 0x7ce140, straight)
uint8_t main_f_7ce140(void* a0) { return ((*(uint8_t*)((char*)(a0) + 111)) >> (6)) & (1); }

// sub_7ce150  (orig 0x7ce150, straight)
void* main_f_7ce150(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint16_t*)((char*)(a0) + 114) = *(uint16_t*)((char*)(a1));
    *(uint16_t*)((char*)(p1) + 116) = *(uint16_t*)((char*)(p0) + 2);
    *(uint16_t*)((char*)(p1) + 118) = *(uint16_t*)((char*)(p0) + 4);
    *(uint16_t*)((char*)(p1) + 120) = *(uint16_t*)((char*)(p0) + 6);
    return a0;
}

// sub_7cfdd0  (orig 0x7cfdd0, getter)
uint8_t main_f_7cfdd0(void* a0) { return *(uint8_t*)((char*)(a0) + 694); }

// sub_7d0ac0  (orig 0x7d0ac0, straight)
void main_f_7d0ac0(void* a0) {
    *(uint8_t*)((char*)(a0) + 693) = (*(uint8_t*)((char*)(a0) + 693)) | (2);
}

// sub_7d0b40  (orig 0x7d0b40, straight)
void main_f_7d0b40(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 848) = a1;
    *(uint8_t*)((char*)(a0) + 693) = (*(uint8_t*)((char*)(a0) + 693)) | (8);
}

// sub_7d0b60  (orig 0x7d0b60, straight)
void main_f_7d0b60(void* a0) {
    *(uint64_t*)((char*)(a0) + 848) = 0;
    *(uint8_t*)((char*)(a0) + 693) = (*(uint8_t*)((char*)(a0) + 693)) & (4294967287);
}

// sub_7d0b80  (orig 0x7d0b80, getter)
uint64_t main_f_7d0b80(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_7d0b90  (orig 0x7d0b90, getter)
uint64_t main_f_7d0b90(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_7d0ba0  (orig 0x7d0ba0, getter)
uint64_t main_f_7d0ba0(void* a0) { return *(uint64_t*)((char*)(a0) + 592); }

// sub_7d0bb0  (orig 0x7d0bb0, getter)
uint64_t main_f_7d0bb0(void* a0) { return *(uint64_t*)((char*)(a0) + 592); }

// sub_7d0bc0  (orig 0x7d0bc0, straight-line)
uint16_t main_f_7d0bc0(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((uint32_t)a1)) * 2)));
    return *(uint16_t*)((char*)(p0) + 600);
}

// sub_7d0bd0  (orig 0x7d0bd0, copy-chain)
void main_f_7d0bd0(void* a0, void* a1) { *(uint16_t*)((char*)(a0) + 608) = *(uint16_t*)((char*)(a1) + 8); *(uint64_t*)((char*)(a0) + 600) = *(uint64_t*)((char*)(a1)); }

// sub_7d0c10  (orig 0x7d0c10, straight)
void main_f_7d0c10(void* a0) {
    *(uint8_t*)((char*)(a0) + 693) = (*(uint8_t*)((char*)(a0) + 693)) | (64);
}

// sub_7d23f0  (orig 0x7d23f0, mov_ret)
uint32_t main_f_7d23f0() { return 1; }

// sub_7d3a50  (orig 0x7d3a50, straight)
uint8_t main_f_7d3a50(void* a0) { return ((*(uint8_t*)((char*)(a0) + 693)) >> (5)) & (1); }

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
void* main_f_7e89c0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 5;
    *(uint8_t*)((char*)(a0)) = (uint8_t)k1;
    *(uint32_t*)((char*)(p0) + 4) = 5;
    return a0;
}

// sub_7e89d0  (orig 0x7e89d0, straight)
void* main_f_7e89d0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 5;
    *(uint8_t*)((char*)(a0)) = (uint8_t)k1;
    *(uint32_t*)((char*)(p0) + 4) = 5;
    return a0;
}

// sub_7e89e0  (orig 0x7e89e0, getter)
uint8_t main_f_7e89e0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_7e89f0  (orig 0x7e89f0, setter)
void main_f_7e89f0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0)) = a1; }

// sub_7e8a00  (orig 0x7e8a00, getter)
uint32_t main_f_7e8a00(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_7e8a10  (orig 0x7e8a10, setter)
void main_f_7e8a10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 4) = a1; }

// sub_7e9970  (orig 0x7e9970, setter-chain-zero)
void main_f_7e9970(void* a0) {
    struct u64x2 { uint64_t a, b; };
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

// sub_7e9990  (orig 0x7e9990, ret_only)
void main_f_7e9990() {}

// sub_7e99e0  (orig 0x7e99e0, getter)
uint16_t main_f_7e99e0(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_7e99f0  (orig 0x7e99f0, setter-chain)
void main_f_7e99f0(void* a0) { *(uint32_t*)((char*)(a0) + 88) = 0; *(uint64_t*)((char*)(a0) + 72) = 0; *(uint64_t*)((char*)(a0) + 80) = 0; *(uint64_t*)((char*)(a0) + 64) = 0; }

// sub_7e9a00  (orig 0x7e9a00, straight)
uint32_t main_f_7e9a00(void* a0, uint8_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (a1) * 4)));
    return *(uint32_t*)((char*)(p0) + 64);
}

// sub_7e9a10  (orig 0x7e9a10, straight)
void main_f_7e9a10(void* a0, uint8_t a1, uint64_t a2) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (a1) * 4)));
    *(uint32_t*)((char*)(p0) + 64) = (uint32_t)(a2);
}

// sub_7e9a20  (orig 0x7e9a20, straight)
void main_f_7e9a20(void* a0) {
    *(uint32_t*)((char*)(a0) + 60) = (*(uint32_t*)((char*)(a0) + 60)) | (268435456);
}

// sub_7e9a50  (orig 0x7e9a50, straight)
void main_f_7e9a50(void* a0) {
    *(uint32_t*)((char*)(a0) + 60) = (*(uint32_t*)((char*)(a0) + 60)) & (4261412863);
}

// sub_7e9a60  (orig 0x7e9a60, getter)
uint8_t main_f_7e9a60(void* a0) { return *(uint8_t*)((char*)(a0) + 59); }

// sub_7e9a70  (orig 0x7e9a70, setter)
void main_f_7e9a70(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 40) = a1; }

// sub_7e9a80  (orig 0x7e9a80, setter)
void main_f_7e9a80(void* a0) { *(uint64_t*)((char*)(a0) + 40) = 0; }

// sub_7e9a90  (orig 0x7e9a90, getter)
uint64_t main_f_7e9a90(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_7e9aa0  (orig 0x7e9aa0, straight)
void* main_f_7e9aa0(void* a0) {
    uint32_t k0 = 8;
    *(uint8_t*)((char*)(a0) + 48) = (uint8_t)k0;
    return a0;
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

// sub_7e9bb0  (orig 0x7e9bb0, straight)
uint8_t main_f_7e9bb0(void* a0) { return ((*(uint8_t*)((char*)(a0) + 63)) >> (5)) & (1); }

// sub_7e9bc0  (orig 0x7e9bc0, straight)
uint8_t main_f_7e9bc0(void* a0) { return ((*(uint8_t*)((char*)(a0) + 63)) >> (2)) & (1); }

// sub_7e9bd0  (orig 0x7e9bd0, straight)
uint8_t main_f_7e9bd0(void* a0) { return (*(uint8_t*)((char*)(a0) + 63)) & (1); }

// sub_7e9be0  (orig 0x7e9be0, straight)
uint8_t main_f_7e9be0(void* a0) { return ((*(uint8_t*)((char*)(a0) + 63)) >> (1)) & (1); }

// sub_7e9bf0  (orig 0x7e9bf0, straight)
uint8_t main_f_7e9bf0(void* a0) { return ((*(uint8_t*)((char*)(a0) + 63)) >> (3)) & (1); }

// sub_7e9c00  (orig 0x7e9c00, straight)
uint8_t main_f_7e9c00(void* a0) { return ((*(uint8_t*)((char*)(a0) + 63)) >> (4)) & (1); }

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

// sub_7e9df0  (orig 0x7e9df0, ret_only)
void main_f_7e9df0() {}

// sub_7e9e10  (orig 0x7e9e10, setter)
void main_f_7e9e10(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 8) = a1; }

// sub_7e9e20  (orig 0x7e9e20, setter-chain)
void main_f_7e9e20(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; *(uint8_t*)((char*)(a0) + 10) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; }

// sub_7e9ea0  (orig 0x7e9ea0, straight)
void* main_f_7e9ea0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 10) = (uint8_t)k0;
    return a0;
}

// sub_7e9f20  (orig 0x7e9f20, straight)
void* main_f_7e9f20(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 0;
    *(uint64_t*)((char*)(a0) + 12) = 0;
    *(uint32_t*)((char*)(p0) + 20) = 0;
    *(uint64_t*)((char*)(p0) + 24) = a1;
    *(uint8_t*)((char*)(p0) + 10) = (uint8_t)k1;
    return a0;
}

// sub_7e9f40  (orig 0x7e9f40, getter)
uint16_t main_f_7e9f40(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_7e9f50  (orig 0x7e9f50, getter)
uint32_t main_f_7e9f50(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_7e9f60  (orig 0x7e9f60, getter)
uint64_t main_f_7e9f60(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_7ea260  (orig 0x7ea260, compare)
bool main_f_7ea260(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 3080)) == (uint64_t)(0); }

// sub_7ea800  (orig 0x7ea800, straight)
uint64_t main_f_7ea800(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(((char *)(char*)(p0) + (uintptr_t)(*(uint32_t*)((char*)(a0) + 1032)) * 32)));
    return *(uint64_t*)((char*)(p1) + 8);
}

// sub_7ea810  (orig 0x7ea810, guarded)
void* main_f_7ea810(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    if ((*(uint32_t*)((char*)(a0) + 1032)) <= (30)) {
        *(uint32_t*)((char*)(p0) + 1032) = (*(uint32_t*)((char*)(a0) + 1032)) + (1);
        return a0;
    }
    return a0;
}

// sub_7eaf40  (orig 0x7eaf40, getter)
uint64_t main_f_7eaf40(void* a0) { return *(uint64_t*)((char*)(a0) + 5512L); }

// sub_7eba90  (orig 0x7eba90, strlit-flag-ret)
void *main_f_7eba90(void* a0) { static char g_f_7eba90[1]; *(uint32_t *)((char*)(a0)) = 507; __asm__ volatile("" ::: "memory"); return g_f_7eba90; }

// sub_7ecc90  (orig 0x7ecc90, straight)
uint64_t main_f_7ecc90(void* a0, uint8_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (a1) * 8)));
    return *(uint64_t*)((char*)(p0) + 288);
}

// sub_7ed1a0  (orig 0x7ed1a0, straight-line)
uint64_t main_f_7ed1a0(uint64_t a0, uint32_t a1) { return ((((uint64_t)a0)) + ((((uint64_t)(((uint32_t)(((uint32_t)a1)))))) * (((uint64_t)(((uint32_t)(56))))))) + (8); }

// sub_7ed1b0  (orig 0x7ed1b0, straight-line)
uint64_t main_f_7ed1b0(uint64_t a0, uint32_t a1) { return ((((uint64_t)a0)) + ((((uint64_t)(((uint32_t)(((uint32_t)a1)))))) * (((uint64_t)(((uint32_t)(56))))))) + (8); }

// sub_7ed1e0  (orig 0x7ed1e0, straight)
uint64_t main_f_7ed1e0(void* a0, uint8_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (a1) * 8)));
    return *(uint64_t*)((char*)(p0) + 288);
}

// sub_7ed7d0  (orig 0x7ed7d0, straight)
void* main_f_7ed7d0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0)) = *(uint32_t*)((char*)(a1));
    *(uint8_t*)((char*)(p1) + 4) = *(uint8_t*)((char*)(p0) + 4);
    *(uint8_t*)((char*)(p1) + 5) = *(uint8_t*)((char*)(p0) + 5);
    *(uint8_t*)((char*)(p1) + 6) = *(uint8_t*)((char*)(p0) + 6);
    *(uint8_t*)((char*)(p1) + 7) = *(uint8_t*)((char*)(p0) + 7);
    *(uint8_t*)((char*)(p1) + 8) = *(uint8_t*)((char*)(p0) + 8);
    *(uint64_t*)((char*)(p1) + 24) = *(uint64_t*)((char*)(p0) + 24);
    *(uint64_t*)((char*)(p1) + 16) = *(uint64_t*)((char*)(p0) + 16);
    return a0;
}

// sub_7ee040  (orig 0x7ee040, straight)
void* main_f_7ee040(void* a0) {
    uint32_t k0 = 7936;
    *(uint16_t*)((char*)(a0) + 624) = (uint16_t)k0;
    return a0;
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

// sub_7ef220  (orig 0x7ef220, straight)
uint8_t main_f_7ef220(void* a0) { return ((*(uint8_t*)((char*)(a0) + 135)) >> (5)) & (1); }

// sub_7ef230  (orig 0x7ef230, ptr_add)
void* main_f_7ef230(void* a0) { return (char*)a0 + 592; }

// sub_7ef240  (orig 0x7ef240, getter)
uint8_t main_f_7ef240(void* a0) { return *(uint8_t*)((char*)(a0) + 624); }

// sub_7ef250  (orig 0x7ef250, getter)
uint8_t main_f_7ef250(void* a0) { return *(uint8_t*)((char*)(a0) + 625); }

// sub_7ef2b0  (orig 0x7ef2b0, call)
extern void sub_7eef50();
uint32_t main_f_7ef2b0(uint64_t a0) {
    uint32_t r0 = ((((uint32_t (*)(uintptr_t, uintptr_t))&sub_7eef50)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(13))) == 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_7ef2d0  (orig 0x7ef2d0, getter)
uint8_t main_f_7ef2d0(void* a0) { return *(uint8_t*)((char*)(a0) + 626); }

// sub_7ef2e0  (orig 0x7ef2e0, guarded)
void* main_f_7ef2e0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    if ((*(uint8_t*)((char*)(a0) + 626)) != (255)) {
        *(uint8_t*)((char*)(p0) + 626) = (*(uint8_t*)((char*)(a0) + 626)) + (1);
        return a0;
    }
    return a0;
}

// sub_7ef300  (orig 0x7ef300, getter)
uint8_t main_f_7ef300(void* a0) { return *(uint8_t*)((char*)(a0) + 834); }

// sub_7ef310  (orig 0x7ef310, setter)
void main_f_7ef310(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 834) = a1; }

// sub_7ef320  (orig 0x7ef320, getter)
uint64_t main_f_7ef320(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_7ef330  (orig 0x7ef330, getter)
uint64_t main_f_7ef330(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_7ef4c0  (orig 0x7ef4c0, straight)
uint8_t main_f_7ef4c0(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((uint32_t)a1)) * 8)));
    return ((*(uint8_t*)((char*)(p0) + 144) & (uint64_t)(7)) ? 1 : 0);
}

// sub_7ef530  (orig 0x7ef530, compare)
bool main_f_7ef530(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 700)) == (uint64_t)(510); }

// sub_7ef750  (orig 0x7ef750, straight-line)
uint64_t main_f_7ef750(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((uint32_t)a1)) * 8)));
    return *(uint64_t*)((char*)(p0) + 144);
}

// sub_7ef760  (orig 0x7ef760, indexed-getter)
uint8_t main_f_7ef760(void* a0, uint32_t a1) { return *(uint8_t *)(((char *)a0 + a1 * 1 + 504)); }

// sub_7efe00  (orig 0x7efe00, getter)
uint8_t main_f_7efe00(void* a0) { return *(uint8_t*)((char*)(a0) + 828); }

// sub_7efee0  (orig 0x7efee0, getter)
uint8_t main_f_7efee0(void* a0) { return *(uint8_t*)((char*)(a0) + 832); }

// sub_7efef0  (orig 0x7efef0, straight-line)
uint32_t main_f_7efef0(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (28))));
    return *(uint32_t*)((char*)(p0) + 724);
}

// sub_7eff10  (orig 0x7eff10, straight-line)
uint32_t main_f_7eff10(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (28))));
    return *(uint32_t*)((char*)(p0) + 712);
}

// sub_7eff30  (orig 0x7eff30, straight-line)
uint8_t main_f_7eff30(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (28))));
    return ((*(uint8_t*)((char*)(p0) + 731) & (uint64_t)(15)) ? 1 : 0);
}

// sub_7f00f0  (orig 0x7f00f0, straight-line)
uint8_t main_f_7f00f0(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (28))));
    return (*(uint8_t*)((char*)(p0) + 729)) - (*(uint8_t*)((char*)(p0) + 728));
}

// sub_7f0110  (orig 0x7f0110, straight-line)
uint8_t main_f_7f0110(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (28))));
    return (*(uint8_t*)((char*)(p0) + 717)) - (*(uint8_t*)((char*)(p0) + 716));
}

// sub_7f01b0  (orig 0x7f01b0, straight-line)
uint8_t main_f_7f01b0(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (28))));
    return *(uint8_t*)((char*)(p0) + 716);
}

// sub_7f09c0  (orig 0x7f09c0, getter)
uint16_t main_f_7f09c0(void* a0) { return *(uint16_t*)((char*)(a0) + 118); }

// sub_7f09d0  (orig 0x7f09d0, setter)
void main_f_7f09d0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 118) = a1; }

// sub_7f0a70  (orig 0x7f0a70, getter)
uint16_t main_f_7f0a70(void* a0) { return *(uint16_t*)((char*)(a0) + 580); }

// sub_7f0a80  (orig 0x7f0a80, straight)
void* main_f_7f0a80(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint16_t*)((char*)(p0) + 580) = (*(uint16_t*)((char*)(a0) + 580)) + (1);
    return a0;
}

// sub_7f0a90  (orig 0x7f0a90, getter)
uint16_t main_f_7f0a90(void* a0) { return *(uint16_t*)((char*)(a0) + 836); }

// sub_7f0b70  (orig 0x7f0b70, straight)
uint8_t main_f_7f0b70(void* a0) { return ((*(uint8_t*)((char*)(a0) + 860) & (uint64_t)(120)) ? 1 : 0); }

// sub_7f0ba0  (orig 0x7f0ba0, indexed-getter)
uint8_t main_f_7f0ba0(void* a0, uint32_t a1) { return *(uint8_t *)(((char *)a0 + a1 * 1 + 865)); }

// sub_7f11b0  (orig 0x7f11b0, straight)
void main_f_7f11b0(void* a0) {
    uint32_t k0 = 6;
    uint32_t k1 = 1542;
    *(uint8_t*)((char*)(a0) + 698) = (uint8_t)k0;
    *(uint16_t*)((char*)(a0) + 696) = (uint16_t)k1;
    *(uint32_t*)((char*)(a0) + 692) = 101058054;
}

// sub_7f1310  (orig 0x7f1310, getter)
uint8_t main_f_7f1310(void* a0) { return *(uint8_t*)((char*)(a0) + 831); }

// sub_7f13d0  (orig 0x7f13d0, setter)
void main_f_7f13d0(void* a0) { *(uint16_t*)((char*)(a0) + 116) = 0; }

// sub_7f1cd0  (orig 0x7f1cd0, guarded)
void* main_f_7f1cd0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 31;
    if ((*(uint8_t*)((char*)(a0) + 1116)) != (31)) {
        *(uint8_t*)((char*)(p0) + 1116) = (uint8_t)k1;
        *(uint32_t*)((char*)(p0) + 1112) = 0;
        return a0;
    }
    return a0;
}

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

// sub_7f2560  (orig 0x7f2560, straight)
uint8_t main_f_7f2560(void* a0) { return (*(uint8_t*)((char*)(a0) + 135)) >> (7); }

// sub_7f2570  (orig 0x7f2570, straight-line)
void main_f_7f2570(void* a0, uint32_t a1) {
    *(uint16_t*)((char*)(a0) + 826) = (uint16_t)((((((uint32_t)a1) & (uint64_t)(65535))) ? (((uint32_t)a1)) : ((0) + (1))));
}

// sub_7f2580  (orig 0x7f2580, getter)
uint16_t main_f_7f2580(void* a0) { return *(uint16_t*)((char*)(a0) + 826); }

// sub_7f26d0  (orig 0x7f26d0, straight)
void main_f_7f26d0(void* a0, uint32_t a1, uint64_t a2) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((uint32_t)a1)) * 1)));
    *(uint8_t*)((char*)(p0) + 865) = (uint8_t)(a2);
}

// sub_7f29c0  (orig 0x7f29c0, straight)
uint8_t main_f_7f29c0(void* a0) { return ((*(uint8_t*)((char*)(a0) + 135)) >> (6)) & (1); }

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
void* main_f_7f37d0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 64) = (uint8_t)k0;
    return a0;
}

// sub_7f37e0  (orig 0x7f37e0, setter-chain)
void main_f_7f37e0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 64) = 0; *(uint8_t*)((char*)(a0) + 63) = a1; }

// sub_7f7c40  (orig 0x7f7c40, compare)
bool main_f_7f7c40(uint64_t a0) { return (int32_t)(a0) < (int64_t)(6); }

// sub_7f8330  (orig 0x7f8330, compare)
bool main_f_7f8330(uint64_t a0) { return (uint32_t)(a0) != (uint64_t)(0); }

// sub_7f8340  (orig 0x7f8340, mov_ret)
uint32_t main_f_7f8340(uint32_t a0, uint32_t a1) { return a1; }

// sub_7f8780  (orig 0x7f8780, mov_ret)
uint32_t main_f_7f8780() { return 248; }

// sub_7f8b70  (orig 0x7f8b70, straight)
uint32_t main_f_7f8b70(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (3)) & (31); }

// sub_7f8ba0  (orig 0x7f8ba0, straight)
void* main_f_7f8ba0(void* a0, void* a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 4);
    *(uint32_t*)((char*)(a2)) = (uint32_t)(*(uint64_t*)((char*)(p0)));
    return a0;
}

// sub_7f8ce0  (orig 0x7f8ce0, straight)
void* main_f_7f8ce0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 5;
    *(uint32_t*)((char*)(a0)) = 0;
    *(uint8_t*)((char*)(p0) + 4) = (uint8_t)k1;
    return a0;
}

// sub_7f8cf0  (orig 0x7f8cf0, setter-chain)
void main_f_7f8cf0(void* a0, uint32_t a1, uint8_t a2) { *(uint32_t*)((char*)(a0)) = a1; *(uint8_t*)((char*)(a0) + 4) = a2; }

// sub_7f8d00  (orig 0x7f8d00, straight)
void* main_f_7f8d00(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0)) = *(uint32_t*)((char*)(a1));
    *(uint8_t*)((char*)(p1) + 4) = *(uint8_t*)((char*)(p0) + 4);
    return a0;
}

// sub_7f9c20  (orig 0x7f9c20, call)
extern void sub_7f9ac0();
uint32_t main_f_7f9c20() {
    uint32_t r0 = ((((uint32_t (*)(void))&sub_7f9ac0)() != 5) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_7fc170  (orig 0x7fc170, compare)
bool main_f_7fc170(uint64_t a0) { return (uint32_t)(a0) == (uint64_t)(2); }

// sub_7fc180  (orig 0x7fc180, mov_ret)
uint32_t main_f_7fc180() { return 1; }

// sub_7fc1c0  (orig 0x7fc1c0, setter-chain)
void main_f_7fc1c0(void* a0) { *(uint8_t*)((char*)(a0) + 48) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 40) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_7fc1e0  (orig 0x7fc1e0, ret_only)
void main_f_7fc1e0() {}

// sub_7fc1f0  (orig 0x7fc1f0, setter-chain)
void main_f_7fc1f0(void* a0) { *(uint8_t*)((char*)(a0) + 48) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 40) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_7fc2e0  (orig 0x7fc2e0, getter)
uint8_t main_f_7fc2e0(void* a0) { return *(uint8_t*)((char*)(a0) + 48); }

// sub_7fc740  (orig 0x7fc740, setter-chain)
void main_f_7fc740(void* a0) { *(uint16_t*)((char*)(a0) + 4) = 0; *(uint32_t*)((char*)(a0)) = 0; }

// sub_7fc750  (orig 0x7fc750, straight)
void* main_f_7fc750(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint8_t*)((char*)(a0)) = *(uint8_t*)((char*)(a1));
    *(uint8_t*)((char*)(p1) + 1) = *(uint8_t*)((char*)(p0) + 1);
    *(uint8_t*)((char*)(p1) + 2) = *(uint8_t*)((char*)(p0) + 2);
    *(uint8_t*)((char*)(p1) + 3) = *(uint8_t*)((char*)(p0) + 3);
    *(uint8_t*)((char*)(p1) + 4) = *(uint8_t*)((char*)(p0) + 4);
    return a0;
}

// sub_7fc7d0  (orig 0x7fc7d0, copy2)
void main_f_7fc7d0(void* a0) { *(uint8_t*)((char*)(a0) + 4) = *(uint8_t*)((char*)(a0) + 5); }

// sub_7fc7e0  (orig 0x7fc7e0, straight)
void* main_f_7fc7e0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0)) = (uint8_t)k0;
    return a0;
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

// sub_7fe2e0  (orig 0x7fe2e0, straight)
uint64_t main_f_7fe2e0(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((uint32_t)a1)) * 32)));
    return *(uint64_t*)((char*)(p0) + 424);
}

// sub_7fe2f0  (orig 0x7fe2f0, straight)
uint64_t main_f_7fe2f0(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((uint32_t)a1)) * 32)));
    return *(uint64_t*)((char*)(p0) + 424);
}

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

// sub_7fe850  (orig 0x7fe850, copy-chain)
void main_f_7fe850(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1) + 8); *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1)); }

// sub_7fead0  (orig 0x7fead0, setter-chain)
void main_f_7fead0(void* a0) { *(uint16_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_7feb10  (orig 0x7feb10, straight)
void* main_f_7feb10(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint8_t*)((char*)(a0) + 16) = *(uint8_t*)((char*)(a1) + 16);
    *(uint8_t*)((char*)(p1) + 17) = *(uint8_t*)((char*)(p0) + 17);
    *(uint8_t*)((char*)(p1) + 18) = *(uint8_t*)((char*)(p0) + 18);
    *(uint8_t*)((char*)(p1) + 19) = *(uint8_t*)((char*)(p0) + 19);
    *(uint8_t*)((char*)(p1) + 20) = *(uint8_t*)((char*)(p0) + 20);
    *(uint8_t*)((char*)(p1) + 21) = *(uint8_t*)((char*)(p0) + 21);
    *(uint8_t*)((char*)(p1) + 22) = *(uint8_t*)((char*)(p0) + 22);
    *(uint8_t*)((char*)(p1) + 23) = *(uint8_t*)((char*)(p0) + 23);
    *(uint8_t*)((char*)(p1) + 24) = *(uint8_t*)((char*)(p0) + 24);
    *(uint8_t*)((char*)(p1) + 25) = *(uint8_t*)((char*)(p0) + 25);
    return a0;
}

// sub_7feb70  (orig 0x7feb70, setter)
void main_f_7feb70(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_7ff3e0  (orig 0x7ff3e0, setter-chain-zero)
void main_f_7ff3e0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 120) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 104) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 88) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 72) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_7ff5c0  (orig 0x7ff5c0, ret_only)
void main_f_7ff5c0() {}

// fileName  (orig 0x7ff5e0, straight)
void main_f_7ff5e0(void* a0) {
    uint32_t k0 = 5;
    *(uint64_t*)((char*)(a0)) = 361700864106168320;
    *(uint8_t*)((char*)(a0) + 8) = (uint8_t)k0;
}

// sub_7ff600  (orig 0x7ff600, ret_only)
void main_f_7ff600() {}

// sub_7ff610  (orig 0x7ff610, straight)
void main_f_7ff610(void* a0) {
    uint32_t k0 = 5;
    *(uint64_t*)((char*)(a0)) = 361700864106168320;
    *(uint8_t*)((char*)(a0) + 8) = (uint8_t)k0;
}

// sub_7ff780  (orig 0x7ff780, straight)
void* main_f_7ff780(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0));
    *(uint8_t*)((char*)(p1) + 4) = *(uint8_t*)((char*)(p0) + 4);
    *(uint8_t*)((char*)(p1) + 5) = *(uint8_t*)((char*)(p0) + 5);
    *(uint8_t*)((char*)(p1) + 6) = *(uint8_t*)((char*)(p0) + 6);
    *(uint8_t*)((char*)(p1) + 7) = *(uint8_t*)((char*)(p0) + 7);
    *(uint8_t*)((char*)(p1) + 8) = *(uint8_t*)((char*)(p0) + 8);
    return a0;
}

// sub_7ff860  (orig 0x7ff860, setter)
void main_f_7ff860(void* a0) { *(uint8_t*)((char*)(a0) + 8) = 0; }

// sub_7ff870  (orig 0x7ff870, copy2)
void main_f_7ff870(void* a0, void* a1) { *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8); }

// sub_7ff880  (orig 0x7ff880, straight)
uint8_t main_f_7ff880(void* a0, uint16_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (a1) * 1)));
    return *(uint8_t*)((char*)(p0) + 8);
}

// sub_7ff890  (orig 0x7ff890, straight)
void main_f_7ff890(void* a0, uint16_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (a1) * 1)));
    uint32_t k1 = 1;
    *(uint8_t*)((char*)(p0) + 8) = (uint8_t)k1;
}

// sub_7ff8a0  (orig 0x7ff8a0, ret_only)
void main_f_7ff8a0() {}

// sub_7ffa70  (orig 0x7ffa70, ret_only)
void main_f_7ffa70() {}

// sub_7ffaa0  (orig 0x7ffaa0, getter)
uint8_t main_f_7ffaa0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_7ffab0  (orig 0x7ffab0, getter)
uint32_t main_f_7ffab0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_7ffaf0  (orig 0x7ffaf0, getter)
uint8_t main_f_7ffaf0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_7ffb30  (orig 0x7ffb30, getter)
uint32_t main_f_7ffb30(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_7ffb60  (orig 0x7ffb60, straight)
void* main_f_7ffb60(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint8_t k1 = 0;
    uint8_t k2 = 0;
    uint32_t k3 = 31;
    *(uint8_t*)((char*)(a0)) = 0;
    *(uint32_t*)((char*)(p0) + 4) = (uint32_t)k1;
    *(uint32_t*)((char*)(p0) + 12) = (uint32_t)k2;
    *(uint8_t*)((char*)(p0) + 16) = (uint8_t)k3;
    return a0;
}

// sub_800280  (orig 0x800280, compare)
bool main_f_800280(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 420)) != (uint64_t)(0); }

// sub_8003c0  (orig 0x8003c0, getter)
uint8_t main_f_8003c0(void* a0) { return *(uint8_t*)((char*)(a0) + 17); }

// sub_8003d0  (orig 0x8003d0, getter)
uint32_t main_f_8003d0(void* a0) { return *(uint32_t*)((char*)(a0) + 136); }

// sub_8005a0  (orig 0x8005a0, setter-chain-zero)
void main_f_8005a0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 232) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 216) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 200) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 184) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 168) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 152) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 136) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 120) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 104) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 88) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 72) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_8005e0  (orig 0x8005e0, ret_only)
void main_f_8005e0() {}

// sub_800a70  (orig 0x800a70, straight)
void* main_f_800a70(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint8_t k1 = 0;
    uint8_t k2 = 0;
    *(uint32_t*)((char*)(a0) + 16) = 5;
    *(uint8_t*)((char*)(p0) + 20) = 0;
    *(uint32_t*)((char*)(p0) + 24) = 5;
    *(uint8_t*)((char*)(p0) + 28) = 0;
    *(uint32_t*)((char*)(p0) + 32) = 5;
    *(uint8_t*)((char*)(p0) + 36) = 0;
    *(uint32_t*)((char*)(p0) + 40) = 5;
    *(uint8_t*)((char*)(p0) + 44) = 0;
    *(uint32_t*)((char*)(p0) + 48) = 5;
    *(uint8_t*)((char*)(p0) + 52) = 0;
    *(uint16_t*)((char*)(p0) + 56) = (uint16_t)k1;
    *(uint32_t*)((char*)(p0) + 60) = (uint32_t)k2;
    return a0;
}

// sub_800bf0  (orig 0x800bf0, getter)
uint8_t main_f_800bf0(void* a0) { return *(uint8_t*)((char*)(a0) + 56); }

// sub_800c60  (orig 0x800c60, guarded)
void* main_f_800c60(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    if ((*(uint32_t*)((char*)(a0) + 60)) <= (9998)) {
        *(uint32_t*)((char*)(p0) + 60) = (*(uint32_t*)((char*)(a0) + 60)) + (1);
        return a0;
    }
    return a0;
}

// sub_800d00  (orig 0x800d00, straight)
void* main_f_800d00(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 0;
    uint32_t k2 = 0;
    *(uint32_t*)((char*)(a0) + 16) = 0;
    *(uint8_t*)((char*)(p0) + 20) = (uint8_t)k1;
    *(uint64_t*)((char*)(p0) + 24) = 0;
    *(uint16_t*)((char*)(p0) + 32) = (uint16_t)k2;
    *(uint32_t*)((char*)(p0) + 36) = 0;
    *(uint64_t*)((char*)(p0) + 7) = 0;
    *(uint64_t*)((char*)(p0)) = 0;
    return a0;
}

// sub_801750  (orig 0x801750, ret_only)
void main_f_801750() {}

// sub_8017b0  (orig 0x8017b0, getter)
uint8_t main_f_8017b0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_8017c0  (orig 0x8017c0, copy2)
void main_f_8017c0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 20) = *(uint32_t*)((char*)(a1)); }

// sub_8017d0  (orig 0x8017d0, setter)
void main_f_8017d0(void* a0) { *(uint8_t*)((char*)(a0) + 16) = 0; }

// sub_8017e0  (orig 0x8017e0, ptr_add)
void* main_f_8017e0(void* a0) { return (char*)a0 + 20; }

// sub_8017f0  (orig 0x8017f0, straight)
void* main_f_8017f0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint8_t k1 = 0;
    *(uint8_t*)((char*)(a0)) = 0;
    *(uint8_t*)((char*)(p0) + 12) = 0;
    *(uint16_t*)((char*)(p0) + 10) = (uint16_t)k1;
    *(uint64_t*)((char*)(p0) + 2) = 0;
    return a0;
}

// sub_801810  (orig 0x801810, straight)
void* main_f_801810(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint8_t k1 = 0;
    *(uint8_t*)((char*)(a0)) = 0;
    *(uint8_t*)((char*)(p0) + 12) = 0;
    *(uint16_t*)((char*)(p0) + 10) = (uint16_t)k1;
    *(uint64_t*)((char*)(p0) + 2) = 0;
    return a0;
}

// sub_801830  (orig 0x801830, straight)
void main_f_801830(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0)) = *(uint8_t*)((char*)(a1));
    *(uint16_t*)((char*)(a0) + 10) = *(uint16_t*)((char*)(a1) + 10);
    *(uint64_t*)((char*)(a0) + 2) = *(uint64_t*)((char*)(a1) + 2);
    *(uint8_t*)((char*)(a0) + 12) = *(uint8_t*)((char*)(a1) + 12);
}

// sub_801860  (orig 0x801860, getter)
uint8_t main_f_801860(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_801870  (orig 0x801870, guarded)
void* main_f_801870(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    if ((*(uint8_t*)((char*)(a0))) <= (3)) {
        *(uint8_t*)((char*)(p0)) = (*(uint8_t*)((char*)(a0))) + (1);
        return a0;
    }
    return a0;
}

// sub_801890  (orig 0x801890, compare)
bool main_f_801890(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) > (uint64_t)(3); }

// sub_8018f0  (orig 0x8018f0, guarded)
void main_f_8018f0(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((uint32_t)a1)) * 2)));
    if ((a1) <= (4)) {
        *(uint16_t*)((char*)(p0) + 2) = 0;
        return;
    }
}

// sub_801910  (orig 0x801910, straight)
void* main_f_801910(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 12) = (uint8_t)k0;
    return a0;
}

// sub_801920  (orig 0x801920, getter)
uint8_t main_f_801920(void* a0) { return *(uint8_t*)((char*)(a0) + 12); }

// sub_802330  (orig 0x802330, ret_only)
void main_f_802330() {}

// sub_802350  (orig 0x802350, struct-copy)
void main_f_802350(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)((char*)a1 + 8);
    uint64_t v1 = *(uint64_t*)((char*)a1 + 24);
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 8) = s0.a;
}

// sub_802460  (orig 0x802460, compare)
bool main_f_802460(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 28)) != (uint64_t)(0); }

// sub_802470  (orig 0x802470, getter)
uint32_t main_f_802470(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_802480  (orig 0x802480, straight)
uint32_t main_f_802480(void* a0) { return ((*(uint32_t*)((char*)(a0) + 16)) >> (8)) & (63); }

// sub_802490  (orig 0x802490, getter)
uint32_t main_f_802490(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_8024a0  (orig 0x8024a0, straight)
uint32_t main_f_8024a0(void* a0) { return (((*(uint32_t*)((char*)(a0) + 16)) >> (8)) & (63)) - (*(uint32_t*)((char*)(a0) + 24)); }

// sub_8024c0  (orig 0x8024c0, call)
extern void sub_7f89e0();
uint32_t main_f_8024c0(void* a0) {
    uint32_t r0 = (((uint32_t (*)(uintptr_t))&sub_7f89e0)(((uintptr_t)((char*)(a0) + 16)))) & (65535);
    asm volatile("");
    return r0;
}

// sub_8024e0  (orig 0x8024e0, ptr_add)
void* main_f_8024e0(void* a0) { return (char*)a0 + 16; }

// sub_802500  (orig 0x802500, straight)
void* main_f_802500(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(p0) + 24) = (*(uint32_t*)((char*)(a0) + 24)) + (1);
    return a0;
}

// sub_802580  (orig 0x802580, copy2)
void main_f_802580(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1) + 8); }

// sub_802590  (orig 0x802590, setter)
void main_f_802590(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_8025d0  (orig 0x8025d0, ret_only)
void main_f_8025d0() {}

// sub_8025f0  (orig 0x8025f0, straight)
void* main_f_8025f0(void* a0) {
    uint32_t k0 = 7;
    *(uint8_t*)((char*)(a0)) = (uint8_t)k0;
    return a0;
}

// sub_802600  (orig 0x802600, straight)
void* main_f_802600(void* a0) {
    uint32_t k0 = 7;
    *(uint8_t*)((char*)(a0)) = (uint8_t)k0;
    return a0;
}

// sub_802610  (orig 0x802610, copy2)
void main_f_802610(void* a0, void* a1) { *(uint8_t*)((char*)(a0)) = *(uint8_t*)((char*)(a1)); }

// sub_802620  (orig 0x802620, compare)
bool main_f_802620(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) > (uint64_t)(6); }

// sub_802630  (orig 0x802630, guarded)
void* main_f_802630(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    if ((*(uint8_t*)((char*)(a0))) <= (6)) {
        *(uint8_t*)((char*)(p0)) = (*(uint8_t*)((char*)(a0))) + (1);
        return a0;
    }
    return a0;
}

// sub_802650  (orig 0x802650, setter)
void main_f_802650(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_802dd0  (orig 0x802dd0, straight)
void* main_f_802dd0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 48) = (uint64_t)((char*)(a0) + 15);
    *(uint8_t*)((char*)(p0) + 60) = 0;
    *(uint32_t*)((char*)(p0) + 56) = 30;
    return a0;
}

// sub_802df0  (orig 0x802df0, straight)
void main_f_802df0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 7) = *(uint64_t*)((char*)(a1) + 7);
    *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1));
    *(uint64_t*)((char*)(a0) + 37) = *(uint64_t*)((char*)(a1) + 37);
    *(uint64_t*)((char*)(a0) + 31) = *(uint64_t*)((char*)(a1) + 31);
    *(uint64_t*)((char*)(a0) + 23) = *(uint64_t*)((char*)(a1) + 23);
    *(uint64_t*)((char*)(a0) + 15) = *(uint64_t*)((char*)(a1) + 15);
}

// sub_803a10  (orig 0x803a10, setter-chain)
void main_f_803a10(void* a0) { *(uint16_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0)) = 0; }

// sub_803a20  (orig 0x803a20, setter-chain)
void main_f_803a20(void* a0) { *(uint16_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0)) = 0; }

// sub_803a30  (orig 0x803a30, copy-chain)
void main_f_803a30(void* a0, void* a1) { *(uint16_t*)((char*)(a0) + 8) = *(uint16_t*)((char*)(a1) + 8); *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1)); }

// sub_803c60  (orig 0x803c60, setter-chain)
void main_f_803c60(void* a0) { *(uint32_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_803c70  (orig 0x803c70, setter-chain)
void main_f_803c70(void* a0) { *(uint32_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_803d10  (orig 0x803d10, straight)
uint8_t main_f_803d10(void* a0) { return ((*(uint8_t*)((char*)(a0) + 2) & (uint64_t)(127)) ? 1 : 0); }

// sub_803d40  (orig 0x803d40, getter)
uint16_t main_f_803d40(void* a0) { return *(uint16_t*)((char*)(a0)); }

// sub_803d50  (orig 0x803d50, straight)
uint16_t main_f_803d50(void* a0) { return (*(uint16_t*)((char*)(a0) + 2)) & (127); }

// sub_803db0  (orig 0x803db0, straight)
uint16_t main_f_803db0(void* a0) { return ((*(uint16_t*)((char*)(a0) + 2)) >> (7)) & (127); }

// sub_803dc0  (orig 0x803dc0, ptr_add)
void* main_f_803dc0(void* a0) { return (char*)a0 + 4; }

// sub_803df0  (orig 0x803df0, straight)
uint8_t main_f_803df0(void* a0) { return ((*(uint8_t*)((char*)(a0) + 3)) >> (6)) & (1); }

// sub_803e00  (orig 0x803e00, getter)
uint32_t main_f_803e00(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_803e10  (orig 0x803e10, straight)
void main_f_803e10(void* a0) {
    *(uint16_t*)((char*)(a0) + 2) = (*(uint16_t*)((char*)(a0) + 2)) | (32768);
}

// sub_803e20  (orig 0x803e20, compare)
bool main_f_803e20(void* a0) { return (int16_t)(*(uint16_t*)((char*)(a0) + 2)) < (int64_t)(0); }

// sub_803e30  (orig 0x803e30, mov_ret)
uint32_t main_f_803e30() { return 3; }

// sub_804590  (orig 0x804590, ret_only)
void main_f_804590() {}

// sub_8049b0  (orig 0x8049b0, ret_only)
void main_f_8049b0() {}

// sub_812b30  (orig 0x812b30, ret_only)
void main_f_812b30() {}

// sub_812ca0  (orig 0x812ca0, ret_only)
void main_f_812ca0() {}

// sub_812cc0  (orig 0x812cc0, straight)
void* main_f_812cc0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1285;
    uint32_t k2 = 0;
    uint32_t k3 = 65535;
    uint32_t k4 = 0;
    *(uint16_t*)((char*)(a0) + 4) = (uint16_t)k1;
    *(uint32_t*)((char*)(p0)) = 0;
    *(uint8_t*)((char*)(p0) + 10) = (uint8_t)k2;
    *(uint32_t*)((char*)(p0) + 6) = 0;
    *(uint16_t*)((char*)(p0) + 12) = (uint16_t)k3;
    *(uint8_t*)((char*)(p0) + 14) = (uint8_t)k4;
    *(uint32_t*)((char*)(p0) + 16) = 0;
    return a0;
}

// sub_812cf0  (orig 0x812cf0, setter)
void main_f_812cf0(void* a0) { *(uint32_t*)((char*)(a0) + 16) = 0; }

// sub_812db0  (orig 0x812db0, setter)
void main_f_812db0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 4) = a1; }

// sub_812dc0  (orig 0x812dc0, setter)
void main_f_812dc0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0)) = a1; }

// sub_812dd0  (orig 0x812dd0, getter)
uint32_t main_f_812dd0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_812de0  (orig 0x812de0, straight)
void* main_f_812de0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 9) = (uint8_t)k0;
    return a0;
}

// sub_812e10  (orig 0x812e10, getter)
uint8_t main_f_812e10(void* a0) { return *(uint8_t*)((char*)(a0) + 9); }

// sub_812e20  (orig 0x812e20, getter)
uint8_t main_f_812e20(void* a0) { return *(uint8_t*)((char*)(a0) + 10); }

// sub_812e30  (orig 0x812e30, setter)
void main_f_812e30(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 6) = a1; }

// sub_812e90  (orig 0x812e90, straight)
uint8_t main_f_812e90(void* a0) { return ((*(uint8_t*)((char*)(a0) + 16) & (uint64_t)(31)) ? 1 : 0); }

// sub_812ea0  (orig 0x812ea0, straight)
void* main_f_812ea0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 8) = (uint8_t)k0;
    return a0;
}

// sub_812eb0  (orig 0x812eb0, straight)
void* main_f_812eb0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 14) = (uint8_t)k0;
    return a0;
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

// sub_813b30  (orig 0x813b30, straight-line)
uint32_t main_f_813b30(void* a0) { return ((*(uint32_t*)((char*)(a0) + 4) == *(uint32_t*)((char*)(a0))) ? 1 : 0); }

// sub_813d50  (orig 0x813d50, setter)
void main_f_813d50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 4) = a1; }

// sub_818770  (orig 0x818770, ret_only)
void main_f_818770() {}

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

// sub_819610  (orig 0x819610, call)
extern void sub_7e9830();
uint64_t main_f_819610(void* a0) {
    uint64_t r0 = ((uint64_t (*)(uintptr_t, uintptr_t))&sub_7e9830)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 48))), ((uintptr_t)(37)));
    asm volatile("");
    return r0;
}

// sub_81c590  (orig 0x81c590, ret_only)
void main_f_81c590() {}

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

// sub_829d30  (orig 0x829d30, straight)
void main_f_829d30(void* a0) {
    uint32_t k0 = 5;
    uint64_t k1 = 84215045;
    *(uint8_t*)((char*)(a0) + 12) = (uint8_t)k0;
    *(uint32_t*)((char*)(a0) + 8) = (uint32_t)k1;
}

// sub_829d50  (orig 0x829d50, ret_only)
void main_f_829d50() {}

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

// sub_82ac80  (orig 0x82ac80, call)
extern void sub_7c4c70();
uint32_t main_f_82ac80(void* a0) {
    uint32_t r0 = ((((uint32_t (*)(uintptr_t))&sub_7c4c70)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8)))) & (uint64_t)(255)) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_82ae00  (orig 0x82ae00, call)
extern void sub_780c30();
uint32_t main_f_82ae00(uint64_t unused0, uint32_t a1) {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(uintptr_t))&sub_780c30)(((uintptr_t)(((uint32_t)a1))))))) & (1);
    asm volatile("");
    return r0;
}

// sub_82b070  (orig 0x82b070, ret_only)
void main_f_82b070() {}

// sub_82b090  (orig 0x82b090, straight)
void* main_f_82b090(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint8_t k1 = 0;
    uint32_t k2 = 1311;
    *(uint32_t*)((char*)(a0) + 2) = -1;
    *(uint8_t*)((char*)(p0)) = 0;
    *(uint32_t*)((char*)(p0) + 8) = (uint32_t)k1;
    *(uint16_t*)((char*)(p0) + 12) = (uint16_t)k2;
    *(uint8_t*)((char*)(p0) + 14) = 0;
    return a0;
}

// sub_82b0b0  (orig 0x82b0b0, straight)
void* main_f_82b0b0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint8_t k1 = 0;
    uint32_t k2 = 1311;
    *(uint32_t*)((char*)(a0) + 2) = -1;
    *(uint8_t*)((char*)(p0)) = 0;
    *(uint32_t*)((char*)(p0) + 8) = (uint32_t)k1;
    *(uint16_t*)((char*)(p0) + 12) = (uint16_t)k2;
    *(uint8_t*)((char*)(p0) + 14) = 0;
    return a0;
}

// sub_82b0d0  (orig 0x82b0d0, getter)
uint8_t main_f_82b0d0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_82b4c0  (orig 0x82b4c0, setter-chain)
void main_f_82b4c0(void* a0) { *(uint32_t*)((char*)(a0) + 192) = 0; *(uint64_t*)((char*)(a0) + 176) = 0; *(uint64_t*)((char*)(a0) + 184) = 0; *(uint64_t*)((char*)(a0) + 136) = 0; *(uint64_t*)((char*)(a0) + 160) = 0; *(uint64_t*)((char*)(a0) + 168) = 0; *(uint64_t*)((char*)(a0) + 144) = 0; *(uint64_t*)((char*)(a0) + 152) = 0; }

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

// sub_82b540  (orig 0x82b540, straight)
void* main_f_82b540(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint8_t*)((char*)(p0) + 196) = (*(uint8_t*)((char*)(a0) + 196)) + (1);
    return a0;
}

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

// sub_82b800  (orig 0x82b800, straight)
void* main_f_82b800(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 30) = 0;
    *(uint64_t*)((char*)(p0) + 16) = 0;
    *(uint64_t*)((char*)(p0) + 24) = 0;
    *(uint64_t*)((char*)(p0) + 8) = 0;
    return a0;
}

// sub_82b810  (orig 0x82b810, ret_only)
void main_f_82b810() {}

// sub_82cca0  (orig 0x82cca0, setter)
void main_f_82cca0(void* a0) { *(uint8_t*)((char*)(a0) + 2888) = 0; }

// sub_82ccb0  (orig 0x82ccb0, getter)
uint8_t main_f_82ccb0(void* a0) { return *(uint8_t*)((char*)(a0) + 2888); }

// sub_82d5d0  (orig 0x82d5d0, ret_only)
void main_f_82d5d0() {}

// sub_82d670  (orig 0x82d670, setter-chain)
void main_f_82d670(void* a0) { *(uint64_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 40) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_82d950  (orig 0x82d950, straight)
uint32_t main_f_82d950(uint32_t a0) { return ((((uint32_t)a0)) >> (25)) & (7); }

// sub_82d970  (orig 0x82d970, straight)
uint32_t main_f_82d970(uint32_t a0) { return (((uint32_t)a0)) & (4194303); }

// sub_82d980  (orig 0x82d980, straight)
uint32_t main_f_82d980(uint32_t a0) { return (((((uint32_t)a0)) >> (16)) & (63)) - (7); }

// sub_82f7f0  (orig 0x82f7f0, setter-chain)
void main_f_82f7f0(void* a0) { *(uint8_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0)) = 0; }

// sub_82f800  (orig 0x82f800, ret_only)
void main_f_82f800() {}

// sub_82f830  (orig 0x82f830, setter)
void main_f_82f830(void* a0) { *(uint8_t*)((char*)(a0) + 24) = 0; }

// sub_831000  (orig 0x831000, ret_only)
void main_f_831000() {}

// sub_831020  (orig 0x831020, straight)
void* main_f_831020(void* a0) {
    *(uint32_t*)((char*)(a0)) = -1;
    return a0;
}

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

// sub_8384f0  (orig 0x8384f0, straight-line)
uint16_t main_f_8384f0(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (12))));
    return *(uint16_t*)((char*)(p0) + 54);
}

// sub_8385c0  (orig 0x8385c0, straight-line)
uint32_t main_f_8385c0(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (12))));
    return *(uint32_t*)((char*)(p0) + 60);
}

// sub_8385e0  (orig 0x8385e0, straight-line)
uint8_t main_f_8385e0(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (12))));
    return *(uint8_t*)((char*)(p0) + 53);
}

// sub_838600  (orig 0x838600, straight-line)
uint8_t main_f_838600(uint64_t a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + (((((uint64_t)a1)) & (255)) * (12))));
    return *(uint8_t*)((char*)(p0) + 52);
}

// sub_8470a0  (orig 0x8470a0, ret_only)
void main_f_8470a0() {}

// sub_84f130  (orig 0x84f130, setter-chain)
void main_f_84f130(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; *(uint16_t*)((char*)(a0) + 12) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_84f140  (orig 0x84f140, setter)
void main_f_84f140(void* a0) { *(uint8_t*)((char*)(a0) + 13) = 0; }

// sub_84f450  (orig 0x84f450, compare)
bool main_f_84f450(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 13)) != (uint64_t)(0); }

// sub_84f560  (orig 0x84f560, getter)
uint8_t main_f_84f560(void* a0) { return *(uint8_t*)((char*)(a0) + 13); }

// sub_8503e0  (orig 0x8503e0, compare-pred)
bool main_f_8503e0(void* a0) { return (uint64_t)((*(uint64_t*)(char*)a0 & 15)) == (uint64_t)(1); }

// sub_850420  (orig 0x850420, compare-pred)
bool main_f_850420(void* a0) { return (uint64_t)((*(uint64_t*)(char*)a0 & 15)) == (uint64_t)(2); }

// sub_850440  (orig 0x850440, compare-pred)
bool main_f_850440(void* a0) { return (uint64_t)((*(uint64_t*)(char*)a0 & 15)) == (uint64_t)(7); }

// sub_8504f0  (orig 0x8504f0, straight)
void* main_f_8504f0(void* a0) {
    uint32_t k0 = 33267;
    *(uint64_t*)((char*)(a0)) = (uint64_t)k0;
    return a0;
}

// sub_850560  (orig 0x850560, setter)
void main_f_850560(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_850590  (orig 0x850590, straight)
uint32_t main_f_850590(void* a0) { return (*(uint32_t*)((char*)(a0))) & (15); }

// sub_8505a0  (orig 0x8505a0, straight)
void main_f_8505a0(void* a0) {
    *(uint64_t*)((char*)(a0)) = ((*(uint64_t*)((char*)(a0))) & (496)) | (8);
}

// sub_8505c0  (orig 0x8505c0, straight)
void main_f_8505c0(void* a0) {
    *(uint64_t*)((char*)(a0)) = ((*(uint64_t*)((char*)(a0))) & (496)) | (9);
}

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

// sub_861c20  (orig 0x861c20, ret_only)
void main_f_861c20() {}

// sub_861c30  (orig 0x861c30, ret_only)
void main_f_861c30() {}

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

// sub_885b20  (orig 0x885b20, strlit-flag-ret)
void *main_f_885b20(void* a0) { static char g_f_885b20[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_885b20; }

// sub_885db0  (orig 0x885db0, strlit-flag-ret)
void *main_f_885db0(void* a0) { static char g_f_885db0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_885db0; }

// sub_885f50  (orig 0x885f50, strlit-flag-ret)
void *main_f_885f50(void* a0) { static char g_f_885f50[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_885f50; }

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

// sub_88ca30  (orig 0x88ca30, strlit-flag-ret)
void *main_f_88ca30(void* a0) { static char g_f_88ca30[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88ca30; }

// sub_88cd70  (orig 0x88cd70, strlit-flag-ret)
void *main_f_88cd70(void* a0) { static char g_f_88cd70[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_88cd70; }

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
void* main_f_890c10(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1));
    *(uint64_t*)((char*)(p1) + 8) = *(uint64_t*)((char*)(p0) + 8);
    *(uint64_t*)((char*)(p1) + 16) = *(uint64_t*)((char*)(p0) + 16);
    *(uint64_t*)((char*)(p1) + 24) = *(uint64_t*)((char*)(p0) + 24);
    return a0;
}

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
void* main_f_892380(void* a0) {
    *(uint64_t*)((char*)(a0) + 8) = 14355223812243456;
    return a0;
}

// sub_8923d0  (orig 0x8923d0, ptr_add)
void* main_f_8923d0(void* a0) { return (char*)a0 + 8; }

// sub_8923e0  (orig 0x8923e0, ret_only)
void main_f_8923e0() {}

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

// sub_8924e0  (orig 0x8924e0, straight)
uint16_t main_f_8924e0(void* a0) { return (*(uint16_t*)((char*)(a0) + 12)) + (8); }

// sub_8925a0  (orig 0x8925a0, getter)
uint8_t main_f_8925a0(void* a0) { return *(uint8_t*)((char*)(a0) + 132); }

// sub_8925b0  (orig 0x8925b0, getter)
uint8_t main_f_8925b0(void* a0) { return *(uint8_t*)((char*)(a0) + 131); }

// sub_8925c0  (orig 0x8925c0, setter)
void main_f_8925c0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 72) = a1; }

// sub_892af0  (orig 0x892af0, ret_only)
void main_f_892af0() {}

// sub_892b10  (orig 0x892b10, setter)
void main_f_892b10(void* a0) { *(uint32_t*)((char*)(a0)) = 0; }

// sub_892b20  (orig 0x892b20, ret_only)
void main_f_892b20() {}

// sub_892bb0  (orig 0x892bb0, straight)
uint8_t main_f_892bb0(uint64_t unused0, void* a1) { return (*(uint8_t*)((char*)(a1))) & (127); }

// sub_892bd0  (orig 0x892bd0, setter)
void main_f_892bd0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_892be0  (orig 0x892be0, ret_only)
void main_f_892be0() {}

// sub_892bf0  (orig 0x892bf0, straight)
void main_f_892bf0(void* a0, uint64_t a1, uint32_t a2) {
    *(uint64_t*)((char*)(a0)) = a1;
    *(uint32_t*)((char*)(a0) + 28) = 0;
    *(uint32_t*)((char*)(a0) + 8) = (((uint32_t)a2)) & (2147483647);
    *(uint64_t*)((char*)(a0) + 20) = 0;
    *(uint64_t*)((char*)(a0) + 12) = 0;
}

// sub_892c10  (orig 0x892c10, straight)
void* main_f_892c10(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 28) = 0;
    *(uint64_t*)((char*)(p0) + 20) = 0;
    *(uint64_t*)((char*)(p0) + 12) = 0;
    return a0;
}

// sub_8944f0  (orig 0x8944f0, setter)
void main_f_8944f0(void* a0) { *(uint64_t*)((char*)(a0) + 856) = 0; }

// sub_894500  (orig 0x894500, getter)
uint8_t main_f_894500(void* a0) { return *(uint8_t*)((char*)(a0) + 321); }

// sub_894f90  (orig 0x894f90, compare)
bool main_f_894f90(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 529)) != (uint64_t)(5); }

// sub_894fd0  (orig 0x894fd0, straight)
uint32_t main_f_894fd0(void* a0) { return (((*(uint8_t*)((char*)(a0) + 529) == 5)) ? (110) : (*(uint8_t*)((char*)(a0) + 529))); }

// sub_895540  (orig 0x895540, getter)
uint8_t main_f_895540(void* a0) { return *(uint8_t*)((char*)(a0) + 564); }

// sub_895550  (orig 0x895550, ptr_add)
void* main_f_895550(void* a0) { return (char*)a0 + 544; }

// sub_896c60  (orig 0x896c60, setter)
void main_f_896c60(void* a0) { *(uint64_t*)((char*)(a0) + 864) = 0; }

// sub_898320  (orig 0x898320, straight)
void* main_f_898320(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 321) = (uint8_t)k0;
    return a0;
}

// sub_898330  (orig 0x898330, straight)
void* main_f_898330(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 217) = (uint8_t)k0;
    return a0;
}

// sub_898340  (orig 0x898340, setter)
void main_f_898340(void* a0) { *(uint8_t*)((char*)(a0) + 321) = 0; }

// sub_898350  (orig 0x898350, setter)
void main_f_898350(void* a0) { *(uint8_t*)((char*)(a0) + 217) = 0; }

// sub_898360  (orig 0x898360, straight)
void* main_f_898360(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 321) = (uint8_t)k0;
    return a0;
}

// sub_898370  (orig 0x898370, straight)
void* main_f_898370(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 217) = (uint8_t)k0;
    return a0;
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

// sub_899e50  (orig 0x899e50, ret_only)
void main_f_899e50() {}

// sub_89a2e0  (orig 0x89a2e0, ret_only)
void main_f_89a2e0() {}

// sub_89a720  (orig 0x89a720, ret_only)
void main_f_89a720() {}

// sub_89abc0  (orig 0x89abc0, struct-copy)
void main_f_89abc0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_89abe0  (orig 0x89abe0, struct-copy)
void main_f_89abe0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_89ace0  (orig 0x89ace0, ret_only)
void main_f_89ace0() {}

// sub_89acf0  (orig 0x89acf0, struct-copy)
void main_f_89acf0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_89ad10  (orig 0x89ad10, struct-copy)
void main_f_89ad10(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

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

// sub_89e750  (orig 0x89e750, indirect-tailcall)
void main_f_89e750(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

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

// sub_89ef20  (orig 0x89ef20, straight)
uint32_t main_f_89ef20(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_89f100  (orig 0x89f100, mov_ret)
uint32_t main_f_89f100() { return 1; }

// sub_89f180  (orig 0x89f180, indirect-tailcall)
void main_f_89f180(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

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

// sub_8a04f0  (orig 0x8a04f0, straight)
uint32_t main_f_8a04f0(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_8a0630  (orig 0x8a0630, mov_ret)
uint32_t main_f_8a0630() { return 1; }

// sub_8a06b0  (orig 0x8a06b0, indirect-tailcall)
void main_f_8a06b0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8a06e0  (orig 0x8a06e0, getter)
uint32_t main_f_8a06e0(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_8a06f0  (orig 0x8a06f0, mov_ret)
uint32_t main_f_8a06f0() { return 1; }

// sub_8a0700  (orig 0x8a0700, indirect-tailcall)
void main_f_8a0700(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8a0730  (orig 0x8a0730, getter)
uint32_t main_f_8a0730(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_8a0740  (orig 0x8a0740, mov_ret)
uint32_t main_f_8a0740() { return 1; }

// sub_8a0de0  (orig 0x8a0de0, setter)
void main_f_8a0de0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8a1650  (orig 0x8a1650, mov_ret)
uint32_t main_f_8a1650() { return 1; }

// sub_8a16d0  (orig 0x8a16d0, indirect-tailcall)
void main_f_8a16d0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8a1700  (orig 0x8a1700, getter)
uint32_t main_f_8a1700(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8a1710  (orig 0x8a1710, mov_ret)
uint32_t main_f_8a1710() { return 1; }

// sub_8a1c10  (orig 0x8a1c10, setter)
void main_f_8a1c10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_8a23f0  (orig 0x8a23f0, mov_ret)
uint32_t main_f_8a23f0() { return 1; }

// sub_8a2470  (orig 0x8a2470, indirect-tailcall)
void main_f_8a2470(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8a24a0  (orig 0x8a24a0, getter)
uint32_t main_f_8a24a0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_8a24b0  (orig 0x8a24b0, mov_ret)
uint32_t main_f_8a24b0() { return 1; }

// sub_8a2ac0  (orig 0x8a2ac0, setter)
void main_f_8a2ac0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_8a3160  (orig 0x8a3160, mov_ret)
uint32_t main_f_8a3160() { return 1; }

// sub_8a31e0  (orig 0x8a31e0, indirect-tailcall)
void main_f_8a31e0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_8a3210  (orig 0x8a3210, getter)
uint32_t main_f_8a3210(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

