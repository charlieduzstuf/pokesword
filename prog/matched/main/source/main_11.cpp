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

// sub_1476c90  (orig 0x1476c90, ret_only)
void main_f_1476c90() {}

// sub_1476ca0  (orig 0x1476ca0, copy2)
void main_f_1476ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476cb0  (orig 0x1476cb0, copy2)
void main_f_1476cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476cd0  (orig 0x1476cd0, ret_only)
void main_f_1476cd0() {}

// sub_1476ce0  (orig 0x1476ce0, copy2)
void main_f_1476ce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476cf0  (orig 0x1476cf0, copy2)
void main_f_1476cf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476d10  (orig 0x1476d10, ret_only)
void main_f_1476d10() {}

// sub_1476d20  (orig 0x1476d20, copy2)
void main_f_1476d20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476d30  (orig 0x1476d30, copy2)
void main_f_1476d30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476d70  (orig 0x1476d70, ret_only)
void main_f_1476d70() {}

// sub_1477050  (orig 0x1477050, ret_only)
void main_f_1477050() {}

// sub_1477510  (orig 0x1477510, ret_only)
void main_f_1477510() {}

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

// sub_149f130  (orig 0x149f130, ret_only)
void main_f_149f130() {}

// sub_149f140  (orig 0x149f140, copy2)
void main_f_149f140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f150  (orig 0x149f150, copy2)
void main_f_149f150(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_14a5900  (orig 0x14a5900, ret_only)
void main_f_14a5900() {}

// sub_14a5910  (orig 0x14a5910, copy2)
void main_f_14a5910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a5920  (orig 0x14a5920, copy2)
void main_f_14a5920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a5950  (orig 0x14a5950, ret_only)
void main_f_14a5950() {}

// sub_14a6590  (orig 0x14a6590, ret_only)
void main_f_14a6590() {}

// sub_14a65a0  (orig 0x14a65a0, copy2)
void main_f_14a65a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a65b0  (orig 0x14a65b0, copy2)
void main_f_14a65b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a65d0  (orig 0x14a65d0, ret_only)
void main_f_14a65d0() {}

// sub_14a65e0  (orig 0x14a65e0, copy2)
void main_f_14a65e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a65f0  (orig 0x14a65f0, copy2)
void main_f_14a65f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a6610  (orig 0x14a6610, ret_only)
void main_f_14a6610() {}

// sub_14a6620  (orig 0x14a6620, copy2)
void main_f_14a6620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a6630  (orig 0x14a6630, copy2)
void main_f_14a6630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7e40  (orig 0x14a7e40, ret_only)
void main_f_14a7e40() {}

// sub_14a7e50  (orig 0x14a7e50, copy2)
void main_f_14a7e50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7e60  (orig 0x14a7e60, copy2)
void main_f_14a7e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7e80  (orig 0x14a7e80, ret_only)
void main_f_14a7e80() {}

// sub_14a7e90  (orig 0x14a7e90, copy2)
void main_f_14a7e90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7ea0  (orig 0x14a7ea0, copy2)
void main_f_14a7ea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a8b70  (orig 0x14a8b70, mov_ret)
uint32_t main_f_14a8b70() { return 1; }

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

// sub_14bfb70  (orig 0x14bfb70, getter-chain)
uint8_t main_f_14bfb70(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 1648); }

// sub_14bfba0  (orig 0x14bfba0, getter-chain)
uint8_t main_f_14bfba0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 1649); }

// sub_14c33f0  (orig 0x14c33f0, ret_only)
void main_f_14c33f0() {}

// sub_14c4b80  (orig 0x14c4b80, mov_ret)
uint32_t main_f_14c4b80() { return 1; }

// sub_14c4b90  (orig 0x14c4b90, indexed-getter)
uint64_t main_f_14c4b90(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14c4ba0  (orig 0x14c4ba0, indexed-getter)
uint64_t main_f_14c4ba0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14c5e60  (orig 0x14c5e60, getter-chain)
uint8_t main_f_14c5e60(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 136); }

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

// sub_14ce010  (orig 0x14ce010, ret_only)
void main_f_14ce010() {}

// sub_14ce060  (orig 0x14ce060, ret_only)
void main_f_14ce060() {}

// sub_14ce070  (orig 0x14ce070, copy2)
void main_f_14ce070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14ce080  (orig 0x14ce080, copy2)
void main_f_14ce080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_14d5a80  (orig 0x14d5a80, compare)
bool main_f_14d5a80(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) == (uint64_t)(0); }

// sub_14d6890  (orig 0x14d6890, compare)
bool main_f_14d6890(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) == (uint64_t)(0); }

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
    *(uint8_t*)((char*)(a0) + 1151) = (uint8_t)(1);
}

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

// sub_14f31b0  (orig 0x14f31b0, ret_only)
void main_f_14f31b0() {}

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

// sub_14f7e40  (orig 0x14f7e40, compare)
bool main_f_14f7e40(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 440)) != (uint64_t)(0); }

// sub_14f8030  (orig 0x14f8030, getter)
uint8_t main_f_14f8030(void* a0) { return *(uint8_t*)((char*)(a0) + 476); }

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

// sub_152f6c0  (orig 0x152f6c0, getter)
uint32_t main_f_152f6c0(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_152fd80  (orig 0x152fd80, ret_only)
void main_f_152fd80() {}

// sub_152fdf0  (orig 0x152fdf0, ret_only)
void main_f_152fdf0() {}

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

// sub_1536b20  (orig 0x1536b20, ret_only)
void main_f_1536b20() {}

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
    *(uint8_t*)((char*)(a4)) = (uint8_t)(1);
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
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)(2);
}

// sub_15baaf0  (orig 0x15baaf0, straight)
void main_f_15baaf0(void* a0) {
    *(uint8_t*)((char*)(a0) + 81) = (uint8_t)(1);
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

// sub_15bacf0  (orig 0x15bacf0, straight)
void main_f_15bacf0(void* a0) {
    *(uint8_t*)((char*)(a0) + 288) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 291) = (uint8_t)(1);
}

// sub_15bad00  (orig 0x15bad00, setter)
void main_f_15bad00(void* a0) { *(uint8_t*)((char*)(a0) + 289) = 0; }

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

// sub_15beca0  (orig 0x15beca0, setter)
void main_f_15beca0(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

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

// sub_15c9350  (orig 0x15c9350, setter-chain)
void main_f_15c9350(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0) + 112) = a1; *(uint32_t*)((char*)(a0) + 120) = a2; }

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

// sub_15ecc00  (orig 0x15ecc00, ret_only)
void main_f_15ecc00() {}

// sub_15ecc10  (orig 0x15ecc10, mov_ret)
uint32_t main_f_15ecc10() { return 0; }

// sub_15ed920  (orig 0x15ed920, ret_only)
void main_f_15ed920() {}

// sub_15f3d30  (orig 0x15f3d30, ptr_add)
void* main_f_15f3d30(void* a0) { return (char*)a0 + 1080; }

// sub_15f5f10  (orig 0x15f5f10, mov_ret)
uint64_t main_f_15f5f10() { return 0; }

// sub_15f5f20  (orig 0x15f5f20, mov_ret)
uint64_t main_f_15f5f20() { return 0; }

// sub_1601d50  (orig 0x1601d50, strlit-ret)
const char *main_f_1601d50() { static const char s[] = "prudp"; __asm__ volatile("" ::: "memory"); return s; }

// sub_1606400  (orig 0x1606400, ret_only)
void main_f_1606400() {}

// sub_1607c60  (orig 0x1607c60, ret_only)
void main_f_1607c60() {}

// sub_16092b0  (orig 0x16092b0, ret_only)
void main_f_16092b0() {}

// sub_1609f50  (orig 0x1609f50, ret_only)
void main_f_1609f50() {}

// sub_1609f60  (orig 0x1609f60, ret_only)
void main_f_1609f60() {}

// sub_160a2e0  (orig 0x160a2e0, getter)
uint32_t main_f_160a2e0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_160a510  (orig 0x160a510, ret_only)
void main_f_160a510() {}

// sub_160a750  (orig 0x160a750, ret_only)
void main_f_160a750() {}

// sub_160aff0  (orig 0x160aff0, ret_only)
void main_f_160aff0() {}

// sub_160cf80  (orig 0x160cf80, ret_only)
void main_f_160cf80() {}

// sub_160f5d0  (orig 0x160f5d0, mov_ret)
uint32_t main_f_160f5d0() { return 1; }

// sub_160fc90  (orig 0x160fc90, ret_only)
void main_f_160fc90() {}

// sub_160fce0  (orig 0x160fce0, mov_ret)
uint32_t main_f_160fce0() { return 0; }

// sub_160fcf0  (orig 0x160fcf0, ret_only)
void main_f_160fcf0() {}

// sub_160fd10  (orig 0x160fd10, mov_ret)
uint32_t main_f_160fd10() { return 0; }

// sub_160fd20  (orig 0x160fd20, ret_only)
void main_f_160fd20() {}

// sub_160fd30  (orig 0x160fd30, mov_ret)
uint32_t main_f_160fd30() { return 0; }

// sub_160fd40  (orig 0x160fd40, mov_ret)
uint32_t main_f_160fd40() { return 3; }

// sub_160fd50  (orig 0x160fd50, mov_ret)
uint32_t main_f_160fd50() { return 0; }

// sub_160fdc0  (orig 0x160fdc0, straight)
void main_f_160fdc0(void* a0) {
    *(uint8_t*)((char*)(a0) + 8) = (uint8_t)(1);
}

// sub_160fde0  (orig 0x160fde0, setter)
void main_f_160fde0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 168) = a1; }

// sub_160fdf0  (orig 0x160fdf0, setter)
void main_f_160fdf0(void* a0) { *(uint64_t*)((char*)(a0) + 168) = 0; }

// sub_160fe00  (orig 0x160fe00, ret_only)
void main_f_160fe00() {}

// sub_160fe10  (orig 0x160fe10, ret_only)
void main_f_160fe10() {}

// sub_160fe80  (orig 0x160fe80, ret_only)
void main_f_160fe80() {}

// sub_160fe90  (orig 0x160fe90, ret_only)
void main_f_160fe90() {}

// sub_160fea0  (orig 0x160fea0, ret_only)
void main_f_160fea0() {}

// sub_160feb0  (orig 0x160feb0, ptr_add)
void* main_f_160feb0(void* a0) { return (char*)a0 + 1112; }

// sub_160fec0  (orig 0x160fec0, straight)
void main_f_160fec0(void* a0) {
    *(uint8_t*)((char*)(a0) + 736) = (uint8_t)(1);
}

// sub_160fed0  (orig 0x160fed0, getter)
uint8_t main_f_160fed0(void* a0) { return *(uint8_t*)((char*)(a0) + 384); }

// sub_160fee0  (orig 0x160fee0, compare)
bool main_f_160fee0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(0); }

// sub_160fef0  (orig 0x160fef0, compare)
bool main_f_160fef0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(1); }

// sub_160ff00  (orig 0x160ff00, compare)
bool main_f_160ff00(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(3); }

// sub_160ff10  (orig 0x160ff10, compare)
bool main_f_160ff10(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(4); }

// sub_160ff20  (orig 0x160ff20, compare)
bool main_f_160ff20(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(2); }

// sub_160ff30  (orig 0x160ff30, getter)
uint8_t main_f_160ff30(void* a0) { return *(uint8_t*)((char*)(a0) + 280); }

// sub_160ff40  (orig 0x160ff40, compare)
bool main_f_160ff40(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 280)) == (uint64_t)(0); }

// sub_160ff50  (orig 0x160ff50, setter)
void main_f_160ff50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 268) = a1; }

// sub_160ff60  (orig 0x160ff60, getter)
uint32_t main_f_160ff60(void* a0) { return *(uint32_t*)((char*)(a0) + 272); }

// sub_160ff70  (orig 0x160ff70, getter)
uint32_t main_f_160ff70(void* a0) { return *(uint32_t*)((char*)(a0) + 268); }

// sub_160ff80  (orig 0x160ff80, straight)
void main_f_160ff80(void* a0) {
    *(uint8_t*)((char*)(a0) + 280) = (uint8_t)(1);
}

// sub_160ff90  (orig 0x160ff90, setter)
void main_f_160ff90(void* a0) { *(uint8_t*)((char*)(a0) + 280) = 0; }

// sub_160ffa0  (orig 0x160ffa0, getter)
uint32_t main_f_160ffa0(void* a0) { return *(uint32_t*)((char*)(a0) + 276); }

// sub_160ffb0  (orig 0x160ffb0, getter)
uint32_t main_f_160ffb0(void* a0) { return *(uint32_t*)((char*)(a0) + 284); }

// sub_160ffc0  (orig 0x160ffc0, getter)
uint32_t main_f_160ffc0(void* a0) { return *(uint32_t*)((char*)(a0) + 304); }

// sub_160ffe0  (orig 0x160ffe0, getter)
uint64_t main_f_160ffe0(void* a0) { return *(uint64_t*)((char*)(a0) + 496); }

// sub_1610010  (orig 0x1610010, getter)
uint32_t main_f_1610010(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1610020  (orig 0x1610020, setter)
void main_f_1610020(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_1610030  (orig 0x1610030, ptr_add)
void* main_f_1610030(void* a0) { return (char*)a0 + 16; }

// sub_1610040  (orig 0x1610040, ptr_add)
void* main_f_1610040(void* a0) { return (char*)a0 + 16; }

// sub_1610050  (orig 0x1610050, getter)
uint32_t main_f_1610050(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1610110  (orig 0x1610110, mov_ret)
uint64_t main_f_1610110() { return 0; }

// ComponentState  (orig 0x1610480, strlit-ret)
const char *main_f_1610480() { static const char s[] = "ComponentState"; __asm__ volatile("" ::: "memory"); return s; }

// sub_16104f0  (orig 0x16104f0, ret_only)
void main_f_16104f0() {}

// sub_1611c40  (orig 0x1611c40, mov_ret)
uint32_t main_f_1611c40() { return 1; }

// sub_1611c50  (orig 0x1611c50, ret_only)
void main_f_1611c50() {}

// sub_1611c60  (orig 0x1611c60, ret_only)
void main_f_1611c60() {}

// sub_1611c70  (orig 0x1611c70, ret_only)
void main_f_1611c70() {}

// sub_1611c80  (orig 0x1611c80, ret_only)
void main_f_1611c80() {}

// sub_1611c90  (orig 0x1611c90, mov_ret)
uint64_t main_f_1611c90() { return 0; }

// sub_1611ca0  (orig 0x1611ca0, ret_only)
void main_f_1611ca0() {}

// sub_1611cb0  (orig 0x1611cb0, ret_only)
void main_f_1611cb0() {}

// sub_1612510  (orig 0x1612510, ret_only)
void main_f_1612510() {}

// sub_1612690  (orig 0x1612690, getter)
uint64_t main_f_1612690(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_16126a0  (orig 0x16126a0, setter)
void main_f_16126a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1612d60  (orig 0x1612d60, getter)
uint64_t main_f_1612d60(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1612d70  (orig 0x1612d70, setter)
void main_f_1612d70(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1612f20  (orig 0x1612f20, getter)
uint64_t main_f_1612f20(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1612f30  (orig 0x1612f30, setter)
void main_f_1612f30(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1613bb0  (orig 0x1613bb0, getter)
uint64_t main_f_1613bb0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1613bc0  (orig 0x1613bc0, setter)
void main_f_1613bc0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1614b20  (orig 0x1614b20, getter)
uint64_t main_f_1614b20(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1614b30  (orig 0x1614b30, setter)
void main_f_1614b30(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1616be0  (orig 0x1616be0, mov_ret)
uint32_t main_f_1616be0() { return 0; }

// sub_1616bf0  (orig 0x1616bf0, ret_only)
void main_f_1616bf0() {}

// sub_1617390  (orig 0x1617390, getter)
uint8_t main_f_1617390(void* a0) { return *(uint8_t*)((char*)(a0) + 20); }

// sub_1617790  (orig 0x1617790, mov_ret)
uint32_t main_f_1617790() { return 1; }

// sub_16179b0  (orig 0x16179b0, mov_ret)
uint32_t main_f_16179b0() { return 1; }

// sub_1617a00  (orig 0x1617a00, mov_ret)
uint32_t main_f_1617a00() { return 1; }

// sub_1617a10  (orig 0x1617a10, mov_ret)
uint32_t main_f_1617a10() { return 1; }

// sub_1617c70  (orig 0x1617c70, mov_ret)
uint32_t main_f_1617c70() { return 1; }

// sub_1617c80  (orig 0x1617c80, mov_ret)
uint32_t main_f_1617c80() { return 0; }

// sub_1617c90  (orig 0x1617c90, mov_ret)
uint32_t main_f_1617c90() { return 1; }

// sub_1617d90  (orig 0x1617d90, mov_ret)
uint32_t main_f_1617d90() { return 1; }

// sub_1617db0  (orig 0x1617db0, mov_ret)
uint32_t main_f_1617db0() { return 1; }

// sub_16180c0  (orig 0x16180c0, mov_ret)
uint32_t main_f_16180c0() { return 1; }

// sub_16180d0  (orig 0x16180d0, mov_ret)
uint32_t main_f_16180d0() { return 1; }

// sub_16184e0  (orig 0x16184e0, ret_only)
void main_f_16184e0() {}

// sub_1618570  (orig 0x1618570, setter)
void main_f_1618570(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; }

// sub_1618830  (orig 0x1618830, getter)
uint32_t main_f_1618830(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_1618840  (orig 0x1618840, getter)
uint32_t main_f_1618840(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_1618850  (orig 0x1618850, getter)
uint32_t main_f_1618850(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_1618860  (orig 0x1618860, setter-chain)
void main_f_1618860(void* a0) { *(uint32_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_1618a20  (orig 0x1618a20, getter)
uint32_t main_f_1618a20(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_161cea0  (orig 0x161cea0, ptr_add)
void* main_f_161cea0(void* a0) { return (char*)a0 + 8; }

// sub_1621f70  (orig 0x1621f70, mov_ret)
uint32_t main_f_1621f70() { return 0; }

// sub_1621f80  (orig 0x1621f80, mov_ret)
uint64_t main_f_1621f80() { return 0; }

// sub_1621f90  (orig 0x1621f90, getter)
uint8_t main_f_1621f90(void* a0) { return *(uint8_t*)((char*)(a0) + 21); }

// sub_1621fa0  (orig 0x1621fa0, mov_ret)
uint32_t main_f_1621fa0() { return 1; }

// sub_1621fb0  (orig 0x1621fb0, ret_only)
void main_f_1621fb0() {}

// sub_1621fc0  (orig 0x1621fc0, getter)
uint32_t main_f_1621fc0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// BerkeleySocketDriver_BerkeleySocket  (orig 0x1621fd0, strlit-ret)
const char *main_f_1621fd0() { static const char s[] = "BerkeleySocketDriver::BerkeleySocket"; __asm__ volatile("" ::: "memory"); return s; }

// sub_1621fe0  (orig 0x1621fe0, ret_only)
void main_f_1621fe0() {}

// sub_1622050  (orig 0x1622050, getter)
uint8_t main_f_1622050(void* a0) { return *(uint8_t*)((char*)(a0) + 8); }

// sub_16220a0  (orig 0x16220a0, ret_only)
void main_f_16220a0() {}

// sub_16220b0  (orig 0x16220b0, ret_only)
void main_f_16220b0() {}

// sub_16220c0  (orig 0x16220c0, ret_only)
void main_f_16220c0() {}

// sub_16220d0  (orig 0x16220d0, ret_only)
void main_f_16220d0() {}

// sub_16220e0  (orig 0x16220e0, ret_only)
void main_f_16220e0() {}

// sub_16220f0  (orig 0x16220f0, mov_ret)
uint32_t main_f_16220f0() { return 0; }

// sub_1622100  (orig 0x1622100, ret_only)
void main_f_1622100() {}

// sub_1622110  (orig 0x1622110, mov_ret)
uint32_t main_f_1622110() { return 0; }

// sub_1622120  (orig 0x1622120, mov_ret)
uint32_t main_f_1622120() { return 1; }

// ClientWebSocketDriver_ClientWebSocket  (orig 0x1622130, strlit-ret)
const char *main_f_1622130() { static const char s[] = "ClientWebSocketDriver::ClientWebSocket"; __asm__ volatile("" ::: "memory"); return s; }

// sub_1622150  (orig 0x1622150, mov_ret)
uint32_t main_f_1622150() { return 0; }

// sub_1622160  (orig 0x1622160, mov_ret)
uint32_t main_f_1622160() { return 0; }

// sub_1622170  (orig 0x1622170, mov_ret)
uint32_t main_f_1622170() { return 1; }

// sub_1622180  (orig 0x1622180, mov_ret)
uint32_t main_f_1622180() { return 1; }

// sub_1622190  (orig 0x1622190, mov_ret)
uint32_t main_f_1622190() { return 0; }

// sub_16221a0  (orig 0x16221a0, mov_ret)
uint32_t main_f_16221a0() { return -1; }

// SocketDriver_Socket  (orig 0x16221b0, strlit-ret)
const char *main_f_16221b0() { static const char s[] = "SocketDriver::Socket"; __asm__ volatile("" ::: "memory"); return s; }

// sub_16221c0  (orig 0x16221c0, ret_only)
void main_f_16221c0() {}

// sub_1622470  (orig 0x1622470, ret_only)
void main_f_1622470() {}

// sub_16224d0  (orig 0x16224d0, ret_only)
void main_f_16224d0() {}

// sub_16224f0  (orig 0x16224f0, ret_only)
void main_f_16224f0() {}

// sub_16228d0  (orig 0x16228d0, getter)
uint64_t main_f_16228d0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_16228e0  (orig 0x16228e0, setter)
void main_f_16228e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1622ba0  (orig 0x1622ba0, ret_only)
void main_f_1622ba0() {}

// sub_1622bd0  (orig 0x1622bd0, ret_only)
void main_f_1622bd0() {}

// sub_16234f0  (orig 0x16234f0, ret_only)
void main_f_16234f0() {}

// sub_1624b10  (orig 0x1624b10, ret_only)
void main_f_1624b10() {}

// sub_1624bb0  (orig 0x1624bb0, ret_only)
void main_f_1624bb0() {}

// sub_1624c10  (orig 0x1624c10, ret_only)
void main_f_1624c10() {}

// sub_1626b00  (orig 0x1626b00, getter)
uint8_t main_f_1626b00(void* a0) { return *(uint8_t*)((char*)(a0) + 516); }

// sub_1626e50  (orig 0x1626e50, mov_ret)
uint32_t main_f_1626e50() { return 1; }

// sub_1626e80  (orig 0x1626e80, ret_only)
void main_f_1626e80() {}

// sub_1627140  (orig 0x1627140, getter)
uint8_t main_f_1627140(void* a0) { return *(uint8_t*)((char*)(a0) + 32); }

// sub_162a8c0  (orig 0x162a8c0, ret_only)
void main_f_162a8c0() {}

// sub_162a8e0  (orig 0x162a8e0, ret_only)
void main_f_162a8e0() {}

// sub_162a8f0  (orig 0x162a8f0, setter)
void main_f_162a8f0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 592) = a1; }

// sub_162bf70  (orig 0x162bf70, setter)
void main_f_162bf70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 112) = a1; }

// sub_162bf80  (orig 0x162bf80, getter)
uint8_t main_f_162bf80(void* a0) { return *(uint8_t*)((char*)(a0) + 32); }

// sub_162c010  (orig 0x162c010, getter)
uint8_t main_f_162c010(void* a0) { return *(uint8_t*)((char*)(a0) + 33); }

// sub_162cca0  (orig 0x162cca0, getter-chain)
uint64_t main_f_162cca0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0))))); }

// sub_162ccb0  (orig 0x162ccb0, getter-chain)
uint64_t main_f_162ccb0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 8)))); }

// sub_162ccc0  (orig 0x162ccc0, compare)
bool main_f_162ccc0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0))) == (uint64_t)(0); }

