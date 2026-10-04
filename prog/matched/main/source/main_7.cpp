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

// sub_a65920  (orig 0xa65920, copy2)
void main_f_a65920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65950  (orig 0xa65950, ret_only)
void main_f_a65950() {}

// sub_a65960  (orig 0xa65960, copy2)
void main_f_a65960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65970  (orig 0xa65970, copy2)
void main_f_a65970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_a65dc0  (orig 0xa65dc0, ret_only)
void main_f_a65dc0() {}

// sub_a65dd0  (orig 0xa65dd0, copy2)
void main_f_a65dd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65de0  (orig 0xa65de0, copy2)
void main_f_a65de0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65f50  (orig 0xa65f50, ret_only)
void main_f_a65f50() {}

// sub_a65f60  (orig 0xa65f60, copy2)
void main_f_a65f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65f70  (orig 0xa65f70, copy2)
void main_f_a65f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65f90  (orig 0xa65f90, ret_only)
void main_f_a65f90() {}

// sub_a65fa0  (orig 0xa65fa0, copy2)
void main_f_a65fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65fb0  (orig 0xa65fb0, copy2)
void main_f_a65fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_a66fd0  (orig 0xa66fd0, ret_only)
void main_f_a66fd0() {}

// sub_a66fe0  (orig 0xa66fe0, copy2)
void main_f_a66fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a66ff0  (orig 0xa66ff0, copy2)
void main_f_a66ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67020  (orig 0xa67020, ret_only)
void main_f_a67020() {}

// sub_a67030  (orig 0xa67030, copy2)
void main_f_a67030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67040  (orig 0xa67040, copy2)
void main_f_a67040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67070  (orig 0xa67070, ret_only)
void main_f_a67070() {}

// sub_a67080  (orig 0xa67080, copy2)
void main_f_a67080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67090  (orig 0xa67090, copy2)
void main_f_a67090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a670c0  (orig 0xa670c0, ret_only)
void main_f_a670c0() {}

// sub_a670d0  (orig 0xa670d0, copy2)
void main_f_a670d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a670e0  (orig 0xa670e0, copy2)
void main_f_a670e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67110  (orig 0xa67110, ret_only)
void main_f_a67110() {}

// sub_a67120  (orig 0xa67120, copy2)
void main_f_a67120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67130  (orig 0xa67130, copy2)
void main_f_a67130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67160  (orig 0xa67160, ret_only)
void main_f_a67160() {}

// sub_a67170  (orig 0xa67170, copy2)
void main_f_a67170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67180  (orig 0xa67180, copy2)
void main_f_a67180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a671b0  (orig 0xa671b0, ret_only)
void main_f_a671b0() {}

// sub_a671c0  (orig 0xa671c0, copy2)
void main_f_a671c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a671d0  (orig 0xa671d0, copy2)
void main_f_a671d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67200  (orig 0xa67200, ret_only)
void main_f_a67200() {}

// sub_a67210  (orig 0xa67210, copy2)
void main_f_a67210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67220  (orig 0xa67220, copy2)
void main_f_a67220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67250  (orig 0xa67250, ret_only)
void main_f_a67250() {}

// sub_a67260  (orig 0xa67260, copy2)
void main_f_a67260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67270  (orig 0xa67270, copy2)
void main_f_a67270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a672a0  (orig 0xa672a0, ret_only)
void main_f_a672a0() {}

// sub_a672b0  (orig 0xa672b0, copy2)
void main_f_a672b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a672c0  (orig 0xa672c0, copy2)
void main_f_a672c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a672f0  (orig 0xa672f0, ret_only)
void main_f_a672f0() {}

// sub_a67300  (orig 0xa67300, copy2)
void main_f_a67300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67310  (orig 0xa67310, copy2)
void main_f_a67310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67340  (orig 0xa67340, ret_only)
void main_f_a67340() {}

