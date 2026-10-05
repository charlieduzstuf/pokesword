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

// sub_559270  (orig 0x559270, ptr_add)
void* main_f_559270(void* a0) { return (char*)a0 + 120; }

// sub_559280  (orig 0x559280, ret_only)
void main_f_559280() {}

// sub_559290  (orig 0x559290, mov_ret)
uint32_t main_f_559290() { return 0; }

// sub_559340  (orig 0x559340, getter)
uint32_t main_f_559340(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_559350  (orig 0x559350, ptr_add)
void* main_f_559350(void* a0) { return (char*)a0 + 192; }

// sub_559360  (orig 0x559360, getter)
uint32_t main_f_559360(void* a0) { return *(uint32_t*)((char*)(a0) + 288); }

// sub_559d30  (orig 0x559d30, getter)
uint64_t main_f_559d30(void* a0) { return *(uint64_t*)((char*)(a0) + 592); }

// sub_55a1e0  (orig 0x55a1e0, ptr_add)
void* main_f_55a1e0(void* a0) { return (char*)a0 + 48; }

// sub_55a1f0  (orig 0x55a1f0, ptr_add)
void* main_f_55a1f0(void* a0) { return (char*)a0 + 40; }

// sub_55a200  (orig 0x55a200, getter)
uint32_t main_f_55a200(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_55a210  (orig 0x55a210, getter)
uint32_t main_f_55a210(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_55a220  (orig 0x55a220, getter)
uint64_t main_f_55a220(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_55a230  (orig 0x55a230, getter)
uint64_t main_f_55a230(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_55a240  (orig 0x55a240, getter)
uint64_t main_f_55a240(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_55a250  (orig 0x55a250, ptr_add)
void* main_f_55a250(void* a0) { return (char*)a0 + 100; }

// sub_55a260  (orig 0x55a260, ret_only)
void main_f_55a260() {}

// sub_55a280  (orig 0x55a280, ret_only)
void main_f_55a280() {}

// sub_55a290  (orig 0x55a290, ret_only)
void main_f_55a290() {}

// sub_55a2a0  (orig 0x55a2a0, ret_only)
void main_f_55a2a0() {}

// sub_55a2b0  (orig 0x55a2b0, ret_only)
void main_f_55a2b0() {}

// sub_55a2c0  (orig 0x55a2c0, ptr_add)
void* main_f_55a2c0(void* a0) { return (char*)a0 + 120; }

// sub_55a750  (orig 0x55a750, mov_ret)
uint32_t main_f_55a750() { return 1; }

// sub_55a790  (orig 0x55a790, mov_ret)
uint32_t main_f_55a790() { return 1; }

// sub_55a8c0  (orig 0x55a8c0, getter)
uint8_t main_f_55a8c0(void* a0) { return *(uint8_t*)((char*)(a0) + 124); }

// sub_55a8d0  (orig 0x55a8d0, getter)
uint64_t main_f_55a8d0(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_55a8e0  (orig 0x55a8e0, getter)
uint64_t main_f_55a8e0(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_55a8f0  (orig 0x55a8f0, getter)
uint64_t main_f_55a8f0(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_55a900  (orig 0x55a900, getter)
uint64_t main_f_55a900(void* a0) { return *(uint64_t*)((char*)(a0) + 136); }

// sub_55a910  (orig 0x55a910, getter)
uint64_t main_f_55a910(void* a0) { return *(uint64_t*)((char*)(a0) + 136); }

// sub_55a920  (orig 0x55a920, getter)
uint64_t main_f_55a920(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_55a930  (orig 0x55a930, getter)
uint64_t main_f_55a930(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_55a940  (orig 0x55a940, getter)
uint64_t main_f_55a940(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_55a950  (orig 0x55a950, getter)
uint64_t main_f_55a950(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_55a960  (orig 0x55a960, getter)
uint64_t main_f_55a960(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_55a970  (orig 0x55a970, getter)
uint64_t main_f_55a970(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_55a980  (orig 0x55a980, getter)
uint64_t main_f_55a980(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_55a990  (orig 0x55a990, getter)
uint64_t main_f_55a990(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_55a9a0  (orig 0x55a9a0, ret_only)
void main_f_55a9a0() {}

// sub_55a9b0  (orig 0x55a9b0, mov_ret)
uint32_t main_f_55a9b0() { return 0; }

// sub_55aa60  (orig 0x55aa60, getter)
uint32_t main_f_55aa60(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_55ab10  (orig 0x55ab10, ptr_add)
void* main_f_55ab10(void* a0) { return (char*)a0 + 184; }

// sub_55ab20  (orig 0x55ab20, getter)
uint32_t main_f_55ab20(void* a0) { return *(uint32_t*)((char*)(a0) + 376); }

// sub_55ac60  (orig 0x55ac60, compare)
bool main_f_55ac60(uint64_t unused0, uint64_t a1) { return (uint64_t)(a1) != (uint64_t)(0); }

// sub_55ac70  (orig 0x55ac70, getter)
uint32_t main_f_55ac70(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_55ac80  (orig 0x55ac80, ptr_add)
void* main_f_55ac80(void* a0) { return (char*)a0 + 36; }

// sub_55ad50  (orig 0x55ad50, getter)
uint32_t main_f_55ad50(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_55b190  (orig 0x55b190, ptr_add)
void* main_f_55b190(void* a0) { return (char*)a0 + 48; }

// sub_55b1a0  (orig 0x55b1a0, ptr_add)
void* main_f_55b1a0(void* a0) { return (char*)a0 + 40; }

// sub_55b1b0  (orig 0x55b1b0, getter)
uint32_t main_f_55b1b0(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_55b1c0  (orig 0x55b1c0, getter)
uint32_t main_f_55b1c0(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_55b1d0  (orig 0x55b1d0, getter)
uint64_t main_f_55b1d0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_55b1e0  (orig 0x55b1e0, getter)
uint64_t main_f_55b1e0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_55b1f0  (orig 0x55b1f0, getter)
uint64_t main_f_55b1f0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_55b200  (orig 0x55b200, ptr_add)
void* main_f_55b200(void* a0) { return (char*)a0 + 100; }

// sub_55b210  (orig 0x55b210, ret_only)
void main_f_55b210() {}

// sub_55b220  (orig 0x55b220, ret_only)
void main_f_55b220() {}

// sub_55b230  (orig 0x55b230, ret_only)
void main_f_55b230() {}

// sub_55b240  (orig 0x55b240, ret_only)
void main_f_55b240() {}

// sub_55b250  (orig 0x55b250, ret_only)
void main_f_55b250() {}

// sub_55b260  (orig 0x55b260, ret_only)
void main_f_55b260() {}

// sub_55b270  (orig 0x55b270, ptr_add)
void* main_f_55b270(void* a0) { return (char*)a0 + 120; }

// sub_55b550  (orig 0x55b550, compare)
bool main_f_55b550(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 152)) != (uint64_t)(0); }

// sub_55b560  (orig 0x55b560, ret_only)
void main_f_55b560() {}

// sub_55b570  (orig 0x55b570, mov_ret)
uint32_t main_f_55b570() { return 0; }

// sub_55b6a0  (orig 0x55b6a0, getter)
uint32_t main_f_55b6a0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_55b6b0  (orig 0x55b6b0, ptr_add)
void* main_f_55b6b0(void* a0) { return (char*)a0 + 144; }

// sub_55ba20  (orig 0x55ba20, ret_only)
void main_f_55ba20() {}

// sub_55cb20  (orig 0x55cb20, ptr_add)
void* main_f_55cb20(void* a0) { return (char*)a0 + 48; }

// sub_55cb30  (orig 0x55cb30, ptr_add)
void* main_f_55cb30(void* a0) { return (char*)a0 + 40; }

// sub_55cb40  (orig 0x55cb40, getter)
uint32_t main_f_55cb40(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_55cb50  (orig 0x55cb50, getter)
uint32_t main_f_55cb50(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_55cc20  (orig 0x55cc20, getter)
uint64_t main_f_55cc20(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_55cc30  (orig 0x55cc30, getter)
uint64_t main_f_55cc30(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_55cc40  (orig 0x55cc40, getter)
uint64_t main_f_55cc40(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_55cc50  (orig 0x55cc50, ptr_add)
void* main_f_55cc50(void* a0) { return (char*)a0 + 100; }

// sub_55cc60  (orig 0x55cc60, ret_only)
void main_f_55cc60() {}

// sub_55cc70  (orig 0x55cc70, ret_only)
void main_f_55cc70() {}

// sub_55cc80  (orig 0x55cc80, ret_only)
void main_f_55cc80() {}

// sub_55cc90  (orig 0x55cc90, ret_only)
void main_f_55cc90() {}

// sub_55cca0  (orig 0x55cca0, ret_only)
void main_f_55cca0() {}

// sub_55ccb0  (orig 0x55ccb0, ret_only)
void main_f_55ccb0() {}

// sub_55ccc0  (orig 0x55ccc0, ptr_add)
void* main_f_55ccc0(void* a0) { return (char*)a0 + 120; }

// sub_55ccd0  (orig 0x55ccd0, getter)
uint64_t main_f_55ccd0(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_55cce0  (orig 0x55cce0, getter)
uint64_t main_f_55cce0(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_55ccf0  (orig 0x55ccf0, getter)
uint64_t main_f_55ccf0(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_55cd00  (orig 0x55cd00, getter)
uint64_t main_f_55cd00(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_55cd10  (orig 0x55cd10, getter)
uint64_t main_f_55cd10(void* a0) { return *(uint64_t*)((char*)(a0) + 200); }

// sub_55cd20  (orig 0x55cd20, getter)
uint64_t main_f_55cd20(void* a0) { return *(uint64_t*)((char*)(a0) + 200); }

// sub_55d3b0  (orig 0x55d3b0, getter)
uint32_t main_f_55d3b0(void* a0) { return *(uint32_t*)((char*)(a0) + 264); }

// sub_55d500  (orig 0x55d500, getter)
uint32_t main_f_55d500(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_55d510  (orig 0x55d510, getter)
uint64_t main_f_55d510(void* a0) { return *(uint64_t*)((char*)(a0) + 224); }

// sub_55d520  (orig 0x55d520, getter)
uint64_t main_f_55d520(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_55f2c0  (orig 0x55f2c0, ptr_add)
void* main_f_55f2c0(void* a0) { return (char*)a0 + 56; }

// sub_55f2d0  (orig 0x55f2d0, ptr_add)
void* main_f_55f2d0(void* a0) { return (char*)a0 + 48; }

// sub_55f2e0  (orig 0x55f2e0, getter)
uint32_t main_f_55f2e0(void* a0) { return *(uint32_t*)((char*)(a0) + 168); }

// sub_55f2f0  (orig 0x55f2f0, getter)
uint32_t main_f_55f2f0(void* a0) { return *(uint32_t*)((char*)(a0) + 160); }

// sub_55f300  (orig 0x55f300, getter)
uint64_t main_f_55f300(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_55f310  (orig 0x55f310, getter)
uint64_t main_f_55f310(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_55f320  (orig 0x55f320, getter)
uint64_t main_f_55f320(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_55f330  (orig 0x55f330, ptr_add)
void* main_f_55f330(void* a0) { return (char*)a0 + 448; }

// sub_55f340  (orig 0x55f340, ret_only)
void main_f_55f340() {}

// sub_55f360  (orig 0x55f360, ret_only)
void main_f_55f360() {}

// sub_55f370  (orig 0x55f370, ret_only)
void main_f_55f370() {}

// sub_55f380  (orig 0x55f380, ret_only)
void main_f_55f380() {}

// sub_55f390  (orig 0x55f390, ret_only)
void main_f_55f390() {}

// sub_55f3a0  (orig 0x55f3a0, ptr_add)
void* main_f_55f3a0(void* a0) { return (char*)a0 + 468; }

// sub_55f3b0  (orig 0x55f3b0, getter)
uint64_t main_f_55f3b0(void* a0) { return *(uint64_t*)((char*)(a0) + 1080); }

// sub_55f3c0  (orig 0x55f3c0, getter)
uint64_t main_f_55f3c0(void* a0) { return *(uint64_t*)((char*)(a0) + 1080); }

// sub_561d80  (orig 0x561d80, setter)
void main_f_561d80(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 800) = a1; }

// sub_561d90  (orig 0x561d90, getter)
uint32_t main_f_561d90(void* a0) { return *(uint32_t*)((char*)(a0) + 800); }

// sub_561da0  (orig 0x561da0, getter)
uint64_t main_f_561da0(void* a0) { return *(uint64_t*)((char*)(a0) + 816); }

// sub_561db0  (orig 0x561db0, getter)
uint32_t main_f_561db0(void* a0) { return *(uint32_t*)((char*)(a0) + 824); }

// sub_562300  (orig 0x562300, getter)
uint64_t main_f_562300(void* a0) { return *(uint64_t*)((char*)(a0) + 792); }

// sub_562310  (orig 0x562310, getter)
uint64_t main_f_562310(void* a0) { return *(uint64_t*)((char*)(a0) + 792); }

// sub_562320  (orig 0x562320, mov_ret)
uint32_t main_f_562320() { return 1; }

// sub_562330  (orig 0x562330, mov_ret)
uint64_t main_f_562330() { return 0; }

// sub_562360  (orig 0x562360, ptr_add)
void* main_f_562360(void* a0) { return (char*)a0 + 176; }

// sub_5624e0  (orig 0x5624e0, getter)
uint32_t main_f_5624e0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_562520  (orig 0x562520, getter)
uint64_t main_f_562520(void* a0) { return *(uint64_t*)((char*)(a0) + 808); }

// sub_5635f0  (orig 0x5635f0, ret_only)
void main_f_5635f0() {}

// sub_5644d0  (orig 0x5644d0, mov_ret)
uint64_t main_f_5644d0() { return 0; }

// sub_5649e0  (orig 0x5649e0, ptr_add)
void* main_f_5649e0(void* a0) { return (char*)a0 + 48; }

// sub_5649f0  (orig 0x5649f0, ptr_add)
void* main_f_5649f0(void* a0) { return (char*)a0 + 40; }

// sub_564a00  (orig 0x564a00, getter)
uint32_t main_f_564a00(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_564a10  (orig 0x564a10, getter)
uint32_t main_f_564a10(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_564a20  (orig 0x564a20, getter)
uint64_t main_f_564a20(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_564a30  (orig 0x564a30, getter)
uint64_t main_f_564a30(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_564a40  (orig 0x564a40, getter)
uint64_t main_f_564a40(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_564a50  (orig 0x564a50, ptr_add)
void* main_f_564a50(void* a0) { return (char*)a0 + 100; }

// sub_564a60  (orig 0x564a60, ret_only)
void main_f_564a60() {}

// sub_564a80  (orig 0x564a80, ret_only)
void main_f_564a80() {}

// sub_564a90  (orig 0x564a90, ret_only)
void main_f_564a90() {}

// sub_564aa0  (orig 0x564aa0, ret_only)
void main_f_564aa0() {}

// sub_564ab0  (orig 0x564ab0, ret_only)
void main_f_564ab0() {}

// sub_5650b0  (orig 0x5650b0, ret_only)
void main_f_5650b0() {}

// sub_5650c0  (orig 0x5650c0, getter)
uint32_t main_f_5650c0(void* a0) { return *(uint32_t*)((char*)(a0) + 1020); }

// sub_5650d0  (orig 0x5650d0, ptr_add)
void* main_f_5650d0(void* a0) { return (char*)a0 + 124; }

// sub_565120  (orig 0x565120, getter)
uint32_t main_f_565120(void* a0) { return *(uint32_t*)((char*)(a0) + 1088); }

// sub_5653e0  (orig 0x5653e0, ptr_add)
void* main_f_5653e0(void* a0) { return (char*)a0 + 124; }

// sub_565410  (orig 0x565410, ret_only)
void main_f_565410() {}

// sub_565420  (orig 0x565420, mov_ret)
uint32_t main_f_565420() { return 0; }

// sub_5654d0  (orig 0x5654d0, getter)
uint32_t main_f_5654d0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_565a40  (orig 0x565a40, ptr_add)
void* main_f_565a40(void* a0) { return (char*)a0 + 48; }

// sub_565a50  (orig 0x565a50, ptr_add)
void* main_f_565a50(void* a0) { return (char*)a0 + 40; }

// sub_565a60  (orig 0x565a60, getter)
uint32_t main_f_565a60(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_565a70  (orig 0x565a70, getter)
uint32_t main_f_565a70(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_565a80  (orig 0x565a80, getter)
uint64_t main_f_565a80(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_565a90  (orig 0x565a90, getter)
uint64_t main_f_565a90(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_565aa0  (orig 0x565aa0, getter)
uint64_t main_f_565aa0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_565b70  (orig 0x565b70, ptr_add)
void* main_f_565b70(void* a0) { return (char*)a0 + 100; }

// sub_565b80  (orig 0x565b80, ret_only)
void main_f_565b80() {}

// sub_565b90  (orig 0x565b90, ret_only)
void main_f_565b90() {}

// sub_565ba0  (orig 0x565ba0, ret_only)
void main_f_565ba0() {}

// sub_565bb0  (orig 0x565bb0, ret_only)
void main_f_565bb0() {}

// sub_565bc0  (orig 0x565bc0, ret_only)
void main_f_565bc0() {}

// sub_565bd0  (orig 0x565bd0, ret_only)
void main_f_565bd0() {}

// sub_565be0  (orig 0x565be0, ptr_add)
void* main_f_565be0(void* a0) { return (char*)a0 + 120; }

// sub_565bf0  (orig 0x565bf0, mov_ret)
uint64_t main_f_565bf0() { return 0; }

// sub_565c00  (orig 0x565c00, mov_ret)
uint64_t main_f_565c00() { return 0; }

// sub_565ea0  (orig 0x565ea0, ret_only)
void main_f_565ea0() {}

// sub_565eb0  (orig 0x565eb0, mov_ret)
uint32_t main_f_565eb0() { return 0; }

// sub_565fe0  (orig 0x565fe0, getter)
uint32_t main_f_565fe0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_568550  (orig 0x568550, ptr_add)
void* main_f_568550(void* a0) { return (char*)a0 + 24; }

// sub_568560  (orig 0x568560, ptr_add)
void* main_f_568560(void* a0) { return (char*)a0 + 72; }

// sub_569580  (orig 0x569580, ptr_add)
void* main_f_569580(void* a0) { return (char*)a0 + 720; }

// sub_569590  (orig 0x569590, ptr_add)
void* main_f_569590(void* a0) { return (char*)a0 + 120; }

// sub_56c860  (orig 0x56c860, getter)
uint32_t main_f_56c860(void* a0) { return *(uint32_t*)((char*)(a0) + 336); }

// sub_56ce30  (orig 0x56ce30, ptr_add)
void* main_f_56ce30(void* a0) { return (char*)a0 + 3640; }

// sub_56ce50  (orig 0x56ce50, getter)
uint8_t main_f_56ce50(void* a0) { return *(uint8_t*)((char*)(a0) + 316); }

// sub_56d2b0  (orig 0x56d2b0, getter)
uint8_t main_f_56d2b0(void* a0) { return *(uint8_t*)((char*)(a0) + 317); }

// sub_56d940  (orig 0x56d940, getter)
uint32_t main_f_56d940(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_56dbf0  (orig 0x56dbf0, getter)
uint32_t main_f_56dbf0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_570010  (orig 0x570010, ptr_add)
void* main_f_570010(void* a0) { return (char*)a0 + 24; }

// sub_570020  (orig 0x570020, ptr_add)
void* main_f_570020(void* a0) { return (char*)a0 + 72; }

// sub_570030  (orig 0x570030, ptr_add)
void* main_f_570030(void* a0) { return (char*)a0 + 120; }

// sub_570040  (orig 0x570040, getter)
uint32_t main_f_570040(void* a0) { return *(uint32_t*)((char*)(a0) + 168); }

// sub_570050  (orig 0x570050, getter)
uint32_t main_f_570050(void* a0) { return *(uint32_t*)((char*)(a0) + 172); }

// sub_5706d0  (orig 0x5706d0, getter)
uint64_t main_f_5706d0(void* a0) { return *(uint64_t*)((char*)(a0) + 192); }

// sub_5706e0  (orig 0x5706e0, getter)
uint64_t main_f_5706e0(void* a0) { return *(uint64_t*)((char*)(a0) + 192); }

// sub_570790  (orig 0x570790, getter)
uint32_t main_f_570790(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_5709c0  (orig 0x5709c0, ptr_add)
void* main_f_5709c0(void* a0) { return (char*)a0 + 24; }

// sub_5709d0  (orig 0x5709d0, getter)
uint32_t main_f_5709d0(void* a0) { return *(uint32_t*)((char*)(a0) + 76); }

// sub_570c20  (orig 0x570c20, getter)
uint32_t main_f_570c20(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_570d00  (orig 0x570d00, mov_ret)
uint32_t main_f_570d00() { return 1; }

// sub_5725b0  (orig 0x5725b0, getter)
uint32_t main_f_5725b0(void* a0) { return *(uint32_t*)((char*)(a0) + 184); }

// sub_573260  (orig 0x573260, getter)
uint32_t main_f_573260(void* a0) { return *(uint32_t*)((char*)(a0) + 264); }

// sub_573360  (orig 0x573360, getter)
uint8_t main_f_573360(void* a0) { return *(uint8_t*)((char*)(a0) + 368); }

// sub_573460  (orig 0x573460, ptr_add)
void* main_f_573460(void* a0) { return (char*)a0 + 80; }

// sub_573470  (orig 0x573470, getter)
uint64_t main_f_573470(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_573770  (orig 0x573770, getter)
uint32_t main_f_573770(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_574c60  (orig 0x574c60, ptr_add)
void* main_f_574c60(void* a0) { return (char*)a0 + 24; }

// sub_574c70  (orig 0x574c70, getter)
uint32_t main_f_574c70(void* a0) { return *(uint32_t*)((char*)(a0) + 200); }

// sub_574c80  (orig 0x574c80, getter)
uint32_t main_f_574c80(void* a0) { return *(uint32_t*)((char*)(a0) + 204); }

// sub_575370  (orig 0x575370, getter)
uint32_t main_f_575370(void* a0) { return *(uint32_t*)((char*)(a0) + 336); }

// sub_575380  (orig 0x575380, getter)
uint32_t main_f_575380(void* a0) { return *(uint32_t*)((char*)(a0) + 340); }

// sub_575d50  (orig 0x575d50, getter)
uint32_t main_f_575d50(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_576b90  (orig 0x576b90, getter)
uint64_t main_f_576b90(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_576ba0  (orig 0x576ba0, getter)
uint64_t main_f_576ba0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_576bf0  (orig 0x576bf0, ptr_add)
void* main_f_576bf0(void* a0) { return (char*)a0 + 32; }

// sub_576c00  (orig 0x576c00, ptr_add)
void* main_f_576c00(void* a0) { return (char*)a0 + 144; }

// sub_576c10  (orig 0x576c10, getter)
uint64_t main_f_576c10(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_576c20  (orig 0x576c20, getter)
uint64_t main_f_576c20(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_578b00  (orig 0x578b00, getter)
uint8_t main_f_578b00(void* a0) { return *(uint8_t*)((char*)(a0) + 88); }

// sub_5792c0  (orig 0x5792c0, getter)
uint32_t main_f_5792c0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_5793d0  (orig 0x5793d0, getter)
uint32_t main_f_5793d0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_579970  (orig 0x579970, getter)
uint32_t main_f_579970(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_57a640  (orig 0x57a640, mov_ret)
uint32_t main_f_57a640() { return 1; }

// sub_57afc0  (orig 0x57afc0, getter)
uint64_t main_f_57afc0(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_57afd0  (orig 0x57afd0, getter)
uint64_t main_f_57afd0(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_57b430  (orig 0x57b430, compare)
bool main_f_57b430(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 232)) == (uint64_t)(0); }

// sub_57b4f0  (orig 0x57b4f0, ptr_add)
void* main_f_57b4f0(void* a0) { return (char*)a0 + 48; }

// sub_57bef0  (orig 0x57bef0, ptr_add)
void* main_f_57bef0(void* a0) { return (char*)a0 + 304; }

// sub_57bf30  (orig 0x57bf30, setter)
void main_f_57bf30(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 352) = a1; }

// sub_57bf40  (orig 0x57bf40, getter)
uint32_t main_f_57bf40(void* a0) { return *(uint32_t*)((char*)(a0) + 352); }

// sub_57bf50  (orig 0x57bf50, setter)
void main_f_57bf50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 224) = a1; }

// sub_57bf60  (orig 0x57bf60, getter)
uint32_t main_f_57bf60(void* a0) { return *(uint32_t*)((char*)(a0) + 224); }

// sub_57bf70  (orig 0x57bf70, getter)
uint64_t main_f_57bf70(void* a0) { return *(uint64_t*)((char*)(a0) + 192); }

// sub_57c5c0  (orig 0x57c5c0, getter)
uint32_t main_f_57c5c0(void* a0) { return *(uint32_t*)((char*)(a0) + 448); }

// sub_57c670  (orig 0x57c670, getter)
uint32_t main_f_57c670(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_57c750  (orig 0x57c750, getter)
uint32_t main_f_57c750(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_57d5e0  (orig 0x57d5e0, getter)
uint64_t main_f_57d5e0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_57d5f0  (orig 0x57d5f0, getter)
uint64_t main_f_57d5f0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_57d840  (orig 0x57d840, getter)
uint64_t main_f_57d840(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_57d860  (orig 0x57d860, getter)
uint64_t main_f_57d860(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_57dd30  (orig 0x57dd30, getter)
uint32_t main_f_57dd30(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_57dff0  (orig 0x57dff0, getter)
uint32_t main_f_57dff0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_57f990  (orig 0x57f990, getter)
uint32_t main_f_57f990(void* a0) { return *(uint32_t*)((char*)(a0) + 48); }

// sub_57ff50  (orig 0x57ff50, getter)
uint32_t main_f_57ff50(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_57ff70  (orig 0x57ff70, getter)
uint8_t main_f_57ff70(void* a0) { return *(uint8_t*)((char*)(a0) + 24); }

// sub_5807c0  (orig 0x5807c0, getter)
uint64_t main_f_5807c0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_5807f0  (orig 0x5807f0, getter)
uint64_t main_f_5807f0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_580820  (orig 0x580820, setter)
void main_f_580820(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 68) = a1; }

// sub_580830  (orig 0x580830, setter)
void main_f_580830(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 64) = a1; }

// sub_580840  (orig 0x580840, getter)
uint32_t main_f_580840(void* a0) { return *(uint32_t*)((char*)(a0) + 68); }

// sub_580850  (orig 0x580850, getter)
uint32_t main_f_580850(void* a0) { return *(uint32_t*)((char*)(a0) + 64); }

// sub_580860  (orig 0x580860, getter)
uint64_t main_f_580860(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_582b40  (orig 0x582b40, ret_only)
void main_f_582b40() {}

// sub_582ba0  (orig 0x582ba0, getter)
uint64_t main_f_582ba0(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_582bb0  (orig 0x582bb0, getter)
uint64_t main_f_582bb0(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_582bc0  (orig 0x582bc0, mov_ret)
uint32_t main_f_582bc0() { return 1; }

// sub_582bd0  (orig 0x582bd0, mov_ret)
uint32_t main_f_582bd0() { return 0; }

// sub_582be0  (orig 0x582be0, mov_ret)
uint32_t main_f_582be0() { return 0; }

// sub_582bf0  (orig 0x582bf0, mov_ret)
uint64_t main_f_582bf0() { return 0; }

// sub_582c00  (orig 0x582c00, mov_ret)
uint64_t main_f_582c00() { return 0; }

// sub_582cb0  (orig 0x582cb0, getter)
uint32_t main_f_582cb0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_582cc0  (orig 0x582cc0, mov_ret)
uint32_t main_f_582cc0() { return 2; }

// sub_583970  (orig 0x583970, mov_ret)
uint32_t main_f_583970() { return 1; }

// sub_583cf0  (orig 0x583cf0, getter)
uint32_t main_f_583cf0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_584410  (orig 0x584410, mov_ret)
uint32_t main_f_584410() { return 1; }

// sub_584d80  (orig 0x584d80, getter)
uint8_t main_f_584d80(void* a0) { return *(uint8_t*)((char*)(a0) + 24); }

// sub_584dc0  (orig 0x584dc0, getter)
uint8_t main_f_584dc0(void* a0) { return *(uint8_t*)((char*)(a0) + 25); }

// sub_584dd0  (orig 0x584dd0, getter)
uint64_t main_f_584dd0(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_584de0  (orig 0x584de0, getter)
uint64_t main_f_584de0(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_5856a0  (orig 0x5856a0, mov_ret)
uint64_t main_f_5856a0() { return 0; }

// sub_5856b0  (orig 0x5856b0, mov_ret)
uint64_t main_f_5856b0() { return 0; }

// sub_5856d0  (orig 0x5856d0, getter)
uint8_t main_f_5856d0(void* a0) { return *(uint8_t*)((char*)(a0) + 26); }

// sub_5856f0  (orig 0x5856f0, ptr_add)
void* main_f_5856f0(void* a0) { return (char*)a0 + 136; }

// sub_586af0  (orig 0x586af0, getter)
uint32_t main_f_586af0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_587510  (orig 0x587510, mov_ret)
uint32_t main_f_587510() { return 1; }

// sub_587650  (orig 0x587650, getter)
uint64_t main_f_587650(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_587660  (orig 0x587660, getter)
uint64_t main_f_587660(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_587670  (orig 0x587670, getter)
uint64_t main_f_587670(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_587680  (orig 0x587680, getter)
uint64_t main_f_587680(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_587690  (orig 0x587690, ptr_add)
void* main_f_587690(void* a0) { return (char*)a0 + 40; }

// sub_5876a0  (orig 0x5876a0, ptr_add)
void* main_f_5876a0(void* a0) { return (char*)a0 + 88; }

// sub_5876b0  (orig 0x5876b0, getter)
uint8_t main_f_5876b0(void* a0) { return *(uint8_t*)((char*)(a0) + 140); }

// sub_5876c0  (orig 0x5876c0, getter)
uint64_t main_f_5876c0(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_5876f0  (orig 0x5876f0, getter)
uint64_t main_f_5876f0(void* a0) { return *(uint64_t*)((char*)(a0) + 296); }

// sub_587720  (orig 0x587720, getter)
uint64_t main_f_587720(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_587a50  (orig 0x587a50, getter)
uint32_t main_f_587a50(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_58b630  (orig 0x58b630, getter)
uint64_t main_f_58b630(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_58b640  (orig 0x58b640, getter)
uint64_t main_f_58b640(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_58b650  (orig 0x58b650, ptr_add)
void* main_f_58b650(void* a0) { return (char*)a0 + 48; }

// sub_58b660  (orig 0x58b660, ptr_add)
void* main_f_58b660(void* a0) { return (char*)a0 + 96; }

// sub_58b730  (orig 0x58b730, mov_ret)
uint32_t main_f_58b730() { return 0; }

// sub_58b740  (orig 0x58b740, mov_ret)
uint32_t main_f_58b740() { return 0; }

// sub_58b750  (orig 0x58b750, getter)
uint64_t main_f_58b750(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_58b760  (orig 0x58b760, getter)
uint64_t main_f_58b760(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_58b820  (orig 0x58b820, getter)
uint32_t main_f_58b820(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_58b830  (orig 0x58b830, mov_ret)
uint32_t main_f_58b830() { return 1; }

// sub_58bcd0  (orig 0x58bcd0, getter)
uint64_t main_f_58bcd0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_58bce0  (orig 0x58bce0, ptr_add)
void* main_f_58bce0(void* a0) { return (char*)a0 + 40; }

// sub_58bcf0  (orig 0x58bcf0, ptr_add)
void* main_f_58bcf0(void* a0) { return (char*)a0 + 88; }

// sub_58bd00  (orig 0x58bd00, getter)
uint64_t main_f_58bd00(void* a0) { return *(uint64_t*)((char*)(a0) + 136); }

// sub_58bd10  (orig 0x58bd10, getter)
uint64_t main_f_58bd10(void* a0) { return *(uint64_t*)((char*)(a0) + 136); }

// sub_58bdc0  (orig 0x58bdc0, getter)
uint32_t main_f_58bdc0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_594440  (orig 0x594440, strlit-ret)
const char *main_f_594440() { static const char s[] = "1.2.5"; __asm__ volatile("" ::: "memory"); return s; }

// sub_594580  (orig 0x594580, ret_only)
void main_f_594580() {}

// sub_594be0  (orig 0x594be0, getter)
uint64_t main_f_594be0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_594bf0  (orig 0x594bf0, getter)
uint64_t main_f_594bf0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_594ca0  (orig 0x594ca0, getter)
uint32_t main_f_594ca0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_595e00  (orig 0x595e00, getter)
uint64_t main_f_595e00(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_595e10  (orig 0x595e10, getter)
uint64_t main_f_595e10(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_595ee0  (orig 0x595ee0, getter)
uint64_t main_f_595ee0(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_596040  (orig 0x596040, getter)
uint32_t main_f_596040(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_5961b0  (orig 0x5961b0, mov_ret)
uint32_t main_f_5961b0() { return 1; }

// sub_5961f0  (orig 0x5961f0, setter-chain)
void main_f_5961f0(void* a0) { *(uint64_t*)((char*)(a0) + 40) = 0; *(uint32_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; }

// sub_596270  (orig 0x596270, ptr_add)
void* main_f_596270(void* a0) { return (char*)a0 + 24; }

// sub_5962c0  (orig 0x5962c0, getter)
uint64_t main_f_5962c0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_5962d0  (orig 0x5962d0, getter)
uint64_t main_f_5962d0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_596380  (orig 0x596380, getter)
uint32_t main_f_596380(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_5966c0  (orig 0x5966c0, mov_ret)
uint64_t main_f_5966c0() { return 0; }

// sub_5966d0  (orig 0x5966d0, ptr_add)
void* main_f_5966d0(void* a0) { return (char*)a0 + 8; }

// sub_596e60  (orig 0x596e60, ptr_add)
void* main_f_596e60(void* a0) { return (char*)a0 + 8; }

// sub_596e70  (orig 0x596e70, ptr_add)
void* main_f_596e70(void* a0) { return (char*)a0 + 104; }

// sub_596e80  (orig 0x596e80, ptr_add)
void* main_f_596e80(void* a0) { return (char*)a0 + 200; }

// sub_597920  (orig 0x597920, ptr_add)
void* main_f_597920(void* a0) { return (char*)a0 + 8; }

// sub_597930  (orig 0x597930, compare)
bool main_f_597930(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 8)) == (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_597b40  (orig 0x597b40, ptr_add)
void* main_f_597b40(void* a0) { return (char*)a0 + 8; }

// sub_597b50  (orig 0x597b50, ptr_add)
void* main_f_597b50(void* a0) { return (char*)a0 + 40; }

// sub_597b60  (orig 0x597b60, ptr_add)
void* main_f_597b60(void* a0) { return (char*)a0 + 136; }

// sub_597b70  (orig 0x597b70, ptr_add)
void* main_f_597b70(void* a0) { return (char*)a0 + 232; }

// sub_59a4f0  (orig 0x59a4f0, setter)
void main_f_59a4f0(void* a0, float a1) { *(float*)((char*)(a0) + 1036) = a1; }

// sub_59a500  (orig 0x59a500, getter)
float main_f_59a500(void* a0) { return *(float*)((char*)(a0) + 1036); }

// sub_59a530  (orig 0x59a530, getter)
uint8_t main_f_59a530(void* a0) { return *(uint8_t*)((char*)(a0) + 1025); }

// sub_59b060  (orig 0x59b060, compare)
bool main_f_59b060(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 624)) != (uint64_t)(0); }

// sub_59b2c0  (orig 0x59b2c0, straight)
void main_f_59b2c0(void* a0) {
    *(uint8_t*)((char*)(a0) + 1026) = (uint8_t)(1);
}

// sub_59b2d0  (orig 0x59b2d0, setter)
void main_f_59b2d0(void* a0) { *(uint8_t*)((char*)(a0) + 1026) = 0; }

// sub_59b2e0  (orig 0x59b2e0, getter)
uint8_t main_f_59b2e0(void* a0) { return *(uint8_t*)((char*)(a0) + 1026); }

// sub_59cda0  (orig 0x59cda0, ret_only)
void main_f_59cda0() {}

// sub_59cdb0  (orig 0x59cdb0, copy2)
void main_f_59cdb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59cdc0  (orig 0x59cdc0, copy2)
void main_f_59cdc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59cf20  (orig 0x59cf20, ret_only)
void main_f_59cf20() {}

// sub_59cf30  (orig 0x59cf30, copy2)
void main_f_59cf30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59cf40  (orig 0x59cf40, copy2)
void main_f_59cf40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59d0b0  (orig 0x59d0b0, ret_only)
void main_f_59d0b0() {}

// sub_59d0c0  (orig 0x59d0c0, copy2)
void main_f_59d0c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59d0d0  (orig 0x59d0d0, copy2)
void main_f_59d0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59d1d0  (orig 0x59d1d0, ret_only)
void main_f_59d1d0() {}

// sub_59d1e0  (orig 0x59d1e0, copy2)
void main_f_59d1e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59d1f0  (orig 0x59d1f0, copy2)
void main_f_59d1f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59d590  (orig 0x59d590, copy2)
void main_f_59d590(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1)); }

// sub_59e460  (orig 0x59e460, ret_only)
void main_f_59e460() {}

// sub_59e970  (orig 0x59e970, setter)
void main_f_59e970(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_59f220  (orig 0x59f220, ptr_add)
void* main_f_59f220(void* a0) { return (char*)a0 + 304; }

// sub_59f230  (orig 0x59f230, ptr_add)
void* main_f_59f230(void* a0) { return (char*)a0 + 304; }

// sub_59f300  (orig 0x59f300, setter)
void main_f_59f300(void* a0, float a1) { *(float*)((char*)(a0) + 496) = a1; }

// sub_59f310  (orig 0x59f310, getter)
float main_f_59f310(void* a0) { return *(float*)((char*)(a0) + 496); }

// sub_59f320  (orig 0x59f320, setter)
void main_f_59f320(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 16) = a1; }

// sub_59fa50  (orig 0x59fa50, ret_only)
void main_f_59fa50() {}

// sub_59fa60  (orig 0x59fa60, ret_only)
void main_f_59fa60() {}

// sub_5a00c0  (orig 0x5a00c0, ptr_add)
void* main_f_5a00c0(void* a0) { return (char*)a0 + 8; }

// sub_5a0600  (orig 0x5a0600, getter)
uint32_t main_f_5a0600(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_5a0790  (orig 0x5a0790, setter)
void main_f_5a0790(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0)) = a1; }

// sub_5a07a0  (orig 0x5a07a0, getter)
uint32_t main_f_5a07a0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_5a07b0  (orig 0x5a07b0, setter)
void main_f_5a07b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 4) = a1; }

// sub_5a07c0  (orig 0x5a07c0, getter)
uint32_t main_f_5a07c0(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_5a0810  (orig 0x5a0810, getter)
float main_f_5a0810(void* a0) { return *(float*)((char*)(a0) + 20); }

// sub_5a0820  (orig 0x5a0820, setter)
void main_f_5a0820(void* a0, float a1) { *(float*)((char*)(a0) + 8) = a1; }

// sub_5a08f0  (orig 0x5a08f0, getter)
uint8_t main_f_5a08f0(void* a0) { return *(uint8_t*)((char*)(a0) + 24); }

// sub_5a1180  (orig 0x5a1180, ret_only)
void main_f_5a1180() {}

// sub_5a12c0  (orig 0x5a12c0, ret_only)
void main_f_5a12c0() {}

// sub_5a2420  (orig 0x5a2420, ret_only)
void main_f_5a2420() {}

// sub_5a28c0  (orig 0x5a28c0, ret_only)
void main_f_5a28c0() {}

// sub_5a4e60  (orig 0x5a4e60, ret_only)
void main_f_5a4e60() {}

// sub_5a5060  (orig 0x5a5060, ret_only)
void main_f_5a5060() {}

// sub_5a6840  (orig 0x5a6840, mov_ret)
uint32_t main_f_5a6840() { return 0; }

// sub_5a8600  (orig 0x5a8600, ret_only)
void main_f_5a8600() {}

// sub_5a8610  (orig 0x5a8610, ret_only)
void main_f_5a8610() {}

// sub_5a8720  (orig 0x5a8720, ret_only)
void main_f_5a8720() {}

// sub_5a8740  (orig 0x5a8740, ret_only)
void main_f_5a8740() {}

// sub_5a8d70  (orig 0x5a8d70, ret_only)
void main_f_5a8d70() {}

// sub_5a8e60  (orig 0x5a8e60, ret_only)
void main_f_5a8e60() {}

// sub_5a99f0  (orig 0x5a99f0, setter)
void main_f_5a99f0(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_5a9a40  (orig 0x5a9a40, ret_only)
void main_f_5a9a40() {}

// sub_5a9a50  (orig 0x5a9a50, ret_only)
void main_f_5a9a50() {}

// sub_5a9a60  (orig 0x5a9a60, getter)
float main_f_5a9a60(void* a0) { return *(float*)((char*)(a0) + 8); }

// sub_5abaf0  (orig 0x5abaf0, ret_only)
void main_f_5abaf0() {}

// sub_5abb00  (orig 0x5abb00, ptr_add)
void* main_f_5abb00(void* a0) { return (char*)a0 + 16; }

// sub_5ac2f0  (orig 0x5ac2f0, setter)
void main_f_5ac2f0(void* a0, float a1) { *(float*)((char*)(a0) + 64) = a1; }

// sub_5ac300  (orig 0x5ac300, getter)
float main_f_5ac300(void* a0) { return *(float*)((char*)(a0) + 64); }

// sub_5b4770  (orig 0x5b4770, getter)
uint32_t main_f_5b4770(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_5b4dc0  (orig 0x5b4dc0, ptr_add)
void* main_f_5b4dc0(void* a0) { return (char*)a0 + 104; }

// sub_5b5790  (orig 0x5b5790, ptr_add)
void* main_f_5b5790(void* a0) { return (char*)a0 + 8; }

// sub_5b6420  (orig 0x5b6420, ptr_add)
void* main_f_5b6420(void* a0) { return (char*)a0 + 40; }

// sub_5b6430  (orig 0x5b6430, ptr_add)
void* main_f_5b6430(void* a0) { return (char*)a0 + 72; }

// sub_5b6440  (orig 0x5b6440, ptr_add)
void* main_f_5b6440(void* a0) { return (char*)a0 + 104; }

// sub_5b6490  (orig 0x5b6490, getter)
uint64_t main_f_5b6490(void* a0) { return *(uint64_t*)((char*)(a0) + 136); }

// sub_5b6530  (orig 0x5b6530, getter)
uint64_t main_f_5b6530(void* a0) { return *(uint64_t*)((char*)(a0) + 280); }

// sub_5b6ea0  (orig 0x5b6ea0, ptr_add)
void* main_f_5b6ea0(void* a0) { return (char*)a0 + 304; }

// sub_5b7990  (orig 0x5b7990, ptr_add)
void* main_f_5b7990(void* a0) { return (char*)a0 + 56; }

// sub_5b8140  (orig 0x5b8140, getter)
uint64_t main_f_5b8140(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_5b8150  (orig 0x5b8150, getter)
uint64_t main_f_5b8150(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_5b8160  (orig 0x5b8160, getter)
uint64_t main_f_5b8160(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_5b90b0  (orig 0x5b90b0, setter)
void main_f_5b90b0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_5b9120  (orig 0x5b9120, setter)
void main_f_5b9120(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_5b95e0  (orig 0x5b95e0, ret_only)
void main_f_5b95e0() {}

// sub_5b95f0  (orig 0x5b95f0, getter)
uint64_t main_f_5b95f0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_5b9660  (orig 0x5b9660, ret_only)
void main_f_5b9660() {}

// sub_5b9670  (orig 0x5b9670, getter)
uint64_t main_f_5b9670(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_5b9a80  (orig 0x5b9a80, compare)
bool main_f_5b9a80(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_5b9aa0  (orig 0x5b9aa0, getter)
uint64_t main_f_5b9aa0(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_5bbe30  (orig 0x5bbe30, ptr_add)
void* main_f_5bbe30(void* a0) { return (char*)a0 + 8; }

// sub_5bc060  (orig 0x5bc060, getter)
uint64_t main_f_5bc060(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_5bd6b0  (orig 0x5bd6b0, ret_only)
void main_f_5bd6b0() {}

// sub_5bd6c0  (orig 0x5bd6c0, ret_only)
void main_f_5bd6c0() {}

// sub_5bd750  (orig 0x5bd750, ret_only)
void main_f_5bd750() {}

// sub_5bdff0  (orig 0x5bdff0, ret_only)
void main_f_5bdff0() {}

// sub_5be000  (orig 0x5be000, ret_only)
void main_f_5be000() {}

// sub_5be010  (orig 0x5be010, ret_only)
void main_f_5be010() {}

// sub_5be020  (orig 0x5be020, ret_only)
void main_f_5be020() {}

// sub_5be040  (orig 0x5be040, ret_only)
void main_f_5be040() {}

// sub_5be2c0  (orig 0x5be2c0, ret_only)
void main_f_5be2c0() {}

// sub_5be7b0  (orig 0x5be7b0, ptr_add)
void* main_f_5be7b0(void* a0) { return (char*)a0 + 8; }

// sub_5be7c0  (orig 0x5be7c0, ret_only)
void main_f_5be7c0() {}

// sub_5be7d0  (orig 0x5be7d0, ret_only)
void main_f_5be7d0() {}

// sub_5be7e0  (orig 0x5be7e0, ret_only)
void main_f_5be7e0() {}

// sub_5be7f0  (orig 0x5be7f0, ret_only)
void main_f_5be7f0() {}

// sub_5be800  (orig 0x5be800, mov_ret)
uint64_t main_f_5be800() { return 0; }

// sub_5be810  (orig 0x5be810, ret_only)
void main_f_5be810() {}

// sub_5be820  (orig 0x5be820, ret_only)
void main_f_5be820() {}

// sub_5be830  (orig 0x5be830, ret_only)
void main_f_5be830() {}

// sub_5bee90  (orig 0x5bee90, getter)
uint64_t main_f_5bee90(void* a0) { return *(uint64_t*)((char*)(a0) + 432); }

// sub_5beea0  (orig 0x5beea0, getter)
uint32_t main_f_5beea0(void* a0) { return *(uint32_t*)((char*)(a0) + 512); }

// sub_5c0a90  (orig 0x5c0a90, ptr_add)
void* main_f_5c0a90(void* a0) { return (char*)a0 + 8; }

// sub_5c0aa0  (orig 0x5c0aa0, ptr_add)
void* main_f_5c0aa0(void* a0) { return (char*)a0 + 80; }

// sub_5c4b60  (orig 0x5c4b60, setter)
void main_f_5c4b60(void* a0, float a1) { *(float*)((char*)(a0) + 536) = a1; }

// sub_5c4b70  (orig 0x5c4b70, straight)
void main_f_5c4b70(void* a0) {
    *(uint8_t*)((char*)(a0) + 544) = (uint8_t)(1);
}

// sub_5c51a0  (orig 0x5c51a0, setter)
void main_f_5c51a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_5c5480  (orig 0x5c5480, ptr_add)
void* main_f_5c5480(void* a0) { return (char*)a0 + 288; }

// sub_5c5490  (orig 0x5c5490, ptr_add)
void* main_f_5c5490(void* a0) { return (char*)a0 + 288; }

// sub_5c54a0  (orig 0x5c54a0, setter-chain)
void main_f_5c54a0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; *(uint32_t*)((char*)(a0) + 64) = 0; *(uint64_t*)((char*)(a0) + 96) = 0; *(uint32_t*)((char*)(a0) + 104) = 0; }

// sub_5c5e30  (orig 0x5c5e30, setter)
void main_f_5c5e30(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_5c6110  (orig 0x5c6110, ret_only)
void main_f_5c6110() {}

// sub_5c6450  (orig 0x5c6450, getter)
uint64_t main_f_5c6450(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_5c6870  (orig 0x5c6870, setter-chain-zero)
void main_f_5c6870(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a0 + 8) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 48) = 0;
}

// sub_5c6930  (orig 0x5c6930, getter)
uint8_t main_f_5c6930(void* a0) { return *(uint8_t*)((char*)(a0) + 8); }

// sub_5cc690  (orig 0x5cc690, ret_only)
void main_f_5cc690() {}

// sub_5cf830  (orig 0x5cf830, ret_only)
void main_f_5cf830() {}

// sub_5cf840  (orig 0x5cf840, mov_ret)
uint32_t main_f_5cf840() { return 1; }

// sub_5cf860  (orig 0x5cf860, ret_only)
void main_f_5cf860() {}

// sub_5cf940  (orig 0x5cf940, setter)
void main_f_5cf940(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 144) = a1; }

// sub_5cfb80  (orig 0x5cfb80, ret_only)
void main_f_5cfb80() {}

// sub_5cfe80  (orig 0x5cfe80, ret_only)
void main_f_5cfe80() {}

// sub_5cfee0  (orig 0x5cfee0, ret_only)
void main_f_5cfee0() {}

// sub_5cfef0  (orig 0x5cfef0, ret_only)
void main_f_5cfef0() {}

// sub_5d8510  (orig 0x5d8510, ret_only)
void main_f_5d8510() {}

// sub_5d8590  (orig 0x5d8590, ret_only)
void main_f_5d8590() {}

// sub_5d9e70  (orig 0x5d9e70, ret_only)
void main_f_5d9e70() {}

// sub_5d9e80  (orig 0x5d9e80, struct-copy)
void main_f_5d9e80(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_5d9ea0  (orig 0x5d9ea0, struct-copy)
void main_f_5d9ea0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_5db440  (orig 0x5db440, ret_only)
void main_f_5db440() {}

// sub_5db450  (orig 0x5db450, ret_only)
void main_f_5db450() {}

// sub_5db460  (orig 0x5db460, ret_only)
void main_f_5db460() {}

// sub_5dba50  (orig 0x5dba50, mov_ret)
uint32_t main_f_5dba50() { return 0; }

// sub_5dfce0  (orig 0x5dfce0, ret_only)
void main_f_5dfce0() {}

// sub_5dfe10  (orig 0x5dfe10, ret_only)
void main_f_5dfe10() {}

// sub_5dffe0  (orig 0x5dffe0, mov_ret)
uint32_t main_f_5dffe0() { return 2; }

// sub_5dfff0  (orig 0x5dfff0, indexed-getter)
uint64_t main_f_5dfff0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_5e0000  (orig 0x5e0000, indexed-getter)
uint64_t main_f_5e0000(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_5e0070  (orig 0x5e0070, mov_ret)
uint32_t main_f_5e0070() { return 2; }

// sub_5e0610  (orig 0x5e0610, ret_only)
void main_f_5e0610() {}

// sub_5e0690  (orig 0x5e0690, ret_only)
void main_f_5e0690() {}

// sub_5e08f0  (orig 0x5e08f0, ret_only)
void main_f_5e08f0() {}

// sub_5e0970  (orig 0x5e0970, ret_only)
void main_f_5e0970() {}

// sub_5e1f50  (orig 0x5e1f50, ret_only)
void main_f_5e1f50() {}

// sub_5e1f60  (orig 0x5e1f60, copy2)
void main_f_5e1f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5e1f70  (orig 0x5e1f70, copy2)
void main_f_5e1f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5e3630  (orig 0x5e3630, ret_only)
void main_f_5e3630() {}

// sub_5e3690  (orig 0x5e3690, ret_only)
void main_f_5e3690() {}

// sub_5e36a0  (orig 0x5e36a0, ret_only)
void main_f_5e36a0() {}

// sub_5e65a0  (orig 0x5e65a0, getter)
uint32_t main_f_5e65a0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_5e6760  (orig 0x5e6760, copy2)
void main_f_5e6760(void* a0, void* a1) { *(uint32_t*)((char*)(a0)) = *(uint32_t*)((char*)(a1)); }

// sub_5eb520  (orig 0x5eb520, mov_ret)
uint32_t main_f_5eb520() { return 2; }

// sub_5eb530  (orig 0x5eb530, indexed-getter)
uint64_t main_f_5eb530(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_5eb540  (orig 0x5eb540, indexed-getter)
uint64_t main_f_5eb540(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_5eb690  (orig 0x5eb690, mov_ret)
uint32_t main_f_5eb690() { return 2; }

// sub_5ec250  (orig 0x5ec250, ret_only)
void main_f_5ec250() {}

// sub_5ec2d0  (orig 0x5ec2d0, ret_only)
void main_f_5ec2d0() {}

// sub_5eca10  (orig 0x5eca10, ret_only)
void main_f_5eca10() {}

// sub_5eca20  (orig 0x5eca20, copy2)
void main_f_5eca20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5eca30  (orig 0x5eca30, copy2)
void main_f_5eca30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5ece00  (orig 0x5ece00, ret_only)
void main_f_5ece00() {}

// sub_5ee0c0  (orig 0x5ee0c0, ret_only)
void main_f_5ee0c0() {}

// sub_5ee0d0  (orig 0x5ee0d0, copy2)
void main_f_5ee0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5ee0e0  (orig 0x5ee0e0, copy2)
void main_f_5ee0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5ee4c0  (orig 0x5ee4c0, ptr_add)
void* main_f_5ee4c0(void* a0) { return (char*)a0 + 360; }

// sub_5f1b10  (orig 0x5f1b10, ret_only)
void main_f_5f1b10() {}

// sub_5f1b20  (orig 0x5f1b20, copy2)
void main_f_5f1b20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5f1b30  (orig 0x5f1b30, copy2)
void main_f_5f1b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5f21a0  (orig 0x5f21a0, mov_ret)
uint32_t main_f_5f21a0() { return 1; }

// sub_5f21b0  (orig 0x5f21b0, mov_ret)
uint32_t main_f_5f21b0() { return 1; }

// sub_5f22d0  (orig 0x5f22d0, setter)
void main_f_5f22d0(void* a0) { *(uint8_t*)((char*)(a0) + 2208) = 0; }

// sub_5f5760  (orig 0x5f5760, getter)
uint64_t main_f_5f5760(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_5f71b0  (orig 0x5f71b0, ret_only)
void main_f_5f71b0() {}

// sub_5f8310  (orig 0x5f8310, ret_only)
void main_f_5f8310() {}

// sub_5f8320  (orig 0x5f8320, ret_only)
void main_f_5f8320() {}

// sub_5f8ac0  (orig 0x5f8ac0, ret_only)
void main_f_5f8ac0() {}

// sub_5f8ad0  (orig 0x5f8ad0, struct-copy)
void main_f_5f8ad0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_5f8af0  (orig 0x5f8af0, struct-copy)
void main_f_5f8af0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_5f9d30  (orig 0x5f9d30, ret_only)
void main_f_5f9d30() {}

// sub_5f9d40  (orig 0x5f9d40, ret_only)
void main_f_5f9d40() {}

// sub_5fd510  (orig 0x5fd510, ret_only)
void main_f_5fd510() {}

// sub_5fd590  (orig 0x5fd590, ret_only)
void main_f_5fd590() {}

// sub_5fe3a0  (orig 0x5fe3a0, ret_only)
void main_f_5fe3a0() {}

// sub_5fe3b0  (orig 0x5fe3b0, ret_only)
void main_f_5fe3b0() {}

// sub_5fe3c0  (orig 0x5fe3c0, ret_only)
void main_f_5fe3c0() {}

// sub_5ff310  (orig 0x5ff310, getter)
uint32_t main_f_5ff310(void* a0) { return *(uint32_t*)((char*)(a0) + 1184); }

// sub_5ff320  (orig 0x5ff320, getter)
uint32_t main_f_5ff320(void* a0) { return *(uint32_t*)((char*)(a0) + 1188); }

// sub_5ff390  (orig 0x5ff390, ret_only)
void main_f_5ff390() {}

// sub_5ff3a0  (orig 0x5ff3a0, ret_only)
void main_f_5ff3a0() {}

// sub_600360  (orig 0x600360, ret_only)
void main_f_600360() {}

// sub_600370  (orig 0x600370, copy2)
void main_f_600370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_600380  (orig 0x600380, copy2)
void main_f_600380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6008d0  (orig 0x6008d0, ret_only)
void main_f_6008d0() {}

// sub_6008e0  (orig 0x6008e0, copy2)
void main_f_6008e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6008f0  (orig 0x6008f0, copy2)
void main_f_6008f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6014f0  (orig 0x6014f0, ret_only)
void main_f_6014f0() {}

// sub_6036e0  (orig 0x6036e0, ret_only)
void main_f_6036e0() {}

// sub_604130  (orig 0x604130, ret_only)
void main_f_604130() {}

// sub_604140  (orig 0x604140, struct-copy)
void main_f_604140(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_604160  (orig 0x604160, struct-copy)
void main_f_604160(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_606f00  (orig 0x606f00, ret_only)
void main_f_606f00() {}

// sub_606f10  (orig 0x606f10, copy2)
void main_f_606f10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_606f20  (orig 0x606f20, copy2)
void main_f_606f20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_609a40  (orig 0x609a40, ret_only)
void main_f_609a40() {}

// sub_60e850  (orig 0x60e850, ret_only)
void main_f_60e850() {}

// sub_60e860  (orig 0x60e860, copy2)
void main_f_60e860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_60e870  (orig 0x60e870, copy2)
void main_f_60e870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_612340  (orig 0x612340, ret_only)
void main_f_612340() {}

// sub_619490  (orig 0x619490, ret_only)
void main_f_619490() {}

// sub_619980  (orig 0x619980, ret_only)
void main_f_619980() {}

// sub_619990  (orig 0x619990, copy2)
void main_f_619990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6199a0  (orig 0x6199a0, copy2)
void main_f_6199a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_619a80  (orig 0x619a80, mov_ret)
uint32_t main_f_619a80() { return 1; }

// sub_619b80  (orig 0x619b80, ret_only)
void main_f_619b80() {}

// sub_619b90  (orig 0x619b90, copy2)
void main_f_619b90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_619ba0  (orig 0x619ba0, copy2)
void main_f_619ba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_61b1f0  (orig 0x61b1f0, mov_ret)
uint32_t main_f_61b1f0() { return 1; }

// sub_61d200  (orig 0x61d200, mov_ret)
uint32_t main_f_61d200() { return 5; }

// sub_61d680  (orig 0x61d680, ret_only)
void main_f_61d680() {}

// sub_61d690  (orig 0x61d690, copy2)
void main_f_61d690(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_61d6a0  (orig 0x61d6a0, copy2)
void main_f_61d6a0(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_61e860  (orig 0x61e860, ret_only)
void main_f_61e860() {}

// sub_61e870  (orig 0x61e870, copy2)
void main_f_61e870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_61e880  (orig 0x61e880, copy2)
void main_f_61e880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_620110  (orig 0x620110, ret_only)
void main_f_620110() {}

// sub_620820  (orig 0x620820, setter)
void main_f_620820(void* a0, float a1) { *(float*)((char*)(a0)) = a1; }

// sub_622350  (orig 0x622350, mov_ret)
uint32_t main_f_622350() { return 2; }

// sub_623b80  (orig 0x623b80, ret_only)
void main_f_623b80() {}

// sub_623b90  (orig 0x623b90, copy2)
void main_f_623b90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_623ba0  (orig 0x623ba0, copy2)
void main_f_623ba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6356a0  (orig 0x6356a0, ptr_add)
void* main_f_6356a0(void* a0) { return (char*)a0 + 168; }

// sub_635810  (orig 0x635810, straight)
void main_f_635810(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 216) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 208) = *(uint64_t*)((char*)(a1));
}

// sub_635830  (orig 0x635830, ptr_add)
void* main_f_635830(void* a0) { return (char*)a0 + 208; }

// sub_635860  (orig 0x635860, setter)
void main_f_635860(void* a0, float a1) { *(float*)((char*)(a0) + 324) = a1; }

// sub_635870  (orig 0x635870, getter)
float main_f_635870(void* a0) { return *(float*)((char*)(a0) + 324); }

// sub_635880  (orig 0x635880, straight)
void main_f_635880(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 232) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 224) = *(uint64_t*)((char*)(a1));
}

// sub_6358f0  (orig 0x6358f0, ptr_add)
void* main_f_6358f0(void* a0) { return (char*)a0 + 224; }

// sub_635900  (orig 0x635900, setter)
void main_f_635900(void* a0, float a1) { *(float*)((char*)(a0) + 320) = a1; }

// sub_635910  (orig 0x635910, getter)
float main_f_635910(void* a0) { return *(float*)((char*)(a0) + 320); }

// sub_635920  (orig 0x635920, straight)
void main_f_635920(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 200) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 192) = *(uint64_t*)((char*)(a1));
}

// sub_635940  (orig 0x635940, ptr_add)
void* main_f_635940(void* a0) { return (char*)a0 + 192; }

// sub_635950  (orig 0x635950, straight)
void main_f_635950(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 280) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 272) = *(uint64_t*)((char*)(a1));
}

// sub_635970  (orig 0x635970, ptr_add)
void* main_f_635970(void* a0) { return (char*)a0 + 272; }

// sub_635980  (orig 0x635980, straight)
void main_f_635980(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 248) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 240) = *(uint64_t*)((char*)(a1));
}

// sub_6359a0  (orig 0x6359a0, ptr_add)
void* main_f_6359a0(void* a0) { return (char*)a0 + 240; }

// sub_635a70  (orig 0x635a70, straight)
void main_f_635a70(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 296) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 288) = *(uint64_t*)((char*)(a1));
}

// sub_635a90  (orig 0x635a90, ptr_add)
void* main_f_635a90(void* a0) { return (char*)a0 + 288; }

// sub_635aa0  (orig 0x635aa0, straight)
void main_f_635aa0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 264) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 256) = *(uint64_t*)((char*)(a1));
}

// sub_635ac0  (orig 0x635ac0, ptr_add)
void* main_f_635ac0(void* a0) { return (char*)a0 + 256; }

// sub_6362d0  (orig 0x6362d0, ptr_add)
void* main_f_6362d0(void* a0) { return (char*)a0 + 152; }

// sub_6362e0  (orig 0x6362e0, ptr_add)
void* main_f_6362e0(void* a0) { return (char*)a0 + 120; }

// sub_636360  (orig 0x636360, ptr_add)
void* main_f_636360(void* a0) { return (char*)a0 + 48; }

// sub_636430  (orig 0x636430, straight)
void main_f_636430(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 176) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 168) = *(uint64_t*)((char*)(a1));
}

// sub_636450  (orig 0x636450, ptr_add)
void* main_f_636450(void* a0) { return (char*)a0 + 168; }

// sub_636460  (orig 0x636460, straight)
void main_f_636460(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 144) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 136) = *(uint64_t*)((char*)(a1));
}

// sub_636480  (orig 0x636480, ptr_add)
void* main_f_636480(void* a0) { return (char*)a0 + 136; }

// sub_636490  (orig 0x636490, straight)
void main_f_636490(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 160) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 152) = *(uint64_t*)((char*)(a1));
}

// sub_6364b0  (orig 0x6364b0, straight)
void main_f_6364b0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 128) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1));
}

// sub_636760  (orig 0x636760, ptr_add)
void* main_f_636760(void* a0) { return (char*)a0 + 144; }

// sub_636770  (orig 0x636770, ptr_add)
void* main_f_636770(void* a0) { return (char*)a0 + 112; }

// sub_6367f0  (orig 0x6367f0, ptr_add)
void* main_f_6367f0(void* a0) { return (char*)a0 + 40; }

// sub_6368c0  (orig 0x6368c0, straight)
void main_f_6368c0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 168) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 160) = *(uint64_t*)((char*)(a1));
}

// sub_6368e0  (orig 0x6368e0, ptr_add)
void* main_f_6368e0(void* a0) { return (char*)a0 + 160; }

// sub_6368f0  (orig 0x6368f0, straight)
void main_f_6368f0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 136) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 128) = *(uint64_t*)((char*)(a1));
}

// sub_636910  (orig 0x636910, ptr_add)
void* main_f_636910(void* a0) { return (char*)a0 + 128; }

// sub_636920  (orig 0x636920, straight)
void main_f_636920(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 112) = *(uint64_t*)((char*)(a1));
}

// sub_636ab0  (orig 0x636ab0, straight)
void main_f_636ab0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 88) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 80) = *(uint64_t*)((char*)(a1));
}

// sub_636ad0  (orig 0x636ad0, ptr_add)
void* main_f_636ad0(void* a0) { return (char*)a0 + 80; }

// sub_636b10  (orig 0x636b10, setter)
void main_f_636b10(void* a0, float a1) { *(float*)((char*)(a0) + 196) = a1; }

// sub_636b20  (orig 0x636b20, getter)
float main_f_636b20(void* a0) { return *(float*)((char*)(a0) + 196); }

// sub_636b30  (orig 0x636b30, straight)
void main_f_636b30(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 72) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 64) = *(uint64_t*)((char*)(a1));
}

// sub_636b50  (orig 0x636b50, ptr_add)
void* main_f_636b50(void* a0) { return (char*)a0 + 64; }

// sub_636df0  (orig 0x636df0, ptr_add)
void* main_f_636df0(void* a0) { return (char*)a0 + 136; }

// sub_636e00  (orig 0x636e00, ptr_add)
void* main_f_636e00(void* a0) { return (char*)a0 + 104; }

// sub_636e80  (orig 0x636e80, ptr_add)
void* main_f_636e80(void* a0) { return (char*)a0 + 32; }

// sub_636f50  (orig 0x636f50, straight)
void main_f_636f50(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 160) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 152) = *(uint64_t*)((char*)(a1));
}

// sub_636f70  (orig 0x636f70, ptr_add)
void* main_f_636f70(void* a0) { return (char*)a0 + 152; }

// sub_636f80  (orig 0x636f80, straight)
void main_f_636f80(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 128) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1));
}

// sub_636fa0  (orig 0x636fa0, ptr_add)
void* main_f_636fa0(void* a0) { return (char*)a0 + 120; }

// sub_636fb0  (orig 0x636fb0, straight)
void main_f_636fb0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 144) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 136) = *(uint64_t*)((char*)(a1));
}

// sub_636fd0  (orig 0x636fd0, straight)
void main_f_636fd0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 96) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 88) = *(uint64_t*)((char*)(a1));
}

// sub_637040  (orig 0x637040, setter)
void main_f_637040(void* a0, float a1) { *(float*)((char*)(a0) + 184) = a1; }

// sub_637050  (orig 0x637050, getter)
float main_f_637050(void* a0) { return *(float*)((char*)(a0) + 184); }

// sub_6372f0  (orig 0x6372f0, ptr_add)
void* main_f_6372f0(void* a0) { return (char*)a0 + 128; }

// sub_637300  (orig 0x637300, ptr_add)
void* main_f_637300(void* a0) { return (char*)a0 + 96; }

// sub_637380  (orig 0x637380, ptr_add)
void* main_f_637380(void* a0) { return (char*)a0 + 24; }

// sub_637450  (orig 0x637450, straight)
void main_f_637450(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 152) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 144) = *(uint64_t*)((char*)(a1));
}

// sub_637470  (orig 0x637470, ptr_add)
void* main_f_637470(void* a0) { return (char*)a0 + 144; }

// sub_637480  (orig 0x637480, straight)
void main_f_637480(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 112) = *(uint64_t*)((char*)(a1));
}

// sub_6374a0  (orig 0x6374a0, ptr_add)
void* main_f_6374a0(void* a0) { return (char*)a0 + 112; }

// sub_6374b0  (orig 0x6374b0, straight)
void main_f_6374b0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 104) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 96) = *(uint64_t*)((char*)(a1));
}

// sub_637640  (orig 0x637640, straight)
void main_f_637640(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 72) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 64) = *(uint64_t*)((char*)(a1));
}

// sub_637660  (orig 0x637660, ptr_add)
void* main_f_637660(void* a0) { return (char*)a0 + 64; }

// sub_6376a0  (orig 0x6376a0, setter)
void main_f_6376a0(void* a0, float a1) { *(float*)((char*)(a0) + 180) = a1; }

// sub_6376b0  (orig 0x6376b0, getter)
float main_f_6376b0(void* a0) { return *(float*)((char*)(a0) + 180); }

// sub_6376c0  (orig 0x6376c0, straight)
void main_f_6376c0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 88) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 80) = *(uint64_t*)((char*)(a1));
}

// sub_637730  (orig 0x637730, ptr_add)
void* main_f_637730(void* a0) { return (char*)a0 + 80; }

// sub_6379d0  (orig 0x6379d0, ptr_add)
void* main_f_6379d0(void* a0) { return (char*)a0 + 120; }

// sub_6379e0  (orig 0x6379e0, ptr_add)
void* main_f_6379e0(void* a0) { return (char*)a0 + 88; }

// sub_637a60  (orig 0x637a60, ptr_add)
void* main_f_637a60(void* a0) { return (char*)a0 + 16; }

// sub_637b30  (orig 0x637b30, straight)
void main_f_637b30(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 144) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 136) = *(uint64_t*)((char*)(a1));
}

// sub_637b50  (orig 0x637b50, ptr_add)
void* main_f_637b50(void* a0) { return (char*)a0 + 136; }

// sub_637b60  (orig 0x637b60, straight)
void main_f_637b60(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 112) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 104) = *(uint64_t*)((char*)(a1));
}

// sub_637b80  (orig 0x637b80, ptr_add)
void* main_f_637b80(void* a0) { return (char*)a0 + 104; }

// sub_637b90  (orig 0x637b90, straight)
void main_f_637b90(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 128) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1));
}

// sub_637bb0  (orig 0x637bb0, straight)
void main_f_637bb0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 96) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 88) = *(uint64_t*)((char*)(a1));
}

// sub_637be0  (orig 0x637be0, straight)
void main_f_637be0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 64) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 56) = *(uint64_t*)((char*)(a1));
}

// sub_637c00  (orig 0x637c00, ptr_add)
void* main_f_637c00(void* a0) { return (char*)a0 + 56; }

// sub_637c20  (orig 0x637c20, setter)
void main_f_637c20(void* a0, float a1) { *(float*)((char*)(a0) + 172) = a1; }

// sub_637c30  (orig 0x637c30, getter)
float main_f_637c30(void* a0) { return *(float*)((char*)(a0) + 172); }

// sub_637c40  (orig 0x637c40, straight)
void main_f_637c40(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 48) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 40) = *(uint64_t*)((char*)(a1));
}

// sub_637c60  (orig 0x637c60, ptr_add)
void* main_f_637c60(void* a0) { return (char*)a0 + 40; }

// sub_637c70  (orig 0x637c70, straight)
void main_f_637c70(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 80) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 72) = *(uint64_t*)((char*)(a1));
}

// sub_637ce0  (orig 0x637ce0, ptr_add)
void* main_f_637ce0(void* a0) { return (char*)a0 + 72; }

// sub_63bea0  (orig 0x63bea0, straight)
void main_f_63bea0(void* a0, void* a1, void* a2) {
    *(uint16_t*)((char*)(a0) + 1588) = *(uint16_t*)((char*)(a1));
    *(uint16_t*)((char*)(a0) + 1590) = *(uint16_t*)((char*)(a2));
}

// sub_63bec0  (orig 0x63bec0, copy2)
void main_f_63bec0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 1728) = *(uint32_t*)((char*)(a1)); }

// sub_63bed0  (orig 0x63bed0, copy2)
void main_f_63bed0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 1732) = *(uint32_t*)((char*)(a1)); }

// sub_63bee0  (orig 0x63bee0, copy2)
void main_f_63bee0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 1576) = *(uint32_t*)((char*)(a1)); }

// sub_63bef0  (orig 0x63bef0, copy2)
void main_f_63bef0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 1580) = *(uint32_t*)((char*)(a1)); }

// sub_63bf00  (orig 0x63bf00, copy2)
void main_f_63bf00(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 1584) = *(uint32_t*)((char*)(a1)); }

// sub_63bf10  (orig 0x63bf10, copy2)
void main_f_63bf10(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 1736) = *(uint32_t*)((char*)(a1)); }

// sub_63e2f0  (orig 0x63e2f0, ret_only)
void main_f_63e2f0() {}

// sub_63e300  (orig 0x63e300, copy2)
void main_f_63e300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_63e310  (orig 0x63e310, copy2)
void main_f_63e310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6403d0  (orig 0x6403d0, ret_only)
void main_f_6403d0() {}

// sub_6403e0  (orig 0x6403e0, ret_only)
void main_f_6403e0() {}

// sub_6403f0  (orig 0x6403f0, ret_only)
void main_f_6403f0() {}

// sub_640400  (orig 0x640400, ret_only)
void main_f_640400() {}

// sub_640420  (orig 0x640420, ret_only)
void main_f_640420() {}

// sub_6431e0  (orig 0x6431e0, ret_only)
void main_f_6431e0() {}

// sub_6431f0  (orig 0x6431f0, copy2)
void main_f_6431f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_643200  (orig 0x643200, copy2)
void main_f_643200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_64d770  (orig 0x64d770, setter)
void main_f_64d770(void* a0, float a1) { *(float*)((char*)(a0) + 624) = a1; }

// sub_658df0  (orig 0x658df0, getter)
uint32_t main_f_658df0(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_65b680  (orig 0x65b680, mov_ret)
uint32_t main_f_65b680() { return -1; }

// sub_65cd10  (orig 0x65cd10, straight)
void main_f_65cd10(void* a0, void* a1, void* a2, void* a3) {
    *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1));
    *(uint64_t*)((char*)(a0) + 24) = *(uint64_t*)((char*)(a2) + 8);
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a2));
    *(uint64_t*)((char*)(a0) + 40) = *(uint64_t*)((char*)(a3) + 8);
    *(uint64_t*)((char*)(a0) + 32) = *(uint64_t*)((char*)(a3));
}

