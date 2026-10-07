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

// sub_131e5a0  (orig 0x131e5a0, straight)
void main_f_131e5a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 1484) = 2;
}

// sub_131fef0  (orig 0x131fef0, getter)
uint32_t main_f_131fef0(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_13205a0  (orig 0x13205a0, ret_only)
void main_f_13205a0() {}

// sub_13205b0  (orig 0x13205b0, struct-copy)
void main_f_13205b0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_13205d0  (orig 0x13205d0, struct-copy)
void main_f_13205d0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1320a50  (orig 0x1320a50, ret_only)
void main_f_1320a50() {}

// sub_1320f40  (orig 0x1320f40, ret_only)
void main_f_1320f40() {}

// sub_1321210  (orig 0x1321210, ret_only)
void main_f_1321210() {}

// sub_1321220  (orig 0x1321220, ret_only)
void main_f_1321220() {}

// sub_1321230  (orig 0x1321230, mov_ret)
uint32_t main_f_1321230() { return 0; }

// sub_1322a90  (orig 0x1322a90, ret_only)
void main_f_1322a90() {}

// sub_1324900  (orig 0x1324900, ret_only)
void main_f_1324900() {}

// sub_13253c0  (orig 0x13253c0, mov_ret)
uint32_t main_f_13253c0() { return 1; }

// sub_13255a0  (orig 0x13255a0, ret_only)
void main_f_13255a0() {}

// sub_1326c00  (orig 0x1326c00, mov_ret)
uint32_t main_f_1326c00() { return 1; }

// sub_1326d40  (orig 0x1326d40, ret_only)
void main_f_1326d40() {}

// sub_13270b0  (orig 0x13270b0, mov_ret)
uint32_t main_f_13270b0() { return 1; }

// sub_1327790  (orig 0x1327790, getter)
uint64_t main_f_1327790(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1327900  (orig 0x1327900, mov_ret)
uint32_t main_f_1327900() { return 1; }

// sub_1327910  (orig 0x1327910, indexed-getter)
uint64_t main_f_1327910(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1327920  (orig 0x1327920, indexed-getter)
uint64_t main_f_1327920(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_132aad0  (orig 0x132aad0, ret_only)
void main_f_132aad0() {}

// sub_132b690  (orig 0x132b690, mov_ret)
uint32_t main_f_132b690() { return 0; }

// sub_132b9f0  (orig 0x132b9f0, straight)
void main_f_132b9f0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 1516) = *(uint32_t*)((char*)(a0) + 8);
    *(uint8_t*)((char*)(p0) + 1512) = (uint8_t)k1;
}

// sub_132ba10  (orig 0x132ba10, ret_only)
void main_f_132ba10() {}

// sub_132e090  (orig 0x132e090, ret_only)
void main_f_132e090() {}

// sub_132e5d0  (orig 0x132e5d0, ret_only)
void main_f_132e5d0() {}

// sub_132e5e0  (orig 0x132e5e0, copy2)
void main_f_132e5e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_132e5f0  (orig 0x132e5f0, copy2)
void main_f_132e5f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_132e600  (orig 0x132e600, ret_only)
void main_f_132e600() {}

// sub_132e610  (orig 0x132e610, ret_only)
void main_f_132e610() {}

// sub_132e620  (orig 0x132e620, ret_only)
void main_f_132e620() {}

// sub_132e630  (orig 0x132e630, ret_only)
void main_f_132e630() {}

// sub_132e8c0  (orig 0x132e8c0, ret_only)
void main_f_132e8c0() {}

// sub_132e8d0  (orig 0x132e8d0, copy2)
void main_f_132e8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_132e8e0  (orig 0x132e8e0, copy2)
void main_f_132e8e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_132e8f0  (orig 0x132e8f0, ret_only)
void main_f_132e8f0() {}

// sub_132e900  (orig 0x132e900, ret_only)
void main_f_132e900() {}

// sub_132e910  (orig 0x132e910, ret_only)
void main_f_132e910() {}

// sub_132e920  (orig 0x132e920, ret_only)
void main_f_132e920() {}

// sub_132fd90  (orig 0x132fd90, ret_only)
void main_f_132fd90() {}

// sub_1330300  (orig 0x1330300, ret_only)
void main_f_1330300() {}

// sub_1330310  (orig 0x1330310, copy2)
void main_f_1330310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330320  (orig 0x1330320, copy2)
void main_f_1330320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330330  (orig 0x1330330, ret_only)
void main_f_1330330() {}

// sub_1330340  (orig 0x1330340, ret_only)
void main_f_1330340() {}

// sub_1330350  (orig 0x1330350, ret_only)
void main_f_1330350() {}

// sub_1330360  (orig 0x1330360, ret_only)
void main_f_1330360() {}

// sub_13303c0  (orig 0x13303c0, ret_only)
void main_f_13303c0() {}

// sub_13303d0  (orig 0x13303d0, copy2)
void main_f_13303d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13303e0  (orig 0x13303e0, copy2)
void main_f_13303e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13303f0  (orig 0x13303f0, ret_only)
void main_f_13303f0() {}

// sub_1330400  (orig 0x1330400, ret_only)
void main_f_1330400() {}

// sub_1330410  (orig 0x1330410, ret_only)
void main_f_1330410() {}

// sub_1330420  (orig 0x1330420, ret_only)
void main_f_1330420() {}

// sub_1330440  (orig 0x1330440, ret_only)
void main_f_1330440() {}

// sub_1330450  (orig 0x1330450, copy2)
void main_f_1330450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330460  (orig 0x1330460, copy2)
void main_f_1330460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330470  (orig 0x1330470, ret_only)
void main_f_1330470() {}

// sub_1330480  (orig 0x1330480, ret_only)
void main_f_1330480() {}

// sub_1330490  (orig 0x1330490, ret_only)
void main_f_1330490() {}

// sub_13304a0  (orig 0x13304a0, ret_only)
void main_f_13304a0() {}

// sub_1330520  (orig 0x1330520, ret_only)
void main_f_1330520() {}

// sub_1330530  (orig 0x1330530, copy2)
void main_f_1330530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330540  (orig 0x1330540, copy2)
void main_f_1330540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330550  (orig 0x1330550, ret_only)
void main_f_1330550() {}

// sub_1330560  (orig 0x1330560, ret_only)
void main_f_1330560() {}

// sub_1330570  (orig 0x1330570, ret_only)
void main_f_1330570() {}

// sub_1330580  (orig 0x1330580, ret_only)
void main_f_1330580() {}

// sub_1330600  (orig 0x1330600, ret_only)
void main_f_1330600() {}

// sub_1330610  (orig 0x1330610, copy2)
void main_f_1330610(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330620  (orig 0x1330620, copy2)
void main_f_1330620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330630  (orig 0x1330630, ret_only)
void main_f_1330630() {}

// sub_1330640  (orig 0x1330640, ret_only)
void main_f_1330640() {}

// sub_1330650  (orig 0x1330650, ret_only)
void main_f_1330650() {}

// sub_1330660  (orig 0x1330660, ret_only)
void main_f_1330660() {}

// sub_1331d50  (orig 0x1331d50, getter)
uint64_t main_f_1331d50(void* a0) { return *(uint64_t*)((char*)(a0) + 448); }

// sub_1331d60  (orig 0x1331d60, getter)
uint64_t main_f_1331d60(void* a0) { return *(uint64_t*)((char*)(a0) + 480); }

// sub_1331d70  (orig 0x1331d70, getter)
uint64_t main_f_1331d70(void* a0) { return *(uint64_t*)((char*)(a0) + 512); }

// sub_1331eb0  (orig 0x1331eb0, ptr_add)
void* main_f_1331eb0(void* a0) { return (char*)a0 + 608; }

// sub_1333ca0  (orig 0x1333ca0, ret_only)
void main_f_1333ca0() {}

// sub_1334660  (orig 0x1334660, ret_only)
void main_f_1334660() {}

// sub_1334670  (orig 0x1334670, copy2)
void main_f_1334670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1334680  (orig 0x1334680, copy2)
void main_f_1334680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1334690  (orig 0x1334690, ret_only)
void main_f_1334690() {}

// sub_13346a0  (orig 0x13346a0, ret_only)
void main_f_13346a0() {}

// sub_13346b0  (orig 0x13346b0, ret_only)
void main_f_13346b0() {}

// sub_13346c0  (orig 0x13346c0, ret_only)
void main_f_13346c0() {}

// sub_13347c0  (orig 0x13347c0, ret_only)
void main_f_13347c0() {}

// sub_13347d0  (orig 0x13347d0, copy2)
void main_f_13347d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13347e0  (orig 0x13347e0, copy2)
void main_f_13347e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13347f0  (orig 0x13347f0, ret_only)
void main_f_13347f0() {}

// sub_1334800  (orig 0x1334800, ret_only)
void main_f_1334800() {}

// sub_1334810  (orig 0x1334810, ret_only)
void main_f_1334810() {}

// sub_1334820  (orig 0x1334820, ret_only)
void main_f_1334820() {}

// sub_1334880  (orig 0x1334880, ret_only)
void main_f_1334880() {}

// sub_1334890  (orig 0x1334890, copy2)
void main_f_1334890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13348a0  (orig 0x13348a0, copy2)
void main_f_13348a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13348b0  (orig 0x13348b0, ret_only)
void main_f_13348b0() {}

// sub_13348c0  (orig 0x13348c0, ret_only)
void main_f_13348c0() {}

// sub_13348d0  (orig 0x13348d0, ret_only)
void main_f_13348d0() {}

// sub_13348e0  (orig 0x13348e0, ret_only)
void main_f_13348e0() {}

// sub_1334960  (orig 0x1334960, ret_only)
void main_f_1334960() {}

// sub_1334970  (orig 0x1334970, copy2)
void main_f_1334970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1334980  (orig 0x1334980, copy2)
void main_f_1334980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1334990  (orig 0x1334990, ret_only)
void main_f_1334990() {}

// sub_13349a0  (orig 0x13349a0, ret_only)
void main_f_13349a0() {}

// sub_13349b0  (orig 0x13349b0, ret_only)
void main_f_13349b0() {}

// sub_13349c0  (orig 0x13349c0, ret_only)
void main_f_13349c0() {}

// sub_1334a90  (orig 0x1334a90, ret_only)
void main_f_1334a90() {}

// sub_1334ac0  (orig 0x1334ac0, ret_only)
void main_f_1334ac0() {}

// sub_1334ad0  (orig 0x1334ad0, ret_only)
void main_f_1334ad0() {}

// sub_1334ae0  (orig 0x1334ae0, ret_only)
void main_f_1334ae0() {}

// sub_1334af0  (orig 0x1334af0, ret_only)
void main_f_1334af0() {}

// sub_1337210  (orig 0x1337210, ret_only)
void main_f_1337210() {}

// sub_1337580  (orig 0x1337580, ret_only)
void main_f_1337580() {}

// sub_1337590  (orig 0x1337590, copy2)
void main_f_1337590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13375a0  (orig 0x13375a0, copy2)
void main_f_13375a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13375b0  (orig 0x13375b0, ret_only)
void main_f_13375b0() {}

// sub_13375c0  (orig 0x13375c0, ret_only)
void main_f_13375c0() {}

// sub_13375d0  (orig 0x13375d0, ret_only)
void main_f_13375d0() {}

// sub_13375e0  (orig 0x13375e0, ret_only)
void main_f_13375e0() {}

// sub_13377f0  (orig 0x13377f0, ret_only)
void main_f_13377f0() {}

// sub_1337800  (orig 0x1337800, copy2)
void main_f_1337800(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337810  (orig 0x1337810, copy2)
void main_f_1337810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337820  (orig 0x1337820, ret_only)
void main_f_1337820() {}

// sub_1337830  (orig 0x1337830, ret_only)
void main_f_1337830() {}

// sub_1337840  (orig 0x1337840, ret_only)
void main_f_1337840() {}

// sub_1337850  (orig 0x1337850, ret_only)
void main_f_1337850() {}

// sub_1337c30  (orig 0x1337c30, ret_only)
void main_f_1337c30() {}

// sub_1337c40  (orig 0x1337c40, copy2)
void main_f_1337c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337c50  (orig 0x1337c50, copy2)
void main_f_1337c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337c60  (orig 0x1337c60, ret_only)
void main_f_1337c60() {}

// sub_1337c70  (orig 0x1337c70, ret_only)
void main_f_1337c70() {}

// sub_1337c80  (orig 0x1337c80, ret_only)
void main_f_1337c80() {}

// sub_1337c90  (orig 0x1337c90, ret_only)
void main_f_1337c90() {}

// sub_1337d10  (orig 0x1337d10, ret_only)
void main_f_1337d10() {}

// sub_1337d20  (orig 0x1337d20, copy2)
void main_f_1337d20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337d30  (orig 0x1337d30, copy2)
void main_f_1337d30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337d40  (orig 0x1337d40, ret_only)
void main_f_1337d40() {}

// sub_1337d50  (orig 0x1337d50, ret_only)
void main_f_1337d50() {}

// sub_1337d60  (orig 0x1337d60, ret_only)
void main_f_1337d60() {}

// sub_1337d70  (orig 0x1337d70, ret_only)
void main_f_1337d70() {}

// sub_1337dd0  (orig 0x1337dd0, ret_only)
void main_f_1337dd0() {}

// sub_1337de0  (orig 0x1337de0, copy2)
void main_f_1337de0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337df0  (orig 0x1337df0, copy2)
void main_f_1337df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337e00  (orig 0x1337e00, ret_only)
void main_f_1337e00() {}

// sub_1337e10  (orig 0x1337e10, ret_only)
void main_f_1337e10() {}

// sub_1337e20  (orig 0x1337e20, ret_only)
void main_f_1337e20() {}

// sub_1337e30  (orig 0x1337e30, ret_only)
void main_f_1337e30() {}

// sub_1337eb0  (orig 0x1337eb0, ret_only)
void main_f_1337eb0() {}

// sub_1337ec0  (orig 0x1337ec0, copy2)
void main_f_1337ec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337ed0  (orig 0x1337ed0, copy2)
void main_f_1337ed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337ee0  (orig 0x1337ee0, ret_only)
void main_f_1337ee0() {}

// sub_1337ef0  (orig 0x1337ef0, ret_only)
void main_f_1337ef0() {}

// sub_1337f00  (orig 0x1337f00, ret_only)
void main_f_1337f00() {}

// sub_1337f10  (orig 0x1337f10, ret_only)
void main_f_1337f10() {}

// sub_1337f90  (orig 0x1337f90, ret_only)
void main_f_1337f90() {}

// sub_1337fa0  (orig 0x1337fa0, copy2)
void main_f_1337fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337fb0  (orig 0x1337fb0, copy2)
void main_f_1337fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337fc0  (orig 0x1337fc0, ret_only)
void main_f_1337fc0() {}

// sub_1337fd0  (orig 0x1337fd0, ret_only)
void main_f_1337fd0() {}

// sub_1337fe0  (orig 0x1337fe0, ret_only)
void main_f_1337fe0() {}

// sub_1337ff0  (orig 0x1337ff0, ret_only)
void main_f_1337ff0() {}

// sub_1338070  (orig 0x1338070, ret_only)
void main_f_1338070() {}

// sub_1338080  (orig 0x1338080, copy2)
void main_f_1338080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1338090  (orig 0x1338090, copy2)
void main_f_1338090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13380a0  (orig 0x13380a0, ret_only)
void main_f_13380a0() {}

// sub_13380b0  (orig 0x13380b0, ret_only)
void main_f_13380b0() {}

// sub_13380c0  (orig 0x13380c0, ret_only)
void main_f_13380c0() {}

// sub_13380d0  (orig 0x13380d0, ret_only)
void main_f_13380d0() {}

// sub_13394e0  (orig 0x13394e0, ret_only)
void main_f_13394e0() {}

// sub_13394f0  (orig 0x13394f0, copy2)
void main_f_13394f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1339500  (orig 0x1339500, copy2)
void main_f_1339500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1339510  (orig 0x1339510, ret_only)
void main_f_1339510() {}

// sub_1339520  (orig 0x1339520, ret_only)
void main_f_1339520() {}

// sub_1339530  (orig 0x1339530, ret_only)
void main_f_1339530() {}

// sub_1339540  (orig 0x1339540, ret_only)
void main_f_1339540() {}

// sub_1339550  (orig 0x1339550, ret_only)
void main_f_1339550() {}

// sub_1339560  (orig 0x1339560, ret_only)
void main_f_1339560() {}

// sub_1339570  (orig 0x1339570, ret_only)
void main_f_1339570() {}

// sub_1339580  (orig 0x1339580, ret_only)
void main_f_1339580() {}

// sub_1339590  (orig 0x1339590, ret_only)
void main_f_1339590() {}

// sub_13395a0  (orig 0x13395a0, ret_only)
void main_f_13395a0() {}

// sub_13395b0  (orig 0x13395b0, ret_only)
void main_f_13395b0() {}

// sub_13395c0  (orig 0x13395c0, ret_only)
void main_f_13395c0() {}

// sub_1339640  (orig 0x1339640, ret_only)
void main_f_1339640() {}

// sub_1339650  (orig 0x1339650, copy2)
void main_f_1339650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1339660  (orig 0x1339660, copy2)
void main_f_1339660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1339670  (orig 0x1339670, ret_only)
void main_f_1339670() {}

// sub_1339680  (orig 0x1339680, ret_only)
void main_f_1339680() {}

// sub_1339690  (orig 0x1339690, ret_only)
void main_f_1339690() {}

// sub_13396a0  (orig 0x13396a0, ret_only)
void main_f_13396a0() {}

// sub_133d080  (orig 0x133d080, const-field-set-store)
void main_f_133d080(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 1528) = (uint8_t)(t1);
}

// sub_133d090  (orig 0x133d090, ret_only)
void main_f_133d090() {}

// sub_133d0a0  (orig 0x133d0a0, copy2)
void main_f_133d0a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_133d0b0  (orig 0x133d0b0, copy2)
void main_f_133d0b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_133e5a0  (orig 0x133e5a0, getter)
uint64_t main_f_133e5a0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_133e710  (orig 0x133e710, mov_ret)
uint32_t main_f_133e710() { return 1; }

// sub_133e720  (orig 0x133e720, indexed-getter)
uint64_t main_f_133e720(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_133e730  (orig 0x133e730, indexed-getter)
uint64_t main_f_133e730(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_133fc10  (orig 0x133fc10, ret_only)
void main_f_133fc10() {}

// sub_1340170  (orig 0x1340170, ret_only)
void main_f_1340170() {}

// sub_1340180  (orig 0x1340180, ret_only)
void main_f_1340180() {}

// sub_1340190  (orig 0x1340190, ret_only)
void main_f_1340190() {}

// sub_1340690  (orig 0x1340690, ret_only)
void main_f_1340690() {}

// sub_13415f0  (orig 0x13415f0, ret_only)
void main_f_13415f0() {}

// sub_1341600  (orig 0x1341600, copy2)
void main_f_1341600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1341610  (orig 0x1341610, copy2)
void main_f_1341610(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1341780  (orig 0x1341780, ret_only)
void main_f_1341780() {}

// sub_1341790  (orig 0x1341790, copy2)
void main_f_1341790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13417a0  (orig 0x13417a0, copy2)
void main_f_13417a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1344110  (orig 0x1344110, ret_only)
void main_f_1344110() {}

// sub_1344120  (orig 0x1344120, copy2)
void main_f_1344120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1344130  (orig 0x1344130, copy2)
void main_f_1344130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13441a0  (orig 0x13441a0, ret_only)
void main_f_13441a0() {}

// sub_13441b0  (orig 0x13441b0, copy2)
void main_f_13441b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13441c0  (orig 0x13441c0, copy2)
void main_f_13441c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1344540  (orig 0x1344540, mov_ret)
uint32_t main_f_1344540() { return 1; }

// sub_13445d0  (orig 0x13445d0, ret_only)
void main_f_13445d0() {}

// sub_1345ca0  (orig 0x1345ca0, ptr_add)
void* main_f_1345ca0(void* a0) { return (char*)a0 + 96; }

// sub_1345d00  (orig 0x1345d00, setter)
void main_f_1345d00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 552) = a1; }

// sub_1345d10  (orig 0x1345d10, ptr_add)
void* main_f_1345d10(void* a0) { return (char*)a0 + 560; }

// sub_1346250  (orig 0x1346250, ret_only)
void main_f_1346250() {}

// sub_1346270  (orig 0x1346270, ptr_add)
void* main_f_1346270(void* a0) { return (char*)a0 + 8; }

// sub_1346280  (orig 0x1346280, ptr_add)
void* main_f_1346280(void* a0) { return (char*)a0 + 8; }

// sub_1346290  (orig 0x1346290, ret_only)
void main_f_1346290() {}

// sub_13466f0  (orig 0x13466f0, ptr_add)
void* main_f_13466f0(void* a0) { return (char*)a0 + 16; }

// sub_1346700  (orig 0x1346700, ptr_add)
void* main_f_1346700(void* a0) { return (char*)a0 + 16; }

// sub_1346710  (orig 0x1346710, copy2)
void main_f_1346710(void* a0) { *(uint32_t*)((char*)(a0) + 20) = *(uint32_t*)((char*)(a0) + 16); }

// sub_1346720  (orig 0x1346720, getter)
uint32_t main_f_1346720(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1346750  (orig 0x1346750, ret_only)
void main_f_1346750() {}

// sub_1346800  (orig 0x1346800, getter)
uint64_t main_f_1346800(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1347ab0  (orig 0x1347ab0, ret_only)
void main_f_1347ab0() {}

// sub_1347ad0  (orig 0x1347ad0, ptr_add)
void* main_f_1347ad0(void* a0) { return (char*)a0 + 8; }

// sub_1347ae0  (orig 0x1347ae0, ptr_add)
void* main_f_1347ae0(void* a0) { return (char*)a0 + 8; }

// sub_134b930  (orig 0x134b930, straight)
void main_f_134b930(void* a0) {
    *(uint32_t*)((char*)(a0) + 96) = -1;
    *(uint16_t*)((char*)(a0) + 116) = 0;
    *(uint64_t*)((char*)(a0) + 108) = 0;
    *(uint64_t*)((char*)(a0) + 100) = 0;
}

// sub_1354890  (orig 0x1354890, getter)
uint8_t main_f_1354890(void* a0) { return *(uint8_t*)((char*)(a0) + 1390); }

// sub_13548a0  (orig 0x13548a0, setter)
void main_f_13548a0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 1424) = a1; }

// sub_13548b0  (orig 0x13548b0, getter)
uint16_t main_f_13548b0(void* a0) { return *(uint16_t*)((char*)(a0) + 1424); }

// sub_1357f20  (orig 0x1357f20, getter)
uint32_t main_f_1357f20(void* a0) { return *(uint32_t*)((char*)(a0) + 336); }

// sub_1362000  (orig 0x1362000, setter)
void main_f_1362000(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 168) = a1; }

// sub_1362080  (orig 0x1362080, compare)
bool main_f_1362080(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 184)) != (uint64_t)(0); }

// sub_1365920  (orig 0x1365920, setter)
void main_f_1365920(void* a0) { *(uint64_t*)((char*)(a0) + 96) = 0; }

// sub_1368ec0  (orig 0x1368ec0, ptr_add)
void* main_f_1368ec0(void* a0) { return (char*)a0 + 96; }

// sub_1368ed0  (orig 0x1368ed0, mov_ret)
uint32_t main_f_1368ed0() { return 4856; }

// sub_136b4e0  (orig 0x136b4e0, ret_only)
void main_f_136b4e0() {}

// sub_136b550  (orig 0x136b550, getter)
uint8_t main_f_136b550(void* a0) { return *(uint8_t*)((char*)(a0) + 260); }

// sub_136b580  (orig 0x136b580, getter)
uint8_t main_f_136b580(void* a0) { return *(uint8_t*)((char*)(a0) + 261); }

// sub_136b590  (orig 0x136b590, getter)
uint8_t main_f_136b590(void* a0) { return *(uint8_t*)((char*)(a0) + 263); }

// sub_136b5a0  (orig 0x136b5a0, setter)
void main_f_136b5a0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 263) = a1; }

// sub_136b680  (orig 0x136b680, setter)
void main_f_136b680(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 256) = a1; }

// sub_136b690  (orig 0x136b690, getter)
uint32_t main_f_136b690(void* a0) { return *(uint32_t*)((char*)(a0) + 256); }

// sub_136b6d0  (orig 0x136b6d0, setter)
void main_f_136b6d0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 264) = a1; }

// sub_136b6e0  (orig 0x136b6e0, getter)
uint64_t main_f_136b6e0(void* a0) { return *(uint64_t*)((char*)(a0) + 264); }

// sub_136b6f0  (orig 0x136b6f0, compare)
bool main_f_136b6f0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 264)) != (uint64_t)(0); }

// sub_136b700  (orig 0x136b700, compare)
bool main_f_136b700(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 312)) != (uint64_t)(0); }

// sub_136b710  (orig 0x136b710, getter)
uint64_t main_f_136b710(void* a0) { return *(uint64_t*)((char*)(a0) + 312); }

// sub_136b720  (orig 0x136b720, setter)
void main_f_136b720(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 312) = a1; }

// sub_136b760  (orig 0x136b760, setter)
void main_f_136b760(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 300) = a1; }

// sub_136b770  (orig 0x136b770, getter)
uint32_t main_f_136b770(void* a0) { return *(uint32_t*)((char*)(a0) + 300); }

// sub_136b780  (orig 0x136b780, ptr_add)
void* main_f_136b780(void* a0) { return (char*)a0 + 96; }

// sub_136b790  (orig 0x136b790, getter)
uint32_t main_f_136b790(void* a0) { return *(uint32_t*)((char*)(a0) + 304); }

// sub_136b840  (orig 0x136b840, getter)
uint8_t main_f_136b840(void* a0) { return *(uint8_t*)((char*)(a0) + 310); }

// sub_136b850  (orig 0x136b850, setter)
void main_f_136b850(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 310) = a1; }

// sub_136b860  (orig 0x136b860, mov_ret)
uint32_t main_f_136b860() { return 272; }