// sub_162cd20  (orig 0x162cd20, ret_only)
void main_f_162cd20() {}

// sub_162cd80  (orig 0x162cd80, ret_only)
void main_f_162cd80() {}

// sub_162d880  (orig 0x162d880, ret_only)
void main_f_162d880() {}

// sub_162dae0  (orig 0x162dae0, getter)
uint64_t main_f_162dae0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162daf0  (orig 0x162daf0, setter)
void main_f_162daf0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162ddd0  (orig 0x162ddd0, getter)
uint64_t main_f_162ddd0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162dde0  (orig 0x162dde0, setter)
void main_f_162dde0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162dfd0  (orig 0x162dfd0, getter)
uint64_t main_f_162dfd0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162dfe0  (orig 0x162dfe0, setter)
void main_f_162dfe0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162e190  (orig 0x162e190, getter)
uint64_t main_f_162e190(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162e1a0  (orig 0x162e1a0, setter)
void main_f_162e1a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162e350  (orig 0x162e350, getter)
uint64_t main_f_162e350(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162e360  (orig 0x162e360, setter)
void main_f_162e360(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162ee30  (orig 0x162ee30, ret_only)
void main_f_162ee30() {}

// sub_162ee40  (orig 0x162ee40, ret_only)
void main_f_162ee40() {}

// sub_162eec0  (orig 0x162eec0, getter)
uint64_t main_f_162eec0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_162fef0  (orig 0x162fef0, setter-chain)
void main_f_162fef0(void* a0, uint32_t a1, uint64_t a2) { *(uint32_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = a2; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint8_t*)((char*)(a0) + 24) = 0; }

// sub_16305b0  (orig 0x16305b0, setter-chain)
void main_f_16305b0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = a2; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint8_t*)((char*)(a0) + 24) = 0; }

// sub_1630750  (orig 0x1630750, ret_only)
void main_f_1630750() {}

// sub_1630a10  (orig 0x1630a10, setter)
void main_f_1630a10(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 72) = a1; }

// sub_1630cb0  (orig 0x1630cb0, ret_only)
void main_f_1630cb0() {}

// sub_16317b0  (orig 0x16317b0, ret_only)
void main_f_16317b0() {}

// sub_1632860  (orig 0x1632860, ret_only)
void main_f_1632860() {}

// sub_1633bd0  (orig 0x1633bd0, setter)
void main_f_1633bd0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 80) = a1; }

// sub_1634130  (orig 0x1634130, ret_only)
void main_f_1634130() {}

// sub_1634590  (orig 0x1634590, straight)
void main_f_1634590(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 12) = *(uint32_t*)((char*)(a1) + 12);
    *(uint32_t*)((char*)(a0) + 16) = *(uint32_t*)((char*)(a1) + 16);
}

// sub_1634b90  (orig 0x1634b90, ret_only)
void main_f_1634b90() {}

// sub_1634ba0  (orig 0x1634ba0, ret_only)
void main_f_1634ba0() {}

// sub_1634bb0  (orig 0x1634bb0, ret_only)
void main_f_1634bb0() {}

// sub_1635d80  (orig 0x1635d80, ret_only)
void main_f_1635d80() {}

// sub_1637270  (orig 0x1637270, getter)
uint8_t main_f_1637270(void* a0) { return *(uint8_t*)((char*)(a0) + 8); }

// sub_1638190  (orig 0x1638190, mov_ret)
uint32_t main_f_1638190() { return 19; }

// CallProtocolMethod  (orig 0x16381a0, strlit-ret)
const char *main_f_16381a0() { static const char s[] = "CallProtocolMethod"; __asm__ volatile("" ::: "memory"); return s; }

// sub_16381b0  (orig 0x16381b0, ret_only)
void main_f_16381b0() {}

// sub_16381f0  (orig 0x16381f0, ret_only)
void main_f_16381f0() {}

// sub_1638200  (orig 0x1638200, ret_only)
void main_f_1638200() {}

// sub_1638210  (orig 0x1638210, ret_only)
void main_f_1638210() {}

// sub_1638320  (orig 0x1638320, ret_only)
void main_f_1638320() {}

// sub_1638500  (orig 0x1638500, ret_only)
void main_f_1638500() {}