// sub_a67350  (orig 0xa67350, copy2)
void main_f_a67350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67360  (orig 0xa67360, copy2)
void main_f_a67360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67530  (orig 0xa67530, ret_only)
void main_f_a67530() {}

// sub_a67540  (orig 0xa67540, copy2)
void main_f_a67540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67550  (orig 0xa67550, copy2)
void main_f_a67550(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67580  (orig 0xa67580, ret_only)
void main_f_a67580() {}

// sub_a67590  (orig 0xa67590, copy2)
void main_f_a67590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a675a0  (orig 0xa675a0, copy2)
void main_f_a675a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a675c0  (orig 0xa675c0, ret_only)
void main_f_a675c0() {}

// sub_a675d0  (orig 0xa675d0, copy2)
void main_f_a675d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a675e0  (orig 0xa675e0, copy2)
void main_f_a675e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67600  (orig 0xa67600, ret_only)
void main_f_a67600() {}

// sub_a67610  (orig 0xa67610, copy2)
void main_f_a67610(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67620  (orig 0xa67620, copy2)
void main_f_a67620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a682a0  (orig 0xa682a0, ret_only)
void main_f_a682a0() {}

// sub_a682b0  (orig 0xa682b0, copy2)
void main_f_a682b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a682c0  (orig 0xa682c0, copy2)
void main_f_a682c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a682f0  (orig 0xa682f0, ret_only)
void main_f_a682f0() {}

// sub_a68300  (orig 0xa68300, copy2)
void main_f_a68300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68310  (orig 0xa68310, copy2)
void main_f_a68310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68340  (orig 0xa68340, ret_only)
void main_f_a68340() {}

// sub_a68350  (orig 0xa68350, copy2)
void main_f_a68350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68360  (orig 0xa68360, copy2)
void main_f_a68360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68390  (orig 0xa68390, ret_only)
void main_f_a68390() {}

// sub_a683a0  (orig 0xa683a0, copy2)
void main_f_a683a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a683b0  (orig 0xa683b0, copy2)
void main_f_a683b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a683e0  (orig 0xa683e0, ret_only)
void main_f_a683e0() {}

// sub_a683f0  (orig 0xa683f0, copy2)
void main_f_a683f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68400  (orig 0xa68400, copy2)
void main_f_a68400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68430  (orig 0xa68430, ret_only)
void main_f_a68430() {}

// sub_a68440  (orig 0xa68440, copy2)
void main_f_a68440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68450  (orig 0xa68450, copy2)
void main_f_a68450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68480  (orig 0xa68480, ret_only)
void main_f_a68480() {}

// sub_a68490  (orig 0xa68490, copy2)
void main_f_a68490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a684a0  (orig 0xa684a0, copy2)
void main_f_a684a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a684d0  (orig 0xa684d0, ret_only)
void main_f_a684d0() {}

// sub_a684e0  (orig 0xa684e0, copy2)
void main_f_a684e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a684f0  (orig 0xa684f0, copy2)
void main_f_a684f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68520  (orig 0xa68520, ret_only)
void main_f_a68520() {}

// sub_a68530  (orig 0xa68530, copy2)
void main_f_a68530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68540  (orig 0xa68540, copy2)
void main_f_a68540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_a68660  (orig 0xa68660, ret_only)
void main_f_a68660() {}

// sub_a68670  (orig 0xa68670, copy2)
void main_f_a68670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68680  (orig 0xa68680, copy2)
void main_f_a68680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a686b0  (orig 0xa686b0, ret_only)
void main_f_a686b0() {}

// sub_a686c0  (orig 0xa686c0, copy2)
void main_f_a686c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a686d0  (orig 0xa686d0, copy2)
void main_f_a686d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a686f0  (orig 0xa686f0, ret_only)
void main_f_a686f0() {}

// sub_a68700  (orig 0xa68700, copy2)
void main_f_a68700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68710  (orig 0xa68710, copy2)
void main_f_a68710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_a69290  (orig 0xa69290, ret_only)
void main_f_a69290() {}

// sub_a692a0  (orig 0xa692a0, copy2)
void main_f_a692a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a692b0  (orig 0xa692b0, copy2)
void main_f_a692b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a692e0  (orig 0xa692e0, ret_only)
void main_f_a692e0() {}

// sub_a692f0  (orig 0xa692f0, copy2)
void main_f_a692f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69300  (orig 0xa69300, copy2)
void main_f_a69300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69330  (orig 0xa69330, ret_only)
void main_f_a69330() {}

// sub_a69340  (orig 0xa69340, copy2)
void main_f_a69340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69350  (orig 0xa69350, copy2)
void main_f_a69350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_a6bb30  (orig 0xa6bb30, ret_only)
void main_f_a6bb30() {}

// sub_a6bb40  (orig 0xa6bb40, copy2)
void main_f_a6bb40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bb50  (orig 0xa6bb50, copy2)
void main_f_a6bb50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bb80  (orig 0xa6bb80, ret_only)
void main_f_a6bb80() {}

// sub_a6bb90  (orig 0xa6bb90, copy2)
void main_f_a6bb90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bba0  (orig 0xa6bba0, copy2)
void main_f_a6bba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_a6c2b0  (orig 0xa6c2b0, ret_only)
void main_f_a6c2b0() {}

// sub_a6c2c0  (orig 0xa6c2c0, copy2)
void main_f_a6c2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c2d0  (orig 0xa6c2d0, copy2)
void main_f_a6c2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c300  (orig 0xa6c300, ret_only)
void main_f_a6c300() {}

// sub_a6c310  (orig 0xa6c310, copy2)
void main_f_a6c310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c320  (orig 0xa6c320, copy2)
void main_f_a6c320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c350  (orig 0xa6c350, ret_only)
void main_f_a6c350() {}

// sub_a6c360  (orig 0xa6c360, copy2)
void main_f_a6c360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c370  (orig 0xa6c370, copy2)
void main_f_a6c370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c3a0  (orig 0xa6c3a0, ret_only)
void main_f_a6c3a0() {}

// sub_a6c3b0  (orig 0xa6c3b0, copy2)
void main_f_a6c3b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c3c0  (orig 0xa6c3c0, copy2)
void main_f_a6c3c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c3f0  (orig 0xa6c3f0, ret_only)
void main_f_a6c3f0() {}

// sub_a6c400  (orig 0xa6c400, copy2)
void main_f_a6c400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c410  (orig 0xa6c410, copy2)
void main_f_a6c410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6d010  (orig 0xa6d010, mov_ret)
uint64_t main_f_a6d010() { return 0; }

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

// sub_aafb90  (orig 0xaafb90, setter-chain)
void main_f_aafb90(void* a0, uint32_t a1, uint8_t a2, uint8_t a3, uint16_t a4) { *(uint32_t*)((char*)(a0) + 1680) = a1; *(uint8_t*)((char*)(a0) + 1684) = a2; *(uint8_t*)((char*)(a0) + 1685) = a3; *(uint16_t*)((char*)(a0) + 1686) = a4; }

// sub_aafbb0  (orig 0xaafbb0, ptr_add)
void* main_f_aafbb0(void* a0) { return (char*)a0 + 1680; }

// sub_ab16c0  (orig 0xab16c0, straight)
void main_f_ab16c0(void* a0) {
    *(uint64_t*)((char*)(a0) + 12296L) = (uint64_t)(2);
}

// sub_ab3620  (orig 0xab3620, ret_only)
void main_f_ab3620() {}

// sub_ab3af0  (orig 0xab3af0, getter)
uint32_t main_f_ab3af0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_ab3b00  (orig 0xab3b00, setter)
void main_f_ab3b00(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

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

// sub_abb7c0  (orig 0xabb7c0, setter)
void main_f_abb7c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 6412L) = a1; }

// sub_abb7d0  (orig 0xabb7d0, getter)
uint32_t main_f_abb7d0(void* a0) { return *(uint32_t*)((char*)(a0) + 6412L); }

// sub_abb8f0  (orig 0xabb8f0, setter-chain)
void main_f_abb8f0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 6656L) = a1; *(uint64_t*)((char*)(a0) + 6664L) = a2; }

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

