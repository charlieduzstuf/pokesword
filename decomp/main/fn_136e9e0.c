/* main functions 0136e9e0..01387740 (164 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0136e9e0 size=80 callers=0 calls=0
*/
void sub_136e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136e9e0ULL || rel >= 0x136ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136ea30 size=80 callers=0 calls=0
*/
void sub_136ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136ea30ULL || rel >= 0x136ea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136ea80 size=80 callers=0 calls=0
*/
void sub_136ea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136ea80ULL || rel >= 0x136ead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136ead0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_136ead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136ead0ULL || rel >= 0x136ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136ed20 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_136ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136ed20ULL || rel >= 0x136ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136ef30 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_136ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136ef30ULL || rel >= 0x136f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f150 size=176 callers=2 calls=2
   calls: sub_5d7c40, sub_5e2350
*/
void sub_136f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f150ULL || rel >= 0x136f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f200 size=112 callers=0 calls=2
   calls: sub_136f270, sub_137e480
*/
void sub_136f200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f200ULL || rel >= 0x136f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f270 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_136f7f0, sub_136fa40
*/
void sub_136f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f270ULL || rel >= 0x136f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f3b0 size=144 callers=0 calls=2
   calls: sub_136fc50, sub_137e480
*/
void sub_136f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f3b0ULL || rel >= 0x136f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f440 size=176 callers=0 calls=4
   calls: sub_136f270, sub_137e480, sub_eadb10, sub_eadcf0
*/
void sub_136f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f440ULL || rel >= 0x136f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f4f0 size=176 callers=1 calls=0
*/
void sub_136f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f4f0ULL || rel >= 0x136f5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f5a0 size=16 callers=3 calls=0
*/
void sub_136f5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f5a0ULL || rel >= 0x136f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f5b0 size=16 callers=3 calls=0
*/
void sub_136f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f5b0ULL || rel >= 0x136f5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f5c0 size=16 callers=2 calls=0
*/
void sub_136f5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f5c0ULL || rel >= 0x136f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f5d0 size=16 callers=2 calls=0
*/
void sub_136f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f5d0ULL || rel >= 0x136f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f5e0 size=16 callers=3 calls=0
*/
void sub_136f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f5e0ULL || rel >= 0x136f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f5f0 size=16 callers=3 calls=0
*/
void sub_136f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f5f0ULL || rel >= 0x136f600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f600 size=16 callers=3 calls=0
*/
void sub_136f600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f600ULL || rel >= 0x136f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f610 size=16 callers=2 calls=0
*/
void sub_136f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f610ULL || rel >= 0x136f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f620 size=16 callers=2 calls=0
*/
void sub_136f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f620ULL || rel >= 0x136f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f630 size=272 callers=0 calls=1
   calls: sub_619770
*/
void sub_136f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f630ULL || rel >= 0x136f740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f740 size=16 callers=0 calls=0
*/
void sub_136f740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f740ULL || rel >= 0x136f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f750 size=16 callers=0 calls=0
*/
void sub_136f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f750ULL || rel >= 0x136f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f760 size=16 callers=0 calls=0
*/
void sub_136f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f760ULL || rel >= 0x136f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f770 size=16 callers=0 calls=0
*/
void sub_136f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f770ULL || rel >= 0x136f780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f780 size=16 callers=0 calls=0
*/
void sub_136f780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f780ULL || rel >= 0x136f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f790 size=48 callers=0 calls=0
*/
void sub_136f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f790ULL || rel >= 0x136f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f7c0 size=16 callers=0 calls=0
*/
void sub_136f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f7c0ULL || rel >= 0x136f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f7d0 size=16 callers=0 calls=0
*/
void sub_136f7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f7d0ULL || rel >= 0x136f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f7e0 size=16 callers=0 calls=0
*/
void sub_136f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f7e0ULL || rel >= 0x136f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136f7f0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_136f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136f7f0ULL || rel >= 0x136fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136fa40 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_136fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136fa40ULL || rel >= 0x136fc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136fc50 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_136fc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136fc50ULL || rel >= 0x136fe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136fe70 size=128 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_136fe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136fe70ULL || rel >= 0x136fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136fef0 size=240 callers=1 calls=2
   calls: PokeCampSave_NPCKey__3, sub_1c0
*/
void sub_136fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136fef0ULL || rel >= 0x136ffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136ffe0 size=48 callers=0 calls=1
   calls: sub_136fef0
*/
void sub_136ffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136ffe0ULL || rel >= 0x1370010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370010 size=240 callers=0 calls=3
   calls: sub_1370100, sub_1370220, sub_1370340
*/
void sub_1370010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370010ULL || rel >= 0x1370100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370100 size=288 callers=1 calls=2
   calls: sub_13712e0, sub_137e480
*/
void sub_1370100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370100ULL || rel >= 0x1370220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370220 size=288 callers=1 calls=2
   calls: sub_1371500, sub_137e480
*/
void sub_1370220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370220ULL || rel >= 0x1370340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370340 size=288 callers=7 calls=2
   calls: sub_1371720, sub_137e480
*/
void sub_1370340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370340ULL || rel >= 0x1370460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370460 size=560 callers=0 calls=4
   calls: sub_1371940, sub_1371ee0, sub_1372480, sub_137e480
*/
void sub_1370460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370460ULL || rel >= 0x1370690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370690 size=64 callers=5 calls=0
*/
void sub_1370690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370690ULL || rel >= 0x13706d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013706d0 size=80 callers=4 calls=0
*/
void sub_13706d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13706d0ULL || rel >= 0x1370720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370720 size=64 callers=8 calls=0
*/
void sub_1370720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370720ULL || rel >= 0x1370760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370760 size=176 callers=1 calls=0
*/
void sub_1370760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370760ULL || rel >= 0x1370810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370810 size=32 callers=1 calls=0
*/
void sub_1370810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370810ULL || rel >= 0x1370830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370830 size=32 callers=2 calls=0
*/
void sub_1370830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370830ULL || rel >= 0x1370850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370850 size=32 callers=1 calls=0
*/
void sub_1370850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370850ULL || rel >= 0x1370870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370870 size=80 callers=2 calls=0
*/
void sub_1370870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370870ULL || rel >= 0x13708c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013708c0 size=176 callers=1 calls=1
   calls: sub_eaed70
*/
void sub_13708c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13708c0ULL || rel >= 0x1370970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370970 size=16 callers=2 calls=0
*/
void sub_1370970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370970ULL || rel >= 0x1370980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370980 size=32 callers=2 calls=0
*/
void sub_1370980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370980ULL || rel >= 0x13709a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013709a0 size=688 callers=3 calls=4
   calls: sub_13710d0, sub_767720, sub_767870, sub_7847d0
   ref: PokeCampSave_NPCKey_