// sub_65cd50  (orig 0x65cd50, straight)
void main_f_65cd50(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1));
}

// sub_65cd70  (orig 0x65cd70, straight)
void main_f_65cd70(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 24) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a1));
}

// sub_65cd90  (orig 0x65cd90, straight)
void main_f_65cd90(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 40) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 32) = *(uint64_t*)((char*)(a1));
}

// sub_65dbb0  (orig 0x65dbb0, mov_ret)
uint32_t main_f_65dbb0() { return -1; }

// sub_65dbc0  (orig 0x65dbc0, ret_only)
void main_f_65dbc0() {}

// sub_65dbd0  (orig 0x65dbd0, mov_ret)
uint64_t main_f_65dbd0() { return 0; }

// sub_65dd50  (orig 0x65dd50, setter)
void main_f_65dd50(void* a0) { *(uint8_t*)((char*)(a0) + 13) = 0; }

// sub_65e0c0  (orig 0x65e0c0, getter)
uint32_t main_f_65e0c0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_65ea00  (orig 0x65ea00, getter)
uint64_t main_f_65ea00(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_65edc0  (orig 0x65edc0, setter-chain-zero)
void main_f_65edc0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 48) = 0;
}

// sub_65edd0  (orig 0x65edd0, getter)
uint64_t main_f_65edd0(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_65ede0  (orig 0x65ede0, getter)
uint64_t main_f_65ede0(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_65ee30  (orig 0x65ee30, getter)
uint64_t main_f_65ee30(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_65f1a0  (orig 0x65f1a0, getter)
uint64_t main_f_65f1a0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_65f1b0  (orig 0x65f1b0, setter)
void main_f_65f1b0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 16) = a1; }

// sub_65fb00  (orig 0x65fb00, ret_only)
void main_f_65fb00() {}

// sub_65fb10  (orig 0x65fb10, mov_ret)
uint64_t main_f_65fb10() { return 0; }

// sub_663d20  (orig 0x663d20, ret_only)
void main_f_663d20() {}

// sub_666a30  (orig 0x666a30, ret_only)
void main_f_666a30() {}

// sub_667cc0  (orig 0x667cc0, ret_only)
void main_f_667cc0() {}

// sub_667e60  (orig 0x667e60, compare)
bool main_f_667e60(void* a0) { return (int64_t)(*(uint64_t*)((char*)(a0) + 168)) > (int64_t)(1); }

// sub_66abc0  (orig 0x66abc0, ret_only)
void main_f_66abc0() {}

// sub_66abd0  (orig 0x66abd0, copy2)
void main_f_66abd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_66abe0  (orig 0x66abe0, copy2)
void main_f_66abe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_66c130  (orig 0x66c130, mov_ret)
uint32_t main_f_66c130() { return 0; }

// sub_66fc10  (orig 0x66fc10, mov_ret)
uint32_t main_f_66fc10() { return 0; }

// sub_66fc20  (orig 0x66fc20, mov_ret)
uint32_t main_f_66fc20() { return 0; }

// sub_6707e0  (orig 0x6707e0, getter)
uint32_t main_f_6707e0(void* a0) { return *(uint32_t*)((char*)(a0) + 472); }

// sub_670800  (orig 0x670800, getter)
uint8_t main_f_670800(void* a0) { return *(uint8_t*)((char*)(a0) + 496); }

// sub_670810  (orig 0x670810, getter)
uint32_t main_f_670810(void* a0) { return *(uint32_t*)((char*)(a0) + 500); }

// sub_670820  (orig 0x670820, getter)
uint32_t main_f_670820(void* a0) { return *(uint32_t*)((char*)(a0) + 504); }

// sub_671ce0  (orig 0x671ce0, setter)
void main_f_671ce0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 504) = a1; }

