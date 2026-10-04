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
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef signed long int64_t;

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

// sub_1032c20  (orig 0x1032c20, ret_only)
void main_f_1032c20() {}

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

// sub_103af20  (orig 0x103af20, ret_only)
void main_f_103af20() {}

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

// sub_1040880  (orig 0x1040880, ret_only)
void main_f_1040880() {}

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

// sub_104dbd0  (orig 0x104dbd0, getter)
uint32_t main_f_104dbd0(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_104e020  (orig 0x104e020, straight)
void main_f_104e020(void* a0) {
    *(uint8_t*)((char*)(a0) + 361) = (uint8_t)(1);
}

// sub_104e030  (orig 0x104e030, setter)
void main_f_104e030(void* a0) { *(uint8_t*)((char*)(a0) + 361) = 0; }

// sub_104e0c0  (orig 0x104e0c0, straight)
void main_f_104e0c0(void* a0) {
    *(uint8_t*)((char*)(a0) + 362) = (uint8_t)(1);
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

// sub_1088190  (orig 0x1088190, ret_only)
void main_f_1088190() {}

// sub_10881a0  (orig 0x10881a0, ret_only)
void main_f_10881a0() {}

// sub_10881b0  (orig 0x10881b0, ret_only)
void main_f_10881b0() {}

// sub_1089d90  (orig 0x1089d90, ret_only)
void main_f_1089d90() {}

// sub_1089da0  (orig 0x1089da0, ret_only)
void main_f_1089da0() {}

// sub_1089db0  (orig 0x1089db0, ret_only)
void main_f_1089db0() {}

// sub_108c220  (orig 0x108c220, ret_only)
void main_f_108c220() {}

// sub_108c230  (orig 0x108c230, ret_only)
void main_f_108c230() {}

// sub_108c240  (orig 0x108c240, ret_only)
void main_f_108c240() {}

// sub_108e8b0  (orig 0x108e8b0, ret_only)
void main_f_108e8b0() {}

// sub_108e8c0  (orig 0x108e8c0, ret_only)
void main_f_108e8c0() {}

// sub_108e8d0  (orig 0x108e8d0, ret_only)
void main_f_108e8d0() {}

// sub_10906c0  (orig 0x10906c0, ret_only)
void main_f_10906c0() {}

// sub_10906d0  (orig 0x10906d0, ret_only)
void main_f_10906d0() {}

// sub_10906e0  (orig 0x10906e0, ret_only)
void main_f_10906e0() {}

// sub_10935b0  (orig 0x10935b0, ret_only)
void main_f_10935b0() {}

// sub_10935c0  (orig 0x10935c0, ret_only)
void main_f_10935c0() {}

// sub_10935d0  (orig 0x10935d0, ret_only)
void main_f_10935d0() {}

// sub_10959f0  (orig 0x10959f0, ret_only)
void main_f_10959f0() {}

// sub_1095a00  (orig 0x1095a00, ret_only)
void main_f_1095a00() {}

// sub_1095a10  (orig 0x1095a10, ret_only)
void main_f_1095a10() {}

// sub_10975a0  (orig 0x10975a0, ret_only)
void main_f_10975a0() {}

// sub_10975b0  (orig 0x10975b0, ret_only)
void main_f_10975b0() {}

// sub_10975c0  (orig 0x10975c0, ret_only)
void main_f_10975c0() {}

// sub_1098860  (orig 0x1098860, ret_only)
void main_f_1098860() {}

// sub_1098870  (orig 0x1098870, ret_only)
void main_f_1098870() {}

// sub_1098880  (orig 0x1098880, ret_only)
void main_f_1098880() {}

// sub_1099640  (orig 0x1099640, ret_only)
void main_f_1099640() {}

// sub_1099650  (orig 0x1099650, ret_only)
void main_f_1099650() {}

// sub_1099660  (orig 0x1099660, ret_only)
void main_f_1099660() {}

// sub_109b2f0  (orig 0x109b2f0, ret_only)
void main_f_109b2f0() {}

// sub_109b300  (orig 0x109b300, ret_only)
void main_f_109b300() {}

// sub_109b310  (orig 0x109b310, ret_only)
void main_f_109b310() {}

// sub_109d650  (orig 0x109d650, ret_only)
void main_f_109d650() {}

// sub_109d660  (orig 0x109d660, ret_only)
void main_f_109d660() {}

// sub_109d670  (orig 0x109d670, ret_only)
void main_f_109d670() {}

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
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)(1);
}

// sub_109db60  (orig 0x109db60, straight)
void main_f_109db60(void* a0) {
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)(1);
}

// sub_109df30  (orig 0x109df30, getter)
uint32_t main_f_109df30(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_109df40  (orig 0x109df40, setter)
void main_f_109df40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_109df50  (orig 0x109df50, mov_ret)
uint32_t main_f_109df50() { return 1; }

// sub_109e3d0  (orig 0x109e3d0, ret_only)
void main_f_109e3d0() {}

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

// sub_10a07b0  (orig 0x10a07b0, setter)
void main_f_10a07b0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10a07c0  (orig 0x10a07c0, getter)
uint64_t main_f_10a07c0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10a07d0  (orig 0x10a07d0, getter)
uint8_t main_f_10a07d0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a0c10  (orig 0x10a0c10, straight)
void main_f_10a0c10(void* a0) {
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)(257);
}

// sub_10a0c20  (orig 0x10a0c20, straight)
void main_f_10a0c20(void* a0) {
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)(257);
}

// sub_10a0c30  (orig 0x10a0c30, straight)
void main_f_10a0c30(void* a0) {
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)(1);
}

// sub_10a0c40  (orig 0x10a0c40, straight)
void main_f_10a0c40(void* a0) {
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)(1);
}

// sub_10a11b0  (orig 0x10a11b0, getter)
uint32_t main_f_10a11b0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a11c0  (orig 0x10a11c0, setter)
void main_f_10a11c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a11d0  (orig 0x10a11d0, mov_ret)
uint32_t main_f_10a11d0() { return 1; }

// sub_10a15b0  (orig 0x10a15b0, setter)
void main_f_10a15b0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10a15c0  (orig 0x10a15c0, getter)
uint64_t main_f_10a15c0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10a15d0  (orig 0x10a15d0, getter)
uint8_t main_f_10a15d0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a1fa0  (orig 0x10a1fa0, straight)
void main_f_10a1fa0(void* a0) {
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)(1);
}

// sub_10a1fb0  (orig 0x10a1fb0, straight)
void main_f_10a1fb0(void* a0) {
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)(1);
}

// sub_10a22b0  (orig 0x10a22b0, getter)
uint32_t main_f_10a22b0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a22c0  (orig 0x10a22c0, setter)
void main_f_10a22c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a22d0  (orig 0x10a22d0, mov_ret)
uint32_t main_f_10a22d0() { return 1; }

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

// sub_10a3bc0  (orig 0x10a3bc0, setter)
void main_f_10a3bc0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10a3bd0  (orig 0x10a3bd0, getter)
uint64_t main_f_10a3bd0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10a3be0  (orig 0x10a3be0, getter)
uint8_t main_f_10a3be0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a4170  (orig 0x10a4170, straight)
void main_f_10a4170(void* a0) {
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)(1);
}

// sub_10a4180  (orig 0x10a4180, straight)
void main_f_10a4180(void* a0) {
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)(1);
}

// sub_10a46a0  (orig 0x10a46a0, getter)
uint32_t main_f_10a46a0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a46b0  (orig 0x10a46b0, setter)
void main_f_10a46b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a4800  (orig 0x10a4800, mov_ret)
uint32_t main_f_10a4800() { return 1; }

// sub_10a4c80  (orig 0x10a4c80, ret_only)
void main_f_10a4c80() {}

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

// sub_10a65c0  (orig 0x10a65c0, setter)
void main_f_10a65c0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10a65d0  (orig 0x10a65d0, getter)
uint64_t main_f_10a65d0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10a65e0  (orig 0x10a65e0, getter)
uint8_t main_f_10a65e0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a6b30  (orig 0x10a6b30, straight)
void main_f_10a6b30(void* a0) {
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)(1);
}

// sub_10a6b40  (orig 0x10a6b40, straight)
void main_f_10a6b40(void* a0) {
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)(1);
}

