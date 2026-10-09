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

// sub_96c910  (orig 0x96c910, copy2)
void main_f_96c910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96c920  (orig 0x96c920, copy2)
void main_f_96c920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96ca70  (orig 0x96ca70, straight)
void main_f_96ca70(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(a1));
}

// sub_96ca90  (orig 0x96ca90, ret_only)
void main_f_96ca90() {}

// sub_96caa0  (orig 0x96caa0, copy2)
void main_f_96caa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cab0  (orig 0x96cab0, copy2)
void main_f_96cab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cac0  (orig 0x96cac0, straight)
void main_f_96cac0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(a1));
}

// sub_96cae0  (orig 0x96cae0, ret_only)
void main_f_96cae0() {}

// sub_96caf0  (orig 0x96caf0, copy2)
void main_f_96caf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cb00  (orig 0x96cb00, copy2)
void main_f_96cb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cb10  (orig 0x96cb10, straight)
void main_f_96cb10(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1064) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1056) = *(uint64_t*)((char*)(a1));
}

// sub_96cb30  (orig 0x96cb30, ret_only)
void main_f_96cb30() {}

// sub_96cb40  (orig 0x96cb40, copy2)
void main_f_96cb40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cb50  (orig 0x96cb50, copy2)
void main_f_96cb50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cca0  (orig 0x96cca0, straight)
void main_f_96cca0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1080) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1072) = *(uint64_t*)((char*)(a1));
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
void main_f_96d950(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_96d970  (orig 0x96d970, ret_only)
void main_f_96d970() {}

// sub_96d980  (orig 0x96d980, copy2)
void main_f_96d980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96d990  (orig 0x96d990, copy2)
void main_f_96d990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96dae0  (orig 0x96dae0, straight)
void main_f_96dae0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_96db00  (orig 0x96db00, ret_only)
void main_f_96db00() {}

// sub_96db10  (orig 0x96db10, copy2)
void main_f_96db10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96db20  (orig 0x96db20, copy2)
void main_f_96db20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96db30  (orig 0x96db30, straight)
void main_f_96db30(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
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
void main_f_970160(void* a0) {
    uint32_t k0 = 257;
    *(uint32_t*)((char*)(a0) + 1120) = 257;
    *(uint16_t*)((char*)(a0) + 1124) = (uint16_t)k0;
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
void main_f_9788b0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 116) = (uint8_t)k0;
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
void main_f_978b40(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 44) = (uint8_t)k0;
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
    *(uint32_t *)((char *)&r + 0) = *(uint32_t*)((char*)(a0) + 1248);
    *(uint16_t *)((char *)&r + 4) = *(uint16_t*)((char*)(a0) + 1252);
    *(uint32_t *)((char *)&r + 8) = *(uint32_t*)((char*)(a0) + 1256);
    *(uint8_t *)((char *)&r + 12) = *(uint8_t*)((char*)(a0) + 1260);
    *(uint8_t *)((char *)&r + 13) = *(uint8_t*)((char*)(a0) + 1261);
    *(uint32_t *)((char *)&r + 16) = *(uint32_t*)((char*)(a0) + 1264);
    *(uint32_t *)((char *)&r + 20) = *(uint32_t*)((char*)(a0) + 1268);
    *(uint32_t *)((char *)&r + 24) = *(uint32_t*)((char*)(a0) + 1272);
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

// sub_987420  (orig 0x987420, ret_only)
void main_f_987420() {}

// sub_987430  (orig 0x987430, straight)
void main_f_987430(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
}

// sub_987450  (orig 0x987450, straight)
void main_f_987450(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
}

// sub_9874e0  (orig 0x9874e0, ret_only)
void main_f_9874e0() {}

// sub_9875b0  (orig 0x9875b0, ret_only)
void main_f_9875b0() {}

// sub_9875c0  (orig 0x9875c0, straight)
void main_f_9875c0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
}

// sub_9875e0  (orig 0x9875e0, straight)
void main_f_9875e0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
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

// sub_987eb0  (orig 0x987eb0, straight)
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
    *(uint32_t *)((char *)&r + 0) = *(uint32_t*)((char*)(a0) + 1224);
    *(uint16_t *)((char *)&r + 4) = *(uint16_t*)((char*)(a0) + 1228);
    *(uint32_t *)((char *)&r + 8) = *(uint32_t*)((char*)(a0) + 1232);
    *(uint8_t *)((char *)&r + 12) = *(uint8_t*)((char*)(a0) + 1236);
    *(uint8_t *)((char *)&r + 13) = *(uint8_t*)((char*)(a0) + 1237);
    *(uint32_t *)((char *)&r + 16) = *(uint32_t*)((char*)(a0) + 1240);
    *(uint32_t *)((char *)&r + 20) = *(uint32_t*)((char*)(a0) + 1244);
    *(uint32_t *)((char *)&r + 24) = *(uint32_t*)((char*)(a0) + 1248);
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
void main_f_9a4600(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(a1));
}

// sub_9a4680  (orig 0x9a4680, copy-chain-store)
void main_f_9a4680(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_9a4690  (orig 0x9a4690, straight)
void main_f_9a4690(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(a1));
}

// sub_9a4710  (orig 0x9a4710, copy-chain-store)
void main_f_9a4710(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_9a4720  (orig 0x9a4720, straight)
void main_f_9a4720(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_9a47a0  (orig 0x9a47a0, copy-chain-store)
void main_f_9a47a0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_9a47b0  (orig 0x9a47b0, straight)
void main_f_9a47b0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_9a4830  (orig 0x9a4830, copy-chain-store)
void main_f_9a4830(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_9a4840  (orig 0x9a4840, straight)
void main_f_9a4840(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_9a48c0  (orig 0x9a48c0, copy-chain-store)
void main_f_9a48c0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_9a48d0  (orig 0x9a48d0, straight)
void main_f_9a48d0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(a1));
}

// sub_9a48f0  (orig 0x9a48f0, ret_only)
void main_f_9a48f0() {}

// sub_9a4900  (orig 0x9a4900, copy2)
void main_f_9a4900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9a4910  (orig 0x9a4910, copy2)
void main_f_9a4910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9a71a0  (orig 0x9a71a0, straight)
void main_f_9a71a0(void* a0, void* a1, void* a2) {
    uint32_t k0 = 1;
    *(uint64_t*)((char*)(a0) + 56) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 48) = *(uint64_t*)((char*)(a1));
    *(uint64_t*)((char*)(a0) + 72) = *(uint64_t*)((char*)(a2) + 8);
    *(uint64_t*)((char*)(a0) + 64) = *(uint64_t*)((char*)(a2));
    *(uint8_t*)((char*)(a0) + 128) = (uint8_t)k0;
}

// sub_9a71e0  (orig 0x9a71e0, straight)
void main_f_9a71e0(void* a0, void* a1) {
    uint32_t k0 = 1;
    *(uint64_t*)((char*)(a0) + 104) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 96) = *(uint64_t*)((char*)(a1));
    *(uint8_t*)((char*)(a0) + 128) = (uint8_t)k0;
}