// sub_671cf0  (orig 0x671cf0, setter)
void main_f_671cf0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 404) = a1; }

// sub_6791a0  (orig 0x6791a0, ret_only)
void main_f_6791a0() {}

// sub_679bd0  (orig 0x679bd0, ret_only)
void main_f_679bd0() {}

// sub_679be0  (orig 0x679be0, copy2)
void main_f_679be0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_679bf0  (orig 0x679bf0, copy2)
void main_f_679bf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_679c20  (orig 0x679c20, ret_only)
void main_f_679c20() {}

// sub_679c30  (orig 0x679c30, copy2)
void main_f_679c30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_679c40  (orig 0x679c40, copy2)
void main_f_679c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_679c60  (orig 0x679c60, ret_only)
void main_f_679c60() {}

// sub_679c70  (orig 0x679c70, copy2)
void main_f_679c70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_679c80  (orig 0x679c80, copy2)
void main_f_679c80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_679cd0  (orig 0x679cd0, ret_only)
void main_f_679cd0() {}

// sub_679ce0  (orig 0x679ce0, ret_only)
void main_f_679ce0() {}

// sub_679d30  (orig 0x679d30, ret_only)
void main_f_679d30() {}

// sub_67a0b0  (orig 0x67a0b0, ret_only)
void main_f_67a0b0() {}

