/* rtld functions 00000000..000019e0 (1 of 1). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00000000 size=28 callers=0 calls=1
   calls: sub_1c
*/
void sub_0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x0ULL || rel >= 0x1cULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000001c size=20 callers=1 calls=1
   calls: _start
*/
void sub_1c(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cULL || rel >= 0x30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000030 size=32 callers=1 calls=2
   calls: sub_1810, sub_50
*/
void _start(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ULL || rel >= 0x50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000050 size=20 callers=1 calls=1
   calls: sub_64
*/
void sub_50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ULL || rel >= 0x64ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000064 size=56 callers=1 calls=3
   calls: nn_ro_detail_g_pRoDebugFlag, sub_2e0, sub_9c
*/
void sub_64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64ULL || rel >= 0x9cULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000009c size=20 callers=1 calls=1
   calls: sub_b0
*/
void sub_9c(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9cULL || rel >= 0xb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000000b0 size=28 callers=1 calls=2
   calls: sub_19e0, sub_cc
*/
void sub_b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0ULL || rel >= 0xccULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000000cc size=532 callers=1 calls=2
   calls: sub_16d0, sub_170c
*/
void sub_cc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xccULL || rel >= 0x2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000002e0 size=352 callers=1 calls=0
*/
void sub_2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0ULL || rel >= 0x440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000440 size=720 callers=1 calls=6
   calls: rtld_warning_unresolved_symbol, sub_16e4, sub_1810, sub_810, sub_900, sub_9a0
   ref: _ZN2nn2ro6detail15g_pAutoLoadListE
   ref: _ZN2nn2ro6detail34g_pLookupGlobalAutoFunctionPointerE
   ref: _ZN2nn2ro6detail14g_pRoDebugFlagE
   ref: _ZN2nn2ro6detail17g_pManualLoadListE
   ref: _ZN2nn2ro6detail36g_pLookupGlobalManualFunctionPointerE
*/
void nn_ro_detail_g_pRoDebugFlag(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440ULL || rel >= 0x710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000710 size=240 callers=1 calls=2
   calls: rtld_Unresolved_symbol, sub_810
*/
void sub_710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x710ULL || rel >= 0x800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000800 size=16 callers=1 calls=0
*/
void sub_800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800ULL || rel >= 0x810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000810 size=240 callers=6 calls=1
   calls: sub_1740
*/
void sub_810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810ULL || rel >= 0x900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000900 size=160 callers=1 calls=0
*/
void sub_900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900ULL || rel >= 0x9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000009a0 size=720 callers=2 calls=1
   calls: sub_16fc
*/
void sub_9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0ULL || rel >= 0xc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000c70 size=448 callers=1 calls=3
   calls: sub_1704, sub_1948, sub_e30
   ref: [rtld] Unresolved symbol: '
*/
void rtld_Unresolved_symbol(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc70ULL || rel >= 0xe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000e30 size=384 callers=6 calls=2
   calls: sub_1740, sub_710
*/
void sub_e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe30ULL || rel >= 0xfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000fb0 size=1788 callers=1 calls=6
   calls: sub_16ac, sub_16fc, sub_1704, sub_1948, sub_800, sub_e30
   ref: [rtld] warning: unresolved symbol = '
*/
void rtld_warning_unresolved_symbol(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb0ULL || rel >= 0x16acULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000016ac size=36 callers=1 calls=0
*/
void sub_16ac(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16acULL || rel >= 0x16d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000016d0 size=20 callers=1 calls=0
*/
void sub_16d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d0ULL || rel >= 0x16e4ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000016e4 size=24 callers=1 calls=0
*/
void sub_16e4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e4ULL || rel >= 0x16fcULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000016fc size=8 callers=5 calls=0
*/
void sub_16fc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fcULL || rel >= 0x1704ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001704 size=8 callers=16 calls=0
*/
void sub_1704(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1704ULL || rel >= 0x170cULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000170c size=52 callers=1 calls=0
*/
void sub_170c(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170cULL || rel >= 0x1740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001740 size=208 callers=2 calls=0
*/
void sub_1740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1740ULL || rel >= 0x1810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001810 size=312 callers=2 calls=0
*/
void sub_1810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1810ULL || rel >= 0x1948ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001948 size=152 callers=16 calls=0
*/
void sub_1948(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1948ULL || rel >= 0x19e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000019e0 size=32 callers=1 calls=0
*/
void sub_19e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19e0ULL || rel >= 0x1a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