// sub_9a7200  (orig 0x9a7200, straight)
void main_f_9a7200(void* a0, void* a1) {
    uint32_t k0 = 1;
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 112) = *(uint64_t*)((char*)(a1));
    *(uint8_t*)((char*)(a0) + 128) = (uint8_t)k0;
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
void main_f_9bde40(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 52) = (uint8_t)k0;
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
void main_f_a65480(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a654a0  (orig 0xa654a0, ret_only)
void main_f_a654a0() {}

// sub_a654b0  (orig 0xa654b0, copy2)
void main_f_a654b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a654c0  (orig 0xa654c0, copy2)
void main_f_a654c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65610  (orig 0xa65610, straight)
void main_f_a65610(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a65630  (orig 0xa65630, ret_only)
void main_f_a65630() {}

// sub_a65640  (orig 0xa65640, copy2)
void main_f_a65640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65650  (orig 0xa65650, copy2)
void main_f_a65650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a657a0  (orig 0xa657a0, straight)
void main_f_a657a0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(a1));
}

// sub_a657c0  (orig 0xa657c0, ret_only)
void main_f_a657c0() {}

// sub_a657d0  (orig 0xa657d0, copy2)
void main_f_a657d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a657e0  (orig 0xa657e0, copy2)
void main_f_a657e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a657f0  (orig 0xa657f0, straight)
void main_f_a657f0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(a1));
}

// sub_a65810  (orig 0xa65810, ret_only)
void main_f_a65810() {}

// sub_a65820  (orig 0xa65820, copy2)
void main_f_a65820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65830  (orig 0xa65830, copy2)
void main_f_a65830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65840  (orig 0xa65840, straight)
void main_f_a65840(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1064) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1056) = *(uint64_t*)((char*)(a1));
}

// sub_a65860  (orig 0xa65860, ret_only)
void main_f_a65860() {}

// sub_a65870  (orig 0xa65870, copy2)
void main_f_a65870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65880  (orig 0xa65880, copy2)
void main_f_a65880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65890  (orig 0xa65890, straight)
void main_f_a65890(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a658b0  (orig 0xa658b0, ret_only)
void main_f_a658b0() {}

// sub_a658c0  (orig 0xa658c0, copy2)
void main_f_a658c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a658d0  (orig 0xa658d0, copy2)
void main_f_a658d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a658e0  (orig 0xa658e0, straight)
void main_f_a658e0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(a1));
}

// sub_a65900  (orig 0xa65900, ret_only)
void main_f_a65900() {}

// sub_a65910  (orig 0xa65910, copy2)
void main_f_a65910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65920  (orig 0xa65920, copy2)
void main_f_a65920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65930  (orig 0xa65930, straight)
void main_f_a65930(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(a1));
}

// sub_a65950  (orig 0xa65950, ret_only)
void main_f_a65950() {}

// sub_a65960  (orig 0xa65960, copy2)
void main_f_a65960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65970  (orig 0xa65970, copy2)
void main_f_a65970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65980  (orig 0xa65980, straight)
void main_f_a65980(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(a1));
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
void main_f_a65da0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(a1));
}

// sub_a65dc0  (orig 0xa65dc0, ret_only)
void main_f_a65dc0() {}

// sub_a65dd0  (orig 0xa65dd0, copy2)
void main_f_a65dd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65de0  (orig 0xa65de0, copy2)
void main_f_a65de0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65f30  (orig 0xa65f30, straight)
void main_f_a65f30(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(a1));
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
void main_f_a66fb0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a66fd0  (orig 0xa66fd0, ret_only)
void main_f_a66fd0() {}

// sub_a66fe0  (orig 0xa66fe0, copy2)
void main_f_a66fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a66ff0  (orig 0xa66ff0, copy2)
void main_f_a66ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67000  (orig 0xa67000, straight)
void main_f_a67000(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a67020  (orig 0xa67020, ret_only)
void main_f_a67020() {}

// sub_a67030  (orig 0xa67030, copy2)
void main_f_a67030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67040  (orig 0xa67040, copy2)
void main_f_a67040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67050  (orig 0xa67050, straight)
void main_f_a67050(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a67070  (orig 0xa67070, ret_only)
void main_f_a67070() {}

// sub_a67080  (orig 0xa67080, copy2)
void main_f_a67080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67090  (orig 0xa67090, copy2)
void main_f_a67090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a670a0  (orig 0xa670a0, straight)
void main_f_a670a0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a670c0  (orig 0xa670c0, ret_only)
void main_f_a670c0() {}

// sub_a670d0  (orig 0xa670d0, copy2)
void main_f_a670d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a670e0  (orig 0xa670e0, copy2)
void main_f_a670e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a670f0  (orig 0xa670f0, straight)
void main_f_a670f0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(a1));
}

// sub_a67110  (orig 0xa67110, ret_only)
void main_f_a67110() {}

// sub_a67120  (orig 0xa67120, copy2)
void main_f_a67120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67130  (orig 0xa67130, copy2)
void main_f_a67130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67140  (orig 0xa67140, straight)
void main_f_a67140(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(a1));
}

// sub_a67160  (orig 0xa67160, ret_only)
void main_f_a67160() {}

// sub_a67170  (orig 0xa67170, copy2)
void main_f_a67170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67180  (orig 0xa67180, copy2)
void main_f_a67180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67190  (orig 0xa67190, straight)
void main_f_a67190(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(a1));
}

// sub_a671b0  (orig 0xa671b0, ret_only)
void main_f_a671b0() {}

// sub_a671c0  (orig 0xa671c0, copy2)
void main_f_a671c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a671d0  (orig 0xa671d0, copy2)
void main_f_a671d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a671e0  (orig 0xa671e0, straight)
void main_f_a671e0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(a1));
}

// sub_a67200  (orig 0xa67200, ret_only)
void main_f_a67200() {}

// sub_a67210  (orig 0xa67210, copy2)
void main_f_a67210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67220  (orig 0xa67220, copy2)
void main_f_a67220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67230  (orig 0xa67230, straight)
void main_f_a67230(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1112) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1104) = *(uint64_t*)((char*)(a1));
}

// sub_a67250  (orig 0xa67250, ret_only)
void main_f_a67250() {}