// sub_67a160  (orig 0x67a160, ret_only)
void main_f_67a160() {}

// sub_67a1c0  (orig 0x67a1c0, ret_only)
void main_f_67a1c0() {}

// sub_67a650  (orig 0x67a650, ret_only)
void main_f_67a650() {}

// sub_67b740  (orig 0x67b740, mov_ret)
uint32_t main_f_67b740() { return 1; }

// sub_67b750  (orig 0x67b750, mov_ret)
uint32_t main_f_67b750() { return 1; }

// sub_67b760  (orig 0x67b760, ret_only)
void main_f_67b760() {}

// sub_67b770  (orig 0x67b770, ret_only)
void main_f_67b770() {}

// sub_67b780  (orig 0x67b780, getter)
uint8_t main_f_67b780(void* a0) { return *(uint8_t*)((char*)(a0) + 808); }

// sub_67b790  (orig 0x67b790, getter)
uint8_t main_f_67b790(void* a0) { return *(uint8_t*)((char*)(a0) + 800); }

// sub_67b7a0  (orig 0x67b7a0, ret_only)
void main_f_67b7a0() {}

// sub_67b7c0  (orig 0x67b7c0, ret_only)
void main_f_67b7c0() {}

// sub_67bdb0  (orig 0x67bdb0, getter)
uint64_t main_f_67bdb0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_67bdc0  (orig 0x67bdc0, getter)
uint16_t main_f_67bdc0(void* a0) { return *(uint16_t*)((char*)(a0) + 122); }