// sub_ac1b00  (orig 0xac1b00, getter)
uint32_t main_f_ac1b00(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_ac1db0  (orig 0xac1db0, compare)
bool main_f_ac1db0(void* a0, uint64_t a1) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 142)) <= (uint32_t)(a1); }

// sub_aced10  (orig 0xaced10, setter-chain)
void main_f_aced10(void* a0) { *(uint64_t*)((char*)(a0) + 1536) = 0; *(uint32_t*)((char*)(a0) + 1544) = 0; }

// sub_ad0bd0  (orig 0xad0bd0, ret_only)
void main_f_ad0bd0() {}

// sub_ad0be0  (orig 0xad0be0, mov_ret)
uint32_t main_f_ad0be0() { return 1; }

// sub_ad0bf0  (orig 0xad0bf0, ret_only)
void main_f_ad0bf0() {}

// sub_ad0dd0  (orig 0xad0dd0, ret_only)
void main_f_ad0dd0() {}

// sub_ad0de0  (orig 0xad0de0, copy2)
void main_f_ad0de0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0df0  (orig 0xad0df0, copy2)
void main_f_ad0df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e10  (orig 0xad0e10, ret_only)
void main_f_ad0e10() {}

// sub_ad0e20  (orig 0xad0e20, copy2)
void main_f_ad0e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e30  (orig 0xad0e30, copy2)
void main_f_ad0e30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e50  (orig 0xad0e50, ret_only)
void main_f_ad0e50() {}