// sub_136bf90  (orig 0x136bf90, setter-chain)
void main_f_136bf90(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0) + 48) = 0; *(uint64_t*)((char*)(a0) + 72) = 0; *(uint64_t*)((char*)(a0) + 96) = 0; *(uint64_t*)((char*)(a0) + 120) = 0; *(uint64_t*)((char*)(a0) + 144) = 0; *(uint64_t*)((char*)(a0) + 168) = 0; *(uint64_t*)((char*)(a0) + 192) = 0; *(uint64_t*)((char*)(a0) + 216) = 0; *(uint64_t*)((char*)(a0) + 240) = 0; *(uint64_t*)((char*)(a0) + 264) = 0; *(uint64_t*)((char*)(a0) + 288) = 0; *(uint64_t*)((char*)(a0) + 312) = 0; *(uint64_t*)((char*)(a0) + 336) = 0; *(uint64_t*)((char*)(a0) + 360) = 0; *(uint64_t*)((char*)(a0) + 384) = 0; *(uint64_t*)((char*)(a0) + 408) = 0; *(uint64_t*)((char*)(a0) + 432) = 0; *(uint64_t*)((char*)(a0) + 456) = 0; *(uint64_t*)((char*)(a0) + 480) = 0; *(uint64_t*)((char*)(a0) + 504) = 0; *(uint64_t*)((char*)(a0) + 528) = 0; *(uint64_t*)((char*)(a0) + 552) = 0; *(uint64_t*)((char*)(a0) + 576) = 0; *(uint64_t*)((char*)(a0) + 600) = 0; *(uint64_t*)((char*)(a0) + 624) = 0; *(uint64_t*)((char*)(a0) + 648) = 0; *(uint64_t*)((char*)(a0) + 672) = 0; *(uint64_t*)((char*)(a0) + 696) = 0; *(uint64_t*)((char*)(a0) + 720) = 0; *(uint64_t*)((char*)(a0) + 744) = 0; *(uint64_t*)((char*)(a0) + 768) = 0; *(uint64_t*)((char*)(a0) + 792) = 0; *(uint64_t*)((char*)(a0) + 816) = 0; *(uint64_t*)((char*)(a0) + 840) = 0; *(uint64_t*)((char*)(a0) + 864) = 0; *(uint64_t*)((char*)(a0) + 888) = 0; *(uint64_t*)((char*)(a0) + 912) = 0; *(uint64_t*)((char*)(a0) + 936) = 0; *(uint64_t*)((char*)(a0) + 960) = 0; *(uint64_t*)((char*)(a0) + 984) = 0; *(uint64_t*)((char*)(a0) + 1008) = 0; *(uint64_t*)((char*)(a0) + 1032) = 0; *(uint64_t*)((char*)(a0) + 1056) = 0; *(uint64_t*)((char*)(a0) + 1080) = 0; *(uint64_t*)((char*)(a0) + 1104) = 0; *(uint64_t*)((char*)(a0) + 1128) = 0; *(uint64_t*)((char*)(a0) + 1152) = 0; *(uint64_t*)((char*)(a0) + 1176) = 0; *(uint64_t*)((char*)(a0) + 1200) = 0; *(uint64_t*)((char*)(a0) + 1224) = 0; *(uint64_t*)((char*)(a0) + 1248) = 0; *(uint64_t*)((char*)(a0) + 1272) = 0; *(uint64_t*)((char*)(a0) + 1296) = 0; *(uint64_t*)((char*)(a0) + 1320) = 0; *(uint64_t*)((char*)(a0) + 1344) = 0; *(uint64_t*)((char*)(a0) + 1368) = 0; *(uint64_t*)((char*)(a0) + 1392) = 0; *(uint64_t*)((char*)(a0) + 1416) = 0; *(uint64_t*)((char*)(a0) + 1440) = 0; *(uint64_t*)((char*)(a0) + 1464) = 0; *(uint64_t*)((char*)(a0) + 1488) = 0; *(uint64_t*)((char*)(a0) + 1512) = 0; *(uint64_t*)((char*)(a0) + 1536) = 0; *(uint64_t*)((char*)(a0) + 1560) = 0; *(uint64_t*)((char*)(a0) + 1584) = 0; *(uint64_t*)((char*)(a0) + 1608) = 0; *(uint64_t*)((char*)(a0) + 1632) = 0; *(uint64_t*)((char*)(a0) + 1656) = 0; *(uint64_t*)((char*)(a0) + 1680) = 0; *(uint64_t*)((char*)(a0) + 1704) = 0; *(uint64_t*)((char*)(a0) + 1728) = 0; *(uint64_t*)((char*)(a0) + 1752) = 0; *(uint64_t*)((char*)(a0) + 1776) = 0; *(uint64_t*)((char*)(a0) + 1800) = 0; *(uint64_t*)((char*)(a0) + 1824) = 0; *(uint64_t*)((char*)(a0) + 1848) = 0; *(uint64_t*)((char*)(a0) + 1872) = 0; *(uint64_t*)((char*)(a0) + 1896) = 0; *(uint64_t*)((char*)(a0) + 1920) = 0; *(uint64_t*)((char*)(a0) + 1944) = 0; *(uint64_t*)((char*)(a0) + 1968) = 0; *(uint64_t*)((char*)(a0) + 1992) = 0; *(uint64_t*)((char*)(a0) + 2016) = 0; *(uint64_t*)((char*)(a0) + 2040) = 0; *(uint64_t*)((char*)(a0) + 2064) = 0; *(uint64_t*)((char*)(a0) + 2088) = 0; *(uint64_t*)((char*)(a0) + 2112) = 0; *(uint64_t*)((char*)(a0) + 2136) = 0; *(uint64_t*)((char*)(a0) + 2160) = 0; *(uint64_t*)((char*)(a0) + 2184) = 0; *(uint64_t*)((char*)(a0) + 2208) = 0; *(uint64_t*)((char*)(a0) + 2232) = 0; *(uint64_t*)((char*)(a0) + 2256) = 0; *(uint64_t*)((char*)(a0) + 2280) = 0; *(uint64_t*)((char*)(a0) + 2304) = 0; *(uint64_t*)((char*)(a0) + 2328) = 0; *(uint64_t*)((char*)(a0) + 2352) = 0; *(uint64_t*)((char*)(a0) + 2376) = 0; *(uint64_t*)((char*)(a0) + 2400) = 0; *(uint64_t*)((char*)(a0) + 2424) = 0; *(uint64_t*)((char*)(a0) + 2448) = 0; *(uint64_t*)((char*)(a0) + 2472) = 0; *(uint64_t*)((char*)(a0) + 2496) = 0; *(uint64_t*)((char*)(a0) + 2520) = 0; *(uint64_t*)((char*)(a0) + 2544) = 0; *(uint64_t*)((char*)(a0) + 2568) = 0; *(uint64_t*)((char*)(a0) + 2592) = 0; *(uint64_t*)((char*)(a0) + 2616) = 0; }

// sub_136f5a0  (orig 0x136f5a0, getter)
uint16_t main_f_136f5a0(void* a0) { return *(uint16_t*)((char*)(a0) + 96); }

// sub_136f5b0  (orig 0x136f5b0, getter)
uint8_t main_f_136f5b0(void* a0) { return *(uint8_t*)((char*)(a0) + 98); }

// sub_136f5c0  (orig 0x136f5c0, copy2)
void main_f_136f5c0(void* a0) { *(uint32_t*)((char*)(a0) + 104) = *(uint32_t*)((char*)(a0) + 100); }

// sub_136f5d0  (orig 0x136f5d0, copy2)
void main_f_136f5d0(void* a0) { *(uint32_t*)((char*)(a0) + 100) = *(uint32_t*)((char*)(a0) + 104); }

// sub_136f7c0  (orig 0x136f7c0, ret_only)
void main_f_136f7c0() {}

// sub_136f7d0  (orig 0x136f7d0, copy2)
void main_f_136f7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_136f7e0  (orig 0x136f7e0, copy2)
void main_f_136f7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1370980  (orig 0x1370980, setter-chain-zero)
void main_f_1370980(void* a0) {
    *(uint64_t*)((char*)a0 + 26720) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 26712) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 26704) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 26696) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 26688) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 26680) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 26672) = 0;
}

// sub_1377d30  (orig 0x1377d30, straight)
void main_f_1377d30(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 799) = (uint8_t)k0;
}

// sub_1377d40  (orig 0x1377d40, straight)
void main_f_1377d40(void* a0) {
    uint32_t k0 = 2;
    *(uint8_t*)((char*)(a0) + 799) = (uint8_t)k0;
}

// sub_1377d50  (orig 0x1377d50, compare)
bool main_f_1377d50(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 799)) == (uint64_t)(1); }

// sub_1377d60  (orig 0x1377d60, compare)
bool main_f_1377d60(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 799)) == (uint64_t)(2); }

// sub_1378bd0  (orig 0x1378bd0, setter)
void main_f_1378bd0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 19448L) = a1; }

// sub_1379150  (orig 0x1379150, straight)
void main_f_1379150(void* a0, uint64_t a1) {
    *(uint16_t*)((char*)(a0) + 19296L) = (uint16_t)(a1);
}

// sub_1379160  (orig 0x1379160, straight)
uint16_t main_f_1379160(void* a0) { return *(uint16_t*)((char*)(a0) + 19296L); }

// sub_1379ef0  (orig 0x1379ef0, straight)
uint8_t main_f_1379ef0(void* a0) { return *(uint8_t*)((char*)(a0) + 19298L); }

// sub_1379f00  (orig 0x1379f00, straight)
void main_f_1379f00(void* a0, uint64_t a1) {
    *(uint8_t*)((char*)(a0) + 19298L) = (uint8_t)(a1);
}

// sub_1379f10  (orig 0x1379f10, straight)
void main_f_1379f10(void* a0, uint64_t a1) {
    *(uint8_t*)((char*)(a0) + 19299L) = (uint8_t)(a1);
}

// sub_1379f20  (orig 0x1379f20, straight)
uint8_t main_f_1379f20(void* a0) { return *(uint8_t*)((char*)(a0) + 19299L); }

// sub_137a050  (orig 0x137a050, straight)
uint8_t main_f_137a050(void* a0) { return *(uint8_t*)((char*)(a0) + 19440L); }

// sub_137a060  (orig 0x137a060, straight)
void main_f_137a060(void* a0) {
    *(uint8_t*)((char*)(a0) + 19440L) = 0;
}

// sub_137a160  (orig 0x137a160, getter)
uint64_t main_f_137a160(void* a0) { return *(uint64_t*)((char*)(a0) + 19432L); }

// sub_137a1a0  (orig 0x137a1a0, straight)
void main_f_137a1a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 19304L) = 0;
    *(uint32_t*)((char*)(a0) + 19336L) = 0;
    *(uint32_t*)((char*)(a0) + 19368L) = 0;
    *(uint32_t*)((char*)(a0) + 19400L) = 0;
}

// sub_137a280  (orig 0x137a280, getter)
uint64_t main_f_137a280(void* a0) { return *(uint64_t*)((char*)(a0) + 19448L); }

// sub_137b8b0  (orig 0x137b8b0, getter)
uint32_t main_f_137b8b0(void* a0) { return *(uint32_t*)((char*)(a0) + 100); }

// sub_137baa0  (orig 0x137baa0, getter)
uint32_t main_f_137baa0(void* a0) { return *(uint32_t*)((char*)(a0) + 380); }

// sub_137baf0  (orig 0x137baf0, getter)
uint32_t main_f_137baf0(void* a0) { return *(uint32_t*)((char*)(a0) + 400); }

// sub_137bba0  (orig 0x137bba0, getter)
uint16_t main_f_137bba0(void* a0) { return *(uint16_t*)((char*)(a0) + 636); }

// sub_137bbb0  (orig 0x137bbb0, getter)
uint16_t main_f_137bbb0(void* a0) { return *(uint16_t*)((char*)(a0) + 638); }

// sub_137bbe0  (orig 0x137bbe0, setter)
void main_f_137bbe0(void* a0) { *(uint32_t*)((char*)(a0) + 636) = 0; }

// sub_137bc10  (orig 0x137bc10, setter)
void main_f_137bc10(void* a0) { *(uint8_t*)((char*)(a0) + 640) = 0; }

// sub_137bc20  (orig 0x137bc20, getter)
uint16_t main_f_137bc20(void* a0) { return *(uint16_t*)((char*)(a0) + 642); }

// sub_137bc30  (orig 0x137bc30, setter)
void main_f_137bc30(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 642) = a1; }

// sub_137bc40  (orig 0x137bc40, getter)
uint32_t main_f_137bc40(void* a0) { return *(uint32_t*)((char*)(a0) + 644); }

// sub_137bc50  (orig 0x137bc50, setter)
void main_f_137bc50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 644) = a1; }

// sub_1380310  (orig 0x1380310, mov_ret)
uint32_t main_f_1380310() { return 2; }

// sub_1380320  (orig 0x1380320, indexed-getter)
uint64_t main_f_1380320(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1380330  (orig 0x1380330, indexed-getter)
uint64_t main_f_1380330(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_13825e0  (orig 0x13825e0, ret_only)
void main_f_13825e0() {}

// sub_13825f0  (orig 0x13825f0, ret_only)
void main_f_13825f0() {}

// sub_1382600  (orig 0x1382600, ret_only)
void main_f_1382600() {}

// sub_13828a0  (orig 0x13828a0, ret_only)
void main_f_13828a0() {}

// sub_13828b0  (orig 0x13828b0, ret_only)
void main_f_13828b0() {}

// sub_13828c0  (orig 0x13828c0, ret_only)
void main_f_13828c0() {}

// sub_13828d0  (orig 0x13828d0, ret_only)
void main_f_13828d0() {}

// sub_1382b70  (orig 0x1382b70, ret_only)
void main_f_1382b70() {}

// sub_1382b80  (orig 0x1382b80, ret_only)
void main_f_1382b80() {}

// sub_1382b90  (orig 0x1382b90, ret_only)
void main_f_1382b90() {}

// sub_1382ba0  (orig 0x1382ba0, ret_only)
void main_f_1382ba0() {}

// sub_1382e50  (orig 0x1382e50, ret_only)
void main_f_1382e50() {}

// sub_1382e60  (orig 0x1382e60, ret_only)
void main_f_1382e60() {}

// sub_1382e70  (orig 0x1382e70, ret_only)
void main_f_1382e70() {}

// sub_1383110  (orig 0x1383110, ret_only)
void main_f_1383110() {}

// sub_1383120  (orig 0x1383120, ret_only)
void main_f_1383120() {}

// sub_1383130  (orig 0x1383130, ret_only)
void main_f_1383130() {}

// sub_1383140  (orig 0x1383140, ret_only)
void main_f_1383140() {}

// sub_13833e0  (orig 0x13833e0, ret_only)
void main_f_13833e0() {}

// sub_13833f0  (orig 0x13833f0, ret_only)
void main_f_13833f0() {}

// sub_1383400  (orig 0x1383400, ret_only)
void main_f_1383400() {}

// sub_1383410  (orig 0x1383410, ret_only)
void main_f_1383410() {}

// sub_13836c0  (orig 0x13836c0, ret_only)
void main_f_13836c0() {}

// sub_13836d0  (orig 0x13836d0, ret_only)
void main_f_13836d0() {}

// sub_13836e0  (orig 0x13836e0, ret_only)
void main_f_13836e0() {}

// sub_1383980  (orig 0x1383980, ret_only)
void main_f_1383980() {}

// sub_1383990  (orig 0x1383990, ret_only)
void main_f_1383990() {}

// sub_13839a0  (orig 0x13839a0, ret_only)
void main_f_13839a0() {}

// sub_13839b0  (orig 0x13839b0, ret_only)
void main_f_13839b0() {}

// sub_1383c50  (orig 0x1383c50, ret_only)
void main_f_1383c50() {}

// sub_1383c60  (orig 0x1383c60, ret_only)
void main_f_1383c60() {}

// sub_1383c70  (orig 0x1383c70, ret_only)
void main_f_1383c70() {}

// sub_1383c80  (orig 0x1383c80, ret_only)
void main_f_1383c80() {}

// sub_1383f30  (orig 0x1383f30, ret_only)
void main_f_1383f30() {}

// sub_1383f40  (orig 0x1383f40, ret_only)
void main_f_1383f40() {}

// sub_1383f50  (orig 0x1383f50, ret_only)
void main_f_1383f50() {}

// sub_13841f0  (orig 0x13841f0, ret_only)
void main_f_13841f0() {}

// sub_1384200  (orig 0x1384200, ret_only)
void main_f_1384200() {}

// sub_1384210  (orig 0x1384210, ret_only)
void main_f_1384210() {}

// sub_1384220  (orig 0x1384220, ret_only)
void main_f_1384220() {}

// sub_13844c0  (orig 0x13844c0, ret_only)
void main_f_13844c0() {}

// sub_13844d0  (orig 0x13844d0, ret_only)
void main_f_13844d0() {}

// sub_13844e0  (orig 0x13844e0, ret_only)
void main_f_13844e0() {}

// sub_13844f0  (orig 0x13844f0, ret_only)
void main_f_13844f0() {}

// sub_13847a0  (orig 0x13847a0, ret_only)
void main_f_13847a0() {}

// sub_13847b0  (orig 0x13847b0, ret_only)
void main_f_13847b0() {}

// sub_13847c0  (orig 0x13847c0, ret_only)
void main_f_13847c0() {}

// sub_1384a60  (orig 0x1384a60, ret_only)
void main_f_1384a60() {}

// sub_1384a70  (orig 0x1384a70, ret_only)
void main_f_1384a70() {}

// sub_1384a80  (orig 0x1384a80, ret_only)
void main_f_1384a80() {}

// sub_1384a90  (orig 0x1384a90, ret_only)
void main_f_1384a90() {}

// sub_1384d30  (orig 0x1384d30, ret_only)
void main_f_1384d30() {}

// sub_1384d40  (orig 0x1384d40, ret_only)
void main_f_1384d40() {}

// sub_1384d50  (orig 0x1384d50, ret_only)
void main_f_1384d50() {}

// sub_1384d60  (orig 0x1384d60, ret_only)
void main_f_1384d60() {}

// sub_1385010  (orig 0x1385010, ret_only)
void main_f_1385010() {}

// sub_1385020  (orig 0x1385020, ret_only)
void main_f_1385020() {}

// sub_1385030  (orig 0x1385030, ret_only)
void main_f_1385030() {}

// sub_13852d0  (orig 0x13852d0, ret_only)
void main_f_13852d0() {}

// sub_13852e0  (orig 0x13852e0, ret_only)
void main_f_13852e0() {}

// sub_13852f0  (orig 0x13852f0, ret_only)
void main_f_13852f0() {}

// sub_1385300  (orig 0x1385300, ret_only)
void main_f_1385300() {}

// sub_13855b0  (orig 0x13855b0, ret_only)
void main_f_13855b0() {}

// sub_13855c0  (orig 0x13855c0, ret_only)
void main_f_13855c0() {}

// sub_13855d0  (orig 0x13855d0, ret_only)
void main_f_13855d0() {}

// sub_1385880  (orig 0x1385880, ret_only)
void main_f_1385880() {}

// sub_1385890  (orig 0x1385890, ret_only)
void main_f_1385890() {}

// sub_13858a0  (orig 0x13858a0, ret_only)
void main_f_13858a0() {}

// sub_1385b40  (orig 0x1385b40, ret_only)
void main_f_1385b40() {}

// sub_1385b50  (orig 0x1385b50, ret_only)
void main_f_1385b50() {}

// sub_1385b60  (orig 0x1385b60, ret_only)
void main_f_1385b60() {}

// sub_1385b70  (orig 0x1385b70, ret_only)
void main_f_1385b70() {}

// sub_1385e10  (orig 0x1385e10, ret_only)
void main_f_1385e10() {}

// sub_1385e20  (orig 0x1385e20, ret_only)
void main_f_1385e20() {}

// sub_1385e30  (orig 0x1385e30, ret_only)
void main_f_1385e30() {}

// sub_1385e40  (orig 0x1385e40, ret_only)
void main_f_1385e40() {}

// sub_13860f0  (orig 0x13860f0, ret_only)
void main_f_13860f0() {}

// sub_1386100  (orig 0x1386100, ret_only)
void main_f_1386100() {}

// sub_1386110  (orig 0x1386110, ret_only)
void main_f_1386110() {}

// sub_13863b0  (orig 0x13863b0, ret_only)
void main_f_13863b0() {}

// sub_13863c0  (orig 0x13863c0, ret_only)
void main_f_13863c0() {}

// sub_13863d0  (orig 0x13863d0, ret_only)
void main_f_13863d0() {}

// sub_13863e0  (orig 0x13863e0, ret_only)
void main_f_13863e0() {}

// sub_1386680  (orig 0x1386680, ret_only)
void main_f_1386680() {}

// sub_1386690  (orig 0x1386690, ret_only)
void main_f_1386690() {}

// sub_13866a0  (orig 0x13866a0, ret_only)
void main_f_13866a0() {}

// sub_13866b0  (orig 0x13866b0, ret_only)
void main_f_13866b0() {}

// sub_1389e90  (orig 0x1389e90, compare)
bool main_f_1389e90(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 12)) == (uint64_t)(1); }

// sub_1389ea0  (orig 0x1389ea0, compare)
bool main_f_1389ea0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 12)) == (uint64_t)(2); }

// sub_1389eb0  (orig 0x1389eb0, compare)
bool main_f_1389eb0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 12)) == (uint64_t)(3); }

// sub_1389ec0  (orig 0x1389ec0, compare)
bool main_f_1389ec0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 12)) == (uint64_t)(4); }

// sub_1389ed0  (orig 0x1389ed0, compare)
bool main_f_1389ed0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 12)) == (uint64_t)(5); }

// sub_138a340  (orig 0x138a340, ptr_add)
void* main_f_138a340(void* a0) { return (char*)a0 + 96; }

// sub_138be50  (orig 0x138be50, setter-chain)
void main_f_138be50(void* a0) { *(uint64_t*)((char*)(a0) + 5552L) = 0; *(uint16_t*)((char*)(a0) + 5560L) = 0; }

// sub_1397a50  (orig 0x1397a50, mov_ret)
uint32_t main_f_1397a50() { return 0; }

// sub_1399690  (orig 0x1399690, ret_only)
void main_f_1399690() {}

// sub_1399d20  (orig 0x1399d20, ret_only)
void main_f_1399d20() {}

// sub_139a900  (orig 0x139a900, ptr_add)
void* main_f_139a900(void* a0) { return (char*)a0 + 8; }

// sub_139a910  (orig 0x139a910, ptr_add)
void* main_f_139a910(void* a0) { return (char*)a0 + 8; }

// sub_139ad30  (orig 0x139ad30, ret_only)
void main_f_139ad30() {}

// sub_139c800  (orig 0x139c800, ptr_add)
void* main_f_139c800(void* a0) { return (char*)a0 + 8; }

// sub_139c810  (orig 0x139c810, ptr_add)
void* main_f_139c810(void* a0) { return (char*)a0 + 8; }

// sub_139cf60  (orig 0x139cf60, ptr_add)
void* main_f_139cf60(void* a0) { return (char*)a0 + 8; }

// sub_139cf70  (orig 0x139cf70, ptr_add)
void* main_f_139cf70(void* a0) { return (char*)a0 + 8; }

// sub_139ea50  (orig 0x139ea50, getter)
uint32_t main_f_139ea50(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_139ff50  (orig 0x139ff50, ret_only)
void main_f_139ff50() {}

// sub_139ffb0  (orig 0x139ffb0, getter)
uint32_t main_f_139ffb0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_13a0f80  (orig 0x13a0f80, setter-chain)
void main_f_13a0f80(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint8_t*)((char*)(a0) + 8) = 0; *(uint32_t*)((char*)(a0) + 128) = 0; }

// sub_13a11f0  (orig 0x13a11f0, compare)
bool main_f_13a11f0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 4)) == (uint64_t)(2); }

// sub_13a1200  (orig 0x13a1200, getter)
uint32_t main_f_13a1200(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_13a3530  (orig 0x13a3530, strlit-ret)
const char *main_f_13a3530() { static char g_f_13a3530[1]; __asm__ volatile("" ::: "memory"); return g_f_13a3530; }

// sub_13a5870  (orig 0x13a5870, mov_ret)
uint32_t main_f_13a5870() { return 1; }

// sub_13a5940  (orig 0x13a5940, ret_only)
void main_f_13a5940() {}

// sub_13a60c0  (orig 0x13a60c0, mov_ret)
uint32_t main_f_13a60c0() { return 1; }

// sub_13a60d0  (orig 0x13a60d0, ret_only)
void main_f_13a60d0() {}

// sub_13a6210  (orig 0x13a6210, ret_only)
void main_f_13a6210() {}

// sub_13a6b20  (orig 0x13a6b20, ret_only)
void main_f_13a6b20() {}

// sub_13a6b30  (orig 0x13a6b30, ret_only)
void main_f_13a6b30() {}

// sub_13a6b40  (orig 0x13a6b40, ret_only)
void main_f_13a6b40() {}

// sub_13a72d0  (orig 0x13a72d0, mov_ret)
uint32_t main_f_13a72d0() { return 1; }

// sub_13a7fd0  (orig 0x13a7fd0, ptr_add)
void* main_f_13a7fd0(void* a0) { return (char*)a0 + 96; }

// sub_13a9210  (orig 0x13a9210, ret_only)
void main_f_13a9210() {}

// sub_13a9220  (orig 0x13a9220, copy2)
void main_f_13a9220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a9230  (orig 0x13a9230, copy2)
void main_f_13a9230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a94c0  (orig 0x13a94c0, ret_only)
void main_f_13a94c0() {}

// sub_13a94d0  (orig 0x13a94d0, copy2)
void main_f_13a94d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a94e0  (orig 0x13a94e0, copy2)
void main_f_13a94e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a9670  (orig 0x13a9670, ret_only)
void main_f_13a9670() {}

// sub_13a9680  (orig 0x13a9680, copy2)
void main_f_13a9680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a9690  (orig 0x13a9690, copy2)
void main_f_13a9690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a9900  (orig 0x13a9900, ret_only)
void main_f_13a9900() {}

// sub_13a9910  (orig 0x13a9910, copy2)
void main_f_13a9910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a9920  (orig 0x13a9920, copy2)
void main_f_13a9920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a99b0  (orig 0x13a99b0, ret_only)
void main_f_13a99b0() {}

// sub_13a99c0  (orig 0x13a99c0, copy2)
void main_f_13a99c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a99d0  (orig 0x13a99d0, copy2)
void main_f_13a99d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa040  (orig 0x13aa040, ret_only)
void main_f_13aa040() {}

// sub_13aa050  (orig 0x13aa050, copy2)
void main_f_13aa050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa060  (orig 0x13aa060, copy2)
void main_f_13aa060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa0f0  (orig 0x13aa0f0, ret_only)
void main_f_13aa0f0() {}

// sub_13aa100  (orig 0x13aa100, copy2)
void main_f_13aa100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa110  (orig 0x13aa110, copy2)
void main_f_13aa110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa420  (orig 0x13aa420, ret_only)
void main_f_13aa420() {}

// sub_13aa430  (orig 0x13aa430, copy2)
void main_f_13aa430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa440  (orig 0x13aa440, copy2)
void main_f_13aa440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa4d0  (orig 0x13aa4d0, ret_only)
void main_f_13aa4d0() {}

// sub_13aa4e0  (orig 0x13aa4e0, copy2)
void main_f_13aa4e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa4f0  (orig 0x13aa4f0, copy2)
void main_f_13aa4f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa890  (orig 0x13aa890, ret_only)
void main_f_13aa890() {}

// sub_13aa8a0  (orig 0x13aa8a0, copy2)
void main_f_13aa8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa8b0  (orig 0x13aa8b0, copy2)
void main_f_13aa8b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa940  (orig 0x13aa940, ret_only)
void main_f_13aa940() {}

// sub_13aa950  (orig 0x13aa950, copy2)
void main_f_13aa950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa960  (orig 0x13aa960, copy2)
void main_f_13aa960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aab50  (orig 0x13aab50, ret_only)
void main_f_13aab50() {}

// sub_13aab60  (orig 0x13aab60, copy2)
void main_f_13aab60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aab70  (orig 0x13aab70, copy2)
void main_f_13aab70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aac00  (orig 0x13aac00, ret_only)
void main_f_13aac00() {}

// sub_13aac10  (orig 0x13aac10, copy2)
void main_f_13aac10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aac20  (orig 0x13aac20, copy2)
void main_f_13aac20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aafd0  (orig 0x13aafd0, ret_only)
void main_f_13aafd0() {}

// sub_13aafe0  (orig 0x13aafe0, copy2)
void main_f_13aafe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aaff0  (orig 0x13aaff0, copy2)
void main_f_13aaff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab080  (orig 0x13ab080, ret_only)
void main_f_13ab080() {}

// sub_13ab090  (orig 0x13ab090, copy2)
void main_f_13ab090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab0a0  (orig 0x13ab0a0, copy2)
void main_f_13ab0a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab120  (orig 0x13ab120, ret_only)
void main_f_13ab120() {}

// sub_13ab130  (orig 0x13ab130, copy2)
void main_f_13ab130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab140  (orig 0x13ab140, copy2)
void main_f_13ab140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab330  (orig 0x13ab330, ret_only)
void main_f_13ab330() {}

// sub_13ab340  (orig 0x13ab340, copy2)
void main_f_13ab340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab350  (orig 0x13ab350, copy2)
void main_f_13ab350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab3d0  (orig 0x13ab3d0, ret_only)
void main_f_13ab3d0() {}

// sub_13ab3e0  (orig 0x13ab3e0, copy2)
void main_f_13ab3e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab3f0  (orig 0x13ab3f0, copy2)
void main_f_13ab3f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aba40  (orig 0x13aba40, ret_only)
void main_f_13aba40() {}

// sub_13aba50  (orig 0x13aba50, copy2)
void main_f_13aba50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aba60  (orig 0x13aba60, copy2)
void main_f_13aba60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aba90  (orig 0x13aba90, ret_only)
void main_f_13aba90() {}

// sub_13abaa0  (orig 0x13abaa0, copy2)
void main_f_13abaa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abab0  (orig 0x13abab0, copy2)
void main_f_13abab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abb40  (orig 0x13abb40, ret_only)
void main_f_13abb40() {}

// sub_13abb50  (orig 0x13abb50, copy2)
void main_f_13abb50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abb60  (orig 0x13abb60, copy2)
void main_f_13abb60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abcd0  (orig 0x13abcd0, ret_only)
void main_f_13abcd0() {}

// sub_13abce0  (orig 0x13abce0, copy2)
void main_f_13abce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abcf0  (orig 0x13abcf0, copy2)
void main_f_13abcf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abe90  (orig 0x13abe90, ret_only)
void main_f_13abe90() {}

// sub_13abea0  (orig 0x13abea0, copy2)
void main_f_13abea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abeb0  (orig 0x13abeb0, copy2)
void main_f_13abeb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abf80  (orig 0x13abf80, ret_only)
void main_f_13abf80() {}

// sub_13abf90  (orig 0x13abf90, copy2)
void main_f_13abf90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abfa0  (orig 0x13abfa0, copy2)
void main_f_13abfa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ac110  (orig 0x13ac110, ret_only)
void main_f_13ac110() {}

// sub_13ac120  (orig 0x13ac120, copy2)
void main_f_13ac120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ac130  (orig 0x13ac130, copy2)
void main_f_13ac130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ac310  (orig 0x13ac310, ret_only)
void main_f_13ac310() {}

// sub_13ac320  (orig 0x13ac320, copy2)
void main_f_13ac320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ac330  (orig 0x13ac330, copy2)
void main_f_13ac330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ac460  (orig 0x13ac460, ret_only)
void main_f_13ac460() {}

// sub_13ac470  (orig 0x13ac470, copy2)
void main_f_13ac470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ac480  (orig 0x13ac480, copy2)
void main_f_13ac480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ac490  (orig 0x13ac490, strlit-ret)
const char *main_f_13ac490() { static char g_f_13ac490[1]; __asm__ volatile("" ::: "memory"); return g_f_13ac490; }

// sub_13ac760  (orig 0x13ac760, getter-chain)
uint64_t main_f_13ac760(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 132))) + 832); }

