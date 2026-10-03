/* sdk functions 0050c358..0050f528 (53 of 53). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0050c358 size=472 callers=1 calls=4
   calls: FDE_is_really_a_CIE, decodeEHHdr, parseInstructions, sub_50e310
*/
void sub_50c358(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c358ULL || rel >= 0x50c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c530 size=8 callers=0 calls=0
*/
void sub_50c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c530ULL || rel >= 0x50c538ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c538 size=704 callers=1 calls=5
   calls: FDE_is_really_a_CIE, evaluateExpression, getSavedFloatRegister, getSavedRegister, parseInstructions
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/Registers.hpp:1845 - unsupported arm64 reg
   ref: setRegister
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/Registers.hpp:1834 - unsupported arm64 reg
   ref: libunwind: 
   ref: getRegister
*/
void setRegister_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c538ULL || rel >= 0x50c7f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c7f8 size=192 callers=1 calls=1
   calls: evaluateExpression
   ref: getSavedFloatRegister
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/DwarfInstructions.hpp:127 - unsupported re
   ref: libunwind: 
*/
void getSavedFloatRegister(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c7f8ULL || rel >= 0x50c8b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c8b8 size=400 callers=2 calls=1
   calls: evaluateExpression
   ref: getSavedRegister
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/DwarfInstructions.hpp:104 - unsupported re
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/Registers.hpp:1834 - unsupported arm64 reg
   ref: libunwind: 
   ref: getRegister
*/
void getSavedRegister(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c8b8ULL || rel >= 0x50ca48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ca48 size=2848 callers=6 calls=2
   calls: getEncodedP, getULEB128
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/DwarfParser.hpp:452 - malformed DW_CFA_sam
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/DwarfParser.hpp:637 - malformed DW_CFA_val
   ref: getSLEB128
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/DwarfParser.hpp:432 - malformed DW_CFA_res
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/DwarfParser.hpp:586 - malformed DW_CFA_def
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/DwarfParser.hpp:513 - malformed DW_CFA_def
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/DwarfParser.hpp:419 - malformed DW_CFA_off
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/DwarfParser.hpp:622 - malformed DW_CFA_val
*/
void parseInstructions(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ca48ULL || rel >= 0x50d568ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050d568 size=976 callers=15 calls=1
   calls: getULEB128
   ref: getSLEB128
   ref: getEncodedP
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/AddressSpace.hpp:378 - DW_EH_PE_aligned po
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/AddressSpace.hpp:375 - DW_EH_PE_funcrel po
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/AddressSpace.hpp:371 - DW_EH_PE_datarel is
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/AddressSpace.hpp:352 - unknown pointer enc
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/AddressSpace.hpp:287 - truncated sleb128 e
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/AddressSpace.hpp:364 - DW_EH_PE_textrel po
*/
void getEncodedP(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50d568ULL || rel >= 0x50d938ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050d938 size=272 callers=34 calls=0
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/AddressSpace.hpp:263 - truncated uleb128 e
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/AddressSpace.hpp:268 - malformed uleb128 e
   ref: getULEB128
   ref: libunwind: 
*/
void getULEB128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50d938ULL || rel >= 0x50da48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050da48 size=2248 callers=3 calls=1
   calls: getULEB128
   ref: getSLEB128
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/DwarfInstructions.hpp:708 - DW_OP_fbreg no
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/DwarfInstructions.hpp:732 - DW_OP_deref_si
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/DwarfInstructions.hpp:712 - DW_OP_piece no
   ref: evaluateExpression
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/DwarfInstructions.hpp:746 - DWARF opcode n
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/AddressSpace.hpp:287 - truncated sleb128 e
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/Registers.hpp:1834 - unsupported arm64 reg
*/
void evaluateExpression(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50da48ULL || rel >= 0x50e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050e310 size=576 callers=1 calls=3
   calls: parseInstructions, sub_50e668, sub_50e820
*/
void sub_50e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50e310ULL || rel >= 0x50e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050e550 size=280 callers=2 calls=1
   calls: getEncodedP
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/EHHeaderParser.hpp:61 - Unsupported .eh_fr
   ref: decodeEHHdr
   ref: libunwind: 
*/
void decodeEHHdr(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50e550ULL || rel >= 0x50e668ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050e668 size=440 callers=3 calls=3
   calls: getEncodedP, getSLEB128, getULEB128
*/
void sub_50e668(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50e668ULL || rel >= 0x50e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050e820 size=352 callers=1 calls=4
   calls: FDE_is_really_a_CIE, decodeEHHdr, getEncodedP, getTableEntrySize
*/
void sub_50e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50e820ULL || rel >= 0x50e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050e980 size=656 callers=2 calls=2
   calls: getEncodedP, getULEB128
   ref: getSLEB128
   ref: CIE version is not 1 or 3
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/AddressSpace.hpp:287 - truncated sleb128 e
   ref: CIE ID is not zero
   ref: libunwind: 
*/
void getSLEB128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50e980ULL || rel >= 0x50ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ec10 size=256 callers=1 calls=0
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/EHHeaderParser.hpp:156 - Unknown DWARF enc
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src/EHHeaderParser.hpp:152 - Can't binary sear
   ref: getTableEntrySize
   ref: libunwind: 
*/
void getTableEntrySize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ec10ULL || rel >= 0x50ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ed10 size=40 callers=0 calls=0
   ref: unknown register
*/
void unknown_register(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ed10ULL || rel >= 0x50ed38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ed38 size=224 callers=0 calls=1
   calls: unwind_phase2
*/
void sub_50ed38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ed38ULL || rel >= 0x50ee18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ee18 size=336 callers=2 calls=0
   ref: unwind_phase2
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src\UnwindLevel1.c:202 - during phase1 persona
   ref: libunwind: 
*/
void unwind_phase2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ee18ULL || rel >= 0x50ef68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ef68 size=176 callers=0 calls=2
   calls: sub_50f018, unwind_phase2
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src\UnwindLevel1.c:391 - _Unwind_Resume() can'
   ref: _Unwind_Resume
   ref: libunwind: 
*/
void Unwind_Resume(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ef68ULL || rel >= 0x50f018ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f018 size=248 callers=2 calls=0
*/
void sub_50f018(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f018ULL || rel >= 0x50f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f110 size=96 callers=0 calls=1
   calls: sub_50f018
*/
void sub_50f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f110ULL || rel >= 0x50f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f170 size=48 callers=0 calls=0
*/
void sub_50f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f170ULL || rel >= 0x50f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f1a0 size=48 callers=0 calls=0
*/
void sub_50f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f1a0ULL || rel >= 0x50f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f1d0 size=24 callers=0 calls=0
*/
void sub_50f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f1d0ULL || rel >= 0x50f1e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f1e8 size=40 callers=0 calls=0
*/
void sub_50f1e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f1e8ULL || rel >= 0x50f210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f210 size=8 callers=0 calls=0
*/
void sub_50f210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f210ULL || rel >= 0x50f218ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f218 size=40 callers=0 calls=0
*/
void sub_50f218(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f218ULL || rel >= 0x50f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f240 size=16 callers=0 calls=0
*/
void sub_50f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f240ULL || rel >= 0x50f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f250 size=128 callers=0 calls=0
   ref: _Unwind_Resume_or_Rethrow
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src\UnwindLevel1-gcc-ext.c:59 - _Unwind_Resume
   ref: libunwind: 
*/
void Unwind_Resume_or_Rethrow(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f250ULL || rel >= 0x50f2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f2d0 size=112 callers=0 calls=0
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src\UnwindLevel1-gcc-ext.c:70 - _Unwind_GetDat
   ref: _Unwind_GetDataRelBase
   ref: libunwind: 
*/
void Unwind_GetDataRelBase(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f2d0ULL || rel >= 0x50f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f340 size=112 callers=0 calls=0
   ref: _Unwind_GetTextRelBase
   ref:  C:\buildslave\rynda\a64-rel-stage1\src\lib\libunwind\src\UnwindLevel1-gcc-ext.c:80 - _Unwind_GetTex
   ref: libunwind: 
*/
void Unwind_GetTextRelBase(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f340ULL || rel >= 0x50f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f3b0 size=96 callers=0 calls=0
*/
void sub_50f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f3b0ULL || rel >= 0x50f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f410 size=112 callers=0 calls=0
*/
void sub_50f410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f410ULL || rel >= 0x50f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f480 size=112 callers=0 calls=0
*/
void sub_50f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f480ULL || rel >= 0x50f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f4f0 size=40 callers=0 calls=0
*/
void sub_50f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f4f0ULL || rel >= 0x50f518ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f518 size=8 callers=0 calls=0
*/
void sub_50f518(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f518ULL || rel >= 0x50f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f520 size=8 callers=0 calls=0
*/
void sub_50f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f520ULL || rel >= 0x50f528ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f528 size=123736 callers=0 calls=0
*/
void sub_50f528(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f528ULL || rel >= 0x52d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