// sub_67bdd0  (orig 0x67bdd0, getter)
uint16_t main_f_67bdd0(void* a0) { return *(uint16_t*)((char*)(a0) + 120); }

// sub_67c960  (orig 0x67c960, ret_only)
void main_f_67c960() {}

// sub_67d360  (orig 0x67d360, getter-chain)
uint16_t main_f_67d360(void* a0) { return *(uint16_t*)((char*)((*(uint64_t*)((char*)(a0) + 144))) + 2); }

// sub_67e9f0  (orig 0x67e9f0, setter-chain)
void main_f_67e9f0(void* a0, uint8_t a1, uint8_t a2) { *(uint8_t*)((char*)(a0) + 157) = a1; *(uint8_t*)((char*)(a0) + 165) = a1; *(uint8_t*)((char*)(a0) + 164) = a2; *(uint8_t*)((char*)(a0) + 166) = a2; }

// sub_67ea10  (orig 0x67ea10, setter-chain)
void main_f_67ea10(void* a0, uint8_t a1, uint8_t a2) { *(uint8_t*)((char*)(a0) + 157) = a1; *(uint8_t*)((char*)(a0) + 164) = a2; }

// sub_67ea20  (orig 0x67ea20, straight)
void main_f_67ea20(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a1)) = (uint32_t)(*(uint8_t*)((char*)(a0) + 157));
    *(uint32_t*)((char*)(a2)) = (uint32_t)(*(uint8_t*)((char*)(a0) + 164));
}

// sub_67ea40  (orig 0x67ea40, setter)
void main_f_67ea40(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 148) = a1; }

// sub_67ea50  (orig 0x67ea50, setter)
void main_f_67ea50(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 150) = a1; }

// sub_67ebe0  (orig 0x67ebe0, ret_only)
void main_f_67ebe0() {}

// sub_67ebf0  (orig 0x67ebf0, ret_only)
void main_f_67ebf0() {}

// sub_67ec00  (orig 0x67ec00, mov_ret)
uint32_t main_f_67ec00() { return 0; }

// sub_67ec10  (orig 0x67ec10, mov_ret)
uint32_t main_f_67ec10() { return 1; }

// sub_67ec20  (orig 0x67ec20, mov_ret)
uint32_t main_f_67ec20() { return 0; }

// sub_67ec30  (orig 0x67ec30, ret_only)
void main_f_67ec30() {}

// sub_67ec40  (orig 0x67ec40, mov_ret)
uint32_t main_f_67ec40() { return 0; }

// sub_67f4a0  (orig 0x67f4a0, straight)
void main_f_67f4a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 168) = 2;
}

// sub_67f4b0  (orig 0x67f4b0, getter)
uint32_t main_f_67f4b0(void* a0) { return *(uint32_t*)((char*)(a0) + 168); }

// sub_67f540  (orig 0x67f540, getter)
uint64_t main_f_67f540(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_67f940  (orig 0x67f940, ret_only)
void main_f_67f940() {}

// sub_67f950  (orig 0x67f950, copy2)
void main_f_67f950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_67f960  (orig 0x67f960, copy2)
void main_f_67f960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_67fb20  (orig 0x67fb20, setter)
void main_f_67fb20(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_680570  (orig 0x680570, getter)
float main_f_680570(void* a0) { return *(float*)((char*)(a0) + 152); }

// sub_680be0  (orig 0x680be0, ptr_add)
void* main_f_680be0(void* a0) { return (char*)a0 + 8; }

// sub_680bf0  (orig 0x680bf0, ptr_add)
void* main_f_680bf0(void* a0) { return (char*)a0 + 40; }

// sub_6812d0  (orig 0x6812d0, getter)
uint32_t main_f_6812d0(void* a0) { return *(uint32_t*)((char*)(a0) + 72); }

// sub_681620  (orig 0x681620, ptr_add)
void* main_f_681620(void* a0) { return (char*)a0 + 88; }

// sub_681630  (orig 0x681630, ret_only)
void main_f_681630() {}

// sub_6816b0  (orig 0x6816b0, ret_only)
void main_f_6816b0() {}

// sub_681fa0  (orig 0x681fa0, ret_only)
void main_f_681fa0() {}

// sub_683670  (orig 0x683670, copy2)
void main_f_683670(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 208) = *(uint64_t*)((char*)(a1)); }

// sub_683680  (orig 0x683680, ptr_add)
void* main_f_683680(void* a0) { return (char*)a0 + 208; }

// sub_683690  (orig 0x683690, ptr_add)
void* main_f_683690(void* a0) { return (char*)a0 + 16; }

// sub_683cc0  (orig 0x683cc0, ptr_add)
void* main_f_683cc0(void* a0) { return (char*)a0 + 144; }

// sub_683cd0  (orig 0x683cd0, ptr_add)
void* main_f_683cd0(void* a0) { return (char*)a0 + 80; }

// sub_685230  (orig 0x685230, setter-chain)
void main_f_685230(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 640) = a1; *(uint8_t*)((char*)(a0) + 185) = 0; }