// sub_13aca70  (orig 0x13aca70, mov_ret)
uint32_t main_f_13aca70() { return 1; }

// sub_13ae820  (orig 0x13ae820, mov_ret)
uint64_t main_f_13ae820() { return 0; }

// sub_13ae830  (orig 0x13ae830, mov_ret)
uint64_t main_f_13ae830() { return 0; }

// sub_13ae840  (orig 0x13ae840, mov_ret)
uint64_t main_f_13ae840() { return 0; }

// sub_13ae850  (orig 0x13ae850, mov_ret)
uint64_t main_f_13ae850() { return 0; }

// sub_13ae860  (orig 0x13ae860, mov_ret)
uint64_t main_f_13ae860() { return 0; }

// sub_13ae870  (orig 0x13ae870, mov_ret)
uint64_t main_f_13ae870() { return 0; }

// sub_13ae880  (orig 0x13ae880, mov_ret)
uint64_t main_f_13ae880() { return 0; }

// sub_13ae890  (orig 0x13ae890, mov_ret)
uint64_t main_f_13ae890() { return 0; }

// sub_13ae8a0  (orig 0x13ae8a0, mov_ret)
uint64_t main_f_13ae8a0() { return 0; }

// sub_13ae8b0  (orig 0x13ae8b0, mov_ret)
uint32_t main_f_13ae8b0() { return 1; }

// sub_13ae8c0  (orig 0x13ae8c0, mov_ret)
uint32_t main_f_13ae8c0() { return 1; }

// sub_13ae8d0  (orig 0x13ae8d0, mov_ret)
uint32_t main_f_13ae8d0() { return 1; }

// sub_13ae8e0  (orig 0x13ae8e0, mov_ret)
uint32_t main_f_13ae8e0() { return 1; }

// sub_13ae8f0  (orig 0x13ae8f0, mov_ret)
uint32_t main_f_13ae8f0() { return 1; }

// sub_13ae900  (orig 0x13ae900, mov_ret)
uint32_t main_f_13ae900() { return 1; }

// sub_13b0130  (orig 0x13b0130, mov_ret)
uint32_t main_f_13b0130() { return 1; }

// sub_13b09e0  (orig 0x13b09e0, mov_ret)
uint32_t main_f_13b09e0() { return 1; }

// sub_13b2050  (orig 0x13b2050, ret_only)
void main_f_13b2050() {}

// sub_13b2090  (orig 0x13b2090, ret_only)
void main_f_13b2090() {}

// sub_13b2230  (orig 0x13b2230, mov_ret)
uint32_t main_f_13b2230() { return 1; }

// sub_13b2240  (orig 0x13b2240, mov_ret)
uint32_t main_f_13b2240() { return 1; }

// sub_13b2250  (orig 0x13b2250, mov_ret)
uint32_t main_f_13b2250() { return 1; }

// sub_13b2310  (orig 0x13b2310, ptr_add)
void* main_f_13b2310(void* a0) { return (char*)a0 + 104; }

// sub_13b2320  (orig 0x13b2320, copy2)
void main_f_13b2320(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 112) = *(uint64_t*)((char*)(a1)); }

// sub_13b2330  (orig 0x13b2330, ptr_add)
void* main_f_13b2330(void* a0) { return (char*)a0 + 112; }

// sub_13b4450  (orig 0x13b4450, ret_only)
void main_f_13b4450() {}

// sub_13b4460  (orig 0x13b4460, copy2)
void main_f_13b4460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4470  (orig 0x13b4470, copy2)
void main_f_13b4470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b45b0  (orig 0x13b45b0, ret_only)
void main_f_13b45b0() {}

// sub_13b45c0  (orig 0x13b45c0, copy2)
void main_f_13b45c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b45d0  (orig 0x13b45d0, copy2)
void main_f_13b45d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4660  (orig 0x13b4660, ret_only)
void main_f_13b4660() {}

// sub_13b4670  (orig 0x13b4670, copy2)
void main_f_13b4670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4680  (orig 0x13b4680, copy2)
void main_f_13b4680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4990  (orig 0x13b4990, ret_only)
void main_f_13b4990() {}

// sub_13b49a0  (orig 0x13b49a0, copy2)
void main_f_13b49a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b49b0  (orig 0x13b49b0, copy2)
void main_f_13b49b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4be0  (orig 0x13b4be0, ret_only)
void main_f_13b4be0() {}

// sub_13b4bf0  (orig 0x13b4bf0, copy2)
void main_f_13b4bf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4c00  (orig 0x13b4c00, copy2)
void main_f_13b4c00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4e30  (orig 0x13b4e30, ret_only)
void main_f_13b4e30() {}

// sub_13b4e40  (orig 0x13b4e40, copy2)
void main_f_13b4e40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4e50  (orig 0x13b4e50, copy2)
void main_f_13b4e50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b50e0  (orig 0x13b50e0, ret_only)
void main_f_13b50e0() {}

// sub_13b50f0  (orig 0x13b50f0, copy2)
void main_f_13b50f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5100  (orig 0x13b5100, copy2)
void main_f_13b5100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5470  (orig 0x13b5470, ret_only)
void main_f_13b5470() {}

// sub_13b5480  (orig 0x13b5480, copy2)
void main_f_13b5480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5490  (orig 0x13b5490, copy2)
void main_f_13b5490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5730  (orig 0x13b5730, ret_only)
void main_f_13b5730() {}

// sub_13b5740  (orig 0x13b5740, copy2)
void main_f_13b5740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5750  (orig 0x13b5750, copy2)
void main_f_13b5750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5a60  (orig 0x13b5a60, ret_only)
void main_f_13b5a60() {}

// sub_13b5a70  (orig 0x13b5a70, copy2)
void main_f_13b5a70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5a80  (orig 0x13b5a80, copy2)
void main_f_13b5a80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5d10  (orig 0x13b5d10, ret_only)
void main_f_13b5d10() {}

// sub_13b5d20  (orig 0x13b5d20, copy2)
void main_f_13b5d20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5d30  (orig 0x13b5d30, copy2)
void main_f_13b5d30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5fc0  (orig 0x13b5fc0, ret_only)
void main_f_13b5fc0() {}

// sub_13b5fd0  (orig 0x13b5fd0, copy2)
void main_f_13b5fd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5fe0  (orig 0x13b5fe0, copy2)
void main_f_13b5fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6360  (orig 0x13b6360, ret_only)
void main_f_13b6360() {}

// sub_13b6370  (orig 0x13b6370, copy2)
void main_f_13b6370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6380  (orig 0x13b6380, copy2)
void main_f_13b6380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6700  (orig 0x13b6700, ret_only)
void main_f_13b6700() {}

// sub_13b6710  (orig 0x13b6710, copy2)
void main_f_13b6710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6720  (orig 0x13b6720, copy2)
void main_f_13b6720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6b20  (orig 0x13b6b20, ret_only)
void main_f_13b6b20() {}

// sub_13b6b30  (orig 0x13b6b30, copy2)
void main_f_13b6b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6b40  (orig 0x13b6b40, copy2)
void main_f_13b6b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6f40  (orig 0x13b6f40, ret_only)
void main_f_13b6f40() {}

// sub_13b6f50  (orig 0x13b6f50, copy2)
void main_f_13b6f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6f60  (orig 0x13b6f60, copy2)
void main_f_13b6f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7360  (orig 0x13b7360, ret_only)
void main_f_13b7360() {}

// sub_13b7370  (orig 0x13b7370, copy2)
void main_f_13b7370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7380  (orig 0x13b7380, copy2)
void main_f_13b7380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b73c0  (orig 0x13b73c0, ret_only)
void main_f_13b73c0() {}

// sub_13b73d0  (orig 0x13b73d0, copy2)
void main_f_13b73d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b73e0  (orig 0x13b73e0, copy2)
void main_f_13b73e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7590  (orig 0x13b7590, ret_only)
void main_f_13b7590() {}

// sub_13b75a0  (orig 0x13b75a0, copy2)
void main_f_13b75a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b75b0  (orig 0x13b75b0, copy2)
void main_f_13b75b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7640  (orig 0x13b7640, ret_only)
void main_f_13b7640() {}

// sub_13b7650  (orig 0x13b7650, copy2)
void main_f_13b7650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7660  (orig 0x13b7660, copy2)
void main_f_13b7660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7960  (orig 0x13b7960, ret_only)
void main_f_13b7960() {}

// sub_13b7970  (orig 0x13b7970, copy2)
void main_f_13b7970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7980  (orig 0x13b7980, copy2)
void main_f_13b7980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7a70  (orig 0x13b7a70, ret_only)
void main_f_13b7a70() {}

// sub_13b7a80  (orig 0x13b7a80, copy2)
void main_f_13b7a80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7a90  (orig 0x13b7a90, copy2)
void main_f_13b7a90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7b40  (orig 0x13b7b40, ret_only)
void main_f_13b7b40() {}

// sub_13b7b50  (orig 0x13b7b50, copy2)
void main_f_13b7b50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7b60  (orig 0x13b7b60, copy2)
void main_f_13b7b60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7c10  (orig 0x13b7c10, ret_only)
void main_f_13b7c10() {}

// sub_13b7c20  (orig 0x13b7c20, copy2)
void main_f_13b7c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7c30  (orig 0x13b7c30, copy2)
void main_f_13b7c30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8050  (orig 0x13b8050, ret_only)
void main_f_13b8050() {}

// sub_13b8060  (orig 0x13b8060, copy2)
void main_f_13b8060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8070  (orig 0x13b8070, copy2)
void main_f_13b8070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8520  (orig 0x13b8520, ret_only)
void main_f_13b8520() {}

// sub_13b8530  (orig 0x13b8530, copy2)
void main_f_13b8530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8540  (orig 0x13b8540, copy2)
void main_f_13b8540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8660  (orig 0x13b8660, ret_only)
void main_f_13b8660() {}

// sub_13b8670  (orig 0x13b8670, copy2)
void main_f_13b8670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8680  (orig 0x13b8680, copy2)
void main_f_13b8680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8710  (orig 0x13b8710, ret_only)
void main_f_13b8710() {}

// sub_13b8720  (orig 0x13b8720, copy2)
void main_f_13b8720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8730  (orig 0x13b8730, copy2)
void main_f_13b8730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b89b0  (orig 0x13b89b0, ret_only)
void main_f_13b89b0() {}

// sub_13b89c0  (orig 0x13b89c0, copy2)
void main_f_13b89c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b89d0  (orig 0x13b89d0, copy2)
void main_f_13b89d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8c00  (orig 0x13b8c00, ret_only)
void main_f_13b8c00() {}

// sub_13b8c10  (orig 0x13b8c10, copy2)
void main_f_13b8c10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8c20  (orig 0x13b8c20, copy2)
void main_f_13b8c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8cb0  (orig 0x13b8cb0, ret_only)
void main_f_13b8cb0() {}

// sub_13b8cc0  (orig 0x13b8cc0, copy2)
void main_f_13b8cc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8cd0  (orig 0x13b8cd0, copy2)
void main_f_13b8cd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8d50  (orig 0x13b8d50, ret_only)
void main_f_13b8d50() {}

// sub_13b8d60  (orig 0x13b8d60, copy2)
void main_f_13b8d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8d70  (orig 0x13b8d70, copy2)
void main_f_13b8d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8e00  (orig 0x13b8e00, ret_only)
void main_f_13b8e00() {}

// sub_13b8e10  (orig 0x13b8e10, copy2)
void main_f_13b8e10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8e20  (orig 0x13b8e20, copy2)
void main_f_13b8e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b9110  (orig 0x13b9110, ret_only)
void main_f_13b9110() {}

// sub_13b9120  (orig 0x13b9120, copy2)
void main_f_13b9120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b9130  (orig 0x13b9130, copy2)
void main_f_13b9130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b91c0  (orig 0x13b91c0, strlit-ret)
const char *main_f_13b91c0() { static char g_f_13b91c0[1]; __asm__ volatile("" ::: "memory"); return g_f_13b91c0; }

// sub_13bd600  (orig 0x13bd600, strlit-ret)
const char *main_f_13bd600() { static char g_f_13bd600[1]; __asm__ volatile("" ::: "memory"); return g_f_13bd600; }

// sub_13bf710  (orig 0x13bf710, mov_ret)
uint32_t main_f_13bf710() { return 1; }

// sub_13ca620  (orig 0x13ca620, ret_only)
void main_f_13ca620() {}

// sub_13ca6d0  (orig 0x13ca6d0, ret_only)
void main_f_13ca6d0() {}

// sub_13cd090  (orig 0x13cd090, ret_only)
void main_f_13cd090() {}

// sub_13cee80  (orig 0x13cee80, ret_only)
void main_f_13cee80() {}

// sub_13cee90  (orig 0x13cee90, copy2)
void main_f_13cee90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ceea0  (orig 0x13ceea0, copy2)
void main_f_13ceea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d4ea0  (orig 0x13d4ea0, ret_only)
void main_f_13d4ea0() {}

// sub_13d4eb0  (orig 0x13d4eb0, copy2)
void main_f_13d4eb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d4ec0  (orig 0x13d4ec0, copy2)
void main_f_13d4ec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d4f50  (orig 0x13d4f50, ret_only)
void main_f_13d4f50() {}

// sub_13d4f60  (orig 0x13d4f60, copy2)
void main_f_13d4f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d4f70  (orig 0x13d4f70, copy2)
void main_f_13d4f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d52e0  (orig 0x13d52e0, ret_only)
void main_f_13d52e0() {}

// sub_13d52f0  (orig 0x13d52f0, copy2)
void main_f_13d52f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5300  (orig 0x13d5300, copy2)
void main_f_13d5300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5390  (orig 0x13d5390, ret_only)
void main_f_13d5390() {}

// sub_13d53a0  (orig 0x13d53a0, copy2)
void main_f_13d53a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d53b0  (orig 0x13d53b0, copy2)
void main_f_13d53b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5860  (orig 0x13d5860, ret_only)
void main_f_13d5860() {}

// sub_13d5870  (orig 0x13d5870, copy2)
void main_f_13d5870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5880  (orig 0x13d5880, copy2)
void main_f_13d5880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5910  (orig 0x13d5910, ret_only)
void main_f_13d5910() {}

// sub_13d5920  (orig 0x13d5920, copy2)
void main_f_13d5920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5930  (orig 0x13d5930, copy2)
void main_f_13d5930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5d30  (orig 0x13d5d30, ret_only)
void main_f_13d5d30() {}

// sub_13d5d40  (orig 0x13d5d40, copy2)
void main_f_13d5d40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5d50  (orig 0x13d5d50, copy2)
void main_f_13d5d50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5de0  (orig 0x13d5de0, ret_only)
void main_f_13d5de0() {}

// sub_13d5df0  (orig 0x13d5df0, copy2)
void main_f_13d5df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5e00  (orig 0x13d5e00, copy2)
void main_f_13d5e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5f80  (orig 0x13d5f80, ret_only)
void main_f_13d5f80() {}

// sub_13d5f90  (orig 0x13d5f90, copy2)
void main_f_13d5f90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5fa0  (orig 0x13d5fa0, copy2)
void main_f_13d5fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6030  (orig 0x13d6030, ret_only)
void main_f_13d6030() {}

// sub_13d6040  (orig 0x13d6040, copy2)
void main_f_13d6040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6050  (orig 0x13d6050, copy2)
void main_f_13d6050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6100  (orig 0x13d6100, ret_only)
void main_f_13d6100() {}

// sub_13d6110  (orig 0x13d6110, copy2)
void main_f_13d6110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6120  (orig 0x13d6120, copy2)
void main_f_13d6120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d61b0  (orig 0x13d61b0, ret_only)
void main_f_13d61b0() {}

// sub_13d61c0  (orig 0x13d61c0, copy2)
void main_f_13d61c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d61d0  (orig 0x13d61d0, copy2)
void main_f_13d61d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6260  (orig 0x13d6260, ret_only)
void main_f_13d6260() {}