// sub_1639140  (orig 0x1639140, getter)
uint64_t main_f_1639140(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639150  (orig 0x1639150, setter)
void main_f_1639150(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1639430  (orig 0x1639430, getter)
uint64_t main_f_1639430(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639440  (orig 0x1639440, setter)
void main_f_1639440(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1639720  (orig 0x1639720, getter)
uint64_t main_f_1639720(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639730  (orig 0x1639730, setter)
void main_f_1639730(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1639a10  (orig 0x1639a10, getter)
uint64_t main_f_1639a10(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639a20  (orig 0x1639a20, setter)
void main_f_1639a20(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1639d00  (orig 0x1639d00, getter)
uint64_t main_f_1639d00(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639d10  (orig 0x1639d10, setter)
void main_f_1639d10(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_163a5d0  (orig 0x163a5d0, ret_only)
void main_f_163a5d0() {}

// sub_1640e90  (orig 0x1640e90, mov_ret)
uint32_t main_f_1640e90() { return 0; }

// sub_1640ea0  (orig 0x1640ea0, ret_only)
void main_f_1640ea0() {}

// sub_1640eb0  (orig 0x1640eb0, mov_ret)
uint64_t main_f_1640eb0() { return 0; }

// sub_1640ec0  (orig 0x1640ec0, mov_ret)
uint32_t main_f_1640ec0() { return 0; }

// sub_1640ed0  (orig 0x1640ed0, mov_ret)
uint32_t main_f_1640ed0() { return 0; }

// sub_1641680  (orig 0x1641680, ret_only)
void main_f_1641680() {}

// sub_1647f60  (orig 0x1647f60, ret_only)
void main_f_1647f60() {}

// sub_1647f80  (orig 0x1647f80, ret_only)
void main_f_1647f80() {}

// prudps_2  (orig 0x164ac60, strlit-ret)
const char *main_f_164ac60() { static const char s[] = "prudps"; __asm__ volatile("" ::: "memory"); return s; }

// sub_164ad60  (orig 0x164ad60, mov_ret)
uint64_t main_f_164ad60() { return 0; }

// sub_164add0  (orig 0x164add0, mov_ret)
uint32_t main_f_164add0() { return 0; }

// sub_164ade0  (orig 0x164ade0, ret_only)
void main_f_164ade0() {}

// sub_164af80  (orig 0x164af80, ret_only)
void main_f_164af80() {}

// sub_164b560  (orig 0x164b560, ret_only)
void main_f_164b560() {}

// sub_164b620  (orig 0x164b620, mov_ret)
uint32_t main_f_164b620() { return 21; }

// RendezVousLogin  (orig 0x164b630, strlit-ret)
const char *main_f_164b630() { static const char s[] = "RendezVousLogin"; __asm__ volatile("" ::: "memory"); return s; }

// sub_164b640  (orig 0x164b640, ret_only)
void main_f_164b640() {}

// sub_164b650  (orig 0x164b650, mov_ret)
uint32_t main_f_164b650() { return 22; }

// RendezVousLogout  (orig 0x164b660, strlit-ret)
const char *main_f_164b660() { static const char s[] = "RendezVousLogout"; __asm__ volatile("" ::: "memory"); return s; }

// sub_164b670  (orig 0x164b670, ret_only)
void main_f_164b670() {}

// sub_164b680  (orig 0x164b680, ret_only)
void main_f_164b680() {}

// sub_164b690  (orig 0x164b690, mov_ret)
uint32_t main_f_164b690() { return 0; }

// sub_164b6a0  (orig 0x164b6a0, mov_ret)
uint64_t main_f_164b6a0() { return 0; }

// sub_164b6b0  (orig 0x164b6b0, ret_only)
void main_f_164b6b0() {}

// sub_164b6c0  (orig 0x164b6c0, mov_ret)
uint32_t main_f_164b6c0() { return 0; }

// sub_164b710  (orig 0x164b710, mov_ret)
uint32_t main_f_164b710() { return 0; }

// sub_164bf90  (orig 0x164bf90, getter)
uint64_t main_f_164bf90(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_164bfa0  (orig 0x164bfa0, setter)
void main_f_164bfa0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_164c190  (orig 0x164c190, ret_only)
void main_f_164c190() {}

// sub_164c1a0  (orig 0x164c1a0, ret_only)
void main_f_164c1a0() {}

// sub_164c330  (orig 0x164c330, ret_only)
void main_f_164c330() {}

// sub_164e5f0  (orig 0x164e5f0, ret_only)
void main_f_164e5f0() {}

// sub_164e820  (orig 0x164e820, ret_only)
void main_f_164e820() {}

// sub_164e830  (orig 0x164e830, ret_only)
void main_f_164e830() {}

// sub_164e840  (orig 0x164e840, ret_only)
void main_f_164e840() {}

// sub_164ea30  (orig 0x164ea30, ret_only)
void main_f_164ea30() {}

// sub_1650100  (orig 0x1650100, getter)
uint64_t main_f_1650100(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1650110  (orig 0x1650110, setter)
void main_f_1650110(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1650a60  (orig 0x1650a60, ret_only)
void main_f_1650a60() {}

// sub_1651310  (orig 0x1651310, getter)
uint64_t main_f_1651310(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1651320  (orig 0x1651320, setter)
void main_f_1651320(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1652460  (orig 0x1652460, ret_only)
void main_f_1652460() {}

// sub_1652470  (orig 0x1652470, getter)
uint32_t main_f_1652470(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_1652480  (orig 0x1652480, mov_ret)
uint32_t main_f_1652480() { return 119; }

// sub_1652490  (orig 0x1652490, setter)
void main_f_1652490(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 48) = a1; }

// sub_1652660  (orig 0x1652660, ret_only)
void main_f_1652660() {}

// sub_1652910  (orig 0x1652910, mov_ret)
uint64_t main_f_1652910() { return 0; }

// sub_1652930  (orig 0x1652930, ret_only)
void main_f_1652930() {}

// sub_1652990  (orig 0x1652990, ret_only)
void main_f_1652990() {}

// sub_1652d30  (orig 0x1652d30, ret_only)
void main_f_1652d30() {}

// sub_1653bb0  (orig 0x1653bb0, ret_only)
void main_f_1653bb0() {}

// sub_1654290  (orig 0x1654290, ptr_add)
void* main_f_1654290(void* a0) { return (char*)a0 + 1392; }

// sub_1654870  (orig 0x1654870, getter)
uint8_t main_f_1654870(void* a0) { return *(uint8_t*)((char*)(a0) + 1424); }

// sub_1654880  (orig 0x1654880, setter)
void main_f_1654880(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1432) = a1; }

// sub_1654890  (orig 0x1654890, setter)
void main_f_1654890(void* a0) { *(uint64_t*)((char*)(a0) + 1432) = 0; }

// sub_16548a0  (orig 0x16548a0, getter)
uint8_t main_f_16548a0(void* a0) { return *(uint8_t*)((char*)(a0) + 1384); }

// sub_1655070  (orig 0x1655070, ret_only)
void main_f_1655070() {}

// sub_1655170  (orig 0x1655170, ret_only)
void main_f_1655170() {}

// sub_1655330  (orig 0x1655330, straight)
void main_f_1655330(void* a0) {
    *(uint8_t*)((char*)(a0) + 40) = (uint8_t)(1);
}

// sub_1657630  (orig 0x1657630, ret_only)
void main_f_1657630() {}

// sub_16580b0  (orig 0x16580b0, setter-chain)
void main_f_16580b0(void* a0) { *(void**)((char*)(a0)) = a0; *(void**)((char*)(a0) + 8) = a0; *(uint32_t*)((char*)(a0) + 16) = 0; }

// sub_16598a0  (orig 0x16598a0, mov_ret)
uint32_t main_f_16598a0() { return 16; }

// sub_1659bf0  (orig 0x1659bf0, mov_ret)
uint32_t main_f_1659bf0() { return 16; }

// sub_165af80  (orig 0x165af80, ret_only)
void main_f_165af80() {}

// sub_165ba30  (orig 0x165ba30, ret_only)
void main_f_165ba30() {}

// sub_165ba40  (orig 0x165ba40, ret_only)
void main_f_165ba40() {}

// sub_165bab0  (orig 0x165bab0, ret_only)
void main_f_165bab0() {}

// sub_165bc60  (orig 0x165bc60, ret_only)
void main_f_165bc60() {}

// sub_165bc80  (orig 0x165bc80, ret_only)
void main_f_165bc80() {}

// sub_165be70  (orig 0x165be70, getter)
uint64_t main_f_165be70(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_165be80  (orig 0x165be80, getter)
uint32_t main_f_165be80(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_165be90  (orig 0x165be90, getter)
uint64_t main_f_165be90(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_165c180  (orig 0x165c180, getter)
uint32_t main_f_165c180(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_165c5e0  (orig 0x165c5e0, ret_only)
void main_f_165c5e0() {}

// sub_165ca00  (orig 0x165ca00, setter)
void main_f_165ca00(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0)) = a1; }

// sub_165ca10  (orig 0x165ca10, getter)
uint8_t main_f_165ca10(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_165d640  (orig 0x165d640, mov_ret)
uint32_t main_f_165d640() { return 16; }

// sub_165d650  (orig 0x165d650, mov_ret)
uint32_t main_f_165d650() { return 64; }

// sub_165d900  (orig 0x165d900, straight)
void main_f_165d900(void* a0) {
    *(uint8_t*)((char*)(a0) + 32) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 136) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 240) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 344) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 448) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 552) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 656) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 760) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 864) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 968) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 1072) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 1176) = (uint8_t)(1);
}

// sub_165da10  (orig 0x165da10, ret_only)
void main_f_165da10() {}

// sub_165dae0  (orig 0x165dae0, ret_only)
void main_f_165dae0() {}

// sub_165dba0  (orig 0x165dba0, setter-chain)
void main_f_165dba0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_165fea0  (orig 0x165fea0, ret_only)
void main_f_165fea0() {}

// sub_165ffd0  (orig 0x165ffd0, setter)
void main_f_165ffd0(void* a0) { *(uint8_t*)((char*)(a0) + 8) = 0; }

// sub_1660970  (orig 0x1660970, ret_only)
void main_f_1660970() {}

// sub_16609a0  (orig 0x16609a0, ret_only)
void main_f_16609a0() {}

// sub_16609c0  (orig 0x16609c0, mov_ret)
uint32_t main_f_16609c0() { return 32; }

// sub_1660a30  (orig 0x1660a30, ret_only)
void main_f_1660a30() {}

// sub_1660cb0  (orig 0x1660cb0, setter)
void main_f_1660cb0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_1661340  (orig 0x1661340, mov_ret)
uint32_t main_f_1661340() { return 32; }

// sub_1661350  (orig 0x1661350, mov_ret)
uint32_t main_f_1661350() { return 64; }

// sub_1661510  (orig 0x1661510, setter-chain)
void main_f_1661510(void* a0) { *(uint64_t*)((char*)(a0) + 112) = 0; *(uint64_t*)((char*)(a0) + 120) = 0; *(uint32_t*)((char*)(a0) + 128) = 0; }

// sub_1661520  (orig 0x1661520, ret_only)
void main_f_1661520() {}

// sub_16615e0  (orig 0x16615e0, setter-chain)
void main_f_16615e0(void* a0) { *(uint64_t*)((char*)(a0) + 112) = 0; *(uint32_t*)((char*)(a0) + 120) = 0; }

// sub_1661d50  (orig 0x1661d50, getter)
uint32_t main_f_1661d50(void* a0) { return *(uint32_t*)((char*)(a0) + 432); }

// sub_1661d90  (orig 0x1661d90, getter)
uint32_t main_f_1661d90(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1661db0  (orig 0x1661db0, getter)
uint32_t main_f_1661db0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1661ec0  (orig 0x1661ec0, getter)
uint8_t main_f_1661ec0(void* a0) { return *(uint8_t*)((char*)(a0) + 436); }

// sub_1661ee0  (orig 0x1661ee0, ret_only)
void main_f_1661ee0() {}

// sub_16621d0  (orig 0x16621d0, getter)
uint64_t main_f_16621d0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_1662350  (orig 0x1662350, getter-chain)
uint8_t main_f_1662350(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 152); }

// sub_1662650  (orig 0x1662650, ptr_add)
void* main_f_1662650(void* a0) { return (char*)a0 + 8; }

// sub_1662680  (orig 0x1662680, ptr_add)
void* main_f_1662680(void* a0) { return (char*)a0 + 8; }

// sub_16626b0  (orig 0x16626b0, ret_only)
void main_f_16626b0() {}

// sub_16626c0  (orig 0x16626c0, getter)
uint32_t main_f_16626c0(void* a0) { return *(uint32_t*)((char*)(a0) + 1688); }

// sub_1662740  (orig 0x1662740, ret_only)
void main_f_1662740() {}

// sub_16627d0  (orig 0x16627d0, mov_ret)
uint32_t main_f_16627d0() { return 16; }

// sub_16627e0  (orig 0x16627e0, mov_ret)
uint32_t main_f_16627e0() { return 48; }

// sub_16627f0  (orig 0x16627f0, mov_ret)
uint32_t main_f_16627f0() { return 1364; }

// sub_1662800  (orig 0x1662800, mov_ret)
uint32_t main_f_1662800() { return 1364; }

// sub_1662810  (orig 0x1662810, mov_ret)
uint32_t main_f_1662810() { return 400; }

// sub_1662830  (orig 0x1662830, mov_ret)
uint32_t main_f_1662830() { return 0; }

// sub_1662840  (orig 0x1662840, mov_ret)
uint32_t main_f_1662840() { return 0; }

// sub_1662850  (orig 0x1662850, mov_ret)
uint32_t main_f_1662850() { return 2; }

// sub_1662860  (orig 0x1662860, mov_ret)
uint32_t main_f_1662860() { return 10; }

// sub_1662870  (orig 0x1662870, mov_ret)
uint32_t main_f_1662870() { return 0; }

// sub_1662880  (orig 0x1662880, mov_ret)
uint32_t main_f_1662880() { return 1; }

// sub_1662890  (orig 0x1662890, mov_ret)
uint32_t main_f_1662890() { return 0; }

// sub_16628a0  (orig 0x16628a0, mov_ret)
uint32_t main_f_16628a0() { return 0; }

// sub_16628b0  (orig 0x16628b0, mov_ret)
uint32_t main_f_16628b0() { return 1; }

// sub_16628c0  (orig 0x16628c0, mov_ret)
uint32_t main_f_16628c0() { return 1; }

// sub_16635f0  (orig 0x16635f0, ret_only)
void main_f_16635f0() {}

// sub_1663860  (orig 0x1663860, getter)
uint64_t main_f_1663860(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1663870  (orig 0x1663870, getter)
uint64_t main_f_1663870(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_16638a0  (orig 0x16638a0, getter)
uint16_t main_f_16638a0(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_16638b0  (orig 0x16638b0, getter)
uint16_t main_f_16638b0(void* a0) { return *(uint16_t*)((char*)(a0) + 10); }

// sub_1663d40  (orig 0x1663d40, setter)
void main_f_1663d40(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 176) = a1; }

// sub_1663d50  (orig 0x1663d50, setter)
void main_f_1663d50(void* a0) { *(uint64_t*)((char*)(a0) + 176) = 0; }

// sub_1667420  (orig 0x1667420, getter)
uint32_t main_f_1667420(void* a0) { return *(uint32_t*)((char*)(a0) + 5832L); }

// sub_1667430  (orig 0x1667430, ptr_add)
void* main_f_1667430(void* a0) { return (char*)a0 + 24; }

// sub_1667440  (orig 0x1667440, ptr_add)
void* main_f_1667440(void* a0) { return (char*)a0 + 2304; }

// sub_1667450  (orig 0x1667450, getter)
uint64_t main_f_1667450(void* a0) { return *(uint64_t*)((char*)(a0) + 5824L); }

// sub_1667490  (orig 0x1667490, setter)
void main_f_1667490(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 5836L) = a1; }

// sub_16674a0  (orig 0x16674a0, setter)
void main_f_16674a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 5840L) = a1; }

// sub_16675d0  (orig 0x16675d0, getter)
uint64_t main_f_16675d0(void* a0) { return *(uint64_t*)((char*)(a0) + 5824L); }

// sub_1667c60  (orig 0x1667c60, ret_only)
void main_f_1667c60() {}

// sub_1668f30  (orig 0x1668f30, ret_only)
void main_f_1668f30() {}

// sub_1668f40  (orig 0x1668f40, ret_only)
void main_f_1668f40() {}

// sub_1668f50  (orig 0x1668f50, getter)
uint32_t main_f_1668f50(void* a0) { return *(uint32_t*)((char*)(a0) + 272); }

// sub_166a430  (orig 0x166a430, ret_only)
void main_f_166a430() {}

// sub_166a440  (orig 0x166a440, mov_ret)
uint32_t main_f_166a440() { return 0; }

// sub_166a450  (orig 0x166a450, ret_only)
void main_f_166a450() {}

// sub_166a580  (orig 0x166a580, ret_only)
void main_f_166a580() {}

// sub_166a590  (orig 0x166a590, ret_only)
void main_f_166a590() {}

// sub_166a5a0  (orig 0x166a5a0, ret_only)
void main_f_166a5a0() {}

// sub_166a5b0  (orig 0x166a5b0, ret_only)
void main_f_166a5b0() {}

// sub_166a660  (orig 0x166a660, ret_only)
void main_f_166a660() {}

// sub_166a670  (orig 0x166a670, mov_ret)
uint32_t main_f_166a670() { return 0; }

// sub_166ae60  (orig 0x166ae60, ret_only)
void main_f_166ae60() {}

// sub_166b0b0  (orig 0x166b0b0, ret_only)
void main_f_166b0b0() {}

// sub_166b640  (orig 0x166b640, ret_only)
void main_f_166b640() {}

// sub_166cad0  (orig 0x166cad0, ret_only)
void main_f_166cad0() {}

// sub_166cae0  (orig 0x166cae0, getter)
uint32_t main_f_166cae0(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_166caf0  (orig 0x166caf0, ret_only)
void main_f_166caf0() {}

// sub_166cb40  (orig 0x166cb40, ret_only)
void main_f_166cb40() {}

// sub_166d0f0  (orig 0x166d0f0, straight)
void main_f_166d0f0(void* a0) {
    *(uint32_t*)((char*)(a0) + 688) = 3;
}

// sub_166d2d0  (orig 0x166d2d0, ret_only)
void main_f_166d2d0() {}

// sub_166d340  (orig 0x166d340, mov_ret)
uint32_t main_f_166d340() { return 0; }

// sub_166d370  (orig 0x166d370, getter)
uint8_t main_f_166d370(void* a0) { return *(uint8_t*)((char*)(a0) + 552); }

// sub_166d380  (orig 0x166d380, getter)
uint8_t main_f_166d380(void* a0) { return *(uint8_t*)((char*)(a0) + 554); }

// sub_166d390  (orig 0x166d390, getter)
uint8_t main_f_166d390(void* a0) { return *(uint8_t*)((char*)(a0) + 553); }

// sub_166d3a0  (orig 0x166d3a0, getter)
uint8_t main_f_166d3a0(void* a0) { return *(uint8_t*)((char*)(a0) + 564); }

// sub_166d3b0  (orig 0x166d3b0, getter)
uint8_t main_f_166d3b0(void* a0) { return *(uint8_t*)((char*)(a0) + 641); }

// sub_166d890  (orig 0x166d890, ret_only)
void main_f_166d890() {}

// sub_166dd10  (orig 0x166dd10, ret_only)
void main_f_166dd10() {}

// sub_166dd70  (orig 0x166dd70, ret_only)
void main_f_166dd70() {}

// sub_166de50  (orig 0x166de50, ret_only)
void main_f_166de50() {}

// sub_166e080  (orig 0x166e080, setter)
void main_f_166e080(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 544) = a1; }

// sub_166e090  (orig 0x166e090, setter)
void main_f_166e090(void* a0) { *(uint64_t*)((char*)(a0) + 544) = 0; }

// sub_166eba0  (orig 0x166eba0, mov_ret)
uint32_t main_f_166eba0() { return 16; }

// sub_166ebb0  (orig 0x166ebb0, mov_ret)
uint32_t main_f_166ebb0() { return 16; }

// sub_166ebc0  (orig 0x166ebc0, mov_ret)
uint32_t main_f_166ebc0() { return 1; }

// sub_166ebd0  (orig 0x166ebd0, mov_ret)
uint32_t main_f_166ebd0() { return 1; }

// sub_166ebe0  (orig 0x166ebe0, mov_ret)
uint32_t main_f_166ebe0() { return 1; }

// sub_166ebf0  (orig 0x166ebf0, mov_ret)
uint32_t main_f_166ebf0() { return 1; }

// sub_16709f0  (orig 0x16709f0, getter)
uint8_t main_f_16709f0(void* a0) { return *(uint8_t*)((char*)(a0) + 417); }

// sub_1670a10  (orig 0x1670a10, mov_ret)
uint32_t main_f_1670a10() { return 1; }

// sub_1670a20  (orig 0x1670a20, ret_only)
void main_f_1670a20() {}

// sub_1670a30  (orig 0x1670a30, ret_only)
void main_f_1670a30() {}

// sub_16711e0  (orig 0x16711e0, compare)
bool main_f_16711e0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 4940L)) != (uint64_t)(0); }

// sub_1673e70  (orig 0x1673e70, ret_only)
void main_f_1673e70() {}

// sub_1674e80  (orig 0x1674e80, mov_ret)
uint32_t main_f_1674e80() { return 68; }

// sub_1674e90  (orig 0x1674e90, mov_ret)
uint32_t main_f_1674e90() { return 0; }

// sub_1674ea0  (orig 0x1674ea0, getter)
uint64_t main_f_1674ea0(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_1674f80  (orig 0x1674f80, mov_ret)
uint32_t main_f_1674f80() { return 12; }

// sub_16751c0  (orig 0x16751c0, mov_ret)
uint32_t main_f_16751c0() { return 16; }

// sub_16756c0  (orig 0x16756c0, mov_ret)
uint32_t main_f_16756c0() { return 16; }

// sub_1675be0  (orig 0x1675be0, mov_ret)
uint32_t main_f_1675be0() { return 12; }

// sub_16777e0  (orig 0x16777e0, ret_only)
void main_f_16777e0() {}

// sub_1678240  (orig 0x1678240, getter)
uint16_t main_f_1678240(void* a0) { return *(uint16_t*)((char*)(a0) + 58); }

// sub_1678260  (orig 0x1678260, getter)
uint32_t main_f_1678260(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1678270  (orig 0x1678270, getter)
uint32_t main_f_1678270(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1678280  (orig 0x1678280, getter)
uint16_t main_f_1678280(void* a0) { return *(uint16_t*)((char*)(a0) + 24); }

// sub_1678290  (orig 0x1678290, getter)
uint16_t main_f_1678290(void* a0) { return *(uint16_t*)((char*)(a0) + 26); }

// sub_16782a0  (orig 0x16782a0, getter)
uint16_t main_f_16782a0(void* a0) { return *(uint16_t*)((char*)(a0) + 28); }

// sub_16782b0  (orig 0x16782b0, getter)
uint8_t main_f_16782b0(void* a0) { return *(uint8_t*)((char*)(a0) + 30); }

// sub_16782c0  (orig 0x16782c0, setter)
void main_f_16782c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 16) = a1; }

// sub_16782d0  (orig 0x16782d0, setter)
void main_f_16782d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_16782e0  (orig 0x16782e0, setter)
void main_f_16782e0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 24) = a1; }

// sub_16782f0  (orig 0x16782f0, setter)
void main_f_16782f0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 26) = a1; }

// sub_1678300  (orig 0x1678300, setter)
void main_f_1678300(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 28) = a1; }

// sub_1678560  (orig 0x1678560, ptr_add)
void* main_f_1678560(void* a0) { return (char*)a0 + 480; }

// sub_1678570  (orig 0x1678570, setter)
void main_f_1678570(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 58) = a1; }

// sub_1678580  (orig 0x1678580, setter)
void main_f_1678580(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 56) = a1; }

// sub_1678590  (orig 0x1678590, getter)
uint8_t main_f_1678590(void* a0) { return *(uint8_t*)((char*)(a0) + 56); }

// sub_16785a0  (orig 0x16785a0, setter)
void main_f_16785a0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 57) = a1; }

// sub_16785b0  (orig 0x16785b0, getter)
uint8_t main_f_16785b0(void* a0) { return *(uint8_t*)((char*)(a0) + 57); }

// sub_16785c0  (orig 0x16785c0, ptr_add)
void* main_f_16785c0(void* a0) { return (char*)a0 + 60; }

// sub_16786e0  (orig 0x16786e0, getter)
uint32_t main_f_16786e0(void* a0) { return *(uint32_t*)((char*)(a0) + 476); }

// sub_1678700  (orig 0x1678700, mov_ret)
uint32_t main_f_1678700() { return 0; }

// sub_1679c00  (orig 0x1679c00, ret_only)
void main_f_1679c00() {}

// sub_167acd0  (orig 0x167acd0, mov_ret)
uint32_t main_f_167acd0() { return 570; }

// sub_167ace0  (orig 0x167ace0, mov_ret)
uint32_t main_f_167ace0() { return 570; }

// sub_167aec0  (orig 0x167aec0, ret_only)
void main_f_167aec0() {}

// sub_167b070  (orig 0x167b070, setter)
void main_f_167b070(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 96) = a1; }

// sub_167b080  (orig 0x167b080, getter)
uint64_t main_f_167b080(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_167b0c0  (orig 0x167b0c0, ptr_add)
void* main_f_167b0c0(void* a0) { return (char*)a0 + 24; }

// sub_167b850  (orig 0x167b850, mov_ret)
uint32_t main_f_167b850() { return 50; }

// sub_167b860  (orig 0x167b860, mov_ret)
uint32_t main_f_167b860() { return 50; }

// sub_167b8d0  (orig 0x167b8d0, ret_only)
void main_f_167b8d0() {}

// sub_167b940  (orig 0x167b940, getter)
uint16_t main_f_167b940(void* a0) { return *(uint16_t*)((char*)(a0) + 12); }

// sub_167b950  (orig 0x167b950, getter)
uint16_t main_f_167b950(void* a0) { return *(uint16_t*)((char*)(a0) + 14); }

// sub_167b960  (orig 0x167b960, getter)
uint32_t main_f_167b960(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_167bb10  (orig 0x167bb10, getter)
uint32_t main_f_167bb10(void* a0) { return *(uint32_t*)((char*)(a0) + 428); }

// sub_167bb20  (orig 0x167bb20, ret_only)
void main_f_167bb20() {}

// sub_167be90  (orig 0x167be90, ret_only)
void main_f_167be90() {}

// sub_167c130  (orig 0x167c130, getter)
uint32_t main_f_167c130(void* a0) { return *(uint32_t*)((char*)(a0) + 552); }

// sub_167c140  (orig 0x167c140, getter)
uint8_t main_f_167c140(void* a0) { return *(uint8_t*)((char*)(a0) + 560); }

// sub_167c150  (orig 0x167c150, ret_only)
void main_f_167c150() {}

// sub_167c160  (orig 0x167c160, setter-chain)
void main_f_167c160(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 12) = a1; *(uint16_t*)((char*)(a0) + 98) = a1; }

// sub_167c170  (orig 0x167c170, ptr_add)
void* main_f_167c170(void* a0) { return (char*)a0 + 80; }

// sub_167c190  (orig 0x167c190, ptr_add)
void* main_f_167c190(void* a0) { return (char*)a0 + 85; }

// sub_167c1a0  (orig 0x167c1a0, getter)
uint32_t main_f_167c1a0(void* a0) { return *(uint32_t*)((char*)(a0) + 472); }

// sub_167c380  (orig 0x167c380, ptr_add)
void* main_f_167c380(void* a0) { return (char*)a0 + 88; }

// sub_167c480  (orig 0x167c480, mov_ret)
uint32_t main_f_167c480() { return 8; }

// sub_167c490  (orig 0x167c490, mov_ret)
uint32_t main_f_167c490() { return 28; }

// sub_167c4a0  (orig 0x167c4a0, mov_ret)
uint32_t main_f_167c4a0() { return 1500; }

// sub_167c4b0  (orig 0x167c4b0, mov_ret)
uint32_t main_f_167c4b0() { return 1500; }

// sub_167c510  (orig 0x167c510, mov_ret)
uint32_t main_f_167c510() { return 24; }

// sub_167c520  (orig 0x167c520, mov_ret)
uint32_t main_f_167c520() { return 0; }

// sub_167c550  (orig 0x167c550, mov_ret)
uint32_t main_f_167c550() { return 1; }

// sub_167ce40  (orig 0x167ce40, getter)
uint64_t main_f_167ce40(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_167ce50  (orig 0x167ce50, getter)
uint64_t main_f_167ce50(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_167ce80  (orig 0x167ce80, getter)
uint16_t main_f_167ce80(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_167ce90  (orig 0x167ce90, getter)
uint16_t main_f_167ce90(void* a0) { return *(uint16_t*)((char*)(a0) + 10); }

// sub_167d640  (orig 0x167d640, ret_only)
void main_f_167d640() {}

// sub_167e450  (orig 0x167e450, getter)
uint64_t main_f_167e450(void* a0) { return *(uint64_t*)((char*)(a0) + 1368); }

// sub_167e7c0  (orig 0x167e7c0, getter)
uint64_t main_f_167e7c0(void* a0) { return *(uint64_t*)((char*)(a0) + 1360); }

// sub_167e850  (orig 0x167e850, mov_ret)
uint32_t main_f_167e850() { return 0; }

// sub_167e860  (orig 0x167e860, ptr_add)
void* main_f_167e860(void* a0) { return (char*)a0 + 120; }

// sub_167e8f0  (orig 0x167e8f0, getter)
uint16_t main_f_167e8f0(void* a0) { return *(uint16_t*)((char*)(a0) + 80); }

// sub_167e970  (orig 0x167e970, ret_only)
void main_f_167e970() {}

// sub_167f0b0  (orig 0x167f0b0, ret_only)
void main_f_167f0b0() {}

// sub_167f120  (orig 0x167f120, mov_ret)
uint32_t main_f_167f120() { return 1; }

// sub_167f130  (orig 0x167f130, mov_ret)
uint32_t main_f_167f130() { return 1; }

// sub_167f140  (orig 0x167f140, mov_ret)
uint32_t main_f_167f140() { return 1; }

// sub_167f740  (orig 0x167f740, straight)
void main_f_167f740(void* a0) {
    *(uint8_t*)((char*)(a0) + 1148) = (uint8_t)(64);
}

// sub_1680ab0  (orig 0x1680ab0, mov_ret)
uint32_t main_f_1680ab0() { return 0; }

// sub_1681dd0  (orig 0x1681dd0, setter)
void main_f_1681dd0(uint64_t unused0, void* a1, uint32_t a2) { *(uint32_t*)((char*)(a1) + 12) = a2; }

// sub_1681de0  (orig 0x1681de0, mov_ret)
uint32_t main_f_1681de0() { return 0; }

// sub_1682580  (orig 0x1682580, mov_ret)
uint32_t main_f_1682580() { return 36; }

// sub_1682590  (orig 0x1682590, mov_ret)
uint32_t main_f_1682590() { return 0; }

// sub_16825a0  (orig 0x16825a0, mov_ret)
uint32_t main_f_16825a0() { return 1472; }

// sub_16825b0  (orig 0x16825b0, mov_ret)
uint32_t main_f_16825b0() { return 1460; }

// sub_16825c0  (orig 0x16825c0, mov_ret)
uint32_t main_f_16825c0() { return 24; }

// sub_16825d0  (orig 0x16825d0, mov_ret)
uint32_t main_f_16825d0() { return 360; }

// sub_1682620  (orig 0x1682620, ret_only)
void main_f_1682620() {}

// sub_1682890  (orig 0x1682890, ret_only)
void main_f_1682890() {}

// sub_1684b90  (orig 0x1684b90, ret_only)
void main_f_1684b90() {}

// sub_16853f0  (orig 0x16853f0, ret_only)
void main_f_16853f0() {}

// sub_1685570  (orig 0x1685570, ret_only)
void main_f_1685570() {}

// sub_1685850  (orig 0x1685850, compare)
bool main_f_1685850(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 8)) == (uint64_t)(6); }

// sub_1685930  (orig 0x1685930, compare)
bool main_f_1685930(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 8)) == (uint64_t)(3); }