// sub_10a7070  (orig 0x10a7070, getter)
uint32_t main_f_10a7070(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a7080  (orig 0x10a7080, setter)
void main_f_10a7080(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a71d0  (orig 0x10a71d0, mov_ret)
uint32_t main_f_10a71d0() { return 1; }

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

// sub_10aa3a0  (orig 0x10aa3a0, setter)
void main_f_10aa3a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10aa3b0  (orig 0x10aa3b0, getter)
uint64_t main_f_10aa3b0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10aa3c0  (orig 0x10aa3c0, getter)
uint8_t main_f_10aa3c0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10aa8f0  (orig 0x10aa8f0, mov_ret)
uint32_t main_f_10aa8f0() { return 1; }

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

// sub_10b5690  (orig 0x10b5690, ret_only)
void main_f_10b5690() {}

// sub_10b56a0  (orig 0x10b56a0, ret_only)
void main_f_10b56a0() {}

// sub_10b56b0  (orig 0x10b56b0, ret_only)
void main_f_10b56b0() {}

// sub_10b8a40  (orig 0x10b8a40, mov_ret)
uint32_t main_f_10b8a40() { return 1; }

// sub_10b8c40  (orig 0x10b8c40, mov_ret)
uint32_t main_f_10b8c40() { return 1; }

// sub_10b94d0  (orig 0x10b94d0, mov_ret)
uint32_t main_f_10b94d0() { return 1; }

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

// sub_10bf300  (orig 0x10bf300, ret_only)
void main_f_10bf300() {}

// sub_10bf310  (orig 0x10bf310, ret_only)
void main_f_10bf310() {}

// sub_10bf320  (orig 0x10bf320, ret_only)
void main_f_10bf320() {}

// sub_10c0a10  (orig 0x10c0a10, ret_only)
void main_f_10c0a10() {}

// sub_10c0a20  (orig 0x10c0a20, ret_only)
void main_f_10c0a20() {}

// sub_10c0a30  (orig 0x10c0a30, ret_only)
void main_f_10c0a30() {}

// sub_10c1cc0  (orig 0x10c1cc0, ret_only)
void main_f_10c1cc0() {}

// sub_10c1cd0  (orig 0x10c1cd0, ret_only)
void main_f_10c1cd0() {}

// sub_10c1ce0  (orig 0x10c1ce0, ret_only)
void main_f_10c1ce0() {}

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

// sub_10c9f80  (orig 0x10c9f80, ret_only)
void main_f_10c9f80() {}

// sub_10c9f90  (orig 0x10c9f90, ret_only)
void main_f_10c9f90() {}

// sub_10c9fa0  (orig 0x10c9fa0, ret_only)
void main_f_10c9fa0() {}

// sub_10ca8d0  (orig 0x10ca8d0, getter)
uint32_t main_f_10ca8d0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10ca8e0  (orig 0x10ca8e0, setter)
void main_f_10ca8e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

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

// sub_10cc900  (orig 0x10cc900, setter)
void main_f_10cc900(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10cc910  (orig 0x10cc910, getter)
uint64_t main_f_10cc910(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10cc920  (orig 0x10cc920, getter)
uint8_t main_f_10cc920(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10d2b00  (orig 0x10d2b00, ret_only)
void main_f_10d2b00() {}

// sub_10d2b10  (orig 0x10d2b10, ret_only)
void main_f_10d2b10() {}

// sub_10d2b20  (orig 0x10d2b20, ret_only)
void main_f_10d2b20() {}

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

// sub_10d8b80  (orig 0x10d8b80, ret_only)
void main_f_10d8b80() {}

// sub_10d8b90  (orig 0x10d8b90, ret_only)
void main_f_10d8b90() {}

// sub_10d8ba0  (orig 0x10d8ba0, ret_only)
void main_f_10d8ba0() {}

// sub_10d9c40  (orig 0x10d9c40, straight)
void main_f_10d9c40(void* a0) {
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)(1);
}

// sub_10d9c50  (orig 0x10d9c50, straight)
void main_f_10d9c50(void* a0) {
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)(1);
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

// sub_10e0a90  (orig 0x10e0a90, ret_only)
void main_f_10e0a90() {}

// sub_10e0aa0  (orig 0x10e0aa0, ret_only)
void main_f_10e0aa0() {}

// sub_10e0ab0  (orig 0x10e0ab0, ret_only)
void main_f_10e0ab0() {}

// sub_10e17f0  (orig 0x10e17f0, ret_only)
void main_f_10e17f0() {}

// sub_10e1800  (orig 0x10e1800, ret_only)
void main_f_10e1800() {}

// sub_10e1810  (orig 0x10e1810, ret_only)
void main_f_10e1810() {}

// sub_10e2e70  (orig 0x10e2e70, ret_only)
void main_f_10e2e70() {}

// sub_10e2e80  (orig 0x10e2e80, ret_only)
void main_f_10e2e80() {}

// sub_10e2e90  (orig 0x10e2e90, ret_only)
void main_f_10e2e90() {}

// sub_10e31d0  (orig 0x10e31d0, getter)
uint32_t main_f_10e31d0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10e31e0  (orig 0x10e31e0, setter)
void main_f_10e31e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

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

// sub_10e3ee0  (orig 0x10e3ee0, setter)
void main_f_10e3ee0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10e3ef0  (orig 0x10e3ef0, getter)
uint64_t main_f_10e3ef0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10e3f00  (orig 0x10e3f00, getter)
uint8_t main_f_10e3f00(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10e4410  (orig 0x10e4410, mov_ret)
uint32_t main_f_10e4410() { return 1; }

// sub_10e4810  (orig 0x10e4810, getter)
uint32_t main_f_10e4810(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10e4820  (orig 0x10e4820, setter)
void main_f_10e4820(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10e4830  (orig 0x10e4830, mov_ret)
uint32_t main_f_10e4830() { return 1; }

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

// sub_10e90e0  (orig 0x10e90e0, ret_only)
void main_f_10e90e0() {}

// sub_10e90f0  (orig 0x10e90f0, ret_only)
void main_f_10e90f0() {}

// sub_10e9100  (orig 0x10e9100, ret_only)
void main_f_10e9100() {}

// sub_10ea250  (orig 0x10ea250, mov_ret)
uint32_t main_f_10ea250() { return 1; }

// sub_10ea870  (orig 0x10ea870, getter)
uint32_t main_f_10ea870(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10ea880  (orig 0x10ea880, setter)
void main_f_10ea880(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10ea890  (orig 0x10ea890, mov_ret)
uint32_t main_f_10ea890() { return 1; }

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

// sub_10ef7c0  (orig 0x10ef7c0, ret_only)
void main_f_10ef7c0() {}

// sub_10ef7d0  (orig 0x10ef7d0, ret_only)
void main_f_10ef7d0() {}

// sub_10ef7e0  (orig 0x10ef7e0, ret_only)
void main_f_10ef7e0() {}

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

// sub_10f1350  (orig 0x10f1350, setter)
void main_f_10f1350(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10f1360  (orig 0x10f1360, getter)
uint64_t main_f_10f1360(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10f1370  (orig 0x10f1370, getter)
uint8_t main_f_10f1370(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10f17b0  (orig 0x10f17b0, straight)
void main_f_10f17b0(void* a0) {
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)(257);
}

// sub_10f17c0  (orig 0x10f17c0, straight)
void main_f_10f17c0(void* a0) {
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)(257);
}

// sub_10f1b90  (orig 0x10f1b90, getter)
uint32_t main_f_10f1b90(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10f1ba0  (orig 0x10f1ba0, setter)
void main_f_10f1ba0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10f1bb0  (orig 0x10f1bb0, mov_ret)
uint32_t main_f_10f1bb0() { return 1; }

// sub_10f1e60  (orig 0x10f1e60, ret_only)
void main_f_10f1e60() {}

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

// sub_10f5440  (orig 0x10f5440, mov_ret)
uint32_t main_f_10f5440() { return 1; }

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
    *(uint8_t*)((char*)(a0) + 400) = (uint8_t)(1);
}

// sub_10f79f0  (orig 0x10f79f0, setter)
void main_f_10f79f0(void* a0) { *(uint8_t*)((char*)(a0) + 456) = 0; }

// sub_10f7a10  (orig 0x10f7a10, straight)
void main_f_10f7a10(void* a0) {
    *(uint8_t*)((char*)(a0) + 456) = (uint8_t)(1);
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

// sub_10fe260  (orig 0x10fe260, ret_only)
void main_f_10fe260() {}

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

// sub_11039a0  (orig 0x11039a0, getter)
uint32_t main_f_11039a0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_11039b0  (orig 0x11039b0, setter)
void main_f_11039b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_11039c0  (orig 0x11039c0, mov_ret)
uint32_t main_f_11039c0() { return 1; }

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
    *(uint8_t*)((char*)(a0) + 625) = (uint8_t)(1);
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

// sub_11169f0  (orig 0x11169f0, ret_only)
void main_f_11169f0() {}

// sub_1116a00  (orig 0x1116a00, ret_only)
void main_f_1116a00() {}

// sub_1116a10  (orig 0x1116a10, ret_only)
void main_f_1116a10() {}

// sub_1116b00  (orig 0x1116b00, ret_only)
void main_f_1116b00() {}

// sub_11186e0  (orig 0x11186e0, ret_only)
void main_f_11186e0() {}

// sub_11186f0  (orig 0x11186f0, copy2)
void main_f_11186f0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_1118700  (orig 0x1118700, copy2)
void main_f_1118700(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_111aa90  (orig 0x111aa90, ret_only)
void main_f_111aa90() {}

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

// sub_11249c0  (orig 0x11249c0, copy2)
void main_f_11249c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124a40  (orig 0x1124a40, ret_only)
void main_f_1124a40() {}

// sub_1124a50  (orig 0x1124a50, copy2)
void main_f_1124a50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124a60  (orig 0x1124a60, copy2)
void main_f_1124a60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124ad0  (orig 0x1124ad0, ret_only)
void main_f_1124ad0() {}

// sub_1124ae0  (orig 0x1124ae0, copy2)
void main_f_1124ae0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124af0  (orig 0x1124af0, copy2)
void main_f_1124af0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124b40  (orig 0x1124b40, ret_only)
void main_f_1124b40() {}

// sub_1124b50  (orig 0x1124b50, copy2)
void main_f_1124b50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124b60  (orig 0x1124b60, copy2)
void main_f_1124b60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124d00  (orig 0x1124d00, ret_only)
void main_f_1124d00() {}

// sub_1124f90  (orig 0x1124f90, ret_only)
void main_f_1124f90() {}

// sub_1124fa0  (orig 0x1124fa0, copy2)
void main_f_1124fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124fb0  (orig 0x1124fb0, copy2)
void main_f_1124fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124fc0  (orig 0x1124fc0, copy2)
void main_f_1124fc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124fd0  (orig 0x1124fd0, copy2)
void main_f_1124fd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1125020  (orig 0x1125020, ret_only)
void main_f_1125020() {}

// sub_1125030  (orig 0x1125030, copy2)
void main_f_1125030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1125040  (orig 0x1125040, copy2)
void main_f_1125040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11250c0  (orig 0x11250c0, ret_only)
void main_f_11250c0() {}

// sub_11250d0  (orig 0x11250d0, copy2)
void main_f_11250d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11250e0  (orig 0x11250e0, copy2)
void main_f_11250e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11266e0  (orig 0x11266e0, ret_only)
void main_f_11266e0() {}

// sub_11268a0  (orig 0x11268a0, ret_only)
void main_f_11268a0() {}

// sub_11268d0  (orig 0x11268d0, copy2)
void main_f_11268d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11268e0  (orig 0x11268e0, copy2)
void main_f_11268e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1126ab0  (orig 0x1126ab0, ret_only)
void main_f_1126ab0() {}

// sub_1126ac0  (orig 0x1126ac0, copy2)
void main_f_1126ac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1126ad0  (orig 0x1126ad0, copy2)
void main_f_1126ad0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1126c80  (orig 0x1126c80, ret_only)
void main_f_1126c80() {}

// sub_1126e70  (orig 0x1126e70, ret_only)
void main_f_1126e70() {}

// sub_1127250  (orig 0x1127250, ret_only)
void main_f_1127250() {}

// sub_11272a0  (orig 0x11272a0, ret_only)
void main_f_11272a0() {}

// sub_11272f0  (orig 0x11272f0, copy2)
void main_f_11272f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1127300  (orig 0x1127300, copy2)
void main_f_1127300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1127330  (orig 0x1127330, ret_only)
void main_f_1127330() {}

// sub_1127340  (orig 0x1127340, ret_only)
void main_f_1127340() {}

// sub_1127350  (orig 0x1127350, ret_only)
void main_f_1127350() {}

// sub_1127880  (orig 0x1127880, ret_only)
void main_f_1127880() {}

// sub_11278c0  (orig 0x11278c0, ret_only)
void main_f_11278c0() {}

// sub_11278d0  (orig 0x11278d0, copy2)
void main_f_11278d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11278e0  (orig 0x11278e0, copy2)
void main_f_11278e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11278f0  (orig 0x11278f0, copy2)
void main_f_11278f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1127900  (orig 0x1127900, copy2)
void main_f_1127900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1127ad0  (orig 0x1127ad0, ret_only)
void main_f_1127ad0() {}

// sub_1127b60  (orig 0x1127b60, ret_only)
void main_f_1127b60() {}

// sub_1127b70  (orig 0x1127b70, copy2)
void main_f_1127b70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1127b80  (orig 0x1127b80, copy2)
void main_f_1127b80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_112daf0  (orig 0x112daf0, ret_only)
void main_f_112daf0() {}

// sub_112db00  (orig 0x112db00, ret_only)
void main_f_112db00() {}

// sub_112e3d0  (orig 0x112e3d0, getter)
uint8_t main_f_112e3d0(void* a0) { return *(uint8_t*)((char*)(a0) + 117); }

// sub_112e560  (orig 0x112e560, ret_only)
void main_f_112e560() {}

// sub_112e570  (orig 0x112e570, ret_only)
void main_f_112e570() {}

// sub_112eaf0  (orig 0x112eaf0, getter)
float main_f_112eaf0(void* a0) { return *(float*)((char*)(a0) + 120); }

// sub_112eb00  (orig 0x112eb00, ret_only)
void main_f_112eb00() {}

// sub_112ee40  (orig 0x112ee40, getter)
uint32_t main_f_112ee40(void* a0) { return *(uint32_t*)((char*)(a0) + 1168); }

// sub_112f240  (orig 0x112f240, getter)
float main_f_112f240(void* a0) { return *(float*)((char*)(a0) + 1172); }

// sub_112f410  (orig 0x112f410, getter)
uint64_t main_f_112f410(void* a0) { return *(uint64_t*)((char*)(a0) + 1176); }

// sub_1130330  (orig 0x1130330, mov_ret)
uint32_t main_f_1130330() { return 1; }

// sub_1130370  (orig 0x1130370, getter)
uint64_t main_f_1130370(void* a0) { return *(uint64_t*)((char*)(a0) + 1120); }

// sub_1130380  (orig 0x1130380, getter)
uint64_t main_f_1130380(void* a0) { return *(uint64_t*)((char*)(a0) + 1128); }

// sub_11307e0  (orig 0x11307e0, ret_only)
void main_f_11307e0() {}

// sub_11307f0  (orig 0x11307f0, copy2)
void main_f_11307f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1130800  (orig 0x1130800, copy2)
void main_f_1130800(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1130830  (orig 0x1130830, ret_only)
void main_f_1130830() {}

// sub_1130840  (orig 0x1130840, copy2)
void main_f_1130840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1130850  (orig 0x1130850, copy2)
void main_f_1130850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1130880  (orig 0x1130880, ret_only)
void main_f_1130880() {}

// sub_1130890  (orig 0x1130890, copy2)
void main_f_1130890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11308a0  (orig 0x11308a0, copy2)
void main_f_11308a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1130c00  (orig 0x1130c00, compare)
bool main_f_1130c00(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 136)) > (uint64_t)(2); }

// sub_1130c10  (orig 0x1130c10, getter)
uint8_t main_f_1130c10(void* a0) { return *(uint8_t*)((char*)(a0) + 152); }

// sub_1130d00  (orig 0x1130d00, ptr_add)
void* main_f_1130d00(void* a0) { return (char*)a0 + 128; }

// sub_1130d10  (orig 0x1130d10, getter)
uint32_t main_f_1130d10(void* a0) { return *(uint32_t*)((char*)(a0) + 136); }

// sub_1131340  (orig 0x1131340, ret_only)
void main_f_1131340() {}

// sub_1131350  (orig 0x1131350, copy2)
void main_f_1131350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1131360  (orig 0x1131360, copy2)
void main_f_1131360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1133c00  (orig 0x1133c00, ret_only)
void main_f_1133c00() {}

// sub_1134fa0  (orig 0x1134fa0, ptr_add)
void* main_f_1134fa0(void* a0) { return (char*)a0 + 1808; }

// sub_11361a0  (orig 0x11361a0, ptr_add)
void* main_f_11361a0(void* a0) { return (char*)a0 + 880; }

// sub_11364b0  (orig 0x11364b0, getter)
uint64_t main_f_11364b0(void* a0) { return *(uint64_t*)((char*)(a0) + 864); }

// sub_11364c0  (orig 0x11364c0, getter)
uint8_t main_f_11364c0(void* a0) { return *(uint8_t*)((char*)(a0) + 780); }

// sub_11365b0  (orig 0x11365b0, getter)
uint64_t main_f_11365b0(void* a0) { return *(uint64_t*)((char*)(a0) + 2072); }

// sub_11365c0  (orig 0x11365c0, ptr_add)
void* main_f_11365c0(void* a0) { return (char*)a0 + 992; }

// sub_11365d0  (orig 0x11365d0, ptr_add)
void* main_f_11365d0(void* a0) { return (char*)a0 + 1104; }

// sub_1136910  (orig 0x1136910, getter)
uint32_t main_f_1136910(void* a0) { return *(uint32_t*)((char*)(a0) + 872); }

// sub_1136c10  (orig 0x1136c10, getter)
uint64_t main_f_1136c10(void* a0) { return *(uint64_t*)((char*)(a0) + 1248); }

// sub_1136c40  (orig 0x1136c40, getter)
uint64_t main_f_1136c40(void* a0) { return *(uint64_t*)((char*)(a0) + 1256); }

// sub_1139180  (orig 0x1139180, getter)
uint32_t main_f_1139180(void* a0) { return *(uint32_t*)((char*)(a0) + 1280); }

// sub_1139710  (orig 0x1139710, compare)
bool main_f_1139710(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1280)) == (uint64_t)(4); }

// sub_1139e80  (orig 0x1139e80, compare)
bool main_f_1139e80(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1280)) == (uint64_t)(3); }

// sub_113a1a0  (orig 0x113a1a0, getter)
uint32_t main_f_113a1a0(void* a0) { return *(uint32_t*)((char*)(a0) + 1288); }

// sub_113a1b0  (orig 0x113a1b0, setter)
void main_f_113a1b0(void* a0) { *(uint32_t*)((char*)(a0) + 1288) = 0; }

// sub_113a540  (orig 0x113a540, getter)
uint8_t main_f_113a540(void* a0) { return *(uint8_t*)((char*)(a0) + 2112); }

// sub_113a570  (orig 0x113a570, setter)
void main_f_113a570(void* a0) { *(uint32_t*)((char*)(a0) + 2116) = 0; }

// sub_113a5d0  (orig 0x113a5d0, straight)
void main_f_113a5d0(void* a0) {
    *(uint8_t*)((char*)(a0) + 2113) = (uint8_t)(1);
}

// sub_113a8b0  (orig 0x113a8b0, getter)
uint32_t main_f_113a8b0(void* a0) { return *(uint32_t*)((char*)(a0) + 2120); }

// sub_113a8c0  (orig 0x113a8c0, compare)
bool main_f_113a8c0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 2120)) != (uint64_t)(0); }

// sub_113a8d0  (orig 0x113a8d0, setter)
void main_f_113a8d0(void* a0) { *(uint32_t*)((char*)(a0) + 2124) = 0; }

// sub_113a930  (orig 0x113a930, setter)
void main_f_113a930(void* a0) { *(uint32_t*)((char*)(a0) + 2120) = 0; }

// sub_113ae90  (orig 0x113ae90, compare)
bool main_f_113ae90(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1280)) == (uint64_t)(6); }

// sub_113aea0  (orig 0x113aea0, getter)
uint8_t main_f_113aea0(void* a0) { return *(uint8_t*)((char*)(a0) + 2128); }

// sub_113af70  (orig 0x113af70, straight)
void main_f_113af70(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 2152) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 2144) = *(uint64_t*)((char*)(a1));
}