// sub_13d6270  (orig 0x13d6270, copy2)
void main_f_13d6270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6280  (orig 0x13d6280, copy2)
void main_f_13d6280(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6310  (orig 0x13d6310, ret_only)
void main_f_13d6310() {}

// sub_13d6320  (orig 0x13d6320, copy2)
void main_f_13d6320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6330  (orig 0x13d6330, copy2)
void main_f_13d6330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6660  (orig 0x13d6660, ret_only)
void main_f_13d6660() {}

// sub_13d6670  (orig 0x13d6670, copy2)
void main_f_13d6670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6680  (orig 0x13d6680, copy2)
void main_f_13d6680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6710  (orig 0x13d6710, ret_only)
void main_f_13d6710() {}

// sub_13d6720  (orig 0x13d6720, copy2)
void main_f_13d6720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6730  (orig 0x13d6730, copy2)
void main_f_13d6730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6d90  (orig 0x13d6d90, ret_only)
void main_f_13d6d90() {}

// sub_13d6da0  (orig 0x13d6da0, copy2)
void main_f_13d6da0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6db0  (orig 0x13d6db0, copy2)
void main_f_13d6db0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6e40  (orig 0x13d6e40, ret_only)
void main_f_13d6e40() {}

// sub_13d6e50  (orig 0x13d6e50, copy2)
void main_f_13d6e50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6e60  (orig 0x13d6e60, copy2)
void main_f_13d6e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6fd0  (orig 0x13d6fd0, ret_only)
void main_f_13d6fd0() {}

// sub_13d6fe0  (orig 0x13d6fe0, copy2)
void main_f_13d6fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6ff0  (orig 0x13d6ff0, copy2)
void main_f_13d6ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d71c0  (orig 0x13d71c0, ret_only)
void main_f_13d71c0() {}

// sub_13d71d0  (orig 0x13d71d0, copy2)
void main_f_13d71d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d71e0  (orig 0x13d71e0, copy2)
void main_f_13d71e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d9b40  (orig 0x13d9b40, ret_only)
void main_f_13d9b40() {}

// sub_13d9b50  (orig 0x13d9b50, copy2)
void main_f_13d9b50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d9b60  (orig 0x13d9b60, copy2)
void main_f_13d9b60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d9d90  (orig 0x13d9d90, ret_only)
void main_f_13d9d90() {}

// sub_13d9da0  (orig 0x13d9da0, copy2)
void main_f_13d9da0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d9db0  (orig 0x13d9db0, copy2)
void main_f_13d9db0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d9f80  (orig 0x13d9f80, ret_only)
void main_f_13d9f80() {}

// sub_13d9f90  (orig 0x13d9f90, copy2)
void main_f_13d9f90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d9fa0  (orig 0x13d9fa0, copy2)
void main_f_13d9fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da0d0  (orig 0x13da0d0, ret_only)
void main_f_13da0d0() {}

// sub_13da0e0  (orig 0x13da0e0, copy2)
void main_f_13da0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da0f0  (orig 0x13da0f0, copy2)
void main_f_13da0f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da240  (orig 0x13da240, ret_only)
void main_f_13da240() {}

// sub_13da250  (orig 0x13da250, copy2)
void main_f_13da250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da260  (orig 0x13da260, copy2)
void main_f_13da260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da3b0  (orig 0x13da3b0, ret_only)
void main_f_13da3b0() {}

// sub_13da3c0  (orig 0x13da3c0, copy2)
void main_f_13da3c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da3d0  (orig 0x13da3d0, copy2)
void main_f_13da3d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da4f0  (orig 0x13da4f0, ret_only)
void main_f_13da4f0() {}

// sub_13da500  (orig 0x13da500, copy2)
void main_f_13da500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da510  (orig 0x13da510, copy2)
void main_f_13da510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da630  (orig 0x13da630, ret_only)
void main_f_13da630() {}

// sub_13da640  (orig 0x13da640, copy2)
void main_f_13da640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da650  (orig 0x13da650, copy2)
void main_f_13da650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da770  (orig 0x13da770, ret_only)
void main_f_13da770() {}

// sub_13da780  (orig 0x13da780, copy2)
void main_f_13da780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da790  (orig 0x13da790, copy2)
void main_f_13da790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da8b0  (orig 0x13da8b0, ret_only)
void main_f_13da8b0() {}

// sub_13da8c0  (orig 0x13da8c0, copy2)
void main_f_13da8c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da8d0  (orig 0x13da8d0, copy2)
void main_f_13da8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da9f0  (orig 0x13da9f0, ret_only)
void main_f_13da9f0() {}

// sub_13daa00  (orig 0x13daa00, copy2)
void main_f_13daa00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13daa10  (orig 0x13daa10, copy2)
void main_f_13daa10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dab30  (orig 0x13dab30, ret_only)
void main_f_13dab30() {}

// sub_13dab40  (orig 0x13dab40, copy2)
void main_f_13dab40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dab50  (orig 0x13dab50, copy2)
void main_f_13dab50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dac00  (orig 0x13dac00, ret_only)
void main_f_13dac00() {}

// sub_13dac10  (orig 0x13dac10, copy2)
void main_f_13dac10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dac20  (orig 0x13dac20, copy2)
void main_f_13dac20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dad40  (orig 0x13dad40, ret_only)
void main_f_13dad40() {}

// sub_13dad50  (orig 0x13dad50, copy2)
void main_f_13dad50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dad60  (orig 0x13dad60, copy2)
void main_f_13dad60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dae10  (orig 0x13dae10, ret_only)
void main_f_13dae10() {}

// sub_13dae20  (orig 0x13dae20, copy2)
void main_f_13dae20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dae30  (orig 0x13dae30, copy2)
void main_f_13dae30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13daf50  (orig 0x13daf50, ret_only)
void main_f_13daf50() {}

// sub_13daf60  (orig 0x13daf60, copy2)
void main_f_13daf60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13daf70  (orig 0x13daf70, copy2)
void main_f_13daf70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db020  (orig 0x13db020, ret_only)
void main_f_13db020() {}

// sub_13db030  (orig 0x13db030, copy2)
void main_f_13db030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db040  (orig 0x13db040, copy2)
void main_f_13db040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db1d0  (orig 0x13db1d0, ret_only)
void main_f_13db1d0() {}

// sub_13db1e0  (orig 0x13db1e0, copy2)
void main_f_13db1e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db1f0  (orig 0x13db1f0, copy2)
void main_f_13db1f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db2a0  (orig 0x13db2a0, ret_only)
void main_f_13db2a0() {}

// sub_13db2b0  (orig 0x13db2b0, copy2)
void main_f_13db2b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db2c0  (orig 0x13db2c0, copy2)
void main_f_13db2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db4e0  (orig 0x13db4e0, ret_only)
void main_f_13db4e0() {}

// sub_13db4f0  (orig 0x13db4f0, copy2)
void main_f_13db4f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db500  (orig 0x13db500, copy2)
void main_f_13db500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db720  (orig 0x13db720, ret_only)
void main_f_13db720() {}

// sub_13db730  (orig 0x13db730, copy2)
void main_f_13db730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db740  (orig 0x13db740, copy2)
void main_f_13db740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db960  (orig 0x13db960, ret_only)
void main_f_13db960() {}

// sub_13db970  (orig 0x13db970, copy2)
void main_f_13db970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db980  (orig 0x13db980, copy2)
void main_f_13db980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dbbb0  (orig 0x13dbbb0, ret_only)
void main_f_13dbbb0() {}

// sub_13dbbc0  (orig 0x13dbbc0, copy2)
void main_f_13dbbc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dbbd0  (orig 0x13dbbd0, copy2)
void main_f_13dbbd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dbe40  (orig 0x13dbe40, ret_only)
void main_f_13dbe40() {}

// sub_13dbe50  (orig 0x13dbe50, copy2)
void main_f_13dbe50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dbe60  (orig 0x13dbe60, copy2)
void main_f_13dbe60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dc0d0  (orig 0x13dc0d0, ret_only)
void main_f_13dc0d0() {}

// sub_13dc0e0  (orig 0x13dc0e0, copy2)
void main_f_13dc0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dc0f0  (orig 0x13dc0f0, copy2)
void main_f_13dc0f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dc4b0  (orig 0x13dc4b0, ret_only)
void main_f_13dc4b0() {}

// sub_13dc890  (orig 0x13dc890, ret_only)
void main_f_13dc890() {}

// sub_13dc980  (orig 0x13dc980, ret_only)
void main_f_13dc980() {}

// sub_13dc990  (orig 0x13dc990, copy2)
void main_f_13dc990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dc9a0  (orig 0x13dc9a0, copy2)
void main_f_13dc9a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dcba0  (orig 0x13dcba0, ret_only)
void main_f_13dcba0() {}

// sub_13dcbb0  (orig 0x13dcbb0, copy2)
void main_f_13dcbb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dcbc0  (orig 0x13dcbc0, copy2)
void main_f_13dcbc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dcdc0  (orig 0x13dcdc0, ret_only)
void main_f_13dcdc0() {}

// sub_13dcdd0  (orig 0x13dcdd0, copy2)
void main_f_13dcdd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dcde0  (orig 0x13dcde0, copy2)
void main_f_13dcde0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dcfa0  (orig 0x13dcfa0, ret_only)
void main_f_13dcfa0() {}

// sub_13dcfb0  (orig 0x13dcfb0, copy2)
void main_f_13dcfb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dcfc0  (orig 0x13dcfc0, copy2)
void main_f_13dcfc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dd170  (orig 0x13dd170, ret_only)
void main_f_13dd170() {}

// sub_13dd180  (orig 0x13dd180, copy2)
void main_f_13dd180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dd190  (orig 0x13dd190, copy2)
void main_f_13dd190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dd580  (orig 0x13dd580, ret_only)
void main_f_13dd580() {}

// sub_13dd670  (orig 0x13dd670, ret_only)
void main_f_13dd670() {}

// sub_13dd680  (orig 0x13dd680, copy2)
void main_f_13dd680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dd690  (orig 0x13dd690, copy2)
void main_f_13dd690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dda80  (orig 0x13dda80, ret_only)
void main_f_13dda80() {}

// sub_13dda90  (orig 0x13dda90, copy2)
void main_f_13dda90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ddaa0  (orig 0x13ddaa0, copy2)
void main_f_13ddaa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ddd90  (orig 0x13ddd90, ret_only)
void main_f_13ddd90() {}

// sub_13ddda0  (orig 0x13ddda0, copy2)
void main_f_13ddda0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dddb0  (orig 0x13dddb0, copy2)
void main_f_13dddb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de0d0  (orig 0x13de0d0, ret_only)
void main_f_13de0d0() {}

// sub_13de0e0  (orig 0x13de0e0, copy2)
void main_f_13de0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de0f0  (orig 0x13de0f0, copy2)
void main_f_13de0f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de320  (orig 0x13de320, ret_only)
void main_f_13de320() {}

// sub_13de330  (orig 0x13de330, copy2)
void main_f_13de330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de340  (orig 0x13de340, copy2)
void main_f_13de340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de5c0  (orig 0x13de5c0, ret_only)
void main_f_13de5c0() {}

// sub_13de5d0  (orig 0x13de5d0, copy2)
void main_f_13de5d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de5e0  (orig 0x13de5e0, copy2)
void main_f_13de5e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de880  (orig 0x13de880, ret_only)
void main_f_13de880() {}

// sub_13de890  (orig 0x13de890, copy2)
void main_f_13de890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de8a0  (orig 0x13de8a0, copy2)
void main_f_13de8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13deb90  (orig 0x13deb90, ret_only)
void main_f_13deb90() {}

// sub_13deba0  (orig 0x13deba0, copy2)
void main_f_13deba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13debb0  (orig 0x13debb0, copy2)
void main_f_13debb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ded70  (orig 0x13ded70, ret_only)
void main_f_13ded70() {}

// sub_13ded80  (orig 0x13ded80, copy2)
void main_f_13ded80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ded90  (orig 0x13ded90, copy2)
void main_f_13ded90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dede0  (orig 0x13dede0, ret_only)
void main_f_13dede0() {}

// sub_13dedf0  (orig 0x13dedf0, copy2)
void main_f_13dedf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dee00  (orig 0x13dee00, copy2)
void main_f_13dee00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dee90  (orig 0x13dee90, ret_only)
void main_f_13dee90() {}

// sub_13deea0  (orig 0x13deea0, copy2)
void main_f_13deea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13deeb0  (orig 0x13deeb0, copy2)
void main_f_13deeb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df070  (orig 0x13df070, ret_only)
void main_f_13df070() {}

// sub_13df080  (orig 0x13df080, copy2)
void main_f_13df080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df090  (orig 0x13df090, copy2)
void main_f_13df090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df250  (orig 0x13df250, ret_only)
void main_f_13df250() {}

// sub_13df260  (orig 0x13df260, copy2)
void main_f_13df260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df270  (orig 0x13df270, copy2)
void main_f_13df270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df430  (orig 0x13df430, ret_only)
void main_f_13df430() {}

// sub_13df440  (orig 0x13df440, copy2)
void main_f_13df440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df450  (orig 0x13df450, copy2)
void main_f_13df450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df610  (orig 0x13df610, ret_only)
void main_f_13df610() {}

// sub_13df620  (orig 0x13df620, copy2)
void main_f_13df620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df630  (orig 0x13df630, copy2)
void main_f_13df630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df680  (orig 0x13df680, ret_only)
void main_f_13df680() {}

// sub_13df690  (orig 0x13df690, copy2)
void main_f_13df690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df6a0  (orig 0x13df6a0, copy2)
void main_f_13df6a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df730  (orig 0x13df730, ret_only)
void main_f_13df730() {}

// sub_13df740  (orig 0x13df740, copy2)
void main_f_13df740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df750  (orig 0x13df750, copy2)
void main_f_13df750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df850  (orig 0x13df850, ret_only)
void main_f_13df850() {}

// sub_13df860  (orig 0x13df860, copy2)
void main_f_13df860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df870  (orig 0x13df870, copy2)
void main_f_13df870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df900  (orig 0x13df900, ret_only)
void main_f_13df900() {}

// sub_13df910  (orig 0x13df910, copy2)
void main_f_13df910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df920  (orig 0x13df920, copy2)
void main_f_13df920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df9d0  (orig 0x13df9d0, ret_only)
void main_f_13df9d0() {}

// sub_13df9e0  (orig 0x13df9e0, copy2)
void main_f_13df9e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df9f0  (orig 0x13df9f0, copy2)
void main_f_13df9f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dfb40  (orig 0x13dfb40, ret_only)
void main_f_13dfb40() {}

// sub_13dfb50  (orig 0x13dfb50, copy2)
void main_f_13dfb50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dfb60  (orig 0x13dfb60, copy2)
void main_f_13dfb60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dfd20  (orig 0x13dfd20, ret_only)
void main_f_13dfd20() {}

// sub_13dfd30  (orig 0x13dfd30, copy2)
void main_f_13dfd30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dfd40  (orig 0x13dfd40, copy2)
void main_f_13dfd40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dff00  (orig 0x13dff00, ret_only)
void main_f_13dff00() {}

// sub_13dff10  (orig 0x13dff10, copy2)
void main_f_13dff10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dff20  (orig 0x13dff20, copy2)
void main_f_13dff20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e00e0  (orig 0x13e00e0, ret_only)
void main_f_13e00e0() {}

// sub_13e00f0  (orig 0x13e00f0, copy2)
void main_f_13e00f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0100  (orig 0x13e0100, copy2)
void main_f_13e0100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e04e0  (orig 0x13e04e0, ret_only)
void main_f_13e04e0() {}

// sub_13e04f0  (orig 0x13e04f0, copy2)
void main_f_13e04f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0500  (orig 0x13e0500, copy2)
void main_f_13e0500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0810  (orig 0x13e0810, ret_only)
void main_f_13e0810() {}

// sub_13e0820  (orig 0x13e0820, copy2)
void main_f_13e0820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0830  (orig 0x13e0830, copy2)
void main_f_13e0830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0c30  (orig 0x13e0c30, ret_only)
void main_f_13e0c30() {}

// sub_13e0c40  (orig 0x13e0c40, copy2)
void main_f_13e0c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0c50  (orig 0x13e0c50, copy2)
void main_f_13e0c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0f00  (orig 0x13e0f00, ret_only)
void main_f_13e0f00() {}

// sub_13e0f10  (orig 0x13e0f10, copy2)
void main_f_13e0f10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0f20  (orig 0x13e0f20, copy2)
void main_f_13e0f20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1230  (orig 0x13e1230, ret_only)
void main_f_13e1230() {}

// sub_13e1240  (orig 0x13e1240, copy2)
void main_f_13e1240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1250  (orig 0x13e1250, copy2)
void main_f_13e1250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1300  (orig 0x13e1300, ret_only)
void main_f_13e1300() {}

// sub_13e1310  (orig 0x13e1310, copy2)
void main_f_13e1310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1320  (orig 0x13e1320, copy2)
void main_f_13e1320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e13b0  (orig 0x13e13b0, ret_only)
void main_f_13e13b0() {}

// sub_13e13c0  (orig 0x13e13c0, copy2)
void main_f_13e13c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e13d0  (orig 0x13e13d0, copy2)
void main_f_13e13d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e18f0  (orig 0x13e18f0, ret_only)
void main_f_13e18f0() {}

// sub_13e1900  (orig 0x13e1900, copy2)
void main_f_13e1900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1910  (orig 0x13e1910, copy2)
void main_f_13e1910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1b50  (orig 0x13e1b50, ret_only)
void main_f_13e1b50() {}

// sub_13e1b60  (orig 0x13e1b60, copy2)
void main_f_13e1b60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1b70  (orig 0x13e1b70, copy2)
void main_f_13e1b70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1e80  (orig 0x13e1e80, ret_only)
void main_f_13e1e80() {}

// sub_13e1e90  (orig 0x13e1e90, copy2)
void main_f_13e1e90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1ea0  (orig 0x13e1ea0, copy2)
void main_f_13e1ea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e2230  (orig 0x13e2230, ret_only)
void main_f_13e2230() {}

// sub_13e2240  (orig 0x13e2240, copy2)
void main_f_13e2240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e2250  (orig 0x13e2250, copy2)
void main_f_13e2250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e23a0  (orig 0x13e23a0, ret_only)
void main_f_13e23a0() {}

// sub_13e23b0  (orig 0x13e23b0, copy2)
void main_f_13e23b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e23c0  (orig 0x13e23c0, copy2)
void main_f_13e23c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e2760  (orig 0x13e2760, ret_only)
void main_f_13e2760() {}

// sub_13e2770  (orig 0x13e2770, copy2)
void main_f_13e2770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e2780  (orig 0x13e2780, copy2)
void main_f_13e2780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e2ed0  (orig 0x13e2ed0, ptr_add)
void* main_f_13e2ed0(void* a0) { return (char*)a0 + 96; }

// sub_13e41e0  (orig 0x13e41e0, ret_only)
void main_f_13e41e0() {}

// sub_13e4a30  (orig 0x13e4a30, getter)
uint32_t main_f_13e4a30(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_13e6090  (orig 0x13e6090, getter-chain)
uint64_t main_f_13e6090(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 400); }

// sub_13e60a0  (orig 0x13e60a0, getter-chain)
uint64_t main_f_13e60a0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 384); }

// sub_13e6560  (orig 0x13e6560, strlit-ret)
const char *main_f_13e6560() { static char g_f_13e6560[1]; __asm__ volatile("" ::: "memory"); return g_f_13e6560; }

// sub_13e7ee0  (orig 0x13e7ee0, strlit-ret)
const char *main_f_13e7ee0() { static char g_f_13e7ee0[1]; __asm__ volatile("" ::: "memory"); return g_f_13e7ee0; }

// sub_13eb1b0  (orig 0x13eb1b0, strlit-ret)
const char *main_f_13eb1b0() { static char g_f_13eb1b0[1]; __asm__ volatile("" ::: "memory"); return g_f_13eb1b0; }

// sub_13ed4e0  (orig 0x13ed4e0, strlit-ret)
const char *main_f_13ed4e0() { static char g_f_13ed4e0[1]; __asm__ volatile("" ::: "memory"); return g_f_13ed4e0; }

// sub_13ef5a0  (orig 0x13ef5a0, ret_only)
void main_f_13ef5a0() {}

// sub_13ef600  (orig 0x13ef600, ret_only)
void main_f_13ef600() {}

// sub_13ef8a0  (orig 0x13ef8a0, strlit-ret)
const char *main_f_13ef8a0() { static char g_f_13ef8a0[1]; __asm__ volatile("" ::: "memory"); return g_f_13ef8a0; }

// sub_13f5f00  (orig 0x13f5f00, mov_ret)
uint64_t main_f_13f5f00() { return 0; }

// sub_13f5f10  (orig 0x13f5f10, mov_ret)
uint64_t main_f_13f5f10() { return 0; }

// sub_13f73f0  (orig 0x13f73f0, ret_only)
void main_f_13f73f0() {}

// sub_13f7400  (orig 0x13f7400, ret_only)
void main_f_13f7400() {}

// sub_13f7410  (orig 0x13f7410, ret_only)
void main_f_13f7410() {}

// sub_13f9140  (orig 0x13f9140, compare)
bool main_f_13f9140(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 896)) == (uint64_t)(0); }

// sub_13faad0  (orig 0x13faad0, const-field-set-store)
void main_f_13faad0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 1120);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 108) = (uint8_t)(t1);
}

// sub_13fb830  (orig 0x13fb830, copy2)
void main_f_13fb830(void* a0) { *(uint64_t*)((char*)(a0) + 104) = *(uint64_t*)((char*)(a0) + 96); }

// sub_1400490  (orig 0x1400490, setter-chain)
void main_f_1400490(void* a0, uint64_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5) { *(uint64_t*)((char*)(a0) + 504) = a1; *(uint32_t*)((char*)(a0) + 520) = a2; *(uint32_t*)((char*)(a0) + 524) = a3; *(uint32_t*)((char*)(a0) + 528) = a4; *(uint32_t*)((char*)(a0) + 532) = a5; }

// sub_1400540  (orig 0x1400540, setter-chain)
void main_f_1400540(void* a0, uint64_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5) { *(uint64_t*)((char*)(a0) + 512) = a1; *(uint32_t*)((char*)(a0) + 536) = a2; *(uint32_t*)((char*)(a0) + 540) = a3; *(uint32_t*)((char*)(a0) + 544) = a4; *(uint32_t*)((char*)(a0) + 548) = a5; }

// sub_1400700  (orig 0x1400700, mov_ret)
uint32_t main_f_1400700() { return 10; }