// sub_1685940  (orig 0x1685940, compare)
bool main_f_1685940(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 8)) == (uint64_t)(5); }

// sub_1685970  (orig 0x1685970, getter)
uint16_t main_f_1685970(void* a0) { return *(uint16_t*)((char*)(a0) + 682); }

// sub_1685980  (orig 0x1685980, ptr_add)
void* main_f_1685980(void* a0) { return (char*)a0 + 684; }

// sub_16859b0  (orig 0x16859b0, getter)
uint32_t main_f_16859b0(void* a0) { return *(uint32_t*)((char*)(a0) + 1216); }

// sub_16859c0  (orig 0x16859c0, getter)
uint16_t main_f_16859c0(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_16859d0  (orig 0x16859d0, ptr_add)
void* main_f_16859d0(void* a0) { return (char*)a0 + 16; }

// sub_1685c20  (orig 0x1685c20, ret_only)
void main_f_1685c20() {}

// sub_16864d0  (orig 0x16864d0, getter)
uint32_t main_f_16864d0(void* a0) { return *(uint32_t*)((char*)(a0) + 2656); }

// sub_16864e0  (orig 0x16864e0, getter)
uint32_t main_f_16864e0(void* a0) { return *(uint32_t*)((char*)(a0) + 2660); }

// sub_16864f0  (orig 0x16864f0, getter)
uint16_t main_f_16864f0(void* a0) { return *(uint16_t*)((char*)(a0) + 2664); }

// sub_1686500  (orig 0x1686500, getter)
uint16_t main_f_1686500(void* a0) { return *(uint16_t*)((char*)(a0) + 2666); }

// sub_1686590  (orig 0x1686590, getter)
uint32_t main_f_1686590(void* a0) { return *(uint32_t*)((char*)(a0) + 3028); }

// sub_16865a0  (orig 0x16865a0, getter)
uint8_t main_f_16865a0(void* a0) { return *(uint8_t*)((char*)(a0) + 3034); }

// sub_1686740  (orig 0x1686740, ptr_add)
void* main_f_1686740(void* a0) { return (char*)a0 + 16; }

// sub_16868d0  (orig 0x16868d0, ret_only)
void main_f_16868d0() {}

// sub_16868e0  (orig 0x16868e0, mov_ret)
uint32_t main_f_16868e0() { return 3; }

// sub_1686ce0  (orig 0x1686ce0, ret_only)
void main_f_1686ce0() {}

// sub_1686cf0  (orig 0x1686cf0, ptr_add)
void* main_f_1686cf0(void* a0) { return (char*)a0 + 32; }

// sub_1686f90  (orig 0x1686f90, ptr_add)
void* main_f_1686f90(void* a0) { return (char*)a0 + 16; }

// sub_1686fa0  (orig 0x1686fa0, mov_ret)
uint32_t main_f_1686fa0() { return 360; }

// sub_1687070  (orig 0x1687070, mov_ret)
uint32_t main_f_1687070() { return 8; }

// sub_16873d0  (orig 0x16873d0, ret_only)
void main_f_16873d0() {}

// sub_1688220  (orig 0x1688220, ret_only)
void main_f_1688220() {}

// sub_1688670  (orig 0x1688670, ret_only)
void main_f_1688670() {}

// sub_1688860  (orig 0x1688860, ptr_add)
void* main_f_1688860(void* a0) { return (char*)a0 + 16; }

// sub_1688870  (orig 0x1688870, ret_only)
void main_f_1688870() {}

// sub_1689150  (orig 0x1689150, ret_only)
void main_f_1689150() {}

// sub_1689330  (orig 0x1689330, ret_only)
void main_f_1689330() {}

// sub_168a430  (orig 0x168a430, ret_only)
void main_f_168a430() {}

// sub_168a820  (orig 0x168a820, ret_only)
void main_f_168a820() {}

// sub_168bca0  (orig 0x168bca0, ret_only)
void main_f_168bca0() {}

// sub_168bd00  (orig 0x168bd00, setter)
void main_f_168bd00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_168bd10  (orig 0x168bd10, setter)
void main_f_168bd10(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_168be20  (orig 0x168be20, ret_only)
void main_f_168be20() {}

// sub_168bf20  (orig 0x168bf20, ret_only)
void main_f_168bf20() {}

// sub_168c030  (orig 0x168c030, ptr_add)
void* main_f_168c030(void* a0) { return (char*)a0 + 24; }

// sub_168c8d0  (orig 0x168c8d0, ret_only)
void main_f_168c8d0() {}

// sub_168c8e0  (orig 0x168c8e0, ret_only)
void main_f_168c8e0() {}

// sub_168c900  (orig 0x168c900, mov_ret)
uint32_t main_f_168c900() { return 1; }

// sub_168cac0  (orig 0x168cac0, mov_ret)
uint32_t main_f_168cac0() { return 0; }

// sub_168d620  (orig 0x168d620, mov_ret)
uint32_t main_f_168d620() { return 0; }

// sub_168e910  (orig 0x168e910, ret_only)
void main_f_168e910() {}

// sub_168f0f0  (orig 0x168f0f0, ret_only)
void main_f_168f0f0() {}

// sub_168f100  (orig 0x168f100, ret_only)
void main_f_168f100() {}

// sub_168f1c0  (orig 0x168f1c0, mov_ret)
uint32_t main_f_168f1c0() { return 0; }

// sub_168f1d0  (orig 0x168f1d0, ret_only)
void main_f_168f1d0() {}

// sub_168f890  (orig 0x168f890, ret_only)
void main_f_168f890() {}

// sub_168fb00  (orig 0x168fb00, ret_only)
void main_f_168fb00() {}

// sub_16903b0  (orig 0x16903b0, ret_only)
void main_f_16903b0() {}

// sub_1690620  (orig 0x1690620, ret_only)
void main_f_1690620() {}

// sub_1690c60  (orig 0x1690c60, ret_only)
void main_f_1690c60() {}

// sub_1690d00  (orig 0x1690d00, setter)
void main_f_1690d00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1690d10  (orig 0x1690d10, setter)
void main_f_1690d10(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_1690e20  (orig 0x1690e20, ret_only)
void main_f_1690e20() {}

// sub_1690e90  (orig 0x1690e90, mov_ret)
uint32_t main_f_1690e90() { return 1; }

// sub_1690ea0  (orig 0x1690ea0, mov_ret)
uint32_t main_f_1690ea0() { return 1; }

// sub_1690eb0  (orig 0x1690eb0, mov_ret)
uint32_t main_f_1690eb0() { return 1; }

// sub_1691a50  (orig 0x1691a50, mov_ret)
uint32_t main_f_1691a50() { return 1; }

// sub_1691a60  (orig 0x1691a60, ret_only)
void main_f_1691a60() {}

// sub_1691a70  (orig 0x1691a70, mov_ret)
uint32_t main_f_1691a70() { return 0; }

// sub_1691a80  (orig 0x1691a80, mov_ret)
uint32_t main_f_1691a80() { return 0; }

// sub_16928a0  (orig 0x16928a0, setter)
void main_f_16928a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1132) = a1; }

// sub_16928b0  (orig 0x16928b0, setter)
void main_f_16928b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1140) = a1; }

// sub_1693bb0  (orig 0x1693bb0, setter-chain)
void main_f_1693bb0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 1312) = a1; *(uint64_t*)((char*)(a0) + 1320) = a2; }

// sub_1694e90  (orig 0x1694e90, compare)
bool main_f_1694e90(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1256)) == (uint64_t)(1); }

// sub_1697210  (orig 0x1697210, compare)
bool main_f_1697210(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1232)) != (uint64_t)(0); }

// sub_1697830  (orig 0x1697830, setter-chain)
void main_f_1697830(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint32_t*)((char*)(a0) + 8) = a2; *(uint16_t*)((char*)(a0) + 12) = 0; }

// sub_16978a0  (orig 0x16978a0, ret_only)
void main_f_16978a0() {}

// sub_1697c80  (orig 0x1697c80, ret_only)
void main_f_1697c80() {}

// sub_16981a0  (orig 0x16981a0, ret_only)
void main_f_16981a0() {}

// sub_1698a50  (orig 0x1698a50, ret_only)
void main_f_1698a50() {}

// sub_1698f00  (orig 0x1698f00, ret_only)
void main_f_1698f00() {}

// sub_1699460  (orig 0x1699460, ret_only)
void main_f_1699460() {}

// sub_16997d0  (orig 0x16997d0, ret_only)
void main_f_16997d0() {}

// sub_1699e30  (orig 0x1699e30, ret_only)
void main_f_1699e30() {}

// sub_169a160  (orig 0x169a160, ret_only)
void main_f_169a160() {}

// sub_169a800  (orig 0x169a800, ret_only)
void main_f_169a800() {}

// sub_169ac10  (orig 0x169ac10, ret_only)
void main_f_169ac10() {}

// sub_169ac40  (orig 0x169ac40, ret_only)
void main_f_169ac40() {}

// sub_169ac60  (orig 0x169ac60, straight)
void main_f_169ac60(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint8_t*)((char*)(a0) + 9) = *(uint8_t*)((char*)(a1) + 9);
    *(uint8_t*)((char*)(a0) + 10) = *(uint8_t*)((char*)(a1) + 10);
    *(uint8_t*)((char*)(a0) + 11) = *(uint8_t*)((char*)(a1) + 11);
}

// sub_169ac90  (orig 0x169ac90, setter)
void main_f_169ac90(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_169aca0  (orig 0x169aca0, getter)
uint8_t main_f_169aca0(void* a0) { return *(uint8_t*)((char*)(a0) + 8); }

// sub_169acb0  (orig 0x169acb0, getter)
uint8_t main_f_169acb0(void* a0) { return *(uint8_t*)((char*)(a0) + 9); }

// sub_169ad10  (orig 0x169ad10, setter)
void main_f_169ad10(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 9) = a1; }

// sub_169ad20  (orig 0x169ad20, getter)
uint8_t main_f_169ad20(void* a0) { return *(uint8_t*)((char*)(a0) + 10); }

// sub_169ad40  (orig 0x169ad40, setter)
void main_f_169ad40(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 11) = a1; }

// sub_169ad50  (orig 0x169ad50, ret_only)
void main_f_169ad50() {}

// sub_169af20  (orig 0x169af20, getter)
uint32_t main_f_169af20(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_169bbb0  (orig 0x169bbb0, mov_ret)
uint32_t main_f_169bbb0() { return 0; }

// sub_169bfa0  (orig 0x169bfa0, ret_only)
void main_f_169bfa0() {}

// sub_169bfb0  (orig 0x169bfb0, ret_only)
void main_f_169bfb0() {}

// sub_169c900  (orig 0x169c900, ret_only)
void main_f_169c900() {}

// sub_169c910  (orig 0x169c910, ret_only)
void main_f_169c910() {}

// sub_169df30  (orig 0x169df30, ret_only)
void main_f_169df30() {}

// sub_16a1c40  (orig 0x16a1c40, ret_only)
void main_f_16a1c40() {}

// sub_16a1ed0  (orig 0x16a1ed0, getter)
uint32_t main_f_16a1ed0(void* a0) { return *(uint32_t*)((char*)(a0) + 152); }

// sub_16a1ee0  (orig 0x16a1ee0, ret_only)
void main_f_16a1ee0() {}

// sub_16a2460  (orig 0x16a2460, setter-chain)
void main_f_16a2460(void* a0) { *(uint64_t*)((char*)(a0) + 104) = 0; *(uint8_t*)((char*)(a0) + 124) = 0; *(uint64_t*)((char*)(a0) + 88) = 0; }

// sub_16a2470  (orig 0x16a2470, ret_only)
void main_f_16a2470() {}

// sub_16a2480  (orig 0x16a2480, ret_only)
void main_f_16a2480() {}

// sub_16a33f0  (orig 0x16a33f0, ret_only)
void main_f_16a33f0() {}

// sub_16a3400  (orig 0x16a3400, ret_only)
void main_f_16a3400() {}

// sub_16a3410  (orig 0x16a3410, ret_only)
void main_f_16a3410() {}

// sub_16a3b60  (orig 0x16a3b60, ret_only)
void main_f_16a3b60() {}

// sub_16a4420  (orig 0x16a4420, ret_only)
void main_f_16a4420() {}

// sub_16a56b0  (orig 0x16a56b0, setter)
void main_f_16a56b0(void* a0) { *(uint64_t*)((char*)(a0) + 196) = 0; }

// sub_16a56c0  (orig 0x16a56c0, getter)
uint64_t main_f_16a56c0(void* a0) { return *(uint64_t*)((char*)(a0) + 888); }

// sub_16a6bd0  (orig 0x16a6bd0, getter)
uint8_t main_f_16a6bd0(void* a0) { return *(uint8_t*)((char*)(a0) + 190); }

// sub_16a7890  (orig 0x16a7890, getter)
uint64_t main_f_16a7890(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_16a7a50  (orig 0x16a7a50, getter)
uint8_t main_f_16a7a50(void* a0) { return *(uint8_t*)((char*)(a0) + 171); }

// sub_16a7b40  (orig 0x16a7b40, setter)
void main_f_16a7b40(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 96) = a1; }

// sub_16a7b50  (orig 0x16a7b50, setter)
void main_f_16a7b50(void* a0) { *(uint64_t*)((char*)(a0) + 96) = 0; }

// sub_16a7be0  (orig 0x16a7be0, setter)
void main_f_16a7be0(void* a0) { *(uint64_t*)((char*)(a0) + 104) = 0; }

// sub_16a7bf0  (orig 0x16a7bf0, setter)
void main_f_16a7bf0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 112) = a1; }

// sub_16a7c00  (orig 0x16a7c00, setter)
void main_f_16a7c00(void* a0) { *(uint64_t*)((char*)(a0) + 112) = 0; }

// sub_16a7c40  (orig 0x16a7c40, getter)
uint32_t main_f_16a7c40(void* a0) { return *(uint32_t*)((char*)(a0) + 184); }

// sub_16a7c60  (orig 0x16a7c60, getter)
uint8_t main_f_16a7c60(void* a0) { return *(uint8_t*)((char*)(a0) + 226); }

// sub_16a7e70  (orig 0x16a7e70, ret_only)
void main_f_16a7e70() {}

// sub_16a7e80  (orig 0x16a7e80, setter)
void main_f_16a7e80(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 288) = a1; }

// sub_16a7e90  (orig 0x16a7e90, setter)
void main_f_16a7e90(void* a0) { *(uint64_t*)((char*)(a0) + 288) = 0; }

// sub_16a7ea0  (orig 0x16a7ea0, getter)
uint8_t main_f_16a7ea0(void* a0) { return *(uint8_t*)((char*)(a0) + 172); }

// sub_16a7eb0  (orig 0x16a7eb0, getter)
uint32_t main_f_16a7eb0(void* a0) { return *(uint32_t*)((char*)(a0) + 200); }

// sub_16a7ec0  (orig 0x16a7ec0, getter)
uint64_t main_f_16a7ec0(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_16a8020  (orig 0x16a8020, getter)
uint8_t main_f_16a8020(void* a0) { return *(uint8_t*)((char*)(a0) + 189); }

// sub_16a80b0  (orig 0x16a80b0, getter)
uint32_t main_f_16a80b0(void* a0) { return *(uint32_t*)((char*)(a0) + 176); }

// sub_16a80d0  (orig 0x16a80d0, getter)
uint8_t main_f_16a80d0(void* a0) { return *(uint8_t*)((char*)(a0) + 298); }

// sub_16a80e0  (orig 0x16a80e0, getter)
uint8_t main_f_16a80e0(void* a0) { return *(uint8_t*)((char*)(a0) + 192); }

// sub_16a82e0  (orig 0x16a82e0, getter)
uint8_t main_f_16a82e0(void* a0) { return *(uint8_t*)((char*)(a0) + 299); }

// sub_16a8300  (orig 0x16a8300, getter)
uint64_t main_f_16a8300(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_16a8310  (orig 0x16a8310, getter)
uint64_t main_f_16a8310(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_16a8320  (orig 0x16a8320, getter)
uint64_t main_f_16a8320(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_16a8330  (orig 0x16a8330, getter)
uint64_t main_f_16a8330(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_16a8340  (orig 0x16a8340, getter)
uint8_t main_f_16a8340(void* a0) { return *(uint8_t*)((char*)(a0) + 188); }

// sub_16a8370  (orig 0x16a8370, getter)
uint64_t main_f_16a8370(void* a0) { return *(uint64_t*)((char*)(a0) + 864); }

// sub_16a8380  (orig 0x16a8380, getter)
uint64_t main_f_16a8380(void* a0) { return *(uint64_t*)((char*)(a0) + 872); }

// sub_16a8390  (orig 0x16a8390, getter)
uint64_t main_f_16a8390(void* a0) { return *(uint64_t*)((char*)(a0) + 880); }

// sub_16a83a0  (orig 0x16a83a0, setter)
void main_f_16a83a0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 858) = a1; }

// sub_16a83b0  (orig 0x16a83b0, setter)
void main_f_16a83b0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 860) = a1; }

// sub_16a83c0  (orig 0x16a83c0, getter)
uint16_t main_f_16a83c0(void* a0) { return *(uint16_t*)((char*)(a0) + 858); }

// sub_16a83d0  (orig 0x16a83d0, getter)
uint16_t main_f_16a83d0(void* a0) { return *(uint16_t*)((char*)(a0) + 860); }

// sub_16a8a00  (orig 0x16a8a00, ret_only)
void main_f_16a8a00() {}

// sub_16a9920  (orig 0x16a9920, ret_only)
void main_f_16a9920() {}

// sub_16a99f0  (orig 0x16a99f0, setter)
void main_f_16a99f0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_16a9a00  (orig 0x16a9a00, getter)
uint8_t main_f_16a9a00(void* a0) { return *(uint8_t*)((char*)(a0) + 44); }

// sub_16a9a10  (orig 0x16a9a10, getter)
uint8_t main_f_16a9a10(void* a0) { return *(uint8_t*)((char*)(a0) + 45); }

// sub_16aae40  (orig 0x16aae40, ret_only)
void main_f_16aae40() {}

// sub_16afc70  (orig 0x16afc70, setter)
void main_f_16afc70(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 72) = a1; }

// sub_16afc80  (orig 0x16afc80, setter)
void main_f_16afc80(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 80) = a1; }

// sub_16afc90  (orig 0x16afc90, setter)
void main_f_16afc90(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 96) = a1; }

// sub_16afca0  (orig 0x16afca0, ret_only)
void main_f_16afca0() {}