*/
void PokeCampSave_NPCKey_(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13709a0ULL || rel >= 0x1370c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370c50 size=688 callers=1 calls=4
   calls: sub_13710d0, sub_767730, sub_767880, sub_7847d0
   ref: PokeCampSave_NPCKey_
*/
void PokeCampSave_NPCKey__2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370c50ULL || rel >= 0x1370f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01370f00 size=464 callers=1 calls=1
   calls: sub_13710d0
   ref: PokeCampSave_NPCKey_
*/
void PokeCampSave_NPCKey__3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1370f00ULL || rel >= 0x13710d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013710d0 size=128 callers=3 calls=1
   calls: sub_d0c0
*/
void sub_13710d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13710d0ULL || rel >= 0x1371150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01371150 size=80 callers=0 calls=0
*/
void sub_1371150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1371150ULL || rel >= 0x13711a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013711a0 size=80 callers=0 calls=0
*/
void sub_13711a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13711a0ULL || rel >= 0x13711f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013711f0 size=80 callers=0 calls=0
*/
void sub_13711f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13711f0ULL || rel >= 0x1371240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01371240 size=80 callers=0 calls=0
*/
void sub_1371240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1371240ULL || rel >= 0x1371290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01371290 size=80 callers=0 calls=0
*/
void sub_1371290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1371290ULL || rel >= 0x13712e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013712e0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_13712e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13712e0ULL || rel >= 0x1371500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01371500 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1371500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1371500ULL || rel >= 0x1371720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01371720 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1371720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1371720ULL || rel >= 0x1371940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01371940 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_1371a80, sub_1371cd0
*/
void sub_1371940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1371940ULL || rel >= 0x1371a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01371a80 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1371a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1371a80ULL || rel >= 0x1371cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01371cd0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1371cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1371cd0ULL || rel >= 0x1371ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01371ee0 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_1372020, sub_1372270
*/
void sub_1371ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1371ee0ULL || rel >= 0x1372020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01372020 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1372020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1372020ULL || rel >= 0x1372270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01372270 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1372270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1372270ULL || rel >= 0x1372480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01372480 size=320 callers=8 calls=3
   calls: sub_13471e0, sub_13725c0, sub_1372810
*/
void sub_1372480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1372480ULL || rel >= 0x13725c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013725c0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_13725c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13725c0ULL || rel >= 0x1372810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01372810 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1372810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1372810ULL || rel >= 0x1372a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01372a20 size=1136 callers=0 calls=2
   calls: sub_ead0f0, sub_ead110
*/
void sub_1372a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1372a20ULL || rel >= 0x1372e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01372e90 size=752 callers=0 calls=7
   calls: sub_134d020, sub_135e220, sub_135fd90, sub_13744b0, sub_13746d0, sub_13748f0, sub_137e480
*/
void sub_1372e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1372e90ULL || rel >= 0x1373180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373180 size=416 callers=0 calls=7
   calls: sub_1357700, sub_1373320, sub_1373460, sub_13735a0, sub_1375830, sub_1375d90, sub_137e480
*/
void sub_1373180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373180ULL || rel >= 0x1373320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373320 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_1374b10, sub_1374d60
*/
void sub_1373320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373320ULL || rel >= 0x1373460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373460 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_1374f70, sub_13751c0
*/
void sub_1373460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373460ULL || rel >= 0x13735a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013735a0 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_13753d0, sub_1375620
*/
void sub_13735a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13735a0ULL || rel >= 0x13736e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013736e0 size=16 callers=84 calls=0
*/
void sub_13736e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13736e0ULL || rel >= 0x13736f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013736f0 size=32 callers=6 calls=0
*/
void sub_13736f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13736f0ULL || rel >= 0x1373710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373710 size=16 callers=7 calls=0
*/
void sub_1373710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373710ULL || rel >= 0x1373720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373720 size=16 callers=1 calls=0
*/
void sub_1373720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373720ULL || rel >= 0x1373730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373730 size=16 callers=2 calls=0
*/
void sub_1373730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373730ULL || rel >= 0x1373740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373740 size=16 callers=2 calls=0
*/
void sub_1373740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373740ULL || rel >= 0x1373750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373750 size=16 callers=1 calls=0
*/
void sub_1373750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373750ULL || rel >= 0x1373760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373760 size=16 callers=1 calls=0
*/
void sub_1373760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373760ULL || rel >= 0x1373770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373770 size=80 callers=1 calls=1
   calls: sub_76f7d0
*/
void sub_1373770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373770ULL || rel >= 0x13737c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013737c0 size=160 callers=2 calls=1
   calls: sub_76f7e0
*/
void sub_13737c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13737c0ULL || rel >= 0x1373860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373860 size=272 callers=4 calls=1
   calls: sub_76f440
*/
void sub_1373860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373860ULL || rel >= 0x1373970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373970 size=80 callers=3 calls=0
*/
void sub_1373970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373970ULL || rel >= 0x13739c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013739c0 size=752 callers=1 calls=0
*/
void sub_13739c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13739c0ULL || rel >= 0x1373cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373cb0 size=512 callers=1 calls=0
*/
void sub_1373cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373cb0ULL || rel >= 0x1373eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373eb0 size=128 callers=2 calls=1
   calls: sub_12a3c50
*/
void sub_1373eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373eb0ULL || rel >= 0x1373f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373f30 size=32 callers=2 calls=0
*/
void sub_1373f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373f30ULL || rel >= 0x1373f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373f50 size=16 callers=3 calls=0
*/
void sub_1373f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373f50ULL || rel >= 0x1373f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373f60 size=16 callers=1 calls=0
*/
void sub_1373f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373f60ULL || rel >= 0x1373f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373f70 size=32 callers=1 calls=0
*/
void sub_1373f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373f70ULL || rel >= 0x1373f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373f90 size=32 callers=1 calls=0
*/
void sub_1373f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373f90ULL || rel >= 0x1373fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373fb0 size=16 callers=2 calls=0
*/
void sub_1373fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373fb0ULL || rel >= 0x1373fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373fc0 size=32 callers=3 calls=0
*/
void sub_1373fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373fc0ULL || rel >= 0x1373fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01373fe0 size=416 callers=4 calls=1
   calls: sub_ead0f0
*/
void sub_1373fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1373fe0ULL || rel >= 0x1374180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01374180 size=416 callers=2 calls=1
   calls: sub_ead0f0
*/
void sub_1374180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1374180ULL || rel >= 0x1374320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01374320 size=80 callers=0 calls=0
*/
void sub_1374320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1374320ULL || rel >= 0x1374370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01374370 size=80 callers=0 calls=0
*/
void sub_1374370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1374370ULL || rel >= 0x13743c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013743c0 size=80 callers=0 calls=0
*/
void sub_13743c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13743c0ULL || rel >= 0x1374410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01374410 size=80 callers=0 calls=0
*/
void sub_1374410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1374410ULL || rel >= 0x1374460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01374460 size=80 callers=0 calls=0
*/
void sub_1374460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1374460ULL || rel >= 0x13744b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013744b0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_13744b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13744b0ULL || rel >= 0x13746d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013746d0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_13746d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13746d0ULL || rel >= 0x13748f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013748f0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_13748f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13748f0ULL || rel >= 0x1374b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01374b10 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1374b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1374b10ULL || rel >= 0x1374d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01374d60 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1374d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1374d60ULL || rel >= 0x1374f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01374f70 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1374f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1374f70ULL || rel >= 0x13751c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013751c0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_13751c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13751c0ULL || rel >= 0x13753d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013753d0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_13753d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13753d0ULL || rel >= 0x1375620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01375620 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1375620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1375620ULL || rel >= 0x1375830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01375830 size=304 callers=1 calls=3
   calls: sub_1360ec0, sub_1375960, sub_1375b90
*/
void sub_1375830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1375830ULL || rel >= 0x1375960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01375960 size=560 callers=1 calls=2
   calls: sub_1346730, sub_1361460
*/
void sub_1375960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1375960ULL || rel >= 0x1375b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01375b90 size=512 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_1361460
*/
void sub_1375b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1375b90ULL || rel >= 0x1375d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01375d90 size=304 callers=1 calls=3
   calls: sub_135cfa0, sub_1375ec0, sub_1376180
*/
void sub_1375d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1375d90ULL || rel >= 0x1375ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01375ec0 size=704 callers=1 calls=1
   calls: sub_1346730
*/
void sub_1375ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1375ec0ULL || rel >= 0x1376180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01376180 size=672 callers=1 calls=3
   calls: sub_1346730, sub_1347cd0, sub_1347fd0
*/
void sub_1376180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1376180ULL || rel >= 0x1376420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01376420 size=160 callers=14 calls=2
   calls: sub_1376bc0, sub_137e480
*/
void sub_1376420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1376420ULL || rel >= 0x13764c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013764c0 size=112 callers=2 calls=2
   calls: sub_1376530, sub_137e480
*/
void sub_13764c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13764c0ULL || rel >= 0x1376530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01376530 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_1376de0, sub_1377030
*/
void sub_1376530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1376530ULL || rel >= 0x1376670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01376670 size=128 callers=1 calls=2
   calls: sub_13766f0, sub_137e480
*/
void sub_1376670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1376670ULL || rel >= 0x13766f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013766f0 size=320 callers=6 calls=3
   calls: sub_13471e0, sub_1377240, sub_1377490
*/
void sub_13766f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13766f0ULL || rel >= 0x1376830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01376830 size=576 callers=1 calls=2
   calls: sub_1376bc0, sub_137e480
*/
void sub_1376830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1376830ULL || rel >= 0x1376a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01376a70 size=336 callers=0 calls=2
   calls: sub_13766f0, sub_137e480
*/
void sub_1376a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1376a70ULL || rel >= 0x1376bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01376bc0 size=544 callers=6 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1376bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1376bc0ULL || rel >= 0x1376de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01376de0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1376de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1376de0ULL || rel >= 0x1377030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377030 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1377030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377030ULL || rel >= 0x1377240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377240 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1377240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377240ULL || rel >= 0x1377490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377490 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1377490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377490ULL || rel >= 0x13776a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013776a0 size=224 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_13776a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13776a0ULL || rel >= 0x1377780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377780 size=80 callers=2 calls=0
*/
void sub_1377780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377780ULL || rel >= 0x13777d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013777d0 size=160 callers=0 calls=2
   calls: sub_1377870, sub_137e480
*/
void sub_13777d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13777d0ULL || rel >= 0x1377870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377870 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_13781a0, sub_13783f0
*/
void sub_1377870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377870ULL || rel >= 0x13779b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013779b0 size=144 callers=0 calls=2
   calls: sub_1378600, sub_137e480
*/
void sub_13779b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13779b0ULL || rel >= 0x1377a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377a40 size=112 callers=0 calls=2
   calls: sub_1377870, sub_137e480
*/
void sub_1377a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377a40ULL || rel >= 0x1377ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377ab0 size=240 callers=2 calls=1
   calls: sub_76f550
*/
void sub_1377ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377ab0ULL || rel >= 0x1377ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377ba0 size=64 callers=1 calls=1
   calls: sub_76f7d0
*/
void sub_1377ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377ba0ULL || rel >= 0x1377be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377be0 size=240 callers=1 calls=1
   calls: sub_76f550
*/
void sub_1377be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377be0ULL || rel >= 0x1377cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377cd0 size=16 callers=1 calls=0
*/
void sub_1377cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377cd0ULL || rel >= 0x1377ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377ce0 size=32 callers=1 calls=0
*/
void sub_1377ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377ce0ULL || rel >= 0x1377d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377d00 size=48 callers=1 calls=0
*/
void sub_1377d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377d00ULL || rel >= 0x1377d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377d30 size=16 callers=2 calls=0
*/
void sub_1377d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377d30ULL || rel >= 0x1377d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377d40 size=16 callers=1 calls=0
*/
void sub_1377d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377d40ULL || rel >= 0x1377d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377d50 size=16 callers=3 calls=0
*/
void sub_1377d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377d50ULL || rel >= 0x1377d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377d60 size=16 callers=9 calls=0
*/
void sub_1377d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377d60ULL || rel >= 0x1377d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377d70 size=32 callers=1 calls=0
*/
void sub_1377d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377d70ULL || rel >= 0x1377d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377d90 size=64 callers=2 calls=0
*/
void sub_1377d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377d90ULL || rel >= 0x1377dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377dd0 size=80 callers=0 calls=0
*/
void sub_1377dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377dd0ULL || rel >= 0x1377e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377e20 size=112 callers=0 calls=1
   calls: sub_13780b0
*/
void sub_1377e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377e20ULL || rel >= 0x1377e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377e90 size=80 callers=0 calls=0
*/
void sub_1377e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377e90ULL || rel >= 0x1377ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377ee0 size=80 callers=0 calls=0
*/
void sub_1377ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377ee0ULL || rel >= 0x1377f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377f30 size=112 callers=0 calls=1
   calls: sub_13780b0
*/
void sub_1377f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377f30ULL || rel >= 0x1377fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01377fa0 size=112 callers=0 calls=1
   calls: sub_13780b0
*/
void sub_1377fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1377fa0ULL || rel >= 0x1378010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378010 size=80 callers=0 calls=0
*/
void sub_1378010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378010ULL || rel >= 0x1378060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378060 size=80 callers=0 calls=0
*/
void sub_1378060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378060ULL || rel >= 0x13780b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013780b0 size=240 callers=3 calls=0
*/
void sub_13780b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13780b0ULL || rel >= 0x13781a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013781a0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_13781a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13781a0ULL || rel >= 0x13783f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013783f0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_13783f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13783f0ULL || rel >= 0x1378600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378600 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1378600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378600ULL || rel >= 0x1378820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378820 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_1378820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378820ULL || rel >= 0x1378870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378870 size=256 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1378870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378870ULL || rel >= 0x1378970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378970 size=16 callers=2 calls=0
*/
void sub_1378970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378970ULL || rel >= 0x1378980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378980 size=80 callers=0 calls=0
*/
void sub_1378980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378980ULL || rel >= 0x13789d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013789d0 size=80 callers=0 calls=0
*/
void sub_13789d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13789d0ULL || rel >= 0x1378a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378a20 size=80 callers=0 calls=0
*/
void sub_1378a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378a20ULL || rel >= 0x1378a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378a70 size=80 callers=0 calls=0
*/
void sub_1378a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378a70ULL || rel >= 0x1378ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378ac0 size=80 callers=0 calls=0
*/
void sub_1378ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378ac0ULL || rel >= 0x1378b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378b10 size=80 callers=0 calls=0
*/
void sub_1378b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378b10ULL || rel >= 0x1378b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378b60 size=112 callers=0 calls=0
*/
void sub_1378b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378b60ULL || rel >= 0x1378bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378bd0 size=16 callers=1 calls=0
*/
void sub_1378bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378bd0ULL || rel >= 0x1378be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378be0 size=512 callers=0 calls=6
   calls: sub_1346e90, sub_134d370, sub_135e220, sub_137a410, sub_137a630, sub_137e480
*/
void sub_1378be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378be0ULL || rel >= 0x1378de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378de0 size=240 callers=0 calls=6
   calls: sub_1345aa0, sub_134c3e0, sub_135e4d0, sub_1378ed0, sub_1379010, sub_137e480
*/
void sub_1378de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378de0ULL || rel >= 0x1378ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01378ed0 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_137a850, sub_137aaa0
*/
void sub_1378ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378ed0ULL || rel >= 0x1379010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379010 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_137acb0, sub_137af00
*/
void sub_1379010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379010ULL || rel >= 0x1379150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379150 size=16 callers=3 calls=0
*/
void sub_1379150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379150ULL || rel >= 0x1379160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379160 size=16 callers=15 calls=0
*/
void sub_1379160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379160ULL || rel >= 0x1379170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379170 size=752 callers=3 calls=3
   calls: sub_12fa520, sub_1379460, sub_76bc00
*/
void sub_1379170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379170ULL || rel >= 0x1379460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379460 size=144 callers=6 calls=0
*/
void sub_1379460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379460ULL || rel >= 0x13794f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013794f0 size=272 callers=9 calls=3
   calls: sub_12fa520, sub_76bc60, sub_76bc80
*/
void sub_13794f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13794f0ULL || rel >= 0x1379600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379600 size=96 callers=5 calls=0
*/
void sub_1379600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379600ULL || rel >= 0x1379660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379660 size=80 callers=3 calls=1
   calls: sub_12fa520
*/
void sub_1379660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379660ULL || rel >= 0x13796b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013796b0 size=80 callers=0 calls=1
   calls: sub_12fa520
*/
void sub_13796b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13796b0ULL || rel >= 0x1379700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379700 size=160 callers=9 calls=4
   calls: sub_12f9ef0, sub_1379460, sub_13797a0, sub_762fd0
*/
void sub_1379700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379700ULL || rel >= 0x13797a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013797a0 size=208 callers=1 calls=3
   calls: sub_12fa520, sub_1379170, sub_1379870
*/
void sub_13797a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13797a0ULL || rel >= 0x1379870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379870 size=416 callers=2 calls=1
   calls: sub_12fa520
*/
void sub_1379870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379870ULL || rel >= 0x1379a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379a10 size=80 callers=30 calls=1
   calls: sub_12fa520
*/
void sub_1379a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379a10ULL || rel >= 0x1379a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379a60 size=64 callers=8 calls=0
*/
void sub_1379a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379a60ULL || rel >= 0x1379aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379aa0 size=240 callers=6 calls=4
   calls: sub_12f9ef0, sub_1379170, sub_1379460, sub_1379870
*/
void sub_1379aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379aa0ULL || rel >= 0x1379b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379b90 size=144 callers=16 calls=1
   calls: sub_12fa520
*/
void sub_1379b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379b90ULL || rel >= 0x1379c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379c20 size=64 callers=5 calls=0
*/
void sub_1379c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379c20ULL || rel >= 0x1379c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379c60 size=256 callers=12 calls=2
   calls: sub_12fa520, sub_1379460
*/
void sub_1379c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379c60ULL || rel >= 0x1379d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379d60 size=64 callers=10 calls=0
*/
void sub_1379d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379d60ULL || rel >= 0x1379da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379da0 size=80 callers=3 calls=0
*/
void sub_1379da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379da0ULL || rel >= 0x1379df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379df0 size=192 callers=10 calls=2
   calls: sub_12fa520, sub_7c2280
*/
void sub_1379df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379df0ULL || rel >= 0x1379eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379eb0 size=64 callers=1 calls=0
*/
void sub_1379eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379eb0ULL || rel >= 0x1379ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379ef0 size=16 callers=8 calls=0
*/
void sub_1379ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379ef0ULL || rel >= 0x1379f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379f00 size=16 callers=1 calls=0
*/
void sub_1379f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379f00ULL || rel >= 0x1379f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379f10 size=16 callers=3 calls=0
*/
void sub_1379f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379f10ULL || rel >= 0x1379f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379f20 size=16 callers=18 calls=0
*/
void sub_1379f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379f20ULL || rel >= 0x1379f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379f30 size=96 callers=0 calls=2
   calls: sub_12fa520, sub_1379460
*/
void sub_1379f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379f30ULL || rel >= 0x1379f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01379f90 size=128 callers=2 calls=2
   calls: sub_12fa520, sub_1379460
*/
void sub_1379f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1379f90ULL || rel >= 0x137a010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a010 size=64 callers=1 calls=0
*/
void sub_137a010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a010ULL || rel >= 0x137a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a050 size=16 callers=15 calls=0
*/
void sub_137a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a050ULL || rel >= 0x137a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a060 size=16 callers=3 calls=0
*/
void sub_137a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a060ULL || rel >= 0x137a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a070 size=32 callers=25 calls=0
*/
void sub_137a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a070ULL || rel >= 0x137a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a090 size=32 callers=2 calls=0
*/
void sub_137a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a090ULL || rel >= 0x137a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a0b0 size=176 callers=3 calls=0
*/
void sub_137a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a0b0ULL || rel >= 0x137a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a160 size=16 callers=7 calls=0
*/
void sub_137a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a160ULL || rel >= 0x137a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a170 size=48 callers=1 calls=0
*/
void sub_137a170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a170ULL || rel >= 0x137a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a1a0 size=48 callers=2 calls=0
*/
void sub_137a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a1a0ULL || rel >= 0x137a1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a1d0 size=80 callers=1 calls=0
*/
void sub_137a1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a1d0ULL || rel >= 0x137a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a220 size=96 callers=1 calls=0
*/
void sub_137a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a220ULL || rel >= 0x137a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a280 size=16 callers=1 calls=0
*/
void sub_137a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a280ULL || rel >= 0x137a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a290 size=160 callers=1 calls=1
   calls: sub_12fa520
*/
void sub_137a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a290ULL || rel >= 0x137a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a330 size=16 callers=3 calls=0
*/
void sub_137a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a330ULL || rel >= 0x137a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a340 size=160 callers=4 calls=0
*/
void sub_137a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a340ULL || rel >= 0x137a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a3e0 size=48 callers=1 calls=0
*/
void sub_137a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a3e0ULL || rel >= 0x137a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a410 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_137a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a410ULL || rel >= 0x137a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a630 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_137a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a630ULL || rel >= 0x137a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137a850 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_137a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137a850ULL || rel >= 0x137aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137aaa0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_137aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137aaa0ULL || rel >= 0x137acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137acb0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_137acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137acb0ULL || rel >= 0x137af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137af00 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_137af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137af00ULL || rel >= 0x137b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b110 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_137b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b110ULL || rel >= 0x137b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b180 size=80 callers=0 calls=0
*/
void sub_137b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b180ULL || rel >= 0x137b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b1d0 size=80 callers=0 calls=0
*/
void sub_137b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b1d0ULL || rel >= 0x137b220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b220 size=80 callers=0 calls=0
*/
void sub_137b220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b220ULL || rel >= 0x137b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b270 size=80 callers=0 calls=0
*/
void sub_137b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b270ULL || rel >= 0x137b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b2c0 size=80 callers=0 calls=0
*/
void sub_137b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b2c0ULL || rel >= 0x137b310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b310 size=80 callers=0 calls=0
*/
void sub_137b310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b310ULL || rel >= 0x137b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b360 size=80 callers=0 calls=0
*/
void sub_137b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b360ULL || rel >= 0x137b3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b3b0 size=96 callers=0 calls=0
*/
void sub_137b3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b3b0ULL || rel >= 0x137b410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b410 size=304 callers=0 calls=5
   calls: sub_1345aa0, sub_134c3e0, sub_1358150, sub_137b770, sub_137e480
*/
void sub_137b410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b410ULL || rel >= 0x137b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b540 size=560 callers=0 calls=5
   calls: sub_1346e90, sub_134d370, sub_13586b0, sub_137bd80, sub_137e480
*/
void sub_137b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b540ULL || rel >= 0x137b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b770 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_137bfa0, sub_137c1f0
*/
void sub_137b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b770ULL || rel >= 0x137b8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b8b0 size=16 callers=18 calls=0
*/
void sub_137b8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b8b0ULL || rel >= 0x137b8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b8c0 size=32 callers=2 calls=0
*/
void sub_137b8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b8c0ULL || rel >= 0x137b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b8e0 size=96 callers=7 calls=1
   calls: sub_136e810
*/
void sub_137b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b8e0ULL || rel >= 0x137b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b940 size=32 callers=8 calls=0
*/
void sub_137b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b940ULL || rel >= 0x137b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b960 size=16 callers=2 calls=0
*/
void sub_137b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b960ULL || rel >= 0x137b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b970 size=48 callers=15 calls=0
*/
void sub_137b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b970ULL || rel >= 0x137b9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137b9a0 size=176 callers=2 calls=0
*/
void sub_137b9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b9a0ULL || rel >= 0x137ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137ba50 size=80 callers=1 calls=0
*/
void sub_137ba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137ba50ULL || rel >= 0x137baa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137baa0 size=16 callers=14 calls=0
*/
void sub_137baa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137baa0ULL || rel >= 0x137bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bab0 size=64 callers=6 calls=1
   calls: sub_136e780
*/
void sub_137bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bab0ULL || rel >= 0x137baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137baf0 size=16 callers=1 calls=0
*/
void sub_137baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137baf0ULL || rel >= 0x137bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bb00 size=16 callers=1 calls=0
*/
void sub_137bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bb00ULL || rel >= 0x137bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bb10 size=80 callers=3 calls=0
*/
void sub_137bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bb10ULL || rel >= 0x137bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bb60 size=64 callers=5 calls=0
*/
void sub_137bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bb60ULL || rel >= 0x137bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bba0 size=16 callers=1 calls=0
*/
void sub_137bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bba0ULL || rel >= 0x137bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bbb0 size=16 callers=2 calls=0
*/
void sub_137bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bbb0ULL || rel >= 0x137bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bbc0 size=32 callers=1 calls=0
*/
void sub_137bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bbc0ULL || rel >= 0x137bbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bbe0 size=16 callers=1 calls=0
*/
void sub_137bbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bbe0ULL || rel >= 0x137bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bbf0 size=32 callers=1 calls=0
*/
void sub_137bbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bbf0ULL || rel >= 0x137bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bc10 size=16 callers=1 calls=0
*/
void sub_137bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bc10ULL || rel >= 0x137bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bc20 size=16 callers=1 calls=0
*/
void sub_137bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bc20ULL || rel >= 0x137bc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bc30 size=16 callers=2 calls=0
*/
void sub_137bc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bc30ULL || rel >= 0x137bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bc40 size=16 callers=2 calls=0
*/
void sub_137bc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bc40ULL || rel >= 0x137bc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bc50 size=16 callers=2 calls=0
*/
void sub_137bc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bc50ULL || rel >= 0x137bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bc60 size=16 callers=2 calls=0
*/
void sub_137bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bc60ULL || rel >= 0x137bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bc70 size=32 callers=2 calls=0
*/
void sub_137bc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bc70ULL || rel >= 0x137bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bc90 size=16 callers=2 calls=0
*/
void sub_137bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bc90ULL || rel >= 0x137bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bca0 size=32 callers=2 calls=0
*/
void sub_137bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bca0ULL || rel >= 0x137bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bcc0 size=48 callers=2 calls=0
*/
void sub_137bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bcc0ULL || rel >= 0x137bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bcf0 size=48 callers=1 calls=0
*/
void sub_137bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bcf0ULL || rel >= 0x137bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bd20 size=48 callers=2 calls=0
*/
void sub_137bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bd20ULL || rel >= 0x137bd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bd50 size=48 callers=1 calls=0
*/
void sub_137bd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bd50ULL || rel >= 0x137bd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bd80 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_137bd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bd80ULL || rel >= 0x137bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137bfa0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_137bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137bfa0ULL || rel >= 0x137c1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137c1f0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_137c1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137c1f0ULL || rel >= 0x137c400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137c400 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_137c400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137c400ULL || rel >= 0x137c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137c470 size=240 callers=0 calls=3
   calls: sub_137c710, sub_137e480, sub_b4c070
*/
void sub_137c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137c470ULL || rel >= 0x137c560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137c560 size=192 callers=0 calls=3
   calls: sub_137c710, sub_137e480, sub_b4c070
*/
void sub_137c560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137c560ULL || rel >= 0x137c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137c620 size=240 callers=0 calls=3
   calls: sub_137cee0, sub_137e480, sub_b4c070
*/
void sub_137c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137c620ULL || rel >= 0x137c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137c710 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_137d100, sub_137d350
*/
void sub_137c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137c710ULL || rel >= 0x137c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137c850 size=80 callers=3 calls=0
*/
void sub_137c850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137c850ULL || rel >= 0x137c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137c8a0 size=288 callers=18 calls=2
   calls: sub_136b580, sub_b751c0
*/
void sub_137c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137c8a0ULL || rel >= 0x137c9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137c9c0 size=80 callers=13 calls=0
*/
void sub_137c9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137c9c0ULL || rel >= 0x137ca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137ca10 size=288 callers=34 calls=2
   calls: sub_136b580, sub_b751c0
*/
void sub_137ca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137ca10ULL || rel >= 0x137cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137cb30 size=80 callers=1 calls=0
*/
void sub_137cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137cb30ULL || rel >= 0x137cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137cb80 size=80 callers=1 calls=0
*/
void sub_137cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137cb80ULL || rel >= 0x137cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137cbd0 size=304 callers=9 calls=2
   calls: sub_136b580, sub_b751c0
*/
void sub_137cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137cbd0ULL || rel >= 0x137cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137cd00 size=32 callers=1 calls=0
*/
void sub_137cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137cd00ULL || rel >= 0x137cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137cd20 size=48 callers=1 calls=0
*/
void sub_137cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137cd20ULL || rel >= 0x137cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137cd50 size=80 callers=0 calls=0
*/
void sub_137cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137cd50ULL || rel >= 0x137cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137cda0 size=80 callers=0 calls=0
*/
void sub_137cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137cda0ULL || rel >= 0x137cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137cdf0 size=80 callers=0 calls=0
*/
void sub_137cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137cdf0ULL || rel >= 0x137ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137ce40 size=80 callers=0 calls=0
*/
void sub_137ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137ce40ULL || rel >= 0x137ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137ce90 size=80 callers=0 calls=0
*/
void sub_137ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137ce90ULL || rel >= 0x137cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137cee0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_137cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137cee0ULL || rel >= 0x137d100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137d100 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_137d100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137d100ULL || rel >= 0x137d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137d350 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_137d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137d350ULL || rel >= 0x137d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137d560 size=3232 callers=2 calls=41
   calls: sub_1366680, sub_1380360, sub_13805d0, sub_13806b0, sub_1380850, sub_1380930, sub_1380a10, sub_1380af0, sub_1380bd0, sub_1380cb0, sub_1380d90, sub_1380e70
   ... +29 more
*/
void sub_137d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137d560ULL || rel >= 0x137e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137e200 size=640 callers=1 calls=12
   calls: sub_134f480, sub_137e4a0, sub_137e690, sub_137e880, sub_137ea70, sub_137ec60, sub_137ee50, sub_137f040, sub_137f230, sub_1398900, sub_5e4d40, sub_5e65e0
*/
void sub_137e200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137e200ULL || rel >= 0x137e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137e480 size=32 callers=348 calls=0
*/
void sub_137e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137e480ULL || rel >= 0x137e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137e4a0 size=496 callers=1 calls=3
   calls: sub_1382340, sub_1382610, sub_13828e0
*/
void sub_137e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137e4a0ULL || rel >= 0x137e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137e690 size=496 callers=1 calls=3
   calls: sub_1382bb0, sub_1382e80, sub_1383150
*/
void sub_137e690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137e690ULL || rel >= 0x137e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137e880 size=496 callers=1 calls=3
   calls: sub_1383420, sub_13836f0, sub_13839c0
*/
void sub_137e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137e880ULL || rel >= 0x137ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137ea70 size=496 callers=1 calls=3
   calls: sub_1383c90, sub_1383f60, sub_1384230
*/
void sub_137ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137ea70ULL || rel >= 0x137ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137ec60 size=496 callers=1 calls=3
   calls: sub_1384500, sub_13847d0, sub_1384aa0
*/
void sub_137ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137ec60ULL || rel >= 0x137ee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137ee50 size=496 callers=1 calls=3
   calls: sub_1384d70, sub_1385040, sub_1385310
*/
void sub_137ee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137ee50ULL || rel >= 0x137f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137f040 size=496 callers=1 calls=3
   calls: sub_13855e0, sub_13858b0, sub_1385b80
*/
void sub_137f040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137f040ULL || rel >= 0x137f230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137f230 size=496 callers=1 calls=3
   calls: sub_1385e50, sub_1386120, sub_13863f0
*/
void sub_137f230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137f230ULL || rel >= 0x137f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137f420 size=160 callers=0 calls=2
   calls: sub_5e4f80, sub_5e6720
*/
void sub_137f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137f420ULL || rel >= 0x137f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137f4c0 size=160 callers=0 calls=2
   calls: sub_5e4f80, sub_5e6720
*/
void sub_137f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137f4c0ULL || rel >= 0x137f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137f560 size=336 callers=1 calls=1
   calls: sub_139ea00
*/
void sub_137f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137f560ULL || rel >= 0x137f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137f6b0 size=336 callers=6 calls=1
   calls: sub_139ff60
*/
void sub_137f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137f6b0ULL || rel >= 0x137f800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137f800 size=112 callers=6 calls=2
   calls: save_process, sub_139ffb0
*/
void sub_137f800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137f800ULL || rel >= 0x137f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137f870 size=112 callers=7 calls=2
   calls: sub_139ffb0, sub_13a00a0
*/
void sub_137f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137f870ULL || rel >= 0x137f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137f8e0 size=112 callers=1 calls=2
   calls: sub_139ffb0, sub_13a00c0
*/
void sub_137f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137f8e0ULL || rel >= 0x137f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137f950 size=112 callers=7 calls=2
   calls: sub_139ffb0, sub_5e66b0
*/
void sub_137f950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137f950ULL || rel >= 0x137f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137f9c0 size=128 callers=7 calls=1
   calls: sub_13a0100
*/
void sub_137f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137f9c0ULL || rel >= 0x137fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137fa40 size=96 callers=2 calls=1
   calls: sub_139a1b0
*/
void sub_137fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137fa40ULL || rel >= 0x137faa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137faa0 size=368 callers=1 calls=6
   calls: load_process, sub_137f560, sub_139ea50, sub_139ea80, sub_139eaa0, sub_139eae0
*/
void sub_137faa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137faa0ULL || rel >= 0x137fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137fc10 size=112 callers=2 calls=1
   calls: sub_1357580
*/
void sub_137fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137fc10ULL || rel >= 0x137fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0137fc80 size=1440 callers=0 calls=3
   calls: sub_1398640, sub_5cf8f0, sub_65f110
*/
void sub_137fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137fc80ULL || rel >= 0x1380220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380220 size=16 callers=0 calls=0
*/
void sub_1380220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380220ULL || rel >= 0x1380230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380230 size=112 callers=0 calls=0
*/
void sub_1380230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380230ULL || rel >= 0x13802a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013802a0 size=112 callers=0 calls=0
*/
void sub_13802a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13802a0ULL || rel >= 0x1380310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380310 size=16 callers=0 calls=0
*/
void sub_1380310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380310ULL || rel >= 0x1380320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380320 size=16 callers=0 calls=0
*/
void sub_1380320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380320ULL || rel >= 0x1380330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380330 size=16 callers=0 calls=0
*/
void sub_1380330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380330ULL || rel >= 0x1380340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380340 size=32 callers=0 calls=0
*/
void sub_1380340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380340ULL || rel >= 0x1380360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380360 size=624 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1380360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380360ULL || rel >= 0x13805d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013805d0 size=224 callers=1 calls=1
   calls: sub_138f100
*/
void sub_13805d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13805d0ULL || rel >= 0x13806b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013806b0 size=416 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_13806b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13806b0ULL || rel >= 0x1380850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380850 size=224 callers=1 calls=1
   calls: sub_13776a0
*/
void sub_1380850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380850ULL || rel >= 0x1380930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380930 size=224 callers=1 calls=1
   calls: sub_13667b0
*/
void sub_1380930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380930ULL || rel >= 0x1380a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380a10 size=224 callers=1 calls=1
   calls: sub_13969f0
*/
void sub_1380a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380a10ULL || rel >= 0x1380af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380af0 size=224 callers=1 calls=1
   calls: sub_1356630
*/
void sub_1380af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380af0ULL || rel >= 0x1380bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380bd0 size=224 callers=2 calls=1
   calls: sub_1378820
*/
void sub_1380bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380bd0ULL || rel >= 0x1380cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380cb0 size=224 callers=1 calls=1
   calls: sub_13615c0
*/
void sub_1380cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380cb0ULL || rel >= 0x1380d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380d90 size=224 callers=1 calls=1
   calls: sub_137b110
*/
void sub_1380d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380d90ULL || rel >= 0x1380e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380e70 size=224 callers=1 calls=1
   calls: sub_1389ee0
*/
void sub_1380e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380e70ULL || rel >= 0x1380f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01380f50 size=224 callers=1 calls=1
   calls: sub_137c400
*/
void sub_1380f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380f50ULL || rel >= 0x1381030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381030 size=224 callers=1 calls=1
   calls: sub_134eb90
*/
void sub_1381030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381030ULL || rel >= 0x1381110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381110 size=224 callers=1 calls=1
   calls: sub_13522f0
*/
void sub_1381110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381110ULL || rel >= 0x13811f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013811f0 size=224 callers=1 calls=1
   calls: sub_138e3a0
*/
void sub_13811f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13811f0ULL || rel >= 0x13812d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013812d0 size=224 callers=1 calls=1
   calls: sub_1363740
*/
void sub_13812d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13812d0ULL || rel >= 0x13813b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013813b0 size=224 callers=1 calls=1
   calls: sub_1365680
*/
void sub_13813b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13813b0ULL || rel >= 0x1381490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381490 size=224 callers=1 calls=1
   calls: sub_136bf40
*/
void sub_1381490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381490ULL || rel >= 0x1381570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381570 size=224 callers=1 calls=1
   calls: sub_1392d30
*/
void sub_1381570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381570ULL || rel >= 0x1381650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381650 size=224 callers=1 calls=1
   calls: sub_1364460
*/
void sub_1381650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381650ULL || rel >= 0x1381730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381730 size=224 callers=1 calls=1
   calls: sub_13917b0
*/
void sub_1381730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381730ULL || rel >= 0x1381810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381810 size=384 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1381810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381810ULL || rel >= 0x1381990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381990 size=224 callers=1 calls=1
   calls: sub_134a2e0
*/
void sub_1381990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381990ULL || rel >= 0x1381a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381a70 size=224 callers=1 calls=1
   calls: sub_136fe70
*/
void sub_1381a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381a70ULL || rel >= 0x1381b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381b50 size=224 callers=1 calls=1
   calls: sub_13938a0
*/
void sub_1381b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381b50ULL || rel >= 0x1381c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381c30 size=224 callers=1 calls=1
   calls: sub_1344a30
*/
void sub_1381c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381c30ULL || rel >= 0x1381d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381d10 size=224 callers=1 calls=1
   calls: sub_134b8e0
*/
void sub_1381d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381d10ULL || rel >= 0x1381df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381df0 size=224 callers=1 calls=1
   calls: sub_136f150
*/
void sub_1381df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381df0ULL || rel >= 0x1381ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381ed0 size=224 callers=1 calls=1
   calls: sub_1358280
*/
void sub_1381ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381ed0ULL || rel >= 0x1381fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01381fb0 size=224 callers=1 calls=1
   calls: sub_138ff20
*/
void sub_1381fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1381fb0ULL || rel >= 0x1382090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382090 size=224 callers=1 calls=1
   calls: sub_136e3e0
*/
void sub_1382090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382090ULL || rel >= 0x1382170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382170 size=464 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1382170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382170ULL || rel >= 0x1382340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382340 size=656 callers=1 calls=0
*/
void sub_1382340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382340ULL || rel >= 0x13825d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013825d0 size=16 callers=0 calls=0
*/
void sub_13825d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13825d0ULL || rel >= 0x13825e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013825e0 size=16 callers=0 calls=0
*/
void sub_13825e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13825e0ULL || rel >= 0x13825f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013825f0 size=16 callers=0 calls=0
*/
void sub_13825f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13825f0ULL || rel >= 0x1382600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382600 size=16 callers=0 calls=0
*/
void sub_1382600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382600ULL || rel >= 0x1382610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382610 size=656 callers=1 calls=0
*/
void sub_1382610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382610ULL || rel >= 0x13828a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013828a0 size=16 callers=0 calls=0
*/
void sub_13828a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13828a0ULL || rel >= 0x13828b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013828b0 size=16 callers=0 calls=0
*/
void sub_13828b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13828b0ULL || rel >= 0x13828c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013828c0 size=16 callers=0 calls=0
*/
void sub_13828c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13828c0ULL || rel >= 0x13828d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013828d0 size=16 callers=0 calls=0
*/
void sub_13828d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13828d0ULL || rel >= 0x13828e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013828e0 size=656 callers=1 calls=0
*/
void sub_13828e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13828e0ULL || rel >= 0x1382b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382b70 size=16 callers=0 calls=0
*/
void sub_1382b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382b70ULL || rel >= 0x1382b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382b80 size=16 callers=0 calls=0
*/
void sub_1382b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382b80ULL || rel >= 0x1382b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382b90 size=16 callers=0 calls=0
*/
void sub_1382b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382b90ULL || rel >= 0x1382ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382ba0 size=16 callers=0 calls=0
*/
void sub_1382ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382ba0ULL || rel >= 0x1382bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382bb0 size=656 callers=1 calls=0
*/
void sub_1382bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382bb0ULL || rel >= 0x1382e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382e40 size=16 callers=0 calls=0
*/
void sub_1382e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382e40ULL || rel >= 0x1382e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382e50 size=16 callers=0 calls=0
*/
void sub_1382e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382e50ULL || rel >= 0x1382e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382e60 size=16 callers=0 calls=0
*/
void sub_1382e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382e60ULL || rel >= 0x1382e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382e70 size=16 callers=0 calls=0
*/
void sub_1382e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382e70ULL || rel >= 0x1382e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01382e80 size=656 callers=1 calls=0
*/
void sub_1382e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1382e80ULL || rel >= 0x1383110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383110 size=16 callers=0 calls=0
*/
void sub_1383110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383110ULL || rel >= 0x1383120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383120 size=16 callers=0 calls=0
*/
void sub_1383120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383120ULL || rel >= 0x1383130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383130 size=16 callers=0 calls=0
*/
void sub_1383130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383130ULL || rel >= 0x1383140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383140 size=16 callers=0 calls=0
*/
void sub_1383140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383140ULL || rel >= 0x1383150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383150 size=656 callers=1 calls=0
*/
void sub_1383150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383150ULL || rel >= 0x13833e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013833e0 size=16 callers=0 calls=0
*/
void sub_13833e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13833e0ULL || rel >= 0x13833f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013833f0 size=16 callers=0 calls=0
*/
void sub_13833f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13833f0ULL || rel >= 0x1383400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383400 size=16 callers=0 calls=0
*/
void sub_1383400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383400ULL || rel >= 0x1383410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383410 size=16 callers=0 calls=0
*/
void sub_1383410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383410ULL || rel >= 0x1383420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383420 size=656 callers=1 calls=0
*/
void sub_1383420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383420ULL || rel >= 0x13836b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013836b0 size=16 callers=0 calls=0
*/
void sub_13836b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13836b0ULL || rel >= 0x13836c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013836c0 size=16 callers=0 calls=0
*/
void sub_13836c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13836c0ULL || rel >= 0x13836d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013836d0 size=16 callers=0 calls=0
*/
void sub_13836d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13836d0ULL || rel >= 0x13836e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013836e0 size=16 callers=0 calls=0
*/
void sub_13836e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13836e0ULL || rel >= 0x13836f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013836f0 size=656 callers=1 calls=0
*/
void sub_13836f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13836f0ULL || rel >= 0x1383980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383980 size=16 callers=0 calls=0
*/
void sub_1383980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383980ULL || rel >= 0x1383990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383990 size=16 callers=0 calls=0
*/
void sub_1383990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383990ULL || rel >= 0x13839a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013839a0 size=16 callers=0 calls=0
*/
void sub_13839a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13839a0ULL || rel >= 0x13839b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013839b0 size=16 callers=0 calls=0
*/
void sub_13839b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13839b0ULL || rel >= 0x13839c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013839c0 size=656 callers=1 calls=0
*/
void sub_13839c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13839c0ULL || rel >= 0x1383c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383c50 size=16 callers=0 calls=0
*/
void sub_1383c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383c50ULL || rel >= 0x1383c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383c60 size=16 callers=0 calls=0
*/
void sub_1383c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383c60ULL || rel >= 0x1383c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383c70 size=16 callers=0 calls=0
*/
void sub_1383c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383c70ULL || rel >= 0x1383c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383c80 size=16 callers=0 calls=0
*/
void sub_1383c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383c80ULL || rel >= 0x1383c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383c90 size=656 callers=1 calls=0
*/
void sub_1383c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383c90ULL || rel >= 0x1383f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383f20 size=16 callers=0 calls=0
*/
void sub_1383f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383f20ULL || rel >= 0x1383f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383f30 size=16 callers=0 calls=0
*/
void sub_1383f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383f30ULL || rel >= 0x1383f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383f40 size=16 callers=0 calls=0
*/
void sub_1383f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383f40ULL || rel >= 0x1383f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383f50 size=16 callers=0 calls=0
*/
void sub_1383f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383f50ULL || rel >= 0x1383f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01383f60 size=656 callers=1 calls=0
*/
void sub_1383f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1383f60ULL || rel >= 0x13841f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013841f0 size=16 callers=0 calls=0
*/
void sub_13841f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13841f0ULL || rel >= 0x1384200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384200 size=16 callers=0 calls=0
*/
void sub_1384200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384200ULL || rel >= 0x1384210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384210 size=16 callers=0 calls=0
*/
void sub_1384210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384210ULL || rel >= 0x1384220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384220 size=16 callers=0 calls=0
*/
void sub_1384220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384220ULL || rel >= 0x1384230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384230 size=656 callers=1 calls=0
*/
void sub_1384230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384230ULL || rel >= 0x13844c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013844c0 size=16 callers=0 calls=0
*/
void sub_13844c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13844c0ULL || rel >= 0x13844d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013844d0 size=16 callers=0 calls=0
*/
void sub_13844d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13844d0ULL || rel >= 0x13844e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013844e0 size=16 callers=0 calls=0
*/
void sub_13844e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13844e0ULL || rel >= 0x13844f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013844f0 size=16 callers=0 calls=0
*/
void sub_13844f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13844f0ULL || rel >= 0x1384500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384500 size=656 callers=1 calls=0
*/
void sub_1384500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384500ULL || rel >= 0x1384790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384790 size=16 callers=0 calls=0
*/
void sub_1384790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384790ULL || rel >= 0x13847a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013847a0 size=16 callers=0 calls=0
*/
void sub_13847a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13847a0ULL || rel >= 0x13847b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013847b0 size=16 callers=0 calls=0
*/
void sub_13847b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13847b0ULL || rel >= 0x13847c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013847c0 size=16 callers=0 calls=0
*/
void sub_13847c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13847c0ULL || rel >= 0x13847d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013847d0 size=656 callers=1 calls=0
*/
void sub_13847d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13847d0ULL || rel >= 0x1384a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384a60 size=16 callers=0 calls=0
*/
void sub_1384a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384a60ULL || rel >= 0x1384a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384a70 size=16 callers=0 calls=0
*/
void sub_1384a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384a70ULL || rel >= 0x1384a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384a80 size=16 callers=0 calls=0
*/
void sub_1384a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384a80ULL || rel >= 0x1384a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384a90 size=16 callers=0 calls=0
*/
void sub_1384a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384a90ULL || rel >= 0x1384aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384aa0 size=656 callers=1 calls=0
*/
void sub_1384aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384aa0ULL || rel >= 0x1384d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384d30 size=16 callers=0 calls=0
*/
void sub_1384d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384d30ULL || rel >= 0x1384d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384d40 size=16 callers=0 calls=0
*/
void sub_1384d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384d40ULL || rel >= 0x1384d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384d50 size=16 callers=0 calls=0
*/
void sub_1384d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384d50ULL || rel >= 0x1384d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384d60 size=16 callers=0 calls=0
*/
void sub_1384d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384d60ULL || rel >= 0x1384d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01384d70 size=656 callers=1 calls=0
*/
void sub_1384d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1384d70ULL || rel >= 0x1385000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385000 size=16 callers=0 calls=0
*/
void sub_1385000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385000ULL || rel >= 0x1385010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385010 size=16 callers=0 calls=0
*/
void sub_1385010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385010ULL || rel >= 0x1385020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385020 size=16 callers=0 calls=0
*/
void sub_1385020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385020ULL || rel >= 0x1385030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385030 size=16 callers=0 calls=0
*/
void sub_1385030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385030ULL || rel >= 0x1385040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385040 size=656 callers=1 calls=0
*/
void sub_1385040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385040ULL || rel >= 0x13852d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013852d0 size=16 callers=0 calls=0
*/
void sub_13852d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13852d0ULL || rel >= 0x13852e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013852e0 size=16 callers=0 calls=0
*/
void sub_13852e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13852e0ULL || rel >= 0x13852f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013852f0 size=16 callers=0 calls=0
*/
void sub_13852f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13852f0ULL || rel >= 0x1385300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385300 size=16 callers=0 calls=0
*/
void sub_1385300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385300ULL || rel >= 0x1385310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385310 size=656 callers=1 calls=0
*/
void sub_1385310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385310ULL || rel >= 0x13855a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013855a0 size=16 callers=0 calls=0
*/
void sub_13855a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13855a0ULL || rel >= 0x13855b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013855b0 size=16 callers=0 calls=0
*/
void sub_13855b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13855b0ULL || rel >= 0x13855c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013855c0 size=16 callers=0 calls=0
*/
void sub_13855c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13855c0ULL || rel >= 0x13855d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013855d0 size=16 callers=0 calls=0
*/
void sub_13855d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13855d0ULL || rel >= 0x13855e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013855e0 size=656 callers=1 calls=0
*/
void sub_13855e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13855e0ULL || rel >= 0x1385870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385870 size=16 callers=0 calls=0
*/
void sub_1385870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385870ULL || rel >= 0x1385880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385880 size=16 callers=0 calls=0
*/
void sub_1385880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385880ULL || rel >= 0x1385890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385890 size=16 callers=0 calls=0
*/
void sub_1385890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385890ULL || rel >= 0x13858a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013858a0 size=16 callers=0 calls=0
*/
void sub_13858a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13858a0ULL || rel >= 0x13858b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013858b0 size=656 callers=1 calls=0
*/
void sub_13858b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13858b0ULL || rel >= 0x1385b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385b40 size=16 callers=0 calls=0
*/
void sub_1385b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385b40ULL || rel >= 0x1385b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385b50 size=16 callers=0 calls=0
*/
void sub_1385b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385b50ULL || rel >= 0x1385b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385b60 size=16 callers=0 calls=0
*/
void sub_1385b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385b60ULL || rel >= 0x1385b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385b70 size=16 callers=0 calls=0
*/
void sub_1385b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385b70ULL || rel >= 0x1385b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385b80 size=656 callers=1 calls=0
*/
void sub_1385b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385b80ULL || rel >= 0x1385e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385e10 size=16 callers=0 calls=0
*/
void sub_1385e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385e10ULL || rel >= 0x1385e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385e20 size=16 callers=0 calls=0
*/
void sub_1385e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385e20ULL || rel >= 0x1385e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385e30 size=16 callers=0 calls=0
*/
void sub_1385e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385e30ULL || rel >= 0x1385e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385e40 size=16 callers=0 calls=0
*/
void sub_1385e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385e40ULL || rel >= 0x1385e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01385e50 size=656 callers=1 calls=0
*/
void sub_1385e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1385e50ULL || rel >= 0x13860e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013860e0 size=16 callers=0 calls=0
*/
void sub_13860e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13860e0ULL || rel >= 0x13860f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013860f0 size=16 callers=0 calls=0
*/
void sub_13860f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13860f0ULL || rel >= 0x1386100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386100 size=16 callers=0 calls=0
*/
void sub_1386100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386100ULL || rel >= 0x1386110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386110 size=16 callers=0 calls=0
*/
void sub_1386110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386110ULL || rel >= 0x1386120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386120 size=656 callers=1 calls=0
*/
void sub_1386120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386120ULL || rel >= 0x13863b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013863b0 size=16 callers=0 calls=0
*/
void sub_13863b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13863b0ULL || rel >= 0x13863c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013863c0 size=16 callers=0 calls=0
*/
void sub_13863c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13863c0ULL || rel >= 0x13863d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013863d0 size=16 callers=0 calls=0
*/
void sub_13863d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13863d0ULL || rel >= 0x13863e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013863e0 size=16 callers=0 calls=0
*/
void sub_13863e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13863e0ULL || rel >= 0x13863f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013863f0 size=656 callers=1 calls=0
*/
void sub_13863f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13863f0ULL || rel >= 0x1386680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386680 size=16 callers=0 calls=0
*/
void sub_1386680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386680ULL || rel >= 0x1386690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386690 size=16 callers=0 calls=0
*/
void sub_1386690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386690ULL || rel >= 0x13866a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013866a0 size=16 callers=0 calls=0
*/
void sub_13866a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13866a0ULL || rel >= 0x13866b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013866b0 size=16 callers=0 calls=0
*/
void sub_13866b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13866b0ULL || rel >= 0x13866c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013866c0 size=96 callers=1 calls=2
   calls: sub_137e480, sub_1386720
*/
void sub_13866c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13866c0ULL || rel >= 0x1386720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386720 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_1387e10, sub_1388060
*/
void sub_1386720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386720ULL || rel >= 0x1386860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386860 size=128 callers=3 calls=2
   calls: sub_137e480, sub_1388270
*/
void sub_1386860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386860ULL || rel >= 0x13868e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013868e0 size=96 callers=6 calls=2
   calls: sub_137e480, sub_1386940
*/
void sub_13868e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13868e0ULL || rel >= 0x1386940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386940 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_1388490, sub_13886e0
*/
void sub_1386940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386940ULL || rel >= 0x1386a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386a80 size=128 callers=12 calls=2
   calls: sub_137e480, sub_13888f0
*/
void sub_1386a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386a80ULL || rel >= 0x1386b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386b00 size=128 callers=19 calls=2
   calls: sub_137e480, sub_1388b10
*/
void sub_1386b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386b00ULL || rel >= 0x1386b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386b80 size=96 callers=7 calls=2
   calls: sub_137e480, sub_1386be0
*/
void sub_1386b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386b80ULL || rel >= 0x1386be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386be0 size=320 callers=8 calls=3
   calls: sub_13471e0, sub_1388d30, sub_1388f80
*/
void sub_1386be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386be0ULL || rel >= 0x1386d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386d20 size=128 callers=20 calls=2
   calls: sub_137e480, sub_1388b10
*/
void sub_1386d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386d20ULL || rel >= 0x1386da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386da0 size=96 callers=8 calls=2
   calls: sub_137e480, sub_1386be0
*/
void sub_1386da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386da0ULL || rel >= 0x1386e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386e00 size=128 callers=2 calls=2
   calls: sub_137e480, sub_1388b10
*/
void sub_1386e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386e00ULL || rel >= 0x1386e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386e80 size=96 callers=1 calls=2
   calls: sub_137e480, sub_1386be0
*/
void sub_1386e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386e80ULL || rel >= 0x1386ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386ee0 size=128 callers=2 calls=2
   calls: sub_137e480, sub_1388b10
*/
void sub_1386ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386ee0ULL || rel >= 0x1386f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386f60 size=96 callers=1 calls=2
   calls: sub_137e480, sub_1386be0
*/
void sub_1386f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386f60ULL || rel >= 0x1386fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01386fc0 size=128 callers=9 calls=2
   calls: sub_137e480, sub_1389190
*/
void sub_1386fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1386fc0ULL || rel >= 0x1387040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01387040 size=96 callers=5 calls=2
   calls: sub_137e480, sub_13870a0
*/
void sub_1387040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1387040ULL || rel >= 0x13870a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013870a0 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_13893b0, sub_1389600
*/
void sub_13870a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13870a0ULL || rel >= 0x13871e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013871e0 size=128 callers=6 calls=2
   calls: sub_137e480, sub_1389810
*/
void sub_13871e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13871e0ULL || rel >= 0x1387260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01387260 size=96 callers=3 calls=2
   calls: sub_137e480, sub_13872c0
*/
void sub_1387260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1387260ULL || rel >= 0x13872c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013872c0 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_1389a30, sub_1389c80
*/
void sub_13872c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13872c0ULL || rel >= 0x1387400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01387400 size=80 callers=1 calls=2
   calls: sub_135caa0, sub_137e480
*/
void sub_1387400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1387400ULL || rel >= 0x1387450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01387450 size=128 callers=1 calls=2
   calls: sub_135e220, sub_137e480
*/
void sub_1387450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1387450ULL || rel >= 0x13874d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013874d0 size=80 callers=1 calls=2
   calls: sub_135caa0, sub_137e480
*/
void sub_13874d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13874d0ULL || rel >= 0x1387520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01387520 size=128 callers=1 calls=2
   calls: sub_135e220, sub_137e480
*/
void sub_1387520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1387520ULL || rel >= 0x13875a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013875a0 size=80 callers=1 calls=2
   calls: sub_135caa0, sub_137e480
*/
void sub_13875a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13875a0ULL || rel >= 0x13875f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013875f0 size=128 callers=1 calls=2
   calls: sub_135e220, sub_137e480
*/
void sub_13875f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13875f0ULL || rel >= 0x1387670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01387670 size=80 callers=1 calls=2
   calls: sub_135caa0, sub_137e480
*/
void sub_1387670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1387670ULL || rel >= 0x13876c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013876c0 size=128 callers=1 calls=2
   calls: sub_135e220, sub_137e480
*/
void sub_13876c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13876c0ULL || rel >= 0x1387740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01387740 size=1744 callers=0 calls=7
   calls: sub_135caa0, sub_137e480, sub_1386720, sub_1386940, sub_1386be0, sub_13870a0, sub_13872c0
*/
void sub_1387740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1387740ULL || rel >= 0x1387e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