// sub_1400710  (orig 0x1400710, indexed-getter)
uint64_t main_f_1400710(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1400720  (orig 0x1400720, indexed-getter)
uint64_t main_f_1400720(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1401dc0  (orig 0x1401dc0, mov_ret)
uint32_t main_f_1401dc0() { return 1; }

// sub_140cc20  (orig 0x140cc20, mov_ret)
uint32_t main_f_140cc20() { return 1; }

// sub_140cc30  (orig 0x140cc30, ret_only)
void main_f_140cc30() {}

// sub_140cc40  (orig 0x140cc40, ret_only)
void main_f_140cc40() {}

// sub_140d4b0  (orig 0x140d4b0, getter)
uint64_t main_f_140d4b0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_140d620  (orig 0x140d620, mov_ret)
uint32_t main_f_140d620() { return 1; }

// sub_140d630  (orig 0x140d630, indexed-getter)
uint64_t main_f_140d630(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_140d640  (orig 0x140d640, indexed-getter)
uint64_t main_f_140d640(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_140e480  (orig 0x140e480, ret_only)
void main_f_140e480() {}

// sub_140e490  (orig 0x140e490, ret_only)
void main_f_140e490() {}

// sub_140ea40  (orig 0x140ea40, mov_ret)
uint32_t main_f_140ea40() { return 1; }

// sub_1411e90  (orig 0x1411e90, ret_only)
void main_f_1411e90() {}

// sub_1412bc0  (orig 0x1412bc0, ret_only)
void main_f_1412bc0() {}

// sub_1412bd0  (orig 0x1412bd0, copy2)
void main_f_1412bd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412be0  (orig 0x1412be0, copy2)
void main_f_1412be0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412c40  (orig 0x1412c40, ret_only)
void main_f_1412c40() {}

// sub_1412c50  (orig 0x1412c50, copy2)
void main_f_1412c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412c60  (orig 0x1412c60, copy2)
void main_f_1412c60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412cf0  (orig 0x1412cf0, ret_only)
void main_f_1412cf0() {}

// sub_1412d00  (orig 0x1412d00, copy2)
void main_f_1412d00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412d10  (orig 0x1412d10, copy2)
void main_f_1412d10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412d30  (orig 0x1412d30, ret_only)
void main_f_1412d30() {}

// sub_1412d40  (orig 0x1412d40, copy2)
void main_f_1412d40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412d50  (orig 0x1412d50, copy2)
void main_f_1412d50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412d70  (orig 0x1412d70, ret_only)
void main_f_1412d70() {}

// sub_1412d80  (orig 0x1412d80, copy2)
void main_f_1412d80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412d90  (orig 0x1412d90, copy2)
void main_f_1412d90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1413290  (orig 0x1413290, ret_only)
void main_f_1413290() {}

// sub_1416250  (orig 0x1416250, ret_only)
void main_f_1416250() {}

// sub_1416260  (orig 0x1416260, copy2)
void main_f_1416260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1416270  (orig 0x1416270, copy2)
void main_f_1416270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14163a0  (orig 0x14163a0, ret_only)
void main_f_14163a0() {}

// sub_14163b0  (orig 0x14163b0, copy2)
void main_f_14163b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14163c0  (orig 0x14163c0, copy2)
void main_f_14163c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14163d0  (orig 0x14163d0, straight)
void main_f_14163d0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint8_t*)((char*)(p0) + 136) = (uint8_t)k1;
    *(uint32_t*)((char*)(p0) + 140) = 0;
}

// sub_14163f0  (orig 0x14163f0, ret_only)
void main_f_14163f0() {}

// sub_1416400  (orig 0x1416400, copy2)
void main_f_1416400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1416410  (orig 0x1416410, copy2)
void main_f_1416410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1416420  (orig 0x1416420, straight)
void main_f_1416420(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint8_t*)((char*)(p0) + 136) = (uint8_t)k1;
    *(uint32_t*)((char*)(p0) + 140) = 1;
}

// sub_1416440  (orig 0x1416440, ret_only)
void main_f_1416440() {}

// sub_1416450  (orig 0x1416450, copy2)
void main_f_1416450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1416460  (orig 0x1416460, copy2)
void main_f_1416460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14164e0  (orig 0x14164e0, ret_only)
void main_f_14164e0() {}

// sub_14164f0  (orig 0x14164f0, copy2)
void main_f_14164f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1416500  (orig 0x1416500, copy2)
void main_f_1416500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14172b0  (orig 0x14172b0, ret_only)
void main_f_14172b0() {}

// sub_1417c20  (orig 0x1417c20, mov_ret)
uint32_t main_f_1417c20() { return 1; }

// sub_1417c30  (orig 0x1417c30, ret_only)
void main_f_1417c30() {}

// sub_1417c40  (orig 0x1417c40, ret_only)
void main_f_1417c40() {}

// sub_1418580  (orig 0x1418580, getter)
uint64_t main_f_1418580(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14186f0  (orig 0x14186f0, mov_ret)
uint32_t main_f_14186f0() { return 1; }

// sub_1418700  (orig 0x1418700, indexed-getter)
uint64_t main_f_1418700(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1418710  (orig 0x1418710, indexed-getter)
uint64_t main_f_1418710(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1419450  (orig 0x1419450, ret_only)
void main_f_1419450() {}

// sub_141a460  (orig 0x141a460, ret_only)
void main_f_141a460() {}

// sub_141a470  (orig 0x141a470, ret_only)
void main_f_141a470() {}

// sub_141a480  (orig 0x141a480, ret_only)
void main_f_141a480() {}

// sub_141c3d0  (orig 0x141c3d0, ret_only)
void main_f_141c3d0() {}

// sub_141c3e0  (orig 0x141c3e0, copy2)
void main_f_141c3e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c3f0  (orig 0x141c3f0, copy2)
void main_f_141c3f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c420  (orig 0x141c420, ret_only)
void main_f_141c420() {}

// sub_141c430  (orig 0x141c430, copy2)
void main_f_141c430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c440  (orig 0x141c440, copy2)
void main_f_141c440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c470  (orig 0x141c470, ret_only)
void main_f_141c470() {}

// sub_141c480  (orig 0x141c480, copy2)
void main_f_141c480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c490  (orig 0x141c490, copy2)
void main_f_141c490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c4b0  (orig 0x141c4b0, ret_only)
void main_f_141c4b0() {}

// sub_141c4c0  (orig 0x141c4c0, copy2)
void main_f_141c4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c4d0  (orig 0x141c4d0, copy2)
void main_f_141c4d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c4f0  (orig 0x141c4f0, ret_only)
void main_f_141c4f0() {}

// sub_141c500  (orig 0x141c500, copy2)
void main_f_141c500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c510  (orig 0x141c510, copy2)
void main_f_141c510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c530  (orig 0x141c530, ret_only)
void main_f_141c530() {}

// sub_141c540  (orig 0x141c540, copy2)
void main_f_141c540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c550  (orig 0x141c550, copy2)
void main_f_141c550(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c570  (orig 0x141c570, ret_only)
void main_f_141c570() {}

// sub_141c580  (orig 0x141c580, copy2)
void main_f_141c580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c590  (orig 0x141c590, copy2)
void main_f_141c590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141ebf0  (orig 0x141ebf0, ret_only)
void main_f_141ebf0() {}

// sub_141ec00  (orig 0x141ec00, copy2)
void main_f_141ec00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141ec10  (orig 0x141ec10, copy2)
void main_f_141ec10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141ee20  (orig 0x141ee20, ret_only)
void main_f_141ee20() {}

// sub_141ee30  (orig 0x141ee30, struct-copy)
void main_f_141ee30(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_141ee50  (orig 0x141ee50, struct-copy)
void main_f_141ee50(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1420c30  (orig 0x1420c30, ret_only)
void main_f_1420c30() {}

// sub_1421970  (orig 0x1421970, mov_ret)
uint32_t main_f_1421970() { return 1; }

// sub_1421980  (orig 0x1421980, ret_only)
void main_f_1421980() {}

// sub_1421990  (orig 0x1421990, ret_only)
void main_f_1421990() {}

// sub_14220d0  (orig 0x14220d0, mov_ret)
uint32_t main_f_14220d0() { return 1; }

// sub_14220e0  (orig 0x14220e0, ret_only)
void main_f_14220e0() {}

// sub_14220f0  (orig 0x14220f0, ret_only)
void main_f_14220f0() {}

// sub_14221e0  (orig 0x14221e0, mov_ret)
uint32_t main_f_14221e0() { return 1; }

// sub_1422840  (orig 0x1422840, getter)
uint64_t main_f_1422840(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14229b0  (orig 0x14229b0, mov_ret)
uint32_t main_f_14229b0() { return 1; }

// sub_14229c0  (orig 0x14229c0, indexed-getter)
uint64_t main_f_14229c0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14229d0  (orig 0x14229d0, indexed-getter)
uint64_t main_f_14229d0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1423040  (orig 0x1423040, ret_only)
void main_f_1423040() {}

// sub_14239f0  (orig 0x14239f0, mov_ret)
uint32_t main_f_14239f0() { return 1; }

// sub_14242a0  (orig 0x14242a0, getter)
uint64_t main_f_14242a0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1424410  (orig 0x1424410, mov_ret)
uint32_t main_f_1424410() { return 1; }

// sub_1424420  (orig 0x1424420, indexed-getter)
uint64_t main_f_1424420(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1424430  (orig 0x1424430, indexed-getter)
uint64_t main_f_1424430(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14249a0  (orig 0x14249a0, getter)
uint64_t main_f_14249a0(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_14249b0  (orig 0x14249b0, getter)
uint64_t main_f_14249b0(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_14249c0  (orig 0x14249c0, ptr_add)
void* main_f_14249c0(void* a0) { return (char*)a0 + 192; }

// sub_1424f50  (orig 0x1424f50, ret_only)
void main_f_1424f50() {}

// sub_1424f60  (orig 0x1424f60, ret_only)
void main_f_1424f60() {}

// sub_1425a00  (orig 0x1425a00, mov_ret)
uint32_t main_f_1425a00() { return 1; }

// sub_1425a10  (orig 0x1425a10, indexed-getter)
uint64_t main_f_1425a10(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1425a20  (orig 0x1425a20, indexed-getter)
uint64_t main_f_1425a20(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1428ca0  (orig 0x1428ca0, ret_only)
void main_f_1428ca0() {}

// sub_14297c0  (orig 0x14297c0, ret_only)
void main_f_14297c0() {}

// sub_1429c90  (orig 0x1429c90, ret_only)
void main_f_1429c90() {}

// sub_142a1b0  (orig 0x142a1b0, straight)
void main_f_142a1b0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 116) = (uint8_t)k0;
}

// sub_142bd00  (orig 0x142bd00, mov_ret)
uint32_t main_f_142bd00() { return 1; }

// sub_142bd10  (orig 0x142bd10, ret_only)
void main_f_142bd10() {}

// sub_142bd20  (orig 0x142bd20, ret_only)
void main_f_142bd20() {}

// sub_142c970  (orig 0x142c970, getter)
uint32_t main_f_142c970(void* a0) { return *(uint32_t*)((char*)(a0) + 640); }

// sub_142c980  (orig 0x142c980, getter)
uint32_t main_f_142c980(void* a0) { return *(uint32_t*)((char*)(a0) + 644); }

// sub_142ca00  (orig 0x142ca00, mov_ret)
uint32_t main_f_142ca00() { return 0; }

// sub_142ca10  (orig 0x142ca10, mov_ret)
uint32_t main_f_142ca10() { return 0; }

// sub_142cbc0  (orig 0x142cbc0, getter)
uint8_t main_f_142cbc0(void* a0) { return *(uint8_t*)((char*)(a0) + 656); }

// sub_142cc40  (orig 0x142cc40, mov_ret)
uint32_t main_f_142cc40() { return 1; }

// sub_142cc50  (orig 0x142cc50, mov_ret)
uint32_t main_f_142cc50() { return 0; }

// sub_142dda0  (orig 0x142dda0, mov_ret)
uint32_t main_f_142dda0() { return 1; }

// sub_142ddb0  (orig 0x142ddb0, ret_only)
void main_f_142ddb0() {}

// sub_142ddc0  (orig 0x142ddc0, ret_only)
void main_f_142ddc0() {}

// sub_142fe80  (orig 0x142fe80, getter)
uint64_t main_f_142fe80(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_142fff0  (orig 0x142fff0, mov_ret)
uint32_t main_f_142fff0() { return 1; }

// sub_1430000  (orig 0x1430000, indexed-getter)
uint64_t main_f_1430000(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1430010  (orig 0x1430010, indexed-getter)
uint64_t main_f_1430010(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1433730  (orig 0x1433730, ret_only)
void main_f_1433730() {}

// sub_1433790  (orig 0x1433790, ret_only)
void main_f_1433790() {}

// sub_1433830  (orig 0x1433830, ret_only)
void main_f_1433830() {}

// sub_1433840  (orig 0x1433840, struct-copy)
void main_f_1433840(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1433860  (orig 0x1433860, struct-copy)
void main_f_1433860(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14338a0  (orig 0x14338a0, ret_only)
void main_f_14338a0() {}

// sub_14338b0  (orig 0x14338b0, struct-copy)
void main_f_14338b0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14338d0  (orig 0x14338d0, struct-copy)
void main_f_14338d0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1434750  (orig 0x1434750, setter-chain)
void main_f_1434750(void* a0) { *(uint16_t*)((char*)(a0) + 84) = 0; *(uint32_t*)((char*)(a0) + 80) = 0; }

// sub_14357b0  (orig 0x14357b0, ret_only)
void main_f_14357b0() {}

// sub_14363b0  (orig 0x14363b0, ret_only)
void main_f_14363b0() {}

// sub_1437ad0  (orig 0x1437ad0, ret_only)
void main_f_1437ad0() {}

// sub_14382f0  (orig 0x14382f0, ret_only)
void main_f_14382f0() {}

// sub_14387f0  (orig 0x14387f0, ret_only)
void main_f_14387f0() {}

// sub_1438a50  (orig 0x1438a50, ret_only)
void main_f_1438a50() {}

// sub_1439330  (orig 0x1439330, ret_only)
void main_f_1439330() {}

// sub_143a230  (orig 0x143a230, ret_only)
void main_f_143a230() {}

// sub_143a240  (orig 0x143a240, copy2)
void main_f_143a240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_143a250  (orig 0x143a250, copy2)
void main_f_143a250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_143a9d0  (orig 0x143a9d0, ret_only)
void main_f_143a9d0() {}

// sub_143b560  (orig 0x143b560, ret_only)
void main_f_143b560() {}

// sub_143b840  (orig 0x143b840, mov_ret)
uint32_t main_f_143b840() { return 1; }

// sub_143b850  (orig 0x143b850, ret_only)
void main_f_143b850() {}

// sub_143bb10  (orig 0x143bb10, compare-pred)
bool main_f_143bb10(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)((char*)a0 + 120)) + 1484)) != (uint32_t)(0); }

// sub_143bd70  (orig 0x143bd70, ret_only)
void main_f_143bd70() {}

// sub_143bd80  (orig 0x143bd80, copy2)
void main_f_143bd80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_143bd90  (orig 0x143bd90, copy2)
void main_f_143bd90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_143be10  (orig 0x143be10, mov_ret)
uint32_t main_f_143be10() { return 1; }

// sub_143c910  (orig 0x143c910, mov_ret)
uint32_t main_f_143c910() { return 0; }

// sub_143d040  (orig 0x143d040, ret_only)
void main_f_143d040() {}

// sub_143d050  (orig 0x143d050, struct-copy)
void main_f_143d050(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_143d070  (orig 0x143d070, struct-copy)
void main_f_143d070(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_143d480  (orig 0x143d480, straight)
void main_f_143d480(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 1488) = 0;
    *(uint8_t*)((char*)(p0) + 1484) = (uint8_t)k1;
}

// sub_143d4a0  (orig 0x143d4a0, ret_only)
void main_f_143d4a0() {}

// sub_143d4b0  (orig 0x143d4b0, copy2)
void main_f_143d4b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_143d4c0  (orig 0x143d4c0, copy2)
void main_f_143d4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_143e500  (orig 0x143e500, mov_ret)
uint32_t main_f_143e500() { return 1; }

// sub_143eb20  (orig 0x143eb20, mov_ret)
uint32_t main_f_143eb20() { return 1; }

// sub_143eb30  (orig 0x143eb30, indexed-getter)
uint64_t main_f_143eb30(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_143eb40  (orig 0x143eb40, indexed-getter)
uint64_t main_f_143eb40(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_143f120  (orig 0x143f120, mov_ret)
uint32_t main_f_143f120() { return 1; }

// sub_143f130  (orig 0x143f130, ret_only)
void main_f_143f130() {}

// sub_143f140  (orig 0x143f140, ret_only)
void main_f_143f140() {}

// sub_143fbd0  (orig 0x143fbd0, ret_only)
void main_f_143fbd0() {}

// sub_143fbe0  (orig 0x143fbe0, ret_only)
void main_f_143fbe0() {}

// sub_143fbf0  (orig 0x143fbf0, mov_ret)
uint32_t main_f_143fbf0() { return 1; }

// sub_143fce0  (orig 0x143fce0, setter)
void main_f_143fce0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1792) = a1; }

// sub_14403c0  (orig 0x14403c0, getter)
uint64_t main_f_14403c0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1440530  (orig 0x1440530, mov_ret)
uint32_t main_f_1440530() { return 1; }

// sub_1440540  (orig 0x1440540, indexed-getter)
uint64_t main_f_1440540(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1440550  (orig 0x1440550, indexed-getter)
uint64_t main_f_1440550(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1441ca0  (orig 0x1441ca0, ret_only)
void main_f_1441ca0() {}

// sub_14420a0  (orig 0x14420a0, mov_ret)
uint32_t main_f_14420a0() { return 1; }

// sub_1443160  (orig 0x1443160, setter-chain-zero)
void main_f_1443160(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 32) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
}

// sub_14499e0  (orig 0x14499e0, ret_only)
void main_f_14499e0() {}

// sub_14499f0  (orig 0x14499f0, copy2)
void main_f_14499f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1449a00  (orig 0x1449a00, copy2)
void main_f_1449a00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1449b30  (orig 0x1449b30, ret_only)
void main_f_1449b30() {}

// sub_1449b40  (orig 0x1449b40, copy2)
void main_f_1449b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1449b50  (orig 0x1449b50, copy2)
void main_f_1449b50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_144a570  (orig 0x144a570, mov_ret)
uint32_t main_f_144a570() { return 1; }

// sub_144a580  (orig 0x144a580, ret_only)
void main_f_144a580() {}

// sub_144a590  (orig 0x144a590, ret_only)
void main_f_144a590() {}

// sub_144b120  (orig 0x144b120, getter)
uint64_t main_f_144b120(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_144b290  (orig 0x144b290, mov_ret)
uint32_t main_f_144b290() { return 1; }

// sub_144b2a0  (orig 0x144b2a0, indexed-getter)
uint64_t main_f_144b2a0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_144b2b0  (orig 0x144b2b0, indexed-getter)
uint64_t main_f_144b2b0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_144b960  (orig 0x144b960, mov_ret)
uint32_t main_f_144b960() { return 1; }

// sub_144be40  (orig 0x144be40, mov_ret)
uint32_t main_f_144be40() { return 1; }

// sub_144cbc0  (orig 0x144cbc0, ret_only)
void main_f_144cbc0() {}

// sub_144d5c0  (orig 0x144d5c0, ret_only)
void main_f_144d5c0() {}

// sub_144dec0  (orig 0x144dec0, ret_only)
void main_f_144dec0() {}

// sub_144ebb0  (orig 0x144ebb0, ret_only)
void main_f_144ebb0() {}

// sub_144ebc0  (orig 0x144ebc0, struct-copy)
void main_f_144ebc0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_144ebe0  (orig 0x144ebe0, struct-copy)
void main_f_144ebe0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_144ec20  (orig 0x144ec20, ret_only)
void main_f_144ec20() {}

// sub_144ec30  (orig 0x144ec30, struct-copy)
void main_f_144ec30(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_144ec50  (orig 0x144ec50, struct-copy)
void main_f_144ec50(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_144ec80  (orig 0x144ec80, ret_only)
void main_f_144ec80() {}

// sub_144ec90  (orig 0x144ec90, copy2)
void main_f_144ec90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_144eca0  (orig 0x144eca0, copy2)
void main_f_144eca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_144ecc0  (orig 0x144ecc0, ret_only)
void main_f_144ecc0() {}

// sub_144ecd0  (orig 0x144ecd0, copy2)
void main_f_144ecd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_144ece0  (orig 0x144ece0, copy2)
void main_f_144ece0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_144ed30  (orig 0x144ed30, ret_only)
void main_f_144ed30() {}

// sub_144ed40  (orig 0x144ed40, copy2)
void main_f_144ed40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_144ed50  (orig 0x144ed50, copy2)
void main_f_144ed50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_144efb0  (orig 0x144efb0, ret_only)
void main_f_144efb0() {}

// sub_144f170  (orig 0x144f170, setter-chain-zero)
void main_f_144f170(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint16_t*)((char*)a0 + 32) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 8) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a0 + 6) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint16_t*)((char*)a0 + 4) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)(char*)a0 = 0;
}

// sub_144f650  (orig 0x144f650, mov_ret)
uint32_t main_f_144f650() { return 1; }

// sub_1451c30  (orig 0x1451c30, ret_only)
void main_f_1451c30() {}

// sub_1453cd0  (orig 0x1453cd0, getter)
uint8_t main_f_1453cd0(void* a0) { return *(uint8_t*)((char*)(a0) + 1); }

// sub_1453ce0  (orig 0x1453ce0, getter)
uint8_t main_f_1453ce0(void* a0) { return *(uint8_t*)((char*)(a0) + 2); }

// sub_1453e00  (orig 0x1453e00, getter)
uint64_t main_f_1453e00(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1453e10  (orig 0x1453e10, getter)
uint64_t main_f_1453e10(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1453e20  (orig 0x1453e20, compare)
bool main_f_1453e20(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 3)) != (uint64_t)(0); }

// sub_14541a0  (orig 0x14541a0, mov_ret)
uint32_t main_f_14541a0() { return 1; }

// sub_14541b0  (orig 0x14541b0, ret_only)
void main_f_14541b0() {}

// sub_14543c0  (orig 0x14543c0, ret_only)
void main_f_14543c0() {}

// sub_1455110  (orig 0x1455110, getter)
uint64_t main_f_1455110(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1455280  (orig 0x1455280, mov_ret)
uint32_t main_f_1455280() { return 1; }

// sub_1455290  (orig 0x1455290, indexed-getter)
uint64_t main_f_1455290(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14552a0  (orig 0x14552a0, indexed-getter)
uint64_t main_f_14552a0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1456cd0  (orig 0x1456cd0, ret_only)
void main_f_1456cd0() {}

// sub_1456ce0  (orig 0x1456ce0, copy2)
void main_f_1456ce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1456cf0  (orig 0x1456cf0, copy2)
void main_f_1456cf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145b610  (orig 0x145b610, getter)
uint32_t main_f_145b610(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_145b760  (orig 0x145b760, ret_only)
void main_f_145b760() {}

// sub_145b770  (orig 0x145b770, struct-copy)
void main_f_145b770(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_145b790  (orig 0x145b790, struct-copy)
void main_f_145b790(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_145f0d0  (orig 0x145f0d0, ret_only)
void main_f_145f0d0() {}

// sub_145f0e0  (orig 0x145f0e0, copy2)
void main_f_145f0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f0f0  (orig 0x145f0f0, copy2)
void main_f_145f0f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f120  (orig 0x145f120, ret_only)
void main_f_145f120() {}

// sub_145f130  (orig 0x145f130, copy2)
void main_f_145f130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f140  (orig 0x145f140, copy2)
void main_f_145f140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f190  (orig 0x145f190, ret_only)
void main_f_145f190() {}

// sub_145f1a0  (orig 0x145f1a0, copy2)
void main_f_145f1a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f1b0  (orig 0x145f1b0, copy2)
void main_f_145f1b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f1c0  (orig 0x145f1c0, const-field-set-store)
void main_f_145f1c0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 1536) = (uint32_t)(t1);
}

// sub_145f1d0  (orig 0x145f1d0, ret_only)
void main_f_145f1d0() {}

// sub_145f1e0  (orig 0x145f1e0, copy2)
void main_f_145f1e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f1f0  (orig 0x145f1f0, copy2)
void main_f_145f1f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14606f0  (orig 0x14606f0, copy-chain-store)
void main_f_14606f0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1460a90  (orig 0x1460a90, ret_only)
void main_f_1460a90() {}

// sub_1460e00  (orig 0x1460e00, mov_ret)
uint32_t main_f_1460e00() { return 1; }

// sub_1460e10  (orig 0x1460e10, ret_only)
void main_f_1460e10() {}

// sub_1460f00  (orig 0x1460f00, ret_only)
void main_f_1460f00() {}

// sub_1461b40  (orig 0x1461b40, getter)
uint64_t main_f_1461b40(void* a0) { return *(uint64_t*)((char*)(a0) + 184); }

// sub_1461cd0  (orig 0x1461cd0, mov_ret)
uint32_t main_f_1461cd0() { return 4; }

// sub_1461ce0  (orig 0x1461ce0, indexed-getter)
uint64_t main_f_1461ce0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1461cf0  (orig 0x1461cf0, indexed-getter)
uint64_t main_f_1461cf0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_146c920  (orig 0x146c920, ret_only)
void main_f_146c920() {}

// sub_146c930  (orig 0x146c930, copy2)
void main_f_146c930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_146c940  (orig 0x146c940, copy2)
void main_f_146c940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_146c990  (orig 0x146c990, ret_only)
void main_f_146c990() {}

// sub_146c9a0  (orig 0x146c9a0, copy2)
void main_f_146c9a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_146c9b0  (orig 0x146c9b0, copy2)
void main_f_146c9b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_146cc90  (orig 0x146cc90, ret_only)
void main_f_146cc90() {}

// sub_146e280  (orig 0x146e280, ret_only)
void main_f_146e280() {}

// sub_146f290  (orig 0x146f290, ret_only)
void main_f_146f290() {}

// sub_1470a40  (orig 0x1470a40, const-field-set-store)
void main_f_1470a40(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 3;
    *(uint32_t*)((char*)(t0) + 1504) = (uint32_t)(t1);
}

// sub_1470a50  (orig 0x1470a50, ret_only)
void main_f_1470a50() {}

// sub_1470a60  (orig 0x1470a60, copy2)
void main_f_1470a60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470a70  (orig 0x1470a70, copy2)
void main_f_1470a70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470a80  (orig 0x1470a80, const-field-set-store)
void main_f_1470a80(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 4;
    *(uint32_t*)((char*)(t0) + 1504) = (uint32_t)(t1);
}

// sub_1470a90  (orig 0x1470a90, ret_only)
void main_f_1470a90() {}

// sub_1470aa0  (orig 0x1470aa0, copy2)
void main_f_1470aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470ab0  (orig 0x1470ab0, copy2)
void main_f_1470ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470ac0  (orig 0x1470ac0, const-field-set-store)
void main_f_1470ac0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1504) = (uint32_t)(t1);
}

// sub_1470ad0  (orig 0x1470ad0, ret_only)
void main_f_1470ad0() {}

// sub_1470ae0  (orig 0x1470ae0, copy2)
void main_f_1470ae0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470af0  (orig 0x1470af0, copy2)
void main_f_1470af0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470b20  (orig 0x1470b20, ret_only)
void main_f_1470b20() {}

// sub_1470b30  (orig 0x1470b30, copy2)
void main_f_1470b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470b40  (orig 0x1470b40, copy2)
void main_f_1470b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1472180  (orig 0x1472180, const-field-set-store)
void main_f_1472180(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1564) = (uint32_t)(t1);
}

// sub_1472190  (orig 0x1472190, ret_only)
void main_f_1472190() {}

// sub_14721a0  (orig 0x14721a0, copy2)
void main_f_14721a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14721b0  (orig 0x14721b0, copy2)
void main_f_14721b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14721e0  (orig 0x14721e0, ret_only)
void main_f_14721e0() {}

// sub_14721f0  (orig 0x14721f0, copy2)
void main_f_14721f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1472200  (orig 0x1472200, copy2)
void main_f_1472200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1472210  (orig 0x1472210, const-field-set-store)
void main_f_1472210(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 3;
    *(uint32_t*)((char*)(t0) + 1564) = (uint32_t)(t1);
}

// sub_1472220  (orig 0x1472220, ret_only)
void main_f_1472220() {}

// sub_1472230  (orig 0x1472230, copy2)
void main_f_1472230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1472240  (orig 0x1472240, copy2)
void main_f_1472240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1472280  (orig 0x1472280, ret_only)
void main_f_1472280() {}

// sub_1472290  (orig 0x1472290, copy2)
void main_f_1472290(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14722a0  (orig 0x14722a0, copy2)
void main_f_14722a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1473920  (orig 0x1473920, ret_only)
void main_f_1473920() {}

// sub_1474870  (orig 0x1474870, ret_only)
void main_f_1474870() {}

// sub_1476870  (orig 0x1476870, setter)
void main_f_1476870(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1668) = a1; }

// sub_1476c80  (orig 0x1476c80, const-field-set-store)
void main_f_1476c80(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1676) = (uint32_t)(t1);
}

// sub_1476c90  (orig 0x1476c90, ret_only)
void main_f_1476c90() {}

// sub_1476ca0  (orig 0x1476ca0, copy2)
void main_f_1476ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476cb0  (orig 0x1476cb0, copy2)
void main_f_1476cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476cc0  (orig 0x1476cc0, const-field-set-store)
void main_f_1476cc0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 1676) = (uint32_t)(t1);
}

// sub_1476cd0  (orig 0x1476cd0, ret_only)
void main_f_1476cd0() {}

// sub_1476ce0  (orig 0x1476ce0, copy2)
void main_f_1476ce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476cf0  (orig 0x1476cf0, copy2)
void main_f_1476cf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476d00  (orig 0x1476d00, const-field-set-store)
void main_f_1476d00(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 3;
    *(uint32_t*)((char*)(t0) + 1676) = (uint32_t)(t1);
}

// sub_1476d10  (orig 0x1476d10, ret_only)
void main_f_1476d10() {}

// sub_1476d20  (orig 0x1476d20, copy2)
void main_f_1476d20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476d30  (orig 0x1476d30, copy2)
void main_f_1476d30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476d70  (orig 0x1476d70, ret_only)
void main_f_1476d70() {}

// sub_1476d80  (orig 0x1476d80, struct-copy)
void main_f_1476d80(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1476da0  (orig 0x1476da0, struct-copy)
void main_f_1476da0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1477050  (orig 0x1477050, ret_only)
void main_f_1477050() {}

// sub_1477510  (orig 0x1477510, ret_only)
void main_f_1477510() {}

// sub_14778e0  (orig 0x14778e0, compare-pred)
bool main_f_14778e0(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 120)) + 1488)) != (uint32_t)(6); }

// sub_1477900  (orig 0x1477900, ret_only)
void main_f_1477900() {}

// sub_14787b0  (orig 0x14787b0, ret_only)
void main_f_14787b0() {}

// sub_14787c0  (orig 0x14787c0, copy2)
void main_f_14787c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14787d0  (orig 0x14787d0, copy2)
void main_f_14787d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1478800  (orig 0x1478800, ret_only)
void main_f_1478800() {}

// sub_1478810  (orig 0x1478810, copy2)
void main_f_1478810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1478820  (orig 0x1478820, copy2)
void main_f_1478820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1478850  (orig 0x1478850, ret_only)
void main_f_1478850() {}

// sub_1478860  (orig 0x1478860, copy2)
void main_f_1478860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1478870  (orig 0x1478870, copy2)
void main_f_1478870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1478a90  (orig 0x1478a90, compare-pred)
bool main_f_1478a90(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 120)) + 1484)) != (uint32_t)(3); }

// sub_1478ab0  (orig 0x1478ab0, ret_only)
void main_f_1478ab0() {}

// sub_1479480  (orig 0x1479480, ret_only)
void main_f_1479480() {}

// sub_1479ec0  (orig 0x1479ec0, ret_only)
void main_f_1479ec0() {}

// sub_1479ed0  (orig 0x1479ed0, copy2)
void main_f_1479ed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1479ee0  (orig 0x1479ee0, copy2)
void main_f_1479ee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_147a330  (orig 0x147a330, ret_only)
void main_f_147a330() {}

// sub_147b910  (orig 0x147b910, ret_only)
void main_f_147b910() {}

// sub_147c080  (orig 0x147c080, ret_only)
void main_f_147c080() {}

// sub_147cbf0  (orig 0x147cbf0, ret_only)
void main_f_147cbf0() {}

// sub_147d030  (orig 0x147d030, ret_only)
void main_f_147d030() {}

// sub_147dc30  (orig 0x147dc30, ret_only)
void main_f_147dc30() {}

// sub_147e6d0  (orig 0x147e6d0, ret_only)
void main_f_147e6d0() {}

// sub_147f010  (orig 0x147f010, ret_only)
void main_f_147f010() {}

// sub_147fc20  (orig 0x147fc20, ret_only)
void main_f_147fc20() {}

// sub_1480440  (orig 0x1480440, ret_only)
void main_f_1480440() {}

// sub_1480810  (orig 0x1480810, ret_only)
void main_f_1480810() {}

// sub_1480cb0  (orig 0x1480cb0, ret_only)
void main_f_1480cb0() {}

// sub_1481090  (orig 0x1481090, ret_only)
void main_f_1481090() {}

// sub_1481470  (orig 0x1481470, ret_only)
void main_f_1481470() {}

// sub_1481850  (orig 0x1481850, ret_only)
void main_f_1481850() {}

// sub_1481ba0  (orig 0x1481ba0, mov_ret)
uint32_t main_f_1481ba0() { return 1; }

// sub_1481bb0  (orig 0x1481bb0, ret_only)
void main_f_1481bb0() {}

// sub_1481ca0  (orig 0x1481ca0, ret_only)
void main_f_1481ca0() {}

// sub_1482810  (orig 0x1482810, getter)
uint64_t main_f_1482810(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1482980  (orig 0x1482980, mov_ret)
uint32_t main_f_1482980() { return 1; }

// sub_1482990  (orig 0x1482990, indexed-getter)
uint64_t main_f_1482990(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14829a0  (orig 0x14829a0, indexed-getter)
uint64_t main_f_14829a0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14842b0  (orig 0x14842b0, ret_only)
void main_f_14842b0() {}

// sub_14842c0  (orig 0x14842c0, copy2)
void main_f_14842c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14842d0  (orig 0x14842d0, copy2)
void main_f_14842d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1484fc0  (orig 0x1484fc0, ret_only)
void main_f_1484fc0() {}

// sub_1485500  (orig 0x1485500, ret_only)
void main_f_1485500() {}

// sub_1485a90  (orig 0x1485a90, mov_ret)
uint32_t main_f_1485a90() { return 1; }

// sub_1485aa0  (orig 0x1485aa0, ret_only)
void main_f_1485aa0() {}

// sub_1485c40  (orig 0x1485c40, ret_only)
void main_f_1485c40() {}

// sub_1486570  (orig 0x1486570, getter)
uint64_t main_f_1486570(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14866e0  (orig 0x14866e0, mov_ret)
uint32_t main_f_14866e0() { return 1; }

// sub_14866f0  (orig 0x14866f0, indexed-getter)
uint64_t main_f_14866f0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1486700  (orig 0x1486700, indexed-getter)
uint64_t main_f_1486700(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1489750  (orig 0x1489750, ret_only)
void main_f_1489750() {}

// sub_1489760  (orig 0x1489760, copy2)
void main_f_1489760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1489770  (orig 0x1489770, copy2)
void main_f_1489770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b640  (orig 0x148b640, ret_only)
void main_f_148b640() {}

// sub_148b650  (orig 0x148b650, copy2)
void main_f_148b650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b660  (orig 0x148b660, copy2)
void main_f_148b660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b690  (orig 0x148b690, ret_only)
void main_f_148b690() {}

// sub_148b6a0  (orig 0x148b6a0, copy2)
void main_f_148b6a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b6b0  (orig 0x148b6b0, copy2)
void main_f_148b6b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b6e0  (orig 0x148b6e0, ret_only)
void main_f_148b6e0() {}

// sub_148b6f0  (orig 0x148b6f0, copy2)
void main_f_148b6f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b700  (orig 0x148b700, copy2)
void main_f_148b700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b870  (orig 0x148b870, ret_only)
void main_f_148b870() {}

// sub_148b880  (orig 0x148b880, copy2)
void main_f_148b880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b890  (orig 0x148b890, copy2)
void main_f_148b890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b8b0  (orig 0x148b8b0, ret_only)
void main_f_148b8b0() {}

// sub_148b8c0  (orig 0x148b8c0, copy2)
void main_f_148b8c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b8d0  (orig 0x148b8d0, copy2)
void main_f_148b8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b8f0  (orig 0x148b8f0, ret_only)
void main_f_148b8f0() {}

// sub_148b900  (orig 0x148b900, copy2)
void main_f_148b900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b910  (orig 0x148b910, copy2)
void main_f_148b910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148ba80  (orig 0x148ba80, ret_only)
void main_f_148ba80() {}

// sub_148ba90  (orig 0x148ba90, copy2)
void main_f_148ba90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148baa0  (orig 0x148baa0, copy2)
void main_f_148baa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148de40  (orig 0x148de40, ret_only)
void main_f_148de40() {}

// sub_148e7e0  (orig 0x148e7e0, ret_only)
void main_f_148e7e0() {}

// sub_148f030  (orig 0x148f030, ret_only)
void main_f_148f030() {}

// sub_148fb30  (orig 0x148fb30, ret_only)
void main_f_148fb30() {}

// sub_1490620  (orig 0x1490620, ret_only)
void main_f_1490620() {}

// sub_1490cf0  (orig 0x1490cf0, mov_ret)
uint32_t main_f_1490cf0() { return 1; }

// sub_1491160  (orig 0x1491160, mov_ret)
uint32_t main_f_1491160() { return 1; }

// sub_1491170  (orig 0x1491170, ret_only)
void main_f_1491170() {}

// sub_14919e0  (orig 0x14919e0, ret_only)
void main_f_14919e0() {}

// sub_1498810  (orig 0x1498810, ret_only)
void main_f_1498810() {}

// sub_149aab0  (orig 0x149aab0, ret_only)
void main_f_149aab0() {}

// sub_149ae30  (orig 0x149ae30, ret_only)
void main_f_149ae30() {}

// sub_149e880  (orig 0x149e880, straight)
void main_f_149e880(void* a0) {
    *(uint32_t*)((char*)(a0) + 2920) = *(uint32_t*)((char*)(a0) + 2924);
    *(uint32_t*)((char*)(a0) + 2928) = *(uint32_t*)((char*)(a0) + 2932);
    *(uint32_t*)((char*)(a0) + 2936) = *(uint32_t*)((char*)(a0) + 2940);
}

// sub_149f130  (orig 0x149f130, ret_only)
void main_f_149f130() {}

// sub_149f140  (orig 0x149f140, copy2)
void main_f_149f140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f150  (orig 0x149f150, copy2)
void main_f_149f150(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f160  (orig 0x149f160, const-field-set-store)
void main_f_149f160(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1484) = (uint32_t)(t1);
}

// sub_149f170  (orig 0x149f170, ret_only)
void main_f_149f170() {}

// sub_149f180  (orig 0x149f180, copy2)
void main_f_149f180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f190  (orig 0x149f190, copy2)
void main_f_149f190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f1f0  (orig 0x149f1f0, ret_only)
void main_f_149f1f0() {}

// sub_149f200  (orig 0x149f200, copy2)
void main_f_149f200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f210  (orig 0x149f210, copy2)
void main_f_149f210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f2b0  (orig 0x149f2b0, ret_only)
void main_f_149f2b0() {}

// sub_149f2c0  (orig 0x149f2c0, copy2)
void main_f_149f2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f2d0  (orig 0x149f2d0, copy2)
void main_f_149f2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f370  (orig 0x149f370, ret_only)
void main_f_149f370() {}

// sub_149f380  (orig 0x149f380, copy2)
void main_f_149f380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f390  (orig 0x149f390, copy2)
void main_f_149f390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f430  (orig 0x149f430, ret_only)
void main_f_149f430() {}

// sub_149f440  (orig 0x149f440, copy2)
void main_f_149f440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f450  (orig 0x149f450, copy2)
void main_f_149f450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f4b0  (orig 0x149f4b0, ret_only)
void main_f_149f4b0() {}

// sub_149f4c0  (orig 0x149f4c0, copy2)
void main_f_149f4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f4d0  (orig 0x149f4d0, copy2)
void main_f_149f4d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f760  (orig 0x149f760, ret_only)
void main_f_149f760() {}

// sub_149f770  (orig 0x149f770, struct-copy)
void main_f_149f770(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_149f790  (orig 0x149f790, struct-copy)
void main_f_149f790(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14a1ed0  (orig 0x14a1ed0, ret_only)
void main_f_14a1ed0() {}

// sub_14a1ee0  (orig 0x14a1ee0, copy2)
void main_f_14a1ee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1ef0  (orig 0x14a1ef0, copy2)
void main_f_14a1ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1f40  (orig 0x14a1f40, ret_only)
void main_f_14a1f40() {}

// sub_14a1f50  (orig 0x14a1f50, copy2)
void main_f_14a1f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1f60  (orig 0x14a1f60, copy2)
void main_f_14a1f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1f70  (orig 0x14a1f70, straight)
void main_f_14a1f70(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint8_t*)((char*)(p0) + 1673) = *(uint8_t*)((char*)(p0) + 1672);
    *(uint32_t*)((char*)(p0) + 1676) = 2;
}

// sub_14a1f90  (orig 0x14a1f90, ret_only)
void main_f_14a1f90() {}

// sub_14a1fa0  (orig 0x14a1fa0, copy2)
void main_f_14a1fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1fb0  (orig 0x14a1fb0, copy2)
void main_f_14a1fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a4290  (orig 0x14a4290, mov_ret)
uint32_t main_f_14a4290() { return 1; }

// sub_14a52a0  (orig 0x14a52a0, straight)
void main_f_14a52a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 1484) = 2;
}

// sub_14a58a0  (orig 0x14a58a0, ret_only)
void main_f_14a58a0() {}

// sub_14a58b0  (orig 0x14a58b0, struct-copy)
void main_f_14a58b0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14a58d0  (orig 0x14a58d0, struct-copy)
void main_f_14a58d0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14a58f0  (orig 0x14a58f0, const-field-set-store)
void main_f_14a58f0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1484) = (uint32_t)(t1);
}

// sub_14a5900  (orig 0x14a5900, ret_only)
void main_f_14a5900() {}

// sub_14a5910  (orig 0x14a5910, copy2)
void main_f_14a5910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a5920  (orig 0x14a5920, copy2)
void main_f_14a5920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a5950  (orig 0x14a5950, ret_only)
void main_f_14a5950() {}

// sub_14a5960  (orig 0x14a5960, struct-copy)
void main_f_14a5960(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14a5980  (orig 0x14a5980, struct-copy)
void main_f_14a5980(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14a6580  (orig 0x14a6580, const-field-set-store)
void main_f_14a6580(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 1504) = (uint32_t)(t1);
}

// sub_14a6590  (orig 0x14a6590, ret_only)
void main_f_14a6590() {}

// sub_14a65a0  (orig 0x14a65a0, copy2)
void main_f_14a65a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a65b0  (orig 0x14a65b0, copy2)
void main_f_14a65b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a65c0  (orig 0x14a65c0, const-field-set-store)
void main_f_14a65c0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 3;
    *(uint32_t*)((char*)(t0) + 1504) = (uint32_t)(t1);
}

// sub_14a65d0  (orig 0x14a65d0, ret_only)
void main_f_14a65d0() {}

// sub_14a65e0  (orig 0x14a65e0, copy2)
void main_f_14a65e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a65f0  (orig 0x14a65f0, copy2)
void main_f_14a65f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a6600  (orig 0x14a6600, const-field-set-store)
void main_f_14a6600(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1504) = (uint32_t)(t1);
}

// sub_14a6610  (orig 0x14a6610, ret_only)
void main_f_14a6610() {}

// sub_14a6620  (orig 0x14a6620, copy2)
void main_f_14a6620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a6630  (orig 0x14a6630, copy2)
void main_f_14a6630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7e30  (orig 0x14a7e30, const-field-set-store)
void main_f_14a7e30(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1512) = (uint32_t)(t1);
}

// sub_14a7e40  (orig 0x14a7e40, ret_only)
void main_f_14a7e40() {}

// sub_14a7e50  (orig 0x14a7e50, copy2)
void main_f_14a7e50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7e60  (orig 0x14a7e60, copy2)
void main_f_14a7e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7e70  (orig 0x14a7e70, const-field-set-store)
void main_f_14a7e70(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 1512) = (uint32_t)(t1);
}

// sub_14a7e80  (orig 0x14a7e80, ret_only)
void main_f_14a7e80() {}

// sub_14a7e90  (orig 0x14a7e90, copy2)
void main_f_14a7e90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7ea0  (orig 0x14a7ea0, copy2)
void main_f_14a7ea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a8b70  (orig 0x14a8b70, mov_ret)
uint32_t main_f_14a8b70() { return 1; }

// sub_14a91a0  (orig 0x14a91a0, straight)
void main_f_14a91a0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 216) = (uint8_t)k0;
    *(uint32_t*)((char*)(a0) + 120) = 2;
}