// sub_685240  (orig 0x685240, getter-chain)
uint64_t main_f_685240(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 192))) + 24); }

// sub_685810  (orig 0x685810, getter)
uint32_t main_f_685810(void* a0) { return *(uint32_t*)((char*)(a0) + 680); }

// sub_6861c0  (orig 0x6861c0, ret_only)
void main_f_6861c0() {}

// sub_6861d0  (orig 0x6861d0, copy2)
void main_f_6861d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6861e0  (orig 0x6861e0, copy2)
void main_f_6861e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_686970  (orig 0x686970, ret_only)
void main_f_686970() {}

// sub_686980  (orig 0x686980, copy2)
void main_f_686980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_686990  (orig 0x686990, copy2)
void main_f_686990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6869a0  (orig 0x6869a0, copy2)
void main_f_6869a0(void* a0) { (*(uint8_t *)((char *)(*(void **)((char*)(a0))) + 800)) = 0; }

// sub_6869b0  (orig 0x6869b0, ret_only)
void main_f_6869b0() {}

// sub_6869c0  (orig 0x6869c0, copy2)
void main_f_6869c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6869d0  (orig 0x6869d0, copy2)
void main_f_6869d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_686de0  (orig 0x686de0, ret_only)
void main_f_686de0() {}

// sub_686df0  (orig 0x686df0, copy2)
void main_f_686df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_686e00  (orig 0x686e00, copy2)
void main_f_686e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_686fa0  (orig 0x686fa0, getter)
uint8_t main_f_686fa0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_6870c0  (orig 0x6870c0, getter)
uint8_t main_f_6870c0(void* a0) { return *(uint8_t*)((char*)(a0) + 2); }

// sub_687100  (orig 0x687100, getter)
uint8_t main_f_687100(void* a0) { return *(uint8_t*)((char*)(a0) + 3); }

// sub_687270  (orig 0x687270, getter)
uint8_t main_f_687270(void* a0) { return *(uint8_t*)((char*)(a0) + 1); }

// sub_687290  (orig 0x687290, getter)
uint64_t main_f_687290(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_6872a0  (orig 0x6872a0, getter)
uint64_t main_f_6872a0(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_687aa0  (orig 0x687aa0, getter)
uint64_t main_f_687aa0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_68d900  (orig 0x68d900, ptr_add)
void* main_f_68d900(void* a0) { return (char*)a0 + 608; }

// sub_68d910  (orig 0x68d910, straight)
void main_f_68d910(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 616) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 608) = *(uint64_t*)((char*)(a1));
}

// sub_68d930  (orig 0x68d930, straight)
void main_f_68d930(void* a0) {
    *(uint8_t*)((char*)(a0) + 634) = (uint8_t)(1);
}

// sub_68d940  (orig 0x68d940, setter)
void main_f_68d940(void* a0) { *(uint8_t*)((char*)(a0) + 634) = 0; }

// sub_68f160  (orig 0x68f160, setter)
void main_f_68f160(void* a0, float a1) { *(float*)((char*)(a0) + 104) = a1; }

// sub_690380  (orig 0x690380, ret_only)
void main_f_690380() {}

// sub_690390  (orig 0x690390, copy2)
void main_f_690390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6903a0  (orig 0x6903a0, copy2)
void main_f_6903a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_691100  (orig 0x691100, copy-chain-store)
void main_f_691100(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_692590  (orig 0x692590, ret_only)
void main_f_692590() {}

// sub_692920  (orig 0x692920, getter-chain)
uint32_t main_f_692920(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 408))) + 128); }

// sub_694160  (orig 0x694160, ret_only)
void main_f_694160() {}

// sub_694510  (orig 0x694510, ret_only)
void main_f_694510() {}

// sub_6955b0  (orig 0x6955b0, ret_only)
void main_f_6955b0() {}

// sub_696600  (orig 0x696600, ret_only)
void main_f_696600() {}

// sub_696bf0  (orig 0x696bf0, ret_only)
void main_f_696bf0() {}

// sub_696d80  (orig 0x696d80, copy2)
void main_f_696d80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_696d90  (orig 0x696d90, copy2)
void main_f_696d90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_699710  (orig 0x699710, ret_only)
void main_f_699710() {}

// sub_699720  (orig 0x699720, copy2)
void main_f_699720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_699730  (orig 0x699730, copy2)
void main_f_699730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_69a2a0  (orig 0x69a2a0, ret_only)
void main_f_69a2a0() {}

// sub_69a490  (orig 0x69a490, ret_only)
void main_f_69a490() {}

// sub_69a4a0  (orig 0x69a4a0, copy2)
void main_f_69a4a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_69a4b0  (orig 0x69a4b0, copy2)
void main_f_69a4b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_69a510  (orig 0x69a510, ret_only)
void main_f_69a510() {}

// sub_69a520  (orig 0x69a520, copy2)
void main_f_69a520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_69a530  (orig 0x69a530, copy2)
void main_f_69a530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_69bdf0  (orig 0x69bdf0, getter-chain)
uint8_t main_f_69bdf0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 80))) + 176); }

// sub_69c4b0  (orig 0x69c4b0, ret_only)
void main_f_69c4b0() {}

// sub_69c530  (orig 0x69c530, ret_only)
void main_f_69c530() {}

// sub_69d640  (orig 0x69d640, ret_only)
void main_f_69d640() {}

// sub_69e390  (orig 0x69e390, compare-pred)
bool main_f_69e390(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 80)) + 32)) + 72)) == (uint32_t)(0); }

// sub_69e3b0  (orig 0x69e3b0, compare)
bool main_f_69e3b0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 80)) != (uint64_t)(0); }

// sub_69e920  (orig 0x69e920, ret_only)
void main_f_69e920() {}

// sub_69e9a0  (orig 0x69e9a0, ret_only)
void main_f_69e9a0() {}

// sub_69f060  (orig 0x69f060, straight)
void main_f_69f060(void* a0) {
    *(uint32_t*)((char*)(a0) + 616) = 3;
}

// sub_69fb90  (orig 0x69fb90, straight)
void main_f_69fb90(void* a0) {
    *(uint8_t*)((char*)(a0) + 888) = (uint8_t)(1);
}

// sub_6a0d90  (orig 0x6a0d90, strlit-ret)
const char *main_f_6a0d90() { static char g_f_6a0d90[1]; __asm__ volatile("" ::: "memory"); return g_f_6a0d90; }

// sub_6a1620  (orig 0x6a1620, ret_only)
void main_f_6a1620() {}

// sub_6a16a0  (orig 0x6a16a0, ret_only)
void main_f_6a16a0() {}

// sub_6a1f70  (orig 0x6a1f70, getter)
uint64_t main_f_6a1f70(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_6a2080  (orig 0x6a2080, ret_only)
void main_f_6a2080() {}

// sub_6a2100  (orig 0x6a2100, ret_only)
void main_f_6a2100() {}

// sub_6a2a20  (orig 0x6a2a20, setter)
void main_f_6a2a20(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 80) = a1; }

// sub_6a2a30  (orig 0x6a2a30, setter)
void main_f_6a2a30(void* a0) { *(uint64_t*)((char*)(a0) + 80) = 0; }

// sub_6a2b60  (orig 0x6a2b60, getter)
uint8_t main_f_6a2b60(void* a0) { return *(uint8_t*)((char*)(a0) + 136); }

// sub_6a3240  (orig 0x6a3240, ptr_add)
void* main_f_6a3240(void* a0) { return (char*)a0 + 152; }

// sub_6a3250  (orig 0x6a3250, getter)
uint64_t main_f_6a3250(void* a0) { return *(uint64_t*)((char*)(a0) + 3224); }

// sub_6a3470  (orig 0x6a3470, ret_only)
void main_f_6a3470() {}

// sub_6a34f0  (orig 0x6a34f0, ret_only)
void main_f_6a34f0() {}

// sub_6a35b0  (orig 0x6a35b0, ret_only)
void main_f_6a35b0() {}

// sub_6a35c0  (orig 0x6a35c0, ret_only)
void main_f_6a35c0() {}

// sub_6a35d0  (orig 0x6a35d0, ret_only)
void main_f_6a35d0() {}

// sub_6a4020  (orig 0x6a4020, getter)
uint64_t main_f_6a4020(void* a0) { return *(uint64_t*)((char*)(a0) + 184); }

// sub_6a4100  (orig 0x6a4100, getter)
uint64_t main_f_6a4100(void* a0) { return *(uint64_t*)((char*)(a0) + 192); }

// sub_6a41e0  (orig 0x6a41e0, getter)
uint64_t main_f_6a41e0(void* a0) { return *(uint64_t*)((char*)(a0) + 200); }

// sub_6a42c0  (orig 0x6a42c0, getter)
uint64_t main_f_6a42c0(void* a0) { return *(uint64_t*)((char*)(a0) + 208); }

// sub_6a43a0  (orig 0x6a43a0, getter)
uint64_t main_f_6a43a0(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_6a4480  (orig 0x6a4480, getter)
uint64_t main_f_6a4480(void* a0) { return *(uint64_t*)((char*)(a0) + 224); }

// sub_6a4700  (orig 0x6a4700, ret_only)
void main_f_6a4700() {}

// sub_6a4b80  (orig 0x6a4b80, getter)
uint8_t main_f_6a4b80(void* a0) { return *(uint8_t*)((char*)(a0) + 145); }

// sub_6a4b90  (orig 0x6a4b90, getter)
uint8_t main_f_6a4b90(void* a0) { return *(uint8_t*)((char*)(a0) + 147); }

// sub_6a4d50  (orig 0x6a4d50, getter)
uint64_t main_f_6a4d50(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_6a50e0  (orig 0x6a50e0, ret_only)
void main_f_6a50e0() {}

// sub_6a5160  (orig 0x6a5160, ret_only)
void main_f_6a5160() {}

// sub_6a5220  (orig 0x6a5220, ret_only)
void main_f_6a5220() {}

// sub_6a5650  (orig 0x6a5650, mov_ret)
uint32_t main_f_6a5650() { return 1; }

// sub_6a5660  (orig 0x6a5660, indexed-getter)
uint64_t main_f_6a5660(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_6a5670  (orig 0x6a5670, indexed-getter)
uint64_t main_f_6a5670(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_6ace10  (orig 0x6ace10, ret_only)
void main_f_6ace10() {}

// sub_6ad270  (orig 0x6ad270, setter-chain)
void main_f_6ad270(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; *(uint16_t*)((char*)(a0) + 12) = 0; }

// sub_6ad280  (orig 0x6ad280, mov_ret)
uint32_t main_f_6ad280() { return 1; }

// sub_6ad290  (orig 0x6ad290, straight)
void main_f_6ad290(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1) + 8);
    *(uint8_t*)((char*)(a0) + 12) = *(uint8_t*)((char*)(a1) + 12);
    *(uint8_t*)((char*)(a0) + 13) = *(uint8_t*)((char*)(a1) + 13);
}

// sub_6ad2b0  (orig 0x6ad2b0, ret_only)
void main_f_6ad2b0() {}

// sub_6aede0  (orig 0x6aede0, getter)
uint8_t main_f_6aede0(void* a0) { return *(uint8_t*)((char*)(a0) + 537); }

// sub_6af550  (orig 0x6af550, ret_only)
void main_f_6af550() {}

// sub_6af5d0  (orig 0x6af5d0, ret_only)
void main_f_6af5d0() {}

// sub_6af690  (orig 0x6af690, ret_only)
void main_f_6af690() {}

// sub_6b0780  (orig 0x6b0780, compare)
bool main_f_6b0780(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 152)) != (uint64_t)(0); }

// sub_6b0b50  (orig 0x6b0b50, setter-chain)
void main_f_6b0b50(void* a0) { *(uint64_t*)((char*)(a0) + 152) = 0; *(uint64_t*)((char*)(a0) + 248) = 0; }

// sub_6b1480  (orig 0x6b1480, getter)
uint8_t main_f_6b1480(void* a0) { return *(uint8_t*)((char*)(a0) + 1267); }

// sub_6b21b0  (orig 0x6b21b0, mov_ret)
uint32_t main_f_6b21b0() { return 1; }

// sub_6b2c10  (orig 0x6b2c10, setter)
void main_f_6b2c10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 496) = a1; }

// sub_6b2c20  (orig 0x6b2c20, setter)
void main_f_6b2c20(void* a0) { *(uint64_t*)((char*)(a0) + 1224) = 0; }

// sub_6b2f70  (orig 0x6b2f70, getter)
uint8_t main_f_6b2f70(void* a0) { return *(uint8_t*)((char*)(a0) + 1265); }

// sub_6b2f80  (orig 0x6b2f80, getter)
uint8_t main_f_6b2f80(void* a0) { return *(uint8_t*)((char*)(a0) + 1268); }

// sub_6b2f90  (orig 0x6b2f90, getter)
uint8_t main_f_6b2f90(void* a0) { return *(uint8_t*)((char*)(a0) + 1270); }

// sub_6b2fa0  (orig 0x6b2fa0, getter)
uint8_t main_f_6b2fa0(void* a0) { return *(uint8_t*)((char*)(a0) + 1266); }

// sub_6b2fb0  (orig 0x6b2fb0, mov_ret)
uint32_t main_f_6b2fb0() { return 24; }

// sub_6b2fc0  (orig 0x6b2fc0, mov_ret)
uint32_t main_f_6b2fc0() { return 1; }

// sub_6b2fd0  (orig 0x6b2fd0, ret_only)
void main_f_6b2fd0() {}

// sub_6b2fe0  (orig 0x6b2fe0, mov_ret)
uint32_t main_f_6b2fe0() { return 0; }

// sub_6b2ff0  (orig 0x6b2ff0, mov_ret)
uint64_t main_f_6b2ff0() { return 0; }