// sub_113b040  (orig 0x113b040, getter)
uint32_t main_f_113b040(void* a0) { return *(uint32_t*)((char*)(a0) + 1284); }

// sub_113b050  (orig 0x113b050, setter)
void main_f_113b050(void* a0) { *(uint32_t*)((char*)(a0) + 1284) = 0; }

// sub_113c3d0  (orig 0x113c3d0, getter)
uint32_t main_f_113c3d0(void* a0) { return *(uint32_t*)((char*)(a0) + 2200); }

// sub_113c3e0  (orig 0x113c3e0, getter)
uint8_t main_f_113c3e0(void* a0) { return *(uint8_t*)((char*)(a0) + 2196); }

// sub_113c420  (orig 0x113c420, getter)
uint8_t main_f_113c420(void* a0) { return *(uint8_t*)((char*)(a0) + 2197); }

// sub_113c430  (orig 0x113c430, getter)
uint8_t main_f_113c430(void* a0) { return *(uint8_t*)((char*)(a0) + 2204); }

// sub_113dd40  (orig 0x113dd40, ret_only)
void main_f_113dd40() {}

// sub_113dd50  (orig 0x113dd50, copy2)
void main_f_113dd50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_113dd60  (orig 0x113dd60, copy2)
void main_f_113dd60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_113ddc0  (orig 0x113ddc0, ret_only)
void main_f_113ddc0() {}

// sub_113ddd0  (orig 0x113ddd0, copy2)
void main_f_113ddd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_113dde0  (orig 0x113dde0, copy2)
void main_f_113dde0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_113e3e0  (orig 0x113e3e0, ret_only)
void main_f_113e3e0() {}

// sub_113e3f0  (orig 0x113e3f0, copy2)
void main_f_113e3f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_113e400  (orig 0x113e400, copy2)
void main_f_113e400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_113e520  (orig 0x113e520, ret_only)
void main_f_113e520() {}