// sub_a67260  (orig 0xa67260, copy2)
void main_f_a67260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67270  (orig 0xa67270, copy2)
void main_f_a67270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67280  (orig 0xa67280, straight)
void main_f_a67280(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(a1));
}

// sub_a672a0  (orig 0xa672a0, ret_only)
void main_f_a672a0() {}

// sub_a672b0  (orig 0xa672b0, copy2)
void main_f_a672b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a672c0  (orig 0xa672c0, copy2)
void main_f_a672c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a672d0  (orig 0xa672d0, straight)
void main_f_a672d0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a672f0  (orig 0xa672f0, ret_only)
void main_f_a672f0() {}

// sub_a67300  (orig 0xa67300, copy2)
void main_f_a67300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67310  (orig 0xa67310, copy2)
void main_f_a67310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67320  (orig 0xa67320, straight)
void main_f_a67320(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(a1));
}

// sub_a67340  (orig 0xa67340, ret_only)
void main_f_a67340() {}

// sub_a67350  (orig 0xa67350, copy2)
void main_f_a67350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67360  (orig 0xa67360, copy2)
void main_f_a67360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67510  (orig 0xa67510, straight)
void main_f_a67510(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(a1));
}

// sub_a67530  (orig 0xa67530, ret_only)
void main_f_a67530() {}

// sub_a67540  (orig 0xa67540, copy2)
void main_f_a67540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67550  (orig 0xa67550, copy2)
void main_f_a67550(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67560  (orig 0xa67560, straight)
void main_f_a67560(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(a1));
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
void main_f_a68280(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a682a0  (orig 0xa682a0, ret_only)
void main_f_a682a0() {}

// sub_a682b0  (orig 0xa682b0, copy2)
void main_f_a682b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a682c0  (orig 0xa682c0, copy2)
void main_f_a682c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a682d0  (orig 0xa682d0, straight)
void main_f_a682d0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a682f0  (orig 0xa682f0, ret_only)
void main_f_a682f0() {}

// sub_a68300  (orig 0xa68300, copy2)
void main_f_a68300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68310  (orig 0xa68310, copy2)
void main_f_a68310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68320  (orig 0xa68320, straight)
void main_f_a68320(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(a1));
}

// sub_a68340  (orig 0xa68340, ret_only)
void main_f_a68340() {}

// sub_a68350  (orig 0xa68350, copy2)
void main_f_a68350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68360  (orig 0xa68360, copy2)
void main_f_a68360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68370  (orig 0xa68370, straight)
void main_f_a68370(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(a1));
}

// sub_a68390  (orig 0xa68390, ret_only)
void main_f_a68390() {}

// sub_a683a0  (orig 0xa683a0, copy2)
void main_f_a683a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a683b0  (orig 0xa683b0, copy2)
void main_f_a683b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a683c0  (orig 0xa683c0, straight)
void main_f_a683c0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(a1));
}

// sub_a683e0  (orig 0xa683e0, ret_only)
void main_f_a683e0() {}

// sub_a683f0  (orig 0xa683f0, copy2)
void main_f_a683f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68400  (orig 0xa68400, copy2)
void main_f_a68400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68410  (orig 0xa68410, straight)
void main_f_a68410(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(a1));
}

// sub_a68430  (orig 0xa68430, ret_only)
void main_f_a68430() {}

// sub_a68440  (orig 0xa68440, copy2)
void main_f_a68440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68450  (orig 0xa68450, copy2)
void main_f_a68450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68460  (orig 0xa68460, straight)
void main_f_a68460(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1112) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1104) = *(uint64_t*)((char*)(a1));
}

// sub_a68480  (orig 0xa68480, ret_only)
void main_f_a68480() {}

// sub_a68490  (orig 0xa68490, copy2)
void main_f_a68490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a684a0  (orig 0xa684a0, copy2)
void main_f_a684a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a684b0  (orig 0xa684b0, straight)
void main_f_a684b0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(a1));
}

// sub_a684d0  (orig 0xa684d0, ret_only)
void main_f_a684d0() {}

// sub_a684e0  (orig 0xa684e0, copy2)
void main_f_a684e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a684f0  (orig 0xa684f0, copy2)
void main_f_a684f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68500  (orig 0xa68500, straight)
void main_f_a68500(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a68520  (orig 0xa68520, ret_only)
void main_f_a68520() {}

// sub_a68530  (orig 0xa68530, copy2)
void main_f_a68530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68540  (orig 0xa68540, copy2)
void main_f_a68540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68550  (orig 0xa68550, straight)
void main_f_a68550(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(a1));
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
void main_f_a68640(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(a1));
}

// sub_a68660  (orig 0xa68660, ret_only)
void main_f_a68660() {}

// sub_a68670  (orig 0xa68670, copy2)
void main_f_a68670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68680  (orig 0xa68680, copy2)
void main_f_a68680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68690  (orig 0xa68690, straight)
void main_f_a68690(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(a1));
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

// sub_a68780  (orig 0xa68780, ret_only)
void main_f_a68780() {}

// sub_a68790  (orig 0xa68790, copy2)
void main_f_a68790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a687a0  (orig 0xa687a0, copy2)
void main_f_a687a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69270  (orig 0xa69270, straight)
void main_f_a69270(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a69290  (orig 0xa69290, ret_only)
void main_f_a69290() {}

// sub_a692a0  (orig 0xa692a0, copy2)
void main_f_a692a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a692b0  (orig 0xa692b0, copy2)
void main_f_a692b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a692c0  (orig 0xa692c0, straight)
void main_f_a692c0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a692e0  (orig 0xa692e0, ret_only)
void main_f_a692e0() {}

// sub_a692f0  (orig 0xa692f0, copy2)
void main_f_a692f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69300  (orig 0xa69300, copy2)
void main_f_a69300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69310  (orig 0xa69310, straight)
void main_f_a69310(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 984) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 976) = *(uint64_t*)((char*)(a1));
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
void main_f_a6bb10(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a6bb30  (orig 0xa6bb30, ret_only)
void main_f_a6bb30() {}

// sub_a6bb40  (orig 0xa6bb40, copy2)
void main_f_a6bb40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bb50  (orig 0xa6bb50, copy2)
void main_f_a6bb50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bb60  (orig 0xa6bb60, straight)
void main_f_a6bb60(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a6bb80  (orig 0xa6bb80, ret_only)
void main_f_a6bb80() {}

// sub_a6bb90  (orig 0xa6bb90, copy2)
void main_f_a6bb90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bba0  (orig 0xa6bba0, copy2)
void main_f_a6bba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bbb0  (orig 0xa6bbb0, straight)
void main_f_a6bbb0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(a1));
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

// sub_a6bc90  (orig 0xa6bc90, straight-line)
void main_f_a6bc90(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint8_t*)((char*)(p0) + 7992L) = 0;
}