// LeaveSession  (orig 0x6b3000, strlit-ret)
const char *main_f_6b3000() { static const char s[] = "LeaveSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3010  (orig 0x6b3010, mov_ret)
uint32_t main_f_6b3010() { return 0; }

// StartSession  (orig 0x6b3020, strlit-ret)
const char *main_f_6b3020() { static const char s[] = "StartSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3030  (orig 0x6b3030, mov_ret)
uint32_t main_f_6b3030() { return 0; }

// CleanupSession  (orig 0x6b3040, strlit-ret)
const char *main_f_6b3040() { static const char s[] = "CleanupSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3050  (orig 0x6b3050, mov_ret)
uint32_t main_f_6b3050() { return 0; }

// sub_6b3060  (orig 0x6b3060, mov_ret)
uint32_t main_f_6b3060() { return 0; }

// CloseSession  (orig 0x6b3070, strlit-ret)
const char *main_f_6b3070() { static const char s[] = "CloseSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3080  (orig 0x6b3080, mov_ret)
uint32_t main_f_6b3080() { return 1; }

// ExecSuccess  (orig 0x6b3090, strlit-ret)
const char *main_f_6b3090() { static const char s[] = "ExecSuccess"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b30a0  (orig 0x6b30a0, mov_ret)
uint32_t main_f_6b30a0() { return 1; }

// ExecCancel  (orig 0x6b30b0, strlit-ret)
const char *main_f_6b30b0() { static const char s[] = "ExecCancel"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b30c0  (orig 0x6b30c0, mov_ret)
uint32_t main_f_6b30c0() { return 1; }

// ExecTimeout  (orig 0x6b30d0, strlit-ret)
const char *main_f_6b30d0() { static const char s[] = "ExecTimeout"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b30e0  (orig 0x6b30e0, mov_ret)
uint32_t main_f_6b30e0() { return 1; }

// IndexSelectSession  (orig 0x6b30f0, strlit-ret)
const char *main_f_6b30f0() { static const char s[] = "IndexSelectSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3100  (orig 0x6b3100, mov_ret)
uint32_t main_f_6b3100() { return 0; }

// NotifyErrorFunc  (orig 0x6b3110, strlit-ret)
const char *main_f_6b3110() { static const char s[] = "NotifyErrorFunc"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3120  (orig 0x6b3120, mov_ret)
uint32_t main_f_6b3120() { return 1; }

// WaitMemberConnection  (orig 0x6b3130, strlit-ret)
const char *main_f_6b3130() { static const char s[] = "WaitMemberConnection"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3140  (orig 0x6b3140, mov_ret)
uint32_t main_f_6b3140() { return 0; }

// CancelJoinRandomSession  (orig 0x6b3150, strlit-ret)
const char *main_f_6b3150() { static const char s[] = "CancelJoinRandomSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3160  (orig 0x6b3160, mov_ret)
uint32_t main_f_6b3160() { return 0; }

// CancelJoinSession  (orig 0x6b3170, strlit-ret)
const char *main_f_6b3170() { static const char s[] = "CancelJoinSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3180  (orig 0x6b3180, mov_ret)
uint32_t main_f_6b3180() { return 1; }

// sub_6b3190  (orig 0x6b3190, mov_ret)
uint32_t main_f_6b3190() { return 1; }

// sub_6b31a0  (orig 0x6b31a0, mov_ret)
uint32_t main_f_6b31a0() { return 0; }

// NullFunc  (orig 0x6b31b0, strlit-ret)
const char *main_f_6b31b0() { static const char s[] = "NullFunc"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b4380  (orig 0x6b4380, getter)
uint8_t main_f_6b4380(void* a0) { return *(uint8_t*)((char*)(a0) + 1269); }

// sub_6b6400  (orig 0x6b6400, mov_ret)
uint32_t main_f_6b6400() { return 3; }

// RandomSession  (orig 0x6b6410, strlit-ret)
const char *main_f_6b6410() { static const char s[] = "RandomSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b6420  (orig 0x6b6420, mov_ret)
uint32_t main_f_6b6420() { return 0; }

// SearchSession  (orig 0x6b6430, strlit-ret)
const char *main_f_6b6430() { static const char s[] = "SearchSession"; __asm__ volatile("" ::: "memory"); return s; }

// JoinSession  (orig 0x6b6440, strlit-ret)
const char *main_f_6b6440() { static const char s[] = "JoinSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b6450  (orig 0x6b6450, mov_ret)
uint32_t main_f_6b6450() { return 0; }

// BrowseJoinSession  (orig 0x6b6460, strlit-ret)
const char *main_f_6b6460() { static const char s[] = "BrowseJoinSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b6470  (orig 0x6b6470, mov_ret)
uint32_t main_f_6b6470() { return 0; }

// CreateSession  (orig 0x6b6480, strlit-ret)
const char *main_f_6b6480() { static const char s[] = "CreateSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b6490  (orig 0x6b6490, mov_ret)
uint32_t main_f_6b6490() { return 0; }

// UpdateSettingSession  (orig 0x6b64a0, strlit-ret)
const char *main_f_6b64a0() { static const char s[] = "UpdateSettingSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b64b0  (orig 0x6b64b0, mov_ret)
uint32_t main_f_6b64b0() { return 1; }

// CheckBlock  (orig 0x6b64c0, strlit-ret)
const char *main_f_6b64c0() { static const char s[] = "CheckBlock"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b7650  (orig 0x6b7650, getter)
uint32_t main_f_6b7650(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_6b7660  (orig 0x6b7660, getter)
uint32_t main_f_6b7660(void* a0) { return *(uint32_t*)((char*)(a0) + 352); }

// sub_6b8010  (orig 0x6b8010, getter)
uint16_t main_f_6b8010(void* a0) { return *(uint16_t*)((char*)(a0) + 352); }

// sub_6bb9f0  (orig 0x6bb9f0, ret_only)
void main_f_6bb9f0() {}

// sub_6bc640  (orig 0x6bc640, setter)
void main_f_6bc640(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_6bc710  (orig 0x6bc710, ret_only)
void main_f_6bc710() {}

// sub_6bc7c0  (orig 0x6bc7c0, ret_only)
void main_f_6bc7c0() {}

// sub_6bc7d0  (orig 0x6bc7d0, mov_ret)
uint64_t main_f_6bc7d0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_6bc940  (orig 0x6bc940, mov_ret)
uint32_t main_f_6bc940() { return 1; }

// sub_6bcad0  (orig 0x6bcad0, setter)
void main_f_6bcad0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_6bcba0  (orig 0x6bcba0, ret_only)
void main_f_6bcba0() {}

// sub_6bcc50  (orig 0x6bcc50, ret_only)
void main_f_6bcc50() {}

// sub_6bcc60  (orig 0x6bcc60, mov_ret)
uint64_t main_f_6bcc60(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_6bcdd0  (orig 0x6bcdd0, mov_ret)
uint32_t main_f_6bcdd0() { return 1; }

// sub_6bcf60  (orig 0x6bcf60, setter)
void main_f_6bcf60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_6bd030  (orig 0x6bd030, ret_only)
void main_f_6bd030() {}

// sub_6bd0e0  (orig 0x6bd0e0, ret_only)
void main_f_6bd0e0() {}

// sub_6bd0f0  (orig 0x6bd0f0, mov_ret)
uint64_t main_f_6bd0f0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_6bd260  (orig 0x6bd260, mov_ret)
uint32_t main_f_6bd260() { return 1; }

// sub_6bd2f0  (orig 0x6bd2f0, mov_ret)
uint64_t main_f_6bd2f0() { return 0; }

// sub_6bd330  (orig 0x6bd330, getter)
uint32_t main_f_6bd330(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_6bd360  (orig 0x6bd360, mov_ret)
uint32_t main_f_6bd360() { return 1; }

// sub_6bd3a0  (orig 0x6bd3a0, getter)
uint32_t main_f_6bd3a0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_6bd3b0  (orig 0x6bd3b0, mov_ret)
uint32_t main_f_6bd3b0() { return 1; }

// sub_6bd3f0  (orig 0x6bd3f0, getter)
uint32_t main_f_6bd3f0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_6bd400  (orig 0x6bd400, mov_ret)
uint32_t main_f_6bd400() { return 1; }

// sub_6bdbe0  (orig 0x6bdbe0, setter)
void main_f_6bdbe0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_6be450  (orig 0x6be450, mov_ret)
uint32_t main_f_6be450() { return 1; }

// sub_6be500  (orig 0x6be500, getter)
uint32_t main_f_6be500(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_6be510  (orig 0x6be510, mov_ret)
uint32_t main_f_6be510() { return 1; }

// sub_6bf510  (orig 0x6bf510, ret_only)
void main_f_6bf510() {}

// sub_6bf590  (orig 0x6bf590, ret_only)
void main_f_6bf590() {}

// sub_6bfa40  (orig 0x6bfa40, ret_only)
void main_f_6bfa40() {}

// sub_6bfa90  (orig 0x6bfa90, ret_only)
void main_f_6bfa90() {}

// sub_6c04d0  (orig 0x6c04d0, setter)
void main_f_6c04d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_6c0b70  (orig 0x6c0b70, mov_ret)
uint32_t main_f_6c0b70() { return 1; }

// sub_6c0c20  (orig 0x6c0c20, getter)
uint32_t main_f_6c0c20(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_6c0c30  (orig 0x6c0c30, mov_ret)
uint32_t main_f_6c0c30() { return 1; }

// sub_6c1150  (orig 0x6c1150, setter)
void main_f_6c1150(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_6c1220  (orig 0x6c1220, setter)
void main_f_6c1220(void* a0) { *(uint8_t*)((char*)(a0) + 17) = 0; }

// sub_6c1540  (orig 0x6c1540, mov_ret)
uint32_t main_f_6c1540() { return 1; }

// sub_6c16e0  (orig 0x6c16e0, setter)
void main_f_6c16e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_6c17b0  (orig 0x6c17b0, setter)
void main_f_6c17b0(void* a0) { *(uint8_t*)((char*)(a0) + 17) = 0; }

// sub_6c1ad0  (orig 0x6c1ad0, mov_ret)
uint32_t main_f_6c1ad0() { return 1; }

// sub_6c1b80  (orig 0x6c1b80, getter)
uint32_t main_f_6c1b80(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_6c1b90  (orig 0x6c1b90, mov_ret)
uint32_t main_f_6c1b90() { return 1; }

// sub_6c1bd0  (orig 0x6c1bd0, getter)
uint32_t main_f_6c1bd0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_6c1be0  (orig 0x6c1be0, mov_ret)
uint32_t main_f_6c1be0() { return 1; }

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

// sub_6d4b10  (orig 0x6d4b10, setter)
void main_f_6d4b10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_6d5010  (orig 0x6d5010, mov_ret)
uint32_t main_f_6d5010() { return 1; }

// sub_6d50c0  (orig 0x6d50c0, getter)
uint32_t main_f_6d50c0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_6d50d0  (orig 0x6d50d0, mov_ret)
uint32_t main_f_6d50d0() { return 1; }

// sub_6d56c0  (orig 0x6d56c0, setter)
void main_f_6d56c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 56) = a1; }

// sub_6d6090  (orig 0x6d6090, mov_ret)
uint32_t main_f_6d6090() { return 1; }

// sub_6d6140  (orig 0x6d6140, getter)
uint32_t main_f_6d6140(void* a0) { return *(uint32_t*)((char*)(a0) + 56); }

// sub_6d6150  (orig 0x6d6150, mov_ret)
uint32_t main_f_6d6150() { return 1; }

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

// sub_6db0f0  (orig 0x6db0f0, getter)
uint32_t main_f_6db0f0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_6db100  (orig 0x6db100, mov_ret)
uint32_t main_f_6db100() { return 1; }

// sub_6db970  (orig 0x6db970, setter)
void main_f_6db970(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_6dc3d0  (orig 0x6dc3d0, mov_ret)
uint32_t main_f_6dc3d0() { return 1; }

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

// sub_6dd740  (orig 0x6dd740, setter)
void main_f_6dd740(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_6dd750  (orig 0x6dd750, getter)
uint64_t main_f_6dd750(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_6dd760  (orig 0x6dd760, getter)
uint8_t main_f_6dd760(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_6ddc20  (orig 0x6ddc20, mov_ret)
uint32_t main_f_6ddc20() { return 1; }

// sub_6de660  (orig 0x6de660, ptr_add)
void* main_f_6de660(void* a0) { return (char*)a0 + 176; }

// sub_6de7d0  (orig 0x6de7d0, ret_only)
void main_f_6de7d0() {}

// sub_6de7e0  (orig 0x6de7e0, copy2)
void main_f_6de7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6de7f0  (orig 0x6de7f0, copy2)
void main_f_6de7f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6f8120  (orig 0x6f8120, ret_only)
void main_f_6f8120() {}

// sub_6fff50  (orig 0x6fff50, ret_only)
void main_f_6fff50() {}

// sub_700120  (orig 0x700120, ret_only)
void main_f_700120() {}

// sub_700f70  (orig 0x700f70, ret_only)
void main_f_700f70() {}

// sub_700f90  (orig 0x700f90, ret_only)
void main_f_700f90() {}

// sub_708230  (orig 0x708230, ret_only)
void main_f_708230() {}

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

// sub_718d10  (orig 0x718d10, compare)
bool main_f_718d10(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1))) == (uint64_t)(0); }

// sub_718d20  (orig 0x718d20, getter)
uint32_t main_f_718d20(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1)); }

// sub_718d50  (orig 0x718d50, setter)
void main_f_718d50(uint64_t unused0, void* a1) { *(uint32_t*)((char*)(a1)) = 0; }

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

// sub_71ae80  (orig 0x71ae80, getter)
uint8_t main_f_71ae80(uint64_t unused0, void* a1) { return *(uint8_t*)((char*)(a1)); }

// sub_71ae90  (orig 0x71ae90, mov_ret)
uint64_t main_f_71ae90(uint64_t a0, uint64_t a1) { return a1; }

// sub_71b210  (orig 0x71b210, compare)
bool main_f_71b210(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 8)) == (uint64_t)(0); }

// sub_71b220  (orig 0x71b220, getter)
uint32_t main_f_71b220(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1) + 8); }

// sub_71b700  (orig 0x71b700, mov_ret)
uint64_t main_f_71b700(uint64_t a0, uint64_t a1) { return a1; }

// sub_71c080  (orig 0x71c080, mov_ret)
uint64_t main_f_71c080(uint64_t a0, uint64_t a1) { return a1; }

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

// sub_75eb60  (orig 0x75eb60, getter)
uint32_t main_f_75eb60(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75eba0  (orig 0x75eba0, getter)
uint32_t main_f_75eba0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ebe0  (orig 0x75ebe0, getter)
uint32_t main_f_75ebe0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ec20  (orig 0x75ec20, getter)
uint32_t main_f_75ec20(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ec60  (orig 0x75ec60, getter)
uint32_t main_f_75ec60(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75eca0  (orig 0x75eca0, getter)
uint32_t main_f_75eca0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ece0  (orig 0x75ece0, getter)
uint32_t main_f_75ece0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ed20  (orig 0x75ed20, getter)
uint32_t main_f_75ed20(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ed60  (orig 0x75ed60, getter)
uint32_t main_f_75ed60(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75eda0  (orig 0x75eda0, getter)
uint32_t main_f_75eda0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ede0  (orig 0x75ede0, getter)
uint32_t main_f_75ede0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75ee20  (orig 0x75ee20, getter)
uint32_t main_f_75ee20(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75ee60  (orig 0x75ee60, getter)
uint32_t main_f_75ee60(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75eea0  (orig 0x75eea0, getter)
uint32_t main_f_75eea0(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75eee0  (orig 0x75eee0, getter)
uint32_t main_f_75eee0(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75ef20  (orig 0x75ef20, getter)
uint32_t main_f_75ef20(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75ef60  (orig 0x75ef60, getter)
uint32_t main_f_75ef60(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75efa0  (orig 0x75efa0, getter)
uint32_t main_f_75efa0(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75efe0  (orig 0x75efe0, getter)
uint32_t main_f_75efe0(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_75f020  (orig 0x75f020, getter)
uint32_t main_f_75f020(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75f060  (orig 0x75f060, getter)
uint32_t main_f_75f060(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75f0a0  (orig 0x75f0a0, getter)
uint32_t main_f_75f0a0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75f0e0  (orig 0x75f0e0, getter)
uint32_t main_f_75f0e0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75f120  (orig 0x75f120, getter)
uint32_t main_f_75f120(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_75f160  (orig 0x75f160, getter)
uint32_t main_f_75f160(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_7693a0  (orig 0x7693a0, ret_only)
void main_f_7693a0() {}

// sub_7693b0  (orig 0x7693b0, ret_only)
void main_f_7693b0() {}

// sub_76bef0  (orig 0x76bef0, mov_ret)
uint32_t main_f_76bef0() { return 8; }

// sub_76c470  (orig 0x76c470, ret_only)
void main_f_76c470() {}

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

// sub_7805e0  (orig 0x7805e0, strlit-flag-ret)
void *main_f_7805e0(void* a0) { static char g_f_7805e0[1]; *(uint8_t *)((char*)(a0)) = 13; __asm__ volatile("" ::: "memory"); return g_f_7805e0; }

// sub_780600  (orig 0x780600, strlit-flag-ret)
void *main_f_780600(void* a0) { static char g_f_780600[1]; *(uint8_t *)((char*)(a0)) = 12; __asm__ volatile("" ::: "memory"); return g_f_780600; }

// sub_7816d0  (orig 0x7816d0, ret_only)
void main_f_7816d0() {}

// sub_782980  (orig 0x782980, ret_only)
void main_f_782980() {}

// sub_782dd0  (orig 0x782dd0, ret_only)
void main_f_782dd0() {}

// sub_782df0  (orig 0x782df0, ret_only)
void main_f_782df0() {}

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

// sub_785fe0  (orig 0x785fe0, getter-chain)
uint16_t main_f_785fe0(void* a0) { return *(uint16_t*)((char*)((*(uint64_t*)((char*)(a0) + 352))) + 6); }

// sub_786410  (orig 0x786410, ret_only)
void main_f_786410() {}

// sub_786b30  (orig 0x786b30, getter-chain)
uint8_t main_f_786b30(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 29); }

// sub_786bd0  (orig 0x786bd0, compare-pred)
bool main_f_786bd0(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)(char*)a0) + 28)) == (uint32_t)(4); }

// sub_788b30  (orig 0x788b30, ret_only)
void main_f_788b30() {}

// sub_78b020  (orig 0x78b020, ret_only)
void main_f_78b020() {}

// sub_78b5d0  (orig 0x78b5d0, mov_ret)
uint32_t main_f_78b5d0() { return 1; }

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

// sub_7c58b0  (orig 0x7c58b0, getter-chain)
uint32_t main_f_7c58b0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 136)))); }

// sub_7ca070  (orig 0x7ca070, getter)
uint16_t main_f_7ca070(void* a0) { return *(uint16_t*)((char*)(a0) + 358); }

// sub_7ca1c0  (orig 0x7ca1c0, getter)
uint32_t main_f_7ca1c0(void* a0) { return *(uint32_t*)((char*)(a0) + 336); }

// sub_7ca890  (orig 0x7ca890, getter-chain)
uint8_t main_f_7ca890(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 933); }

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

// sub_7caf50  (orig 0x7caf50, getter-chain)
uint8_t main_f_7caf50(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 752); }

// sub_7caf60  (orig 0x7caf60, getter-chain)
uint8_t main_f_7caf60(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 754); }

// sub_7cb070  (orig 0x7cb070, getter-chain)
uint64_t main_f_7cb070(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 2608); }

// sub_7cb2e0  (orig 0x7cb2e0, compare-pred)
bool main_f_7cb2e0(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)((char*)a0 + 136)) + 933)) != (uint32_t)(0); }

// sub_7cb300  (orig 0x7cb300, getter-chain)
uint8_t main_f_7cb300(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 1016); }

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

// sub_7cd130  (orig 0x7cd130, mov_ret)
uint32_t main_f_7cd130() { return 1; }

// sub_7cd430  (orig 0x7cd430, getter-chain)
uint8_t main_f_7cd430(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 9); }

// sub_7cd930  (orig 0x7cd930, getter-chain)
uint8_t main_f_7cd930(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 1017); }

// sub_7ce130  (orig 0x7ce130, getter)
uint64_t main_f_7ce130(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_7ce150  (orig 0x7ce150, straight)
void main_f_7ce150(void* a0, void* a1) {
    *(uint16_t*)((char*)(a0) + 114) = *(uint16_t*)((char*)(a1));
    *(uint16_t*)((char*)(a0) + 116) = *(uint16_t*)((char*)(a1) + 2);
    *(uint16_t*)((char*)(a0) + 118) = *(uint16_t*)((char*)(a1) + 4);
    *(uint16_t*)((char*)(a0) + 120) = *(uint16_t*)((char*)(a1) + 6);
}

// sub_7cfdd0  (orig 0x7cfdd0, getter)
uint8_t main_f_7cfdd0(void* a0) { return *(uint8_t*)((char*)(a0) + 694); }

// sub_7d0b80  (orig 0x7d0b80, getter)
uint64_t main_f_7d0b80(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_7d0b90  (orig 0x7d0b90, getter)
uint64_t main_f_7d0b90(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_7d0ba0  (orig 0x7d0ba0, getter)
uint64_t main_f_7d0ba0(void* a0) { return *(uint64_t*)((char*)(a0) + 592); }

// sub_7d0bb0  (orig 0x7d0bb0, getter)
uint64_t main_f_7d0bb0(void* a0) { return *(uint64_t*)((char*)(a0) + 592); }

// sub_7d23f0  (orig 0x7d23f0, mov_ret)
uint32_t main_f_7d23f0() { return 1; }

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
void main_f_7e89c0(void* a0) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(5);
    *(uint32_t*)((char*)(a0) + 4) = 5;
}

// sub_7e89d0  (orig 0x7e89d0, straight)
void main_f_7e89d0(void* a0) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(5);
    *(uint32_t*)((char*)(a0) + 4) = 5;
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

// sub_7e99f0  (orig 0x7e99f0, setter-chain-zero)
void main_f_7e99f0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 88) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 72) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 64) = 0;
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
void main_f_7e9aa0(void* a0) {
    *(uint8_t*)((char*)(a0) + 48) = (uint8_t)(8);
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
void main_f_7e9ea0(void* a0) {
    *(uint8_t*)((char*)(a0) + 10) = (uint8_t)(1);
}

// sub_7e9f40  (orig 0x7e9f40, getter)
uint16_t main_f_7e9f40(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_7e9f50  (orig 0x7e9f50, getter)
uint32_t main_f_7e9f50(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_7e9f60  (orig 0x7e9f60, getter)
uint64_t main_f_7e9f60(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_7ea260  (orig 0x7ea260, compare)
bool main_f_7ea260(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 3080)) == (uint64_t)(0); }

// sub_7eaf40  (orig 0x7eaf40, getter)
uint64_t main_f_7eaf40(void* a0) { return *(uint64_t*)((char*)(a0) + 5512L); }

// sub_7eba90  (orig 0x7eba90, strlit-flag-ret)
void *main_f_7eba90(void* a0) { static char g_f_7eba90[1]; *(uint32_t *)((char*)(a0)) = 507; __asm__ volatile("" ::: "memory"); return g_f_7eba90; }

// sub_7ee040  (orig 0x7ee040, straight)
void main_f_7ee040(void* a0) {
    *(uint16_t*)((char*)(a0) + 624) = (uint16_t)(7936);
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

// sub_7ef230  (orig 0x7ef230, ptr_add)
void* main_f_7ef230(void* a0) { return (char*)a0 + 592; }

// sub_7ef240  (orig 0x7ef240, getter)
uint8_t main_f_7ef240(void* a0) { return *(uint8_t*)((char*)(a0) + 624); }

// sub_7ef250  (orig 0x7ef250, getter)
uint8_t main_f_7ef250(void* a0) { return *(uint8_t*)((char*)(a0) + 625); }

// sub_7ef2d0  (orig 0x7ef2d0, getter)
uint8_t main_f_7ef2d0(void* a0) { return *(uint8_t*)((char*)(a0) + 626); }

// sub_7ef300  (orig 0x7ef300, getter)
uint8_t main_f_7ef300(void* a0) { return *(uint8_t*)((char*)(a0) + 834); }

// sub_7ef310  (orig 0x7ef310, setter)
void main_f_7ef310(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 834) = a1; }

// sub_7ef320  (orig 0x7ef320, getter)
uint64_t main_f_7ef320(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_7ef330  (orig 0x7ef330, getter)
uint64_t main_f_7ef330(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_7ef530  (orig 0x7ef530, compare)
bool main_f_7ef530(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 700)) == (uint64_t)(510); }

// sub_7ef760  (orig 0x7ef760, indexed-getter)
uint8_t main_f_7ef760(void* a0, uint32_t a1) { return *(uint8_t *)(((char *)a0 + a1 * 1 + 504)); }

// sub_7efe00  (orig 0x7efe00, getter)
uint8_t main_f_7efe00(void* a0) { return *(uint8_t*)((char*)(a0) + 828); }

// sub_7efee0  (orig 0x7efee0, getter)
uint8_t main_f_7efee0(void* a0) { return *(uint8_t*)((char*)(a0) + 832); }

// sub_7f09c0  (orig 0x7f09c0, getter)
uint16_t main_f_7f09c0(void* a0) { return *(uint16_t*)((char*)(a0) + 118); }

// sub_7f09d0  (orig 0x7f09d0, setter)
void main_f_7f09d0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 118) = a1; }

// sub_7f0a70  (orig 0x7f0a70, getter)
uint16_t main_f_7f0a70(void* a0) { return *(uint16_t*)((char*)(a0) + 580); }

// sub_7f0a90  (orig 0x7f0a90, getter)
uint16_t main_f_7f0a90(void* a0) { return *(uint16_t*)((char*)(a0) + 836); }

// sub_7f0ba0  (orig 0x7f0ba0, indexed-getter)
uint8_t main_f_7f0ba0(void* a0, uint32_t a1) { return *(uint8_t *)(((char *)a0 + a1 * 1 + 865)); }

// sub_7f1310  (orig 0x7f1310, getter)
uint8_t main_f_7f1310(void* a0) { return *(uint8_t*)((char*)(a0) + 831); }

// sub_7f13d0  (orig 0x7f13d0, setter)
void main_f_7f13d0(void* a0) { *(uint16_t*)((char*)(a0) + 116) = 0; }

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

// sub_7f2580  (orig 0x7f2580, getter)
uint16_t main_f_7f2580(void* a0) { return *(uint16_t*)((char*)(a0) + 826); }

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
void main_f_7f37d0(void* a0) {
    *(uint8_t*)((char*)(a0) + 64) = (uint8_t)(1);
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

// sub_7f8ba0  (orig 0x7f8ba0, straight)
void main_f_7f8ba0(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 4);
    *(uint32_t*)((char*)(a2)) = (uint32_t)(*(uint64_t*)((char*)(a0)));
}

// sub_7f8cf0  (orig 0x7f8cf0, setter-chain)
void main_f_7f8cf0(void* a0, uint32_t a1, uint8_t a2) { *(uint32_t*)((char*)(a0)) = a1; *(uint8_t*)((char*)(a0) + 4) = a2; }

// sub_7f8d00  (orig 0x7f8d00, straight)
void main_f_7f8d00(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = *(uint32_t*)((char*)(a1));
    *(uint8_t*)((char*)(a0) + 4) = *(uint8_t*)((char*)(a1) + 4);
}

// sub_7fc170  (orig 0x7fc170, compare)
bool main_f_7fc170(uint64_t a0) { return (uint32_t)(a0) == (uint64_t)(2); }

// sub_7fc180  (orig 0x7fc180, mov_ret)
uint32_t main_f_7fc180() { return 1; }

// sub_7fc1c0  (orig 0x7fc1c0, setter-chain-zero)
void main_f_7fc1c0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a0 + 48) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_7fc1e0  (orig 0x7fc1e0, ret_only)
void main_f_7fc1e0() {}

// sub_7fc1f0  (orig 0x7fc1f0, setter-chain-zero)
void main_f_7fc1f0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a0 + 48) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_7fc2e0  (orig 0x7fc2e0, getter)
uint8_t main_f_7fc2e0(void* a0) { return *(uint8_t*)((char*)(a0) + 48); }

// sub_7fc740  (orig 0x7fc740, setter-chain)
void main_f_7fc740(void* a0) { *(uint16_t*)((char*)(a0) + 4) = 0; *(uint32_t*)((char*)(a0)) = 0; }

// sub_7fc750  (orig 0x7fc750, straight)
void main_f_7fc750(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0)) = *(uint8_t*)((char*)(a1));
    *(uint8_t*)((char*)(a0) + 1) = *(uint8_t*)((char*)(a1) + 1);
    *(uint8_t*)((char*)(a0) + 2) = *(uint8_t*)((char*)(a1) + 2);
    *(uint8_t*)((char*)(a0) + 3) = *(uint8_t*)((char*)(a1) + 3);
    *(uint8_t*)((char*)(a0) + 4) = *(uint8_t*)((char*)(a1) + 4);
}

// sub_7fc7d0  (orig 0x7fc7d0, copy2)
void main_f_7fc7d0(void* a0) { *(uint8_t*)((char*)(a0) + 4) = *(uint8_t*)((char*)(a0) + 5); }

// sub_7fc7e0  (orig 0x7fc7e0, straight)
void main_f_7fc7e0(void* a0) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(1);
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

// sub_7fead0  (orig 0x7fead0, setter-chain)
void main_f_7fead0(void* a0) { *(uint16_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

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

// sub_7ff600  (orig 0x7ff600, ret_only)
void main_f_7ff600() {}

// sub_7ff780  (orig 0x7ff780, straight)
void main_f_7ff780(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0));
    *(uint8_t*)((char*)(a1) + 4) = *(uint8_t*)((char*)(a0) + 4);
    *(uint8_t*)((char*)(a1) + 5) = *(uint8_t*)((char*)(a0) + 5);
    *(uint8_t*)((char*)(a1) + 6) = *(uint8_t*)((char*)(a0) + 6);
    *(uint8_t*)((char*)(a1) + 7) = *(uint8_t*)((char*)(a0) + 7);
    *(uint8_t*)((char*)(a1) + 8) = *(uint8_t*)((char*)(a0) + 8);
}

// sub_7ff860  (orig 0x7ff860, setter)
void main_f_7ff860(void* a0) { *(uint8_t*)((char*)(a0) + 8) = 0; }

// sub_7ff870  (orig 0x7ff870, copy2)
void main_f_7ff870(void* a0, void* a1) { *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8); }

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

// sub_800bf0  (orig 0x800bf0, getter)
uint8_t main_f_800bf0(void* a0) { return *(uint8_t*)((char*)(a0) + 56); }

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

// sub_801860  (orig 0x801860, getter)
uint8_t main_f_801860(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_801890  (orig 0x801890, compare)
bool main_f_801890(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) > (uint64_t)(3); }

// sub_801910  (orig 0x801910, straight)
void main_f_801910(void* a0) {
    *(uint8_t*)((char*)(a0) + 12) = (uint8_t)(1);
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

// sub_802490  (orig 0x802490, getter)
uint32_t main_f_802490(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_8024e0  (orig 0x8024e0, ptr_add)
void* main_f_8024e0(void* a0) { return (char*)a0 + 16; }

// sub_802580  (orig 0x802580, copy2)
void main_f_802580(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1) + 8); }

// sub_802590  (orig 0x802590, setter)
void main_f_802590(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_8025d0  (orig 0x8025d0, ret_only)
void main_f_8025d0() {}

// sub_8025f0  (orig 0x8025f0, straight)
void main_f_8025f0(void* a0) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(7);
}

// sub_802600  (orig 0x802600, straight)
void main_f_802600(void* a0) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(7);
}

// sub_802610  (orig 0x802610, copy2)
void main_f_802610(void* a0, void* a1) { *(uint8_t*)((char*)(a0)) = *(uint8_t*)((char*)(a1)); }

// sub_802620  (orig 0x802620, compare)
bool main_f_802620(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) > (uint64_t)(6); }

// sub_802650  (orig 0x802650, setter)
void main_f_802650(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_803a10  (orig 0x803a10, setter-chain)
void main_f_803a10(void* a0) { *(uint16_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0)) = 0; }

// sub_803a20  (orig 0x803a20, setter-chain)
void main_f_803a20(void* a0) { *(uint16_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0)) = 0; }

// sub_803c60  (orig 0x803c60, setter-chain-zero)
void main_f_803c60(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 32) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_803c70  (orig 0x803c70, setter-chain-zero)
void main_f_803c70(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 32) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_803d40  (orig 0x803d40, getter)
uint16_t main_f_803d40(void* a0) { return *(uint16_t*)((char*)(a0)); }

// sub_803dc0  (orig 0x803dc0, ptr_add)
void* main_f_803dc0(void* a0) { return (char*)a0 + 4; }

// sub_803e00  (orig 0x803e00, getter)
uint32_t main_f_803e00(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

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

// sub_812cf0  (orig 0x812cf0, setter)
void main_f_812cf0(void* a0) { *(uint32_t*)((char*)(a0) + 16) = 0; }

// sub_812db0  (orig 0x812db0, setter)
void main_f_812db0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 4) = a1; }

// sub_812dc0  (orig 0x812dc0, setter)
void main_f_812dc0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0)) = a1; }

// sub_812dd0  (orig 0x812dd0, getter)
uint32_t main_f_812dd0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_812de0  (orig 0x812de0, straight)
void main_f_812de0(void* a0) {
    *(uint8_t*)((char*)(a0) + 9) = (uint8_t)(1);
}

// sub_812e10  (orig 0x812e10, getter)
uint8_t main_f_812e10(void* a0) { return *(uint8_t*)((char*)(a0) + 9); }

// sub_812e20  (orig 0x812e20, getter)
uint8_t main_f_812e20(void* a0) { return *(uint8_t*)((char*)(a0) + 10); }

// sub_812e30  (orig 0x812e30, setter)
void main_f_812e30(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 6) = a1; }

// sub_812ea0  (orig 0x812ea0, straight)
void main_f_812ea0(void* a0) {
    *(uint8_t*)((char*)(a0) + 8) = (uint8_t)(1);
}

// sub_812eb0  (orig 0x812eb0, straight)
void main_f_812eb0(void* a0) {
    *(uint8_t*)((char*)(a0) + 14) = (uint8_t)(1);
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

// sub_82b070  (orig 0x82b070, ret_only)
void main_f_82b070() {}

// sub_82b0d0  (orig 0x82b0d0, getter)
uint8_t main_f_82b0d0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_82b4c0  (orig 0x82b4c0, setter-chain-zero)
void main_f_82b4c0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 192) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 176) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 136) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 160) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 144) = (struct u64x2){ 0, 0 };
}

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