// sub_113e9c0  (orig 0x113e9c0, compare)
bool main_f_113e9c0(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) == (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_113e9e0  (orig 0x113e9e0, compare)
bool main_f_113e9e0(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) != (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_113f1b0  (orig 0x113f1b0, getter)
uint8_t main_f_113f1b0(void* a0) { return *(uint8_t*)((char*)(a0) + 144); }

// sub_1142ce0  (orig 0x1142ce0, ret_only)
void main_f_1142ce0() {}

// sub_1142cf0  (orig 0x1142cf0, ret_only)
void main_f_1142cf0() {}

// sub_11467f0  (orig 0x11467f0, ret_only)
void main_f_11467f0() {}

// sub_1146860  (orig 0x1146860, ret_only)
void main_f_1146860() {}

// sub_1146890  (orig 0x1146890, copy2)
void main_f_1146890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11468a0  (orig 0x11468a0, copy2)
void main_f_11468a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1146950  (orig 0x1146950, ret_only)
void main_f_1146950() {}

// sub_11470c0  (orig 0x11470c0, ret_only)
void main_f_11470c0() {}

// sub_1148770  (orig 0x1148770, setter)
void main_f_1148770(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_1148780  (orig 0x1148780, setter)
void main_f_1148780(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_1148790  (orig 0x1148790, setter)
void main_f_1148790(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_1148c40  (orig 0x1148c40, getter)
uint32_t main_f_1148c40(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_1148fe0  (orig 0x1148fe0, ret_only)
void main_f_1148fe0() {}

// sub_1148ff0  (orig 0x1148ff0, copy2)
void main_f_1148ff0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_1149000  (orig 0x1149000, copy2)
void main_f_1149000(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_11492a0  (orig 0x11492a0, setter)
void main_f_11492a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 112) = a1; }

// sub_1149b10  (orig 0x1149b10, ret_only)
void main_f_1149b10() {}

// sub_1149b20  (orig 0x1149b20, ret_only)
void main_f_1149b20() {}

// sub_1149b30  (orig 0x1149b30, ret_only)
void main_f_1149b30() {}

// sub_1149b40  (orig 0x1149b40, ret_only)
void main_f_1149b40() {}

// sub_114b030  (orig 0x114b030, setter)
void main_f_114b030(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_114b0c0  (orig 0x114b0c0, setter)
void main_f_114b0c0(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_114b5c0  (orig 0x114b5c0, mov_ret)
uint32_t main_f_114b5c0() { return 1; }

// sub_114b720  (orig 0x114b720, setter)
void main_f_114b720(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_114b7b0  (orig 0x114b7b0, setter)
void main_f_114b7b0(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_114bc70  (orig 0x114bc70, mov_ret)
uint32_t main_f_114bc70() { return 1; }

// sub_114bde0  (orig 0x114bde0, setter)
void main_f_114bde0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_114c820  (orig 0x114c820, mov_ret)
uint32_t main_f_114c820() { return 1; }

// sub_114c980  (orig 0x114c980, setter)
void main_f_114c980(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_114d100  (orig 0x114d100, mov_ret)
uint32_t main_f_114d100() { return 1; }

// sub_114d2c0  (orig 0x114d2c0, setter)
void main_f_114d2c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_114d350  (orig 0x114d350, setter)
void main_f_114d350(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_114d860  (orig 0x114d860, mov_ret)
uint32_t main_f_114d860() { return 1; }

// sub_114d9d0  (orig 0x114d9d0, setter)
void main_f_114d9d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 48) = a1; }

// sub_114e3f0  (orig 0x114e3f0, mov_ret)
uint32_t main_f_114e3f0() { return 1; }

// sub_114e550  (orig 0x114e550, setter)
void main_f_114e550(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_114ed10  (orig 0x114ed10, mov_ret)
uint32_t main_f_114ed10() { return 1; }

// sub_114f150  (orig 0x114f150, setter)
void main_f_114f150(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 196) = a1; }

// sub_1151060  (orig 0x1151060, mov_ret)
uint32_t main_f_1151060() { return 1; }

// sub_1151110  (orig 0x1151110, getter)
uint32_t main_f_1151110(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_1151120  (orig 0x1151120, mov_ret)
uint32_t main_f_1151120() { return 1; }

// sub_1151160  (orig 0x1151160, getter)
uint32_t main_f_1151160(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_1151170  (orig 0x1151170, mov_ret)
uint32_t main_f_1151170() { return 1; }

// sub_11511b0  (orig 0x11511b0, getter)
uint32_t main_f_11511b0(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_11511c0  (orig 0x11511c0, mov_ret)
uint32_t main_f_11511c0() { return 1; }

// sub_1151200  (orig 0x1151200, getter)
uint32_t main_f_1151200(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_1151210  (orig 0x1151210, mov_ret)
uint32_t main_f_1151210() { return 1; }

// sub_1151250  (orig 0x1151250, getter)
uint32_t main_f_1151250(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_1151260  (orig 0x1151260, mov_ret)
uint32_t main_f_1151260() { return 1; }

// sub_11512a0  (orig 0x11512a0, getter)
uint32_t main_f_11512a0(void* a0) { return *(uint32_t*)((char*)(a0) + 48); }

// sub_11512b0  (orig 0x11512b0, mov_ret)
uint32_t main_f_11512b0() { return 1; }

// sub_11512f0  (orig 0x11512f0, getter)
uint32_t main_f_11512f0(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_1151300  (orig 0x1151300, mov_ret)
uint32_t main_f_1151300() { return 1; }

// sub_1151340  (orig 0x1151340, getter)
uint32_t main_f_1151340(void* a0) { return *(uint32_t*)((char*)(a0) + 196); }

// sub_1151350  (orig 0x1151350, mov_ret)
uint32_t main_f_1151350() { return 1; }

// sub_1151b00  (orig 0x1151b00, setter)
void main_f_1151b00(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 60) = a1; }

// sub_1152830  (orig 0x1152830, mov_ret)
uint32_t main_f_1152830() { return 1; }

// sub_11528e0  (orig 0x11528e0, getter)
uint32_t main_f_11528e0(void* a0) { return *(uint32_t*)((char*)(a0) + 60); }

// sub_11528f0  (orig 0x11528f0, mov_ret)
uint32_t main_f_11528f0() { return 1; }

// sub_11531c0  (orig 0x11531c0, setter)
void main_f_11531c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_1153e00  (orig 0x1153e00, mov_ret)
uint32_t main_f_1153e00() { return 1; }

// sub_1153eb0  (orig 0x1153eb0, getter)
uint32_t main_f_1153eb0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_1153ec0  (orig 0x1153ec0, mov_ret)
uint32_t main_f_1153ec0() { return 1; }

// sub_1154460  (orig 0x1154460, setter)
void main_f_1154460(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_1155050  (orig 0x1155050, mov_ret)
uint32_t main_f_1155050() { return 1; }

// sub_1155100  (orig 0x1155100, getter)
uint32_t main_f_1155100(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_1155110  (orig 0x1155110, mov_ret)
uint32_t main_f_1155110() { return 1; }

// sub_11556e0  (orig 0x11556e0, setter)
void main_f_11556e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_1155840  (orig 0x1155840, setter)
void main_f_1155840(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_1155df0  (orig 0x1155df0, mov_ret)
uint32_t main_f_1155df0() { return 1; }

// sub_1155ea0  (orig 0x1155ea0, getter)
uint32_t main_f_1155ea0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_1155eb0  (orig 0x1155eb0, mov_ret)
uint32_t main_f_1155eb0() { return 1; }

// sub_11564c0  (orig 0x11564c0, setter)
void main_f_11564c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_1156d70  (orig 0x1156d70, mov_ret)
uint32_t main_f_1156d70() { return 1; }

// sub_1156e20  (orig 0x1156e20, getter)
uint32_t main_f_1156e20(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_1156e30  (orig 0x1156e30, mov_ret)
uint32_t main_f_1156e30() { return 1; }

// sub_11575f0  (orig 0x11575f0, ret_only)
void main_f_11575f0() {}

// sub_1157600  (orig 0x1157600, getter)
uint64_t main_f_1157600(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_1157610  (orig 0x1157610, getter)
uint64_t main_f_1157610(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_115a6d0  (orig 0x115a6d0, ret_only)
void main_f_115a6d0() {}

// sub_115a6e0  (orig 0x115a6e0, getter)
uint64_t main_f_115a6e0(void* a0) { return *(uint64_t*)((char*)(a0) + 776); }

// sub_115a710  (orig 0x115a710, getter)
uint8_t main_f_115a710(void* a0) { return *(uint8_t*)((char*)(a0) + 784); }

// sub_115a720  (orig 0x115a720, setter-chain)
void main_f_115a720(void* a0, uint8_t a1) { *(uint64_t*)((char*)(a0) + 776) = 0; *(uint8_t*)((char*)(a0) + 784) = a1; }

// sub_115b9d0  (orig 0x115b9d0, getter)
uint64_t main_f_115b9d0(void* a0) { return *(uint64_t*)((char*)(a0) + 928); }

// sub_115b9e0  (orig 0x115b9e0, getter)
uint64_t main_f_115b9e0(void* a0) { return *(uint64_t*)((char*)(a0) + 936); }

// sub_115b9f0  (orig 0x115b9f0, ptr_add)
void* main_f_115b9f0(void* a0) { return (char*)a0 + 808; }

// sub_115ba00  (orig 0x115ba00, ptr_add)
void* main_f_115ba00(void* a0) { return (char*)a0 + 816; }

// sub_115ba10  (orig 0x115ba10, ptr_add)
void* main_f_115ba10(void* a0) { return (char*)a0 + 824; }

// sub_115ba20  (orig 0x115ba20, getter)
uint8_t main_f_115ba20(void* a0) { return *(uint8_t*)((char*)(a0) + 944); }

// sub_115bb40  (orig 0x115bb40, getter)
uint8_t main_f_115bb40(void* a0) { return *(uint8_t*)((char*)(a0) + 945); }

// sub_115bbb0  (orig 0x115bbb0, compare)
bool main_f_115bbb0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 948)) != (uint64_t)(0); }

// sub_115bbc0  (orig 0x115bbc0, getter)
uint32_t main_f_115bbc0(void* a0) { return *(uint32_t*)((char*)(a0) + 948); }

// sub_115bbd0  (orig 0x115bbd0, setter)
void main_f_115bbd0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 948) = a1; }

// sub_115bbe0  (orig 0x115bbe0, getter)
uint32_t main_f_115bbe0(void* a0) { return *(uint32_t*)((char*)(a0) + 952); }

// sub_115bbf0  (orig 0x115bbf0, setter)
void main_f_115bbf0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 952) = a1; }

// sub_115bc00  (orig 0x115bc00, getter)
uint32_t main_f_115bc00(void* a0) { return *(uint32_t*)((char*)(a0) + 956); }

// sub_115eff0  (orig 0x115eff0, ret_only)
void main_f_115eff0() {}

// sub_115f000  (orig 0x115f000, copy2)
void main_f_115f000(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_115f010  (orig 0x115f010, copy2)
void main_f_115f010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_115f340  (orig 0x115f340, mov_ret)
uint32_t main_f_115f340() { return 0; }

// sub_115f350  (orig 0x115f350, ret_only)
void main_f_115f350() {}

// sub_115f360  (orig 0x115f360, copy2)
void main_f_115f360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_115f370  (orig 0x115f370, copy2)
void main_f_115f370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_115f590  (orig 0x115f590, getter)
float main_f_115f590(void* a0) { return *(float*)((char*)(a0) + 24); }

// sub_1160cd0  (orig 0x1160cd0, ret_only)
void main_f_1160cd0() {}

// sub_1160ce0  (orig 0x1160ce0, ptr_add)
void* main_f_1160ce0(void* a0) { return (char*)a0 + 128; }

// sub_1160d50  (orig 0x1160d50, pair-ret)
struct pair16_f_1160d50_ { uint64_t f[2]; }; pair16_f_1160d50_ main_f_1160d50(void* a0) { return *(struct pair16_f_1160d50_ *)((char*)(a0) + 384); }

// sub_1161e90  (orig 0x1161e90, ret_only)
void main_f_1161e90() {}

// sub_1161ef0  (orig 0x1161ef0, ret_only)
void main_f_1161ef0() {}

// sub_11625a0  (orig 0x11625a0, mov_ret)
uint32_t main_f_11625a0() { return 1; }

// sub_11629a0  (orig 0x11629a0, ret_only)
void main_f_11629a0() {}

// sub_11629b0  (orig 0x11629b0, ret_only)
void main_f_11629b0() {}

// sub_1162be0  (orig 0x1162be0, ret_only)
void main_f_1162be0() {}

// sub_1162c90  (orig 0x1162c90, getter)
uint8_t main_f_1162c90(void* a0) { return *(uint8_t*)((char*)(a0) + 144); }

// sub_1163130  (orig 0x1163130, getter)
uint8_t main_f_1163130(void* a0) { return *(uint8_t*)((char*)(a0) + 160); }

// sub_1164120  (orig 0x1164120, setter)
void main_f_1164120(void* a0, float a1) { *(float*)((char*)(a0) + 184) = a1; }

// sub_1164130  (orig 0x1164130, getter)
uint64_t main_f_1164130(void* a0) { return *(uint64_t*)((char*)(a0) + 320); }

// sub_1164140  (orig 0x1164140, copy2)
void main_f_1164140(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 320) = *(uint64_t*)((char*)(a1)); }

// sub_1164150  (orig 0x1164150, getter)
uint64_t main_f_1164150(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_1165010  (orig 0x1165010, getter)
uint8_t main_f_1165010(void* a0) { return *(uint8_t*)((char*)(a0) + 104); }

// sub_1167c40  (orig 0x1167c40, getter)
uint64_t main_f_1167c40(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_1168bd0  (orig 0x1168bd0, ret_only)
void main_f_1168bd0() {}

// sub_1168d60  (orig 0x1168d60, ret_only)
void main_f_1168d60() {}

// sub_1168db0  (orig 0x1168db0, ret_only)
void main_f_1168db0() {}

// sub_1168e00  (orig 0x1168e00, copy2)
void main_f_1168e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1168e10  (orig 0x1168e10, copy2)
void main_f_1168e10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1168e30  (orig 0x1168e30, ret_only)
void main_f_1168e30() {}

// sub_1168e40  (orig 0x1168e40, copy2)
void main_f_1168e40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1168e50  (orig 0x1168e50, copy2)
void main_f_1168e50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1169720  (orig 0x1169720, ptr_add)
void* main_f_1169720(void* a0) { return (char*)a0 + 96; }

// sub_1169730  (orig 0x1169730, ptr_add)
void* main_f_1169730(void* a0) { return (char*)a0 + 144; }

// sub_1169fe0  (orig 0x1169fe0, ret_only)
void main_f_1169fe0() {}

// sub_116a210  (orig 0x116a210, copy2)
void main_f_116a210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116a220  (orig 0x116a220, copy2)
void main_f_116a220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116a380  (orig 0x116a380, ret_only)
void main_f_116a380() {}

// sub_116a620  (orig 0x116a620, copy2)
void main_f_116a620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116a630  (orig 0x116a630, copy2)
void main_f_116a630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116bb80  (orig 0x116bb80, compare)
bool main_f_116bb80(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 24)) == (uint64_t)(0); }

// sub_116ccd0  (orig 0x116ccd0, getter)
uint8_t main_f_116ccd0(void* a0) { return *(uint8_t*)((char*)(a0) + 14); }

// sub_116e7b0  (orig 0x116e7b0, ret_only)
void main_f_116e7b0() {}

// sub_116e7c0  (orig 0x116e7c0, copy2)
void main_f_116e7c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116e7d0  (orig 0x116e7d0, copy2)
void main_f_116e7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116e830  (orig 0x116e830, ret_only)
void main_f_116e830() {}

// sub_116e840  (orig 0x116e840, copy2)
void main_f_116e840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116e850  (orig 0x116e850, copy2)
void main_f_116e850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116e8f0  (orig 0x116e8f0, ret_only)
void main_f_116e8f0() {}

// sub_116e900  (orig 0x116e900, copy2)
void main_f_116e900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116e910  (orig 0x116e910, copy2)
void main_f_116e910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116e9b0  (orig 0x116e9b0, ret_only)
void main_f_116e9b0() {}

// sub_116e9c0  (orig 0x116e9c0, copy2)
void main_f_116e9c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116e9d0  (orig 0x116e9d0, copy2)
void main_f_116e9d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116eae0  (orig 0x116eae0, ret_only)
void main_f_116eae0() {}

// sub_116eaf0  (orig 0x116eaf0, copy2)
void main_f_116eaf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116eb00  (orig 0x116eb00, copy2)
void main_f_116eb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116ebc0  (orig 0x116ebc0, ret_only)
void main_f_116ebc0() {}

// sub_116ebd0  (orig 0x116ebd0, copy2)
void main_f_116ebd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116ebe0  (orig 0x116ebe0, copy2)
void main_f_116ebe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1171010  (orig 0x1171010, getter)
uint32_t main_f_1171010(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1173310  (orig 0x1173310, straight)
void main_f_1173310(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 232) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 224) = *(uint64_t*)((char*)(a1));
}

// sub_1174460  (orig 0x1174460, straight)
void main_f_1174460(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 872) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 864) = *(uint64_t*)((char*)(a1));
}

// sub_1174480  (orig 0x1174480, straight)
void main_f_1174480(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 888) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 880) = *(uint64_t*)((char*)(a1));
}

// sub_1174b20  (orig 0x1174b20, ptr_add)
void* main_f_1174b20(void* a0) { return (char*)a0 + 784; }

// sub_1174cb0  (orig 0x1174cb0, getter)
uint32_t main_f_1174cb0(void* a0) { return *(uint32_t*)((char*)(a0) + 848); }

// sub_1176260  (orig 0x1176260, ptr_add)
void* main_f_1176260(void* a0) { return (char*)a0 + 864; }

// sub_1176270  (orig 0x1176270, ptr_add)
void* main_f_1176270(void* a0) { return (char*)a0 + 880; }

// sub_1176c50  (orig 0x1176c50, ret_only)
void main_f_1176c50() {}

// sub_1176c60  (orig 0x1176c60, copy2)
void main_f_1176c60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1176c70  (orig 0x1176c70, copy2)
void main_f_1176c70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1176df0  (orig 0x1176df0, ptr_add)
void* main_f_1176df0(void* a0) { return (char*)a0 + 184; }

// sub_1178b00  (orig 0x1178b00, getter)
uint64_t main_f_1178b00(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_1178b10  (orig 0x1178b10, getter)
uint64_t main_f_1178b10(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_1178b20  (orig 0x1178b20, getter)
uint64_t main_f_1178b20(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_1179bc0  (orig 0x1179bc0, ret_only)
void main_f_1179bc0() {}

// sub_1179ec0  (orig 0x1179ec0, getter)
uint8_t main_f_1179ec0(void* a0) { return *(uint8_t*)((char*)(a0) + 88); }

// sub_1179ed0  (orig 0x1179ed0, getter)
uint8_t main_f_1179ed0(void* a0) { return *(uint8_t*)((char*)(a0) + 89); }

// sub_1179ee0  (orig 0x1179ee0, getter)
uint8_t main_f_1179ee0(void* a0) { return *(uint8_t*)((char*)(a0) + 90); }

// sub_1179ef0  (orig 0x1179ef0, getter)
uint64_t main_f_1179ef0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_1179f00  (orig 0x1179f00, getter)
uint32_t main_f_1179f00(void* a0) { return *(uint32_t*)((char*)(a0) + 104); }

// sub_1179f30  (orig 0x1179f30, straight)
void main_f_1179f30(void* a0) {
    *(uint8_t*)((char*)(a0) + 200) = (uint8_t)(1);
}

// sub_1179f40  (orig 0x1179f40, getter)
uint8_t main_f_1179f40(void* a0) { return *(uint8_t*)((char*)(a0) + 200); }

// sub_1179f50  (orig 0x1179f50, ptr_add)
void* main_f_1179f50(void* a0) { return (char*)a0 + 208; }

// sub_1179f60  (orig 0x1179f60, getter)
uint8_t main_f_1179f60(void* a0) { return *(uint8_t*)((char*)(a0) + 91); }

// sub_1179fc0  (orig 0x1179fc0, ptr_add)
void* main_f_1179fc0(void* a0) { return (char*)a0 + 120; }

// sub_117b380  (orig 0x117b380, setter)
void main_f_117b380(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 340) = a1; }

// sub_117b850  (orig 0x117b850, ret_only)
void main_f_117b850() {}

// sub_117b910  (orig 0x117b910, ret_only)
void main_f_117b910() {}

// sub_117b920  (orig 0x117b920, copy2)
void main_f_117b920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_117b930  (orig 0x117b930, copy2)
void main_f_117b930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_117bf10  (orig 0x117bf10, getter)
uint64_t main_f_117bf10(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_117dae0  (orig 0x117dae0, ret_only)
void main_f_117dae0() {}

// sub_117de60  (orig 0x117de60, ret_only)
void main_f_117de60() {}

// sub_117dec0  (orig 0x117dec0, ret_only)
void main_f_117dec0() {}

// sub_117ded0  (orig 0x117ded0, copy2)
void main_f_117ded0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_117dee0  (orig 0x117dee0, copy2)
void main_f_117dee0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_117df00  (orig 0x117df00, ret_only)
void main_f_117df00() {}

// sub_117df10  (orig 0x117df10, copy2)
void main_f_117df10(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_117df20  (orig 0x117df20, copy2)
void main_f_117df20(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_117dfa0  (orig 0x117dfa0, ret_only)
void main_f_117dfa0() {}

// sub_117dfb0  (orig 0x117dfb0, ret_only)
void main_f_117dfb0() {}

// sub_117dfc0  (orig 0x117dfc0, ret_only)
void main_f_117dfc0() {}

// sub_11802d0  (orig 0x11802d0, getter)
uint8_t main_f_11802d0(void* a0) { return *(uint8_t*)((char*)(a0) + 1040); }

// sub_1183860  (orig 0x1183860, compare)
bool main_f_1183860(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) != (uint64_t)(0); }

// sub_1186150  (orig 0x1186150, copy2)
void main_f_1186150(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 96) = *(uint64_t*)((char*)(a1)); }

// sub_118aed0  (orig 0x118aed0, ret_only)
void main_f_118aed0() {}

// sub_118aee0  (orig 0x118aee0, copy2)
void main_f_118aee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_118aef0  (orig 0x118aef0, copy2)
void main_f_118aef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_118af10  (orig 0x118af10, ret_only)
void main_f_118af10() {}

// sub_118f1b0  (orig 0x118f1b0, ret_only)
void main_f_118f1b0() {}

// sub_118f1c0  (orig 0x118f1c0, ret_only)
void main_f_118f1c0() {}

// sub_118f1d0  (orig 0x118f1d0, ret_only)
void main_f_118f1d0() {}

// sub_118f260  (orig 0x118f260, ret_only)
void main_f_118f260() {}

// sub_118f270  (orig 0x118f270, ret_only)
void main_f_118f270() {}

// sub_118f280  (orig 0x118f280, ret_only)
void main_f_118f280() {}

// sub_118f310  (orig 0x118f310, ret_only)
void main_f_118f310() {}

// sub_118f320  (orig 0x118f320, ret_only)
void main_f_118f320() {}

// sub_118f330  (orig 0x118f330, ret_only)
void main_f_118f330() {}

// sub_118f3c0  (orig 0x118f3c0, ret_only)
void main_f_118f3c0() {}

// sub_118f3d0  (orig 0x118f3d0, ret_only)
void main_f_118f3d0() {}

// sub_118f3e0  (orig 0x118f3e0, ret_only)
void main_f_118f3e0() {}

// sub_118f470  (orig 0x118f470, ret_only)
void main_f_118f470() {}

// sub_118f480  (orig 0x118f480, ret_only)
void main_f_118f480() {}

// sub_118f490  (orig 0x118f490, ret_only)
void main_f_118f490() {}

// sub_1190ad0  (orig 0x1190ad0, ret_only)
void main_f_1190ad0() {}

// sub_1190ae0  (orig 0x1190ae0, ret_only)
void main_f_1190ae0() {}

// sub_1190af0  (orig 0x1190af0, ret_only)
void main_f_1190af0() {}

// sub_1190b70  (orig 0x1190b70, ret_only)
void main_f_1190b70() {}

// sub_1190b80  (orig 0x1190b80, ret_only)
void main_f_1190b80() {}

// sub_1190b90  (orig 0x1190b90, ret_only)
void main_f_1190b90() {}

// sub_1191100  (orig 0x1191100, ret_only)
void main_f_1191100() {}

// sub_1191110  (orig 0x1191110, ret_only)
void main_f_1191110() {}

// sub_1191120  (orig 0x1191120, ret_only)
void main_f_1191120() {}

// sub_11911a0  (orig 0x11911a0, ret_only)
void main_f_11911a0() {}

// sub_11911b0  (orig 0x11911b0, ret_only)
void main_f_11911b0() {}

// sub_11911c0  (orig 0x11911c0, ret_only)
void main_f_11911c0() {}

// sub_1191360  (orig 0x1191360, ret_only)
void main_f_1191360() {}

// sub_1191370  (orig 0x1191370, ret_only)
void main_f_1191370() {}

// sub_1191380  (orig 0x1191380, ret_only)
void main_f_1191380() {}

// sub_1191490  (orig 0x1191490, ret_only)
void main_f_1191490() {}

// sub_11914a0  (orig 0x11914a0, ret_only)
void main_f_11914a0() {}

// sub_11914b0  (orig 0x11914b0, ret_only)
void main_f_11914b0() {}

// sub_1191d00  (orig 0x1191d00, ret_only)
void main_f_1191d00() {}

// sub_1191d10  (orig 0x1191d10, ret_only)
void main_f_1191d10() {}

// sub_1191d20  (orig 0x1191d20, ret_only)
void main_f_1191d20() {}

// sub_1192e30  (orig 0x1192e30, ret_only)
void main_f_1192e30() {}

// sub_1192e40  (orig 0x1192e40, ret_only)
void main_f_1192e40() {}

// sub_1192e50  (orig 0x1192e50, ret_only)
void main_f_1192e50() {}

// sub_1192e70  (orig 0x1192e70, ret_only)
void main_f_1192e70() {}

// sub_1192e80  (orig 0x1192e80, ret_only)
void main_f_1192e80() {}

// sub_1192e90  (orig 0x1192e90, ret_only)
void main_f_1192e90() {}

// sub_11961c0  (orig 0x11961c0, ret_only)
void main_f_11961c0() {}

// sub_11967f0  (orig 0x11967f0, ret_only)
void main_f_11967f0() {}

// sub_1196980  (orig 0x1196980, ret_only)
void main_f_1196980() {}

// sub_11969c0  (orig 0x11969c0, ret_only)
void main_f_11969c0() {}

// sub_11970a0  (orig 0x11970a0, mov_ret)
uint32_t main_f_11970a0() { return 1; }

// sub_11970b0  (orig 0x11970b0, mov_ret)
uint32_t main_f_11970b0() { return 1; }

// sub_11970c0  (orig 0x11970c0, ret_only)
void main_f_11970c0() {}

// sub_1198450  (orig 0x1198450, ret_only)
void main_f_1198450() {}

// sub_1198930  (orig 0x1198930, ret_only)
void main_f_1198930() {}

// sub_1199b40  (orig 0x1199b40, ret_only)
void main_f_1199b40() {}

// sub_119b9a0  (orig 0x119b9a0, ret_only)
void main_f_119b9a0() {}

// sub_119ba00  (orig 0x119ba00, ret_only)
void main_f_119ba00() {}

// sub_119ba10  (orig 0x119ba10, copy2)
void main_f_119ba10(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_119ba20  (orig 0x119ba20, copy2)
void main_f_119ba20(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_119c5e0  (orig 0x119c5e0, ret_only)
void main_f_119c5e0() {}

// sub_119d900  (orig 0x119d900, ret_only)
void main_f_119d900() {}

// sub_119d950  (orig 0x119d950, ret_only)
void main_f_119d950() {}

// sub_119d960  (orig 0x119d960, ret_only)
void main_f_119d960() {}

// sub_119d970  (orig 0x119d970, ret_only)
void main_f_119d970() {}

// sub_119d980  (orig 0x119d980, ret_only)
void main_f_119d980() {}

// sub_119e410  (orig 0x119e410, ret_only)
void main_f_119e410() {}

// sub_119e420  (orig 0x119e420, ret_only)
void main_f_119e420() {}

// sub_119e430  (orig 0x119e430, ret_only)
void main_f_119e430() {}

// sub_119f140  (orig 0x119f140, ret_only)
void main_f_119f140() {}

// sub_119fda0  (orig 0x119fda0, ret_only)
void main_f_119fda0() {}

// sub_11a0df0  (orig 0x11a0df0, ret_only)
void main_f_11a0df0() {}

// sub_11a1bf0  (orig 0x11a1bf0, ret_only)
void main_f_11a1bf0() {}

// sub_11a2c80  (orig 0x11a2c80, ret_only)
void main_f_11a2c80() {}

// sub_11a2d00  (orig 0x11a2d00, ret_only)
void main_f_11a2d00() {}

// sub_11a2d10  (orig 0x11a2d10, copy2)
void main_f_11a2d10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11a2d20  (orig 0x11a2d20, copy2)
void main_f_11a2d20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11a3c00  (orig 0x11a3c00, setter)
void main_f_11a3c00(void* a0) { *(uint32_t*)((char*)(a0) + 168) = 0; }

// sub_11a4310  (orig 0x11a4310, ret_only)
void main_f_11a4310() {}

// sub_11a49a0  (orig 0x11a49a0, ret_only)
void main_f_11a49a0() {}

// sub_11a50c0  (orig 0x11a50c0, ret_only)
void main_f_11a50c0() {}

// sub_11a5180  (orig 0x11a5180, ret_only)
void main_f_11a5180() {}

// sub_11a5190  (orig 0x11a5190, copy2)
void main_f_11a5190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11a51a0  (orig 0x11a51a0, copy2)
void main_f_11a51a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11a5b60  (orig 0x11a5b60, ret_only)
void main_f_11a5b60() {}

// sub_11a63e0  (orig 0x11a63e0, ret_only)
void main_f_11a63e0() {}

// sub_11a6490  (orig 0x11a6490, ret_only)
void main_f_11a6490() {}

// sub_11a8ca0  (orig 0x11a8ca0, ret_only)
void main_f_11a8ca0() {}

// sub_11a8d50  (orig 0x11a8d50, ret_only)
void main_f_11a8d50() {}

// sub_11a8d60  (orig 0x11a8d60, copy2)
void main_f_11a8d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11a8d70  (orig 0x11a8d70, copy2)
void main_f_11a8d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11a9820  (orig 0x11a9820, ret_only)
void main_f_11a9820() {}

// sub_11ab570  (orig 0x11ab570, ret_only)
void main_f_11ab570() {}

// sub_11ab7d0  (orig 0x11ab7d0, ret_only)
void main_f_11ab7d0() {}

// sub_11ab7e0  (orig 0x11ab7e0, copy2)
void main_f_11ab7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ab7f0  (orig 0x11ab7f0, copy2)
void main_f_11ab7f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ab850  (orig 0x11ab850, ret_only)
void main_f_11ab850() {}

// sub_11ab910  (orig 0x11ab910, ret_only)
void main_f_11ab910() {}

// sub_11b0cd0  (orig 0x11b0cd0, ret_only)
void main_f_11b0cd0() {}

// sub_11b14d0  (orig 0x11b14d0, ret_only)
void main_f_11b14d0() {}

// sub_11b1730  (orig 0x11b1730, copy2)
void main_f_11b1730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11b1740  (orig 0x11b1740, copy2)
void main_f_11b1740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11b17c0  (orig 0x11b17c0, ret_only)
void main_f_11b17c0() {}

// sub_11b17d0  (orig 0x11b17d0, copy2)
void main_f_11b17d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11b17e0  (orig 0x11b17e0, copy2)
void main_f_11b17e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11b3bb0  (orig 0x11b3bb0, ret_only)
void main_f_11b3bb0() {}

// sub_11b4f00  (orig 0x11b4f00, ret_only)
void main_f_11b4f00() {}

// sub_11b51a0  (orig 0x11b51a0, ret_only)
void main_f_11b51a0() {}

// sub_11b52a0  (orig 0x11b52a0, ret_only)
void main_f_11b52a0() {}

// sub_11b58a0  (orig 0x11b58a0, ret_only)
void main_f_11b58a0() {}

// sub_11b7a80  (orig 0x11b7a80, mov_ret)
uint32_t main_f_11b7a80() { return 0; }

// sub_11b7a90  (orig 0x11b7a90, mov_ret)
uint32_t main_f_11b7a90() { return 0; }

// sub_11b7f70  (orig 0x11b7f70, ret_only)
void main_f_11b7f70() {}

// sub_11b86c0  (orig 0x11b86c0, ret_only)
void main_f_11b86c0() {}

// sub_11b8d20  (orig 0x11b8d20, ret_only)
void main_f_11b8d20() {}

// sub_11b8d30  (orig 0x11b8d30, mov_ret)
uint32_t main_f_11b8d30() { return 1; }

// sub_11b9f00  (orig 0x11b9f00, setter-chain)
void main_f_11b9f00(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0) + 96) = a1; *(uint32_t*)((char*)(a0) + 104) = a2; }

// sub_11ba0a0  (orig 0x11ba0a0, setter)
void main_f_11ba0a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_11ba0b0  (orig 0x11ba0b0, ret_only)
void main_f_11ba0b0() {}

// sub_11ba0c0  (orig 0x11ba0c0, ret_only)
void main_f_11ba0c0() {}

// sub_11ba0d0  (orig 0x11ba0d0, ret_only)
void main_f_11ba0d0() {}

// sub_11ba150  (orig 0x11ba150, ret_only)
void main_f_11ba150() {}

// sub_11ba160  (orig 0x11ba160, copy2)
void main_f_11ba160(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ba170  (orig 0x11ba170, copy2)
void main_f_11ba170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11bb2e0  (orig 0x11bb2e0, ret_only)
void main_f_11bb2e0() {}

// sub_11bd1b0  (orig 0x11bd1b0, getter)
uint32_t main_f_11bd1b0(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_11bd1c0  (orig 0x11bd1c0, setter)
void main_f_11bd1c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 120) = a1; }

// sub_11bdac0  (orig 0x11bdac0, ret_only)
void main_f_11bdac0() {}

// sub_11bdad0  (orig 0x11bdad0, ret_only)
void main_f_11bdad0() {}

// sub_11bdae0  (orig 0x11bdae0, ret_only)
void main_f_11bdae0() {}

// sub_11bdaf0  (orig 0x11bdaf0, ret_only)
void main_f_11bdaf0() {}

// sub_11bdb00  (orig 0x11bdb00, ret_only)
void main_f_11bdb00() {}

// sub_11be780  (orig 0x11be780, ret_only)
void main_f_11be780() {}

// sub_11be9d0  (orig 0x11be9d0, ret_only)
void main_f_11be9d0() {}

// sub_11be9e0  (orig 0x11be9e0, ret_only)
void main_f_11be9e0() {}

// sub_11be9f0  (orig 0x11be9f0, ret_only)
void main_f_11be9f0() {}

// sub_11c7370  (orig 0x11c7370, ret_only)
void main_f_11c7370() {}

// sub_11c7380  (orig 0x11c7380, ret_only)
void main_f_11c7380() {}

// sub_11c7390  (orig 0x11c7390, ret_only)
void main_f_11c7390() {}

// sub_11c73a0  (orig 0x11c73a0, ret_only)
void main_f_11c73a0() {}

// sub_11c73b0  (orig 0x11c73b0, ret_only)
void main_f_11c73b0() {}

// sub_11c73c0  (orig 0x11c73c0, ret_only)
void main_f_11c73c0() {}

// sub_11c73d0  (orig 0x11c73d0, ret_only)
void main_f_11c73d0() {}

// sub_11c73e0  (orig 0x11c73e0, ret_only)
void main_f_11c73e0() {}

// sub_11c7e50  (orig 0x11c7e50, ret_only)
void main_f_11c7e50() {}

// sub_11c7e60  (orig 0x11c7e60, copy2)
void main_f_11c7e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c7e70  (orig 0x11c7e70, copy2)
void main_f_11c7e70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c8490  (orig 0x11c8490, ret_only)
void main_f_11c8490() {}

// sub_11c84a0  (orig 0x11c84a0, copy2)
void main_f_11c84a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c84b0  (orig 0x11c84b0, copy2)
void main_f_11c84b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9100  (orig 0x11c9100, ret_only)
void main_f_11c9100() {}

// sub_11c98a0  (orig 0x11c98a0, ret_only)
void main_f_11c98a0() {}

// sub_11c98b0  (orig 0x11c98b0, ret_only)
void main_f_11c98b0() {}

// sub_11c98c0  (orig 0x11c98c0, ret_only)
void main_f_11c98c0() {}

// sub_11c9a00  (orig 0x11c9a00, ret_only)
void main_f_11c9a00() {}

// sub_11c9a10  (orig 0x11c9a10, copy2)
void main_f_11c9a10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9a20  (orig 0x11c9a20, copy2)
void main_f_11c9a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9b50  (orig 0x11c9b50, ret_only)
void main_f_11c9b50() {}

// sub_11c9b60  (orig 0x11c9b60, copy2)
void main_f_11c9b60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9b70  (orig 0x11c9b70, copy2)
void main_f_11c9b70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9c60  (orig 0x11c9c60, ret_only)
void main_f_11c9c60() {}

// sub_11c9c70  (orig 0x11c9c70, copy2)
void main_f_11c9c70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9c80  (orig 0x11c9c80, copy2)
void main_f_11c9c80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9f40  (orig 0x11c9f40, ret_only)
void main_f_11c9f40() {}

// sub_11c9f60  (orig 0x11c9f60, ret_only)
void main_f_11c9f60() {}

// sub_11c9f70  (orig 0x11c9f70, copy2)
void main_f_11c9f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9f80  (orig 0x11c9f80, copy2)
void main_f_11c9f80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9f90  (orig 0x11c9f90, copy2)
void main_f_11c9f90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9fa0  (orig 0x11c9fa0, copy2)
void main_f_11c9fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9fc0  (orig 0x11c9fc0, ret_only)
void main_f_11c9fc0() {}

// sub_11c9fd0  (orig 0x11c9fd0, ret_only)
void main_f_11c9fd0() {}

// sub_11c9fe0  (orig 0x11c9fe0, ret_only)
void main_f_11c9fe0() {}

// sub_11ca180  (orig 0x11ca180, ret_only)
void main_f_11ca180() {}

// sub_11ca370  (orig 0x11ca370, ret_only)
void main_f_11ca370() {}

// sub_11ca380  (orig 0x11ca380, copy2)
void main_f_11ca380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ca390  (orig 0x11ca390, copy2)
void main_f_11ca390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ca3a0  (orig 0x11ca3a0, copy2)
void main_f_11ca3a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ca3b0  (orig 0x11ca3b0, copy2)
void main_f_11ca3b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ca500  (orig 0x11ca500, ret_only)
void main_f_11ca500() {}

// sub_11ca580  (orig 0x11ca580, ret_only)
void main_f_11ca580() {}

// sub_11ca5e0  (orig 0x11ca5e0, copy2)
void main_f_11ca5e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ca5f0  (orig 0x11ca5f0, copy2)
void main_f_11ca5f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11cc3a0  (orig 0x11cc3a0, setter)
void main_f_11cc3a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 700) = a1; }

// sub_11cd2e0  (orig 0x11cd2e0, setter)
void main_f_11cd2e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 184) = a1; }

// sub_11d18f0  (orig 0x11d18f0, getter)
float main_f_11d18f0(void* a0) { return *(float*)((char*)(a0) + 176); }

// sub_11d1900  (orig 0x11d1900, ret_only)
void main_f_11d1900() {}

// sub_11d1a90  (orig 0x11d1a90, ret_only)
void main_f_11d1a90() {}

// sub_11d1aa0  (orig 0x11d1aa0, ret_only)
void main_f_11d1aa0() {}

// sub_11d1ab0  (orig 0x11d1ab0, ret_only)
void main_f_11d1ab0() {}

// sub_11d2670  (orig 0x11d2670, getter)
uint8_t main_f_11d2670(void* a0) { return *(uint8_t*)((char*)(a0) + 129); }

// sub_11d2680  (orig 0x11d2680, getter)
uint8_t main_f_11d2680(void* a0) { return *(uint8_t*)((char*)(a0) + 130); }

// sub_11d2690  (orig 0x11d2690, getter)
uint32_t main_f_11d2690(void* a0) { return *(uint32_t*)((char*)(a0) + 124); }

// sub_11d26a0  (orig 0x11d26a0, getter)
uint8_t main_f_11d26a0(void* a0) { return *(uint8_t*)((char*)(a0) + 128); }

// sub_11d2840  (orig 0x11d2840, ret_only)
void main_f_11d2840() {}

// sub_11d2850  (orig 0x11d2850, ret_only)
void main_f_11d2850() {}

// sub_11d2860  (orig 0x11d2860, ret_only)
void main_f_11d2860() {}

// sub_11d5d10  (orig 0x11d5d10, ret_only)
void main_f_11d5d10() {}

// sub_11d7390  (orig 0x11d7390, getter)
float main_f_11d7390(void* a0) { return *(float*)((char*)(a0) + 336); }

// sub_11d73a0  (orig 0x11d73a0, getter)
uint8_t main_f_11d73a0(void* a0) { return *(uint8_t*)((char*)(a0) + 548); }

// sub_11d7630  (orig 0x11d7630, ret_only)
void main_f_11d7630() {}

// sub_11d7750  (orig 0x11d7750, ret_only)
void main_f_11d7750() {}

// sub_11d7760  (orig 0x11d7760, copy2)
void main_f_11d7760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11d7770  (orig 0x11d7770, copy2)
void main_f_11d7770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11d7e40  (orig 0x11d7e40, ret_only)
void main_f_11d7e40() {}

// sub_11db8d0  (orig 0x11db8d0, ret_only)
void main_f_11db8d0() {}

// sub_11e1220  (orig 0x11e1220, ret_only)
void main_f_11e1220() {}

// sub_11e1ea0  (orig 0x11e1ea0, ret_only)
void main_f_11e1ea0() {}

// sub_11e1eb0  (orig 0x11e1eb0, copy2)
void main_f_11e1eb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e1ec0  (orig 0x11e1ec0, copy2)
void main_f_11e1ec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e1f30  (orig 0x11e1f30, ret_only)
void main_f_11e1f30() {}

// sub_11e1f40  (orig 0x11e1f40, copy2)
void main_f_11e1f40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e1f50  (orig 0x11e1f50, copy2)
void main_f_11e1f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e2510  (orig 0x11e2510, ret_only)
void main_f_11e2510() {}

// sub_11e2570  (orig 0x11e2570, ret_only)
void main_f_11e2570() {}

// sub_11e2580  (orig 0x11e2580, copy2)
void main_f_11e2580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e2590  (orig 0x11e2590, copy2)
void main_f_11e2590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e2670  (orig 0x11e2670, ret_only)
void main_f_11e2670() {}

// sub_11e26c0  (orig 0x11e26c0, copy2)
void main_f_11e26c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e26d0  (orig 0x11e26d0, copy2)
void main_f_11e26d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e43e0  (orig 0x11e43e0, ret_only)
void main_f_11e43e0() {}

// sub_11e43f0  (orig 0x11e43f0, ret_only)
void main_f_11e43f0() {}

// sub_11e4400  (orig 0x11e4400, ret_only)
void main_f_11e4400() {}

// sub_11e4410  (orig 0x11e4410, ret_only)
void main_f_11e4410() {}

// sub_11e44f0  (orig 0x11e44f0, ret_only)
void main_f_11e44f0() {}

// sub_11e4580  (orig 0x11e4580, ret_only)
void main_f_11e4580() {}

// sub_11e45c0  (orig 0x11e45c0, ret_only)
void main_f_11e45c0() {}

// sub_11e45d0  (orig 0x11e45d0, copy2)
void main_f_11e45d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e45e0  (orig 0x11e45e0, copy2)
void main_f_11e45e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e45f0  (orig 0x11e45f0, ret_only)
void main_f_11e45f0() {}

// sub_11e4600  (orig 0x11e4600, ret_only)
void main_f_11e4600() {}

// sub_11e4610  (orig 0x11e4610, ret_only)
void main_f_11e4610() {}

// sub_11e4620  (orig 0x11e4620, ret_only)
void main_f_11e4620() {}

// sub_11e46d0  (orig 0x11e46d0, ret_only)
void main_f_11e46d0() {}

// sub_11e46e0  (orig 0x11e46e0, copy2)
void main_f_11e46e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e46f0  (orig 0x11e46f0, copy2)
void main_f_11e46f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e4c40  (orig 0x11e4c40, setter)
void main_f_11e4c40(void* a0, float a1) { *(float*)((char*)(a0) + 276) = a1; }

// sub_11e64c0  (orig 0x11e64c0, ret_only)
void main_f_11e64c0() {}

// sub_11e7db0  (orig 0x11e7db0, ret_only)
void main_f_11e7db0() {}

// sub_11ea0e0  (orig 0x11ea0e0, ret_only)
void main_f_11ea0e0() {}

// sub_11ea100  (orig 0x11ea100, ret_only)
void main_f_11ea100() {}

// sub_11ea110  (orig 0x11ea110, copy2)
void main_f_11ea110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea120  (orig 0x11ea120, copy2)
void main_f_11ea120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea130  (orig 0x11ea130, copy2)
void main_f_11ea130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea140  (orig 0x11ea140, copy2)
void main_f_11ea140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea190  (orig 0x11ea190, ret_only)
void main_f_11ea190() {}

// sub_11ea1a0  (orig 0x11ea1a0, copy2)
void main_f_11ea1a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea1b0  (orig 0x11ea1b0, copy2)
void main_f_11ea1b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea2e0  (orig 0x11ea2e0, ret_only)
void main_f_11ea2e0() {}

// sub_11ea300  (orig 0x11ea300, ret_only)
void main_f_11ea300() {}

// sub_11ea310  (orig 0x11ea310, copy2)
void main_f_11ea310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea320  (orig 0x11ea320, copy2)
void main_f_11ea320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea340  (orig 0x11ea340, ret_only)
void main_f_11ea340() {}

// sub_11ea350  (orig 0x11ea350, copy2)
void main_f_11ea350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea360  (orig 0x11ea360, copy2)
void main_f_11ea360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea370  (orig 0x11ea370, copy2)
void main_f_11ea370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea380  (orig 0x11ea380, copy2)
void main_f_11ea380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea650  (orig 0x11ea650, ret_only)
void main_f_11ea650() {}

// sub_11ea700  (orig 0x11ea700, ret_only)
void main_f_11ea700() {}

// sub_11ea710  (orig 0x11ea710, copy2)
void main_f_11ea710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea720  (orig 0x11ea720, copy2)
void main_f_11ea720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea730  (orig 0x11ea730, copy2)
void main_f_11ea730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea740  (orig 0x11ea740, copy2)
void main_f_11ea740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea7d0  (orig 0x11ea7d0, ret_only)
void main_f_11ea7d0() {}

// sub_11ea7f0  (orig 0x11ea7f0, ret_only)
void main_f_11ea7f0() {}

// sub_11ea800  (orig 0x11ea800, copy2)
void main_f_11ea800(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea810  (orig 0x11ea810, copy2)
void main_f_11ea810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea820  (orig 0x11ea820, copy2)
void main_f_11ea820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea830  (orig 0x11ea830, copy2)
void main_f_11ea830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea880  (orig 0x11ea880, ret_only)
void main_f_11ea880() {}

// sub_11ea890  (orig 0x11ea890, copy2)
void main_f_11ea890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea8a0  (orig 0x11ea8a0, copy2)
void main_f_11ea8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea8c0  (orig 0x11ea8c0, ret_only)
void main_f_11ea8c0() {}

// sub_11ea8d0  (orig 0x11ea8d0, copy2)
void main_f_11ea8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea8e0  (orig 0x11ea8e0, copy2)
void main_f_11ea8e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebbe0  (orig 0x11ebbe0, ret_only)
void main_f_11ebbe0() {}

// sub_11ebbf0  (orig 0x11ebbf0, copy2)
void main_f_11ebbf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebc00  (orig 0x11ebc00, copy2)
void main_f_11ebc00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebc20  (orig 0x11ebc20, ret_only)
void main_f_11ebc20() {}

// sub_11ebc30  (orig 0x11ebc30, copy2)
void main_f_11ebc30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebc40  (orig 0x11ebc40, copy2)
void main_f_11ebc40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebd20  (orig 0x11ebd20, ret_only)
void main_f_11ebd20() {}

// sub_11ebd30  (orig 0x11ebd30, copy2)
void main_f_11ebd30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebd40  (orig 0x11ebd40, copy2)
void main_f_11ebd40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebd90  (orig 0x11ebd90, ret_only)
void main_f_11ebd90() {}

// sub_11ebda0  (orig 0x11ebda0, copy2)
void main_f_11ebda0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebdb0  (orig 0x11ebdb0, copy2)
void main_f_11ebdb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebeb0  (orig 0x11ebeb0, ret_only)
void main_f_11ebeb0() {}

// sub_11ebec0  (orig 0x11ebec0, copy2)
void main_f_11ebec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebed0  (orig 0x11ebed0, copy2)
void main_f_11ebed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebee0  (orig 0x11ebee0, ret_only)
void main_f_11ebee0() {}

// sub_11ebef0  (orig 0x11ebef0, ret_only)
void main_f_11ebef0() {}

// sub_11ebf00  (orig 0x11ebf00, ret_only)
void main_f_11ebf00() {}

// sub_11ebf10  (orig 0x11ebf10, ret_only)
void main_f_11ebf10() {}

// sub_11ee270  (orig 0x11ee270, ret_only)
void main_f_11ee270() {}

// sub_11ee280  (orig 0x11ee280, copy2)
void main_f_11ee280(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee290  (orig 0x11ee290, copy2)
void main_f_11ee290(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee2b0  (orig 0x11ee2b0, ret_only)
void main_f_11ee2b0() {}

// sub_11ee2c0  (orig 0x11ee2c0, copy2)
void main_f_11ee2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee2d0  (orig 0x11ee2d0, copy2)
void main_f_11ee2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee2f0  (orig 0x11ee2f0, ret_only)
void main_f_11ee2f0() {}

// sub_11ee300  (orig 0x11ee300, copy2)
void main_f_11ee300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee310  (orig 0x11ee310, copy2)
void main_f_11ee310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee360  (orig 0x11ee360, ret_only)
void main_f_11ee360() {}

// sub_11ee370  (orig 0x11ee370, copy2)
void main_f_11ee370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee380  (orig 0x11ee380, copy2)
void main_f_11ee380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee4b0  (orig 0x11ee4b0, ret_only)
void main_f_11ee4b0() {}

// sub_11ee4c0  (orig 0x11ee4c0, copy2)
void main_f_11ee4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee4d0  (orig 0x11ee4d0, copy2)
void main_f_11ee4d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee4e0  (orig 0x11ee4e0, ret_only)
void main_f_11ee4e0() {}

// sub_11ee4f0  (orig 0x11ee4f0, ret_only)
void main_f_11ee4f0() {}

// sub_11ee500  (orig 0x11ee500, ret_only)
void main_f_11ee500() {}

// sub_11ee510  (orig 0x11ee510, ret_only)
void main_f_11ee510() {}

// sub_11eebf0  (orig 0x11eebf0, ret_only)
void main_f_11eebf0() {}

// sub_11f1630  (orig 0x11f1630, ret_only)
void main_f_11f1630() {}

// sub_11f1650  (orig 0x11f1650, ret_only)
void main_f_11f1650() {}

// sub_11f1660  (orig 0x11f1660, copy2)
void main_f_11f1660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1670  (orig 0x11f1670, copy2)
void main_f_11f1670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1680  (orig 0x11f1680, copy2)
void main_f_11f1680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1690  (orig 0x11f1690, copy2)
void main_f_11f1690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f16e0  (orig 0x11f16e0, ret_only)
void main_f_11f16e0() {}

// sub_11f16f0  (orig 0x11f16f0, copy2)
void main_f_11f16f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1700  (orig 0x11f1700, copy2)
void main_f_11f1700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1840  (orig 0x11f1840, ret_only)
void main_f_11f1840() {}

// sub_11f18f0  (orig 0x11f18f0, ret_only)
void main_f_11f18f0() {}

// sub_11f1910  (orig 0x11f1910, ret_only)
void main_f_11f1910() {}

// sub_11f1920  (orig 0x11f1920, copy2)
void main_f_11f1920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1930  (orig 0x11f1930, copy2)
void main_f_11f1930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1940  (orig 0x11f1940, copy2)
void main_f_11f1940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1950  (orig 0x11f1950, copy2)
void main_f_11f1950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1960  (orig 0x11f1960, copy2)
void main_f_11f1960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1970  (orig 0x11f1970, copy2)
void main_f_11f1970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1990  (orig 0x11f1990, ret_only)
void main_f_11f1990() {}

// sub_11f19a0  (orig 0x11f19a0, copy2)
void main_f_11f19a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f19b0  (orig 0x11f19b0, copy2)
void main_f_11f19b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1a40  (orig 0x11f1a40, ret_only)
void main_f_11f1a40() {}

// sub_11f1a50  (orig 0x11f1a50, copy2)
void main_f_11f1a50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1a60  (orig 0x11f1a60, copy2)
void main_f_11f1a60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1b20  (orig 0x11f1b20, ret_only)
void main_f_11f1b20() {}

// sub_11f1b30  (orig 0x11f1b30, copy2)
void main_f_11f1b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1b40  (orig 0x11f1b40, copy2)
void main_f_11f1b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1b90  (orig 0x11f1b90, ret_only)
void main_f_11f1b90() {}

// sub_11f1ba0  (orig 0x11f1ba0, copy2)
void main_f_11f1ba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1bb0  (orig 0x11f1bb0, copy2)
void main_f_11f1bb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f4670  (orig 0x11f4670, ret_only)
void main_f_11f4670() {}

// sub_11f4680  (orig 0x11f4680, ret_only)
void main_f_11f4680() {}

// sub_11f4900  (orig 0x11f4900, mov_ret)
uint32_t main_f_11f4900() { return 80; }

// sub_11f4a70  (orig 0x11f4a70, ret_only)
void main_f_11f4a70() {}

// sub_11f4a80  (orig 0x11f4a80, ret_only)
void main_f_11f4a80() {}

// sub_11f4a90  (orig 0x11f4a90, ret_only)
void main_f_11f4a90() {}

// sub_11f4aa0  (orig 0x11f4aa0, ret_only)
void main_f_11f4aa0() {}

// sub_11f4ab0  (orig 0x11f4ab0, ret_only)
void main_f_11f4ab0() {}

// sub_11f4ac0  (orig 0x11f4ac0, ret_only)
void main_f_11f4ac0() {}

// sub_11f4e30  (orig 0x11f4e30, mov_ret)
uint32_t main_f_11f4e30() { return 80; }

// sub_11f4e40  (orig 0x11f4e40, ret_only)
void main_f_11f4e40() {}

// sub_11f4e50  (orig 0x11f4e50, ret_only)
void main_f_11f4e50() {}

// sub_11f4e60  (orig 0x11f4e60, ret_only)
void main_f_11f4e60() {}

// sub_11f5da0  (orig 0x11f5da0, ret_only)
void main_f_11f5da0() {}

// sub_11f5e50  (orig 0x11f5e50, ret_only)
void main_f_11f5e50() {}

// sub_11f5f80  (orig 0x11f5f80, ret_only)
void main_f_11f5f80() {}

// sub_11f6320  (orig 0x11f6320, getter)
uint64_t main_f_11f6320(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_11f65d0  (orig 0x11f65d0, ret_only)
void main_f_11f65d0() {}

// sub_11f6e50  (orig 0x11f6e50, ret_only)
void main_f_11f6e50() {}

// sub_11f6e60  (orig 0x11f6e60, copy2)
void main_f_11f6e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f6e70  (orig 0x11f6e70, copy2)
void main_f_11f6e70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f78d0  (orig 0x11f78d0, ret_only)
void main_f_11f78d0() {}

// sub_11f7970  (orig 0x11f7970, ret_only)
void main_f_11f7970() {}

// sub_11f7980  (orig 0x11f7980, copy2)
void main_f_11f7980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f7990  (orig 0x11f7990, copy2)
void main_f_11f7990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f8600  (orig 0x11f8600, ret_only)
void main_f_11f8600() {}

// sub_11fb1f0  (orig 0x11fb1f0, ret_only)
void main_f_11fb1f0() {}

// sub_11fb200  (orig 0x11fb200, copy2)
void main_f_11fb200(void* a0, void* a1) { *(uint16_t*)((char*)(a1)) = *(uint16_t*)((char*)(a0)); }

// sub_11fb210  (orig 0x11fb210, copy2)
void main_f_11fb210(void* a0, void* a1) { *(uint16_t*)((char*)(a1)) = *(uint16_t*)((char*)(a0)); }

// sub_11fb310  (orig 0x11fb310, ret_only)
void main_f_11fb310() {}

// sub_11fb320  (orig 0x11fb320, copy2)
void main_f_11fb320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11fb330  (orig 0x11fb330, copy2)
void main_f_11fb330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11fb4d0  (orig 0x11fb4d0, ret_only)
void main_f_11fb4d0() {}

// sub_11fcfc0  (orig 0x11fcfc0, ret_only)
void main_f_11fcfc0() {}

// sub_11fd460  (orig 0x11fd460, ret_only)
void main_f_11fd460() {}

// sub_11fd470  (orig 0x11fd470, copy2)
void main_f_11fd470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11fd480  (orig 0x11fd480, copy2)
void main_f_11fd480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11fd780  (orig 0x11fd780, ret_only)
void main_f_11fd780() {}

// sub_11fd790  (orig 0x11fd790, ret_only)
void main_f_11fd790() {}

// sub_11fd7a0  (orig 0x11fd7a0, ret_only)
void main_f_11fd7a0() {}

// sub_11fd7c0  (orig 0x11fd7c0, ret_only)
void main_f_11fd7c0() {}

// sub_11fd7d0  (orig 0x11fd7d0, copy2)
void main_f_11fd7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11fd7e0  (orig 0x11fd7e0, copy2)
void main_f_11fd7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11fd980  (orig 0x11fd980, ret_only)
void main_f_11fd980() {}

// sub_11fd990  (orig 0x11fd990, ret_only)
void main_f_11fd990() {}

// sub_11fd9a0  (orig 0x11fd9a0, ret_only)
void main_f_11fd9a0() {}

// sub_11fdaa0  (orig 0x11fdaa0, ret_only)
void main_f_11fdaa0() {}

// sub_11fefe0  (orig 0x11fefe0, ret_only)
void main_f_11fefe0() {}

// sub_1200970  (orig 0x1200970, ret_only)
void main_f_1200970() {}

// sub_1200980  (orig 0x1200980, copy2)
void main_f_1200980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1200990  (orig 0x1200990, copy2)
void main_f_1200990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1200c70  (orig 0x1200c70, ret_only)
void main_f_1200c70() {}

// sub_1201360  (orig 0x1201360, ret_only)
void main_f_1201360() {}

// sub_12013f0  (orig 0x12013f0, ret_only)
void main_f_12013f0() {}

// sub_1201500  (orig 0x1201500, ret_only)
void main_f_1201500() {}

// sub_1201b00  (orig 0x1201b00, ret_only)
void main_f_1201b00() {}

// sub_1201dd0  (orig 0x1201dd0, ret_only)
void main_f_1201dd0() {}

// sub_1205500  (orig 0x1205500, ret_only)
void main_f_1205500() {}

// sub_1205510  (orig 0x1205510, copy2)
void main_f_1205510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1205520  (orig 0x1205520, copy2)
void main_f_1205520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120ae90  (orig 0x120ae90, ret_only)
void main_f_120ae90() {}

// sub_120aea0  (orig 0x120aea0, ret_only)
void main_f_120aea0() {}

// sub_120b0f0  (orig 0x120b0f0, mov_ret)
uint32_t main_f_120b0f0() { return 70; }

// sub_120b160  (orig 0x120b160, ret_only)
void main_f_120b160() {}

// sub_120b170  (orig 0x120b170, ret_only)
void main_f_120b170() {}

// sub_120b180  (orig 0x120b180, ret_only)
void main_f_120b180() {}

// sub_120b190  (orig 0x120b190, ret_only)
void main_f_120b190() {}

// sub_120b1a0  (orig 0x120b1a0, ret_only)
void main_f_120b1a0() {}

// sub_120b1b0  (orig 0x120b1b0, ret_only)
void main_f_120b1b0() {}

// sub_120b540  (orig 0x120b540, mov_ret)
uint32_t main_f_120b540() { return 70; }

// sub_120b550  (orig 0x120b550, ret_only)
void main_f_120b550() {}

// sub_120b560  (orig 0x120b560, ret_only)
void main_f_120b560() {}

// sub_120c500  (orig 0x120c500, ret_only)
void main_f_120c500() {}

// sub_120c5b0  (orig 0x120c5b0, ret_only)
void main_f_120c5b0() {}

// sub_120c6e0  (orig 0x120c6e0, ret_only)
void main_f_120c6e0() {}

// sub_120cba0  (orig 0x120cba0, getter)
uint64_t main_f_120cba0(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_120ce50  (orig 0x120ce50, ret_only)
void main_f_120ce50() {}

// sub_120ce60  (orig 0x120ce60, copy2)
void main_f_120ce60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120ce70  (orig 0x120ce70, copy2)
void main_f_120ce70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120ce80  (orig 0x120ce80, mov_ret)
uint32_t main_f_120ce80() { return 0; }

// sub_120ce90  (orig 0x120ce90, ret_only)
void main_f_120ce90() {}

// sub_120cea0  (orig 0x120cea0, ret_only)
void main_f_120cea0() {}

// sub_120ceb0  (orig 0x120ceb0, ret_only)
void main_f_120ceb0() {}

// sub_120cf50  (orig 0x120cf50, ret_only)
void main_f_120cf50() {}

// sub_120cf60  (orig 0x120cf60, copy2)
void main_f_120cf60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120cf70  (orig 0x120cf70, copy2)
void main_f_120cf70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120cf90  (orig 0x120cf90, ret_only)
void main_f_120cf90() {}

// sub_120cfa0  (orig 0x120cfa0, copy2)
void main_f_120cfa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120cfb0  (orig 0x120cfb0, copy2)
void main_f_120cfb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d080  (orig 0x120d080, ret_only)
void main_f_120d080() {}

// sub_120d090  (orig 0x120d090, copy2)
void main_f_120d090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d0a0  (orig 0x120d0a0, copy2)
void main_f_120d0a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d0c0  (orig 0x120d0c0, ret_only)
void main_f_120d0c0() {}

// sub_120d0d0  (orig 0x120d0d0, copy2)
void main_f_120d0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d0e0  (orig 0x120d0e0, copy2)
void main_f_120d0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d100  (orig 0x120d100, ret_only)
void main_f_120d100() {}

// sub_120d110  (orig 0x120d110, copy2)
void main_f_120d110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d120  (orig 0x120d120, copy2)
void main_f_120d120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d1f0  (orig 0x120d1f0, ret_only)
void main_f_120d1f0() {}

// sub_120d200  (orig 0x120d200, copy2)
void main_f_120d200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d210  (orig 0x120d210, copy2)
void main_f_120d210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d8c0  (orig 0x120d8c0, ret_only)
void main_f_120d8c0() {}

// sub_120d8d0  (orig 0x120d8d0, copy2)
void main_f_120d8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d8e0  (orig 0x120d8e0, copy2)
void main_f_120d8e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d910  (orig 0x120d910, ret_only)
void main_f_120d910() {}

// sub_120d920  (orig 0x120d920, copy2)
void main_f_120d920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d930  (orig 0x120d930, copy2)
void main_f_120d930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d940  (orig 0x120d940, mov_ret)
uint32_t main_f_120d940() { return 0; }

// sub_120d950  (orig 0x120d950, ret_only)
void main_f_120d950() {}

// sub_120d960  (orig 0x120d960, ret_only)
void main_f_120d960() {}

// sub_120d970  (orig 0x120d970, ret_only)
void main_f_120d970() {}

// sub_120dad0  (orig 0x120dad0, ret_only)
void main_f_120dad0() {}

// sub_120dbf0  (orig 0x120dbf0, ret_only)
void main_f_120dbf0() {}

// sub_120dc00  (orig 0x120dc00, copy2)
void main_f_120dc00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120dc10  (orig 0x120dc10, copy2)
void main_f_120dc10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120dce0  (orig 0x120dce0, ret_only)
void main_f_120dce0() {}

// sub_120dcf0  (orig 0x120dcf0, copy2)
void main_f_120dcf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120dd00  (orig 0x120dd00, copy2)
void main_f_120dd00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120dd50  (orig 0x120dd50, ret_only)
void main_f_120dd50() {}

// sub_120dd60  (orig 0x120dd60, ret_only)
void main_f_120dd60() {}

// sub_120dd70  (orig 0x120dd70, ret_only)
void main_f_120dd70() {}

// sub_120de30  (orig 0x120de30, ret_only)
void main_f_120de30() {}

// sub_120de40  (orig 0x120de40, copy2)
void main_f_120de40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120de50  (orig 0x120de50, copy2)
void main_f_120de50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120f360  (orig 0x120f360, ret_only)
void main_f_120f360() {}

// sub_120f4d0  (orig 0x120f4d0, copy2)
void main_f_120f4d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120f4e0  (orig 0x120f4e0, copy2)
void main_f_120f4e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120f9e0  (orig 0x120f9e0, setter)
void main_f_120f9e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 112) = a1; }

// sub_1210230  (orig 0x1210230, getter)
uint32_t main_f_1210230(void* a0) { return *(uint32_t*)((char*)(a0) + 320); }

// sub_1210240  (orig 0x1210240, ptr_add)
void* main_f_1210240(void* a0) { return (char*)a0 + 328; }

// sub_1210f50  (orig 0x1210f50, ret_only)
void main_f_1210f50() {}

// sub_1210f60  (orig 0x1210f60, copy2)
void main_f_1210f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1210f70  (orig 0x1210f70, copy2)
void main_f_1210f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1210f90  (orig 0x1210f90, ret_only)
void main_f_1210f90() {}

// sub_1210fa0  (orig 0x1210fa0, copy2)
void main_f_1210fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1210fb0  (orig 0x1210fb0, copy2)
void main_f_1210fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12121f0  (orig 0x12121f0, ret_only)
void main_f_12121f0() {}

// sub_1213ce0  (orig 0x1213ce0, ret_only)
void main_f_1213ce0() {}

// sub_1215350  (orig 0x1215350, getter)
uint32_t main_f_1215350(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_1215d60  (orig 0x1215d60, getter)
uint8_t main_f_1215d60(void* a0) { return *(uint8_t*)((char*)(a0) + 160); }

// sub_1216490  (orig 0x1216490, getter)
uint64_t main_f_1216490(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_1216540  (orig 0x1216540, ret_only)
void main_f_1216540() {}

// sub_12165b0  (orig 0x12165b0, getter-chain)
uint64_t main_f_12165b0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 104))) + 152); }

// sub_1216a50  (orig 0x1216a50, ret_only)
void main_f_1216a50() {}

// sub_1216a60  (orig 0x1216a60, ret_only)
void main_f_1216a60() {}

// sub_1216ff0  (orig 0x1216ff0, ret_only)
void main_f_1216ff0() {}

// sub_1217000  (orig 0x1217000, ret_only)
void main_f_1217000() {}

// sub_1217010  (orig 0x1217010, ret_only)
void main_f_1217010() {}

// sub_1217020  (orig 0x1217020, ret_only)
void main_f_1217020() {}

// sub_1217030  (orig 0x1217030, ret_only)
void main_f_1217030() {}

// sub_1217040  (orig 0x1217040, ret_only)
void main_f_1217040() {}

// sub_1217050  (orig 0x1217050, ret_only)
void main_f_1217050() {}

// sub_1217440  (orig 0x1217440, ret_only)
void main_f_1217440() {}

// sub_1217450  (orig 0x1217450, copy2)
void main_f_1217450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1217460  (orig 0x1217460, copy2)
void main_f_1217460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1217480  (orig 0x1217480, ret_only)
void main_f_1217480() {}

// sub_1217490  (orig 0x1217490, ret_only)
void main_f_1217490() {}

// sub_12174a0  (orig 0x12174a0, ret_only)
void main_f_12174a0() {}

// sub_1217500  (orig 0x1217500, ret_only)
void main_f_1217500() {}

// sub_1217510  (orig 0x1217510, copy2)
void main_f_1217510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1217520  (orig 0x1217520, copy2)
void main_f_1217520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_121e350  (orig 0x121e350, ret_only)
void main_f_121e350() {}

// sub_121e360  (orig 0x121e360, ret_only)
void main_f_121e360() {}

// sub_121e370  (orig 0x121e370, ret_only)
void main_f_121e370() {}

// sub_121e380  (orig 0x121e380, ret_only)
void main_f_121e380() {}

// sub_121e430  (orig 0x121e430, ret_only)
void main_f_121e430() {}

// sub_121f8c0  (orig 0x121f8c0, ret_only)
void main_f_121f8c0() {}

// sub_121fe80  (orig 0x121fe80, ret_only)
void main_f_121fe80() {}

// sub_121fec0  (orig 0x121fec0, ret_only)
void main_f_121fec0() {}

// sub_121fed0  (orig 0x121fed0, copy2)
void main_f_121fed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_121fee0  (orig 0x121fee0, copy2)
void main_f_121fee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_121ff00  (orig 0x121ff00, ret_only)
void main_f_121ff00() {}

// sub_121ff10  (orig 0x121ff10, copy2)
void main_f_121ff10(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_121ff20  (orig 0x121ff20, copy2)
void main_f_121ff20(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_121ff40  (orig 0x121ff40, ret_only)
void main_f_121ff40() {}

// sub_121ff50  (orig 0x121ff50, copy2)
void main_f_121ff50(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_121ff60  (orig 0x121ff60, copy2)
void main_f_121ff60(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_12201f0  (orig 0x12201f0, ret_only)
void main_f_12201f0() {}

// sub_1220200  (orig 0x1220200, copy2)
void main_f_1220200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1220210  (orig 0x1220210, copy2)
void main_f_1220210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12202c0  (orig 0x12202c0, ret_only)
void main_f_12202c0() {}

// sub_12202d0  (orig 0x12202d0, copy2)
void main_f_12202d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12202e0  (orig 0x12202e0, copy2)
void main_f_12202e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1220b30  (orig 0x1220b30, ret_only)
void main_f_1220b30() {}

// sub_1220b40  (orig 0x1220b40, ret_only)
void main_f_1220b40() {}

// sub_1220b50  (orig 0x1220b50, ret_only)
void main_f_1220b50() {}

// sub_1220bf0  (orig 0x1220bf0, ret_only)
void main_f_1220bf0() {}

// sub_1220e40  (orig 0x1220e40, ret_only)
void main_f_1220e40() {}

// sub_1220ee0  (orig 0x1220ee0, ret_only)
void main_f_1220ee0() {}

// sub_1220ef0  (orig 0x1220ef0, copy2)
void main_f_1220ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1220f00  (orig 0x1220f00, copy2)
void main_f_1220f00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1220f20  (orig 0x1220f20, ret_only)
void main_f_1220f20() {}

// sub_1220f30  (orig 0x1220f30, ret_only)
void main_f_1220f30() {}

// sub_1220f40  (orig 0x1220f40, ret_only)
void main_f_1220f40() {}

// sub_1222660  (orig 0x1222660, ret_only)
void main_f_1222660() {}

// sub_1222670  (orig 0x1222670, copy2)
void main_f_1222670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1222680  (orig 0x1222680, copy2)
void main_f_1222680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1222820  (orig 0x1222820, ret_only)
void main_f_1222820() {}

// sub_1222a10  (orig 0x1222a10, ret_only)
void main_f_1222a10() {}

// sub_1222a20  (orig 0x1222a20, copy2)
void main_f_1222a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1222a30  (orig 0x1222a30, copy2)
void main_f_1222a30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1222a40  (orig 0x1222a40, copy2)
void main_f_1222a40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1222a50  (orig 0x1222a50, copy2)
void main_f_1222a50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1222ab0  (orig 0x1222ab0, ret_only)
void main_f_1222ab0() {}

// sub_1222ac0  (orig 0x1222ac0, copy2)
void main_f_1222ac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1222ad0  (orig 0x1222ad0, copy2)
void main_f_1222ad0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1226590  (orig 0x1226590, ret_only)
void main_f_1226590() {}

// sub_122a380  (orig 0x122a380, ret_only)
void main_f_122a380() {}

// sub_122a3e0  (orig 0x122a3e0, ret_only)
void main_f_122a3e0() {}

// sub_122a3f0  (orig 0x122a3f0, ret_only)
void main_f_122a3f0() {}

// sub_122a400  (orig 0x122a400, ret_only)
void main_f_122a400() {}

// sub_122a420  (orig 0x122a420, ret_only)
void main_f_122a420() {}

// sub_122a430  (orig 0x122a430, ret_only)
void main_f_122a430() {}

// sub_122a440  (orig 0x122a440, ret_only)
void main_f_122a440() {}

// sub_122a5e0  (orig 0x122a5e0, ret_only)
void main_f_122a5e0() {}

// sub_122a870  (orig 0x122a870, ret_only)
void main_f_122a870() {}

// sub_122a880  (orig 0x122a880, copy2)
void main_f_122a880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122a890  (orig 0x122a890, copy2)
void main_f_122a890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122a8a0  (orig 0x122a8a0, copy2)
void main_f_122a8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122a8b0  (orig 0x122a8b0, copy2)
void main_f_122a8b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122a8d0  (orig 0x122a8d0, ret_only)
void main_f_122a8d0() {}

// sub_122a8e0  (orig 0x122a8e0, ret_only)
void main_f_122a8e0() {}

// sub_122a8f0  (orig 0x122a8f0, ret_only)
void main_f_122a8f0() {}

// sub_122a940  (orig 0x122a940, ret_only)
void main_f_122a940() {}

// sub_122a950  (orig 0x122a950, ret_only)
void main_f_122a950() {}

// sub_122a960  (orig 0x122a960, ret_only)
void main_f_122a960() {}

// sub_122a9c0  (orig 0x122a9c0, ret_only)
void main_f_122a9c0() {}

// sub_122a9d0  (orig 0x122a9d0, copy2)
void main_f_122a9d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122a9e0  (orig 0x122a9e0, copy2)
void main_f_122a9e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122aa10  (orig 0x122aa10, ret_only)
void main_f_122aa10() {}

// sub_122aa20  (orig 0x122aa20, copy2)
void main_f_122aa20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122aa30  (orig 0x122aa30, copy2)
void main_f_122aa30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122ac10  (orig 0x122ac10, ret_only)
void main_f_122ac10() {}

// sub_122ae30  (orig 0x122ae30, copy2)
void main_f_122ae30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122ae40  (orig 0x122ae40, copy2)
void main_f_122ae40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b090  (orig 0x122b090, ret_only)
void main_f_122b090() {}

// sub_122b1e0  (orig 0x122b1e0, ret_only)
void main_f_122b1e0() {}

// sub_122b1f0  (orig 0x122b1f0, copy2)
void main_f_122b1f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b200  (orig 0x122b200, copy2)
void main_f_122b200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b4f0  (orig 0x122b4f0, ret_only)
void main_f_122b4f0() {}

// sub_122b530  (orig 0x122b530, ret_only)
void main_f_122b530() {}

// sub_122b540  (orig 0x122b540, ret_only)
void main_f_122b540() {}

// sub_122b550  (orig 0x122b550, ret_only)
void main_f_122b550() {}

// sub_122b570  (orig 0x122b570, ret_only)
void main_f_122b570() {}

// sub_122b580  (orig 0x122b580, ret_only)
void main_f_122b580() {}

// sub_122b590  (orig 0x122b590, ret_only)
void main_f_122b590() {}

// sub_122b5b0  (orig 0x122b5b0, ret_only)
void main_f_122b5b0() {}

// sub_122b5c0  (orig 0x122b5c0, ret_only)
void main_f_122b5c0() {}

// sub_122b5d0  (orig 0x122b5d0, ret_only)
void main_f_122b5d0() {}

// sub_122b5f0  (orig 0x122b5f0, ret_only)
void main_f_122b5f0() {}

// sub_122b600  (orig 0x122b600, ret_only)
void main_f_122b600() {}

// sub_122b610  (orig 0x122b610, ret_only)
void main_f_122b610() {}

// sub_122b640  (orig 0x122b640, ret_only)
void main_f_122b640() {}

// sub_122b650  (orig 0x122b650, ret_only)
void main_f_122b650() {}

// sub_122b660  (orig 0x122b660, ret_only)
void main_f_122b660() {}

// sub_122b6b0  (orig 0x122b6b0, ret_only)
void main_f_122b6b0() {}

// sub_122b6c0  (orig 0x122b6c0, copy2)
void main_f_122b6c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b6d0  (orig 0x122b6d0, copy2)
void main_f_122b6d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b790  (orig 0x122b790, ret_only)
void main_f_122b790() {}

// sub_122b7a0  (orig 0x122b7a0, copy2)
void main_f_122b7a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b7b0  (orig 0x122b7b0, copy2)
void main_f_122b7b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b870  (orig 0x122b870, ret_only)
void main_f_122b870() {}

// sub_122b880  (orig 0x122b880, copy2)
void main_f_122b880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b890  (orig 0x122b890, copy2)
void main_f_122b890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b9e0  (orig 0x122b9e0, ret_only)
void main_f_122b9e0() {}

// sub_122b9f0  (orig 0x122b9f0, ret_only)
void main_f_122b9f0() {}

// sub_122ba00  (orig 0x122ba00, ret_only)
void main_f_122ba00() {}

// sub_122ba50  (orig 0x122ba50, ret_only)
void main_f_122ba50() {}

// sub_122ba60  (orig 0x122ba60, ret_only)
void main_f_122ba60() {}

// sub_122ba70  (orig 0x122ba70, ret_only)
void main_f_122ba70() {}

// sub_122bab0  (orig 0x122bab0, ret_only)
void main_f_122bab0() {}

// sub_122bac0  (orig 0x122bac0, ret_only)
void main_f_122bac0() {}

// sub_122bad0  (orig 0x122bad0, ret_only)
void main_f_122bad0() {}

// sub_122baf0  (orig 0x122baf0, ret_only)
void main_f_122baf0() {}

// sub_122bb00  (orig 0x122bb00, ret_only)
void main_f_122bb00() {}

// sub_122bb10  (orig 0x122bb10, ret_only)
void main_f_122bb10() {}

// sub_122bc80  (orig 0x122bc80, ret_only)
void main_f_122bc80() {}

// sub_122be40  (orig 0x122be40, ret_only)
void main_f_122be40() {}

// sub_122bf20  (orig 0x122bf20, ret_only)
void main_f_122bf20() {}

// sub_122bf30  (orig 0x122bf30, copy2)
void main_f_122bf30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122bf40  (orig 0x122bf40, copy2)
void main_f_122bf40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122cb60  (orig 0x122cb60, ret_only)
void main_f_122cb60() {}

// sub_122cbe0  (orig 0x122cbe0, ret_only)
void main_f_122cbe0() {}

// sub_122cc70  (orig 0x122cc70, ret_only)
void main_f_122cc70() {}

// sub_122cc80  (orig 0x122cc80, copy2)
void main_f_122cc80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122cc90  (orig 0x122cc90, copy2)
void main_f_122cc90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122cd10  (orig 0x122cd10, ret_only)
void main_f_122cd10() {}

// sub_122cd20  (orig 0x122cd20, copy2)
void main_f_122cd20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122cd30  (orig 0x122cd30, copy2)
void main_f_122cd30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122d9b0  (orig 0x122d9b0, ret_only)
void main_f_122d9b0() {}

// sub_122d9c0  (orig 0x122d9c0, ret_only)
void main_f_122d9c0() {}

// sub_122d9d0  (orig 0x122d9d0, ret_only)
void main_f_122d9d0() {}

// sub_122d9f0  (orig 0x122d9f0, ret_only)
void main_f_122d9f0() {}

// sub_122da00  (orig 0x122da00, ret_only)
void main_f_122da00() {}

// sub_122da10  (orig 0x122da10, ret_only)
void main_f_122da10() {}

// sub_122e320  (orig 0x122e320, ret_only)
void main_f_122e320() {}

// sub_122e330  (orig 0x122e330, ret_only)
void main_f_122e330() {}

// sub_122e340  (orig 0x122e340, ret_only)
void main_f_122e340() {}

// sub_122e560  (orig 0x122e560, ret_only)
void main_f_122e560() {}

// sub_122f600  (orig 0x122f600, ret_only)
void main_f_122f600() {}

// sub_1231910  (orig 0x1231910, ret_only)
void main_f_1231910() {}

// sub_1231990  (orig 0x1231990, ret_only)
void main_f_1231990() {}

// sub_12319a0  (orig 0x12319a0, copy2)
void main_f_12319a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12319b0  (orig 0x12319b0, copy2)
void main_f_12319b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1231b20  (orig 0x1231b20, ret_only)
void main_f_1231b20() {}

// sub_1231b30  (orig 0x1231b30, copy2)
void main_f_1231b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1231b40  (orig 0x1231b40, copy2)
void main_f_1231b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1231d40  (orig 0x1231d40, ret_only)
void main_f_1231d40() {}

// sub_1231d50  (orig 0x1231d50, copy2)
void main_f_1231d50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1231d60  (orig 0x1231d60, copy2)
void main_f_1231d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1231f20  (orig 0x1231f20, ret_only)
void main_f_1231f20() {}

// sub_1231f90  (orig 0x1231f90, ret_only)
void main_f_1231f90() {}

// sub_1231fc0  (orig 0x1231fc0, copy2)
void main_f_1231fc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1231fd0  (orig 0x1231fd0, copy2)
void main_f_1231fd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232190  (orig 0x1232190, ret_only)
void main_f_1232190() {}

// sub_1232200  (orig 0x1232200, ret_only)
void main_f_1232200() {}

// sub_1232230  (orig 0x1232230, copy2)
void main_f_1232230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232240  (orig 0x1232240, copy2)
void main_f_1232240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232370  (orig 0x1232370, ret_only)
void main_f_1232370() {}

// sub_1232810  (orig 0x1232810, ret_only)
void main_f_1232810() {}

// sub_1232820  (orig 0x1232820, copy2)
void main_f_1232820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232830  (orig 0x1232830, copy2)
void main_f_1232830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232940  (orig 0x1232940, ret_only)
void main_f_1232940() {}

// sub_1232950  (orig 0x1232950, copy2)
void main_f_1232950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232960  (orig 0x1232960, copy2)
void main_f_1232960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232a40  (orig 0x1232a40, ret_only)
void main_f_1232a40() {}

// sub_1232ab0  (orig 0x1232ab0, ret_only)
void main_f_1232ab0() {}

// sub_1232ac0  (orig 0x1232ac0, copy2)
void main_f_1232ac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232ad0  (orig 0x1232ad0, copy2)
void main_f_1232ad0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232f30  (orig 0x1232f30, ret_only)
void main_f_1232f30() {}

// sub_1233150  (orig 0x1233150, ret_only)
void main_f_1233150() {}

// sub_1233160  (orig 0x1233160, copy2)
void main_f_1233160(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1233170  (orig 0x1233170, copy2)
void main_f_1233170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1234490  (orig 0x1234490, ret_only)
void main_f_1234490() {}

// sub_12344f0  (orig 0x12344f0, ret_only)
void main_f_12344f0() {}

// sub_1234520  (orig 0x1234520, copy2)
void main_f_1234520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