// sub_14a92b0  (orig 0x14a92b0, getter)
uint32_t main_f_14a92b0(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_14a92c0  (orig 0x14a92c0, getter)
uint32_t main_f_14a92c0(void* a0) { return *(uint32_t*)((char*)(a0) + 176); }

// sub_14a9360  (orig 0x14a9360, ret_only)
void main_f_14a9360() {}

// sub_14a9590  (orig 0x14a9590, ret_only)
void main_f_14a9590() {}

// sub_14a95a0  (orig 0x14a95a0, mov_ret)
uint32_t main_f_14a95a0() { return 0; }

// sub_14a96c0  (orig 0x14a96c0, mov_ret)
uint32_t main_f_14a96c0() { return 2; }

// sub_14a97b0  (orig 0x14a97b0, mov_ret)
uint32_t main_f_14a97b0() { return 0; }

// sub_14a97c0  (orig 0x14a97c0, ret_only)
void main_f_14a97c0() {}

// sub_14a97d0  (orig 0x14a97d0, mov_ret)
uint32_t main_f_14a97d0() { return 0; }

// sub_14aa670  (orig 0x14aa670, setter-chain)
void main_f_14aa670(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 48) = 0; *(uint64_t*)((char*)(a0) + 64) = 0; *(uint64_t*)((char*)(a0) + 80) = 0; *(uint64_t*)((char*)(a0) + 96) = 0; *(uint64_t*)((char*)(a0) + 112) = 0; *(uint64_t*)((char*)(a0) + 128) = 0; *(uint64_t*)((char*)(a0) + 144) = 0; *(uint64_t*)((char*)(a0) + 160) = 0; *(uint64_t*)((char*)(a0) + 176) = 0; *(uint64_t*)((char*)(a0) + 192) = 0; *(uint64_t*)((char*)(a0) + 208) = 0; *(uint64_t*)((char*)(a0) + 224) = 0; *(uint64_t*)((char*)(a0) + 240) = 0; *(uint64_t*)((char*)(a0) + 256) = 0; *(uint64_t*)((char*)(a0) + 272) = 0; *(uint64_t*)((char*)(a0) + 288) = 0; *(uint64_t*)((char*)(a0) + 304) = 0; *(uint64_t*)((char*)(a0) + 320) = 0; *(uint64_t*)((char*)(a0) + 336) = 0; *(uint64_t*)((char*)(a0) + 352) = 0; *(uint64_t*)((char*)(a0) + 368) = 0; *(uint64_t*)((char*)(a0) + 384) = 0; *(uint64_t*)((char*)(a0) + 400) = 0; *(uint64_t*)((char*)(a0) + 416) = 0; *(uint64_t*)((char*)(a0) + 432) = 0; *(uint64_t*)((char*)(a0) + 448) = 0; *(uint64_t*)((char*)(a0) + 464) = 0; *(uint64_t*)((char*)(a0) + 480) = 0; *(uint64_t*)((char*)(a0) + 496) = 0; *(uint64_t*)((char*)(a0) + 512) = 0; *(uint64_t*)((char*)(a0) + 528) = 0; *(uint64_t*)((char*)(a0) + 544) = 0; *(uint64_t*)((char*)(a0) + 560) = 0; *(uint64_t*)((char*)(a0) + 576) = 0; *(uint64_t*)((char*)(a0) + 592) = 0; *(uint64_t*)((char*)(a0) + 608) = 0; *(uint64_t*)((char*)(a0) + 624) = 0; *(uint64_t*)((char*)(a0) + 640) = 0; *(uint64_t*)((char*)(a0) + 656) = 0; *(uint64_t*)((char*)(a0) + 672) = 0; *(uint64_t*)((char*)(a0) + 688) = 0; *(uint64_t*)((char*)(a0) + 704) = 0; *(uint64_t*)((char*)(a0) + 720) = 0; *(uint64_t*)((char*)(a0) + 736) = 0; *(uint64_t*)((char*)(a0) + 752) = 0; *(uint64_t*)((char*)(a0) + 768) = 0; *(uint64_t*)((char*)(a0) + 784) = 0; *(uint64_t*)((char*)(a0) + 800) = 0; *(uint64_t*)((char*)(a0) + 816) = 0; *(uint64_t*)((char*)(a0) + 832) = 0; *(uint64_t*)((char*)(a0) + 848) = 0; *(uint64_t*)((char*)(a0) + 864) = 0; *(uint64_t*)((char*)(a0) + 880) = 0; *(uint64_t*)((char*)(a0) + 896) = 0; *(uint64_t*)((char*)(a0) + 912) = 0; *(uint64_t*)((char*)(a0) + 928) = 0; *(uint64_t*)((char*)(a0) + 944) = 0; *(uint64_t*)((char*)(a0) + 960) = 0; *(uint64_t*)((char*)(a0) + 976) = 0; *(uint64_t*)((char*)(a0) + 992) = 0; *(uint64_t*)((char*)(a0) + 1008) = 0; *(uint64_t*)((char*)(a0) + 1024) = 0; *(uint64_t*)((char*)(a0) + 1040) = 0; *(uint64_t*)((char*)(a0) + 1056) = 0; *(uint64_t*)((char*)(a0) + 1072) = 0; *(uint64_t*)((char*)(a0) + 1088) = 0; *(uint64_t*)((char*)(a0) + 1104) = 0; *(uint64_t*)((char*)(a0) + 1120) = 0; *(uint64_t*)((char*)(a0) + 1136) = 0; *(uint64_t*)((char*)(a0) + 1152) = 0; *(uint64_t*)((char*)(a0) + 1168) = 0; *(uint64_t*)((char*)(a0) + 1184) = 0; *(uint64_t*)((char*)(a0) + 1200) = 0; *(uint64_t*)((char*)(a0) + 1216) = 0; *(uint64_t*)((char*)(a0) + 1232) = 0; *(uint64_t*)((char*)(a0) + 1248) = 0; *(uint64_t*)((char*)(a0) + 1264) = 0; *(uint64_t*)((char*)(a0) + 1280) = 0; *(uint64_t*)((char*)(a0) + 1296) = 0; *(uint64_t*)((char*)(a0) + 1312) = 0; *(uint64_t*)((char*)(a0) + 1328) = 0; *(uint64_t*)((char*)(a0) + 1344) = 0; *(uint64_t*)((char*)(a0) + 1360) = 0; *(uint64_t*)((char*)(a0) + 1376) = 0; *(uint64_t*)((char*)(a0) + 1392) = 0; *(uint64_t*)((char*)(a0) + 1408) = 0; *(uint64_t*)((char*)(a0) + 1424) = 0; *(uint64_t*)((char*)(a0) + 1440) = 0; *(uint64_t*)((char*)(a0) + 1456) = 0; *(uint64_t*)((char*)(a0) + 1472) = 0; *(uint64_t*)((char*)(a0) + 1488) = 0; *(uint64_t*)((char*)(a0) + 1504) = 0; *(uint64_t*)((char*)(a0) + 1520) = 0; *(uint64_t*)((char*)(a0) + 1536) = 0; *(uint64_t*)((char*)(a0) + 1552) = 0; *(uint64_t*)((char*)(a0) + 1568) = 0; *(uint64_t*)((char*)(a0) + 1584) = 0; *(uint64_t*)((char*)(a0) + 1600) = 0; *(uint64_t*)((char*)(a0) + 1616) = 0; *(uint64_t*)((char*)(a0) + 1632) = 0; *(uint64_t*)((char*)(a0) + 1648) = 0; *(uint64_t*)((char*)(a0) + 1664) = 0; *(uint64_t*)((char*)(a0) + 1680) = 0; *(uint64_t*)((char*)(a0) + 1696) = 0; *(uint64_t*)((char*)(a0) + 1712) = 0; *(uint64_t*)((char*)(a0) + 1728) = 0; *(uint64_t*)((char*)(a0) + 1744) = 0; *(uint64_t*)((char*)(a0) + 1760) = 0; *(uint64_t*)((char*)(a0) + 1776) = 0; *(uint64_t*)((char*)(a0) + 1792) = 0; *(uint64_t*)((char*)(a0) + 1808) = 0; *(uint64_t*)((char*)(a0) + 1824) = 0; *(uint64_t*)((char*)(a0) + 1840) = 0; *(uint64_t*)((char*)(a0) + 1856) = 0; *(uint64_t*)((char*)(a0) + 1872) = 0; *(uint64_t*)((char*)(a0) + 1888) = 0; *(uint64_t*)((char*)(a0) + 1904) = 0; *(uint64_t*)((char*)(a0) + 1920) = 0; *(uint64_t*)((char*)(a0) + 1936) = 0; *(uint64_t*)((char*)(a0) + 1952) = 0; *(uint64_t*)((char*)(a0) + 1968) = 0; *(uint64_t*)((char*)(a0) + 1984) = 0; *(uint64_t*)((char*)(a0) + 2000) = 0; *(uint64_t*)((char*)(a0) + 2016) = 0; *(uint64_t*)((char*)(a0) + 2032) = 0; }

// sub_14ac420  (orig 0x14ac420, getter)
uint8_t main_f_14ac420(void* a0) { return *(uint8_t*)((char*)(a0) + 764); }

// sub_14b2d60  (orig 0x14b2d60, mov_ret)
uint32_t main_f_14b2d60() { return 0; }

// sub_14b3230  (orig 0x14b3230, ret_only)
void main_f_14b3230() {}

// sub_14b3240  (orig 0x14b3240, ret_only)
void main_f_14b3240() {}

// sub_14b3250  (orig 0x14b3250, ret_only)
void main_f_14b3250() {}

// sub_14b3260  (orig 0x14b3260, ret_only)
void main_f_14b3260() {}

// sub_14b5880  (orig 0x14b5880, mov_ret)
uint32_t main_f_14b5880() { return 3; }

// sub_14b5a40  (orig 0x14b5a40, ret_only)
void main_f_14b5a40() {}

// sub_14b5f30  (orig 0x14b5f30, mov_ret)
uint32_t main_f_14b5f30() { return 3; }

// sub_14b6040  (orig 0x14b6040, ret_only)
void main_f_14b6040() {}

// sub_14b6320  (orig 0x14b6320, mov_ret)
uint32_t main_f_14b6320() { return 3; }

// sub_14b64d0  (orig 0x14b64d0, ret_only)
void main_f_14b64d0() {}

// sub_14b64e0  (orig 0x14b64e0, mov_ret)
uint32_t main_f_14b64e0() { return 5; }

// sub_14b67b0  (orig 0x14b67b0, mov_ret)
uint32_t main_f_14b67b0() { return 4; }

// sub_14b7190  (orig 0x14b7190, mov_ret)
uint32_t main_f_14b7190() { return 7; }

// sub_14b74a0  (orig 0x14b74a0, mov_ret)
uint32_t main_f_14b74a0() { return 6; }

// sub_14b75d0  (orig 0x14b75d0, mov_ret)
uint32_t main_f_14b75d0() { return 1; }

// sub_14b75e0  (orig 0x14b75e0, mov_ret)
uint32_t main_f_14b75e0() { return 1; }

// sub_14b78c0  (orig 0x14b78c0, ret_only)
void main_f_14b78c0() {}

// sub_14b81f0  (orig 0x14b81f0, mov_ret)
uint32_t main_f_14b81f0() { return 6; }

// sub_14ba810  (orig 0x14ba810, mov_ret)
uint32_t main_f_14ba810() { return 1; }

// sub_14bcf10  (orig 0x14bcf10, ret_only)
void main_f_14bcf10() {}

// sub_14bcf20  (orig 0x14bcf20, straight)
typedef struct { unsigned char b[24]; } __S_f_14bcf20;
__S_f_14bcf20 main_f_14bcf20(void* a0) {
    __S_f_14bcf20 r;
    *(uint16_t *)((char *)&r + 0) = *(uint16_t*)((char*)(a0) + 16);
    *(uint16_t *)((char *)&r + 2) = *(uint16_t*)((char*)(a0) + 18);
    return r;
}

// sub_14bcf40  (orig 0x14bcf40, mov_ret)
uint32_t main_f_14bcf40() { return 0; }

// sub_14bcf50  (orig 0x14bcf50, mov_ret)
uint64_t main_f_14bcf50() { return 0; }

// sub_14bcf60  (orig 0x14bcf60, mov_ret)
uint64_t main_f_14bcf60() { return 0; }

// sub_14bcf70  (orig 0x14bcf70, mov_ret)
uint64_t main_f_14bcf70() { return 0; }

// sub_14bcf80  (orig 0x14bcf80, ret_only)
void main_f_14bcf80() {}

// sub_14bfa40  (orig 0x14bfa40, straight)
void main_f_14bfa40(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 88));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 1464) = (uint32_t)(a1);
    *(uint8_t*)((char*)(p0) + 1468) = (uint8_t)k1;
}

// sub_14bfa60  (orig 0x14bfa60, straight)
void main_f_14bfa60(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 88));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 1480) = (uint32_t)(a1);
    *(uint8_t*)((char*)(p0) + 1484) = (uint8_t)k1;
}

// sub_14bfb70  (orig 0x14bfb70, getter-chain)
uint8_t main_f_14bfb70(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 1648); }

// sub_14bfb80  (orig 0x14bfb80, compare-pred)
bool main_f_14bfb80(void* a0) { return (uint32_t)((*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 88)) + 1644) | 2)) == (uint32_t)(2); }

// sub_14bfba0  (orig 0x14bfba0, getter-chain)
uint8_t main_f_14bfba0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 1649); }

// sub_14c33f0  (orig 0x14c33f0, ret_only)
void main_f_14c33f0() {}

// sub_14c3400  (orig 0x14c3400, struct-copy)
void main_f_14c3400(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14c3420  (orig 0x14c3420, struct-copy)
void main_f_14c3420(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14c4b80  (orig 0x14c4b80, mov_ret)
uint32_t main_f_14c4b80() { return 1; }

// sub_14c4b90  (orig 0x14c4b90, indexed-getter)
uint64_t main_f_14c4b90(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14c4ba0  (orig 0x14c4ba0, indexed-getter)
uint64_t main_f_14c4ba0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14c54f0  (orig 0x14c54f0, straight)
void main_f_14c54f0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 88));
    *(uint32_t*)((char*)(p0) + 104) = 1;
    *(uint64_t*)((char*)(p0) + 112) = (uint64_t)(a1);
}

// sub_14c5510  (orig 0x14c5510, const-field-set-store)
void main_f_14c5510(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 88);
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 104) = (uint32_t)(t1);
}

// sub_14c5e60  (orig 0x14c5e60, getter-chain)
uint8_t main_f_14c5e60(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 136); }

// sub_14c5e70  (orig 0x14c5e70, compare-pred)
bool main_f_14c5e70(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)((char*)a0 + 88)) + 136)) == (uint32_t)(0); }

// sub_14c6660  (orig 0x14c6660, ret_only)
void main_f_14c6660() {}

// sub_14c6970  (orig 0x14c6970, ret_only)
void main_f_14c6970() {}

// sub_14c6c60  (orig 0x14c6c60, mov_ret)
uint32_t main_f_14c6c60() { return 1; }

// sub_14c6c70  (orig 0x14c6c70, indexed-getter)
uint64_t main_f_14c6c70(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14c6c80  (orig 0x14c6c80, indexed-getter)
uint64_t main_f_14c6c80(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14ca680  (orig 0x14ca680, ret_only)
void main_f_14ca680() {}

// sub_14caaf0  (orig 0x14caaf0, mov_ret)
uint32_t main_f_14caaf0() { return 3; }

// sub_14cab00  (orig 0x14cab00, indexed-getter)
uint64_t main_f_14cab00(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14cab10  (orig 0x14cab10, indexed-getter)
uint64_t main_f_14cab10(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14cca00  (orig 0x14cca00, straight)
uint8_t main_f_14cca00(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 88));
    return *(uint8_t*)((char*)(p0) + 6084L);
}

// sub_14ce010  (orig 0x14ce010, ret_only)
void main_f_14ce010() {}

// sub_14ce060  (orig 0x14ce060, ret_only)
void main_f_14ce060() {}

// sub_14ce070  (orig 0x14ce070, copy2)
void main_f_14ce070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14ce080  (orig 0x14ce080, copy2)
void main_f_14ce080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14ce090  (orig 0x14ce090, const-field-set-store)
void main_f_14ce090(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 3928) = (uint8_t)(t1);
}

// sub_14ce0a0  (orig 0x14ce0a0, ret_only)
void main_f_14ce0a0() {}

// sub_14ce0b0  (orig 0x14ce0b0, copy2)
void main_f_14ce0b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14ce0c0  (orig 0x14ce0c0, copy2)
void main_f_14ce0c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14ce1c0  (orig 0x14ce1c0, ret_only)
void main_f_14ce1c0() {}

// sub_14d13c0  (orig 0x14d13c0, ret_only)
void main_f_14d13c0() {}

// sub_14d13d0  (orig 0x14d13d0, struct-copy)
void main_f_14d13d0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14d13f0  (orig 0x14d13f0, struct-copy)
void main_f_14d13f0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14d5a80  (orig 0x14d5a80, compare)
bool main_f_14d5a80(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) == (uint64_t)(0); }

// sub_14d6890  (orig 0x14d6890, compare)
bool main_f_14d6890(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) == (uint64_t)(0); }

// sub_14d9c20  (orig 0x14d9c20, straight)
void main_f_14d9c20(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 372) = (uint32_t)(a1);
    *(uint32_t*)((char*)(a0) + 364) = (uint32_t)(a2);
    *(uint32_t*)((char*)(a0) + 368) = (uint32_t)(a3);
    *(uint32_t*)((char*)(a0) + 376) = (uint32_t)(a4);
    *(uint8_t*)((char*)(a0) + 408) = (uint8_t)k0;
}

// sub_14db760  (orig 0x14db760, ret_only)
void main_f_14db760() {}

// sub_14db770  (orig 0x14db770, ret_only)
void main_f_14db770() {}

// sub_14db780  (orig 0x14db780, ret_only)
void main_f_14db780() {}

// sub_14dbb00  (orig 0x14dbb00, compare)
bool main_f_14dbb00(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) == (uint64_t)(0); }

// sub_14dbb60  (orig 0x14dbb60, getter)
uint64_t main_f_14dbb60(void* a0) { return *(uint64_t*)((char*)(a0) + 440); }

// sub_14dbcc0  (orig 0x14dbcc0, ret_only)
void main_f_14dbcc0() {}

// sub_14dbdd0  (orig 0x14dbdd0, ret_only)
void main_f_14dbdd0() {}

// sub_14dd690  (orig 0x14dd690, ret_only)
void main_f_14dd690() {}

// sub_14dde20  (orig 0x14dde20, getter)
uint64_t main_f_14dde20(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_14ddfb0  (orig 0x14ddfb0, mov_ret)
uint32_t main_f_14ddfb0() { return 2; }

// sub_14ddfc0  (orig 0x14ddfc0, indexed-getter)
uint64_t main_f_14ddfc0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14ddfd0  (orig 0x14ddfd0, indexed-getter)
uint64_t main_f_14ddfd0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14de3f0  (orig 0x14de3f0, mov_ret)
uint32_t main_f_14de3f0() { return 1; }

// sub_14deda0  (orig 0x14deda0, getter)
uint64_t main_f_14deda0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14def10  (orig 0x14def10, mov_ret)
uint32_t main_f_14def10() { return 1; }

// sub_14def20  (orig 0x14def20, indexed-getter)
uint64_t main_f_14def20(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14def30  (orig 0x14def30, indexed-getter)
uint64_t main_f_14def30(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14e0aa0  (orig 0x14e0aa0, ret_only)
void main_f_14e0aa0() {}

// sub_14e11c0  (orig 0x14e11c0, getter)
uint64_t main_f_14e11c0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14e1330  (orig 0x14e1330, mov_ret)
uint32_t main_f_14e1330() { return 1; }

// sub_14e1340  (orig 0x14e1340, indexed-getter)
uint64_t main_f_14e1340(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14e1350  (orig 0x14e1350, indexed-getter)
uint64_t main_f_14e1350(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14e1830  (orig 0x14e1830, ret_only)
void main_f_14e1830() {}

// sub_14e1ce0  (orig 0x14e1ce0, ret_only)
void main_f_14e1ce0() {}

// sub_14e1cf0  (orig 0x14e1cf0, ret_only)
void main_f_14e1cf0() {}

// sub_14e1d00  (orig 0x14e1d00, ret_only)
void main_f_14e1d00() {}

// sub_14e1d10  (orig 0x14e1d10, ret_only)
void main_f_14e1d10() {}

// sub_14e1d40  (orig 0x14e1d40, ret_only)
void main_f_14e1d40() {}

// sub_14e1d50  (orig 0x14e1d50, mov_ret)
uint32_t main_f_14e1d50() { return 0; }

// sub_14e1d60  (orig 0x14e1d60, getter)
uint8_t main_f_14e1d60(void* a0) { return *(uint8_t*)((char*)(a0) + 132); }

// sub_14e28f0  (orig 0x14e28f0, compare)
bool main_f_14e28f0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 129)) == (uint64_t)(0); }

// sub_14e2c30  (orig 0x14e2c30, ret_only)
void main_f_14e2c30() {}

// sub_14e2c40  (orig 0x14e2c40, ret_only)
void main_f_14e2c40() {}

// sub_14e2c50  (orig 0x14e2c50, ret_only)
void main_f_14e2c50() {}

// sub_14e2f00  (orig 0x14e2f00, ret_only)
void main_f_14e2f00() {}

// sub_14e2f10  (orig 0x14e2f10, ret_only)
void main_f_14e2f10() {}

// sub_14e2f20  (orig 0x14e2f20, ret_only)
void main_f_14e2f20() {}

// sub_14e2f30  (orig 0x14e2f30, ret_only)
void main_f_14e2f30() {}

// sub_14e2f40  (orig 0x14e2f40, ret_only)
void main_f_14e2f40() {}

// sub_14e2f50  (orig 0x14e2f50, mov_ret)
uint32_t main_f_14e2f50() { return 1; }

// sub_14e2f60  (orig 0x14e2f60, mov_ret)
uint32_t main_f_14e2f60() { return 1; }

// sub_14e4110  (orig 0x14e4110, straight)
void main_f_14e4110(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 1151) = (uint8_t)k0;
}

// sub_14e4120  (orig 0x14e4120, compare-pred)
bool main_f_14e4120(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 640) - 2)) < (uint32_t)(4); }