// sub_ad0e60  (orig 0xad0e60, copy2)
void main_f_ad0e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e70  (orig 0xad0e70, copy2)
void main_f_ad0e70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_ae1600  (orig 0xae1600, compare)
bool main_f_ae1600(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1784)) == (uint64_t)(4); }

// sub_ae1800  (orig 0xae1800, getter)
uint64_t main_f_ae1800(void* a0) { return *(uint64_t*)((char*)(a0) + 2880); }

// sub_ae4810  (orig 0xae4810, ret_only)
void main_f_ae4810() {}

// sub_ae48e0  (orig 0xae48e0, ret_only)
void main_f_ae48e0() {}

// sub_ae4980  (orig 0xae4980, ret_only)
void main_f_ae4980() {}

// sub_ae4a20  (orig 0xae4a20, ret_only)
void main_f_ae4a20() {}

// sub_ae4ac0  (orig 0xae4ac0, ret_only)
void main_f_ae4ac0() {}

// sub_ae4b60  (orig 0xae4b60, ret_only)
void main_f_ae4b60() {}

// sub_ae4b80  (orig 0xae4b80, copy2)
void main_f_ae4b80(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae4c00  (orig 0xae4c00, ret_only)
void main_f_ae4c00() {}

// sub_ae4ca0  (orig 0xae4ca0, ret_only)
void main_f_ae4ca0() {}

// sub_ae4d40  (orig 0xae4d40, ret_only)
void main_f_ae4d40() {}

// sub_ae4de0  (orig 0xae4de0, ret_only)
void main_f_ae4de0() {}

// sub_ae4e80  (orig 0xae4e80, ret_only)
void main_f_ae4e80() {}

// sub_ae4f20  (orig 0xae4f20, ret_only)
void main_f_ae4f20() {}

// sub_ae4f40  (orig 0xae4f40, copy2)
void main_f_ae4f40(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae4fc0  (orig 0xae4fc0, ret_only)
void main_f_ae4fc0() {}

// sub_ae5060  (orig 0xae5060, ret_only)
void main_f_ae5060() {}

// sub_ae5100  (orig 0xae5100, ret_only)
void main_f_ae5100() {}

// sub_ae5120  (orig 0xae5120, copy2)
void main_f_ae5120(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae51a0  (orig 0xae51a0, ret_only)
void main_f_ae51a0() {}

// sub_ae5240  (orig 0xae5240, ret_only)
void main_f_ae5240() {}

// sub_ae52e0  (orig 0xae52e0, ret_only)
void main_f_ae52e0() {}

// sub_ae5300  (orig 0xae5300, copy2)
void main_f_ae5300(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae5380  (orig 0xae5380, ret_only)
void main_f_ae5380() {}

// sub_ae5420  (orig 0xae5420, ret_only)
void main_f_ae5420() {}

// sub_ae5440  (orig 0xae5440, copy2)
void main_f_ae5440(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae54c0  (orig 0xae54c0, ret_only)
void main_f_ae54c0() {}

// sub_ae5560  (orig 0xae5560, ret_only)
void main_f_ae5560() {}

// sub_ae5600  (orig 0xae5600, ret_only)
void main_f_ae5600() {}

// sub_ae56a0  (orig 0xae56a0, ret_only)
void main_f_ae56a0() {}

// sub_ae5740  (orig 0xae5740, ret_only)
void main_f_ae5740() {}

// sub_ae57e0  (orig 0xae57e0, ret_only)
void main_f_ae57e0() {}

// sub_ae5880  (orig 0xae5880, ret_only)
void main_f_ae5880() {}

// sub_ae5920  (orig 0xae5920, ret_only)
void main_f_ae5920() {}

// sub_ae59c0  (orig 0xae59c0, ret_only)
void main_f_ae59c0() {}

// sub_ae5a60  (orig 0xae5a60, ret_only)
void main_f_ae5a60() {}

// sub_ae5b00  (orig 0xae5b00, ret_only)
void main_f_ae5b00() {}

// sub_ae5ba0  (orig 0xae5ba0, ret_only)
void main_f_ae5ba0() {}

// sub_ae5c40  (orig 0xae5c40, ret_only)
void main_f_ae5c40() {}

// sub_ae5ce0  (orig 0xae5ce0, ret_only)
void main_f_ae5ce0() {}

// sub_ae5d80  (orig 0xae5d80, ret_only)
void main_f_ae5d80() {}

// sub_ae5e20  (orig 0xae5e20, ret_only)
void main_f_ae5e20() {}

// sub_ae5ec0  (orig 0xae5ec0, ret_only)
void main_f_ae5ec0() {}

// sub_ae5f60  (orig 0xae5f60, ret_only)
void main_f_ae5f60() {}

// sub_ae6000  (orig 0xae6000, ret_only)
void main_f_ae6000() {}

// sub_ae60a0  (orig 0xae60a0, ret_only)
void main_f_ae60a0() {}

// sub_ae6140  (orig 0xae6140, ret_only)
void main_f_ae6140() {}

// sub_ae61e0  (orig 0xae61e0, ret_only)
void main_f_ae61e0() {}

// sub_ae6200  (orig 0xae6200, copy2)
void main_f_ae6200(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae6280  (orig 0xae6280, ret_only)
void main_f_ae6280() {}

// sub_ae6320  (orig 0xae6320, ret_only)
void main_f_ae6320() {}

// sub_ae6340  (orig 0xae6340, copy2)
void main_f_ae6340(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae63c0  (orig 0xae63c0, ret_only)
void main_f_ae63c0() {}

// sub_ae6460  (orig 0xae6460, ret_only)
void main_f_ae6460() {}

// sub_ae6500  (orig 0xae6500, ret_only)
void main_f_ae6500() {}

// sub_ae65a0  (orig 0xae65a0, ret_only)
void main_f_ae65a0() {}

// sub_ae6640  (orig 0xae6640, ret_only)
void main_f_ae6640() {}

// sub_ae66e0  (orig 0xae66e0, ret_only)
void main_f_ae66e0() {}

// sub_ae6780  (orig 0xae6780, ret_only)
void main_f_ae6780() {}

// sub_ae6820  (orig 0xae6820, ret_only)
void main_f_ae6820() {}

// sub_ae68c0  (orig 0xae68c0, ret_only)
void main_f_ae68c0() {}

// sub_ae6960  (orig 0xae6960, ret_only)
void main_f_ae6960() {}

// sub_ae6a00  (orig 0xae6a00, ret_only)
void main_f_ae6a00() {}

// sub_ae6aa0  (orig 0xae6aa0, ret_only)
void main_f_ae6aa0() {}

// sub_ae6b40  (orig 0xae6b40, ret_only)
void main_f_ae6b40() {}

// sub_ae6b60  (orig 0xae6b60, copy2)
void main_f_ae6b60(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae6be0  (orig 0xae6be0, ret_only)
void main_f_ae6be0() {}

// sub_ae6c80  (orig 0xae6c80, ret_only)
void main_f_ae6c80() {}

// sub_ae6ca0  (orig 0xae6ca0, copy2)
void main_f_ae6ca0(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae6d20  (orig 0xae6d20, ret_only)
void main_f_ae6d20() {}

// sub_ae6dc0  (orig 0xae6dc0, ret_only)
void main_f_ae6dc0() {}

// sub_ae6e60  (orig 0xae6e60, ret_only)
void main_f_ae6e60() {}

// sub_ae6f00  (orig 0xae6f00, ret_only)
void main_f_ae6f00() {}

// sub_ae6fa0  (orig 0xae6fa0, ret_only)
void main_f_ae6fa0() {}

// sub_ae6fc0  (orig 0xae6fc0, copy2)
void main_f_ae6fc0(void* a0) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 8)) + 2880)) = 0; }

// sub_ae7040  (orig 0xae7040, ret_only)
void main_f_ae7040() {}

// sub_ae70e0  (orig 0xae70e0, ret_only)
void main_f_ae70e0() {}

// sub_ae7180  (orig 0xae7180, ret_only)
void main_f_ae7180() {}

// sub_ae71b0  (orig 0xae71b0, ret_only)
void main_f_ae71b0() {}

// sub_ae7230  (orig 0xae7230, ret_only)
void main_f_ae7230() {}

// sub_ae72d0  (orig 0xae72d0, ret_only)
void main_f_ae72d0() {}

// sub_ae7370  (orig 0xae7370, ret_only)
void main_f_ae7370() {}

// sub_ae7410  (orig 0xae7410, ret_only)
void main_f_ae7410() {}

// sub_ae74b0  (orig 0xae74b0, ret_only)
void main_f_ae74b0() {}

// sub_ae7550  (orig 0xae7550, ret_only)
void main_f_ae7550() {}

// sub_ae75f0  (orig 0xae75f0, ret_only)
void main_f_ae75f0() {}

// sub_ae7690  (orig 0xae7690, ret_only)
void main_f_ae7690() {}

// sub_ae7730  (orig 0xae7730, ret_only)
void main_f_ae7730() {}

// sub_ae77d0  (orig 0xae77d0, ret_only)
void main_f_ae77d0() {}

// sub_ae8e80  (orig 0xae8e80, ret_only)
void main_f_ae8e80() {}

// sub_ae8f70  (orig 0xae8f70, ret_only)
void main_f_ae8f70() {}

// sub_ae9060  (orig 0xae9060, ret_only)
void main_f_ae9060() {}

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

// sub_b0ec90  (orig 0xb0ec90, setter)
void main_f_b0ec90(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_b0edf0  (orig 0xb0edf0, ret_only)
void main_f_b0edf0() {}

// sub_b0eea0  (orig 0xb0eea0, ret_only)
void main_f_b0eea0() {}

// sub_b0eeb0  (orig 0xb0eeb0, mov_ret)
uint64_t main_f_b0eeb0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

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

// sub_b40eb0  (orig 0xb40eb0, getter)
uint64_t main_f_b40eb0(void* a0) { return *(uint64_t*)((char*)(a0) + 328); }

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

// sub_bb40f0  (orig 0xbb40f0, ret_only)
void main_f_bb40f0() {}

// sub_bb4100  (orig 0xbb4100, ret_only)
void main_f_bb4100() {}

// sub_bb4110  (orig 0xbb4110, straight)
void main_f_bb4110(void* a0) {
    *(uint8_t*)((char*)(a0) + 459) = (uint8_t)(1);
}

// sub_bb4120  (orig 0xbb4120, straight)
void main_f_bb4120(void* a0) {
    *(uint8_t*)((char*)(a0) + 51) = (uint8_t)(1);
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

// sub_bb5640  (orig 0xbb5640, ret_only)
void main_f_bb5640() {}

// sub_bb5650  (orig 0xbb5650, copy2)
void main_f_bb5650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5660  (orig 0xbb5660, copy2)
void main_f_bb5660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5680  (orig 0xbb5680, ret_only)
void main_f_bb5680() {}

// sub_bb5690  (orig 0xbb5690, copy2)
void main_f_bb5690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb56a0  (orig 0xbb56a0, copy2)
void main_f_bb56a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb56c0  (orig 0xbb56c0, ret_only)
void main_f_bb56c0() {}

// sub_bb56d0  (orig 0xbb56d0, copy2)
void main_f_bb56d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb56e0  (orig 0xbb56e0, copy2)
void main_f_bb56e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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
void main_f_c338a0(void* a0) {
    *(uint8_t*)((char*)(a0) + 232) = (uint8_t)(1);
}

// sub_c33940  (orig 0xc33940, straight)
void main_f_c33940(void* a0) {
    *(uint8_t*)((char*)(a0) + 234) = (uint8_t)(1);
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
void main_f_c49340(void* a0) {
    *(uint32_t*)((char*)(a0) + 112) = 1;
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

// sub_c602c0  (orig 0xc602c0, ret_only)
void main_f_c602c0() {}

// sub_c60850  (orig 0xc60850, ret_only)
void main_f_c60850() {}

// sub_c609f0  (orig 0xc609f0, ret_only)
void main_f_c609f0() {}

// sub_c60a50  (orig 0xc60a50, ret_only)
void main_f_c60a50() {}

// sub_c63380  (orig 0xc63380, ret_only)
void main_f_c63380() {}

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
void main_f_c65b50(void* a0) {
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)(1);
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
void main_f_c73a20(void* a0) {
    *(uint8_t*)((char*)(a0) + 1626) = (uint8_t)(1);
}

// sub_c75b40  (orig 0xc75b40, ret_only)
void main_f_c75b40() {}

// sub_c75b60  (orig 0xc75b60, straight)
void main_f_c75b60(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1));
    *(uint64_t*)((char*)(a0) + 24) = *(uint64_t*)((char*)(a1) + 24);
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a1) + 16);
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

// sub_c83df0  (orig 0xc83df0, ret_only)
void main_f_c83df0() {}

// sub_c86480  (orig 0xc86480, getter)
uint8_t main_f_c86480(void* a0) { return *(uint8_t*)((char*)(a0) + 320); }

// sub_c86490  (orig 0xc86490, straight)
void main_f_c86490(void* a0) {
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)(1);
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
void main_f_c87450(void* a0) {
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)(1);
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
void main_f_c87e90(void* a0) {
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)(1);
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
void main_f_c88820(void* a0) {
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)(1);
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