// sub_a6bca0  (orig 0xa6bca0, ret_only)
void main_f_a6bca0() {}

// sub_a6bcb0  (orig 0xa6bcb0, copy2)
void main_f_a6bcb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bcc0  (orig 0xa6bcc0, copy2)
void main_f_a6bcc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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
void main_f_a6c290(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a6c2b0  (orig 0xa6c2b0, ret_only)
void main_f_a6c2b0() {}

// sub_a6c2c0  (orig 0xa6c2c0, copy2)
void main_f_a6c2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c2d0  (orig 0xa6c2d0, copy2)
void main_f_a6c2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c2e0  (orig 0xa6c2e0, straight)
void main_f_a6c2e0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1016) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1008) = *(uint64_t*)((char*)(a1));
}

// sub_a6c300  (orig 0xa6c300, ret_only)
void main_f_a6c300() {}

// sub_a6c310  (orig 0xa6c310, copy2)
void main_f_a6c310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c320  (orig 0xa6c320, copy2)
void main_f_a6c320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c330  (orig 0xa6c330, straight)
void main_f_a6c330(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1064) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1056) = *(uint64_t*)((char*)(a1));
}

// sub_a6c350  (orig 0xa6c350, ret_only)
void main_f_a6c350() {}

// sub_a6c360  (orig 0xa6c360, copy2)
void main_f_a6c360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c370  (orig 0xa6c370, copy2)
void main_f_a6c370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c380  (orig 0xa6c380, straight)
void main_f_a6c380(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 968) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 960) = *(uint64_t*)((char*)(a1));
}

// sub_a6c3a0  (orig 0xa6c3a0, ret_only)
void main_f_a6c3a0() {}

// sub_a6c3b0  (orig 0xa6c3b0, copy2)
void main_f_a6c3b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c3c0  (orig 0xa6c3c0, copy2)
void main_f_a6c3c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c3d0  (orig 0xa6c3d0, straight)
void main_f_a6c3d0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)((char*)(p0) + 1096) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 1088) = *(uint64_t*)((char*)(a1));
}

// sub_a6c3f0  (orig 0xa6c3f0, ret_only)
void main_f_a6c3f0() {}

// sub_a6c400  (orig 0xa6c400, copy2)
void main_f_a6c400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c410  (orig 0xa6c410, copy2)
void main_f_a6c410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6d010  (orig 0xa6d010, mov_ret)
uint64_t main_f_a6d010() { return 0; }

// sub_a6d200  (orig 0xa6d200, straight)
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
    *(uint32_t*)((char*)(a1) + 104) = 14;
    *(uint8_t*)((char*)(a1) + 96) = 0;
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

// sub_a774c0  (orig 0xa774c0, copy-chain-store)
void main_f_a774c0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 112);
    *(uint8_t*)((char*)(t0) + 400) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)(t0) + 392) = 0;
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

// sub_a8b800  (orig 0xa8b800, getter)
uint32_t main_f_a8b800(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_a8b810  (orig 0xa8b810, setter)
void main_f_a8b810(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_a8bfa0  (orig 0xa8bfa0, ret_only)
void main_f_a8bfa0() {}

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
void main_f_ab16c0(void* a0) {
    uint32_t k0 = 2;
    *(uint64_t*)((char*)(a0) + 12296L) = (uint64_t)k0;
}

// sub_ab1ad0  (orig 0xab1ad0, straight)
uint64_t main_f_ab1ad0(uint64_t a0) { return (((uint64_t)a0)) + (12296); }

// sub_ab3620  (orig 0xab3620, ret_only)
void main_f_ab3620() {}

// sub_ab3af0  (orig 0xab3af0, getter)
uint32_t main_f_ab3af0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_ab3b00  (orig 0xab3b00, setter)
void main_f_ab3b00(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_ab4130  (orig 0xab4130, straight)
void main_f_ab4130(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 1484) = 1;
    *(uint32_t*)((char*)(a0) + 1488) = (uint32_t)(a1);
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

// sub_aba270  (orig 0xaba270, straight)
uint8_t main_f_aba270(void* a0) { return *(uint8_t*)((char*)(a0) + 6352L); }

// sub_aba280  (orig 0xaba280, straight)
void main_f_aba280(void* a0) {
    *(uint8_t*)((char*)(a0) + 6336L) = 0;
    *(uint8_t*)((char*)(a0) + 6352L) = 0;
}

// sub_aba2a0  (orig 0xaba2a0, straight)
void main_f_aba2a0(void* a0, uint64_t a1) {
    uint32_t k0 = 1;
    *(uint64_t*)((char*)(a0) + 6344L) = (uint64_t)(a1);
    *(uint8_t*)((char*)(a0) + 6336L) = (uint8_t)k0;
}

// sub_aba2c0  (orig 0xaba2c0, straight)
void main_f_aba2c0(void* a0, uint64_t a1) {
    uint32_t k0 = 1;
    *(uint64_t*)((char*)(a0) + 6248L) = (uint64_t)(a1);
    *(uint8_t*)((char*)(a0) + 6240L) = (uint8_t)k0;
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

// sub_abb090  (orig 0xabb090, straight)
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

// sub_abbd50  (orig 0xabbd50, straight)
uint64_t main_f_abbd50(uint64_t a0) { return (((uint64_t)a0)) + (6752); }

// sub_abbd60  (orig 0xabbd60, straight)
void main_f_abbd60(void* a0, uint64_t a1) {
    uint32_t k0 = 1;
    *(uint64_t*)((char*)(a0) + 6808L) = (uint64_t)(a1);
    *(uint8_t*)((char*)(a0) + 6800L) = (uint8_t)k0;
}

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

// sub_ad0dc0  (orig 0xad0dc0, const-field-set-store)
void main_f_ad0dc0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1536) = (uint32_t)(t1);
}

// sub_ad0dd0  (orig 0xad0dd0, ret_only)
void main_f_ad0dd0() {}

// sub_ad0de0  (orig 0xad0de0, copy2)
void main_f_ad0de0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0df0  (orig 0xad0df0, copy2)
void main_f_ad0df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e00  (orig 0xad0e00, const-field-set-store)
void main_f_ad0e00(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 3;
    *(uint32_t*)((char*)(t0) + 1536) = (uint32_t)(t1);
}

// sub_ad0e10  (orig 0xad0e10, ret_only)
void main_f_ad0e10() {}

// sub_ad0e20  (orig 0xad0e20, copy2)
void main_f_ad0e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e30  (orig 0xad0e30, copy2)
void main_f_ad0e30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e40  (orig 0xad0e40, const-field-set-store)
void main_f_ad0e40(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 4;
    *(uint32_t*)((char*)(t0) + 1536) = (uint32_t)(t1);
}

// sub_ad0e50  (orig 0xad0e50, ret_only)
void main_f_ad0e50() {}

// sub_ad0e60  (orig 0xad0e60, copy2)
void main_f_ad0e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e70  (orig 0xad0e70, copy2)
void main_f_ad0e70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e80  (orig 0xad0e80, const-field-set-store)
void main_f_ad0e80(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 1536) = (uint32_t)(t1);
}

// sub_ad0e90  (orig 0xad0e90, ret_only)
void main_f_ad0e90() {}

// sub_ad0ea0  (orig 0xad0ea0, copy2)
void main_f_ad0ea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0eb0  (orig 0xad0eb0, copy2)
void main_f_ad0eb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad70f0  (orig 0xad70f0, ret_only)
void main_f_ad70f0() {}

// sub_ad7170  (orig 0xad7170, ret_only)
void main_f_ad7170() {}

// sub_ad71f0  (orig 0xad71f0, ret_only)
void main_f_ad71f0() {}

// sub_ad72e0  (orig 0xad72e0, ret_only)
void main_f_ad72e0() {}

// sub_ad7360  (orig 0xad7360, const-field-set-store)
void main_f_ad7360(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1536) = (uint32_t)(t1);
}

