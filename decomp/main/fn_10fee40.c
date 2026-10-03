/* main functions 010fee40..0111f650 (142 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 010fee40 size=288 callers=2 calls=2
   calls: sub_10ff050, sub_15bc1e0
*/
void sub_10fee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fee40ULL || rel >= 0x10fef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fef60 size=80 callers=0 calls=1
   calls: sub_10ff360
*/
void sub_10fef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fef60ULL || rel >= 0x10fefb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fefb0 size=80 callers=0 calls=2
   calls: sub_10ff360, sub_15bc310
*/
void sub_10fefb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fefb0ULL || rel >= 0x10ff000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff000 size=80 callers=0 calls=2
   calls: sub_10ff360, sub_15bc310
*/
void sub_10ff000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff000ULL || rel >= 0x10ff050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff050 size=224 callers=3 calls=5
   calls: sub_10ff130, sub_15b9340, sub_15bc1e0, sub_15becb0, sub_6a54a0
*/
void sub_10ff050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff050ULL || rel >= 0x10ff130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff130 size=560 callers=1 calls=1
   calls: sub_15bc650
*/
void sub_10ff130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff130ULL || rel >= 0x10ff360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff360 size=96 callers=30 calls=3
   calls: sub_10ff360, sub_15bc310, sub_15bee80
*/
void sub_10ff360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff360ULL || rel >= 0x10ff3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff3c0 size=128 callers=0 calls=0
*/
void sub_10ff3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff3c0ULL || rel >= 0x10ff440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff440 size=96 callers=4 calls=0
*/
void sub_10ff440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff440ULL || rel >= 0x10ff4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff4a0 size=16 callers=0 calls=0
*/
void sub_10ff4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff4a0ULL || rel >= 0x10ff4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff4b0 size=96 callers=0 calls=0
*/
void sub_10ff4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff4b0ULL || rel >= 0x10ff510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff510 size=16 callers=1 calls=0
*/
void sub_10ff510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff510ULL || rel >= 0x10ff520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff520 size=16 callers=11 calls=0
*/
void sub_10ff520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff520ULL || rel >= 0x10ff530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff530 size=32 callers=6 calls=0
*/
void sub_10ff530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff530ULL || rel >= 0x10ff550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff550 size=80 callers=0 calls=0
*/
void sub_10ff550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff550ULL || rel >= 0x10ff5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff5a0 size=16 callers=0 calls=0
*/
void sub_10ff5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff5a0ULL || rel >= 0x10ff5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff5b0 size=464 callers=0 calls=0
*/
void sub_10ff5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff5b0ULL || rel >= 0x10ff780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff780 size=128 callers=0 calls=0
*/
void sub_10ff780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff780ULL || rel >= 0x10ff800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff800 size=48 callers=1 calls=0
*/
void sub_10ff800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff800ULL || rel >= 0x10ff830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff830 size=48 callers=0 calls=1
   calls: sub_10ff440
*/
void sub_10ff830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff830ULL || rel >= 0x10ff860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff860 size=64 callers=0 calls=1
   calls: sub_10fd8d0
*/
void sub_10ff860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff860ULL || rel >= 0x10ff8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff8a0 size=160 callers=0 calls=2
   calls: sub_10fd900, sub_10ff530
*/
void sub_10ff8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff8a0ULL || rel >= 0x10ff940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff940 size=16 callers=2 calls=0
*/
void sub_10ff940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff940ULL || rel >= 0x10ff950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff950 size=112 callers=0 calls=1
   calls: sub_10ff530
*/
void sub_10ff950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff950ULL || rel >= 0x10ff9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff9c0 size=16 callers=1 calls=0
*/
void sub_10ff9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff9c0ULL || rel >= 0x10ff9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ff9d0 size=112 callers=0 calls=1
   calls: sub_10ff530
*/
void sub_10ff9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ff9d0ULL || rel >= 0x10ffa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffa40 size=48 callers=0 calls=1
   calls: sub_10ff440
*/
void sub_10ffa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffa40ULL || rel >= 0x10ffa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffa70 size=64 callers=0 calls=1
   calls: sub_10fd9a0
*/
void sub_10ffa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffa70ULL || rel >= 0x10ffab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffab0 size=96 callers=0 calls=1
   calls: sub_10ff530
*/
void sub_10ffab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffab0ULL || rel >= 0x10ffb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffb10 size=16 callers=1 calls=0
*/
void sub_10ffb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffb10ULL || rel >= 0x10ffb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffb20 size=48 callers=0 calls=1
   calls: sub_10ff440
*/
void sub_10ffb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffb20ULL || rel >= 0x10ffb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffb50 size=64 callers=0 calls=1
   calls: sub_10fda30
*/
void sub_10ffb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffb50ULL || rel >= 0x10ffb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffb90 size=112 callers=0 calls=1
   calls: sub_10ff530
*/
void sub_10ffb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffb90ULL || rel >= 0x10ffc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffc00 size=240 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_10ffc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffc00ULL || rel >= 0x10ffcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffcf0 size=16 callers=1 calls=0
*/
void sub_10ffcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffcf0ULL || rel >= 0x10ffd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffd00 size=48 callers=0 calls=1
   calls: sub_10ff440
*/
void sub_10ffd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffd00ULL || rel >= 0x10ffd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffd30 size=64 callers=0 calls=1
   calls: sub_10fdac0
*/
void sub_10ffd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffd30ULL || rel >= 0x10ffd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffd70 size=112 callers=0 calls=1
   calls: sub_10ff530
*/
void sub_10ffd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffd70ULL || rel >= 0x10ffde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffde0 size=80 callers=0 calls=0
*/
void sub_10ffde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffde0ULL || rel >= 0x10ffe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffe30 size=160 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_10ffe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffe30ULL || rel >= 0x10ffed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ffed0 size=160 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_10ffed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ffed0ULL || rel >= 0x10fff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010fff70 size=160 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_10fff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10fff70ULL || rel >= 0x1100010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100010 size=160 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1100010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100010ULL || rel >= 0x11000b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011000b0 size=80 callers=0 calls=0
*/
void sub_11000b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11000b0ULL || rel >= 0x1100100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100100 size=160 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1100100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100100ULL || rel >= 0x11001a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011001a0 size=160 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_11001a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11001a0ULL || rel >= 0x1100240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100240 size=176 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1100240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100240ULL || rel >= 0x11002f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011002f0 size=176 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_11002f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11002f0ULL || rel >= 0x11003a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011003a0 size=128 callers=0 calls=0
*/
void sub_11003a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11003a0ULL || rel >= 0x1100420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100420 size=32 callers=0 calls=0
*/
void sub_1100420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100420ULL || rel >= 0x1100440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100440 size=192 callers=0 calls=2
   calls: sub_1062ad0, unnamed_74
*/
void sub_1100440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100440ULL || rel >= 0x1100500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100500 size=32 callers=0 calls=0
*/
void sub_1100500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100500ULL || rel >= 0x1100520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100520 size=80 callers=0 calls=0
*/
void sub_1100520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100520ULL || rel >= 0x1100570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100570 size=240 callers=0 calls=0
*/
void sub_1100570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100570ULL || rel >= 0x1100660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100660 size=80 callers=0 calls=0
*/
void sub_1100660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100660ULL || rel >= 0x11006b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011006b0 size=80 callers=0 calls=0
*/
void sub_11006b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11006b0ULL || rel >= 0x1100700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100700 size=16 callers=0 calls=0
*/
void sub_1100700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100700ULL || rel >= 0x1100710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100710 size=16 callers=0 calls=0
*/
void sub_1100710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100710ULL || rel >= 0x1100720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100720 size=80 callers=0 calls=0
*/
void sub_1100720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100720ULL || rel >= 0x1100770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100770 size=80 callers=0 calls=0
*/
void sub_1100770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100770ULL || rel >= 0x11007c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011007c0 size=128 callers=0 calls=0
*/
void sub_11007c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11007c0ULL || rel >= 0x1100840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100840 size=48 callers=6 calls=0
*/
void sub_1100840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100840ULL || rel >= 0x1100870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100870 size=128 callers=10 calls=0
*/
void sub_1100870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100870ULL || rel >= 0x11008f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011008f0 size=128 callers=0 calls=0
*/
void sub_11008f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11008f0ULL || rel >= 0x1100970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100970 size=80 callers=40 calls=1
   calls: sub_1100840
*/
void sub_1100970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100970ULL || rel >= 0x11009c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011009c0 size=16 callers=39 calls=0
*/
void sub_11009c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11009c0ULL || rel >= 0x11009d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011009d0 size=80 callers=3 calls=1
   calls: sub_1100870
*/
void sub_11009d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11009d0ULL || rel >= 0x1100a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100a20 size=128 callers=0 calls=0
*/
void sub_1100a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100a20ULL || rel >= 0x1100aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100aa0 size=48 callers=4 calls=1
   calls: sub_1100af0
*/
void sub_1100aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100aa0ULL || rel >= 0x1100ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100ad0 size=32 callers=2 calls=0
*/
void sub_1100ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100ad0ULL || rel >= 0x1100af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100af0 size=656 callers=1 calls=0
*/
void sub_1100af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100af0ULL || rel >= 0x1100d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100d80 size=128 callers=0 calls=0
*/
void sub_1100d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100d80ULL || rel >= 0x1100e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01100e00 size=848 callers=4 calls=2
   calls: sub_76f7f0, sub_7847d0