// sub_16afcb0  (orig 0x16afcb0, mov_ret)
uint32_t main_f_16afcb0() { return 24; }

// sub_16b0e80  (orig 0x16b0e80, ret_only)
void main_f_16b0e80() {}

// sub_16b1670  (orig 0x16b1670, ret_only)
void main_f_16b1670() {}

// sub_16b1780  (orig 0x16b1780, ret_only)
void main_f_16b1780() {}

// sub_16b3e70  (orig 0x16b3e70, mov_ret)
uint32_t main_f_16b3e70() { return 0; }

// sub_16b3e80  (orig 0x16b3e80, ret_only)
void main_f_16b3e80() {}

// sub_16b3e90  (orig 0x16b3e90, mov_ret)
uint32_t main_f_16b3e90() { return 20; }

// sub_16b5420  (orig 0x16b5420, ret_only)
void main_f_16b5420() {}

// sub_16b5780  (orig 0x16b5780, setter)
void main_f_16b5780(void* a0) { *(uint8_t*)((char*)(a0) + 100) = 0; }

// sub_16b5790  (orig 0x16b5790, ret_only)
void main_f_16b5790() {}

// sub_16b6da0  (orig 0x16b6da0, ret_only)
void main_f_16b6da0() {}

// sub_16b71a0  (orig 0x16b71a0, mov_ret)
uint32_t main_f_16b71a0() { return 0; }

// sub_16b7b90  (orig 0x16b7b90, ret_only)
void main_f_16b7b90() {}

// sub_16b8820  (orig 0x16b8820, ret_only)
void main_f_16b8820() {}

// sub_16bcc90  (orig 0x16bcc90, setter)
void main_f_16bcc90(void* a0) { *(uint32_t*)((char*)(a0) + 248) = 0; }

// sub_16bccc0  (orig 0x16bccc0, ret_only)
void main_f_16bccc0() {}

// sub_16bccd0  (orig 0x16bccd0, ret_only)
void main_f_16bccd0() {}

// sub_16bd4f0  (orig 0x16bd4f0, ret_only)
void main_f_16bd4f0() {}

// sub_16bd540  (orig 0x16bd540, ret_only)
void main_f_16bd540() {}

// sub_16bf6e0  (orig 0x16bf6e0, ret_only)
void main_f_16bf6e0() {}

// sub_16c0410  (orig 0x16c0410, ret_only)
void main_f_16c0410() {}

// sub_16c1b80  (orig 0x16c1b80, ret_only)
void main_f_16c1b80() {}

// sub_16c1b90  (orig 0x16c1b90, setter-chain)
void main_f_16c1b90(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint8_t*)((char*)(a0) + 8) = 0; }

// sub_16c1ba0  (orig 0x16c1ba0, ret_only)
void main_f_16c1ba0() {}

// sub_16c1c20  (orig 0x16c1c20, setter-chain)
void main_f_16c1c20(void* a0) { *(uint8_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0)) = 0; }

// sub_16c2830  (orig 0x16c2830, ret_only)
void main_f_16c2830() {}

// sub_16c2950  (orig 0x16c2950, mov_ret)
uint32_t main_f_16c2950() { return 28; }

// sub_16c2970  (orig 0x16c2970, mov_ret)
uint32_t main_f_16c2970() { return 16; }

// sub_16c2f80  (orig 0x16c2f80, ret_only)
void main_f_16c2f80() {}

// sub_16c3da0  (orig 0x16c3da0, ret_only)
void main_f_16c3da0() {}

// sub_16c48e0  (orig 0x16c48e0, getter)
uint32_t main_f_16c48e0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_16c4930  (orig 0x16c4930, getter)
uint32_t main_f_16c4930(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_16c4940  (orig 0x16c4940, getter)
uint8_t main_f_16c4940(void* a0) { return *(uint8_t*)((char*)(a0) + 24); }

// sub_16c4ba0  (orig 0x16c4ba0, getter)
uint32_t main_f_16c4ba0(void* a0) { return *(uint32_t*)((char*)(a0) + 564); }

// sub_16c4cb0  (orig 0x16c4cb0, ptr_add)
void* main_f_16c4cb0(void* a0) { return (char*)a0 + 672; }

// sub_16c4dc0  (orig 0x16c4dc0, ptr_add)
void* main_f_16c4dc0(void* a0) { return (char*)a0 + 1432; }

// sub_16c4e00  (orig 0x16c4e00, getter)
uint8_t main_f_16c4e00(void* a0) { return *(uint8_t*)((char*)(a0) + 568); }

// sub_16c4e20  (orig 0x16c4e20, getter)
uint8_t main_f_16c4e20(void* a0) { return *(uint8_t*)((char*)(a0) + 569); }

// sub_16c4e40  (orig 0x16c4e40, getter)
uint32_t main_f_16c4e40(void* a0) { return *(uint32_t*)((char*)(a0) + 572); }

// sub_16c4e60  (orig 0x16c4e60, getter)
uint32_t main_f_16c4e60(void* a0) { return *(uint32_t*)((char*)(a0) + 576); }

// sub_16c4e80  (orig 0x16c4e80, getter)
uint32_t main_f_16c4e80(void* a0) { return *(uint32_t*)((char*)(a0) + 580); }

// sub_16c4ea0  (orig 0x16c4ea0, getter)
uint8_t main_f_16c4ea0(void* a0) { return *(uint8_t*)((char*)(a0) + 584); }

// sub_16c4ec0  (orig 0x16c4ec0, ptr_add)
void* main_f_16c4ec0(void* a0) { return (char*)a0 + 592; }

// sub_16c4ee0  (orig 0x16c4ee0, ptr_add)
void* main_f_16c4ee0(void* a0) { return (char*)a0 + 632; }

// sub_16c5140  (orig 0x16c5140, getter)
uint16_t main_f_16c5140(void* a0) { return *(uint16_t*)((char*)(a0) + 664); }

// sub_16c5150  (orig 0x16c5150, getter)
uint32_t main_f_16c5150(void* a0) { return *(uint32_t*)((char*)(a0) + 668); }

// sub_16c5170  (orig 0x16c5170, getter)
uint32_t main_f_16c5170(void* a0) { return *(uint32_t*)((char*)(a0) + 832); }

// sub_16c5200  (orig 0x16c5200, ret_only)
void main_f_16c5200() {}

// sub_16c6880  (orig 0x16c6880, getter)
uint8_t main_f_16c6880(void* a0) { return *(uint8_t*)((char*)(a0) + 178); }

// sub_16c7e60  (orig 0x16c7e60, ret_only)
void main_f_16c7e60() {}

// sub_16c7e70  (orig 0x16c7e70, setter)
void main_f_16c7e70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 88) = a1; }

// sub_16c8350  (orig 0x16c8350, mov_ret)
uint32_t main_f_16c8350() { return 49152; }

// sub_16c8360  (orig 0x16c8360, mov_ret)
uint32_t main_f_16c8360() { return 65535; }

// sub_16c8410  (orig 0x16c8410, setter)
void main_f_16c8410(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 396) = a1; }

// sub_16c8420  (orig 0x16c8420, getter)
uint32_t main_f_16c8420(void* a0) { return *(uint32_t*)((char*)(a0) + 396); }

// sub_16c8c60  (orig 0x16c8c60, getter)
uint8_t main_f_16c8c60(void* a0) { return *(uint8_t*)((char*)(a0) + 528); }

// sub_16c8d00  (orig 0x16c8d00, setter)
void main_f_16c8d00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 552) = a1; }

// sub_16c8d10  (orig 0x16c8d10, setter)
void main_f_16c8d10(void* a0) { *(uint64_t*)((char*)(a0) + 552) = 0; }

// sub_16c9670  (orig 0x16c9670, ret_only)
void main_f_16c9670() {}

// sub_16c9680  (orig 0x16c9680, ret_only)
void main_f_16c9680() {}

// sub_16ca3c0  (orig 0x16ca3c0, ret_only)
void main_f_16ca3c0() {}

// sub_16ca5c0  (orig 0x16ca5c0, compare)
bool main_f_16ca5c0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 32)) == (uint64_t)(3); }

// sub_16ca650  (orig 0x16ca650, ptr_add)
void* main_f_16ca650(void* a0) { return (char*)a0 + 336; }

// sub_16ca660  (orig 0x16ca660, getter)
uint16_t main_f_16ca660(void* a0) { return *(uint16_t*)((char*)(a0) + 34); }

// sub_16ca670  (orig 0x16ca670, ptr_add)
void* main_f_16ca670(void* a0) { return (char*)a0 + 56; }

// sub_16ca680  (orig 0x16ca680, getter)
uint64_t main_f_16ca680(void* a0) { return *(uint64_t*)((char*)(a0) + 512); }

// sub_16ca690  (orig 0x16ca690, ptr_add)
void* main_f_16ca690(void* a0) { return (char*)a0 + 568; }

// sub_16ca720  (orig 0x16ca720, ret_only)
void main_f_16ca720() {}

// sub_16ca780  (orig 0x16ca780, ret_only)
void main_f_16ca780() {}

// sub_16cb980  (orig 0x16cb980, getter)
uint32_t main_f_16cb980(void* a0) { return *(uint32_t*)((char*)(a0) + 1480); }

// sub_16cb9a0  (orig 0x16cb9a0, ret_only)
void main_f_16cb9a0() {}

// sub_16cb9b0  (orig 0x16cb9b0, mov_ret)
uint32_t main_f_16cb9b0() { return 0; }

// sub_16cd590  (orig 0x16cd590, ret_only)
void main_f_16cd590() {}

// sub_16cdeb0  (orig 0x16cdeb0, ret_only)
void main_f_16cdeb0() {}

// sub_16ce1f0  (orig 0x16ce1f0, mov_ret)
uint32_t main_f_16ce1f0() { return 2000; }

// sub_16ce300  (orig 0x16ce300, compare)
bool main_f_16ce300(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1472)) != (uint64_t)(0); }

// sub_16ce310  (orig 0x16ce310, compare)
bool main_f_16ce310(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1472)) != (uint64_t)(0); }

// sub_16ce4f0  (orig 0x16ce4f0, ptr_add)
void* main_f_16ce4f0(void* a0) { return (char*)a0 + 1784; }

// sub_16ce500  (orig 0x16ce500, ptr_add)
void* main_f_16ce500(void* a0) { return (char*)a0 + 1912; }

// sub_16ce7c0  (orig 0x16ce7c0, mov_ret)
uint32_t main_f_16ce7c0() { return 2500; }

// sub_16d24a0  (orig 0x16d24a0, setter)
void main_f_16d24a0(void* a0) { *(uint64_t*)((char*)(a0) + 6064L) = 0; }

// sub_16d24b0  (orig 0x16d24b0, mov_ret)
uint32_t main_f_16d24b0() { return 0; }

// sub_16d2620  (orig 0x16d2620, mov_ret)
uint32_t main_f_16d2620() { return 52; }

// sub_16d28e0  (orig 0x16d28e0, mov_ret)
uint32_t main_f_16d28e0() { return 20; }

// sub_16d29e0  (orig 0x16d29e0, ret_only)
void main_f_16d29e0() {}

// sub_16d3430  (orig 0x16d3430, ptr_add)
void* main_f_16d3430(void* a0) { return (char*)a0 + 8; }

// sub_16d3460  (orig 0x16d3460, ptr_add)
void* main_f_16d3460(void* a0) { return (char*)a0 + 8; }

// sub_16d3490  (orig 0x16d3490, getter)
uint32_t main_f_16d3490(void* a0) { return *(uint32_t*)((char*)(a0) + 8376L); }

// sub_16d34d0  (orig 0x16d34d0, ret_only)
void main_f_16d34d0() {}

// sub_16d3800  (orig 0x16d3800, ptr_add)
void* main_f_16d3800(void* a0) { return (char*)a0 + 24; }

// sub_16d3810  (orig 0x16d3810, ptr_add)
void* main_f_16d3810(void* a0) { return (char*)a0 + 184; }

// sub_16d3820  (orig 0x16d3820, getter)
uint16_t main_f_16d3820(void* a0) { return *(uint16_t*)((char*)(a0) + 280); }

// sub_16d3830  (orig 0x16d3830, getter)
uint32_t main_f_16d3830(void* a0) { return *(uint32_t*)((char*)(a0) + 284); }

// sub_16d3840  (orig 0x16d3840, getter)
uint8_t main_f_16d3840(void* a0) { return *(uint8_t*)((char*)(a0) + 288); }

// sub_16d3850  (orig 0x16d3850, getter)
uint8_t main_f_16d3850(void* a0) { return *(uint8_t*)((char*)(a0) + 289); }

// sub_16d3860  (orig 0x16d3860, getter)
uint8_t main_f_16d3860(void* a0) { return *(uint8_t*)((char*)(a0) + 290); }

// sub_16d3b50  (orig 0x16d3b50, setter)
void main_f_16d3b50(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_16d4e00  (orig 0x16d4e00, ret_only)
void main_f_16d4e00() {}

// sub_16d4fc0  (orig 0x16d4fc0, ptr_add)
void* main_f_16d4fc0(void* a0) { return (char*)a0 + 88; }

// sub_16d5130  (orig 0x16d5130, setter)
void main_f_16d5130(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 128) = a1; }

// sub_16d5140  (orig 0x16d5140, getter)
uint32_t main_f_16d5140(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_16d5160  (orig 0x16d5160, ptr_add)
void* main_f_16d5160(void* a0) { return (char*)a0 + 132; }

// sub_16d5cd0  (orig 0x16d5cd0, ret_only)
void main_f_16d5cd0() {}

// sub_16d5ce0  (orig 0x16d5ce0, ret_only)
void main_f_16d5ce0() {}

// sub_16d5cf0  (orig 0x16d5cf0, ret_only)
void main_f_16d5cf0() {}

// sub_16d5d00  (orig 0x16d5d00, ret_only)
void main_f_16d5d00() {}

// sub_16d64e0  (orig 0x16d64e0, setter)
void main_f_16d64e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 600) = a1; }

// sub_16d6a30  (orig 0x16d6a30, ret_only)
void main_f_16d6a30() {}

// sub_16d6b70  (orig 0x16d6b70, mov_ret)
uint32_t main_f_16d6b70() { return 16; }

// sub_16d6b80  (orig 0x16d6b80, mov_ret)
uint32_t main_f_16d6b80() { return 28; }

// sub_16d6b90  (orig 0x16d6b90, mov_ret)
uint32_t main_f_16d6b90() { return 1364; }

// sub_16d6ba0  (orig 0x16d6ba0, mov_ret)
uint32_t main_f_16d6ba0() { return 576; }

// sub_16d6bb0  (orig 0x16d6bb0, mov_ret)
uint32_t main_f_16d6bb0() { return 500; }

// sub_16d6bd0  (orig 0x16d6bd0, mov_ret)
uint32_t main_f_16d6bd0() { return 1; }

// sub_16d6be0  (orig 0x16d6be0, mov_ret)
uint32_t main_f_16d6be0() { return 1; }

// sub_16d6bf0  (orig 0x16d6bf0, mov_ret)
uint32_t main_f_16d6bf0() { return 2; }

// sub_16d6c00  (orig 0x16d6c00, mov_ret)
uint32_t main_f_16d6c00() { return 1000; }

// sub_16d6c10  (orig 0x16d6c10, mov_ret)
uint32_t main_f_16d6c10() { return 100; }

// sub_16d6c20  (orig 0x16d6c20, mov_ret)
uint32_t main_f_16d6c20() { return 1; }

// sub_16d6c30  (orig 0x16d6c30, mov_ret)
uint32_t main_f_16d6c30() { return 1; }

// sub_16d6c40  (orig 0x16d6c40, mov_ret)
uint32_t main_f_16d6c40() { return 1; }

// sub_16d6c50  (orig 0x16d6c50, mov_ret)
uint32_t main_f_16d6c50() { return 1; }

// sub_16d6c60  (orig 0x16d6c60, mov_ret)
uint32_t main_f_16d6c60() { return 1; }

// sub_16d7ee0  (orig 0x16d7ee0, getter)
uint64_t main_f_16d7ee0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_16d7ef0  (orig 0x16d7ef0, getter)
uint64_t main_f_16d7ef0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_16d7f20  (orig 0x16d7f20, getter)
uint16_t main_f_16d7f20(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_16d7f30  (orig 0x16d7f30, getter)
uint16_t main_f_16d7f30(void* a0) { return *(uint16_t*)((char*)(a0) + 10); }

// sub_16d8270  (orig 0x16d8270, getter)
uint64_t main_f_16d8270(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_16d8280  (orig 0x16d8280, getter)
uint64_t main_f_16d8280(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_16d82b0  (orig 0x16d82b0, getter)
uint32_t main_f_16d82b0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_16d82c0  (orig 0x16d82c0, getter)
uint32_t main_f_16d82c0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_16d8420  (orig 0x16d8420, ret_only)
void main_f_16d8420() {}

// sub_16d8b80  (orig 0x16d8b80, ret_only)
void main_f_16d8b80() {}

// sub_16d8c50  (orig 0x16d8c50, getter)
uint32_t main_f_16d8c50(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_16d8c60  (orig 0x16d8c60, setter)
void main_f_16d8c60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 8) = a1; }

// sub_16d8c70  (orig 0x16d8c70, getter)
uint8_t main_f_16d8c70(void* a0) { return *(uint8_t*)((char*)(a0) + 12); }

// sub_16d8c90  (orig 0x16d8c90, getter)
uint8_t main_f_16d8c90(void* a0) { return *(uint8_t*)((char*)(a0) + 13); }

// sub_16d8cb0  (orig 0x16d8cb0, ptr_add)
void* main_f_16d8cb0(void* a0) { return (char*)a0 + 1640; }

// sub_16d8cc0  (orig 0x16d8cc0, straight)
void main_f_16d8cc0(void* a0, void* a1) {
    *(uint16_t*)((char*)(a0) + 1648) = *(uint16_t*)((char*)(a1) + 8);
    *(uint8_t*)((char*)(a0) + 1650) = *(uint8_t*)((char*)(a1) + 10);
    *(uint8_t*)((char*)(a0) + 1651) = *(uint8_t*)((char*)(a1) + 11);
    *(uint8_t*)((char*)(a0) + 1652) = *(uint8_t*)((char*)(a1) + 12);
    *(uint8_t*)((char*)(a0) + 1653) = *(uint8_t*)((char*)(a1) + 13);
    *(uint8_t*)((char*)(a0) + 1654) = *(uint8_t*)((char*)(a1) + 14);
    *(uint8_t*)((char*)(a0) + 1655) = *(uint8_t*)((char*)(a1) + 15);
}

// sub_16d8d00  (orig 0x16d8d00, ptr_add)
void* main_f_16d8d00(void* a0) { return (char*)a0 + 1656; }

// sub_16d8d10  (orig 0x16d8d10, straight)
void main_f_16d8d10(void* a0, void* a1) {
    *(uint16_t*)((char*)(a0) + 1664) = *(uint16_t*)((char*)(a1) + 8);
    *(uint8_t*)((char*)(a0) + 1666) = *(uint8_t*)((char*)(a1) + 10);
    *(uint8_t*)((char*)(a0) + 1667) = *(uint8_t*)((char*)(a1) + 11);
    *(uint8_t*)((char*)(a0) + 1668) = *(uint8_t*)((char*)(a1) + 12);
    *(uint8_t*)((char*)(a0) + 1669) = *(uint8_t*)((char*)(a1) + 13);
    *(uint8_t*)((char*)(a0) + 1670) = *(uint8_t*)((char*)(a1) + 14);
    *(uint8_t*)((char*)(a0) + 1671) = *(uint8_t*)((char*)(a1) + 15);
}

// sub_16d8d50  (orig 0x16d8d50, getter)
uint32_t main_f_16d8d50(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_16d8d60  (orig 0x16d8d60, setter)
void main_f_16d8d60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_16d8e00  (orig 0x16d8e00, getter)
uint64_t main_f_16d8e00(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_16d8e10  (orig 0x16d8e10, setter)
void main_f_16d8e10(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 48) = a1; }

// sub_16d8e20  (orig 0x16d8e20, getter)
uint16_t main_f_16d8e20(void* a0) { return *(uint16_t*)((char*)(a0) + 44); }

// sub_16d8e30  (orig 0x16d8e30, setter)
void main_f_16d8e30(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 44) = a1; }

// sub_16d8e40  (orig 0x16d8e40, getter)
uint16_t main_f_16d8e40(void* a0) { return *(uint16_t*)((char*)(a0) + 56); }

// sub_16d8e50  (orig 0x16d8e50, setter)
void main_f_16d8e50(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 56) = a1; }

// sub_16d8e60  (orig 0x16d8e60, getter)
uint16_t main_f_16d8e60(void* a0) { return *(uint16_t*)((char*)(a0) + 58); }

// sub_16d8e70  (orig 0x16d8e70, setter)
void main_f_16d8e70(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 58) = a1; }