// sub_14e4180  (orig 0x14e4180, compare)
bool main_f_14e4180(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 640)) == (uint64_t)(0); }

// sub_14e5040  (orig 0x14e5040, mov_ret)
uint32_t main_f_14e5040() { return 1; }

// sub_14e5740  (orig 0x14e5740, ret_only)
void main_f_14e5740() {}

// sub_14e5750  (orig 0x14e5750, ret_only)
void main_f_14e5750() {}

// sub_14e5980  (orig 0x14e5980, ret_only)
void main_f_14e5980() {}

// sub_14e5a60  (orig 0x14e5a60, ret_only)
void main_f_14e5a60() {}

// sub_14e5a70  (orig 0x14e5a70, ret_only)
void main_f_14e5a70() {}

// sub_14e5a80  (orig 0x14e5a80, ret_only)
void main_f_14e5a80() {}

// sub_14e5a90  (orig 0x14e5a90, ret_only)
void main_f_14e5a90() {}

// sub_14e5aa0  (orig 0x14e5aa0, ret_only)
void main_f_14e5aa0() {}

// sub_14e5ab0  (orig 0x14e5ab0, mov_ret)
uint32_t main_f_14e5ab0() { return 1; }

// sub_14e5ac0  (orig 0x14e5ac0, mov_ret)
uint32_t main_f_14e5ac0() { return 1; }

// sub_14e5ad0  (orig 0x14e5ad0, ret_only)
void main_f_14e5ad0() {}

// sub_14e6540  (orig 0x14e6540, getter-chain)
uint64_t main_f_14e6540(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 1032))) + 12); }

// sub_14e6f30  (orig 0x14e6f30, mov_ret)
uint32_t main_f_14e6f30() { return 1; }

// sub_14eac60  (orig 0x14eac60, mov_ret)
uint32_t main_f_14eac60() { return 1; }

// sub_14eb420  (orig 0x14eb420, ret_only)
void main_f_14eb420() {}

// sub_14eb430  (orig 0x14eb430, ret_only)
void main_f_14eb430() {}

// sub_14ec830  (orig 0x14ec830, compare)
bool main_f_14ec830(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 129)) == (uint64_t)(0); }

// sub_14ee7c0  (orig 0x14ee7c0, copy2)
void main_f_14ee7c0(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 2064) = *(uint64_t*)((char*)(a1)); }

// sub_14eebd0  (orig 0x14eebd0, getter-chain)
uint32_t main_f_14eebd0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 1872))) + 20); }

// sub_14eebe0  (orig 0x14eebe0, getter-chain)
uint32_t main_f_14eebe0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 1872))) + 16); }

// sub_14eec80  (orig 0x14eec80, ret_only)
void main_f_14eec80() {}

// sub_14ef1e0  (orig 0x14ef1e0, mov_ret)
uint32_t main_f_14ef1e0() { return 1; }

// sub_14f1850  (orig 0x14f1850, setter)
void main_f_14f1850(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1948) = a1; }

// sub_14f1ef0  (orig 0x14f1ef0, setter-chain)
void main_f_14f1ef0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 1968) = a2; *(uint64_t*)((char*)(a0) + 1960) = a1; }

// sub_14f22e0  (orig 0x14f22e0, ret_only)
void main_f_14f22e0() {}

// sub_14f22f0  (orig 0x14f22f0, copy2)
void main_f_14f22f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f2300  (orig 0x14f2300, copy2)
void main_f_14f2300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f2330  (orig 0x14f2330, ret_only)
void main_f_14f2330() {}

// sub_14f2340  (orig 0x14f2340, copy2)
void main_f_14f2340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f2350  (orig 0x14f2350, copy2)
void main_f_14f2350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f2360  (orig 0x14f2360, ret_only)
void main_f_14f2360() {}

// sub_14f2370  (orig 0x14f2370, ret_only)
void main_f_14f2370() {}

// sub_14f2380  (orig 0x14f2380, ret_only)
void main_f_14f2380() {}

// sub_14f2390  (orig 0x14f2390, ret_only)
void main_f_14f2390() {}

// sub_14f3140  (orig 0x14f3140, ret_only)
void main_f_14f3140() {}

// sub_14f3150  (orig 0x14f3150, struct-copy)
void main_f_14f3150(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14f3170  (orig 0x14f3170, struct-copy)
void main_f_14f3170(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14f31b0  (orig 0x14f31b0, ret_only)
void main_f_14f31b0() {}

// sub_14f31c0  (orig 0x14f31c0, struct-copy)
void main_f_14f31c0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14f31e0  (orig 0x14f31e0, struct-copy)
void main_f_14f31e0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14f4070  (orig 0x14f4070, ret_only)
void main_f_14f4070() {}

// sub_14f4080  (orig 0x14f4080, copy2)
void main_f_14f4080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f4090  (orig 0x14f4090, copy2)
void main_f_14f4090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f4d60  (orig 0x14f4d60, getter)
uint32_t main_f_14f4d60(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_14f4d70  (orig 0x14f4d70, setter)
void main_f_14f4d70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 8) = a1; }

// sub_14f5060  (orig 0x14f5060, mov_ret)
uint32_t main_f_14f5060() { return 0; }

// sub_14f5070  (orig 0x14f5070, mov_ret)
uint32_t main_f_14f5070() { return 0; }

// sub_14f5080  (orig 0x14f5080, mov_ret)
uint32_t main_f_14f5080() { return 0; }

// sub_14f5090  (orig 0x14f5090, compare)
bool main_f_14f5090(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 104)) == (uint64_t)(3); }

// sub_14f5b60  (orig 0x14f5b60, compare)
bool main_f_14f5b60(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0) + 12)) > (int64_t)(0); }

// sub_14f5c60  (orig 0x14f5c60, mov_ret)
uint32_t main_f_14f5c60() { return 0; }

// sub_14f63b0  (orig 0x14f63b0, ret_only)
void main_f_14f63b0() {}

// sub_14f63d0  (orig 0x14f63d0, getter)
uint32_t main_f_14f63d0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_14f63e0  (orig 0x14f63e0, setter)
void main_f_14f63e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_14f76f0  (orig 0x14f76f0, setter-chain)
void main_f_14f76f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; *(uint8_t*)((char*)(a0) + 8) = 0; }

// sub_14f7700  (orig 0x14f7700, straight)
void main_f_14f7700(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 12) = -1;
    *(uint8_t*)((char*)(a0) + 8) = (uint8_t)k0;
}

// sub_14f7e40  (orig 0x14f7e40, compare)
bool main_f_14f7e40(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 440)) != (uint64_t)(0); }

// sub_14f8030  (orig 0x14f8030, getter)
uint8_t main_f_14f8030(void* a0) { return *(uint8_t*)((char*)(a0) + 476); }

// sub_14f8840  (orig 0x14f8840, straight)
void main_f_14f8840(void* a0) {
    *(uint32_t*)((char*)(a0) + 16) = -1;
    *(uint32_t*)((char*)(a0) + 64) = -1;
    *(uint32_t*)((char*)(a0) + 112) = -1;
    *(uint32_t*)((char*)(a0) + 160) = -1;
    *(uint32_t*)((char*)(a0) + 208) = -1;
    *(uint32_t*)((char*)(a0) + 256) = 0;
}

// sub_14f8bc0  (orig 0x14f8bc0, ret_only)
void main_f_14f8bc0() {}

// sub_14f8f30  (orig 0x14f8f30, compare)
bool main_f_14f8f30(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 104)) == (uint64_t)(11); }

// sub_14fb430  (orig 0x14fb430, ret_only)
void main_f_14fb430() {}

// sub_14fb440  (orig 0x14fb440, ret_only)
void main_f_14fb440() {}

// sub_14fb450  (orig 0x14fb450, ret_only)
void main_f_14fb450() {}

// sub_14fbc60  (orig 0x14fbc60, ret_only)
void main_f_14fbc60() {}

// sub_14fbc70  (orig 0x14fbc70, ret_only)
void main_f_14fbc70() {}

// sub_14fbc80  (orig 0x14fbc80, ret_only)
void main_f_14fbc80() {}

// sub_14fbfe0  (orig 0x14fbfe0, ret_only)
void main_f_14fbfe0() {}

// sub_14fc060  (orig 0x14fc060, mov_ret)
uint32_t main_f_14fc060() { return 1; }

// sub_14fc070  (orig 0x14fc070, mov_ret)
uint32_t main_f_14fc070() { return 1; }

// sub_14fc080  (orig 0x14fc080, ret_only)
void main_f_14fc080() {}

// sub_14fc090  (orig 0x14fc090, ret_only)
void main_f_14fc090() {}

// sub_14fcd70  (orig 0x14fcd70, ret_only)
void main_f_14fcd70() {}

// sub_14fcd80  (orig 0x14fcd80, ret_only)
void main_f_14fcd80() {}

// sub_14fcd90  (orig 0x14fcd90, ret_only)
void main_f_14fcd90() {}

// sub_14fd5b0  (orig 0x14fd5b0, ret_only)
void main_f_14fd5b0() {}

// sub_14fd5c0  (orig 0x14fd5c0, ret_only)
void main_f_14fd5c0() {}

// sub_14fd5d0  (orig 0x14fd5d0, ret_only)
void main_f_14fd5d0() {}

// sub_14fdd60  (orig 0x14fdd60, ret_only)
void main_f_14fdd60() {}

// sub_14fdd70  (orig 0x14fdd70, ret_only)
void main_f_14fdd70() {}

// sub_14fdd80  (orig 0x14fdd80, ret_only)
void main_f_14fdd80() {}

// sub_14fe4f0  (orig 0x14fe4f0, ret_only)
void main_f_14fe4f0() {}

// sub_14fe500  (orig 0x14fe500, ret_only)
void main_f_14fe500() {}

// sub_14fe510  (orig 0x14fe510, ret_only)
void main_f_14fe510() {}

// sub_14fe890  (orig 0x14fe890, ret_only)
void main_f_14fe890() {}

// sub_14fe8a0  (orig 0x14fe8a0, ret_only)
void main_f_14fe8a0() {}

// sub_14fe8b0  (orig 0x14fe8b0, ret_only)
void main_f_14fe8b0() {}

// sub_14ff4c0  (orig 0x14ff4c0, ret_only)
void main_f_14ff4c0() {}

// sub_14ff4d0  (orig 0x14ff4d0, ret_only)
void main_f_14ff4d0() {}

// sub_14ff4e0  (orig 0x14ff4e0, ret_only)
void main_f_14ff4e0() {}

// sub_1500080  (orig 0x1500080, ret_only)
void main_f_1500080() {}

// sub_1500090  (orig 0x1500090, ret_only)
void main_f_1500090() {}

// sub_15000a0  (orig 0x15000a0, ret_only)
void main_f_15000a0() {}

// sub_1501c90  (orig 0x1501c90, ret_only)
void main_f_1501c90() {}

// sub_15030d0  (orig 0x15030d0, mov_ret)
uint32_t main_f_15030d0() { return 1; }

// sub_15030e0  (orig 0x15030e0, ret_only)
void main_f_15030e0() {}

// sub_1505a10  (orig 0x1505a10, compare)
bool main_f_1505a10(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 288)) == (uint64_t)(2); }

// sub_1505a20  (orig 0x1505a20, compare)
bool main_f_1505a20(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 288)) == (uint64_t)(5); }

// sub_1505fc0  (orig 0x1505fc0, ptr_add)
void* main_f_1505fc0(void* a0) { return (char*)a0 + 432; }

// sub_1506190  (orig 0x1506190, mov_ret)
uint32_t main_f_1506190() { return 4; }

// sub_15061a0  (orig 0x15061a0, indexed-getter)
uint64_t main_f_15061a0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_15061b0  (orig 0x15061b0, indexed-getter)
uint64_t main_f_15061b0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1506360  (orig 0x1506360, ret_only)
void main_f_1506360() {}

// sub_1506370  (orig 0x1506370, copy2)
void main_f_1506370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1506380  (orig 0x1506380, copy2)
void main_f_1506380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1506440  (orig 0x1506440, ret_only)
void main_f_1506440() {}

// sub_1506450  (orig 0x1506450, copy2)
void main_f_1506450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1506460  (orig 0x1506460, copy2)
void main_f_1506460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_15064c0  (orig 0x15064c0, ret_only)
void main_f_15064c0() {}

// sub_1506540  (orig 0x1506540, ret_only)
void main_f_1506540() {}

// sub_1506b20  (orig 0x1506b20, mov_ret)
uint32_t main_f_1506b20() { return 1; }

// sub_1507bb0  (orig 0x1507bb0, ret_only)
void main_f_1507bb0() {}

// sub_150c650  (orig 0x150c650, ret_only)
void main_f_150c650() {}

// sub_150c660  (orig 0x150c660, copy2)
void main_f_150c660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150c670  (orig 0x150c670, copy2)
void main_f_150c670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150c6d0  (orig 0x150c6d0, ret_only)
void main_f_150c6d0() {}

// sub_150c6e0  (orig 0x150c6e0, copy2)
void main_f_150c6e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150c6f0  (orig 0x150c6f0, copy2)
void main_f_150c6f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150ca80  (orig 0x150ca80, ret_only)
void main_f_150ca80() {}

// sub_150ca90  (orig 0x150ca90, copy2)
void main_f_150ca90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150caa0  (orig 0x150caa0, copy2)
void main_f_150caa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150d900  (orig 0x150d900, ret_only)
void main_f_150d900() {}

// sub_150e600  (orig 0x150e600, ret_only)
void main_f_150e600() {}

// sub_150f2a0  (orig 0x150f2a0, ret_only)
void main_f_150f2a0() {}

// sub_150f8f0  (orig 0x150f8f0, mov_ret)
uint32_t main_f_150f8f0() { return 1; }

// sub_150f910  (orig 0x150f910, ret_only)
void main_f_150f910() {}

// sub_15103b0  (orig 0x15103b0, getter)
uint64_t main_f_15103b0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1510520  (orig 0x1510520, mov_ret)
uint32_t main_f_1510520() { return 1; }

// sub_1510530  (orig 0x1510530, indexed-getter)
uint64_t main_f_1510530(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1510540  (orig 0x1510540, indexed-getter)
uint64_t main_f_1510540(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_15106d0  (orig 0x15106d0, getter)
uint64_t main_f_15106d0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_15106e0  (orig 0x15106e0, setter)
void main_f_15106e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_1510ec0  (orig 0x1510ec0, setter)
void main_f_1510ec0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1792) = a1; }

// sub_15114f0  (orig 0x15114f0, ret_only)
void main_f_15114f0() {}

// sub_1511800  (orig 0x1511800, mov_ret)
uint32_t main_f_1511800() { return 1; }

// sub_1514640  (orig 0x1514640, ret_only)
void main_f_1514640() {}

// sub_1515000  (orig 0x1515000, setter)
void main_f_1515000(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_1515010  (orig 0x1515010, getter)
uint32_t main_f_1515010(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_15169f0  (orig 0x15169f0, ret_only)
void main_f_15169f0() {}

// sub_1516ee0  (orig 0x1516ee0, ret_only)
void main_f_1516ee0() {}

// sub_1516ef0  (orig 0x1516ef0, copy2)
void main_f_1516ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1516f00  (orig 0x1516f00, copy2)
void main_f_1516f00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1517500  (orig 0x1517500, ret_only)
void main_f_1517500() {}

// sub_1517be0  (orig 0x1517be0, ret_only)
void main_f_1517be0() {}

// sub_15180e0  (orig 0x15180e0, ret_only)
void main_f_15180e0() {}

// sub_15180f0  (orig 0x15180f0, copy2)
void main_f_15180f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1518100  (orig 0x1518100, copy2)
void main_f_1518100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_151a420  (orig 0x151a420, mov_ret)
uint32_t main_f_151a420() { return 9; }

// sub_151ad40  (orig 0x151ad40, mov_ret)
uint32_t main_f_151ad40() { return 1; }

// sub_151ad50  (orig 0x151ad50, ret_only)
void main_f_151ad50() {}

// sub_151bc50  (orig 0x151bc50, getter)
uint64_t main_f_151bc50(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_151bde0  (orig 0x151bde0, mov_ret)
uint32_t main_f_151bde0() { return 5; }

// sub_151bdf0  (orig 0x151bdf0, indexed-getter)
uint64_t main_f_151bdf0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_151be00  (orig 0x151be00, indexed-getter)
uint64_t main_f_151be00(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_151c2d0  (orig 0x151c2d0, getter)
uint64_t main_f_151c2d0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_151c2e0  (orig 0x151c2e0, getter)
uint32_t main_f_151c2e0(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_151c2f0  (orig 0x151c2f0, setter)
void main_f_151c2f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_151c300  (orig 0x151c300, getter)
uint32_t main_f_151c300(void* a0) { return *(uint32_t*)((char*)(a0) + 116); }

// sub_151c310  (orig 0x151c310, getter)
uint32_t main_f_151c310(void* a0) { return *(uint32_t*)((char*)(a0) + 124); }

// sub_151c320  (orig 0x151c320, setter)
void main_f_151c320(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 124) = a1; }

// sub_151c330  (orig 0x151c330, getter)
uint32_t main_f_151c330(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_151c340  (orig 0x151c340, setter)
void main_f_151c340(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 120) = a1; }

// sub_151ca40  (orig 0x151ca40, ptr_add)
void* main_f_151ca40(void* a0) { return (char*)a0 + 168; }

// sub_151cf70  (orig 0x151cf70, getter)
uint32_t main_f_151cf70(void* a0) { return *(uint32_t*)((char*)(a0) + 1804); }

// sub_151d580  (orig 0x151d580, setter)
void main_f_151d580(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1856) = a1; }

// sub_151d590  (orig 0x151d590, getter)
uint32_t main_f_151d590(void* a0) { return *(uint32_t*)((char*)(a0) + 1856); }

// sub_151d5b0  (orig 0x151d5b0, getter)
uint8_t main_f_151d5b0(void* a0) { return *(uint8_t*)((char*)(a0) + 2652); }

// sub_151d5c0  (orig 0x151d5c0, compare)
bool main_f_151d5c0(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 3104)) > (uint64_t)(7); }

// sub_151e0d0  (orig 0x151e0d0, setter)
void main_f_151e0d0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1920) = a1; }

// sub_1523aa0  (orig 0x1523aa0, ret_only)
void main_f_1523aa0() {}

// sub_15247d0  (orig 0x15247d0, setter)
void main_f_15247d0(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_15248f0  (orig 0x15248f0, getter)
uint32_t main_f_15248f0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_1524900  (orig 0x1524900, setter)
void main_f_1524900(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 2576) = a1; }

// sub_1525130  (orig 0x1525130, getter)
uint64_t main_f_1525130(void* a0) { return *(uint64_t*)((char*)(a0) + 1496); }

// sub_1525940  (orig 0x1525940, getter)
uint32_t main_f_1525940(void* a0) { return *(uint32_t*)((char*)(a0) + 1492); }

// sub_1527bd0  (orig 0x1527bd0, setter-chain)
void main_f_1527bd0(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0) + 2584) = a1; *(uint32_t*)((char*)(a0) + 2592) = a2; }

// sub_15288d0  (orig 0x15288d0, getter)
uint32_t main_f_15288d0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_1529670  (orig 0x1529670, ptr_add)
void* main_f_1529670(void* a0) { return (char*)a0 + 1488; }

// sub_152a130  (orig 0x152a130, ret_only)
void main_f_152a130() {}

// sub_152a6b0  (orig 0x152a6b0, ret_only)
void main_f_152a6b0() {}

// sub_152a6c0  (orig 0x152a6c0, ret_only)
void main_f_152a6c0() {}

// sub_152a6d0  (orig 0x152a6d0, mov_ret)
uint32_t main_f_152a6d0() { return 0; }

// sub_152af80  (orig 0x152af80, ret_only)
void main_f_152af80() {}

// sub_152b4b0  (orig 0x152b4b0, ret_only)
void main_f_152b4b0() {}

// sub_152bf60  (orig 0x152bf60, ret_only)
void main_f_152bf60() {}

// sub_152c1b0  (orig 0x152c1b0, setter)
void main_f_152c1b0(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_152c2d0  (orig 0x152c2d0, getter)
uint32_t main_f_152c2d0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_152e630  (orig 0x152e630, straight)
void main_f_152e630(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 1516) = (uint32_t)(a1);
    *(uint8_t*)((char*)(a0) + 1520) = 0;
    *(uint32_t*)((char*)(a0) + 1484) = 5;
}

// sub_152f6c0  (orig 0x152f6c0, getter)
uint32_t main_f_152f6c0(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_152fd80  (orig 0x152fd80, ret_only)
void main_f_152fd80() {}

// sub_152fd90  (orig 0x152fd90, struct-copy)
void main_f_152fd90(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_152fdb0  (orig 0x152fdb0, struct-copy)
void main_f_152fdb0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_152fdf0  (orig 0x152fdf0, ret_only)
void main_f_152fdf0() {}

// sub_152fe00  (orig 0x152fe00, struct-copy)
void main_f_152fe00(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_152fe20  (orig 0x152fe20, struct-copy)
void main_f_152fe20(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1530270  (orig 0x1530270, ret_only)
void main_f_1530270() {}

// sub_1530ba0  (orig 0x1530ba0, ret_only)
void main_f_1530ba0() {}

// sub_1531390  (orig 0x1531390, ret_only)
void main_f_1531390() {}

// sub_15317e0  (orig 0x15317e0, setter)
void main_f_15317e0(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_1531900  (orig 0x1531900, getter)
uint32_t main_f_1531900(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_1531910  (orig 0x1531910, setter-chain)
void main_f_1531910(void* a0, uint32_t a1, uint64_t a2) { *(uint32_t*)((char*)(a0) + 1492) = a1; *(uint64_t*)((char*)(a0) + 1496) = a2; }

// sub_1532790  (orig 0x1532790, getter)
uint8_t main_f_1532790(void* a0) { return *(uint8_t*)((char*)(a0) + 1528); }

// sub_15327a0  (orig 0x15327a0, getter)
uint64_t main_f_15327a0(void* a0) { return *(uint64_t*)((char*)(a0) + 1496); }

// sub_1532f00  (orig 0x1532f00, ret_only)
void main_f_1532f00() {}

// sub_15334c0  (orig 0x15334c0, ret_only)
void main_f_15334c0() {}

// sub_1533a80  (orig 0x1533a80, ret_only)
void main_f_1533a80() {}

// sub_1533f30  (orig 0x1533f30, ret_only)
void main_f_1533f30() {}

// sub_1534b50  (orig 0x1534b50, ret_only)
void main_f_1534b50() {}

// sub_1535410  (orig 0x1535410, ret_only)
void main_f_1535410() {}

// sub_1535910  (orig 0x1535910, ret_only)
void main_f_1535910() {}

// sub_15368d0  (orig 0x15368d0, ret_only)
void main_f_15368d0() {}

// sub_1536ab0  (orig 0x1536ab0, ret_only)
void main_f_1536ab0() {}

// sub_1536ac0  (orig 0x1536ac0, struct-copy)
void main_f_1536ac0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1536ae0  (orig 0x1536ae0, struct-copy)
void main_f_1536ae0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1536b20  (orig 0x1536b20, ret_only)
void main_f_1536b20() {}

// sub_1536b30  (orig 0x1536b30, struct-copy)
void main_f_1536b30(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1536b50  (orig 0x1536b50, struct-copy)
void main_f_1536b50(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_15372c0  (orig 0x15372c0, ret_only)
void main_f_15372c0() {}

// sub_1537810  (orig 0x1537810, ret_only)
void main_f_1537810() {}

// sub_1538390  (orig 0x1538390, ret_only)
void main_f_1538390() {}

// sub_1539950  (orig 0x1539950, ret_only)
void main_f_1539950() {}

// sub_1539eb0  (orig 0x1539eb0, mov_ret)
uint32_t main_f_1539eb0() { return 1; }

// sub_153b630  (orig 0x153b630, getter)
uint64_t main_f_153b630(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_153b7c0  (orig 0x153b7c0, mov_ret)
uint32_t main_f_153b7c0() { return 5; }

// sub_153b7d0  (orig 0x153b7d0, indexed-getter)
uint64_t main_f_153b7d0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_153b7e0  (orig 0x153b7e0, indexed-getter)
uint64_t main_f_153b7e0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_153bdb0  (orig 0x153bdb0, getter)
uint64_t main_f_153bdb0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_153bdc0  (orig 0x153bdc0, ptr_add)
void* main_f_153bdc0(void* a0) { return (char*)a0 + 136; }

// sub_153bdd0  (orig 0x153bdd0, setter)
void main_f_153bdd0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_153c340  (orig 0x153c340, compare)
bool main_f_153c340(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 176)) == (uint64_t)(3); }

// sub_153c410  (orig 0x153c410, setter)
void main_f_153c410(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1920) = a1; }

// sub_1540510  (orig 0x1540510, ret_only)
void main_f_1540510() {}

// sub_15407f0  (orig 0x15407f0, getter)
uint32_t main_f_15407f0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_1540800  (orig 0x1540800, setter)
void main_f_1540800(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1496) = a1; }

// sub_1542510  (orig 0x1542510, ret_only)
void main_f_1542510() {}

// sub_1542a80  (orig 0x1542a80, ret_only)
void main_f_1542a80() {}

// sub_1542a90  (orig 0x1542a90, ret_only)
void main_f_1542a90() {}

// sub_1542aa0  (orig 0x1542aa0, mov_ret)
uint32_t main_f_1542aa0() { return 0; }

// sub_15434f0  (orig 0x15434f0, ret_only)
void main_f_15434f0() {}

// sub_1543500  (orig 0x1543500, mov_ret)
uint32_t main_f_1543500() { return 0; }

// sub_15452c0  (orig 0x15452c0, ret_only)
void main_f_15452c0() {}

// sub_1545d10  (orig 0x1545d10, ret_only)
void main_f_1545d10() {}

// sub_1546de0  (orig 0x1546de0, ret_only)
void main_f_1546de0() {}

// sub_1547260  (orig 0x1547260, ret_only)
void main_f_1547260() {}

// sub_1547630  (orig 0x1547630, ret_only)
void main_f_1547630() {}

// sub_1547c40  (orig 0x1547c40, ret_only)
void main_f_1547c40() {}

// sub_154db40  (orig 0x154db40, getter)
uint8_t main_f_154db40(void* a0) { return *(uint8_t*)((char*)(a0) + 12); }

// sub_1551c30  (orig 0x1551c30, compare)
bool main_f_1551c30(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 196)) == (uint64_t)(0); }

// sub_1552e80  (orig 0x1552e80, getter)
uint64_t main_f_1552e80(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_1552e90  (orig 0x1552e90, getter)
uint32_t main_f_1552e90(void* a0) { return *(uint32_t*)((char*)(a0) + 200); }

// sub_1552ea0  (orig 0x1552ea0, getter)
uint32_t main_f_1552ea0(void* a0) { return *(uint32_t*)((char*)(a0) + 188); }

// sub_15621a0  (orig 0x15621a0, straight)
uint32_t main_f_15621a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 36) = *(uint32_t*)((char*)(a0) + 32);
    return *(uint32_t*)((char*)(a0) + 32);
}

// sub_1570e40  (orig 0x1570e40, ret_only)
void main_f_1570e40() {}

// sub_1571110  (orig 0x1571110, getter)
uint64_t main_f_1571110(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1571120  (orig 0x1571120, setter)
void main_f_1571120(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_157f0b0  (orig 0x157f0b0, setter)
void main_f_157f0b0(void* a0, uint64_t unused1, uint32_t a2) { *(uint32_t*)((char*)(a0) + 664) = a2; }

// sub_157f0c0  (orig 0x157f0c0, setter)
void main_f_157f0c0(void* a0, uint64_t unused1, uint32_t a2) { *(uint32_t*)((char*)(a0) + 504) = a2; }

// sub_158a780  (orig 0x158a780, ret_only)
void main_f_158a780() {}

// sub_158c0f0  (orig 0x158c0f0, straight)
void main_f_158c0f0(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint16_t*)((char*)(a0) + 10) = *(uint16_t*)((char*)(a1) + 10);
    *(uint8_t*)((char*)(a0) + 12) = *(uint8_t*)((char*)(a1) + 12);
}

// sub_158c1f0  (orig 0x158c1f0, straight)
void main_f_158c1f0(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a1) + 16);
    *(uint16_t*)((char*)(a0) + 24) = *(uint16_t*)((char*)(a1) + 24);
}

// sub_158cf90  (orig 0x158cf90, ret_only)
void main_f_158cf90() {}

// sub_158cfa0  (orig 0x158cfa0, ret_only)
void main_f_158cfa0() {}

// sub_158d020  (orig 0x158d020, ret_only)
void main_f_158d020() {}

// sub_158d3b0  (orig 0x158d3b0, ret_only)
void main_f_158d3b0() {}

// sub_158d8a0  (orig 0x158d8a0, ret_only)
void main_f_158d8a0() {}

// sub_158da60  (orig 0x158da60, ret_only)
void main_f_158da60() {}

// sub_158dd30  (orig 0x158dd30, ret_only)
void main_f_158dd30() {}

// sub_158e030  (orig 0x158e030, ret_only)
void main_f_158e030() {}

// sub_158e040  (orig 0x158e040, ret_only)
void main_f_158e040() {}

// sub_158e480  (orig 0x158e480, ret_only)
void main_f_158e480() {}

// sub_158e490  (orig 0x158e490, ret_only)
void main_f_158e490() {}

// sub_158e610  (orig 0x158e610, ret_only)
void main_f_158e610() {}

// sub_158e9d0  (orig 0x158e9d0, ret_only)
void main_f_158e9d0() {}

// sub_158e9e0  (orig 0x158e9e0, ret_only)
void main_f_158e9e0() {}

// sub_158e9f0  (orig 0x158e9f0, ret_only)
void main_f_158e9f0() {}

// sub_158ea00  (orig 0x158ea00, ret_only)
void main_f_158ea00() {}

// sub_158f0c0  (orig 0x158f0c0, straight)
void main_f_158f0c0(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint8_t*)((char*)(a0) + 9) = *(uint8_t*)((char*)(a1) + 9);
    *(uint8_t*)((char*)(a0) + 10) = *(uint8_t*)((char*)(a1) + 10);
    *(uint8_t*)((char*)(a0) + 11) = *(uint8_t*)((char*)(a1) + 11);
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a1) + 16);
    *(uint32_t*)((char*)(a0) + 24) = *(uint32_t*)((char*)(a1) + 24);
    *(uint32_t*)((char*)(a0) + 28) = *(uint32_t*)((char*)(a1) + 28);
    *(uint8_t*)((char*)(a0) + 32) = *(uint8_t*)((char*)(a1) + 32);
    *(uint16_t*)((char*)(a0) + 34) = *(uint16_t*)((char*)(a1) + 34);
}