// sub_82b810  (orig 0x82b810, ret_only)
void main_f_82b810() {}

// sub_82cca0  (orig 0x82cca0, setter)
void main_f_82cca0(void* a0) { *(uint8_t*)((char*)(a0) + 2888) = 0; }

// sub_82ccb0  (orig 0x82ccb0, getter)
uint8_t main_f_82ccb0(void* a0) { return *(uint8_t*)((char*)(a0) + 2888); }

// sub_82d5d0  (orig 0x82d5d0, ret_only)
void main_f_82d5d0() {}

// sub_82d670  (orig 0x82d670, setter-chain-zero)
void main_f_82d670(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_82f7f0  (orig 0x82f7f0, setter-chain-zero)
void main_f_82f7f0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a0 + 24) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
}

// sub_82f800  (orig 0x82f800, ret_only)
void main_f_82f800() {}

// sub_82f830  (orig 0x82f830, setter)
void main_f_82f830(void* a0) { *(uint8_t*)((char*)(a0) + 24) = 0; }

// sub_831000  (orig 0x831000, ret_only)
void main_f_831000() {}

// sub_831020  (orig 0x831020, straight)
void main_f_831020(void* a0) {
    *(uint32_t*)((char*)(a0)) = -1;
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
void main_f_8504f0(void* a0) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(33267);
}

// sub_850560  (orig 0x850560, setter)
void main_f_850560(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

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