*/
void sub_1100e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100e00ULL || rel >= 0x1101150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01101150 size=128 callers=0 calls=0
*/
void sub_1101150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1101150ULL || rel >= 0x11011d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011011d0 size=496 callers=3 calls=1
   calls: sub_5d0b10
*/
void sub_11011d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11011d0ULL || rel >= 0x11013c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011013c0 size=80 callers=3 calls=1
   calls: sub_5d0e50
*/
void sub_11013c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11013c0ULL || rel >= 0x1101410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01101410 size=128 callers=0 calls=0
*/
void sub_1101410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1101410ULL || rel >= 0x1101490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01101490 size=16 callers=0 calls=0
*/
void sub_1101490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1101490ULL || rel >= 0x11014a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011014a0 size=16 callers=0 calls=0
*/
void sub_11014a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11014a0ULL || rel >= 0x11014b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011014b0 size=16 callers=0 calls=0
*/
void sub_11014b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11014b0ULL || rel >= 0x11014c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011014c0 size=128 callers=0 calls=0
*/
void sub_11014c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11014c0ULL || rel >= 0x1101540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01101540 size=1936 callers=1 calls=8
   calls: sub_1052df0, sub_10563d0, sub_1101cd0, sub_11022c0, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestBackgroundTradeStart
*/
void RequestBackgroundTradeStart(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1101540ULL || rel >= 0x1101cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01101cd0 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_11026d0, sub_6ce100
*/
void sub_1101cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1101cd0ULL || rel >= 0x1101e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01101e50 size=144 callers=0 calls=0
*/
void sub_1101e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1101e50ULL || rel >= 0x1101ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01101ee0 size=144 callers=0 calls=0
*/
void sub_1101ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1101ee0ULL || rel >= 0x1101f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01101f70 size=240 callers=0 calls=0
*/
void sub_1101f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1101f70ULL || rel >= 0x1102060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102060 size=144 callers=0 calls=0
*/
void sub_1102060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102060ULL || rel >= 0x11020f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011020f0 size=144 callers=0 calls=0
*/
void sub_11020f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11020f0ULL || rel >= 0x1102180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102180 size=16 callers=0 calls=0
*/
void sub_1102180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102180ULL || rel >= 0x1102190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102190 size=16 callers=0 calls=0
*/
void sub_1102190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102190ULL || rel >= 0x11021a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011021a0 size=144 callers=0 calls=0
*/
void sub_11021a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11021a0ULL || rel >= 0x1102230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102230 size=144 callers=0 calls=0
*/
void sub_1102230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102230ULL || rel >= 0x11022c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011022c0 size=368 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_11022c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11022c0ULL || rel >= 0x1102430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102430 size=80 callers=0 calls=0
*/
void sub_1102430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102430ULL || rel >= 0x1102480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102480 size=240 callers=0 calls=0
*/
void sub_1102480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102480ULL || rel >= 0x1102570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102570 size=80 callers=0 calls=0
*/
void sub_1102570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102570ULL || rel >= 0x11025c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011025c0 size=80 callers=0 calls=0
*/
void sub_11025c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11025c0ULL || rel >= 0x1102610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102610 size=16 callers=0 calls=0
*/
void sub_1102610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102610ULL || rel >= 0x1102620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102620 size=16 callers=0 calls=0
*/
void sub_1102620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102620ULL || rel >= 0x1102630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102630 size=80 callers=0 calls=0
*/
void sub_1102630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102630ULL || rel >= 0x1102680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102680 size=80 callers=0 calls=0
*/
void sub_1102680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102680ULL || rel >= 0x11026d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011026d0 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_11026d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11026d0ULL || rel >= 0x1102830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102830 size=176 callers=0 calls=0
*/
void sub_1102830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102830ULL || rel >= 0x11028e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011028e0 size=176 callers=0 calls=0
*/
void sub_11028e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11028e0ULL || rel >= 0x1102990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102990 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1102990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102990ULL || rel >= 0x1102a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102a00 size=64 callers=0 calls=1
   calls: sub_11030b0
*/
void sub_1102a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102a00ULL || rel >= 0x1102a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102a40 size=16 callers=0 calls=0
*/
void sub_1102a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102a40ULL || rel >= 0x1102a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102a50 size=48 callers=0 calls=0
*/
void sub_1102a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102a50ULL || rel >= 0x1102a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102a80 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1102a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102a80ULL || rel >= 0x1102b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102b40 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1102b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102b40ULL || rel >= 0x1102bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102bb0 size=176 callers=0 calls=0
*/
void sub_1102bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102bb0ULL || rel >= 0x1102c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102c60 size=176 callers=0 calls=0
*/
void sub_1102c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102c60ULL || rel >= 0x1102d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102d10 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1102d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102d10ULL || rel >= 0x1102d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102d80 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1102d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102d80ULL || rel >= 0x1102df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102df0 size=176 callers=0 calls=0
*/
void sub_1102df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102df0ULL || rel >= 0x1102ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102ea0 size=176 callers=0 calls=0
*/
void sub_1102ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102ea0ULL || rel >= 0x1102f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102f50 size=48 callers=0 calls=0
*/
void sub_1102f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102f50ULL || rel >= 0x1102f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01102f80 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1102f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1102f80ULL || rel >= 0x1103040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103040 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1103040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103040ULL || rel >= 0x11030b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011030b0 size=544 callers=1 calls=3
   calls: sub_1103590, sub_6a1f70, sub_6a1f80
*/
void sub_11030b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11030b0ULL || rel >= 0x11032d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011032d0 size=16 callers=0 calls=0
*/
void sub_11032d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11032d0ULL || rel >= 0x11032e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011032e0 size=64 callers=0 calls=0
*/
void sub_11032e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11032e0ULL || rel >= 0x1103320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103320 size=32 callers=0 calls=0
*/
void sub_1103320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103320ULL || rel >= 0x1103340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103340 size=16 callers=0 calls=0
*/
void sub_1103340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103340ULL || rel >= 0x1103350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103350 size=32 callers=0 calls=0
*/
void sub_1103350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103350ULL || rel >= 0x1103370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103370 size=80 callers=0 calls=0
*/
void sub_1103370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103370ULL || rel >= 0x11033c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011033c0 size=96 callers=0 calls=0
*/
void sub_11033c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11033c0ULL || rel >= 0x1103420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103420 size=32 callers=0 calls=0
*/
void sub_1103420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103420ULL || rel >= 0x1103440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103440 size=96 callers=0 calls=2
   calls: sub_10f5c10, sub_f9cab0
*/
void sub_1103440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103440ULL || rel >= 0x11034a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011034a0 size=64 callers=0 calls=0
*/
void sub_11034a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11034a0ULL || rel >= 0x11034e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011034e0 size=32 callers=0 calls=0
*/
void sub_11034e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11034e0ULL || rel >= 0x1103500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103500 size=16 callers=0 calls=0
*/
void sub_1103500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103500ULL || rel >= 0x1103510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103510 size=128 callers=0 calls=0
*/
void sub_1103510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103510ULL || rel >= 0x1103590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103590 size=208 callers=1 calls=0
*/
void sub_1103590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103590ULL || rel >= 0x1103660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103660 size=768 callers=0 calls=9
   calls: sub_1028430, sub_1028e70, sub_1029180, sub_1029520, sub_104dd10, sub_104e080, sub_104e090, sub_1104240, sub_11048e0
*/
void sub_1103660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103660ULL || rel >= 0x1103960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103960 size=64 callers=0 calls=0
*/
void sub_1103960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103960ULL || rel >= 0x11039a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011039a0 size=16 callers=0 calls=0
*/
void sub_11039a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11039a0ULL || rel >= 0x11039b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011039b0 size=16 callers=0 calls=0
*/
void sub_11039b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11039b0ULL || rel >= 0x11039c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011039c0 size=16 callers=0 calls=0
*/
void sub_11039c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11039c0ULL || rel >= 0x11039d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011039d0 size=480 callers=1 calls=3
   calls: sub_1103ea0, sub_1104070, sub_1104240
*/
void sub_11039d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11039d0ULL || rel >= 0x1103bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103bb0 size=48 callers=0 calls=1
   calls: sub_11039d0
*/
void sub_1103bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103bb0ULL || rel >= 0x1103be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103be0 size=64 callers=0 calls=0
*/
void sub_1103be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103be0ULL || rel >= 0x1103c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103c20 size=16 callers=0 calls=0
*/
void sub_1103c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103c20ULL || rel >= 0x1103c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103c30 size=16 callers=0 calls=0
*/
void sub_1103c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103c30ULL || rel >= 0x1103c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103c40 size=16 callers=0 calls=0
*/
void sub_1103c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103c40ULL || rel >= 0x1103c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103c50 size=16 callers=0 calls=0
*/
void sub_1103c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103c50ULL || rel >= 0x1103c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103c60 size=96 callers=0 calls=0
*/
void sub_1103c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103c60ULL || rel >= 0x1103cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103cc0 size=16 callers=0 calls=0
*/
void sub_1103cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103cc0ULL || rel >= 0x1103cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103cd0 size=48 callers=0 calls=0
*/
void sub_1103cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103cd0ULL || rel >= 0x1103d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103d00 size=16 callers=0 calls=0
*/
void sub_1103d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103d00ULL || rel >= 0x1103d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103d10 size=16 callers=0 calls=0
*/
void sub_1103d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103d10ULL || rel >= 0x1103d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103d20 size=16 callers=0 calls=0
*/
void sub_1103d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103d20ULL || rel >= 0x1103d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103d30 size=80 callers=0 calls=0
*/
void sub_1103d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103d30ULL || rel >= 0x1103d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103d80 size=160 callers=0 calls=0
*/
void sub_1103d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103d80ULL || rel >= 0x1103e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103e20 size=80 callers=0 calls=0
*/
void sub_1103e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103e20ULL || rel >= 0x1103e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103e70 size=48 callers=0 calls=0
*/
void sub_1103e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103e70ULL || rel >= 0x1103ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01103ea0 size=464 callers=1 calls=0
*/
void sub_1103ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1103ea0ULL || rel >= 0x1104070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104070 size=464 callers=3 calls=0
*/
void sub_1104070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104070ULL || rel >= 0x1104240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104240 size=896 callers=4 calls=4
   calls: sub_1104070, sub_11045f0, sub_11046d0, sub_619770
*/
void sub_1104240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104240ULL || rel >= 0x11045c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011045c0 size=48 callers=0 calls=1
   calls: sub_1104240
*/
void sub_11045c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11045c0ULL || rel >= 0x11045f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011045f0 size=224 callers=6 calls=0
*/
void sub_11045f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11045f0ULL || rel >= 0x11046d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011046d0 size=240 callers=7 calls=0
*/
void sub_11046d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11046d0ULL || rel >= 0x11047c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011047c0 size=64 callers=0 calls=0
*/
void sub_11047c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11047c0ULL || rel >= 0x1104800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104800 size=16 callers=0 calls=0
*/
void sub_1104800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104800ULL || rel >= 0x1104810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104810 size=16 callers=0 calls=0
*/
void sub_1104810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104810ULL || rel >= 0x1104820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104820 size=16 callers=0 calls=0
*/
void sub_1104820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104820ULL || rel >= 0x1104830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104830 size=128 callers=0 calls=1
   calls: sub_11048e0
*/
void sub_1104830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104830ULL || rel >= 0x11048b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011048b0 size=16 callers=0 calls=0
*/
void sub_11048b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11048b0ULL || rel >= 0x11048c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011048c0 size=16 callers=0 calls=0
*/
void sub_11048c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11048c0ULL || rel >= 0x11048d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011048d0 size=16 callers=0 calls=0
*/
void sub_11048d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11048d0ULL || rel >= 0x11048e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011048e0 size=464 callers=2 calls=0
*/
void sub_11048e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11048e0ULL || rel >= 0x1104ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104ab0 size=128 callers=0 calls=0
*/
void sub_1104ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104ab0ULL || rel >= 0x1104b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104b30 size=48 callers=1 calls=0
*/
void sub_1104b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104b30ULL || rel >= 0x1104b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104b60 size=160 callers=1 calls=0
*/
void sub_1104b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104b60ULL || rel >= 0x1104c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104c00 size=128 callers=0 calls=0
*/
void sub_1104c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104c00ULL || rel >= 0x1104c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104c80 size=16 callers=0 calls=0
*/
void sub_1104c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104c80ULL || rel >= 0x1104c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104c90 size=16 callers=0 calls=0
*/
void sub_1104c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104c90ULL || rel >= 0x1104ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104ca0 size=208 callers=0 calls=4
   calls: sub_11053d0, sub_1105440, sub_1105490, sub_1105500
*/
void sub_1104ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104ca0ULL || rel >= 0x1104d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104d70 size=16 callers=0 calls=0
*/
void sub_1104d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104d70ULL || rel >= 0x1104d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104d80 size=336 callers=4 calls=8
   calls: sub_1307de0, sub_130ad50, sub_130b1d0, sub_1311c60, sub_5cfad0, sub_67d450, sub_685270, sub_c4ac70
   ref: T_save_00
*/
void T_save_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104d80ULL || rel >= 0x1104ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104ed0 size=64 callers=0 calls=1
   calls: sub_1105220
*/
void sub_1104ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104ed0ULL || rel >= 0x1104f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104f10 size=32 callers=0 calls=0
*/
void sub_1104f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104f10ULL || rel >= 0x1104f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104f30 size=16 callers=0 calls=0
   ref: bin/appli/autosave/bin/autosave_00.arc
*/
void autosave_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104f30ULL || rel >= 0x1104f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104f40 size=16 callers=0 calls=0
   ref: autosave_00.bflyt
*/
void autosave_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104f40ULL || rel >= 0x1104f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01104f50 size=400 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1104f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1104f50ULL || rel >= 0x11050e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011050e0 size=16 callers=0 calls=0
*/
void sub_11050e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11050e0ULL || rel >= 0x11050f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011050f0 size=16 callers=0 calls=0
*/
void sub_11050f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11050f0ULL || rel >= 0x1105100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105100 size=16 callers=0 calls=0
*/
void sub_1105100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105100ULL || rel >= 0x1105110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105110 size=16 callers=0 calls=0
*/
void sub_1105110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105110ULL || rel >= 0x1105120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105120 size=16 callers=0 calls=0
*/
void sub_1105120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105120ULL || rel >= 0x1105130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105130 size=240 callers=1 calls=1
   calls: sub_6835f0
*/
void sub_1105130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105130ULL || rel >= 0x1105220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105220 size=432 callers=1 calls=7
   calls: sub_5e26a0, sub_5e2930, sub_687680, sub_687770, sub_c46830, sub_c47200, sub_c47a90
*/
void sub_1105220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105220ULL || rel >= 0x11053d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011053d0 size=112 callers=3 calls=3
   calls: sub_685850, sub_685910, sub_685a50
*/
void sub_11053d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11053d0ULL || rel >= 0x1105440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105440 size=80 callers=1 calls=1
   calls: sub_685a50
*/
void sub_1105440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105440ULL || rel >= 0x1105490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105490 size=112 callers=2 calls=3
   calls: sub_685820, sub_685a50, sub_685c60
*/
void sub_1105490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105490ULL || rel >= 0x1105500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105500 size=208 callers=1 calls=3
   calls: sub_685820, sub_685a50, sub_685c60
*/
void sub_1105500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105500ULL || rel >= 0x11055d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011055d0 size=304 callers=0 calls=6
   calls: gamma_correction, sub_602930, sub_683640, sub_683670, sub_685230, sub_c47b70
*/
void sub_11055d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11055d0ULL || rel >= 0x1105700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105700 size=240 callers=0 calls=1
   calls: sub_6855a0
*/
void sub_1105700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105700ULL || rel >= 0x11057f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011057f0 size=272 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_11057f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11057f0ULL || rel >= 0x1105900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105900 size=16 callers=0 calls=0
*/
void sub_1105900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105900ULL || rel >= 0x1105910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105910 size=16 callers=0 calls=0
*/
void sub_1105910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105910ULL || rel >= 0x1105920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105920 size=272 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1105920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105920ULL || rel >= 0x1105a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105a30 size=16 callers=0 calls=0
*/
void sub_1105a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105a30ULL || rel >= 0x1105a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105a40 size=384 callers=1 calls=2
   calls: sub_1105df0, sub_ee49b0
*/
void sub_1105a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105a40ULL || rel >= 0x1105bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105bc0 size=32 callers=2 calls=0
*/
void sub_1105bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105bc0ULL || rel >= 0x1105be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105be0 size=32 callers=2 calls=0
*/
void sub_1105be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105be0ULL || rel >= 0x1105c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105c00 size=16 callers=1 calls=0
*/
void sub_1105c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105c00ULL || rel >= 0x1105c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105c10 size=112 callers=0 calls=0
*/
void sub_1105c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105c10ULL || rel >= 0x1105c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105c80 size=112 callers=0 calls=0
*/
void sub_1105c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105c80ULL || rel >= 0x1105cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105cf0 size=16 callers=0 calls=0
*/
void sub_1105cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105cf0ULL || rel >= 0x1105d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105d00 size=112 callers=0 calls=0
*/
void sub_1105d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105d00ULL || rel >= 0x1105d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105d70 size=16 callers=0 calls=0
*/
void sub_1105d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105d70ULL || rel >= 0x1105d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105d80 size=112 callers=0 calls=0
*/
void sub_1105d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105d80ULL || rel >= 0x1105df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105df0 size=256 callers=1 calls=1
   calls: sub_1105ef0
*/
void sub_1105df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105df0ULL || rel >= 0x1105ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01105ef0 size=736 callers=1 calls=3
   calls: sub_1105130, sub_13118e0, sub_67b990
*/
void sub_1105ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1105ef0ULL || rel >= 0x11061d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011061d0 size=16 callers=53 calls=0
*/
void sub_11061d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11061d0ULL || rel >= 0x11061e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011061e0 size=32 callers=54 calls=0
*/
void sub_11061e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11061e0ULL || rel >= 0x1106200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01106200 size=32 callers=47 calls=0
*/
void sub_1106200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1106200ULL || rel >= 0x1106220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01106220 size=96 callers=34 calls=0
*/
void sub_1106220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1106220ULL || rel >= 0x1106280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01106280 size=160 callers=111 calls=0
*/
void sub_1106280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1106280ULL || rel >= 0x1106320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01106320 size=192 callers=434 calls=0
*/
void sub_1106320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1106320ULL || rel >= 0x11063e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011063e0 size=464 callers=801 calls=0
*/
void sub_11063e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11063e0ULL || rel >= 0x11065b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011065b0 size=528 callers=393 calls=0
*/
void sub_11065b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11065b0ULL || rel >= 0x11067c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011067c0 size=496 callers=152 calls=0
*/
void sub_11067c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11067c0ULL || rel >= 0x11069b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011069b0 size=528 callers=70 calls=0
*/
void sub_11069b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11069b0ULL || rel >= 0x1106bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01106bc0 size=272 callers=4 calls=0
*/
void sub_1106bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1106bc0ULL || rel >= 0x1106cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01106cd0 size=608 callers=83 calls=0
*/
void sub_1106cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1106cd0ULL || rel >= 0x1106f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01106f30 size=176 callers=60 calls=1
   calls: sub_1106fe0
*/
void sub_1106f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1106f30ULL || rel >= 0x1106fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01106fe0 size=1088 callers=1 calls=3
   calls: sub_1107420, sub_1107610, sub_1107c20
*/
void sub_1106fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1106fe0ULL || rel >= 0x1107420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01107420 size=496 callers=1 calls=0
*/
void sub_1107420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1107420ULL || rel >= 0x1107610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01107610 size=1136 callers=1 calls=1
   calls: sub_1107a80
*/
void sub_1107610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1107610ULL || rel >= 0x1107a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01107a80 size=416 callers=1 calls=0
*/
void sub_1107a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1107a80ULL || rel >= 0x1107c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01107c20 size=528 callers=1 calls=1
   calls: sub_1107e30
*/
void sub_1107c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1107c20ULL || rel >= 0x1107e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01107e30 size=288 callers=1 calls=0
*/
void sub_1107e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1107e30ULL || rel >= 0x1107f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01107f50 size=1376 callers=1 calls=2
   calls: sub_116a710, sub_116b660
*/
void sub_1107f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1107f50ULL || rel >= 0x11084b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011084b0 size=432 callers=1 calls=1
   calls: sub_116b6a0
*/
void sub_11084b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11084b0ULL || rel >= 0x1108660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108660 size=192 callers=0 calls=2
   calls: sub_116bb10, sub_116bb80
*/
void sub_1108660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108660ULL || rel >= 0x1108720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108720 size=16 callers=62 calls=0
*/
void sub_1108720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108720ULL || rel >= 0x1108730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108730 size=16 callers=53 calls=0
*/
void sub_1108730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108730ULL || rel >= 0x1108740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108740 size=240 callers=29 calls=1
   calls: sub_767720
*/
void sub_1108740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108740ULL || rel >= 0x1108830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108830 size=224 callers=2 calls=5
   calls: place_name_3, sub_762d70, sub_763000, sub_763380, sub_767770
*/
void sub_1108830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108830ULL || rel >= 0x1108910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108910 size=48 callers=2 calls=1
   calls: sub_1108740
*/
void sub_1108910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108910ULL || rel >= 0x1108940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108940 size=32 callers=1 calls=0
*/
void sub_1108940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108940ULL || rel >= 0x1108960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108960 size=32 callers=9 calls=1
   calls: sub_767870
*/
void sub_1108960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108960ULL || rel >= 0x1108980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108980 size=128 callers=1 calls=1
   calls: sub_767870
*/
void sub_1108980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108980ULL || rel >= 0x1108a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108a00 size=48 callers=1 calls=0
*/
void sub_1108a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108a00ULL || rel >= 0x1108a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108a30 size=32 callers=1 calls=0
*/
void sub_1108a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108a30ULL || rel >= 0x1108a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108a50 size=32 callers=62 calls=1
   calls: sub_763020
*/
void sub_1108a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108a50ULL || rel >= 0x1108a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108a70 size=16 callers=2 calls=0
*/
void sub_1108a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108a70ULL || rel >= 0x1108a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108a80 size=464 callers=1 calls=6
   calls: sub_1108830, sub_763020, sub_764b40, sub_767720, sub_7678a0, sub_7678e0
*/
void sub_1108a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108a80ULL || rel >= 0x1108c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108c50 size=32 callers=3 calls=1
   calls: sub_1108740
*/
void sub_1108c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108c50ULL || rel >= 0x1108c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108c70 size=48 callers=1 calls=0
*/
void sub_1108c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108c70ULL || rel >= 0x1108ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01108ca0 size=1264 callers=1 calls=8
   calls: sub_116bb10, sub_13708c0, sub_7656d0, sub_765ab0, sub_767720, sub_767870, sub_ead150, sub_eaed70
*/
void sub_1108ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1108ca0ULL || rel >= 0x1109190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01109190 size=64 callers=3 calls=1
   calls: sub_ead150
*/
void sub_1109190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1109190ULL || rel >= 0x11091d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011091d0 size=160 callers=12 calls=1
   calls: sub_116bb10
*/
void sub_11091d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11091d0ULL || rel >= 0x1109270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01109270 size=176 callers=4 calls=2
   calls: sub_116bb10, sub_ead150
*/
void sub_1109270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1109270ULL || rel >= 0x1109320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01109320 size=384 callers=1 calls=3
   calls: sub_11094a0, sub_116bb10, sub_ead150
*/
void sub_1109320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1109320ULL || rel >= 0x11094a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011094a0 size=256 callers=2 calls=7
   calls: sub_110c4f0, sub_110c6a0, sub_11157b0, sub_11157c0, sub_1148c40, sub_768f00, sub_768fa0
*/
void sub_11094a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11094a0ULL || rel >= 0x11095a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011095a0 size=544 callers=1 calls=2
   calls: sub_1108740, sub_116bb10
*/
void sub_11095a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11095a0ULL || rel >= 0x11097c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011097c0 size=176 callers=1 calls=3
   calls: sub_1108740, sub_763020, sub_ead150
*/
void sub_11097c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11097c0ULL || rel >= 0x1109870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01109870 size=48 callers=2 calls=1
   calls: sub_763020
*/
void sub_1109870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1109870ULL || rel >= 0x11098a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011098a0 size=560 callers=1 calls=2
   calls: sub_1108740, sub_116bb10
*/
void sub_11098a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11098a0ULL || rel >= 0x1109ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01109ad0 size=48 callers=1 calls=1
   calls: sub_1108740
*/
void sub_1109ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1109ad0ULL || rel >= 0x1109b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01109b00 size=48 callers=1 calls=1
   calls: sub_1108740
*/
void sub_1109b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1109b00ULL || rel >= 0x1109b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01109b30 size=336 callers=1 calls=1
   calls: sub_116bb10
*/
void sub_1109b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1109b30ULL || rel >= 0x1109c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01109c80 size=256 callers=2 calls=2
   calls: sub_116bb10, sub_762930
*/
void sub_1109c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1109c80ULL || rel >= 0x1109d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01109d80 size=1520 callers=1 calls=3
   calls: sub_116bb10, sub_767870, sub_ead150
*/
void sub_1109d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1109d80ULL || rel >= 0x110a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110a370 size=1328 callers=1 calls=0
*/
void sub_110a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110a370ULL || rel >= 0x110a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110a8a0 size=832 callers=1 calls=6
   calls: msg_pokecamp_poke7talk_27, sub_110bd20, sub_1113dc0, sub_763020, sub_767720, sub_767870
*/
void sub_110a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110a8a0ULL || rel >= 0x110abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110abe0 size=4416 callers=1 calls=0
   ref: msg_pokecamp_poke7talk_03
   ref: msg_pokecamp_poke7talk_04
   ref: msg_pokecamp_poke7talk_05
   ref: msg_pokecamp_poke7talk_06
   ref: msg_pokecamp_poke7talk_07
   ref: msg_pokecamp_poke7talk_08
   ref: msg_pokecamp_poke7talk_09
   ref: msg_pokecamp_poke7talk_10
*/
void msg_pokecamp_poke7talk_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110abe0ULL || rel >= 0x110bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110bd20 size=416 callers=2 calls=1
   calls: sub_116bb10
*/
void sub_110bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110bd20ULL || rel >= 0x110bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110bec0 size=336 callers=1 calls=2
   calls: sub_763020, sub_ead150
*/
void sub_110bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110bec0ULL || rel >= 0x110c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110c010 size=784 callers=1 calls=3
   calls: sub_116bb10, sub_763020, sub_ead150
*/
void sub_110c010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110c010ULL || rel >= 0x110c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110c320 size=144 callers=2 calls=2
   calls: sub_116bb10, sub_763020
*/
void sub_110c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110c320ULL || rel >= 0x110c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110c3b0 size=48 callers=2 calls=1
   calls: sub_763020
*/
void sub_110c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110c3b0ULL || rel >= 0x110c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110c3e0 size=272 callers=1 calls=3
   calls: sub_767720, sub_767870, sub_ead150
*/
void sub_110c3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110c3e0ULL || rel >= 0x110c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110c4f0 size=432 callers=11 calls=2
   calls: sub_1113c90, sub_1c0
*/
void sub_110c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110c4f0ULL || rel >= 0x110c6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110c6a0 size=432 callers=18 calls=2
   calls: sub_1113c90, sub_1c0
*/
void sub_110c6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110c6a0ULL || rel >= 0x110c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110c850 size=64 callers=1 calls=1
   calls: sub_116bb10
*/
void sub_110c850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110c850ULL || rel >= 0x110c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110c890 size=64 callers=5 calls=1
   calls: sub_116bb10
*/
void sub_110c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110c890ULL || rel >= 0x110c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110c8d0 size=64 callers=1 calls=1
   calls: sub_116bb10
*/
void sub_110c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110c8d0ULL || rel >= 0x110c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110c910 size=64 callers=1 calls=1
   calls: sub_116bb10
*/
void sub_110c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110c910ULL || rel >= 0x110c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110c950 size=64 callers=2 calls=1
   calls: sub_116bb10
*/
void sub_110c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110c950ULL || rel >= 0x110c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110c990 size=192 callers=1 calls=3
   calls: sub_762930, sub_762940, sub_768ef0
*/
void sub_110c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110c990ULL || rel >= 0x110ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110ca50 size=48 callers=1 calls=0
*/
void sub_110ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110ca50ULL || rel >= 0x110ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110ca80 size=16 callers=1 calls=0
*/
void sub_110ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110ca80ULL || rel >= 0x110ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110ca90 size=16 callers=3 calls=0
*/
void sub_110ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110ca90ULL || rel >= 0x110caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110caa0 size=16 callers=0 calls=0
*/
void sub_110caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110caa0ULL || rel >= 0x110cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110cab0 size=144 callers=1 calls=0
*/
void sub_110cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110cab0ULL || rel >= 0x110cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110cb40 size=384 callers=1 calls=2
   calls: sub_767870, sub_ead150
*/
void sub_110cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110cb40ULL || rel >= 0x110ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110ccc0 size=400 callers=0 calls=0
*/
void sub_110ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110ccc0ULL || rel >= 0x110ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110ce50 size=16 callers=0 calls=0
*/
void sub_110ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110ce50ULL || rel >= 0x110ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110ce60 size=16 callers=0 calls=0
*/
void sub_110ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110ce60ULL || rel >= 0x110ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110ce70 size=16 callers=0 calls=0
*/
void sub_110ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110ce70ULL || rel >= 0x110ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110ce80 size=496 callers=2 calls=4
   calls: sub_1318f70, sub_5e2bc0, sub_5e7b30, unnamed_47
   ref: script/place_name.dat
*/
void place_name_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110ce80ULL || rel >= 0x110d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110d070 size=1872 callers=0 calls=13
   calls: msg_pokecamp_poke8talk_08, sub_110c4f0, sub_110c6a0, sub_110da00, sub_11157b0, sub_11157c0, sub_1148c40, sub_116bb10, sub_763020, sub_767720, sub_767870, sub_768f00
   ... +1 more
*/
void sub_110d070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110d070ULL || rel >= 0x110d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110d7c0 size=16 callers=0 calls=0
*/
void sub_110d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110d7c0ULL || rel >= 0x110d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110d7d0 size=560 callers=1 calls=0
   ref: msg_pokecamp_poke8talk_05
   ref: msg_pokecamp_poke8talk_06
   ref: msg_pokecamp_poke8talk_07
   ref: msg_pokecamp_poke8talk_08
   ref: msg_pokecamp_poke8talk_04
*/
void msg_pokecamp_poke8talk_08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110d7d0ULL || rel >= 0x110da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110da00 size=448 callers=8 calls=0
*/
void sub_110da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110da00ULL || rel >= 0x110dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110dbc0 size=16 callers=0 calls=0
*/
void sub_110dbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110dbc0ULL || rel >= 0x110dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110dbd0 size=16 callers=0 calls=0
*/
void sub_110dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110dbd0ULL || rel >= 0x110dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110dbe0 size=1872 callers=0 calls=13
   calls: msg_pokecamp_poke1talk_18, sub_110c4f0, sub_110c6a0, sub_110da00, sub_11157b0, sub_11157c0, sub_1148c40, sub_116bb10, sub_763020, sub_767720, sub_767870, sub_768f00
   ... +1 more
*/
void sub_110dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110dbe0ULL || rel >= 0x110e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110e330 size=16 callers=0 calls=0
*/
void sub_110e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110e330ULL || rel >= 0x110e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110e340 size=1872 callers=1 calls=0
   ref: msg_pokecamp_poke1talk_01
   ref: msg_pokecamp_poke1talk_02
   ref: msg_pokecamp_poke1talk_03
   ref: msg_pokecamp_poke1talk_04
   ref: msg_pokecamp_poke1talk_05
   ref: msg_pokecamp_poke1talk_06
   ref: msg_pokecamp_poke1talk_07
   ref: msg_pokecamp_poke1talk_08
*/
void msg_pokecamp_poke1talk_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110e340ULL || rel >= 0x110ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110ea90 size=16 callers=0 calls=0
*/
void sub_110ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110ea90ULL || rel >= 0x110eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110eaa0 size=16 callers=0 calls=0
*/
void sub_110eaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110eaa0ULL || rel >= 0x110eab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110eab0 size=1872 callers=0 calls=13
   calls: msg_pokecamp_poke8talk_10, sub_110c4f0, sub_110c6a0, sub_110da00, sub_11157b0, sub_11157c0, sub_1148c40, sub_116bb10, sub_763020, sub_767720, sub_767870, sub_768f00
   ... +1 more
*/
void sub_110eab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110eab0ULL || rel >= 0x110f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110f200 size=16 callers=0 calls=0
*/
void sub_110f200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110f200ULL || rel >= 0x110f210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110f210 size=640 callers=1 calls=0
   ref: msg_pokecamp_poke8talk_00
   ref: msg_pokecamp_poke8talk_01
   ref: msg_pokecamp_poke8talk_02
   ref: msg_pokecamp_poke8talk_03
   ref: msg_pokecamp_poke8talk_09
   ref: msg_pokecamp_poke8talk_10
*/
void msg_pokecamp_poke8talk_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110f210ULL || rel >= 0x110f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110f490 size=16 callers=0 calls=0
*/
void sub_110f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110f490ULL || rel >= 0x110f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110f4a0 size=16 callers=0 calls=0
*/
void sub_110f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110f4a0ULL || rel >= 0x110f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110f4b0 size=1872 callers=0 calls=13
   calls: msg_pokecamp_poke3talk_13, sub_110c4f0, sub_110c6a0, sub_110da00, sub_11157b0, sub_11157c0, sub_1148c40, sub_116bb10, sub_763020, sub_767720, sub_767870, sub_768f00
   ... +1 more
*/
void sub_110f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110f4b0ULL || rel >= 0x110fc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110fc00 size=16 callers=0 calls=0
*/
void sub_110fc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110fc00ULL || rel >= 0x110fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0110fc10 size=1472 callers=1 calls=0
   ref: msg_pokecamp_poke3talk_00
   ref: msg_pokecamp_poke3talk_01
   ref: msg_pokecamp_poke3talk_02
   ref: msg_pokecamp_poke3talk_03
   ref: msg_pokecamp_poke3talk_04
   ref: msg_pokecamp_poke3talk_05
   ref: msg_pokecamp_poke3talk_06
   ref: msg_pokecamp_poke3talk_07
*/
void msg_pokecamp_poke3talk_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110fc10ULL || rel >= 0x11101d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011101d0 size=16 callers=0 calls=0
*/
void sub_11101d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11101d0ULL || rel >= 0x11101e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011101e0 size=16 callers=0 calls=0
*/
void sub_11101e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11101e0ULL || rel >= 0x11101f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011101f0 size=64 callers=0 calls=1
   calls: msg_pokecamp_poke4talk_12
*/
void sub_11101f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11101f0ULL || rel >= 0x1110230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01110230 size=16 callers=0 calls=0
*/
void sub_1110230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1110230ULL || rel >= 0x1110240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01110240 size=1856 callers=0 calls=12
   calls: sub_110c4f0, sub_110c6a0, sub_110da00, sub_11157b0, sub_11157c0, sub_1148c40, sub_116bb10, sub_763020, sub_767720, sub_767870, sub_768f00, sub_768fa0
*/
void sub_1110240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1110240ULL || rel >= 0x1110980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01110980 size=1392 callers=1 calls=0
   ref: msg_pokecamp_poke4talk_00
   ref: msg_pokecamp_poke4talk_01
   ref: msg_pokecamp_poke4talk_02
   ref: msg_pokecamp_poke4talk_03
   ref: msg_pokecamp_poke4talk_04
   ref: msg_pokecamp_poke4talk_05
   ref: msg_pokecamp_poke4talk_06
   ref: msg_pokecamp_poke4talk_07
*/
void msg_pokecamp_poke4talk_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1110980ULL || rel >= 0x1110ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01110ef0 size=16 callers=0 calls=0
*/
void sub_1110ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1110ef0ULL || rel >= 0x1110f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01110f00 size=16 callers=0 calls=0
*/
void sub_1110f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1110f00ULL || rel >= 0x1110f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01110f10 size=64 callers=0 calls=1
   calls: msg_pokecamp_poke5talk_12
*/
void sub_1110f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1110f10ULL || rel >= 0x1110f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01110f50 size=16 callers=0 calls=0
*/
void sub_1110f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1110f50ULL || rel >= 0x1110f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01110f60 size=1408 callers=1 calls=0
   ref: msg_pokecamp_poke5talk_00
   ref: msg_pokecamp_poke5talk_01
   ref: msg_pokecamp_poke5talk_02
   ref: msg_pokecamp_poke5talk_03
   ref: msg_pokecamp_poke5talk_04
   ref: msg_pokecamp_poke5talk_05
   ref: msg_pokecamp_poke5talk_06
   ref: msg_pokecamp_poke5talk_07
*/
void msg_pokecamp_poke5talk_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1110f60ULL || rel >= 0x11114e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011114e0 size=16 callers=0 calls=0
*/
void sub_11114e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11114e0ULL || rel >= 0x11114f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011114f0 size=16 callers=0 calls=0
*/
void sub_11114f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11114f0ULL || rel >= 0x1111500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01111500 size=1872 callers=0 calls=13
   calls: msg_pokecamp_poke6talk_07, sub_110c4f0, sub_110c6a0, sub_110da00, sub_11157b0, sub_11157c0, sub_1148c40, sub_116bb10, sub_763020, sub_767720, sub_767870, sub_768f00
   ... +1 more
*/
void sub_1111500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1111500ULL || rel >= 0x1111c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01111c50 size=16 callers=0 calls=0
*/
void sub_1111c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1111c50ULL || rel >= 0x1111c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01111c60 size=848 callers=1 calls=0
   ref: msg_pokecamp_poke6talk_00
   ref: msg_pokecamp_poke6talk_01
   ref: msg_pokecamp_poke6talk_02
   ref: msg_pokecamp_poke6talk_03
   ref: msg_pokecamp_poke6talk_04
   ref: msg_pokecamp_poke6talk_05
   ref: msg_pokecamp_poke6talk_06
   ref: msg_pokecamp_poke6talk_07
*/
void msg_pokecamp_poke6talk_07(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1111c60ULL || rel >= 0x1111fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01111fb0 size=16 callers=0 calls=0
*/
void sub_1111fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1111fb0ULL || rel >= 0x1111fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01111fc0 size=16 callers=0 calls=0
*/
void sub_1111fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1111fc0ULL || rel >= 0x1111fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01111fd0 size=1872 callers=0 calls=13
   calls: msg_pokecamp_poke2talk_25, sub_110c4f0, sub_110c6a0, sub_110da00, sub_11157b0, sub_11157c0, sub_1148c40, sub_116bb10, sub_763020, sub_767720, sub_767870, sub_768f00
   ... +1 more
*/
void sub_1111fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1111fd0ULL || rel >= 0x1112720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01112720 size=16 callers=0 calls=0
*/
void sub_1112720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1112720ULL || rel >= 0x1112730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01112730 size=2672 callers=1 calls=0
   ref: msg_pokecamp_poke2talk_00
   ref: msg_pokecamp_poke2talk_01
   ref: msg_pokecamp_poke2talk_02
   ref: msg_pokecamp_poke2talk_03
   ref: msg_pokecamp_poke2talk_04
   ref: msg_pokecamp_poke2talk_05
   ref: msg_pokecamp_poke2talk_06
   ref: msg_pokecamp_poke2talk_07
*/
void msg_pokecamp_poke2talk_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1112730ULL || rel >= 0x11131a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011131a0 size=16 callers=0 calls=0
*/
void sub_11131a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11131a0ULL || rel >= 0x11131b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011131b0 size=16 callers=0 calls=0
*/
void sub_11131b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11131b0ULL || rel >= 0x11131c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011131c0 size=1872 callers=0 calls=13
   calls: msg_pokecamp_poke9talk_07, sub_110c4f0, sub_110c6a0, sub_110da00, sub_11157b0, sub_11157c0, sub_1148c40, sub_116bb10, sub_763020, sub_767720, sub_767870, sub_768f00
   ... +1 more
*/
void sub_11131c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11131c0ULL || rel >= 0x1113910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01113910 size=16 callers=0 calls=0
*/
void sub_1113910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1113910ULL || rel >= 0x1113920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01113920 size=784 callers=1 calls=0
   ref: msg_pokecamp_poke9talk_00
   ref: msg_pokecamp_poke9talk_01
   ref: msg_pokecamp_poke9talk_02
   ref: msg_pokecamp_poke9talk_04
   ref: msg_pokecamp_poke9talk_05
   ref: msg_pokecamp_poke9talk_06
   ref: msg_pokecamp_poke9talk_07
*/
void msg_pokecamp_poke9talk_07(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1113920ULL || rel >= 0x1113c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01113c30 size=16 callers=0 calls=0
*/
void sub_1113c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1113c30ULL || rel >= 0x1113c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01113c40 size=16 callers=0 calls=0
*/
void sub_1113c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1113c40ULL || rel >= 0x1113c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01113c50 size=64 callers=0 calls=0
*/
void sub_1113c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1113c50ULL || rel >= 0x1113c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01113c90 size=240 callers=51 calls=0
*/
void sub_1113c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1113c90ULL || rel >= 0x1113d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01113d80 size=64 callers=0 calls=0
*/
void sub_1113d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1113d80ULL || rel >= 0x1113dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01113dc0 size=448 callers=1 calls=0
*/
void sub_1113dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1113dc0ULL || rel >= 0x1113f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01113f80 size=208 callers=0 calls=0
*/
void sub_1113f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1113f80ULL || rel >= 0x1114050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01114050 size=256 callers=1 calls=5
   calls: sub_1114150, sub_1114250, sub_5cf8c0, sub_5e2350, sub_65d700
*/
void sub_1114050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1114050ULL || rel >= 0x1114150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01114150 size=256 callers=2 calls=1
   calls: sub_65d700
*/
void sub_1114150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1114150ULL || rel >= 0x1114250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01114250 size=560 callers=1 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2010, sub_5d7670
*/
void sub_1114250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1114250ULL || rel >= 0x1114480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01114480 size=3408 callers=0 calls=20
   calls: sub_1115920, sub_1115d40, sub_1115fa0, sub_11161b0, sub_1116b50, sub_1117690, sub_11178f0, sub_1117b10, sub_1117c10, sub_1117e20, sub_1118010, sub_11181c0
   ... +8 more
   ref: camp_floor
*/
void camp_floor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1114480ULL || rel >= 0x11151d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011151d0 size=432 callers=1 calls=3
   calls: sub_1119140, sub_5cf8e0, sub_5cf8f0
*/
void sub_11151d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11151d0ULL || rel >= 0x1115380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115380 size=272 callers=1 calls=3
   calls: sub_1119140, sub_5cf8e0, sub_5cf8f0
*/
void sub_1115380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115380ULL || rel >= 0x1115490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115490 size=256 callers=1 calls=3
   calls: sub_1119140, sub_5cf8e0, sub_5cf8f0
*/
void sub_1115490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115490ULL || rel >= 0x1115590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115590 size=288 callers=4 calls=3
   calls: sub_1119140, sub_5cf8e0, sub_5cf8f0
*/
void sub_1115590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115590ULL || rel >= 0x11156b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011156b0 size=256 callers=2 calls=3
   calls: sub_1119140, sub_5cf8e0, sub_5cf8f0
*/
void sub_11156b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11156b0ULL || rel >= 0x11157b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011157b0 size=16 callers=10 calls=0
*/
void sub_11157b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11157b0ULL || rel >= 0x11157c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011157c0 size=64 callers=49 calls=0
*/
void sub_11157c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11157c0ULL || rel >= 0x1115800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115800 size=288 callers=0 calls=5
   calls: sub_11190e0, sub_5cf8e0, sub_5cf8f0, sub_e46a40, sub_e910e0
*/
void sub_1115800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115800ULL || rel >= 0x1115920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115920 size=272 callers=2 calls=1
   calls: sub_65d700
*/
void sub_1115920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115920ULL || rel >= 0x1115a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115a30 size=368 callers=0 calls=2
   calls: sub_1118710, sub_5cf8d0
*/
void sub_1115a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115a30ULL || rel >= 0x1115ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115ba0 size=16 callers=0 calls=0
*/
void sub_1115ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115ba0ULL || rel >= 0x1115bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115bb0 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1115bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115bb0ULL || rel >= 0x1115c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115c20 size=16 callers=0 calls=0
*/
void sub_1115c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115c20ULL || rel >= 0x1115c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115c30 size=16 callers=0 calls=0
*/
void sub_1115c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115c30ULL || rel >= 0x1115c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115c40 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1115c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115c40ULL || rel >= 0x1115cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115cb0 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1115cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115cb0ULL || rel >= 0x1115d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115d20 size=16 callers=0 calls=0
*/
void sub_1115d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115d20ULL || rel >= 0x1115d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115d30 size=16 callers=0 calls=0
*/
void sub_1115d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115d30ULL || rel >= 0x1115d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115d40 size=608 callers=1 calls=0
*/
void sub_1115d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115d40ULL || rel >= 0x1115fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01115fa0 size=528 callers=1 calls=0
*/
void sub_1115fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1115fa0ULL || rel >= 0x11161b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011161b0 size=640 callers=12 calls=1
   calls: sub_13ca4c0
*/
void sub_11161b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11161b0ULL || rel >= 0x1116430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116430 size=448 callers=0 calls=2
   calls: sub_e44bd0, sub_e910e0
*/
void sub_1116430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116430ULL || rel >= 0x11165f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011165f0 size=96 callers=0 calls=0
*/
void sub_11165f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11165f0ULL || rel >= 0x1116650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116650 size=576 callers=0 calls=1
   calls: sub_967240
*/
void sub_1116650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116650ULL || rel >= 0x1116890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116890 size=64 callers=0 calls=0
*/
void sub_1116890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116890ULL || rel >= 0x11168d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011168d0 size=32 callers=0 calls=0
*/
void sub_11168d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11168d0ULL || rel >= 0x11168f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011168f0 size=16 callers=0 calls=0
*/
void sub_11168f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11168f0ULL || rel >= 0x1116900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116900 size=240 callers=0 calls=1
   calls: sub_ee7920
*/
void sub_1116900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116900ULL || rel >= 0x11169f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011169f0 size=16 callers=0 calls=0
*/
void sub_11169f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11169f0ULL || rel >= 0x1116a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116a00 size=16 callers=0 calls=0
*/
void sub_1116a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116a00ULL || rel >= 0x1116a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116a10 size=16 callers=0 calls=0
*/
void sub_1116a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116a10ULL || rel >= 0x1116a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116a20 size=96 callers=0 calls=0
*/
void sub_1116a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116a20ULL || rel >= 0x1116a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116a80 size=96 callers=0 calls=0
*/
void sub_1116a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116a80ULL || rel >= 0x1116ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116ae0 size=32 callers=0 calls=0
*/
void sub_1116ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116ae0ULL || rel >= 0x1116b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116b00 size=16 callers=0 calls=0
*/
void sub_1116b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116b00ULL || rel >= 0x1116b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116b10 size=32 callers=0 calls=0
*/
void sub_1116b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116b10ULL || rel >= 0x1116b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116b30 size=32 callers=0 calls=0
*/
void sub_1116b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116b30ULL || rel >= 0x1116b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116b50 size=288 callers=4 calls=3
   calls: sub_1116c70, sub_5cf8c0, sub_5db1b0
*/
void sub_1116b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116b50ULL || rel >= 0x1116c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116c70 size=432 callers=3 calls=7
   calls: sub_13ca4c0, sub_5c8220, sub_5c8300, sub_5c83e0, sub_5c83f0, sub_5cbb00, sub_5cf8f0
*/
void sub_1116c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116c70ULL || rel >= 0x1116e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116e20 size=208 callers=0 calls=2
   calls: sub_1117330, sub_5cf8d0
*/
void sub_1116e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116e20ULL || rel >= 0x1116ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116ef0 size=208 callers=0 calls=2
   calls: sub_1117330, sub_5cf8d0
*/
void sub_1116ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116ef0ULL || rel >= 0x1116fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116fc0 size=16 callers=0 calls=0
*/
void sub_1116fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116fc0ULL || rel >= 0x1116fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01116fd0 size=208 callers=0 calls=2
   calls: sub_1117330, sub_5cf8d0
*/
void sub_1116fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1116fd0ULL || rel >= 0x11170a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011170a0 size=208 callers=0 calls=2
   calls: sub_1117330, sub_5cf8d0
*/
void sub_11170a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11170a0ULL || rel >= 0x1117170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01117170 size=16 callers=0 calls=0
*/
void sub_1117170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1117170ULL || rel >= 0x1117180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01117180 size=16 callers=0 calls=0
*/
void sub_1117180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1117180ULL || rel >= 0x1117190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01117190 size=208 callers=0 calls=2
   calls: sub_1117330, sub_5cf8d0
*/
void sub_1117190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1117190ULL || rel >= 0x1117260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01117260 size=208 callers=0 calls=2
   calls: sub_1117330, sub_5cf8d0
*/
void sub_1117260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1117260ULL || rel >= 0x1117330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01117330 size=560 callers=6 calls=5
   calls: sub_13ca4c0, sub_5c8400, sub_5c86e0, sub_5cbb00, sub_5cf8f0
*/
void sub_1117330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1117330ULL || rel >= 0x1117560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01117560 size=304 callers=2 calls=0
*/
void sub_1117560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1117560ULL || rel >= 0x1117690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01117690 size=608 callers=1 calls=0
*/
void sub_1117690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1117690ULL || rel >= 0x11178f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011178f0 size=544 callers=2 calls=0
*/
void sub_11178f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11178f0ULL || rel >= 0x1117b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01117b10 size=256 callers=5 calls=0
*/
void sub_1117b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1117b10ULL || rel >= 0x1117c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01117c10 size=528 callers=2 calls=1
   calls: sub_1117b10
*/
void sub_1117c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1117c10ULL || rel >= 0x1117e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01117e20 size=496 callers=4 calls=0
*/
void sub_1117e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1117e20ULL || rel >= 0x1118010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118010 size=432 callers=7 calls=0
*/
void sub_1118010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118010ULL || rel >= 0x11181c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011181c0 size=592 callers=2 calls=0
*/
void sub_11181c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11181c0ULL || rel >= 0x1118410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118410 size=544 callers=2 calls=0
*/
void sub_1118410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118410ULL || rel >= 0x1118630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118630 size=176 callers=0 calls=3
   calls: Set_State_BattleSunny, sub_e44da0, sub_e910e0
*/
void sub_1118630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118630ULL || rel >= 0x11186e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011186e0 size=16 callers=0 calls=0
*/
void sub_11186e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11186e0ULL || rel >= 0x11186f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011186f0 size=16 callers=0 calls=0
*/
void sub_11186f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11186f0ULL || rel >= 0x1118700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118700 size=16 callers=0 calls=0
*/
void sub_1118700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118700ULL || rel >= 0x1118710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118710 size=464 callers=7 calls=1
   calls: sub_1117b10
*/
void sub_1118710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118710ULL || rel >= 0x11188e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011188e0 size=160 callers=0 calls=0
*/
void sub_11188e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11188e0ULL || rel >= 0x1118980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118980 size=192 callers=1 calls=2
   calls: sub_5cf8c0, sub_5e2350
*/
void sub_1118980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118980ULL || rel >= 0x1118a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118a40 size=288 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_1118a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118a40ULL || rel >= 0x1118b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118b60 size=16 callers=0 calls=0
*/
void sub_1118b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118b60ULL || rel >= 0x1118b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118b70 size=16 callers=0 calls=0
*/
void sub_1118b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118b70ULL || rel >= 0x1118b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118b80 size=16 callers=0 calls=0
*/
void sub_1118b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118b80ULL || rel >= 0x1118b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118b90 size=16 callers=0 calls=0
*/
void sub_1118b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118b90ULL || rel >= 0x1118ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118ba0 size=16 callers=0 calls=0
*/
void sub_1118ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118ba0ULL || rel >= 0x1118bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118bb0 size=80 callers=1 calls=3
   calls: sub_1118c00, sub_1118db0, sub_1118fe0
*/
void sub_1118bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118bb0ULL || rel >= 0x1118c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118c00 size=432 callers=7 calls=2
   calls: sub_1113c90, sub_1c0
*/
void sub_1118c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118c00ULL || rel >= 0x1118db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118db0 size=560 callers=1 calls=4
   calls: sub_1119da0, sub_5cf8e0, sub_5cf8f0, sub_5d2010
*/
void sub_1118db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118db0ULL || rel >= 0x1118fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01118fe0 size=256 callers=1 calls=6
   calls: sub_1119550, sub_1119b00, sub_111b550, sub_11208d0, sub_ce3990, sub_ce39b0
*/
void sub_1118fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118fe0ULL || rel >= 0x11190e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011190e0 size=96 callers=2 calls=1
   calls: sub_1118c00
*/
void sub_11190e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11190e0ULL || rel >= 0x1119140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01119140 size=480 callers=8 calls=4
   calls: sub_1118c00, sub_1119870, sub_5cf8e0, sub_5cf8f0
*/
void sub_1119140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1119140ULL || rel >= 0x1119320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01119320 size=368 callers=1 calls=3
   calls: sub_1118c00, sub_5cf8e0, sub_5cf8f0
*/
void sub_1119320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1119320ULL || rel >= 0x1119490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01119490 size=112 callers=1 calls=1
   calls: sub_1118c00
*/
void sub_1119490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1119490ULL || rel >= 0x1119500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01119500 size=80 callers=3 calls=1
   calls: sub_1118c00
*/
void sub_1119500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1119500ULL || rel >= 0x1119550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01119550 size=400 callers=1 calls=3
   calls: sub_111a030, sub_111bec0, sub_672c10
*/
void sub_1119550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1119550ULL || rel >= 0x11196e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011196e0 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_11196e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11196e0ULL || rel >= 0x1119750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01119750 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1119750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1119750ULL || rel >= 0x11197c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011197c0 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_11197c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11197c0ULL || rel >= 0x1119830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01119830 size=64 callers=0 calls=0
*/
void sub_1119830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1119830ULL || rel >= 0x1119870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01119870 size=656 callers=2 calls=0
*/
void sub_1119870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1119870ULL || rel >= 0x1119b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01119b00 size=464 callers=1 calls=1
   calls: sub_c39c40
*/
void sub_1119b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1119b00ULL || rel >= 0x1119cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01119cd0 size=208 callers=0 calls=0
*/
void sub_1119cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1119cd0ULL || rel >= 0x1119da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01119da0 size=400 callers=1 calls=4
   calls: sub_111a430, sub_111aae0, sub_5d1b50, sub_672620
*/
void sub_1119da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1119da0ULL || rel >= 0x1119f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01119f30 size=256 callers=1 calls=3
   calls: sub_672950, sub_672980, sub_c39c40
*/
void sub_1119f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1119f30ULL || rel >= 0x111a030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a030 size=352 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2010
*/
void sub_111a030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a030ULL || rel >= 0x111a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a190 size=112 callers=0 calls=0
*/
void sub_111a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a190ULL || rel >= 0x111a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a200 size=112 callers=0 calls=0
*/
void sub_111a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a200ULL || rel >= 0x111a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a270 size=112 callers=0 calls=0
*/
void sub_111a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a270ULL || rel >= 0x111a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a2e0 size=112 callers=0 calls=0
*/
void sub_111a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a2e0ULL || rel >= 0x111a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a350 size=112 callers=0 calls=0
*/
void sub_111a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a350ULL || rel >= 0x111a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a3c0 size=112 callers=0 calls=0
*/
void sub_111a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a3c0ULL || rel >= 0x111a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a430 size=432 callers=1 calls=4
   calls: sub_5d12d0, sub_5d1b50, sub_5d1ea0, sub_5d7670
*/
void sub_111a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a430ULL || rel >= 0x111a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a5e0 size=112 callers=0 calls=2
   calls: sub_672950, sub_672980
*/
void sub_111a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a5e0ULL || rel >= 0x111a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a650 size=96 callers=0 calls=0
*/
void sub_111a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a650ULL || rel >= 0x111a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a6b0 size=176 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_111a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a6b0ULL || rel >= 0x111a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a760 size=48 callers=0 calls=1
   calls: sub_6729b0
*/
void sub_111a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a760ULL || rel >= 0x111a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a790 size=96 callers=0 calls=0
*/
void sub_111a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a790ULL || rel >= 0x111a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a7f0 size=96 callers=0 calls=0
*/
void sub_111a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a7f0ULL || rel >= 0x111a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a850 size=176 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_111a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a850ULL || rel >= 0x111a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a900 size=176 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_111a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a900ULL || rel >= 0x111a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111a9b0 size=96 callers=0 calls=0
*/
void sub_111a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111a9b0ULL || rel >= 0x111aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111aa10 size=96 callers=0 calls=0
*/
void sub_111aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111aa10ULL || rel >= 0x111aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111aa70 size=32 callers=0 calls=0
*/
void sub_111aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111aa70ULL || rel >= 0x111aa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111aa90 size=16 callers=0 calls=0
*/
void sub_111aa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111aa90ULL || rel >= 0x111aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111aaa0 size=32 callers=0 calls=0
*/
void sub_111aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111aaa0ULL || rel >= 0x111aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111aac0 size=32 callers=0 calls=0
*/
void sub_111aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111aac0ULL || rel >= 0x111aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111aae0 size=304 callers=1 calls=4
   calls: sub_5d12d0, sub_5d1b50, sub_5d1ea0, sub_5ecb70
*/
void sub_111aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111aae0ULL || rel >= 0x111ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111ac10 size=16 callers=0 calls=0
*/
void sub_111ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111ac10ULL || rel >= 0x111ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111ac20 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_111ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111ac20ULL || rel >= 0x111ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111ac90 size=16 callers=0 calls=0
*/
void sub_111ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111ac90ULL || rel >= 0x111aca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111aca0 size=16 callers=0 calls=0
*/
void sub_111aca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111aca0ULL || rel >= 0x111acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111acb0 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_111acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111acb0ULL || rel >= 0x111ad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111ad20 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_111ad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111ad20ULL || rel >= 0x111ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111ad90 size=16 callers=0 calls=0
*/
void sub_111ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111ad90ULL || rel >= 0x111ada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111ada0 size=16 callers=0 calls=0
*/
void sub_111ada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111ada0ULL || rel >= 0x111adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111adb0 size=240 callers=2 calls=3
   calls: sub_111aea0, sub_111bb50, sub_5e2350
*/
void sub_111adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111adb0ULL || rel >= 0x111aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111aea0 size=368 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_111aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111aea0ULL || rel >= 0x111b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111b010 size=272 callers=0 calls=1
   calls: sub_111bb50
*/
void sub_111b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111b010ULL || rel >= 0x111b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111b120 size=16 callers=0 calls=0
*/
void sub_111b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111b120ULL || rel >= 0x111b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111b130 size=16 callers=0 calls=0
*/
void sub_111b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111b130ULL || rel >= 0x111b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111b140 size=16 callers=0 calls=0
*/
void sub_111b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111b140ULL || rel >= 0x111b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111b150 size=16 callers=0 calls=0
*/
void sub_111b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111b150ULL || rel >= 0x111b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111b160 size=16 callers=0 calls=0
*/
void sub_111b160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111b160ULL || rel >= 0x111b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111b170 size=224 callers=20 calls=1
   calls: sub_65f1c0
*/
void sub_111b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111b170ULL || rel >= 0x111b250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111b250 size=448 callers=8 calls=2
   calls: sub_1113c90, sub_1c0
*/
void sub_111b250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111b250ULL || rel >= 0x111b410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111b410 size=160 callers=0 calls=1
   calls: sub_111b250
*/
void sub_111b410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111b410ULL || rel >= 0x111b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111b4b0 size=160 callers=4 calls=1
   calls: sub_111b250
*/
void sub_111b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111b4b0ULL || rel >= 0x111b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111b550 size=544 callers=1 calls=2
   calls: sub_111b170, sub_111b770
*/
void sub_111b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111b550ULL || rel >= 0x111b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111b770 size=592 callers=1 calls=3
   calls: sub_1113c90, sub_111bde0, sub_1c0
*/
void sub_111b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111b770ULL || rel >= 0x111b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111b9c0 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_111b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111b9c0ULL || rel >= 0x111ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111ba30 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_111ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111ba30ULL || rel >= 0x111baa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111baa0 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_111baa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111baa0ULL || rel >= 0x111bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111bb10 size=64 callers=0 calls=0
*/
void sub_111bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111bb10ULL || rel >= 0x111bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111bb50 size=576 callers=3 calls=0
*/
void sub_111bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111bb50ULL || rel >= 0x111bd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111bd90 size=16 callers=0 calls=0
*/
void sub_111bd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111bd90ULL || rel >= 0x111bda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111bda0 size=16 callers=0 calls=0
*/
void sub_111bda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111bda0ULL || rel >= 0x111bdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111bdb0 size=16 callers=0 calls=0
*/
void sub_111bdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111bdb0ULL || rel >= 0x111bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111bdc0 size=32 callers=0 calls=0
*/
void sub_111bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111bdc0ULL || rel >= 0x111bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111bde0 size=224 callers=1 calls=1
   calls: sub_111adb0
*/
void sub_111bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111bde0ULL || rel >= 0x111bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111bec0 size=432 callers=1 calls=3
   calls: sub_111c070, sub_1133c30, sub_e7b660
*/
void sub_111bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111bec0ULL || rel >= 0x111c070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111c070 size=224 callers=1 calls=3
   calls: sub_1121b60, sub_7c2da0, sub_e7b5e0
*/
void sub_111c070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111c070ULL || rel >= 0x111c150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111c150 size=3968 callers=0 calls=43
   calls: nn_ldn_SetStationAcceptPolicy, ob0015_00_gfbmdl, ob0038_00_gfbmdl, sub_111d0d0, sub_111d2a0, sub_111d3f0, sub_111d5d0, sub_111d7b0, sub_111d990, sub_111db70, sub_111dd50, sub_111ea30
   ... +31 more
   ref: bin/archive/app/pokecamp/object/item.gfpak
*/
void item(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111c150ULL || rel >= 0x111d0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111d0d0 size=464 callers=1 calls=3
   calls: sub_117e0a0, sub_98acc0, sub_e7c160
*/
void sub_111d0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111d0d0ULL || rel >= 0x111d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111d2a0 size=336 callers=1 calls=3
   calls: sub_11224f0, sub_11c0a70, sub_98acc0
*/
void sub_111d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111d2a0ULL || rel >= 0x111d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111d3f0 size=480 callers=1 calls=3
   calls: sub_11c0a70, sub_11c0b10, sub_98acc0
*/
void sub_111d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111d3f0ULL || rel >= 0x111d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111d5d0 size=480 callers=1 calls=3
   calls: sub_11c0a70, sub_11c0b10, sub_98acc0
*/
void sub_111d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111d5d0ULL || rel >= 0x111d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111d7b0 size=480 callers=1 calls=3
   calls: sub_11c0a70, sub_11c0b10, sub_98acc0
*/
void sub_111d7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111d7b0ULL || rel >= 0x111d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111d990 size=480 callers=1 calls=3
   calls: sub_11c0a70, sub_11c0b10, sub_98acc0
*/
void sub_111d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111d990ULL || rel >= 0x111db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111db70 size=480 callers=1 calls=3
   calls: sub_11c0a70, sub_11c0b10, sub_98acc0
*/
void sub_111db70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111db70ULL || rel >= 0x111dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111dd50 size=512 callers=3 calls=9
   calls: sub_111ea30, sub_1127360, sub_115a7e0, sub_115ba10, sub_115ba20, sub_118b1d0, sub_7656d0, sub_767950, sub_7847d0
*/
void sub_111dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111dd50ULL || rel >= 0x111df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111df50 size=2784 callers=0 calls=24
   calls: sub_11190e0, sub_111dd50, sub_111ea30, sub_111eb40, sub_113f310, sub_1143f40, sub_1157ef0, sub_1158640, sub_1179ec0, sub_1179ed0, sub_117faf0, sub_1180260
   ... +12 more
*/
void sub_111df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111df50ULL || rel >= 0x111ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111ea30 size=272 callers=12 calls=1
   calls: sub_98acc0
*/
void sub_111ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111ea30ULL || rel >= 0x111eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111eb40 size=1984 callers=1 calls=16
   calls: sub_111ea30, sub_115b4a0, sub_115ba10, sub_115bb40, sub_1179f70, sub_117faf0, sub_11c0940, sub_762930, sub_7656d0, sub_767950, sub_7847d0, sub_bf0820
   ... +4 more
*/
void sub_111eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111eb40ULL || rel >= 0x111f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111f300 size=848 callers=0 calls=14
   calls: sub_1113c90, sub_111ea30, sub_111f650, sub_113f310, sub_1169560, sub_1173830, sub_11802e0, sub_11bcdb0, sub_11c0800, sub_14dbf60, sub_14dbff0, sub_14dc050
   ... +2 more
*/
void sub_111f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111f300ULL || rel >= 0x111f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0111f650 size=368 callers=1 calls=4
   calls: sub_111ea30, sub_1120bc0, sub_1127b90, sub_1157ef0
*/
void sub_111f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111f650ULL || rel >= 0x111f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