// sub_1591b40  (orig 0x1591b40, mov_ret)
uint32_t main_f_1591b40() { return 1; }

// sub_1591b70  (orig 0x1591b70, mov_ret)
uint32_t main_f_1591b70() { return 1; }

// sub_1591c00  (orig 0x1591c00, ret_only)
void main_f_1591c00() {}

// sub_1591c10  (orig 0x1591c10, mov_ret)
uint32_t main_f_1591c10() { return 1; }

// sub_1591c20  (orig 0x1591c20, straight)
uint64_t main_f_1591c20(uint64_t unused0, uint64_t unused1, uint64_t unused2, uint64_t unused3, void* a4) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a4)) = (uint8_t)k0;
    return 0;
}

// sub_1593100  (orig 0x1593100, ret_only)
void main_f_1593100() {}

// sub_15946f0  (orig 0x15946f0, ret_only)
void main_f_15946f0() {}

// sub_1599450  (orig 0x1599450, ret_only)
void main_f_1599450() {}

// sub_15994d0  (orig 0x15994d0, ret_only)
void main_f_15994d0() {}

// sub_1599790  (orig 0x1599790, getter)
uint64_t main_f_1599790(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15997a0  (orig 0x15997a0, setter)
void main_f_15997a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_159b3d0  (orig 0x159b3d0, getter-chain)
uint64_t main_f_159b3d0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 8))) + 192); }

// sub_159c6f0  (orig 0x159c6f0, ret_only)
void main_f_159c6f0() {}

// sub_15a37e0  (orig 0x15a37e0, straight)
void main_f_15a37e0(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 12) = *(uint32_t*)((char*)(a1) + 12);
}

// sub_15a3960  (orig 0x15a3960, ret_only)
void main_f_15a3960() {}

// sub_15a3a70  (orig 0x15a3a70, ret_only)
void main_f_15a3a70() {}

// sub_15a3a80  (orig 0x15a3a80, ret_only)
void main_f_15a3a80() {}

// sub_15a3a90  (orig 0x15a3a90, ret_only)
void main_f_15a3a90() {}

// sub_15a3aa0  (orig 0x15a3aa0, ret_only)
void main_f_15a3aa0() {}

// sub_15a3ab0  (orig 0x15a3ab0, ret_only)
void main_f_15a3ab0() {}

// sub_15a3b60  (orig 0x15a3b60, ret_only)
void main_f_15a3b60() {}

// sub_15a3b70  (orig 0x15a3b70, ret_only)
void main_f_15a3b70() {}

// sub_15a3df0  (orig 0x15a3df0, ret_only)
void main_f_15a3df0() {}

// sub_15a3e90  (orig 0x15a3e90, ret_only)
void main_f_15a3e90() {}

// sub_15a4320  (orig 0x15a4320, ret_only)
void main_f_15a4320() {}

// sub_15a5840  (orig 0x15a5840, setter)
void main_f_15a5840(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 100) = a1; }

// sub_15a5890  (orig 0x15a5890, getter-chain)
uint32_t main_f_15a5890(void* a0, uint32_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 104);
    return *(uint32_t*)((char*)(t0) + (uintptr_t)(a1) * 4);
}

// sub_15a6ab0  (orig 0x15a6ab0, setter)
void main_f_15a6ab0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 204) = a1; }

// sub_15a73b0  (orig 0x15a73b0, setter)
void main_f_15a73b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 100) = a1; }

// sub_15a73c0  (orig 0x15a73c0, getter)
uint32_t main_f_15a73c0(void* a0) { return *(uint32_t*)((char*)(a0) + 100); }

// ServerProtocol  (orig 0x15a9050, strlit-ret)
const char *main_f_15a9050() { static const char s[] = "ServerProtocol"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15a90e0  (orig 0x15a90e0, ret_only)
void main_f_15a90e0() {}

// sub_15a90f0  (orig 0x15a90f0, ret_only)
void main_f_15a90f0() {}

// sub_15a9120  (orig 0x15a9120, mov_ret)
uint32_t main_f_15a9120() { return 1; }

// sub_15a9130  (orig 0x15a9130, mov_ret)
uint32_t main_f_15a9130() { return 1; }

// sub_15a9140  (orig 0x15a9140, getter)
uint32_t main_f_15a9140(void* a0) { return *(uint32_t*)((char*)(a0) + 56); }

// sub_15a9150  (orig 0x15a9150, ret_only)
void main_f_15a9150() {}

// sub_15a9160  (orig 0x15a9160, mov_ret)
uint32_t main_f_15a9160() { return 1; }

// sub_15a9170  (orig 0x15a9170, ret_only)
void main_f_15a9170() {}

// sub_15a9180  (orig 0x15a9180, ret_only)
void main_f_15a9180() {}

// sub_15a9190  (orig 0x15a9190, mov_ret)
uint64_t main_f_15a9190() { return 0; }

// sub_15a91a0  (orig 0x15a91a0, mov_ret)
uint32_t main_f_15a91a0() { return 1; }

// sub_15a91b0  (orig 0x15a91b0, ret_only)
void main_f_15a91b0() {}

// sub_15a91c0  (orig 0x15a91c0, mov_ret)
uint32_t main_f_15a91c0() { return 0; }

// sub_15a91e0  (orig 0x15a91e0, ret_only)
void main_f_15a91e0() {}

// sub_15a9200  (orig 0x15a9200, mov_ret)
uint32_t main_f_15a9200() { return 0; }

// sub_15a9210  (orig 0x15a9210, ret_only)
void main_f_15a9210() {}

// sub_15a9220  (orig 0x15a9220, ret_only)
void main_f_15a9220() {}

// sub_15a9230  (orig 0x15a9230, ret_only)
void main_f_15a9230() {}

// ClientProtocol  (orig 0x15a9270, strlit-ret)
const char *main_f_15a9270() { static const char s[] = "ClientProtocol"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15a9300  (orig 0x15a9300, ret_only)
void main_f_15a9300() {}

// sub_15a9310  (orig 0x15a9310, mov_ret)
uint32_t main_f_15a9310() { return 0; }

// sub_15ad640  (orig 0x15ad640, getter)
uint64_t main_f_15ad640(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15ad650  (orig 0x15ad650, setter)
void main_f_15ad650(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_15af2d0  (orig 0x15af2d0, ret_only)
void main_f_15af2d0() {}

// sub_15af720  (orig 0x15af720, ret_only)
void main_f_15af720() {}

// sub_15b05a0  (orig 0x15b05a0, straight)
void main_f_15b05a0(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a1) + 16);
    *(uint32_t*)((char*)(a0) + 24) = *(uint32_t*)((char*)(a1) + 24);
}

// sub_15b1200  (orig 0x15b1200, getter)
uint64_t main_f_15b1200(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15b1210  (orig 0x15b1210, setter)
void main_f_15b1210(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_15b38c0  (orig 0x15b38c0, getter)
uint32_t main_f_15b38c0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_15b38e0  (orig 0x15b38e0, ret_only)
void main_f_15b38e0() {}

// sub_15b3df0  (orig 0x15b3df0, ret_only)
void main_f_15b3df0() {}

// sub_15b3e00  (orig 0x15b3e00, ret_only)
void main_f_15b3e00() {}

// sub_15b40e0  (orig 0x15b40e0, ret_only)
void main_f_15b40e0() {}

// sub_15b4680  (orig 0x15b4680, ret_only)
void main_f_15b4680() {}

// sub_15b48d0  (orig 0x15b48d0, getter)
uint64_t main_f_15b48d0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15b48e0  (orig 0x15b48e0, setter)
void main_f_15b48e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_15b58c0  (orig 0x15b58c0, ret_only)
void main_f_15b58c0() {}

// sub_15b59d0  (orig 0x15b59d0, ret_only)
void main_f_15b59d0() {}

// sub_15b59e0  (orig 0x15b59e0, ret_only)
void main_f_15b59e0() {}

// sub_15b59f0  (orig 0x15b59f0, ret_only)
void main_f_15b59f0() {}

// sub_15b66c0  (orig 0x15b66c0, ret_only)
void main_f_15b66c0() {}

// sub_15b66d0  (orig 0x15b66d0, ret_only)
void main_f_15b66d0() {}

// sub_15b66e0  (orig 0x15b66e0, ret_only)
void main_f_15b66e0() {}

// sub_15b66f0  (orig 0x15b66f0, ret_only)
void main_f_15b66f0() {}

// sub_15b6700  (orig 0x15b6700, ret_only)
void main_f_15b6700() {}

// sub_15b6710  (orig 0x15b6710, ret_only)
void main_f_15b6710() {}

// sub_15b6850  (orig 0x15b6850, ret_only)
void main_f_15b6850() {}

// sub_15b6c40  (orig 0x15b6c40, getter)
uint64_t main_f_15b6c40(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15b6c50  (orig 0x15b6c50, setter)
void main_f_15b6c50(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_15b79f0  (orig 0x15b79f0, ret_only)
void main_f_15b79f0() {}

// sub_15b7a70  (orig 0x15b7a70, setter)
void main_f_15b7a70(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_15b7a80  (orig 0x15b7a80, copy2)
void main_f_15b7a80(void* a0, void* a1) { *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1)); }

// sub_15b7b20  (orig 0x15b7b20, copy2)
void main_f_15b7b20(void* a0, void* a1) { *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1)); }

// sub_15b7d30  (orig 0x15b7d30, getter)
uint64_t main_f_15b7d30(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_15b7d40  (orig 0x15b7d40, getter)
uint64_t main_f_15b7d40(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_15b7d50  (orig 0x15b7d50, compare)
bool main_f_15b7d50(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) > (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_15b7d70  (orig 0x15b7d70, compare)
bool main_f_15b7d70(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) <= (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_15b8f60  (orig 0x15b8f60, ret_only)
void main_f_15b8f60() {}

// sub_15b9280  (orig 0x15b9280, getter)
uint64_t main_f_15b9280(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_15baa10  (orig 0x15baa10, straight)
void main_f_15baa10(void* a0) {
    uint32_t k0 = 2;
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)k0;
}

// sub_15baaf0  (orig 0x15baaf0, straight)
void main_f_15baaf0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 81) = (uint8_t)k0;
}

// sub_15bab40  (orig 0x15bab40, setter)
void main_f_15bab40(uint64_t unused0, void* a1) { *(uint8_t*)((char*)(a1)) = 0; }

// sub_15babb0  (orig 0x15babb0, ret_only)
void main_f_15babb0() {}

// sub_15babc0  (orig 0x15babc0, ret_only)
void main_f_15babc0() {}

// sub_15babd0  (orig 0x15babd0, ret_only)
void main_f_15babd0() {}

// sub_15bacb0  (orig 0x15bacb0, ret_only)
void main_f_15bacb0() {}

// sub_15bacc0  (orig 0x15bacc0, straight)
void main_f_15bacc0(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0) + 8) = (*(uint32_t*)((char*)(a0) + 8)) + (((uint32_t)a1));
}

// sub_15bacf0  (orig 0x15bacf0, straight)
void main_f_15bacf0(void* a0) {
    uint32_t k0 = 1;
    uint32_t k1 = 1;
    *(uint8_t*)((char*)(a0) + 288) = (uint8_t)k0;
    *(uint8_t*)((char*)(a0) + 291) = (uint8_t)k1;
}

// sub_15bad00  (orig 0x15bad00, setter)
void main_f_15bad00(void* a0) { *(uint8_t*)((char*)(a0) + 289) = 0; }

// sub_15bb880  (orig 0x15bb880, setter-chain-zero)
void main_f_15bb880(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 32) = 0;
}

// sub_15bb900  (orig 0x15bb900, ret_only)
void main_f_15bb900() {}

// sub_15bbc70  (orig 0x15bbc70, compare)
bool main_f_15bbc70(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) == (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_15bbd10  (orig 0x15bbd10, straight)
void main_f_15bbd10(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = *(uint32_t*)((char*)(a1));
    *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 16) = *(uint32_t*)((char*)(a1) + 16);
}

// sub_15bc130  (orig 0x15bc130, ret_only)
void main_f_15bc130() {}

// sub_15bd7f0  (orig 0x15bd7f0, getter)
uint64_t main_f_15bd7f0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_15bd800  (orig 0x15bd800, getter)
uint64_t main_f_15bd800(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15bd900  (orig 0x15bd900, straight)
uint64_t main_f_15bd900(void* a0) { return (*(uint64_t*)((char*)(a0) + 24)) - (*(uint64_t*)((char*)(a0) + 8)); }

// sub_15beca0  (orig 0x15beca0, setter)
void main_f_15beca0(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_15beeb0  (orig 0x15beeb0, straight)
void main_f_15beeb0(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(a1);
    *(uint32_t*)((char*)(a0) + 8) = 1;
}

// sub_15beec0  (orig 0x15beec0, straight)
void main_f_15beec0(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(a1);
    *(uint32_t*)((char*)(a0) + 8) = 6;
}

// sub_15beef0  (orig 0x15beef0, straight)
void main_f_15beef0(void* a0, uint32_t a1) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(((uint32_t)a1));
    *(uint32_t*)((char*)(a0) + 8) = 6;
}

// sub_15bf100  (orig 0x15bf100, straight)
void main_f_15bf100(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1));
    *(uint32_t*)((char*)(a0) + 8) = 5;
}

// sub_15bf120  (orig 0x15bf120, getter)
uint32_t main_f_15bf120(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_15c0590  (orig 0x15c0590, mov_ret)
uint32_t main_f_15c0590() { return 0; }

// sub_15c05a0  (orig 0x15c05a0, mov_ret)
uint32_t main_f_15c05a0() { return 1; }

// sub_15c05d0  (orig 0x15c05d0, ret_only)
void main_f_15c05d0() {}

// sub_15c05e0  (orig 0x15c05e0, ret_only)
void main_f_15c05e0() {}

// sub_15c05f0  (orig 0x15c05f0, ret_only)
void main_f_15c05f0() {}

// sub_15c06d0  (orig 0x15c06d0, mov_ret)
uint32_t main_f_15c06d0() { return 1; }

// sub_15c06e0  (orig 0x15c06e0, mov_ret)
uint32_t main_f_15c06e0() { return 1; }

// sub_15c0ac0  (orig 0x15c0ac0, mov_ret)
uint32_t main_f_15c0ac0() { return 0; }

// sub_15c3ed0  (orig 0x15c3ed0, ret_only)
void main_f_15c3ed0() {}

// sub_15c4610  (orig 0x15c4610, mov_ret)
uint32_t main_f_15c4610() { return 16; }

// sub_15c66f0  (orig 0x15c66f0, mov_ret)
uint32_t main_f_15c66f0() { return 16; }

// sub_15c85c0  (orig 0x15c85c0, straight)
void main_f_15c85c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    *(uint64_t*)((char*)(a0) + 24) = (uint64_t)((char*)(p0) - 1);
}

// sub_15c9350  (orig 0x15c9350, setter-chain)
void main_f_15c9350(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0) + 112) = a1; *(uint32_t*)((char*)(a0) + 120) = a2; }

// sub_15cc220  (orig 0x15cc220, straight)
void main_f_15cc220(void* a0) {
    *(uint32_t*)((char*)(a0) + 40) = 2;
    *(uint64_t*)((char*)(a0) + 32) = 0;
}

// sub_15cdff0  (orig 0x15cdff0, ret_only)
void main_f_15cdff0() {}

// sub_15ce110  (orig 0x15ce110, ret_only)
void main_f_15ce110() {}

// sub_15ce670  (orig 0x15ce670, ret_only)
void main_f_15ce670() {}

// sub_15cedf0  (orig 0x15cedf0, compare)
bool main_f_15cedf0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 100)) == (uint64_t)(0); }

// sub_15cee00  (orig 0x15cee00, ret_only)
void main_f_15cee00() {}

// sub_15cefa0  (orig 0x15cefa0, ret_only)
void main_f_15cefa0() {}

// sub_15d2cd0  (orig 0x15d2cd0, setter)
void main_f_15d2cd0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_15d2fc0  (orig 0x15d2fc0, ret_only)
void main_f_15d2fc0() {}

// sub_15d45f0  (orig 0x15d45f0, mov_ret)
uint32_t main_f_15d45f0() { return 1; }

// sub_15d4640  (orig 0x15d4640, ret_only)
void main_f_15d4640() {}

// sub_15d4650  (orig 0x15d4650, ret_only)
void main_f_15d4650() {}

// sub_15d4660  (orig 0x15d4660, ret_only)
void main_f_15d4660() {}

// sub_15d4670  (orig 0x15d4670, mov_ret)
uint32_t main_f_15d4670() { return 1; }

// sub_15d4680  (orig 0x15d4680, mov_ret)
uint32_t main_f_15d4680() { return 16; }

// sub_15d4690  (orig 0x15d4690, ret_only)
void main_f_15d4690() {}

// CallContextRegister_2  (orig 0x15d46c0, strlit-ret)
const char *main_f_15d46c0() { static const char s[] = "CallContextRegister"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15d4730  (orig 0x15d4730, ret_only)
void main_f_15d4730() {}

// sub_15d4750  (orig 0x15d4750, getter)
uint32_t main_f_15d4750(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_15d47c0  (orig 0x15d47c0, getter)
uint32_t main_f_15d47c0(void* a0) { return *(uint32_t*)((char*)(a0) + 80); }

// SystemComponent_4  (orig 0x15d47d0, strlit-ret)
const char *main_f_15d47d0() { static const char s[] = "SystemComponent"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15d4810  (orig 0x15d4810, mov_ret)
uint32_t main_f_15d4810() { return 1; }

// sub_15d4820  (orig 0x15d4820, mov_ret)
uint32_t main_f_15d4820() { return 1; }

// SystemComponentGroup  (orig 0x15d4830, strlit-ret)
const char *main_f_15d4830() { static const char s[] = "SystemComponentGroup"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15d48a0  (orig 0x15d48a0, ret_only)
void main_f_15d48a0() {}

// sub_15d48b0  (orig 0x15d48b0, ret_only)
void main_f_15d48b0() {}

// sub_15d48c0  (orig 0x15d48c0, ret_only)
void main_f_15d48c0() {}

// sub_15d48d0  (orig 0x15d48d0, ret_only)
void main_f_15d48d0() {}

// sub_15d48e0  (orig 0x15d48e0, ret_only)
void main_f_15d48e0() {}

// sub_15d48f0  (orig 0x15d48f0, ret_only)
void main_f_15d48f0() {}

// sub_15d65c0  (orig 0x15d65c0, ptr_add)
void* main_f_15d65c0(void* a0) { return (char*)a0 + 8; }

// sub_15d65d0  (orig 0x15d65d0, ptr_add)
void* main_f_15d65d0(void* a0) { return (char*)a0 + 128; }

// sub_15d65e0  (orig 0x15d65e0, getter)
uint32_t main_f_15d65e0(void* a0) { return *(uint32_t*)((char*)(a0) + 168); }

// sub_15d7280  (orig 0x15d7280, compare)
bool main_f_15d7280(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 72)) == (uint64_t)(64); }

// sub_15d7310  (orig 0x15d7310, straight)
void main_f_15d7310(void* a0, uint64_t a1, void* a2) {
    *(uint64_t*)((char*)(a0) + 232) = (uint64_t)(a1);
    *(uint64_t*)((char*)(a0) + 240) = *(uint64_t*)((char*)(a2));
}

// sub_15d7fb0  (orig 0x15d7fb0, ret_only)
void main_f_15d7fb0() {}

// sub_15d80e0  (orig 0x15d80e0, ret_only)
void main_f_15d80e0() {}

// sub_15d80f0  (orig 0x15d80f0, mov_ret)
uint32_t main_f_15d80f0() { return 0; }

// sub_15d8100  (orig 0x15d8100, mov_ret)
uint64_t main_f_15d8100() { return 0; }

// sub_15d8110  (orig 0x15d8110, ret_only)
void main_f_15d8110() {}

// sub_15d8120  (orig 0x15d8120, mov_ret)
uint32_t main_f_15d8120() { return 0; }

// sub_15d8130  (orig 0x15d8130, mov_ret)
uint64_t main_f_15d8130() { return 0; }

// sub_15d8150  (orig 0x15d8150, mov_ret)
uint32_t main_f_15d8150() { return 0; }

// sub_15d8160  (orig 0x15d8160, ret_only)
void main_f_15d8160() {}

// sub_15d8170  (orig 0x15d8170, ret_only)
void main_f_15d8170() {}

// sub_15d8180  (orig 0x15d8180, ret_only)
void main_f_15d8180() {}

// sub_15d8df0  (orig 0x15d8df0, setter)
void main_f_15d8df0(void* a0, float a1) { *(float*)((char*)(a0) + 36) = a1; }

// sub_15d98d0  (orig 0x15d98d0, ret_only)
void main_f_15d98d0() {}

// sub_15de580  (orig 0x15de580, ret_only)
void main_f_15de580() {}

// sub_15df270  (orig 0x15df270, ret_only)
void main_f_15df270() {}

// sub_15e6fc0  (orig 0x15e6fc0, ptr_add)
void* main_f_15e6fc0(void* a0) { return (char*)a0 + 128; }

// sub_15e7d10  (orig 0x15e7d10, ptr_add)
void* main_f_15e7d10(void* a0) { return (char*)a0 + 64; }

// sub_15e8a50  (orig 0x15e8a50, ret_only)
void main_f_15e8a50() {}

// sub_15e8a70  (orig 0x15e8a70, mov_ret)
uint64_t main_f_15e8a70() { return 0; }

// sub_15e8a80  (orig 0x15e8a80, mov_ret)
uint64_t main_f_15e8a80() { return 0; }

// sub_15eaa80  (orig 0x15eaa80, mov_ret)
uint32_t main_f_15eaa80() { return 3; }

// sub_15ec6b0  (orig 0x15ec6b0, ret_only)
void main_f_15ec6b0() {}

// sub_15ec6c0  (orig 0x15ec6c0, mov_ret)
uint32_t main_f_15ec6c0() { return 1; }

// sub_15ecbe0  (orig 0x15ecbe0, ret_only)
void main_f_15ecbe0() {}

// sub_15ecbf0  (orig 0x15ecbf0, ret_only)
void main_f_15ecbf0() {}

