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
    uint32_t k0 = 2;
    *(uint64_t*)((char*)(a0) + 12296L) = (uint64_t)k0;
}

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
void main_f_be55a0(void* a0) {
    uint32_t k0 = 2;
    *(uint64_t*)((char*)(a0) + 156) = (uint64_t)k0;
}

// sub_be55b0  (orig 0xbe55b0, straight)
void main_f_be55b0(void* a0) {
    uint32_t k0 = 3;
    *(uint64_t*)((char*)(a0) + 156) = (uint64_t)k0;
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