// sub_16d8e80  (orig 0x16d8e80, ptr_add)
void* main_f_16d8e80(void* a0) { return (char*)a0 + 64; }

// sub_16d9130  (orig 0x16d9130, ret_only)
void main_f_16d9130() {}

// sub_16da8a0  (orig 0x16da8a0, getter)
uint64_t main_f_16da8a0(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_16da8b0  (orig 0x16da8b0, getter)
uint64_t main_f_16da8b0(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_16da970  (orig 0x16da970, ptr_add)
void* main_f_16da970(void* a0) { return (char*)a0 + 736; }

// sub_16da980  (orig 0x16da980, getter)
uint8_t main_f_16da980(void* a0) { return *(uint8_t*)((char*)(a0) + 712); }

// sub_16ee090  (orig 0x16ee090, getter)
uint8_t main_f_16ee090(void* a0) { return *(uint8_t*)((char*)(a0) + 1364); }

// sub_16ee0a0  (orig 0x16ee0a0, getter)
uint32_t main_f_16ee0a0(void* a0) { return *(uint32_t*)((char*)(a0) + 1360); }

// sub_16ee0b0  (orig 0x16ee0b0, getter)
uint8_t main_f_16ee0b0(void* a0) { return *(uint8_t*)((char*)(a0) + 1365); }

// sub_16ee0c0  (orig 0x16ee0c0, setter-chain)
void main_f_16ee0c0(void* a0, uint32_t a1, uint64_t a2) { *(uint32_t*)((char*)(a0) + 1368) = a1; *(uint64_t*)((char*)(a0) + 1376) = a2; }

// sub_16ee570  (orig 0x16ee570, getter)
uint8_t main_f_16ee570(void* a0) { return *(uint8_t*)((char*)(a0) + 720); }

// sub_16f00d0  (orig 0x16f00d0, ret_only)
void main_f_16f00d0() {}

// sub_16f1420  (orig 0x16f1420, ptr_add)
void* main_f_16f1420(void* a0) { return (char*)a0 + 16; }

// sub_16f1430  (orig 0x16f1430, ptr_add)
void* main_f_16f1430(void* a0) { return (char*)a0 + 16; }

// sub_16f1440  (orig 0x16f1440, ptr_add)
void* main_f_16f1440(void* a0) { return (char*)a0 + 32; }

// sub_16f14a0  (orig 0x16f14a0, ptr_add)
void* main_f_16f14a0(void* a0) { return (char*)a0 + 48; }

// sub_16f14b0  (orig 0x16f14b0, ptr_add)
void* main_f_16f14b0(void* a0) { return (char*)a0 + 1648; }

// sub_16f3350  (orig 0x16f3350, ret_only)
void main_f_16f3350() {}

// sub_16f61b0  (orig 0x16f61b0, setter-chain)
void main_f_16f61b0(void* a0) { *(uint64_t*)((char*)(a0) + 312) = 0; *(uint8_t*)((char*)(a0) + 364) = 0; }

// sub_16f61c0  (orig 0x16f61c0, ret_only)
void main_f_16f61c0() {}

// sub_16f6360  (orig 0x16f6360, ret_only)
void main_f_16f6360() {}

// sub_1705200  (orig 0x1705200, getter)
uint32_t main_f_1705200(void* a0) { return *(uint32_t*)((char*)(a0) + 560); }

// sub_1705210  (orig 0x1705210, ret_only)
void main_f_1705210() {}

// sub_1705ff0  (orig 0x1705ff0, mov_ret)
uint32_t main_f_1705ff0() { return 15000; }

// sub_1706070  (orig 0x1706070, ret_only)
void main_f_1706070() {}

// sub_17075c0  (orig 0x17075c0, ret_only)
void main_f_17075c0() {}

// sub_1707b60  (orig 0x1707b60, ret_only)
void main_f_1707b60() {}

// sub_1708b80  (orig 0x1708b80, ret_only)
void main_f_1708b80() {}

// sub_170b9c0  (orig 0x170b9c0, ret_only)
void main_f_170b9c0() {}

// sub_170bea0  (orig 0x170bea0, ret_only)
void main_f_170bea0() {}

// sub_170c420  (orig 0x170c420, ret_only)
void main_f_170c420() {}

// sub_170e800  (orig 0x170e800, ret_only)
void main_f_170e800() {}

// sub_170e810  (orig 0x170e810, getter)
uint64_t main_f_170e810(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_170e820  (orig 0x170e820, getter)
uint8_t main_f_170e820(void* a0) { return *(uint8_t*)((char*)(a0) + 20); }

// sub_170e830  (orig 0x170e830, ptr_add)
void* main_f_170e830(void* a0) { return (char*)a0 + 20; }

// sub_170e840  (orig 0x170e840, getter)
uint32_t main_f_170e840(void* a0) { return *(uint32_t*)((char*)(a0) + 420); }

// sub_170e850  (orig 0x170e850, getter)
uint64_t main_f_170e850(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_170fe30  (orig 0x170fe30, ret_only)
void main_f_170fe30() {}

// sub_17103b0  (orig 0x17103b0, ret_only)
void main_f_17103b0() {}

// sub_17110e0  (orig 0x17110e0, mov_ret)
uint32_t main_f_17110e0() { return 1; }

// sub_17110f0  (orig 0x17110f0, mov_ret)
uint32_t main_f_17110f0() { return 1; }

// sub_1711100  (orig 0x1711100, mov_ret)
uint32_t main_f_1711100() { return 1; }

// sub_1711110  (orig 0x1711110, mov_ret)
uint32_t main_f_1711110() { return 1; }

// sub_1711120  (orig 0x1711120, mov_ret)
uint32_t main_f_1711120() { return 0; }

// sub_1711130  (orig 0x1711130, mov_ret)
uint32_t main_f_1711130() { return 0; }

// sub_17113d0  (orig 0x17113d0, mov_ret)
uint32_t main_f_17113d0() { return 0; }

// sub_1713880  (orig 0x1713880, ret_only)
void main_f_1713880() {}

// sub_1713a20  (orig 0x1713a20, ret_only)
void main_f_1713a20() {}

// sub_1713bb0  (orig 0x1713bb0, getter)
uint32_t main_f_1713bb0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1713bc0  (orig 0x1713bc0, getter)
uint32_t main_f_1713bc0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_1713bd0  (orig 0x1713bd0, getter)
uint16_t main_f_1713bd0(void* a0) { return *(uint16_t*)((char*)(a0) + 16); }

// sub_1713be0  (orig 0x1713be0, getter)
uint16_t main_f_1713be0(void* a0) { return *(uint16_t*)((char*)(a0) + 18); }

// sub_1713bf0  (orig 0x1713bf0, getter)
uint16_t main_f_1713bf0(void* a0) { return *(uint16_t*)((char*)(a0) + 20); }

// sub_1713c00  (orig 0x1713c00, getter)
uint8_t main_f_1713c00(void* a0) { return *(uint8_t*)((char*)(a0) + 22); }

// sub_1713c10  (orig 0x1713c10, setter)
void main_f_1713c10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 8) = a1; }

// sub_1713c20  (orig 0x1713c20, setter)
void main_f_1713c20(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; }

// sub_1713c30  (orig 0x1713c30, setter)
void main_f_1713c30(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 616) = a1; }

// sub_1713c40  (orig 0x1713c40, setter)
void main_f_1713c40(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 16) = a1; }

// sub_1713c50  (orig 0x1713c50, setter)
void main_f_1713c50(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 18) = a1; }

// sub_1713c60  (orig 0x1713c60, setter)
void main_f_1713c60(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 20) = a1; }

// sub_1713db0  (orig 0x1713db0, getter)
uint32_t main_f_1713db0(void* a0) { return *(uint32_t*)((char*)(a0) + 560); }

// sub_1713df0  (orig 0x1713df0, setter)
void main_f_1713df0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 576) = a1; }

// sub_1713e00  (orig 0x1713e00, setter)
void main_f_1713e00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 584) = a1; }

// sub_1713e10  (orig 0x1713e10, setter)
void main_f_1713e10(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 592) = a1; }

// sub_1713e20  (orig 0x1713e20, straight)
void main_f_1713e20(void* a0, void* a1) {
    *(uint16_t*)((char*)(a0) + 608) = *(uint16_t*)((char*)(a1) + 8);
    *(uint8_t*)((char*)(a0) + 610) = *(uint8_t*)((char*)(a1) + 10);
    *(uint8_t*)((char*)(a0) + 611) = *(uint8_t*)((char*)(a1) + 11);
    *(uint8_t*)((char*)(a0) + 612) = *(uint8_t*)((char*)(a1) + 12);
    *(uint8_t*)((char*)(a0) + 613) = *(uint8_t*)((char*)(a1) + 13);
    *(uint8_t*)((char*)(a0) + 614) = *(uint8_t*)((char*)(a1) + 14);
    *(uint8_t*)((char*)(a0) + 615) = *(uint8_t*)((char*)(a1) + 15);
}

// sub_1713e60  (orig 0x1713e60, mov_ret)
uint32_t main_f_1713e60() { return 1; }

// sub_1713e70  (orig 0x1713e70, ret_only)
void main_f_1713e70() {}

// sub_17159b0  (orig 0x17159b0, ret_only)
void main_f_17159b0() {}

// sub_17159c0  (orig 0x17159c0, getter)
uint64_t main_f_17159c0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_17159d0  (orig 0x17159d0, ptr_add)
void* main_f_17159d0(void* a0) { return (char*)a0 + 24; }

// sub_17159e0  (orig 0x17159e0, getter)
uint32_t main_f_17159e0(void* a0) { return *(uint32_t*)((char*)(a0) + 2424); }

// sub_17159f0  (orig 0x17159f0, getter)
uint8_t main_f_17159f0(void* a0) { return *(uint8_t*)((char*)(a0) + 2429); }

// sub_1715a00  (orig 0x1715a00, getter)
uint8_t main_f_1715a00(void* a0) { return *(uint8_t*)((char*)(a0) + 2430); }

// sub_1715a10  (orig 0x1715a10, getter)
uint8_t main_f_1715a10(void* a0) { return *(uint8_t*)((char*)(a0) + 2431); }

// sub_1715a20  (orig 0x1715a20, ptr_add)
void* main_f_1715a20(void* a0) { return (char*)a0 + 20; }

// sub_1715a30  (orig 0x1715a30, getter)
uint32_t main_f_1715a30(void* a0) { return *(uint32_t*)((char*)(a0) + 420); }

// sub_1715a40  (orig 0x1715a40, getter)
uint32_t main_f_1715a40(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1715a50  (orig 0x1715a50, getter)
uint16_t main_f_1715a50(void* a0) { return *(uint16_t*)((char*)(a0) + 12); }

// sub_1715a60  (orig 0x1715a60, getter)
uint16_t main_f_1715a60(void* a0) { return *(uint16_t*)((char*)(a0) + 14); }

// sub_1715a90  (orig 0x1715a90, ptr_add)
void* main_f_1715a90(void* a0) { return (char*)a0 + 1616; }

// sub_1715ab0  (orig 0x1715ab0, ptr_add)
void* main_f_1715ab0(void* a0) { return (char*)a0 + 560; }

// sub_1715c80  (orig 0x1715c80, mov_ret)
uint32_t main_f_1715c80() { return 1; }

// sub_1715c90  (orig 0x1715c90, ptr_add)
void* main_f_1715c90(void* a0) { return (char*)a0 + 1776; }

// sub_1715ca0  (orig 0x1715ca0, ptr_add)
void* main_f_1715ca0(void* a0) { return (char*)a0 + 1792; }

// sub_1715cb0  (orig 0x1715cb0, getter)
uint16_t main_f_1715cb0(void* a0) { return *(uint16_t*)((char*)(a0) + 12); }

// sub_1715cc0  (orig 0x1715cc0, getter)
uint16_t main_f_1715cc0(void* a0) { return *(uint16_t*)((char*)(a0) + 14); }

// sub_1715cd0  (orig 0x1715cd0, getter)
uint32_t main_f_1715cd0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1715ce0  (orig 0x1715ce0, getter)
uint8_t main_f_1715ce0(void* a0) { return *(uint8_t*)((char*)(a0) + 20); }

// sub_1715cf0  (orig 0x1715cf0, indexed-getter)
uint8_t main_f_1715cf0(void* a0, uint32_t a1) { return *(uint8_t *)(((char *)a0 + a1 * 1 + 48)); }

// sub_1715d20  (orig 0x1715d20, ptr_add)
void* main_f_1715d20(void* a0) { return (char*)a0 + 576; }

// sub_1715d30  (orig 0x1715d30, ptr_add)
void* main_f_1715d30(void* a0) { return (char*)a0 + 736; }

// sub_1715d40  (orig 0x1715d40, getter)
uint8_t main_f_1715d40(void* a0) { return *(uint8_t*)((char*)(a0) + 572); }

// sub_1715d50  (orig 0x1715d50, getter)
uint32_t main_f_1715d50(void* a0) { return *(uint32_t*)((char*)(a0) + 912); }

// sub_1715d60  (orig 0x1715d60, getter)
uint8_t main_f_1715d60(void* a0) { return *(uint8_t*)((char*)(a0) + 916); }

// sub_1715d70  (orig 0x1715d70, getter)
uint32_t main_f_1715d70(void* a0) { return *(uint32_t*)((char*)(a0) + 920); }

// sub_1715d80  (orig 0x1715d80, getter)
uint8_t main_f_1715d80(void* a0) { return *(uint8_t*)((char*)(a0) + 924); }

// sub_1715d90  (orig 0x1715d90, getter)
uint32_t main_f_1715d90(void* a0) { return *(uint32_t*)((char*)(a0) + 928); }

// sub_1715da0  (orig 0x1715da0, getter)
uint8_t main_f_1715da0(void* a0) { return *(uint8_t*)((char*)(a0) + 932); }

// sub_1715db0  (orig 0x1715db0, ptr_add)
void* main_f_1715db0(void* a0) { return (char*)a0 + 936; }

// sub_1715dc0  (orig 0x1715dc0, getter)
uint8_t main_f_1715dc0(void* a0) { return *(uint8_t*)((char*)(a0) + 976); }

// sub_1715dd0  (orig 0x1715dd0, getter)
uint8_t main_f_1715dd0(void* a0) { return *(uint8_t*)((char*)(a0) + 977); }

// sub_17162c0  (orig 0x17162c0, ptr_add)
void* main_f_17162c0(void* a0) { return (char*)a0 + 896; }

// sub_1718400  (orig 0x1718400, getter)
uint64_t main_f_1718400(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_1718420  (orig 0x1718420, getter)
uint64_t main_f_1718420(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_1718f90  (orig 0x1718f90, compare)
bool main_f_1718f90(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 256)) == (uint64_t)(0); }

// sub_1718fa0  (orig 0x1718fa0, mov_ret)
uint32_t main_f_1718fa0() { return 1; }

// sub_1718fb0  (orig 0x1718fb0, mov_ret)
uint32_t main_f_1718fb0() { return 1; }

// sub_1718fc0  (orig 0x1718fc0, mov_ret)
uint32_t main_f_1718fc0() { return 1; }

// sub_1719140  (orig 0x1719140, setter)
void main_f_1719140(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 212) = a1; }

// sub_1719150  (orig 0x1719150, getter)
uint32_t main_f_1719150(void* a0) { return *(uint32_t*)((char*)(a0) + 212); }

// sub_17191f0  (orig 0x17191f0, compare)
bool main_f_17191f0(uint64_t a0, uint64_t a1) { return (uint64_t)(a0) == (uint64_t)(a1); }

// sub_171a7d0  (orig 0x171a7d0, mov_ret)
uint64_t main_f_171a7d0() { return 0; }

// sub_171a7e0  (orig 0x171a7e0, ret_only)
void main_f_171a7e0() {}

// sub_171a9b0  (orig 0x171a9b0, ret_only)
void main_f_171a9b0() {}

// sub_171aea0  (orig 0x171aea0, setter)
void main_f_171aea0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_171b240  (orig 0x171b240, ret_only)
void main_f_171b240() {}

// sub_171b250  (orig 0x171b250, copy2)
void main_f_171b250(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1) + 8); }

// sub_171b260  (orig 0x171b260, copy2)
void main_f_171b260(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1) + 8); }

// sub_171b5a0  (orig 0x171b5a0, ret_only)
void main_f_171b5a0() {}

// sub_171e250  (orig 0x171e250, ret_only)
void main_f_171e250() {}

// sub_17209c0  (orig 0x17209c0, ret_only)
void main_f_17209c0() {}

// sub_1721160  (orig 0x1721160, ptr_add)
void* main_f_1721160(void* a0) { return (char*)a0 + 48; }

// sub_1721180  (orig 0x1721180, getter)
uint32_t main_f_1721180(void* a0) { return *(uint32_t*)((char*)(a0) + 184); }

