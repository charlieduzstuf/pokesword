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

// sub_121f8d0  (orig 0x121f8d0, struct-copy)
void main_f_121f8d0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_121f8f0  (orig 0x121f8f0, struct-copy)
void main_f_121f8f0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

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

// sub_122a390  (orig 0x122a390, struct-copy)
void main_f_122a390(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_122a3b0  (orig 0x122a3b0, struct-copy)
void main_f_122a3b0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

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

// sub_122cbf0  (orig 0x122cbf0, struct-copy)
void main_f_122cbf0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_122cc10  (orig 0x122cc10, struct-copy)
void main_f_122cc10(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

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

// sub_1234530  (orig 0x1234530, copy2)
void main_f_1234530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1234650  (orig 0x1234650, ret_only)
void main_f_1234650() {}

// sub_12346f0  (orig 0x12346f0, ret_only)
void main_f_12346f0() {}

// sub_1234700  (orig 0x1234700, copy2)
void main_f_1234700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1234710  (orig 0x1234710, copy2)
void main_f_1234710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1234b40  (orig 0x1234b40, ret_only)
void main_f_1234b40() {}

// sub_123b490  (orig 0x123b490, ret_only)
void main_f_123b490() {}

// sub_123dac0  (orig 0x123dac0, ret_only)
void main_f_123dac0() {}

// sub_123dd20  (orig 0x123dd20, copy2)
void main_f_123dd20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_123dd30  (orig 0x123dd30, copy2)
void main_f_123dd30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1241f30  (orig 0x1241f30, ret_only)
void main_f_1241f30() {}

// sub_1242df0  (orig 0x1242df0, copy2)
void main_f_1242df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1242e00  (orig 0x1242e00, copy2)
void main_f_1242e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1243370  (orig 0x1243370, ret_only)
void main_f_1243370() {}

// sub_12448d0  (orig 0x12448d0, mov_ret)
uint32_t main_f_12448d0() { return 1; }

// sub_1245680  (orig 0x1245680, getter)
uint64_t main_f_1245680(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_12457f0  (orig 0x12457f0, mov_ret)
uint32_t main_f_12457f0() { return 1; }

// sub_1245800  (orig 0x1245800, indexed-getter)
uint64_t main_f_1245800(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1245810  (orig 0x1245810, indexed-getter)
uint64_t main_f_1245810(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1246860  (orig 0x1246860, ret_only)
void main_f_1246860() {}

// sub_1246b10  (orig 0x1246b10, mov_ret)
uint32_t main_f_1246b10() { return 1; }

// sub_1248240  (orig 0x1248240, ret_only)
void main_f_1248240() {}

// sub_12485f0  (orig 0x12485f0, ret_only)
void main_f_12485f0() {}

// sub_1249170  (orig 0x1249170, ret_only)
void main_f_1249170() {}

// sub_1249180  (orig 0x1249180, copy2)
void main_f_1249180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1249190  (orig 0x1249190, copy2)
void main_f_1249190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12491b0  (orig 0x12491b0, ret_only)
void main_f_12491b0() {}

// sub_12491c0  (orig 0x12491c0, copy2)
void main_f_12491c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12491d0  (orig 0x12491d0, copy2)
void main_f_12491d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_124b0e0  (orig 0x124b0e0, ret_only)
void main_f_124b0e0() {}

// sub_124b210  (orig 0x124b210, ret_only)
void main_f_124b210() {}

// sub_124b730  (orig 0x124b730, straight)
void main_f_124b730(void* a0) {
    *(uint32_t*)((char*)(a0) + 120) = 5;
}

// sub_124c0f0  (orig 0x124c0f0, ret_only)
void main_f_124c0f0() {}

// sub_124c4f0  (orig 0x124c4f0, ret_only)
void main_f_124c4f0() {}

// sub_124c500  (orig 0x124c500, struct-copy)
void main_f_124c500(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_124c520  (orig 0x124c520, struct-copy)
void main_f_124c520(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_124d540  (orig 0x124d540, ret_only)
void main_f_124d540() {}

// sub_1251220  (orig 0x1251220, ret_only)
void main_f_1251220() {}

// sub_1251230  (orig 0x1251230, copy2)
void main_f_1251230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251240  (orig 0x1251240, copy2)
void main_f_1251240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12512f0  (orig 0x12512f0, ret_only)
void main_f_12512f0() {}

// sub_1251300  (orig 0x1251300, copy2)
void main_f_1251300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251310  (orig 0x1251310, copy2)
void main_f_1251310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251440  (orig 0x1251440, ret_only)
void main_f_1251440() {}

// sub_1251450  (orig 0x1251450, copy2)
void main_f_1251450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251460  (orig 0x1251460, copy2)
void main_f_1251460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12515a0  (orig 0x12515a0, ret_only)
void main_f_12515a0() {}

// sub_12515b0  (orig 0x12515b0, copy2)
void main_f_12515b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12515c0  (orig 0x12515c0, copy2)
void main_f_12515c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12515f0  (orig 0x12515f0, ret_only)
void main_f_12515f0() {}

// sub_1251600  (orig 0x1251600, struct-copy)
void main_f_1251600(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1251620  (orig 0x1251620, struct-copy)
void main_f_1251620(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1251720  (orig 0x1251720, ret_only)
void main_f_1251720() {}

// sub_1251730  (orig 0x1251730, copy2)
void main_f_1251730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251740  (orig 0x1251740, copy2)
void main_f_1251740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251850  (orig 0x1251850, ret_only)
void main_f_1251850() {}

// sub_1251860  (orig 0x1251860, copy2)
void main_f_1251860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251870  (orig 0x1251870, copy2)
void main_f_1251870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251980  (orig 0x1251980, ret_only)
void main_f_1251980() {}

// sub_1251990  (orig 0x1251990, copy2)
void main_f_1251990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12519a0  (orig 0x12519a0, copy2)
void main_f_12519a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12519b0  (orig 0x12519b0, mov_ret)
uint32_t main_f_12519b0() { return 1; }

// sub_12519c0  (orig 0x12519c0, ret_only)
void main_f_12519c0() {}

// sub_12519d0  (orig 0x12519d0, ret_only)
void main_f_12519d0() {}

// sub_12519e0  (orig 0x12519e0, ret_only)
void main_f_12519e0() {}

// sub_1251a90  (orig 0x1251a90, ret_only)
void main_f_1251a90() {}

// sub_1251aa0  (orig 0x1251aa0, copy2)
void main_f_1251aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251ab0  (orig 0x1251ab0, copy2)
void main_f_1251ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251c80  (orig 0x1251c80, ret_only)
void main_f_1251c80() {}

// sub_1251c90  (orig 0x1251c90, copy2)
void main_f_1251c90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251ca0  (orig 0x1251ca0, copy2)
void main_f_1251ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251d40  (orig 0x1251d40, ret_only)
void main_f_1251d40() {}

// sub_1251d50  (orig 0x1251d50, copy2)
void main_f_1251d50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251d60  (orig 0x1251d60, copy2)
void main_f_1251d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251f20  (orig 0x1251f20, ret_only)
void main_f_1251f20() {}

// sub_1252020  (orig 0x1252020, ret_only)
void main_f_1252020() {}

// sub_1252030  (orig 0x1252030, copy2)
void main_f_1252030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252040  (orig 0x1252040, copy2)
void main_f_1252040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252080  (orig 0x1252080, ret_only)
void main_f_1252080() {}

// sub_1252090  (orig 0x1252090, copy2)
void main_f_1252090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12520a0  (orig 0x12520a0, copy2)
void main_f_12520a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12520b0  (orig 0x12520b0, copy2)
void main_f_12520b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12520c0  (orig 0x12520c0, copy2)
void main_f_12520c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252290  (orig 0x1252290, ret_only)
void main_f_1252290() {}

// sub_12522d0  (orig 0x12522d0, ret_only)
void main_f_12522d0() {}

// sub_12522e0  (orig 0x12522e0, copy2)
void main_f_12522e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12522f0  (orig 0x12522f0, copy2)
void main_f_12522f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252300  (orig 0x1252300, copy2)
void main_f_1252300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252310  (orig 0x1252310, copy2)
void main_f_1252310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12524e0  (orig 0x12524e0, ret_only)
void main_f_12524e0() {}

// sub_12526c0  (orig 0x12526c0, ret_only)
void main_f_12526c0() {}

// sub_12526d0  (orig 0x12526d0, copy2)
void main_f_12526d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12526e0  (orig 0x12526e0, copy2)
void main_f_12526e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12526f0  (orig 0x12526f0, copy2)
void main_f_12526f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252700  (orig 0x1252700, copy2)
void main_f_1252700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12528d0  (orig 0x12528d0, ret_only)
void main_f_12528d0() {}

// sub_1252910  (orig 0x1252910, ret_only)
void main_f_1252910() {}

// sub_1252920  (orig 0x1252920, copy2)
void main_f_1252920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252930  (orig 0x1252930, copy2)
void main_f_1252930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252940  (orig 0x1252940, copy2)
void main_f_1252940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252950  (orig 0x1252950, copy2)
void main_f_1252950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252960  (orig 0x1252960, ret_only)
void main_f_1252960() {}

// sub_1252970  (orig 0x1252970, ret_only)
void main_f_1252970() {}

// sub_1252980  (orig 0x1252980, ret_only)
void main_f_1252980() {}

// sub_1252990  (orig 0x1252990, ret_only)
void main_f_1252990() {}

// sub_12529a0  (orig 0x12529a0, ret_only)
void main_f_12529a0() {}

// sub_12529b0  (orig 0x12529b0, ret_only)
void main_f_12529b0() {}

// sub_12529c0  (orig 0x12529c0, ret_only)
void main_f_12529c0() {}

// sub_12529d0  (orig 0x12529d0, ret_only)
void main_f_12529d0() {}

// sub_1252c80  (orig 0x1252c80, ret_only)
void main_f_1252c80() {}

// sub_1252df0  (orig 0x1252df0, ret_only)
void main_f_1252df0() {}

// sub_1252e00  (orig 0x1252e00, copy2)
void main_f_1252e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252e10  (orig 0x1252e10, copy2)
void main_f_1252e10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252e20  (orig 0x1252e20, copy2)
void main_f_1252e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252e30  (orig 0x1252e30, copy2)
void main_f_1252e30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252e70  (orig 0x1252e70, ret_only)
void main_f_1252e70() {}

// sub_1252e80  (orig 0x1252e80, copy2)
void main_f_1252e80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252e90  (orig 0x1252e90, copy2)
void main_f_1252e90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252eb0  (orig 0x1252eb0, ret_only)
void main_f_1252eb0() {}

// sub_1252ec0  (orig 0x1252ec0, copy2)
void main_f_1252ec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252ed0  (orig 0x1252ed0, copy2)
void main_f_1252ed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252f40  (orig 0x1252f40, ret_only)
void main_f_1252f40() {}

// sub_1252f50  (orig 0x1252f50, copy2)
void main_f_1252f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252f60  (orig 0x1252f60, copy2)
void main_f_1252f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252fd0  (orig 0x1252fd0, ret_only)
void main_f_1252fd0() {}

// sub_1252fe0  (orig 0x1252fe0, copy2)
void main_f_1252fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252ff0  (orig 0x1252ff0, copy2)
void main_f_1252ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253010  (orig 0x1253010, ret_only)
void main_f_1253010() {}

// sub_1253020  (orig 0x1253020, copy2)
void main_f_1253020(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253030  (orig 0x1253030, copy2)
void main_f_1253030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12530b0  (orig 0x12530b0, ret_only)
void main_f_12530b0() {}

// sub_12530c0  (orig 0x12530c0, copy2)
void main_f_12530c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12530d0  (orig 0x12530d0, copy2)
void main_f_12530d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253160  (orig 0x1253160, ret_only)
void main_f_1253160() {}

// sub_1253170  (orig 0x1253170, copy2)
void main_f_1253170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253180  (orig 0x1253180, copy2)
void main_f_1253180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253200  (orig 0x1253200, ret_only)
void main_f_1253200() {}

// sub_1253210  (orig 0x1253210, copy2)
void main_f_1253210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253220  (orig 0x1253220, copy2)
void main_f_1253220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253240  (orig 0x1253240, ret_only)
void main_f_1253240() {}

// sub_1253250  (orig 0x1253250, copy2)
void main_f_1253250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253260  (orig 0x1253260, copy2)
void main_f_1253260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253280  (orig 0x1253280, ret_only)
void main_f_1253280() {}

// sub_1253290  (orig 0x1253290, copy2)
void main_f_1253290(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12532a0  (orig 0x12532a0, copy2)
void main_f_12532a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12532c0  (orig 0x12532c0, ret_only)
void main_f_12532c0() {}

// sub_12532d0  (orig 0x12532d0, copy2)
void main_f_12532d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12532e0  (orig 0x12532e0, copy2)
void main_f_12532e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253370  (orig 0x1253370, ret_only)
void main_f_1253370() {}

// sub_12533b0  (orig 0x12533b0, ret_only)
void main_f_12533b0() {}

// sub_12533c0  (orig 0x12533c0, copy2)
void main_f_12533c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12533d0  (orig 0x12533d0, copy2)
void main_f_12533d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12533e0  (orig 0x12533e0, copy2)
void main_f_12533e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12533f0  (orig 0x12533f0, copy2)
void main_f_12533f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253430  (orig 0x1253430, ret_only)
void main_f_1253430() {}

// sub_1253440  (orig 0x1253440, copy2)
void main_f_1253440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253450  (orig 0x1253450, copy2)
void main_f_1253450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12534f0  (orig 0x12534f0, ret_only)
void main_f_12534f0() {}

// sub_1253510  (orig 0x1253510, ret_only)
void main_f_1253510() {}

// sub_1253520  (orig 0x1253520, copy2)
void main_f_1253520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253530  (orig 0x1253530, copy2)
void main_f_1253530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253570  (orig 0x1253570, ret_only)
void main_f_1253570() {}

// sub_1253580  (orig 0x1253580, copy2)
void main_f_1253580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253590  (orig 0x1253590, copy2)
void main_f_1253590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12535a0  (orig 0x12535a0, ret_only)
void main_f_12535a0() {}

// sub_12535b0  (orig 0x12535b0, ret_only)
void main_f_12535b0() {}

// sub_12535c0  (orig 0x12535c0, ret_only)
void main_f_12535c0() {}

// sub_12535d0  (orig 0x12535d0, ret_only)
void main_f_12535d0() {}

// sub_12538b0  (orig 0x12538b0, mov_ret)
uint32_t main_f_12538b0() { return 1; }

// sub_12538c0  (orig 0x12538c0, setter)
void main_f_12538c0(void* a0) { *(uint32_t*)((char*)(a0) + 104) = 0; }

// sub_12545d0  (orig 0x12545d0, getter)
uint64_t main_f_12545d0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1254740  (orig 0x1254740, mov_ret)
uint32_t main_f_1254740() { return 1; }

// sub_1254750  (orig 0x1254750, indexed-getter)
uint64_t main_f_1254750(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1254760  (orig 0x1254760, indexed-getter)
uint64_t main_f_1254760(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_12550d0  (orig 0x12550d0, ret_only)
void main_f_12550d0() {}

// sub_1255260  (orig 0x1255260, mov_ret)
uint32_t main_f_1255260() { return 1; }

// sub_12588d0  (orig 0x12588d0, ret_only)
void main_f_12588d0() {}

// sub_12588e0  (orig 0x12588e0, copy2)
void main_f_12588e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12588f0  (orig 0x12588f0, copy2)
void main_f_12588f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1258ba0  (orig 0x1258ba0, ret_only)
void main_f_1258ba0() {}

// sub_1258bb0  (orig 0x1258bb0, copy2)
void main_f_1258bb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1258bc0  (orig 0x1258bc0, copy2)
void main_f_1258bc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1258d50  (orig 0x1258d50, ret_only)
void main_f_1258d50() {}

// sub_1258d60  (orig 0x1258d60, copy2)
void main_f_1258d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1258d70  (orig 0x1258d70, copy2)
void main_f_1258d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1258f50  (orig 0x1258f50, ret_only)
void main_f_1258f50() {}

// sub_1258f60  (orig 0x1258f60, copy2)
void main_f_1258f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1258f70  (orig 0x1258f70, copy2)
void main_f_1258f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1258ff0  (orig 0x1258ff0, ret_only)
void main_f_1258ff0() {}

// sub_1259000  (orig 0x1259000, copy2)
void main_f_1259000(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1259010  (orig 0x1259010, copy2)
void main_f_1259010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1259240  (orig 0x1259240, getter)
uint8_t main_f_1259240(void* a0) { return *(uint8_t*)((char*)(a0) + 2944); }

// sub_1259810  (orig 0x1259810, straight)
void main_f_1259810(void* a0) {
    *(uint8_t*)((char*)(a0) + 137) = (uint8_t)(1);
}

// sub_1259bb0  (orig 0x1259bb0, ret_only)
void main_f_1259bb0() {}

// sub_1259bc0  (orig 0x1259bc0, struct-copy)
void main_f_1259bc0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1259be0  (orig 0x1259be0, struct-copy)
void main_f_1259be0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_125a0f0  (orig 0x125a0f0, getter)
uint64_t main_f_125a0f0(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_125b9f0  (orig 0x125b9f0, getter)
uint64_t main_f_125b9f0(void* a0) { return *(uint64_t*)((char*)(a0) + 1552); }

// sub_125d290  (orig 0x125d290, mov_ret)
uint32_t main_f_125d290() { return 1; }

// sub_1260810  (orig 0x1260810, ret_only)
void main_f_1260810() {}

// sub_1260820  (orig 0x1260820, ret_only)
void main_f_1260820() {}

// sub_1260830  (orig 0x1260830, ret_only)
void main_f_1260830() {}

// sub_1260840  (orig 0x1260840, ret_only)
void main_f_1260840() {}

// sub_1262a60  (orig 0x1262a60, straight)
void main_f_1262a60(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 104) = 8;
}

// sub_1262fa0  (orig 0x1262fa0, getter)
uint32_t main_f_1262fa0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1263050  (orig 0x1263050, setter)
void main_f_1263050(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 24) = a1; }

// sub_1263060  (orig 0x1263060, setter)
void main_f_1263060(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 32) = a1; }

// sub_12635f0  (orig 0x12635f0, getter)
uint32_t main_f_12635f0(void* a0) { return *(uint32_t*)((char*)(a0) + 136); }

// sub_12637d0  (orig 0x12637d0, getter)
uint8_t main_f_12637d0(void* a0) { return *(uint8_t*)((char*)(a0) + 140); }

// sub_1263990  (orig 0x1263990, setter)
void main_f_1263990(void* a0, float a1) { *(float*)((char*)(a0) + 400) = a1; }

// sub_1264840  (orig 0x1264840, ret_only)
void main_f_1264840() {}

// sub_1264850  (orig 0x1264850, copy2)
void main_f_1264850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1264860  (orig 0x1264860, copy2)
void main_f_1264860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1266440  (orig 0x1266440, ret_only)
void main_f_1266440() {}

// sub_1266450  (orig 0x1266450, struct-copy)
void main_f_1266450(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1266470  (orig 0x1266470, struct-copy)
void main_f_1266470(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1266d60  (orig 0x1266d60, ret_only)
void main_f_1266d60() {}

// sub_1266d70  (orig 0x1266d70, copy2)
void main_f_1266d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1266d80  (orig 0x1266d80, copy2)
void main_f_1266d80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1268210  (orig 0x1268210, ret_only)
void main_f_1268210() {}

// sub_1268220  (orig 0x1268220, copy2)
void main_f_1268220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1268230  (orig 0x1268230, copy2)
void main_f_1268230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12682d0  (orig 0x12682d0, ret_only)
void main_f_12682d0() {}

// sub_1268700  (orig 0x1268700, straight)
void main_f_1268700(void* a0) {
    *(uint8_t*)((char*)(a0) + 962) = (uint8_t)(1);
}

// sub_1269800  (orig 0x1269800, ret_only)
void main_f_1269800() {}

// sub_126a9b0  (orig 0x126a9b0, getter)
uint8_t main_f_126a9b0(void* a0) { return *(uint8_t*)((char*)(a0) + 2720); }

// sub_126ac90  (orig 0x126ac90, getter)
uint64_t main_f_126ac90(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_126ad40  (orig 0x126ad40, ret_only)
void main_f_126ad40() {}

// sub_126c5b0  (orig 0x126c5b0, ret_only)
void main_f_126c5b0() {}

// sub_126c5c0  (orig 0x126c5c0, ret_only)
void main_f_126c5c0() {}

// sub_126c5d0  (orig 0x126c5d0, ret_only)
void main_f_126c5d0() {}

// sub_126c5e0  (orig 0x126c5e0, ret_only)
void main_f_126c5e0() {}

// sub_126cb20  (orig 0x126cb20, ret_only)
void main_f_126cb20() {}

// sub_126cb30  (orig 0x126cb30, copy2)
void main_f_126cb30(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_126cb40  (orig 0x126cb40, copy2)
void main_f_126cb40(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_126cb70  (orig 0x126cb70, ret_only)
void main_f_126cb70() {}

// sub_126cb80  (orig 0x126cb80, struct-copy)
void main_f_126cb80(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_126cba0  (orig 0x126cba0, struct-copy)
void main_f_126cba0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_126cc60  (orig 0x126cc60, ret_only)
void main_f_126cc60() {}

// sub_126cc70  (orig 0x126cc70, copy2)
void main_f_126cc70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126cc80  (orig 0x126cc80, copy2)
void main_f_126cc80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126cd20  (orig 0x126cd20, ret_only)
void main_f_126cd20() {}

// sub_126cd30  (orig 0x126cd30, copy2)
void main_f_126cd30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126cd40  (orig 0x126cd40, copy2)
void main_f_126cd40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126cd80  (orig 0x126cd80, ret_only)
void main_f_126cd80() {}

// sub_126cd90  (orig 0x126cd90, copy2)
void main_f_126cd90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126cda0  (orig 0x126cda0, copy2)
void main_f_126cda0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126d9b0  (orig 0x126d9b0, straight)
void main_f_126d9b0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 104) = 4;
}

// sub_126dfa0  (orig 0x126dfa0, ret_only)
void main_f_126dfa0() {}

// sub_126dfb0  (orig 0x126dfb0, copy2)
void main_f_126dfb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126dfc0  (orig 0x126dfc0, copy2)
void main_f_126dfc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126e070  (orig 0x126e070, ret_only)
void main_f_126e070() {}

// sub_126e5e0  (orig 0x126e5e0, ret_only)
void main_f_126e5e0() {}

// sub_126ec40  (orig 0x126ec40, ret_only)
void main_f_126ec40() {}

// sub_126ec50  (orig 0x126ec50, copy2)
void main_f_126ec50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126ec60  (orig 0x126ec60, copy2)
void main_f_126ec60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126fae0  (orig 0x126fae0, ret_only)
void main_f_126fae0() {}

// sub_126faf0  (orig 0x126faf0, copy2)
void main_f_126faf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126fb00  (orig 0x126fb00, copy2)
void main_f_126fb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126fb90  (orig 0x126fb90, ret_only)
void main_f_126fb90() {}

// sub_126fba0  (orig 0x126fba0, copy2)
void main_f_126fba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126fbb0  (orig 0x126fbb0, copy2)
void main_f_126fbb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1271e50  (orig 0x1271e50, ret_only)
void main_f_1271e50() {}

// sub_1271e60  (orig 0x1271e60, struct-copy)
void main_f_1271e60(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1271e80  (orig 0x1271e80, struct-copy)
void main_f_1271e80(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1271eb0  (orig 0x1271eb0, ret_only)
void main_f_1271eb0() {}

// sub_1271ec0  (orig 0x1271ec0, copy2)
void main_f_1271ec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1271ed0  (orig 0x1271ed0, copy2)
void main_f_1271ed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1273940  (orig 0x1273940, ret_only)
void main_f_1273940() {}

// sub_1273950  (orig 0x1273950, copy2)
void main_f_1273950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1273960  (orig 0x1273960, copy2)
void main_f_1273960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1273a90  (orig 0x1273a90, ret_only)
void main_f_1273a90() {}

// sub_1273aa0  (orig 0x1273aa0, copy2)
void main_f_1273aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1273ab0  (orig 0x1273ab0, copy2)
void main_f_1273ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1273c30  (orig 0x1273c30, ret_only)
void main_f_1273c30() {}

// sub_1274d30  (orig 0x1274d30, ret_only)
void main_f_1274d30() {}

// sub_1274ec0  (orig 0x1274ec0, ret_only)
void main_f_1274ec0() {}

// sub_1274ed0  (orig 0x1274ed0, ret_only)
void main_f_1274ed0() {}

// sub_1275de0  (orig 0x1275de0, ret_only)
void main_f_1275de0() {}

// sub_1275df0  (orig 0x1275df0, struct-copy)
void main_f_1275df0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1275e10  (orig 0x1275e10, struct-copy)
void main_f_1275e10(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1275e30  (orig 0x1275e30, ret_only)
void main_f_1275e30() {}

// sub_1275e40  (orig 0x1275e40, ret_only)
void main_f_1275e40() {}

// sub_1275e50  (orig 0x1275e50, ret_only)
void main_f_1275e50() {}

// sub_1275e60  (orig 0x1275e60, ret_only)
void main_f_1275e60() {}

// sub_1275e70  (orig 0x1275e70, ret_only)
void main_f_1275e70() {}

// sub_1275e80  (orig 0x1275e80, ret_only)
void main_f_1275e80() {}

// sub_1275e90  (orig 0x1275e90, ret_only)
void main_f_1275e90() {}

// sub_1275ea0  (orig 0x1275ea0, ret_only)
void main_f_1275ea0() {}

// sub_1275ec0  (orig 0x1275ec0, ret_only)
void main_f_1275ec0() {}

// sub_1275ed0  (orig 0x1275ed0, copy2)
void main_f_1275ed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1275ee0  (orig 0x1275ee0, copy2)
void main_f_1275ee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1275ef0  (orig 0x1275ef0, ret_only)
void main_f_1275ef0() {}

// sub_1275f00  (orig 0x1275f00, ret_only)
void main_f_1275f00() {}

// sub_1275f10  (orig 0x1275f10, ret_only)
void main_f_1275f10() {}

// sub_1275f20  (orig 0x1275f20, ret_only)
void main_f_1275f20() {}

// sub_1275f40  (orig 0x1275f40, ret_only)
void main_f_1275f40() {}

// sub_1275f50  (orig 0x1275f50, copy2)
void main_f_1275f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1275f60  (orig 0x1275f60, copy2)
void main_f_1275f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1275f70  (orig 0x1275f70, ret_only)
void main_f_1275f70() {}

// sub_1275f80  (orig 0x1275f80, ret_only)
void main_f_1275f80() {}

// sub_1275f90  (orig 0x1275f90, ret_only)
void main_f_1275f90() {}

// sub_1275fa0  (orig 0x1275fa0, ret_only)
void main_f_1275fa0() {}

// sub_1275fc0  (orig 0x1275fc0, ret_only)
void main_f_1275fc0() {}

// sub_1275fd0  (orig 0x1275fd0, copy2)
void main_f_1275fd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1275fe0  (orig 0x1275fe0, copy2)
void main_f_1275fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1276000  (orig 0x1276000, ret_only)
void main_f_1276000() {}

// sub_1276010  (orig 0x1276010, copy2)
void main_f_1276010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1276020  (orig 0x1276020, copy2)
void main_f_1276020(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1276040  (orig 0x1276040, ret_only)
void main_f_1276040() {}

// sub_1276050  (orig 0x1276050, copy2)
void main_f_1276050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1276060  (orig 0x1276060, copy2)
void main_f_1276060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1276070  (orig 0x1276070, ret_only)
void main_f_1276070() {}

// sub_1276080  (orig 0x1276080, ret_only)
void main_f_1276080() {}

// sub_1276090  (orig 0x1276090, ret_only)
void main_f_1276090() {}

// sub_12760a0  (orig 0x12760a0, ret_only)
void main_f_12760a0() {}

// sub_12769c0  (orig 0x12769c0, ret_only)
void main_f_12769c0() {}

// sub_12769d0  (orig 0x12769d0, ret_only)
void main_f_12769d0() {}

// sub_12769e0  (orig 0x12769e0, ret_only)
void main_f_12769e0() {}

// sub_12769f0  (orig 0x12769f0, ret_only)
void main_f_12769f0() {}

// sub_1276a90  (orig 0x1276a90, ret_only)
void main_f_1276a90() {}

// sub_1277460  (orig 0x1277460, ret_only)
void main_f_1277460() {}

// sub_1277470  (orig 0x1277470, ret_only)
void main_f_1277470() {}

// sub_1277480  (orig 0x1277480, ret_only)
void main_f_1277480() {}

// sub_1277490  (orig 0x1277490, ret_only)
void main_f_1277490() {}

// sub_1278370  (orig 0x1278370, ret_only)
void main_f_1278370() {}

// sub_1278380  (orig 0x1278380, copy2)
void main_f_1278380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1278390  (orig 0x1278390, copy2)
void main_f_1278390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1278670  (orig 0x1278670, ret_only)
void main_f_1278670() {}

// sub_1278680  (orig 0x1278680, copy2)
void main_f_1278680(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_1278690  (orig 0x1278690, copy2)
void main_f_1278690(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_12786b0  (orig 0x12786b0, ret_only)
void main_f_12786b0() {}

// sub_12786c0  (orig 0x12786c0, copy2)
void main_f_12786c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12786d0  (orig 0x12786d0, copy2)
void main_f_12786d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1278cd0  (orig 0x1278cd0, getter)
uint32_t main_f_1278cd0(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_12795c0  (orig 0x12795c0, ret_only)
void main_f_12795c0() {}

// sub_12795d0  (orig 0x12795d0, copy2)
void main_f_12795d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12795e0  (orig 0x12795e0, copy2)
void main_f_12795e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1279630  (orig 0x1279630, ret_only)
void main_f_1279630() {}

// sub_1279640  (orig 0x1279640, copy2)
void main_f_1279640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1279650  (orig 0x1279650, copy2)
void main_f_1279650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127a2a0  (orig 0x127a2a0, ret_only)
void main_f_127a2a0() {}

// sub_127a2b0  (orig 0x127a2b0, copy2)
void main_f_127a2b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127a2c0  (orig 0x127a2c0, copy2)
void main_f_127a2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127a650  (orig 0x127a650, ret_only)
void main_f_127a650() {}

// sub_127aa70  (orig 0x127aa70, ret_only)
void main_f_127aa70() {}

// sub_127aa80  (orig 0x127aa80, copy2)
void main_f_127aa80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127aa90  (orig 0x127aa90, copy2)
void main_f_127aa90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b5e0  (orig 0x127b5e0, ret_only)
void main_f_127b5e0() {}

// sub_127b5f0  (orig 0x127b5f0, copy2)
void main_f_127b5f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b600  (orig 0x127b600, copy2)
void main_f_127b600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b650  (orig 0x127b650, ret_only)
void main_f_127b650() {}

// sub_127b6a0  (orig 0x127b6a0, ret_only)
void main_f_127b6a0() {}

// sub_127b6b0  (orig 0x127b6b0, copy2)
void main_f_127b6b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b6c0  (orig 0x127b6c0, copy2)
void main_f_127b6c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b7d0  (orig 0x127b7d0, ret_only)
void main_f_127b7d0() {}

// sub_127b7e0  (orig 0x127b7e0, copy2)
void main_f_127b7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b7f0  (orig 0x127b7f0, copy2)
void main_f_127b7f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b900  (orig 0x127b900, ret_only)
void main_f_127b900() {}

// sub_127b910  (orig 0x127b910, copy2)
void main_f_127b910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b920  (orig 0x127b920, copy2)
void main_f_127b920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127be70  (orig 0x127be70, ret_only)
void main_f_127be70() {}

// sub_127c160  (orig 0x127c160, ret_only)
void main_f_127c160() {}

// sub_127cdc0  (orig 0x127cdc0, ret_only)
void main_f_127cdc0() {}

// sub_127d460  (orig 0x127d460, ret_only)
void main_f_127d460() {}

// sub_127d480  (orig 0x127d480, ret_only)
void main_f_127d480() {}

// sub_127d490  (orig 0x127d490, copy2)
void main_f_127d490(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_127d4a0  (orig 0x127d4a0, copy2)
void main_f_127d4a0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_127d510  (orig 0x127d510, ret_only)
void main_f_127d510() {}

// sub_127d520  (orig 0x127d520, copy2)
void main_f_127d520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127d530  (orig 0x127d530, copy2)
void main_f_127d530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127d610  (orig 0x127d610, ret_only)
void main_f_127d610() {}

// sub_127d870  (orig 0x127d870, ret_only)
void main_f_127d870() {}

// sub_127ef50  (orig 0x127ef50, ret_only)
void main_f_127ef50() {}

// sub_127fbc0  (orig 0x127fbc0, ret_only)
void main_f_127fbc0() {}

// sub_127fbd0  (orig 0x127fbd0, copy2)
void main_f_127fbd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127fbe0  (orig 0x127fbe0, copy2)
void main_f_127fbe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12809a0  (orig 0x12809a0, ret_only)
void main_f_12809a0() {}

// sub_1281510  (orig 0x1281510, ret_only)
void main_f_1281510() {}

// sub_12821b0  (orig 0x12821b0, ret_only)
void main_f_12821b0() {}

// sub_12821c0  (orig 0x12821c0, copy2)
void main_f_12821c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12821d0  (orig 0x12821d0, copy2)
void main_f_12821d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12821e0  (orig 0x12821e0, copy2)
void main_f_12821e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12821f0  (orig 0x12821f0, copy2)
void main_f_12821f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1282330  (orig 0x1282330, ret_only)
void main_f_1282330() {}

// sub_1282340  (orig 0x1282340, copy2)
void main_f_1282340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1282350  (orig 0x1282350, copy2)
void main_f_1282350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1282360  (orig 0x1282360, copy2)
void main_f_1282360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1282370  (orig 0x1282370, copy2)
void main_f_1282370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1282390  (orig 0x1282390, ret_only)
void main_f_1282390() {}

// sub_12823a0  (orig 0x12823a0, copy2)
void main_f_12823a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12823b0  (orig 0x12823b0, copy2)
void main_f_12823b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12823d0  (orig 0x12823d0, ret_only)
void main_f_12823d0() {}

// sub_12823e0  (orig 0x12823e0, copy2)
void main_f_12823e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12823f0  (orig 0x12823f0, copy2)
void main_f_12823f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1282610  (orig 0x1282610, ret_only)
void main_f_1282610() {}

// sub_1283180  (orig 0x1283180, ret_only)
void main_f_1283180() {}

// sub_1283b30  (orig 0x1283b30, copy2)
void main_f_1283b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283b40  (orig 0x1283b40, copy2)
void main_f_1283b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283c80  (orig 0x1283c80, ret_only)
void main_f_1283c80() {}

// sub_1283c90  (orig 0x1283c90, copy2)
void main_f_1283c90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283ca0  (orig 0x1283ca0, copy2)
void main_f_1283ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283cb0  (orig 0x1283cb0, copy2)
void main_f_1283cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283cc0  (orig 0x1283cc0, copy2)
void main_f_1283cc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283cd0  (orig 0x1283cd0, copy2)
void main_f_1283cd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283ce0  (orig 0x1283ce0, copy2)
void main_f_1283ce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283d00  (orig 0x1283d00, ret_only)
void main_f_1283d00() {}

// sub_1283d10  (orig 0x1283d10, copy2)
void main_f_1283d10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283d20  (orig 0x1283d20, copy2)
void main_f_1283d20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283d40  (orig 0x1283d40, ret_only)
void main_f_1283d40() {}

// sub_1283d50  (orig 0x1283d50, copy2)
void main_f_1283d50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283d60  (orig 0x1283d60, copy2)
void main_f_1283d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283ea0  (orig 0x1283ea0, ret_only)
void main_f_1283ea0() {}

// sub_1283eb0  (orig 0x1283eb0, copy2)
void main_f_1283eb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283ec0  (orig 0x1283ec0, copy2)
void main_f_1283ec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1284f40  (orig 0x1284f40, ret_only)
void main_f_1284f40() {}

// sub_1284f50  (orig 0x1284f50, copy2)
void main_f_1284f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1284f60  (orig 0x1284f60, copy2)
void main_f_1284f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1284f80  (orig 0x1284f80, ret_only)
void main_f_1284f80() {}

// sub_1284f90  (orig 0x1284f90, copy2)
void main_f_1284f90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1284fa0  (orig 0x1284fa0, copy2)
void main_f_1284fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1284fc0  (orig 0x1284fc0, ret_only)
void main_f_1284fc0() {}

// sub_1284fd0  (orig 0x1284fd0, copy2)
void main_f_1284fd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1284fe0  (orig 0x1284fe0, copy2)
void main_f_1284fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1285120  (orig 0x1285120, ret_only)
void main_f_1285120() {}

// sub_1285130  (orig 0x1285130, copy2)
void main_f_1285130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1285140  (orig 0x1285140, copy2)
void main_f_1285140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1286cf0  (orig 0x1286cf0, ret_only)
void main_f_1286cf0() {}

// sub_1286d00  (orig 0x1286d00, ret_only)
void main_f_1286d00() {}

// sub_1286d10  (orig 0x1286d10, ret_only)
void main_f_1286d10() {}

// sub_1286ec0  (orig 0x1286ec0, ret_only)
void main_f_1286ec0() {}

// sub_1287c70  (orig 0x1287c70, ret_only)
void main_f_1287c70() {}

// sub_1288750  (orig 0x1288750, copy2)
void main_f_1288750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1288760  (orig 0x1288760, copy2)
void main_f_1288760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1289720  (orig 0x1289720, ret_only)
void main_f_1289720() {}

// sub_1289730  (orig 0x1289730, copy2)
void main_f_1289730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1289740  (orig 0x1289740, copy2)
void main_f_1289740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a280  (orig 0x128a280, ret_only)
void main_f_128a280() {}

// sub_128a290  (orig 0x128a290, copy2)
void main_f_128a290(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a2a0  (orig 0x128a2a0, copy2)
void main_f_128a2a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a2b0  (orig 0x128a2b0, copy2)
void main_f_128a2b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a2c0  (orig 0x128a2c0, copy2)
void main_f_128a2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a2e0  (orig 0x128a2e0, ret_only)
void main_f_128a2e0() {}

// sub_128a2f0  (orig 0x128a2f0, copy2)
void main_f_128a2f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a300  (orig 0x128a300, copy2)
void main_f_128a300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a320  (orig 0x128a320, ret_only)
void main_f_128a320() {}

// sub_128a330  (orig 0x128a330, copy2)
void main_f_128a330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a340  (orig 0x128a340, copy2)
void main_f_128a340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a3b0  (orig 0x128a3b0, ret_only)
void main_f_128a3b0() {}

// sub_128a3c0  (orig 0x128a3c0, copy2)
void main_f_128a3c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a3d0  (orig 0x128a3d0, copy2)
void main_f_128a3d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a510  (orig 0x128a510, ret_only)
void main_f_128a510() {}

// sub_128a520  (orig 0x128a520, copy2)
void main_f_128a520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a530  (orig 0x128a530, copy2)
void main_f_128a530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128b360  (orig 0x128b360, ret_only)
void main_f_128b360() {}

// sub_128b370  (orig 0x128b370, copy2)
void main_f_128b370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128b380  (orig 0x128b380, copy2)
void main_f_128b380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128b3a0  (orig 0x128b3a0, ret_only)
void main_f_128b3a0() {}

// sub_128b3b0  (orig 0x128b3b0, copy2)
void main_f_128b3b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128b3c0  (orig 0x128b3c0, copy2)
void main_f_128b3c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128b410  (orig 0x128b410, ret_only)
void main_f_128b410() {}

// sub_128b420  (orig 0x128b420, copy2)
void main_f_128b420(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128b430  (orig 0x128b430, copy2)
void main_f_128b430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128c0b0  (orig 0x128c0b0, ret_only)
void main_f_128c0b0() {}

// sub_128c0c0  (orig 0x128c0c0, copy2)
void main_f_128c0c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128c0d0  (orig 0x128c0d0, copy2)
void main_f_128c0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128cf70  (orig 0x128cf70, ret_only)
void main_f_128cf70() {}

// sub_128cf80  (orig 0x128cf80, copy2)
void main_f_128cf80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128cf90  (orig 0x128cf90, copy2)
void main_f_128cf90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128cff0  (orig 0x128cff0, ret_only)
void main_f_128cff0() {}

// sub_128d000  (orig 0x128d000, copy2)
void main_f_128d000(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128d010  (orig 0x128d010, copy2)
void main_f_128d010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128d150  (orig 0x128d150, ret_only)
void main_f_128d150() {}

// sub_128d160  (orig 0x128d160, copy2)
void main_f_128d160(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128d170  (orig 0x128d170, copy2)
void main_f_128d170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128e240  (orig 0x128e240, ret_only)
void main_f_128e240() {}

// sub_128ef60  (orig 0x128ef60, ret_only)
void main_f_128ef60() {}

// sub_128fb60  (orig 0x128fb60, ret_only)
void main_f_128fb60() {}

// sub_1290980  (orig 0x1290980, ret_only)
void main_f_1290980() {}

// sub_1290990  (orig 0x1290990, copy2)
void main_f_1290990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12909a0  (orig 0x12909a0, copy2)
void main_f_12909a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12909c0  (orig 0x12909c0, ret_only)
void main_f_12909c0() {}

// sub_12909d0  (orig 0x12909d0, copy2)
void main_f_12909d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12909e0  (orig 0x12909e0, copy2)
void main_f_12909e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290a50  (orig 0x1290a50, ret_only)
void main_f_1290a50() {}

// sub_1290a60  (orig 0x1290a60, copy2)
void main_f_1290a60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290a70  (orig 0x1290a70, copy2)
void main_f_1290a70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290a80  (orig 0x1290a80, copy2)
void main_f_1290a80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290a90  (orig 0x1290a90, copy2)
void main_f_1290a90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290aa0  (orig 0x1290aa0, copy2)
void main_f_1290aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290ab0  (orig 0x1290ab0, copy2)
void main_f_1290ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290bf0  (orig 0x1290bf0, ret_only)
void main_f_1290bf0() {}

// sub_1290c00  (orig 0x1290c00, copy2)
void main_f_1290c00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290c10  (orig 0x1290c10, copy2)
void main_f_1290c10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290c20  (orig 0x1290c20, copy2)
void main_f_1290c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290c30  (orig 0x1290c30, copy2)
void main_f_1290c30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290c50  (orig 0x1290c50, ret_only)
void main_f_1290c50() {}

// sub_1290c60  (orig 0x1290c60, copy2)
void main_f_1290c60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290c70  (orig 0x1290c70, copy2)
void main_f_1290c70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290c90  (orig 0x1290c90, ret_only)
void main_f_1290c90() {}

// sub_1290ca0  (orig 0x1290ca0, copy2)
void main_f_1290ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290cb0  (orig 0x1290cb0, copy2)
void main_f_1290cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290d20  (orig 0x1290d20, ret_only)
void main_f_1290d20() {}

// sub_1290d30  (orig 0x1290d30, copy2)
void main_f_1290d30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290d40  (orig 0x1290d40, copy2)
void main_f_1290d40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1291f10  (orig 0x1291f10, ret_only)
void main_f_1291f10() {}

// sub_1292370  (orig 0x1292370, ret_only)
void main_f_1292370() {}

// sub_1292380  (orig 0x1292380, copy2)
void main_f_1292380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1292390  (orig 0x1292390, copy2)
void main_f_1292390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12923a0  (orig 0x12923a0, copy2)
void main_f_12923a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12923b0  (orig 0x12923b0, copy2)
void main_f_12923b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12923d0  (orig 0x12923d0, ret_only)
void main_f_12923d0() {}

// sub_12923e0  (orig 0x12923e0, copy2)
void main_f_12923e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12923f0  (orig 0x12923f0, copy2)
void main_f_12923f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1292410  (orig 0x1292410, ret_only)
void main_f_1292410() {}

// sub_1292420  (orig 0x1292420, copy2)
void main_f_1292420(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1292430  (orig 0x1292430, copy2)
void main_f_1292430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1292660  (orig 0x1292660, ret_only)
void main_f_1292660() {}

// sub_12928a0  (orig 0x12928a0, copy2)
void main_f_12928a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12928b0  (orig 0x12928b0, copy2)
void main_f_12928b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12930c0  (orig 0x12930c0, ret_only)
void main_f_12930c0() {}

// sub_12935c0  (orig 0x12935c0, ret_only)
void main_f_12935c0() {}

// sub_12935d0  (orig 0x12935d0, copy2)
void main_f_12935d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12935e0  (orig 0x12935e0, copy2)
void main_f_12935e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12935f0  (orig 0x12935f0, copy2)
void main_f_12935f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1293600  (orig 0x1293600, copy2)
void main_f_1293600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1293750  (orig 0x1293750, ret_only)
void main_f_1293750() {}

// sub_1293760  (orig 0x1293760, copy2)
void main_f_1293760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1293770  (orig 0x1293770, copy2)
void main_f_1293770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12937b0  (orig 0x12937b0, ret_only)
void main_f_12937b0() {}

// sub_12937c0  (orig 0x12937c0, copy2)
void main_f_12937c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12937d0  (orig 0x12937d0, copy2)
void main_f_12937d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1295980  (orig 0x1295980, ret_only)
void main_f_1295980() {}

// sub_1295990  (orig 0x1295990, copy2)
void main_f_1295990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12959a0  (orig 0x12959a0, copy2)
void main_f_12959a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12960d0  (orig 0x12960d0, ret_only)
void main_f_12960d0() {}

// sub_12960e0  (orig 0x12960e0, copy2)
void main_f_12960e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12960f0  (orig 0x12960f0, copy2)
void main_f_12960f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1296c80  (orig 0x1296c80, mov_ret)
uint32_t main_f_1296c80() { return 1; }

// sub_1297e50  (orig 0x1297e50, getter)
uint64_t main_f_1297e50(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1297fc0  (orig 0x1297fc0, mov_ret)
uint32_t main_f_1297fc0() { return 1; }

// sub_1297fd0  (orig 0x1297fd0, indexed-getter)
uint64_t main_f_1297fd0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1297fe0  (orig 0x1297fe0, indexed-getter)
uint64_t main_f_1297fe0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_12a0660  (orig 0x12a0660, ret_only)
void main_f_12a0660() {}

// sub_12a2850  (orig 0x12a2850, ret_only)
void main_f_12a2850() {}

// sub_12a2860  (orig 0x12a2860, ret_only)
void main_f_12a2860() {}

// sub_12a2870  (orig 0x12a2870, ret_only)
void main_f_12a2870() {}

// sub_12a61d0  (orig 0x12a61d0, ret_only)
void main_f_12a61d0() {}

// sub_12a61e0  (orig 0x12a61e0, copy2)
void main_f_12a61e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12a61f0  (orig 0x12a61f0, copy2)
void main_f_12a61f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12a6300  (orig 0x12a6300, ret_only)
void main_f_12a6300() {}

// sub_12a69d0  (orig 0x12a69d0, ret_only)
void main_f_12a69d0() {}

// sub_12a78c0  (orig 0x12a78c0, ret_only)
void main_f_12a78c0() {}

// sub_12aa430  (orig 0x12aa430, ret_only)
void main_f_12aa430() {}

// sub_12aa440  (orig 0x12aa440, copy2)
void main_f_12aa440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa450  (orig 0x12aa450, copy2)
void main_f_12aa450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa470  (orig 0x12aa470, ret_only)
void main_f_12aa470() {}

// sub_12aa480  (orig 0x12aa480, copy2)
void main_f_12aa480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa490  (orig 0x12aa490, copy2)
void main_f_12aa490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa4b0  (orig 0x12aa4b0, ret_only)
void main_f_12aa4b0() {}

// sub_12aa4c0  (orig 0x12aa4c0, copy2)
void main_f_12aa4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa4d0  (orig 0x12aa4d0, copy2)
void main_f_12aa4d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa4f0  (orig 0x12aa4f0, ret_only)
void main_f_12aa4f0() {}

// sub_12aa500  (orig 0x12aa500, copy2)
void main_f_12aa500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa510  (orig 0x12aa510, copy2)
void main_f_12aa510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa530  (orig 0x12aa530, ret_only)
void main_f_12aa530() {}

// sub_12aa540  (orig 0x12aa540, copy2)
void main_f_12aa540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa550  (orig 0x12aa550, copy2)
void main_f_12aa550(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa570  (orig 0x12aa570, ret_only)
void main_f_12aa570() {}

// sub_12aa580  (orig 0x12aa580, copy2)
void main_f_12aa580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa590  (orig 0x12aa590, copy2)
void main_f_12aa590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad2c0  (orig 0x12ad2c0, ret_only)
void main_f_12ad2c0() {}

// sub_12ad2d0  (orig 0x12ad2d0, copy2)
void main_f_12ad2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad2e0  (orig 0x12ad2e0, copy2)
void main_f_12ad2e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad350  (orig 0x12ad350, ret_only)
void main_f_12ad350() {}

// sub_12ad360  (orig 0x12ad360, copy2)
void main_f_12ad360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad370  (orig 0x12ad370, copy2)
void main_f_12ad370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad3a0  (orig 0x12ad3a0, ret_only)
void main_f_12ad3a0() {}

// sub_12ad3b0  (orig 0x12ad3b0, copy2)
void main_f_12ad3b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad3c0  (orig 0x12ad3c0, copy2)
void main_f_12ad3c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad450  (orig 0x12ad450, ret_only)
void main_f_12ad450() {}

// sub_12ad460  (orig 0x12ad460, copy2)
void main_f_12ad460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad470  (orig 0x12ad470, copy2)
void main_f_12ad470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad490  (orig 0x12ad490, ret_only)
void main_f_12ad490() {}

// sub_12ad4a0  (orig 0x12ad4a0, copy2)
void main_f_12ad4a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad4b0  (orig 0x12ad4b0, copy2)
void main_f_12ad4b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad4d0  (orig 0x12ad4d0, ret_only)
void main_f_12ad4d0() {}

// sub_12ad4e0  (orig 0x12ad4e0, copy2)
void main_f_12ad4e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad4f0  (orig 0x12ad4f0, copy2)
void main_f_12ad4f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad520  (orig 0x12ad520, ret_only)
void main_f_12ad520() {}

// sub_12ad530  (orig 0x12ad530, copy2)
void main_f_12ad530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad540  (orig 0x12ad540, copy2)
void main_f_12ad540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad5a0  (orig 0x12ad5a0, ret_only)
void main_f_12ad5a0() {}

// sub_12ad5b0  (orig 0x12ad5b0, copy2)
void main_f_12ad5b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad5c0  (orig 0x12ad5c0, copy2)
void main_f_12ad5c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad5e0  (orig 0x12ad5e0, ret_only)
void main_f_12ad5e0() {}

// sub_12ad5f0  (orig 0x12ad5f0, copy2)
void main_f_12ad5f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad600  (orig 0x12ad600, copy2)
void main_f_12ad600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad620  (orig 0x12ad620, ret_only)
void main_f_12ad620() {}

// sub_12ad630  (orig 0x12ad630, copy2)
void main_f_12ad630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad640  (orig 0x12ad640, copy2)
void main_f_12ad640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad660  (orig 0x12ad660, ret_only)
void main_f_12ad660() {}

// sub_12ad670  (orig 0x12ad670, copy2)
void main_f_12ad670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad680  (orig 0x12ad680, copy2)
void main_f_12ad680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad810  (orig 0x12ad810, ret_only)
void main_f_12ad810() {}

// sub_12ad820  (orig 0x12ad820, copy2)
void main_f_12ad820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad830  (orig 0x12ad830, copy2)
void main_f_12ad830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad850  (orig 0x12ad850, ret_only)
void main_f_12ad850() {}

// sub_12ad860  (orig 0x12ad860, copy2)
void main_f_12ad860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad870  (orig 0x12ad870, copy2)
void main_f_12ad870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad8f0  (orig 0x12ad8f0, ret_only)
void main_f_12ad8f0() {}

// sub_12ad900  (orig 0x12ad900, copy2)
void main_f_12ad900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad910  (orig 0x12ad910, copy2)
void main_f_12ad910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad9d0  (orig 0x12ad9d0, ret_only)
void main_f_12ad9d0() {}

// sub_12ad9e0  (orig 0x12ad9e0, copy2)
void main_f_12ad9e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad9f0  (orig 0x12ad9f0, copy2)
void main_f_12ad9f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ada70  (orig 0x12ada70, ret_only)
void main_f_12ada70() {}

// sub_12ada80  (orig 0x12ada80, copy2)
void main_f_12ada80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ada90  (orig 0x12ada90, copy2)
void main_f_12ada90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12adab0  (orig 0x12adab0, ret_only)
void main_f_12adab0() {}

// sub_12adac0  (orig 0x12adac0, copy2)
void main_f_12adac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12adad0  (orig 0x12adad0, copy2)
void main_f_12adad0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12adaf0  (orig 0x12adaf0, ret_only)
void main_f_12adaf0() {}

// sub_12adb00  (orig 0x12adb00, copy2)
void main_f_12adb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12adb10  (orig 0x12adb10, copy2)
void main_f_12adb10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12adb70  (orig 0x12adb70, ret_only)
void main_f_12adb70() {}

// sub_12adb80  (orig 0x12adb80, copy2)
void main_f_12adb80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12adb90  (orig 0x12adb90, copy2)
void main_f_12adb90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ae320  (orig 0x12ae320, ret_only)
void main_f_12ae320() {}

// sub_12ae330  (orig 0x12ae330, ret_only)
void main_f_12ae330() {}

// sub_12ae560  (orig 0x12ae560, ret_only)
void main_f_12ae560() {}

// sub_12aecf0  (orig 0x12aecf0, ret_only)
void main_f_12aecf0() {}

// sub_12aeee0  (orig 0x12aeee0, straight)
void main_f_12aeee0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 100) = 30;
}

// sub_12b2b60  (orig 0x12b2b60, ret_only)
void main_f_12b2b60() {}

// sub_12b3c00  (orig 0x12b3c00, ret_only)
void main_f_12b3c00() {}

// sub_12b3c10  (orig 0x12b3c10, copy2)
void main_f_12b3c10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3c20  (orig 0x12b3c20, copy2)
void main_f_12b3c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3cc0  (orig 0x12b3cc0, ret_only)
void main_f_12b3cc0() {}

// sub_12b3cd0  (orig 0x12b3cd0, copy2)
void main_f_12b3cd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3ce0  (orig 0x12b3ce0, copy2)
void main_f_12b3ce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3d40  (orig 0x12b3d40, ret_only)
void main_f_12b3d40() {}

// sub_12b3d50  (orig 0x12b3d50, copy2)
void main_f_12b3d50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3d60  (orig 0x12b3d60, copy2)
void main_f_12b3d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3dc0  (orig 0x12b3dc0, ret_only)
void main_f_12b3dc0() {}

// sub_12b3dd0  (orig 0x12b3dd0, copy2)
void main_f_12b3dd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3de0  (orig 0x12b3de0, copy2)
void main_f_12b3de0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3df0  (orig 0x12b3df0, ret_only)
void main_f_12b3df0() {}

// sub_12b43d0  (orig 0x12b43d0, ret_only)
void main_f_12b43d0() {}

// sub_12b48c0  (orig 0x12b48c0, ret_only)
void main_f_12b48c0() {}

// sub_12b7a50  (orig 0x12b7a50, ret_only)
void main_f_12b7a50() {}

// sub_12b7a60  (orig 0x12b7a60, copy2)
void main_f_12b7a60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b7a70  (orig 0x12b7a70, copy2)
void main_f_12b7a70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b7a90  (orig 0x12b7a90, ret_only)
void main_f_12b7a90() {}

// sub_12b7aa0  (orig 0x12b7aa0, copy2)
void main_f_12b7aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b7ab0  (orig 0x12b7ab0, copy2)
void main_f_12b7ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b7ad0  (orig 0x12b7ad0, ret_only)
void main_f_12b7ad0() {}

// sub_12b7ae0  (orig 0x12b7ae0, copy2)
void main_f_12b7ae0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b7af0  (orig 0x12b7af0, copy2)
void main_f_12b7af0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b7b40  (orig 0x12b7b40, ret_only)
void main_f_12b7b40() {}

// sub_12b7b50  (orig 0x12b7b50, copy2)
void main_f_12b7b50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b7b60  (orig 0x12b7b60, copy2)
void main_f_12b7b60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b9fb0  (orig 0x12b9fb0, ret_only)
void main_f_12b9fb0() {}

// sub_12b9fc0  (orig 0x12b9fc0, mov_ret)
uint32_t main_f_12b9fc0() { return 1; }

// sub_12ba570  (orig 0x12ba570, getter)
uint64_t main_f_12ba570(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_12ba700  (orig 0x12ba700, mov_ret)
uint32_t main_f_12ba700() { return 2; }

// sub_12ba710  (orig 0x12ba710, indexed-getter)
uint64_t main_f_12ba710(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_12ba720  (orig 0x12ba720, indexed-getter)
uint64_t main_f_12ba720(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_12be370  (orig 0x12be370, ret_only)
void main_f_12be370() {}

// sub_12be380  (orig 0x12be380, copy2)
void main_f_12be380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be390  (orig 0x12be390, copy2)
void main_f_12be390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be400  (orig 0x12be400, ret_only)
void main_f_12be400() {}

// sub_12be410  (orig 0x12be410, copy2)
void main_f_12be410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be420  (orig 0x12be420, copy2)
void main_f_12be420(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be4a0  (orig 0x12be4a0, ret_only)
void main_f_12be4a0() {}

// sub_12be4b0  (orig 0x12be4b0, copy2)
void main_f_12be4b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be4c0  (orig 0x12be4c0, copy2)
void main_f_12be4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be560  (orig 0x12be560, ret_only)
void main_f_12be560() {}

// sub_12be570  (orig 0x12be570, copy2)
void main_f_12be570(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be580  (orig 0x12be580, copy2)
void main_f_12be580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be780  (orig 0x12be780, ret_only)
void main_f_12be780() {}

// sub_12be790  (orig 0x12be790, copy2)
void main_f_12be790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be7a0  (orig 0x12be7a0, copy2)
void main_f_12be7a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be890  (orig 0x12be890, ret_only)
void main_f_12be890() {}

// sub_12be8a0  (orig 0x12be8a0, copy2)
void main_f_12be8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be8b0  (orig 0x12be8b0, copy2)
void main_f_12be8b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c3250  (orig 0x12c3250, ret_only)
void main_f_12c3250() {}

// sub_12c3260  (orig 0x12c3260, copy2)
void main_f_12c3260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c3270  (orig 0x12c3270, copy2)
void main_f_12c3270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c32a0  (orig 0x12c32a0, ret_only)
void main_f_12c32a0() {}

// sub_12c32b0  (orig 0x12c32b0, copy2)
void main_f_12c32b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c32c0  (orig 0x12c32c0, copy2)
void main_f_12c32c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c3700  (orig 0x12c3700, ret_only)
void main_f_12c3700() {}

// sub_12c3710  (orig 0x12c3710, copy2)
void main_f_12c3710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c3720  (orig 0x12c3720, copy2)
void main_f_12c3720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c37f0  (orig 0x12c37f0, ret_only)
void main_f_12c37f0() {}

// sub_12c3800  (orig 0x12c3800, copy2)
void main_f_12c3800(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c3810  (orig 0x12c3810, copy2)
void main_f_12c3810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c65f0  (orig 0x12c65f0, ret_only)
void main_f_12c65f0() {}

// sub_12c6a00  (orig 0x12c6a00, ret_only)
void main_f_12c6a00() {}

// sub_12c6a10  (orig 0x12c6a10, copy2)
void main_f_12c6a10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c6a20  (orig 0x12c6a20, copy2)
void main_f_12c6a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c7060  (orig 0x12c7060, ret_only)
void main_f_12c7060() {}

// sub_12c72b0  (orig 0x12c72b0, ret_only)
void main_f_12c72b0() {}

// sub_12c72c0  (orig 0x12c72c0, copy2)
void main_f_12c72c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c72d0  (orig 0x12c72d0, copy2)
void main_f_12c72d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c81c0  (orig 0x12c81c0, ret_only)
void main_f_12c81c0() {}

// sub_12c9420  (orig 0x12c9420, mov_ret)
uint32_t main_f_12c9420() { return 1; }

// sub_12c9780  (orig 0x12c9780, ret_only)
void main_f_12c9780() {}

// sub_12ca0e0  (orig 0x12ca0e0, mov_ret)
uint32_t main_f_12ca0e0() { return 1; }

// sub_12cdc10  (orig 0x12cdc10, getter)
uint64_t main_f_12cdc10(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_12cdda0  (orig 0x12cdda0, mov_ret)
uint32_t main_f_12cdda0() { return 3; }

// sub_12cddb0  (orig 0x12cddb0, indexed-getter)
uint64_t main_f_12cddb0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_12cddc0  (orig 0x12cddc0, indexed-getter)
uint64_t main_f_12cddc0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_12d5980  (orig 0x12d5980, ret_only)
void main_f_12d5980() {}

// sub_12d5990  (orig 0x12d5990, copy2)
void main_f_12d5990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d59a0  (orig 0x12d59a0, copy2)
void main_f_12d59a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5a10  (orig 0x12d5a10, ret_only)
void main_f_12d5a10() {}

// sub_12d5a20  (orig 0x12d5a20, copy2)
void main_f_12d5a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5a30  (orig 0x12d5a30, copy2)
void main_f_12d5a30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5a90  (orig 0x12d5a90, ret_only)
void main_f_12d5a90() {}

// sub_12d5aa0  (orig 0x12d5aa0, copy2)
void main_f_12d5aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5ab0  (orig 0x12d5ab0, copy2)
void main_f_12d5ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5b20  (orig 0x12d5b20, ret_only)
void main_f_12d5b20() {}

// sub_12d5b30  (orig 0x12d5b30, copy2)
void main_f_12d5b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5b40  (orig 0x12d5b40, copy2)
void main_f_12d5b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5bd0  (orig 0x12d5bd0, ret_only)
void main_f_12d5bd0() {}

// sub_12d5be0  (orig 0x12d5be0, copy2)
void main_f_12d5be0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5bf0  (orig 0x12d5bf0, copy2)
void main_f_12d5bf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5c30  (orig 0x12d5c30, ret_only)
void main_f_12d5c30() {}

// sub_12d5c40  (orig 0x12d5c40, copy2)
void main_f_12d5c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5c50  (orig 0x12d5c50, copy2)
void main_f_12d5c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5c80  (orig 0x12d5c80, ret_only)
void main_f_12d5c80() {}

// sub_12d5c90  (orig 0x12d5c90, copy2)
void main_f_12d5c90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5ca0  (orig 0x12d5ca0, copy2)
void main_f_12d5ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d6850  (orig 0x12d6850, ret_only)
void main_f_12d6850() {}

// sub_12d87b0  (orig 0x12d87b0, ret_only)
void main_f_12d87b0() {}

// sub_12db770  (orig 0x12db770, ret_only)
void main_f_12db770() {}

// sub_12db780  (orig 0x12db780, copy2)
void main_f_12db780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12db790  (orig 0x12db790, copy2)
void main_f_12db790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12db9a0  (orig 0x12db9a0, ret_only)
void main_f_12db9a0() {}

// sub_12db9b0  (orig 0x12db9b0, copy2)
void main_f_12db9b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12db9c0  (orig 0x12db9c0, copy2)
void main_f_12db9c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12dc1f0  (orig 0x12dc1f0, ret_only)
void main_f_12dc1f0() {}

// sub_12dde30  (orig 0x12dde30, ret_only)
void main_f_12dde30() {}

// sub_12df030  (orig 0x12df030, ret_only)
void main_f_12df030() {}

// sub_12e01f0  (orig 0x12e01f0, ret_only)
void main_f_12e01f0() {}

// sub_12e2da0  (orig 0x12e2da0, ret_only)
void main_f_12e2da0() {}

// sub_12e4400  (orig 0x12e4400, ret_only)
void main_f_12e4400() {}

// sub_12e4950  (orig 0x12e4950, ret_only)
void main_f_12e4950() {}

// sub_12e4960  (orig 0x12e4960, copy2)
void main_f_12e4960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e4970  (orig 0x12e4970, copy2)
void main_f_12e4970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e4a70  (orig 0x12e4a70, ret_only)
void main_f_12e4a70() {}

// sub_12e4a80  (orig 0x12e4a80, copy2)
void main_f_12e4a80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e4a90  (orig 0x12e4a90, copy2)
void main_f_12e4a90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e4fa0  (orig 0x12e4fa0, ret_only)
void main_f_12e4fa0() {}

// sub_12e4fb0  (orig 0x12e4fb0, copy2)
void main_f_12e4fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e4fc0  (orig 0x12e4fc0, copy2)
void main_f_12e4fc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e50e0  (orig 0x12e50e0, ret_only)
void main_f_12e50e0() {}

// sub_12e50f0  (orig 0x12e50f0, copy2)
void main_f_12e50f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e5100  (orig 0x12e5100, copy2)
void main_f_12e5100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e5440  (orig 0x12e5440, ret_only)
void main_f_12e5440() {}

// sub_12e5450  (orig 0x12e5450, copy2)
void main_f_12e5450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e5460  (orig 0x12e5460, copy2)
void main_f_12e5460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e8150  (orig 0x12e8150, ret_only)
void main_f_12e8150() {}

// sub_12ea640  (orig 0x12ea640, ret_only)
void main_f_12ea640() {}

// sub_12eae60  (orig 0x12eae60, ret_only)
void main_f_12eae60() {}

// sub_12eae70  (orig 0x12eae70, copy2)
void main_f_12eae70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eae80  (orig 0x12eae80, copy2)
void main_f_12eae80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eaf60  (orig 0x12eaf60, ret_only)
void main_f_12eaf60() {}

// sub_12eaf70  (orig 0x12eaf70, copy2)
void main_f_12eaf70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eaf80  (orig 0x12eaf80, copy2)
void main_f_12eaf80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eafe0  (orig 0x12eafe0, ret_only)
void main_f_12eafe0() {}

// sub_12eaff0  (orig 0x12eaff0, copy2)
void main_f_12eaff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb000  (orig 0x12eb000, copy2)
void main_f_12eb000(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb030  (orig 0x12eb030, ret_only)
void main_f_12eb030() {}

// sub_12eb040  (orig 0x12eb040, copy2)
void main_f_12eb040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb050  (orig 0x12eb050, copy2)
void main_f_12eb050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb090  (orig 0x12eb090, ret_only)
void main_f_12eb090() {}

// sub_12eb0a0  (orig 0x12eb0a0, copy2)
void main_f_12eb0a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb0b0  (orig 0x12eb0b0, copy2)
void main_f_12eb0b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb610  (orig 0x12eb610, ret_only)
void main_f_12eb610() {}

// sub_12eb620  (orig 0x12eb620, copy2)
void main_f_12eb620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb630  (orig 0x12eb630, copy2)
void main_f_12eb630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb650  (orig 0x12eb650, ret_only)
void main_f_12eb650() {}

// sub_12eb660  (orig 0x12eb660, copy2)
void main_f_12eb660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb670  (orig 0x12eb670, copy2)
void main_f_12eb670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ebb90  (orig 0x12ebb90, mov_ret)
uint32_t main_f_12ebb90() { return 1; }

// sub_12ebba0  (orig 0x12ebba0, ret_only)
void main_f_12ebba0() {}

// sub_12ec150  (orig 0x12ec150, ret_only)
void main_f_12ec150() {}

// sub_12eccb0  (orig 0x12eccb0, ret_only)
void main_f_12eccb0() {}

// sub_12edce0  (orig 0x12edce0, ret_only)
void main_f_12edce0() {}

// sub_12ee9d0  (orig 0x12ee9d0, ret_only)
void main_f_12ee9d0() {}

// sub_12ee9e0  (orig 0x12ee9e0, copy2)
void main_f_12ee9e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ee9f0  (orig 0x12ee9f0, copy2)
void main_f_12ee9f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eeb60  (orig 0x12eeb60, ret_only)
void main_f_12eeb60() {}

// sub_12eebc0  (orig 0x12eebc0, ret_only)
void main_f_12eebc0() {}

// sub_12eebd0  (orig 0x12eebd0, copy2)
void main_f_12eebd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eebe0  (orig 0x12eebe0, copy2)
void main_f_12eebe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ef820  (orig 0x12ef820, ret_only)
void main_f_12ef820() {}

// sub_12ef830  (orig 0x12ef830, copy2)
void main_f_12ef830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ef840  (orig 0x12ef840, copy2)
void main_f_12ef840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12f6230  (orig 0x12f6230, ret_only)
void main_f_12f6230() {}

// sub_12f6950  (orig 0x12f6950, copy2)
void main_f_12f6950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12f6960  (orig 0x12f6960, copy2)
void main_f_12f6960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12f9ec0  (orig 0x12f9ec0, ret_only)
void main_f_12f9ec0() {}

// sub_12fd750  (orig 0x12fd750, ret_only)
void main_f_12fd750() {}

// sub_12fd890  (orig 0x12fd890, ret_only)
void main_f_12fd890() {}

// sub_12fd8a0  (orig 0x12fd8a0, struct-copy)
void main_f_12fd8a0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_12fd8c0  (orig 0x12fd8c0, struct-copy)
void main_f_12fd8c0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_12fd9f0  (orig 0x12fd9f0, ret_only)
void main_f_12fd9f0() {}

// sub_12fda00  (orig 0x12fda00, struct-copy)
void main_f_12fda00(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_12fda20  (orig 0x12fda20, struct-copy)
void main_f_12fda20(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_12fdb50  (orig 0x12fdb50, ret_only)
void main_f_12fdb50() {}

// sub_12fdb60  (orig 0x12fdb60, struct-copy)
void main_f_12fdb60(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_12fdb80  (orig 0x12fdb80, struct-copy)
void main_f_12fdb80(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_12fdcb0  (orig 0x12fdcb0, ret_only)
void main_f_12fdcb0() {}

// sub_12fdcc0  (orig 0x12fdcc0, struct-copy)
void main_f_12fdcc0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_12fdce0  (orig 0x12fdce0, struct-copy)
void main_f_12fdce0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_12ffd80  (orig 0x12ffd80, getter)
uint32_t main_f_12ffd80(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1300ce0  (orig 0x1300ce0, ret_only)
void main_f_1300ce0() {}

// sub_1300cf0  (orig 0x1300cf0, copy2)
void main_f_1300cf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1300d00  (orig 0x1300d00, copy2)
void main_f_1300d00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1303c30  (orig 0x1303c30, ret_only)
void main_f_1303c30() {}

// sub_1303c40  (orig 0x1303c40, ret_only)
void main_f_1303c40() {}

// sub_1303d30  (orig 0x1303d30, mov_ret)
uint32_t main_f_1303d30() { return 1; }

// sub_1304f60  (orig 0x1304f60, ret_only)
void main_f_1304f60() {}

// sub_13056a0  (orig 0x13056a0, ret_only)
void main_f_13056a0() {}

// sub_1305db0  (orig 0x1305db0, getter)
uint64_t main_f_1305db0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1305df0  (orig 0x1305df0, compare)
bool main_f_1305df0(uint64_t a0) { return (uint32_t)(a0) == (uint64_t)(27); }

// sub_13079a0  (orig 0x13079a0, ret_only)
void main_f_13079a0() {}

// sub_1307a20  (orig 0x1307a20, ret_only)
void main_f_1307a20() {}

// sub_13091c0  (orig 0x13091c0, setter-chain)
void main_f_13091c0(void* a0) { *(uint64_t*)((char*)(a0) + 48) = 0; *(uint8_t*)((char*)(a0) + 32) = 0; }

// sub_1309a80  (orig 0x1309a80, straight)
void main_f_1309a80(void* a0) {
    *(uint8_t*)((char*)(a0) + 378) = (uint8_t)(1);
}

// sub_1309aa0  (orig 0x1309aa0, setter-chain)
void main_f_1309aa0(void* a0) { *(uint64_t*)((char*)(a0) + 336) = 0; *(uint8_t*)((char*)(a0) + 320) = 0; }

// sub_130abe0  (orig 0x130abe0, ret_only)
void main_f_130abe0() {}

// sub_130ea50  (orig 0x130ea50, straight)
void main_f_130ea50(void* a0) {
    *(uint8_t*)((char*)(a0) + 3104) = (uint8_t)(1);
}

// sub_130f630  (orig 0x130f630, ret_only)
void main_f_130f630() {}

// sub_130f6b0  (orig 0x130f6b0, ret_only)
void main_f_130f6b0() {}

// sub_130f730  (orig 0x130f730, mov_ret)
uint32_t main_f_130f730() { return 2; }

// sub_130f740  (orig 0x130f740, indexed-getter)
uint64_t main_f_130f740(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_130f750  (orig 0x130f750, indexed-getter)
uint64_t main_f_130f750(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1310140  (orig 0x1310140, ret_only)
void main_f_1310140() {}

// sub_1310150  (orig 0x1310150, ptr_add)
void* main_f_1310150(void* a0) { return (char*)a0 + 96; }

// sub_13193c0  (orig 0x13193c0, getter)
uint64_t main_f_13193c0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_13193d0  (orig 0x13193d0, getter)
uint32_t main_f_13193d0(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_13193e0  (orig 0x13193e0, setter)
void main_f_13193e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_131a3d0  (orig 0x131a3d0, ret_only)
void main_f_131a3d0() {}

// sub_131b190  (orig 0x131b190, getter)
uint64_t main_f_131b190(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_131b300  (orig 0x131b300, mov_ret)
uint32_t main_f_131b300() { return 1; }

// sub_131b310  (orig 0x131b310, indexed-getter)
uint64_t main_f_131b310(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_131b320  (orig 0x131b320, indexed-getter)
uint64_t main_f_131b320(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_131d2e0  (orig 0x131d2e0, ret_only)
void main_f_131d2e0() {}

// sub_131dbe0  (orig 0x131dbe0, setter)
void main_f_131dbe0(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_131dbf0  (orig 0x131dbf0, getter)
uint32_t main_f_131dbf0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

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

// sub_1377d30  (orig 0x1377d30, straight)
void main_f_1377d30(void* a0) {
    *(uint8_t*)((char*)(a0) + 799) = (uint8_t)(1);
}

// sub_1377d40  (orig 0x1377d40, straight)
void main_f_1377d40(void* a0) {
    *(uint8_t*)((char*)(a0) + 799) = (uint8_t)(2);
}

// sub_1377d50  (orig 0x1377d50, compare)
bool main_f_1377d50(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 799)) == (uint64_t)(1); }

// sub_1377d60  (orig 0x1377d60, compare)
bool main_f_1377d60(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 799)) == (uint64_t)(2); }

// sub_1378bd0  (orig 0x1378bd0, setter)
void main_f_1378bd0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 19448L) = a1; }

// sub_137a160  (orig 0x137a160, getter)
uint64_t main_f_137a160(void* a0) { return *(uint64_t*)((char*)(a0) + 19432L); }

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