// sub_ad7370  (orig 0xad7370, ret_only)
void main_f_ad7370() {}

// sub_ad7380  (orig 0xad7380, copy2)
void main_f_ad7380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad7390  (orig 0xad7390, copy2)
void main_f_ad7390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad9320  (orig 0xad9320, ret_only)
void main_f_ad9320() {}

// sub_ad93a0  (orig 0xad93a0, ret_only)
void main_f_ad93a0() {}

// sub_ad9730  (orig 0xad9730, const-field-set-store)
void main_f_ad9730(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1536) = (uint32_t)(t1);
}

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

// sub_ada4c0  (orig 0xada4c0, getter-chain)
uint8_t main_f_ada4c0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 2120))) + 408); }

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

// sub_adee70  (orig 0xadee70, ret_only)
void main_f_adee70() {}

// sub_adee80  (orig 0xadee80, copy2)
void main_f_adee80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_adee90  (orig 0xadee90, copy2)
void main_f_adee90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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
void main_f_ae1070(void* a0) {
    *(uint32_t*)((char*)(a0) + 2880) = 999;
    *(uint8_t*)((char*)(a0) + 2884) = 0;
}

// sub_ae1600  (orig 0xae1600, compare)
bool main_f_ae1600(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1784)) == (uint64_t)(4); }

// sub_ae1800  (orig 0xae1800, getter)
uint64_t main_f_ae1800(void* a0) { return *(uint64_t*)((char*)(a0) + 2880); }

// sub_ae4810  (orig 0xae4810, ret_only)
void main_f_ae4810() {}

// sub_ae48e0  (orig 0xae48e0, ret_only)
void main_f_ae48e0() {}

// sub_ae4900  (orig 0xae4900, const-field-set-store)
void main_f_ae4900(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae4980  (orig 0xae4980, ret_only)
void main_f_ae4980() {}

// sub_ae49a0  (orig 0xae49a0, const-field-set-store)
void main_f_ae49a0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae4a20  (orig 0xae4a20, ret_only)
void main_f_ae4a20() {}

// sub_ae4a40  (orig 0xae4a40, const-field-set-store)
void main_f_ae4a40(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae4ac0  (orig 0xae4ac0, ret_only)
void main_f_ae4ac0() {}

// sub_ae4ae0  (orig 0xae4ae0, const-field-set-store)
void main_f_ae4ae0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae4b60  (orig 0xae4b60, ret_only)
void main_f_ae4b60() {}

// sub_ae4b80  (orig 0xae4b80, copy2)
void main_f_ae4b80(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae4c00  (orig 0xae4c00, ret_only)
void main_f_ae4c00() {}

// sub_ae4c20  (orig 0xae4c20, const-field-set-store)
void main_f_ae4c20(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2880) = (uint32_t)(t1);
}

// sub_ae4ca0  (orig 0xae4ca0, ret_only)
void main_f_ae4ca0() {}

// sub_ae4cc0  (orig 0xae4cc0, const-field-set-store)
void main_f_ae4cc0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 2880) = (uint32_t)(t1);
}

// sub_ae4d40  (orig 0xae4d40, ret_only)
void main_f_ae4d40() {}

// sub_ae4d60  (orig 0xae4d60, const-field-set-store)
void main_f_ae4d60(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae4de0  (orig 0xae4de0, ret_only)
void main_f_ae4de0() {}

// sub_ae4e00  (orig 0xae4e00, const-field-set-store)
void main_f_ae4e00(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae4e80  (orig 0xae4e80, ret_only)
void main_f_ae4e80() {}

// sub_ae4ea0  (orig 0xae4ea0, const-field-set-store)
void main_f_ae4ea0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae4f20  (orig 0xae4f20, ret_only)
void main_f_ae4f20() {}

// sub_ae4f40  (orig 0xae4f40, copy2)
void main_f_ae4f40(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae4fc0  (orig 0xae4fc0, ret_only)
void main_f_ae4fc0() {}

// sub_ae4fe0  (orig 0xae4fe0, const-field-set-store)
void main_f_ae4fe0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2880) = (uint32_t)(t1);
}

// sub_ae5060  (orig 0xae5060, ret_only)
void main_f_ae5060() {}

// sub_ae5080  (orig 0xae5080, const-field-set-store)
void main_f_ae5080(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 2880) = (uint32_t)(t1);
}

// sub_ae5100  (orig 0xae5100, ret_only)
void main_f_ae5100() {}

// sub_ae5120  (orig 0xae5120, copy2)
void main_f_ae5120(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae51a0  (orig 0xae51a0, ret_only)
void main_f_ae51a0() {}

// sub_ae51c0  (orig 0xae51c0, const-field-set-store)
void main_f_ae51c0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2880) = (uint32_t)(t1);
}

// sub_ae5240  (orig 0xae5240, ret_only)
void main_f_ae5240() {}

// sub_ae5260  (orig 0xae5260, const-field-set-store)
void main_f_ae5260(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 2880) = (uint32_t)(t1);
}

// sub_ae52e0  (orig 0xae52e0, ret_only)
void main_f_ae52e0() {}