// sub_1721190  (orig 0x1721190, getter)
uint32_t main_f_1721190(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_1721210  (orig 0x1721210, mov_ret)
uint32_t main_f_1721210() { return 0; }

// sub_1721740  (orig 0x1721740, setter)
void main_f_1721740(void* a0) { *(uint64_t*)((char*)(a0) + 72) = 0; }

// sub_1721750  (orig 0x1721750, ret_only)
void main_f_1721750() {}

// sub_1721e60  (orig 0x1721e60, getter)
uint64_t main_f_1721e60(void* a0) { return *(uint64_t*)((char*)(a0) + 224); }

// sub_1721e90  (orig 0x1721e90, getter)
uint32_t main_f_1721e90(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_17222e0  (orig 0x17222e0, ret_only)
void main_f_17222e0() {}

// sub_17222f0  (orig 0x17222f0, ret_only)
void main_f_17222f0() {}

// sub_1722300  (orig 0x1722300, ret_only)
void main_f_1722300() {}

// sub_1722310  (orig 0x1722310, ret_only)
void main_f_1722310() {}

// sub_1722320  (orig 0x1722320, ret_only)
void main_f_1722320() {}

// sub_1722330  (orig 0x1722330, ret_only)
void main_f_1722330() {}

// sub_1722830  (orig 0x1722830, ret_only)
void main_f_1722830() {}

// sub_1722860  (orig 0x1722860, ret_only)
void main_f_1722860() {}

// sub_1722870  (orig 0x1722870, getter)
uint64_t main_f_1722870(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1722880  (orig 0x1722880, setter)
void main_f_1722880(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1722890  (orig 0x1722890, getter)
uint8_t main_f_1722890(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_17228b0  (orig 0x17228b0, mov_ret)
uint64_t main_f_17228b0() { return 0; }

// sub_17228c0  (orig 0x17228c0, mov_ret)
uint32_t main_f_17228c0() { return 0; }

// sub_17228d0  (orig 0x17228d0, mov_ret)
uint64_t main_f_17228d0() { return 0; }

// sub_1722940  (orig 0x1722940, mov_ret)
uint32_t main_f_1722940() { return 0; }

// sub_1722950  (orig 0x1722950, ret_only)
void main_f_1722950() {}

// sub_1722970  (orig 0x1722970, ret_only)
void main_f_1722970() {}

// sub_17232e0  (orig 0x17232e0, ret_only)
void main_f_17232e0() {}

// sub_1723350  (orig 0x1723350, getter)
uint16_t main_f_1723350(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_1723360  (orig 0x1723360, getter)
uint8_t main_f_1723360(void* a0) { return *(uint8_t*)((char*)(a0) + 10); }

// sub_1723380  (orig 0x1723380, getter)
uint16_t main_f_1723380(void* a0) { return *(uint16_t*)((char*)(a0) + 12); }

// sub_1723390  (orig 0x1723390, getter)
uint8_t main_f_1723390(void* a0) { return *(uint8_t*)((char*)(a0) + 14); }

// sub_17233a0  (orig 0x17233a0, straight)
void main_f_17233a0(void* a0, void* a1) {
    *(uint16_t*)((char*)(a0) + 8) = *(uint16_t*)((char*)(a1) + 8);
    *(uint8_t*)((char*)(a0) + 10) = *(uint8_t*)((char*)(a1) + 10);
    *(uint16_t*)((char*)(a0) + 12) = *(uint16_t*)((char*)(a1) + 12);
    *(uint8_t*)((char*)(a0) + 14) = *(uint8_t*)((char*)(a1) + 14);
}

// sub_17233d0  (orig 0x17233d0, setter-chain)
void main_f_17233d0(void* a0) { *(uint16_t*)((char*)(a0) + 8) = 0; *(uint8_t*)((char*)(a0) + 10) = 0; *(uint16_t*)((char*)(a0) + 12) = 0; *(uint8_t*)((char*)(a0) + 14) = 0; }

// sub_17233f0  (orig 0x17233f0, ret_only)
void main_f_17233f0() {}

// sub_1723ae0  (orig 0x1723ae0, ret_only)
void main_f_1723ae0() {}

// sub_1724d50  (orig 0x1724d50, ret_only)
void main_f_1724d50() {}

// sub_1724e30  (orig 0x1724e30, ret_only)
void main_f_1724e30() {}

// sub_1724e80  (orig 0x1724e80, setter)
void main_f_1724e80(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1724e90  (orig 0x1724e90, getter)
uint64_t main_f_1724e90(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1724ea0  (orig 0x1724ea0, setter)
void main_f_1724ea0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 16) = a1; }

// sub_1724ee0  (orig 0x1724ee0, setter)
void main_f_1724ee0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 20) = a1; }

// sub_1724f10  (orig 0x1724f10, setter-chain)
void main_f_1724f10(void* a0) { *(uint32_t*)((char*)(a0) + 16) = 0; *(uint16_t*)((char*)(a0) + 20) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_1726380  (orig 0x1726380, ret_only)
void main_f_1726380() {}

// sub_1727320  (orig 0x1727320, ret_only)
void main_f_1727320() {}

// sub_17273a0  (orig 0x17273a0, ret_only)
void main_f_17273a0() {}

// sub_17278f0  (orig 0x17278f0, ret_only)
void main_f_17278f0() {}

// sub_1727990  (orig 0x1727990, ret_only)
void main_f_1727990() {}

// sub_17279b0  (orig 0x17279b0, mov_ret)
uint32_t main_f_17279b0() { return 0; }

// sub_17279c0  (orig 0x17279c0, mov_ret)
uint32_t main_f_17279c0() { return 0; }

// sub_1729240  (orig 0x1729240, ret_only)
void main_f_1729240() {}

// sub_1729320  (orig 0x1729320, ret_only)
void main_f_1729320() {}

// sub_1729330  (orig 0x1729330, ret_only)
void main_f_1729330() {}

// sub_172ade0  (orig 0x172ade0, compare)
bool main_f_172ade0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 272)) == (uint64_t)(1); }

// sub_172be60  (orig 0x172be60, getter)
uint32_t main_f_172be60(void* a0) { return *(uint32_t*)((char*)(a0) + 424); }

// sub_172be70  (orig 0x172be70, getter)
uint32_t main_f_172be70(void* a0) { return *(uint32_t*)((char*)(a0) + 424); }

// sub_172be80  (orig 0x172be80, getter)
uint16_t main_f_172be80(void* a0) { return *(uint16_t*)((char*)(a0) + 520); }

// sub_172c3d0  (orig 0x172c3d0, getter)
uint8_t main_f_172c3d0(void* a0) { return *(uint8_t*)((char*)(a0) + 349); }

// sub_172ca20  (orig 0x172ca20, setter)
void main_f_172ca20(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 176) = a1; }

// sub_172ca30  (orig 0x172ca30, setter)
void main_f_172ca30(void* a0) { *(uint64_t*)((char*)(a0) + 176) = 0; }

// sub_172ca60  (orig 0x172ca60, getter)
uint64_t main_f_172ca60(void* a0) { return *(uint64_t*)((char*)(a0) + 328); }

// sub_172ca70  (orig 0x172ca70, strlit-ret)
const char *main_f_172ca70() { static char g_f_172ca70[1]; __asm__ volatile("" ::: "memory"); return g_f_172ca70; }

// sub_172d090  (orig 0x172d090, ptr_add)
void* main_f_172d090(void* a0) { return (char*)a0 + 485; }

// sub_172eaf0  (orig 0x172eaf0, ret_only)
void main_f_172eaf0() {}

// sub_1730830  (orig 0x1730830, ret_only)
void main_f_1730830() {}

// sub_17311c0  (orig 0x17311c0, ret_only)
void main_f_17311c0() {}

// sub_17312b0  (orig 0x17312b0, ret_only)
void main_f_17312b0() {}

// sub_1731430  (orig 0x1731430, ret_only)
void main_f_1731430() {}

// sub_17315b0  (orig 0x17315b0, ret_only)
void main_f_17315b0() {}

// sub_17315c0  (orig 0x17315c0, getter)
uint32_t main_f_17315c0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_17315d0  (orig 0x17315d0, getter)
uint32_t main_f_17315d0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_17315e0  (orig 0x17315e0, getter)
uint32_t main_f_17315e0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1731640  (orig 0x1731640, mov_ret)
uint64_t main_f_1731640() { return 0; }

// sub_1731650  (orig 0x1731650, mov_ret)
uint64_t main_f_1731650() { return 0; }

// sub_1731660  (orig 0x1731660, mov_ret)
uint64_t main_f_1731660() { return 0; }

// sub_1731670  (orig 0x1731670, ret_only)
void main_f_1731670() {}

// sub_1731680  (orig 0x1731680, ret_only)
void main_f_1731680() {}

// sub_1731690  (orig 0x1731690, ret_only)
void main_f_1731690() {}

// sub_17316a0  (orig 0x17316a0, mov_ret)
uint64_t main_f_17316a0() { return 0; }

// sub_17316b0  (orig 0x17316b0, ret_only)
void main_f_17316b0() {}

// sub_17316c0  (orig 0x17316c0, mov_ret)
uint64_t main_f_17316c0() { return 0; }

// sub_17316d0  (orig 0x17316d0, ret_only)
void main_f_17316d0() {}

// sub_1733cf0  (orig 0x1733cf0, ret_only)
void main_f_1733cf0() {}

// sub_1733d00  (orig 0x1733d00, mov_ret)
uint32_t main_f_1733d00() { return 148; }

// sub_1733d50  (orig 0x1733d50, straight)
void main_f_1733d50(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0) + 16) = *(uint32_t*)((char*)(a1) + 16);
    *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 12) = *(uint32_t*)((char*)(a1) + 12);
}

// sub_1733de0  (orig 0x1733de0, getter)
uint32_t main_f_1733de0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1733df0  (orig 0x1733df0, getter)
uint32_t main_f_1733df0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1733e00  (orig 0x1733e00, getter)
uint32_t main_f_1733e00(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_1733e10  (orig 0x1733e10, ret_only)
void main_f_1733e10() {}

// sub_1733e60  (orig 0x1733e60, setter)
void main_f_1733e60(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_1733e70  (orig 0x1733e70, setter)
void main_f_1733e70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 8) = a1; }

// sub_1733e80  (orig 0x1733e80, getter)
uint32_t main_f_1733e80(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1734af0  (orig 0x1734af0, ret_only)
void main_f_1734af0() {}

// sub_1735d40  (orig 0x1735d40, ret_only)
void main_f_1735d40() {}

// sub_1735d70  (orig 0x1735d70, setter)
void main_f_1735d70(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_1735d80  (orig 0x1735d80, getter)
uint32_t main_f_1735d80(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1735dc0  (orig 0x1735dc0, ret_only)
void main_f_1735dc0() {}

// sub_1735dd0  (orig 0x1735dd0, ret_only)
void main_f_1735dd0() {}

// sub_17360b0  (orig 0x17360b0, ret_only)
void main_f_17360b0() {}

// sub_17360c0  (orig 0x17360c0, getter)
uint32_t main_f_17360c0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_17360d0  (orig 0x17360d0, getter)
uint16_t main_f_17360d0(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_17360e0  (orig 0x17360e0, getter)
uint16_t main_f_17360e0(void* a0) { return *(uint16_t*)((char*)(a0) + 10); }

// sub_17368a0  (orig 0x17368a0, setter)
void main_f_17368a0(void* a0) { *(uint64_t*)((char*)(a0) + 96) = 0; }

// sub_1737e50  (orig 0x1737e50, ret_only)
void main_f_1737e50() {}

// sub_1737e70  (orig 0x1737e70, mov_ret)
uint32_t main_f_1737e70() { return 16; }

// sub_1737e80  (orig 0x1737e80, mov_ret)
uint32_t main_f_1737e80() { return 84; }

// sub_1738dd0  (orig 0x1738dd0, mov_ret)
uint32_t main_f_1738dd0() { return 128; }

// sub_1739760  (orig 0x1739760, mov_ret)
uint64_t main_f_1739760() { return 0; }

// sub_17399e0  (orig 0x17399e0, straight)
void main_f_17399e0(void* a0) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(1);
}

// sub_17399f0  (orig 0x17399f0, ret_only)
void main_f_17399f0() {}

// sub_1739ab0  (orig 0x1739ab0, ret_only)
void main_f_1739ab0() {}

// sub_1739ce0  (orig 0x1739ce0, ret_only)
void main_f_1739ce0() {}

// sub_1739e30  (orig 0x1739e30, ret_only)
void main_f_1739e30() {}

// sub_173a700  (orig 0x173a700, ret_only)
void main_f_173a700() {}

// sub_173ad90  (orig 0x173ad90, getter)
uint32_t main_f_173ad90(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1) + 1512); }

// sub_173ada0  (orig 0x173ada0, mov_ret)
uint32_t main_f_173ada0() { return 1; }

// sub_173adb0  (orig 0x173adb0, mov_ret)
uint32_t main_f_173adb0() { return 1; }

// sub_173afb0  (orig 0x173afb0, ret_only)
void main_f_173afb0() {}

// sub_173b0c0  (orig 0x173b0c0, ret_only)
void main_f_173b0c0() {}

// sub_173b2f0  (orig 0x173b2f0, ret_only)
void main_f_173b2f0() {}

// sub_173bb30  (orig 0x173bb30, ret_only)
void main_f_173bb30() {}

// sub_173c350  (orig 0x173c350, ret_only)
void main_f_173c350() {}

// sub_173ce90  (orig 0x173ce90, ret_only)
void main_f_173ce90() {}

// sub_173cfc0  (orig 0x173cfc0, setter)
void main_f_173cfc0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_173d030  (orig 0x173d030, ret_only)
void main_f_173d030() {}

// sub_173d2d0  (orig 0x173d2d0, mov_ret)
uint32_t main_f_173d2d0() { return 1; }

// sub_173d2e0  (orig 0x173d2e0, ret_only)
void main_f_173d2e0() {}

// sub_173e230  (orig 0x173e230, ret_only)
void main_f_173e230() {}

// sub_173e5e0  (orig 0x173e5e0, getter)
uint64_t main_f_173e5e0(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_173e7c0  (orig 0x173e7c0, ret_only)
void main_f_173e7c0() {}

// sub_173eb40  (orig 0x173eb40, ret_only)
void main_f_173eb40() {}

// sub_173eb50  (orig 0x173eb50, setter)
void main_f_173eb50(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 2992) = a1; }

// sub_1741960  (orig 0x1741960, ret_only)
void main_f_1741960() {}

// sub_1742610  (orig 0x1742610, mov_ret)
uint32_t main_f_1742610() { return 132; }

// sub_1742620  (orig 0x1742620, mov_ret)
uint32_t main_f_1742620() { return 20; }

// sub_1743940  (orig 0x1743940, ret_only)
void main_f_1743940() {}

// sub_1743950  (orig 0x1743950, mov_ret)
uint32_t main_f_1743950() { return 124; }

// sub_1746cb0  (orig 0x1746cb0, mov_ret)
uint32_t main_f_1746cb0() { return 0; }

// sub_17474f0  (orig 0x17474f0, mov_ret)
uint32_t main_f_17474f0() { return 0; }

// sub_1747500  (orig 0x1747500, ret_only)
void main_f_1747500() {}

// sub_1747b90  (orig 0x1747b90, getter)
uint64_t main_f_1747b90(void* a0) { return *(uint64_t*)((char*)(a0) + 816); }

// sub_1747bb0  (orig 0x1747bb0, mov_ret)
uint32_t main_f_1747bb0() { return 608; }

// sub_1748970  (orig 0x1748970, ret_only)
void main_f_1748970() {}

// sub_1748980  (orig 0x1748980, mov_ret)
uint32_t main_f_1748980() { return 88; }

// sub_1748aa0  (orig 0x1748aa0, mov_ret)
uint32_t main_f_1748aa0() { return 16; }

// sub_1748ae0  (orig 0x1748ae0, ret_only)
void main_f_1748ae0() {}

// sub_1748d10  (orig 0x1748d10, straight)
void main_f_1748d10(void* a0) {
    *(uint64_t*)((char*)(a0) + 8) = -1;
}

// sub_1748e60  (orig 0x1748e60, straight)
void main_f_1748e60(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 24) = (uint8_t)(1);
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a1));
}

// sub_1749050  (orig 0x1749050, ret_only)
void main_f_1749050() {}

// sub_17490e0  (orig 0x17490e0, ret_only)
void main_f_17490e0() {}

// sub_1749260  (orig 0x1749260, ret_only)
void main_f_1749260() {}

// sub_17493f0  (orig 0x17493f0, setter-chain)
void main_f_17493f0(void* a0) { *(uint8_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 80) = 0; }

// sub_1749400  (orig 0x1749400, setter-chain)
void main_f_1749400(void* a0, uint64_t a1, uint8_t a2) { *(uint64_t*)((char*)(a0) + 64) = a1; *(uint8_t*)((char*)(a0) + 56) = a2; }

// sub_1749810  (orig 0x1749810, ret_only)
void main_f_1749810() {}

// sub_1749cd0  (orig 0x1749cd0, ptr_add)
void* main_f_1749cd0(void* a0) { return (char*)a0 + 8; }

// sub_1749ce0  (orig 0x1749ce0, ptr_add)
void* main_f_1749ce0(void* a0) { return (char*)a0 + 40; }

// sub_1749d80  (orig 0x1749d80, getter)
uint64_t main_f_1749d80(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_1749d90  (orig 0x1749d90, getter)
uint32_t main_f_1749d90(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_1749da0  (orig 0x1749da0, getter)
uint32_t main_f_1749da0(void* a0) { return *(uint32_t*)((char*)(a0) + 116); }

// sub_1749db0  (orig 0x1749db0, getter)
uint8_t main_f_1749db0(void* a0) { return *(uint8_t*)((char*)(a0) + 121); }

// sub_1749e40  (orig 0x1749e40, ptr_add)
void* main_f_1749e40(void* a0) { return (char*)a0 + 72; }

// sub_1749e50  (orig 0x1749e50, ptr_add)
void* main_f_1749e50(void* a0) { return (char*)a0 + 72; }

// sub_1749e80  (orig 0x1749e80, compare)
bool main_f_1749e80(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) == (uint64_t)(*(uint64_t*)((char*)(a1) + 104)); }

// sub_1749ea0  (orig 0x1749ea0, compare)
bool main_f_1749ea0(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 116)) == (uint32_t)(*(uint32_t*)((char*)(a1) + 116)); }

// sub_1749ec0  (orig 0x1749ec0, compare)
bool main_f_1749ec0(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 112)) == (uint32_t)(*(uint32_t*)((char*)(a1) + 112)); }

// sub_1749ee0  (orig 0x1749ee0, compare)
bool main_f_1749ee0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 122)) == (uint64_t)(1); }

// sub_1749ef0  (orig 0x1749ef0, compare)
bool main_f_1749ef0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 123)) == (uint64_t)(1); }

// sub_1749f30  (orig 0x1749f30, setter)
void main_f_1749f30(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 104) = a1; }

// sub_1749f40  (orig 0x1749f40, setter)
void main_f_1749f40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 112) = a1; }

// sub_1749f50  (orig 0x1749f50, setter)
void main_f_1749f50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 116) = a1; }

// sub_1749fa0  (orig 0x1749fa0, setter)
void main_f_1749fa0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 121) = a1; }

// sub_174a450  (orig 0x174a450, ret_only)
void main_f_174a450() {}

// sub_174a590  (orig 0x174a590, ret_only)
void main_f_174a590() {}

// sub_174ac10  (orig 0x174ac10, ret_only)
void main_f_174ac10() {}

// sub_174b0e0  (orig 0x174b0e0, getter)
uint32_t main_f_174b0e0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_174b170  (orig 0x174b170, ret_only)
void main_f_174b170() {}

// sub_174b590  (orig 0x174b590, ret_only)
void main_f_174b590() {}

// sub_174b9a0  (orig 0x174b9a0, ret_only)
void main_f_174b9a0() {}

// sub_174be00  (orig 0x174be00, setter)
void main_f_174be00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 80) = a1; }

// sub_174be10  (orig 0x174be10, setter)
void main_f_174be10(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 72) = a1; }

// sub_174dbc0  (orig 0x174dbc0, getter-chain)
uint32_t main_f_174dbc0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 96))) + 4076); }

// sub_174de50  (orig 0x174de50, getter)
uint64_t main_f_174de50(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_174de60  (orig 0x174de60, getter)
uint64_t main_f_174de60(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_174e330  (orig 0x174e330, getter)
uint64_t main_f_174e330(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_174e340  (orig 0x174e340, getter)
uint64_t main_f_174e340(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_174e350  (orig 0x174e350, getter)
uint64_t main_f_174e350(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_174e490  (orig 0x174e490, ret_only)
void main_f_174e490() {}

// sub_174e620  (orig 0x174e620, mov_ret)
uint32_t main_f_174e620() { return 164; }

// sub_174ea90  (orig 0x174ea90, ret_only)
void main_f_174ea90() {}

// sub_174ed30  (orig 0x174ed30, ret_only)
void main_f_174ed30() {}

// sub_1755000  (orig 0x1755000, setter)
void main_f_1755000(uint64_t unused0, void* a1) { *(uint64_t*)((char*)(a1) + 2936) = 0; }

// sub_1755010  (orig 0x1755010, mov_ret)
uint32_t main_f_1755010() { return 0; }

// sub_1755020  (orig 0x1755020, ret_only)
void main_f_1755020() {}

// sub_1755030  (orig 0x1755030, mov_ret)
uint32_t main_f_1755030() { return 0; }

// sub_1755040  (orig 0x1755040, ret_only)
void main_f_1755040() {}

// sub_1755410  (orig 0x1755410, mov_ret)
uint32_t main_f_1755410() { return 0; }

// sub_1755660  (orig 0x1755660, mov_ret)
uint32_t main_f_1755660() { return 4; }

// sub_1755670  (orig 0x1755670, mov_ret)
uint32_t main_f_1755670() { return 4; }

// sub_1755680  (orig 0x1755680, mov_ret)
uint32_t main_f_1755680() { return 4; }

// sub_1755690  (orig 0x1755690, mov_ret)
uint32_t main_f_1755690() { return 4; }

// sub_17568b0  (orig 0x17568b0, setter-chain)
void main_f_17568b0(uint64_t a0, void* a1) { *(uint64_t*)((char*)(a1)) = a0; *(uint32_t*)((char*)(a1) + 8) = 0; *(uint64_t*)((char*)(a1) + 16) = 0; }

// sub_1757530  (orig 0x1757530, compare)
bool main_f_1757530(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 2152)) != (uint64_t)(2); }

// sub_17575d0  (orig 0x17575d0, mov_ret)
uint32_t main_f_17575d0() { return 0; }

// sub_17575e0  (orig 0x17575e0, mov_ret)
uint32_t main_f_17575e0() { return 0; }

// sub_17577e0  (orig 0x17577e0, setter-chain)
void main_f_17577e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 16) = a1; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_17579a0  (orig 0x17579a0, getter)
uint64_t main_f_17579a0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_1759430  (orig 0x1759430, ret_only)
void main_f_1759430() {}

// sub_175a410  (orig 0x175a410, setter)
void main_f_175a410(void* a0) { *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_175cc20  (orig 0x175cc20, ptr_add)
void* main_f_175cc20(void* a0) { return (char*)a0 + 384; }

// sub_175cc30  (orig 0x175cc30, ptr_add)
void* main_f_175cc30(void* a0) { return (char*)a0 + 416; }

// sub_175cc50  (orig 0x175cc50, compare)
bool main_f_175cc50(void* a0, uint64_t unused1, void* a2) { return (uint32_t)(*(uint32_t*)((char*)(a0))) == (uint32_t)(*(uint32_t*)((char*)(a2))); }

// sub_175f720  (orig 0x175f720, straight)
uint32_t main_f_175f720(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 600);
    return 65536;
}

// sub_17651c0  (orig 0x17651c0, setter)
void main_f_17651c0(void* a0) { *(uint8_t*)((char*)(a0) + 2249) = 0; }

// sub_1765680  (orig 0x1765680, setter)
void main_f_1765680(void* a0) { *(uint8_t*)((char*)(a0) + 2248) = 0; }

// sub_1766dd0  (orig 0x1766dd0, mov_ret)
uint32_t main_f_1766dd0() { return 0; }

// sub_1769c30  (orig 0x1769c30, mov_ret)
uint32_t main_f_1769c30() { return 0; }

// sub_1773510  (orig 0x1773510, ret_only)
void main_f_1773510() {}

// sub_17757e0  (orig 0x17757e0, mov_ret)
uint32_t main_f_17757e0() { return 1; }

// sub_17771a0  (orig 0x17771a0, mov_ret)
uint32_t main_f_17771a0() { return 30; }

// sub_1777410  (orig 0x1777410, mov_ret)
uint32_t main_f_1777410() { return 0; }

// sub_1777430  (orig 0x1777430, mov_ret)
uint32_t main_f_1777430() { return 4; }

// sub_1777440  (orig 0x1777440, mov_ret)
uint32_t main_f_1777440() { return 4; }

// sub_1777450  (orig 0x1777450, mov_ret)
uint64_t main_f_1777450() { return 0; }

// sub_1778130  (orig 0x1778130, ret_only)
void main_f_1778130() {}

// sub_1778140  (orig 0x1778140, ret_only)
void main_f_1778140() {}

// sub_1778160  (orig 0x1778160, ret_only)
void main_f_1778160() {}

// sub_1778180  (orig 0x1778180, ret_only)
void main_f_1778180() {}

// sub_1778190  (orig 0x1778190, ret_only)
void main_f_1778190() {}

// sub_17781a0  (orig 0x17781a0, ret_only)
void main_f_17781a0() {}

// sub_1778f30  (orig 0x1778f30, ret_only)
void main_f_1778f30() {}

// sub_1779240  (orig 0x1779240, ret_only)
void main_f_1779240() {}

// sub_17796c0  (orig 0x17796c0, ret_only)
void main_f_17796c0() {}

// sub_1779710  (orig 0x1779710, ret_only)
void main_f_1779710() {}

// sub_1779890  (orig 0x1779890, setter)
void main_f_1779890(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 176) = a1; }

// sub_177a5b0  (orig 0x177a5b0, setter)
void main_f_177a5b0(void* a0, float a1) { *(float*)((char*)(a0) + 188) = a1; }

// sub_177c0b0  (orig 0x177c0b0, setter-chain)
void main_f_177c0b0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4, uint64_t a5, uint64_t a6) { *(uint64_t*)((char*)(a0) + 16) = a1; *(uint64_t*)((char*)(a0) + 32) = a2; *(uint64_t*)((char*)(a0) + 96) = a3; *(uint64_t*)((char*)(a0) + 104) = a4; *(uint64_t*)((char*)(a0) + 112) = a5; *(uint64_t*)((char*)(a0) + 120) = a6; }

// sub_177c110  (orig 0x177c110, getter-chain)
uint64_t main_f_177c110(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 40))) + 136); }

// sub_177c140  (orig 0x177c140, getter-chain)
uint8_t main_f_177c140(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 32))) + 2); }

// sub_177c150  (orig 0x177c150, getter-chain)
uint8_t main_f_177c150(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 32))) + 1); }

// sub_177c160  (orig 0x177c160, getter-chain)
uint8_t main_f_177c160(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 32))) + 3); }

// sub_177c200  (orig 0x177c200, mov_ret)
uint32_t main_f_177c200() { return 1; }

// sub_177c7f0  (orig 0x177c7f0, getter-chain)
uint8_t main_f_177c7f0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 32))) + 11); }

// sub_177c890  (orig 0x177c890, getter)
uint32_t main_f_177c890(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_177c8a0  (orig 0x177c8a0, getter)
uint8_t main_f_177c8a0(void* a0) { return *(uint8_t*)((char*)(a0) + 63); }

// sub_177ccb0  (orig 0x177ccb0, ret_only)
void main_f_177ccb0() {}

// sub_177cd10  (orig 0x177cd10, getter-chain)
uint64_t main_f_177cd10(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 40))) + 136); }

// sub_177cf10  (orig 0x177cf10, mov_ret)
uint32_t main_f_177cf10() { return 0; }

// sub_177d270  (orig 0x177d270, getter)
uint32_t main_f_177d270(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_177d280  (orig 0x177d280, getter)
uint32_t main_f_177d280(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_177d290  (orig 0x177d290, getter)
uint32_t main_f_177d290(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_177d2b0  (orig 0x177d2b0, getter)
uint32_t main_f_177d2b0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_177d2c0  (orig 0x177d2c0, mov_ret)
uint32_t main_f_177d2c0() { return 2; }

// sub_177d2d0  (orig 0x177d2d0, mov_ret)
uint32_t main_f_177d2d0() { return 8; }

// sub_177d2e0  (orig 0x177d2e0, getter)
uint32_t main_f_177d2e0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_177d300  (orig 0x177d300, setter)
void main_f_177d300(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_177d7b0  (orig 0x177d7b0, mov_ret)
uint32_t main_f_177d7b0() { return 1; }

// sub_177d7c0  (orig 0x177d7c0, getter)
uint32_t main_f_177d7c0(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_177d7d0  (orig 0x177d7d0, getter)
uint32_t main_f_177d7d0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_177d7e0  (orig 0x177d7e0, getter)
uint32_t main_f_177d7e0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_177d7f0  (orig 0x177d7f0, ret_only)
void main_f_177d7f0() {}

// sub_177d800  (orig 0x177d800, mov_ret)
uint32_t main_f_177d800() { return 1; }

// sub_177d810  (orig 0x177d810, mov_ret)
uint32_t main_f_177d810() { return 1; }

// sub_177d820  (orig 0x177d820, mov_ret)
uint32_t main_f_177d820() { return 0; }

// sub_177d830  (orig 0x177d830, mov_ret)
uint32_t main_f_177d830() { return 1; }

// sub_177d860  (orig 0x177d860, ret_only)
void main_f_177d860() {}

// sub_177d920  (orig 0x177d920, mov_ret)
uint32_t main_f_177d920() { return 1; }

// sub_177d9b0  (orig 0x177d9b0, ret_only)
void main_f_177d9b0() {}

// sub_177dc70  (orig 0x177dc70, ret_only)
void main_f_177dc70() {}

// sub_177dc80  (orig 0x177dc80, ret_only)
void main_f_177dc80() {}

// sub_177dc90  (orig 0x177dc90, ret_only)
void main_f_177dc90() {}

// sub_177dca0  (orig 0x177dca0, ret_only)
void main_f_177dca0() {}

// sub_177dcb0  (orig 0x177dcb0, ret_only)
void main_f_177dcb0() {}

// sub_177dcc0  (orig 0x177dcc0, ret_only)
void main_f_177dcc0() {}

// sub_177dcd0  (orig 0x177dcd0, ret_only)
void main_f_177dcd0() {}

// sub_177dce0  (orig 0x177dce0, ret_only)
void main_f_177dce0() {}

// sub_177dd60  (orig 0x177dd60, ret_only)
void main_f_177dd60() {}

// sub_177e020  (orig 0x177e020, ret_only)
void main_f_177e020() {}

// sub_177e030  (orig 0x177e030, ret_only)
void main_f_177e030() {}

// sub_177e040  (orig 0x177e040, ret_only)
void main_f_177e040() {}

// sub_177e050  (orig 0x177e050, ret_only)
void main_f_177e050() {}

// sub_177e060  (orig 0x177e060, ret_only)
void main_f_177e060() {}

// sub_177e070  (orig 0x177e070, ret_only)
void main_f_177e070() {}

// sub_177e080  (orig 0x177e080, ret_only)
void main_f_177e080() {}

// sub_177e090  (orig 0x177e090, ret_only)
void main_f_177e090() {}

// sub_177e0a0  (orig 0x177e0a0, straight)
void* main_f_177e0a0(uint64_t unused0, void* a1, void* a2) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
    return (char*)(a2) + 2;
}

// sub_17816d0  (orig 0x17816d0, mov_ret)
uint64_t main_f_17816d0() { return 0; }

// sub_17816e0  (orig 0x17816e0, mov_ret)
uint64_t main_f_17816e0() { return 0; }

// sub_1787320  (orig 0x1787320, setter)
void main_f_1787320(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_1787340  (orig 0x1787340, setter-chain)
void main_f_1787340(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 4) = 0; }

// sub_1787350  (orig 0x1787350, setter-chain)
void main_f_1787350(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 4) = 0; }

// sub_1787560  (orig 0x1787560, setter)
void main_f_1787560(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_1787570  (orig 0x1787570, setter-chain)
void main_f_1787570(void* a0) { *(uint32_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_17875f0  (orig 0x17875f0, ret_only)
void main_f_17875f0() {}

// sub_1787600  (orig 0x1787600, ret_only)
void main_f_1787600() {}

// sub_17876b0  (orig 0x17876b0, setter-chain)
void main_f_17876b0(void* a0) { *(uint16_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 4) = 0; }

// sub_1787ab0  (orig 0x1787ab0, ret_only)
void main_f_1787ab0() {}

// sub_1787ca0  (orig 0x1787ca0, getter)
uint64_t main_f_1787ca0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1787d80  (orig 0x1787d80, ret_only)
void main_f_1787d80() {}

// sub_1787f40  (orig 0x1787f40, setter)
void main_f_1787f40(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 208) = a1; }

// sub_1787f50  (orig 0x1787f50, setter)
void main_f_1787f50(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 216) = a1; }

// sub_1787f60  (orig 0x1787f60, ret_only)
void main_f_1787f60() {}

// sub_1789930  (orig 0x1789930, ret_only)
void main_f_1789930() {}

// sub_1789ac0  (orig 0x1789ac0, straight)
void main_f_1789ac0(void* a0) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(2);
}

// sub_1789ad0  (orig 0x1789ad0, straight)
void main_f_1789ad0(void* a0) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(1);
}

// sub_1789bc0  (orig 0x1789bc0, mov_ret)
uint32_t main_f_1789bc0() { return 4096; }

// sub_1789bd0  (orig 0x1789bd0, mov_ret)
uint32_t main_f_1789bd0() { return 4096; }

// sub_1789c00  (orig 0x1789c00, ret_only)
void main_f_1789c00() {}

// sub_1789d00  (orig 0x1789d00, ret_only)
void main_f_1789d00() {}

// sub_178d530  (orig 0x178d530, ret_only)
void main_f_178d530() {}

// sub_178d730  (orig 0x178d730, ret_only)
void main_f_178d730() {}

// sub_178df90  (orig 0x178df90, ret_only)
void main_f_178df90() {}

// sub_178e4f0  (orig 0x178e4f0, ret_only)
void main_f_178e4f0() {}

// sub_178f6f0  (orig 0x178f6f0, ret_only)
void main_f_178f6f0() {}

// sub_178f8d0  (orig 0x178f8d0, setter)
void main_f_178f8d0(void* a0) { *(uint8_t*)((char*)(a0) + 44) = 0; }

// sub_178f900  (orig 0x178f900, ret_only)
void main_f_178f900() {}

// sub_178f910  (orig 0x178f910, setter-chain)
void main_f_178f910(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint32_t*)((char*)(a0) + 32) = a2; }

// sub_178f920  (orig 0x178f920, getter)
uint64_t main_f_178f920(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_178fb40  (orig 0x178fb40, setter)
void main_f_178fb40(void* a0) { *(uint8_t*)((char*)(a0) + 36) = 0; }

// sub_178fb60  (orig 0x178fb60, ret_only)
void main_f_178fb60() {}

// sub_178fd20  (orig 0x178fd20, setter)
void main_f_178fd20(void* a0) { *(uint8_t*)((char*)(a0) + 24) = 0; }

// sub_178fdb0  (orig 0x178fdb0, ret_only)
void main_f_178fdb0() {}

// sub_178fdc0  (orig 0x178fdc0, setter-chain)
void main_f_178fdc0(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0) + 16) = a1; *(uint32_t*)((char*)(a0) + 12) = a2; }

// sub_178fdd0  (orig 0x178fdd0, getter)
uint64_t main_f_178fdd0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1790120  (orig 0x1790120, setter)
void main_f_1790120(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_1790150  (orig 0x1790150, ret_only)
void main_f_1790150() {}

// sub_17902f0  (orig 0x17902f0, setter)
void main_f_17902f0(void* a0) { *(uint8_t*)((char*)(a0) + 64) = 0; }

// sub_1790410  (orig 0x1790410, ret_only)
void main_f_1790410() {}

// sub_17908c0  (orig 0x17908c0, ret_only)
void main_f_17908c0() {}

// sub_17909c0  (orig 0x17909c0, ret_only)
void main_f_17909c0() {}

// sub_1790b50  (orig 0x1790b50, ret_only)
void main_f_1790b50() {}

// sub_1790c90  (orig 0x1790c90, ret_only)
void main_f_1790c90() {}

// sub_1790de0  (orig 0x1790de0, setter-chain)
void main_f_1790de0(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_1790e10  (orig 0x1790e10, ret_only)
void main_f_1790e10() {}

// sub_1790f00  (orig 0x1790f00, setter-chain)
void main_f_1790f00(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_1790f30  (orig 0x1790f30, ret_only)
void main_f_1790f30() {}

// sub_1791000  (orig 0x1791000, setter-chain)
void main_f_1791000(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_1791010  (orig 0x1791010, ret_only)
void main_f_1791010() {}

// sub_1791070  (orig 0x1791070, ret_only)
void main_f_1791070() {}

// sub_1791190  (orig 0x1791190, mov_ret)
uint32_t main_f_1791190() { return 0; }

// sub_17911a0  (orig 0x17911a0, ret_only)
void main_f_17911a0() {}

// sub_17912b0  (orig 0x17912b0, ret_only)
void main_f_17912b0() {}

// sub_17912c0  (orig 0x17912c0, compare)
bool main_f_17912c0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_17912d0  (orig 0x17912d0, mov_ret)
uint32_t main_f_17912d0() { return 1; }

// sub_1791410  (orig 0x1791410, getter)
uint64_t main_f_1791410(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1791420  (orig 0x1791420, getter)
uint64_t main_f_1791420(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1791460  (orig 0x1791460, getter)
uint64_t main_f_1791460(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_1791470  (orig 0x1791470, getter)
uint64_t main_f_1791470(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_1791480  (orig 0x1791480, getter)
uint32_t main_f_1791480(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_1791490  (orig 0x1791490, getter)
uint32_t main_f_1791490(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_17914a0  (orig 0x17914a0, getter)
uint32_t main_f_17914a0(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_17914b0  (orig 0x17914b0, getter)
uint32_t main_f_17914b0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_17914d0  (orig 0x17914d0, setter)
void main_f_17914d0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 16) = a1; }

// sub_17914e0  (orig 0x17914e0, setter)
void main_f_17914e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_17914f0  (orig 0x17914f0, setter)
void main_f_17914f0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 48) = a1; }

// sub_1791500  (orig 0x1791500, setter)
void main_f_1791500(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 56) = a1; }

// sub_1791510  (orig 0x1791510, setter)
void main_f_1791510(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_1793360  (orig 0x1793360, ret_only)
void main_f_1793360() {}

// sub_1794730  (orig 0x1794730, getter-chain)
uint16_t main_f_1794730(void* a0) { return *(uint16_t*)((char*)((*(uint64_t*)((char*)(a0) + 24))) + 8); }

// sub_1794740  (orig 0x1794740, ret_only)
void main_f_1794740() {}

// sub_1795520  (orig 0x1795520, setter)
void main_f_1795520(void* a0) { *(uint16_t*)((char*)(a0) + 56) = 0; }

// sub_1799a10  (orig 0x1799a10, ret_only)
void main_f_1799a10() {}

// sub_1799f80  (orig 0x1799f80, setter-chain)
void main_f_1799f80(void* a0) { *(uint16_t*)((char*)(a0) + 4) = 0; *(uint32_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint32_t*)((char*)(a0) + 16) = 0; }

// sub_179a0f0  (orig 0x179a0f0, setter-chain)
void main_f_179a0f0(void* a0) { *(uint16_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_179a620  (orig 0x179a620, ret_only)
void main_f_179a620() {}

// sub_179a630  (orig 0x179a630, ret_only)
void main_f_179a630() {}

// sub_179a640  (orig 0x179a640, mov_ret)
uint64_t main_f_179a640() { return 0; }

// sub_179a650  (orig 0x179a650, ret_only)
void main_f_179a650() {}

// sub_179a730  (orig 0x179a730, ret_only)
void main_f_179a730() {}

// sub_179a770  (orig 0x179a770, setter)
void main_f_179a770(void* a0) { *(uint64_t*)((char*)(a0) + 192) = 0; }

// sub_179a780  (orig 0x179a780, setter-chain)
void main_f_179a780(void* a0) { *(uint64_t*)((char*)(a0) + 400) = 0; *(uint16_t*)((char*)(a0) + 408) = 0; }

// sub_179a9e0  (orig 0x179a9e0, getter)
uint64_t main_f_179a9e0(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_179a9f0  (orig 0x179a9f0, getter)
uint64_t main_f_179a9f0(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_179aa60  (orig 0x179aa60, ret_only)
void main_f_179aa60() {}

// sub_179e670  (orig 0x179e670, ret_only)
void main_f_179e670() {}

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

// sub_17b49d0  (orig 0x17b49d0, ret_only)
void main_f_17b49d0() {}

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