// sub_ae5300  (orig 0xae5300, copy2)
void main_f_ae5300(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae5380  (orig 0xae5380, ret_only)
void main_f_ae5380() {}

// sub_ae53a0  (orig 0xae53a0, const-field-set-store)
void main_f_ae53a0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2880) = (uint32_t)(t1);
}

// sub_ae5420  (orig 0xae5420, ret_only)
void main_f_ae5420() {}

// sub_ae5440  (orig 0xae5440, copy2)
void main_f_ae5440(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae54c0  (orig 0xae54c0, ret_only)
void main_f_ae54c0() {}

// sub_ae54e0  (orig 0xae54e0, const-field-set-store)
void main_f_ae54e0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2880) = (uint32_t)(t1);
}

// sub_ae5560  (orig 0xae5560, ret_only)
void main_f_ae5560() {}

// sub_ae5580  (orig 0xae5580, const-field-set-store)
void main_f_ae5580(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae5600  (orig 0xae5600, ret_only)
void main_f_ae5600() {}

// sub_ae5620  (orig 0xae5620, const-field-set-store)
void main_f_ae5620(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae56a0  (orig 0xae56a0, ret_only)
void main_f_ae56a0() {}

// sub_ae56c0  (orig 0xae56c0, const-field-set-store)
void main_f_ae56c0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae5740  (orig 0xae5740, ret_only)
void main_f_ae5740() {}

// sub_ae5760  (orig 0xae5760, const-field-set-store)
void main_f_ae5760(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae57e0  (orig 0xae57e0, ret_only)
void main_f_ae57e0() {}

// sub_ae5800  (orig 0xae5800, const-field-set-store)
void main_f_ae5800(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae5880  (orig 0xae5880, ret_only)
void main_f_ae5880() {}

// sub_ae58a0  (orig 0xae58a0, const-field-set-store)
void main_f_ae58a0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae5920  (orig 0xae5920, ret_only)
void main_f_ae5920() {}

// sub_ae5940  (orig 0xae5940, const-field-set-store)
void main_f_ae5940(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae59c0  (orig 0xae59c0, ret_only)
void main_f_ae59c0() {}

// sub_ae59e0  (orig 0xae59e0, const-field-set-store)
void main_f_ae59e0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae5a60  (orig 0xae5a60, ret_only)
void main_f_ae5a60() {}

// sub_ae5a80  (orig 0xae5a80, const-field-set-store)
void main_f_ae5a80(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae5b00  (orig 0xae5b00, ret_only)
void main_f_ae5b00() {}

// sub_ae5b20  (orig 0xae5b20, const-field-set-store)
void main_f_ae5b20(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae5ba0  (orig 0xae5ba0, ret_only)
void main_f_ae5ba0() {}

// sub_ae5bc0  (orig 0xae5bc0, const-field-set-store)
void main_f_ae5bc0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae5c40  (orig 0xae5c40, ret_only)
void main_f_ae5c40() {}

// sub_ae5c60  (orig 0xae5c60, const-field-set-store)
void main_f_ae5c60(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae5ce0  (orig 0xae5ce0, ret_only)
void main_f_ae5ce0() {}

// sub_ae5d00  (orig 0xae5d00, const-field-set-store)
void main_f_ae5d00(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae5d80  (orig 0xae5d80, ret_only)
void main_f_ae5d80() {}

// sub_ae5da0  (orig 0xae5da0, const-field-set-store)
void main_f_ae5da0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae5e20  (orig 0xae5e20, ret_only)
void main_f_ae5e20() {}

// sub_ae5e40  (orig 0xae5e40, const-field-set-store)
void main_f_ae5e40(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae5ec0  (orig 0xae5ec0, ret_only)
void main_f_ae5ec0() {}

// sub_ae5ee0  (orig 0xae5ee0, const-field-set-store)
void main_f_ae5ee0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae5f60  (orig 0xae5f60, ret_only)
void main_f_ae5f60() {}

// sub_ae5f80  (orig 0xae5f80, const-field-set-store)
void main_f_ae5f80(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae6000  (orig 0xae6000, ret_only)
void main_f_ae6000() {}

// sub_ae6020  (orig 0xae6020, const-field-set-store)
void main_f_ae6020(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae60a0  (orig 0xae60a0, ret_only)
void main_f_ae60a0() {}

// sub_ae60c0  (orig 0xae60c0, const-field-set-store)
void main_f_ae60c0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae6140  (orig 0xae6140, ret_only)
void main_f_ae6140() {}

// sub_ae6160  (orig 0xae6160, const-field-set-store)
void main_f_ae6160(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae61e0  (orig 0xae61e0, ret_only)
void main_f_ae61e0() {}

// sub_ae6200  (orig 0xae6200, copy2)
void main_f_ae6200(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae6280  (orig 0xae6280, ret_only)
void main_f_ae6280() {}

// sub_ae62a0  (orig 0xae62a0, const-field-set-store)
void main_f_ae62a0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2880) = (uint32_t)(t1);
}

// sub_ae6320  (orig 0xae6320, ret_only)
void main_f_ae6320() {}

// sub_ae6340  (orig 0xae6340, copy2)
void main_f_ae6340(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae63c0  (orig 0xae63c0, ret_only)
void main_f_ae63c0() {}

// sub_ae63e0  (orig 0xae63e0, const-field-set-store)
void main_f_ae63e0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2880) = (uint32_t)(t1);
}

// sub_ae6460  (orig 0xae6460, ret_only)
void main_f_ae6460() {}

// sub_ae6480  (orig 0xae6480, const-field-set-store)
void main_f_ae6480(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae6500  (orig 0xae6500, ret_only)
void main_f_ae6500() {}

// sub_ae6520  (orig 0xae6520, const-field-set-store)
void main_f_ae6520(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae65a0  (orig 0xae65a0, ret_only)
void main_f_ae65a0() {}

// sub_ae65c0  (orig 0xae65c0, const-field-set-store)
void main_f_ae65c0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae6640  (orig 0xae6640, ret_only)
void main_f_ae6640() {}

// sub_ae6660  (orig 0xae6660, const-field-set-store)
void main_f_ae6660(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae66e0  (orig 0xae66e0, ret_only)
void main_f_ae66e0() {}

// sub_ae6700  (orig 0xae6700, const-field-set-store)
void main_f_ae6700(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae6780  (orig 0xae6780, ret_only)
void main_f_ae6780() {}

// sub_ae67a0  (orig 0xae67a0, const-field-set-store)
void main_f_ae67a0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae6820  (orig 0xae6820, ret_only)
void main_f_ae6820() {}

// sub_ae6840  (orig 0xae6840, const-field-set-store)
void main_f_ae6840(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae68c0  (orig 0xae68c0, ret_only)
void main_f_ae68c0() {}

// sub_ae68e0  (orig 0xae68e0, const-field-set-store)
void main_f_ae68e0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae6960  (orig 0xae6960, ret_only)
void main_f_ae6960() {}

// sub_ae6980  (orig 0xae6980, const-field-set-store)
void main_f_ae6980(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae6a00  (orig 0xae6a00, ret_only)
void main_f_ae6a00() {}

// sub_ae6a20  (orig 0xae6a20, const-field-set-store)
void main_f_ae6a20(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae6aa0  (orig 0xae6aa0, ret_only)
void main_f_ae6aa0() {}

// sub_ae6ac0  (orig 0xae6ac0, const-field-set-store)
void main_f_ae6ac0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae6b40  (orig 0xae6b40, ret_only)
void main_f_ae6b40() {}

// sub_ae6b60  (orig 0xae6b60, copy2)
void main_f_ae6b60(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae6be0  (orig 0xae6be0, ret_only)
void main_f_ae6be0() {}

// sub_ae6c00  (orig 0xae6c00, const-field-set-store)
void main_f_ae6c00(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2880) = (uint32_t)(t1);
}

// sub_ae6c80  (orig 0xae6c80, ret_only)
void main_f_ae6c80() {}

// sub_ae6ca0  (orig 0xae6ca0, copy2)
void main_f_ae6ca0(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae6d20  (orig 0xae6d20, ret_only)
void main_f_ae6d20() {}

// sub_ae6d40  (orig 0xae6d40, const-field-set-store)
void main_f_ae6d40(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2880) = (uint32_t)(t1);
}

// sub_ae6dc0  (orig 0xae6dc0, ret_only)
void main_f_ae6dc0() {}

// sub_ae6de0  (orig 0xae6de0, const-field-set-store)
void main_f_ae6de0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 2880) = (uint32_t)(t1);
}

// sub_ae6e60  (orig 0xae6e60, ret_only)
void main_f_ae6e60() {}

// sub_ae6e80  (orig 0xae6e80, const-field-set-store)
void main_f_ae6e80(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae6f00  (orig 0xae6f00, ret_only)
void main_f_ae6f00() {}

// sub_ae6f20  (orig 0xae6f20, const-field-set-store)
void main_f_ae6f20(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae6fa0  (orig 0xae6fa0, ret_only)
void main_f_ae6fa0() {}

// sub_ae6fc0  (orig 0xae6fc0, copy2)
void main_f_ae6fc0(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae7040  (orig 0xae7040, ret_only)
void main_f_ae7040() {}

// sub_ae7060  (orig 0xae7060, const-field-set-store)
void main_f_ae7060(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2880) = (uint32_t)(t1);
}

// sub_ae70e0  (orig 0xae70e0, ret_only)
void main_f_ae70e0() {}

// sub_ae7100  (orig 0xae7100, const-field-set-store)
void main_f_ae7100(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae7180  (orig 0xae7180, ret_only)
void main_f_ae7180() {}

// sub_ae71a0  (orig 0xae71a0, const-field-set-store)
void main_f_ae71a0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae71b0  (orig 0xae71b0, ret_only)
void main_f_ae71b0() {}

// sub_ae7230  (orig 0xae7230, ret_only)
void main_f_ae7230() {}

// sub_ae7250  (orig 0xae7250, const-field-set-store)
void main_f_ae7250(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae72d0  (orig 0xae72d0, ret_only)
void main_f_ae72d0() {}

// sub_ae72f0  (orig 0xae72f0, const-field-set-store)
void main_f_ae72f0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae7370  (orig 0xae7370, ret_only)
void main_f_ae7370() {}

// sub_ae7390  (orig 0xae7390, const-field-set-store)
void main_f_ae7390(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae7410  (orig 0xae7410, ret_only)
void main_f_ae7410() {}

// sub_ae7430  (orig 0xae7430, const-field-set-store)
void main_f_ae7430(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae74b0  (orig 0xae74b0, ret_only)
void main_f_ae74b0() {}

// sub_ae74d0  (orig 0xae74d0, const-field-set-store)
void main_f_ae74d0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae7550  (orig 0xae7550, ret_only)
void main_f_ae7550() {}

// sub_ae7570  (orig 0xae7570, const-field-set-store)
void main_f_ae7570(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae75f0  (orig 0xae75f0, ret_only)
void main_f_ae75f0() {}

// sub_ae7610  (orig 0xae7610, const-field-set-store)
void main_f_ae7610(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae7690  (orig 0xae7690, ret_only)
void main_f_ae7690() {}

// sub_ae76b0  (orig 0xae76b0, const-field-set-store)
void main_f_ae76b0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae7730  (orig 0xae7730, ret_only)
void main_f_ae7730() {}

// sub_ae7750  (orig 0xae7750, const-field-set-store)
void main_f_ae7750(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae77d0  (orig 0xae77d0, ret_only)
void main_f_ae77d0() {}

// sub_ae77f0  (orig 0xae77f0, const-field-set-store)
void main_f_ae77f0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2884) = (uint8_t)(t1);
}

// sub_ae8e80  (orig 0xae8e80, ret_only)
void main_f_ae8e80() {}

// sub_ae8f70  (orig 0xae8f70, ret_only)
void main_f_ae8f70() {}

// sub_ae9060  (orig 0xae9060, ret_only)
void main_f_ae9060() {}

// sub_ae90e0  (orig 0xae90e0, const-field-set-store)
void main_f_ae90e0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1536) = (uint32_t)(t1);
}

// sub_ae90f0  (orig 0xae90f0, ret_only)
void main_f_ae90f0() {}

// sub_ae9100  (orig 0xae9100, copy2)
void main_f_ae9100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ae9110  (orig 0xae9110, copy2)
void main_f_ae9110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_aefe90  (orig 0xaefe90, ret_only)
void main_f_aefe90() {}

// sub_aeff80  (orig 0xaeff80, ret_only)
void main_f_aeff80() {}

// sub_af0070  (orig 0xaf0070, ret_only)
void main_f_af0070() {}

// sub_af00f0  (orig 0xaf00f0, const-field-set-store)
void main_f_af00f0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1536) = (uint32_t)(t1);
}

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
void main_f_af3350(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 1544) = (uint32_t)(a1);
    *(uint32_t*)((char*)(a0) + 1536) = 1;
}

// sub_af4ad0  (orig 0xaf4ad0, setter)
void main_f_af4ad0(void* a0, uint64_t unused1, uint64_t unused2, uint32_t a3) { *(uint32_t*)((char*)(a0) + 2216) = a3; }

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
void main_f_b0caa0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 168) = 2;
    *(uint8_t*)((char*)(a0) + 164) = (uint8_t)k0;
}

// sub_b0cac0  (orig 0xb0cac0, straight)
void main_f_b0cac0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 32) = 2;
    *(uint8_t*)((char*)(a0) + 28) = (uint8_t)k0;
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
void main_f_b0cb80(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 168) = 18;
    *(uint8_t*)((char*)(a0) + 164) = (uint8_t)k0;
}

// sub_b0cba0  (orig 0xb0cba0, straight)
void main_f_b0cba0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 32) = 18;
    *(uint8_t*)((char*)(a0) + 28) = (uint8_t)k0;
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

// sub_b0f150  (orig 0xb0f150, getter)
uint32_t main_f_b0f150(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_b0f160  (orig 0xb0f160, mov_ret)
uint32_t main_f_b0f160() { return 1; }

// sub_b0f6f0  (orig 0xb0f6f0, setter)
void main_f_b0f6f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_b0fbf0  (orig 0xb0fbf0, mov_ret)
uint32_t main_f_b0fbf0() { return 1; }

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
void main_f_b2d510(void* a0) {
    *(uint32_t*)((char*)(a0) + 132) = 3;
}

// sub_b2d520  (orig 0xb2d520, straight)
void main_f_b2d520(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = 3;
}

// sub_b2d530  (orig 0xb2d530, straight)
void main_f_b2d530(void* a0) {
    *(uint32_t*)((char*)(a0) + 132) = 4;
}

// sub_b2d540  (orig 0xb2d540, straight)
void main_f_b2d540(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = 4;
}

// sub_b2d550  (orig 0xb2d550, straight)
void main_f_b2d550(void* a0) {
    *(uint32_t*)((char*)(a0) + 132) = 4;
}

// sub_b2d560  (orig 0xb2d560, straight)
void main_f_b2d560(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = 4;
}

// sub_b2d570  (orig 0xb2d570, straight)
void main_f_b2d570(void* a0) {
    *(uint32_t*)((char*)(a0) + 132) = 4;
}

// sub_b2d580  (orig 0xb2d580, straight)
void main_f_b2d580(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = 4;
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
void main_f_b327a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 140) = 4;
}

// sub_b327b0  (orig 0xb327b0, straight)
void main_f_b327b0(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 4;
}

// sub_b32800  (orig 0xb32800, straight)
void main_f_b32800(void* a0) {
    *(uint32_t*)((char*)(a0) + 140) = 5;
}

// sub_b32810  (orig 0xb32810, straight)
void main_f_b32810(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 5;
}

// sub_b32820  (orig 0xb32820, straight)
void main_f_b32820(void* a0) {
    *(uint32_t*)((char*)(a0) + 140) = 5;
}

// sub_b32830  (orig 0xb32830, straight)
void main_f_b32830(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 5;
}

// sub_b32840  (orig 0xb32840, straight)
void main_f_b32840(void* a0) {
    *(uint32_t*)((char*)(a0) + 140) = 5;
}

// sub_b32850  (orig 0xb32850, straight)
void main_f_b32850(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 5;
}

// sub_b32af0  (orig 0xb32af0, ret_only)
void main_f_b32af0() {}

// sub_b32b00  (orig 0xb32b00, ret_only)
void main_f_b32b00() {}

// sub_b32eb0  (orig 0xb32eb0, ret_only)
void main_f_b32eb0() {}

// sub_b37010  (orig 0xb37010, getter)
uint64_t main_f_b37010(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_b40ea0  (orig 0xb40ea0, straight-line)
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

// sub_b8a620  (orig 0xb8a620, straight-line)
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
void main_f_bb40d0(void* a0) {
    *(uint32_t*)((char*)(a0) + 432) = 26;
    *(uint8_t*)((char*)(a0) + 458) = 0;
}

// sub_bb40e0  (orig 0xbb40e0, straight)
void main_f_bb40e0(void* a0) {
    *(uint32_t*)((char*)(a0) + 32) = 26;
    *(uint8_t*)((char*)(a0) + 58) = 0;
}

// sub_bb40f0  (orig 0xbb40f0, ret_only)
void main_f_bb40f0() {}

// sub_bb4100  (orig 0xbb4100, ret_only)
void main_f_bb4100() {}

// sub_bb4110  (orig 0xbb4110, straight)
void main_f_bb4110(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 459) = (uint8_t)k0;
}

// sub_bb4120  (orig 0xbb4120, straight)
void main_f_bb4120(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 51) = (uint8_t)k0;
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

// sub_bb5630  (orig 0xbb5630, const-field-set-store)
void main_f_bb5630(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 29;
    *(uint32_t*)((char*)(t0) + 432) = (uint32_t)(t1);
}

// sub_bb5640  (orig 0xbb5640, ret_only)
void main_f_bb5640() {}

// sub_bb5650  (orig 0xbb5650, copy2)
void main_f_bb5650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5660  (orig 0xbb5660, copy2)
void main_f_bb5660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5670  (orig 0xbb5670, const-field-set-store)
void main_f_bb5670(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 10;
    *(uint32_t*)((char*)(t0) + 432) = (uint32_t)(t1);
}

// sub_bb5680  (orig 0xbb5680, ret_only)
void main_f_bb5680() {}

// sub_bb5690  (orig 0xbb5690, copy2)
void main_f_bb5690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb56a0  (orig 0xbb56a0, copy2)
void main_f_bb56a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb56b0  (orig 0xbb56b0, const-field-set-store)
void main_f_bb56b0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 17;
    *(uint32_t*)((char*)(t0) + 432) = (uint32_t)(t1);
}

// sub_bb56c0  (orig 0xbb56c0, ret_only)
void main_f_bb56c0() {}

// sub_bb56d0  (orig 0xbb56d0, copy2)
void main_f_bb56d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb56e0  (orig 0xbb56e0, copy2)
void main_f_bb56e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb56f0  (orig 0xbb56f0, const-field-set-store)
void main_f_bb56f0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 10;
    *(uint32_t*)((char*)(t0) + 432) = (uint32_t)(t1);
}

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

// sub_bb8df0  (orig 0xbb8df0, getter)
uint32_t main_f_bb8df0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_bb8e00  (orig 0xbb8e00, mov_ret)
uint32_t main_f_bb8e00() { return 1; }

// sub_bb9350  (orig 0xbb9350, setter)
void main_f_bb9350(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_bb98d0  (orig 0xbb98d0, mov_ret)
uint32_t main_f_bb98d0() { return 1; }

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

