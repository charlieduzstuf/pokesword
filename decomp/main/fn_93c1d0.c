/* main functions 0093c1d0..0096e0d0 (73 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0093c1d0 size=16 callers=0 calls=0
*/
void sub_93c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c1d0ULL || rel >= 0x93c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c1e0 size=16 callers=0 calls=0
*/
void sub_93c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c1e0ULL || rel >= 0x93c1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c1f0 size=16 callers=0 calls=0
*/
void sub_93c1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c1f0ULL || rel >= 0x93c200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c200 size=16 callers=0 calls=0
*/
void sub_93c200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c200ULL || rel >= 0x93c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c210 size=16 callers=0 calls=0
*/
void sub_93c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c210ULL || rel >= 0x93c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c220 size=416 callers=0 calls=0
*/
void sub_93c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c220ULL || rel >= 0x93c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c3c0 size=16 callers=0 calls=0
*/
void sub_93c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c3c0ULL || rel >= 0x93c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c3d0 size=112 callers=0 calls=1
   calls: sub_939c20
*/
void sub_93c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c3d0ULL || rel >= 0x93c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c440 size=16 callers=0 calls=0
*/
void sub_93c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c440ULL || rel >= 0x93c450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c450 size=16 callers=0 calls=0
*/
void sub_93c450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c450ULL || rel >= 0x93c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c460 size=16 callers=0 calls=0
*/
void sub_93c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c460ULL || rel >= 0x93c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c470 size=112 callers=0 calls=1
   calls: sub_939c20
*/
void sub_93c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c470ULL || rel >= 0x93c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c4e0 size=112 callers=0 calls=1
   calls: sub_939c20
*/
void sub_93c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c4e0ULL || rel >= 0x93c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c550 size=16 callers=0 calls=0
*/
void sub_93c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c550ULL || rel >= 0x93c560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c560 size=16 callers=0 calls=0
*/
void sub_93c560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c560ULL || rel >= 0x93c570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c570 size=480 callers=39 calls=2
   calls: sub_93c570, sub_93c750
*/
void sub_93c570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c570ULL || rel >= 0x93c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c750 size=304 callers=8 calls=0
*/
void sub_93c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c750ULL || rel >= 0x93c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c880 size=48 callers=0 calls=0
*/
void sub_93c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c880ULL || rel >= 0x93c8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c8b0 size=16 callers=0 calls=0
*/
void sub_93c8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c8b0ULL || rel >= 0x93c8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c8c0 size=16 callers=0 calls=0
*/
void sub_93c8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c8c0ULL || rel >= 0x93c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c8d0 size=16 callers=0 calls=0
*/
void sub_93c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c8d0ULL || rel >= 0x93c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c8e0 size=80 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_93c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c8e0ULL || rel >= 0x93c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c930 size=432 callers=2 calls=5
   calls: sub_14ab0c0, sub_14abd80, sub_685250, sub_685270, sub_93d140
   ref: L_cursor_00
*/
void L_cursor_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c930ULL || rel >= 0x93cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cae0 size=64 callers=1 calls=0
*/
void sub_93cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cae0ULL || rel >= 0x93cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cb20 size=144 callers=1 calls=1
   calls: sub_67dc50
*/
void sub_93cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cb20ULL || rel >= 0x93cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cbb0 size=16 callers=1 calls=0
*/
void sub_93cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cbb0ULL || rel >= 0x93cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cbc0 size=32 callers=1 calls=0
*/
void sub_93cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cbc0ULL || rel >= 0x93cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cbe0 size=16 callers=1 calls=0
*/
void sub_93cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cbe0ULL || rel >= 0x93cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cbf0 size=32 callers=1 calls=1
   calls: sub_17b5b70
*/
void sub_93cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cbf0ULL || rel >= 0x93cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cc10 size=32 callers=3 calls=0
*/
void sub_93cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cc10ULL || rel >= 0x93cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cc30 size=32 callers=1 calls=0
*/
void sub_93cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cc30ULL || rel >= 0x93cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cc50 size=32 callers=2 calls=0
*/
void sub_93cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cc50ULL || rel >= 0x93cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cc70 size=16 callers=1 calls=0
*/
void sub_93cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cc70ULL || rel >= 0x93cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cc80 size=16 callers=2 calls=0
*/
void sub_93cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cc80ULL || rel >= 0x93cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cc90 size=32 callers=3 calls=0
*/
void sub_93cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cc90ULL || rel >= 0x93ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093ccb0 size=16 callers=2 calls=0
*/
void sub_93ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93ccb0ULL || rel >= 0x93ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093ccc0 size=16 callers=0 calls=0
*/
void sub_93ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93ccc0ULL || rel >= 0x93ccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093ccd0 size=144 callers=0 calls=0
*/
void sub_93ccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93ccd0ULL || rel >= 0x93cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cd60 size=144 callers=0 calls=0
*/
void sub_93cd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cd60ULL || rel >= 0x93cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cdf0 size=240 callers=0 calls=0
*/
void sub_93cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cdf0ULL || rel >= 0x93cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cee0 size=144 callers=0 calls=0
*/
void sub_93cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cee0ULL || rel >= 0x93cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093cf70 size=144 callers=0 calls=0
*/
void sub_93cf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93cf70ULL || rel >= 0x93d000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d000 size=16 callers=0 calls=0
*/
void sub_93d000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d000ULL || rel >= 0x93d010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d010 size=16 callers=0 calls=0
*/
void sub_93d010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d010ULL || rel >= 0x93d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d020 size=144 callers=0 calls=0
*/
void sub_93d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d020ULL || rel >= 0x93d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d0b0 size=144 callers=0 calls=0
*/
void sub_93d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d0b0ULL || rel >= 0x93d140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d140 size=256 callers=1 calls=1
   calls: sub_13084f0
*/
void sub_93d140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d140ULL || rel >= 0x93d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d240 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle_intro/bin/battle_intro_00_lyt.bin
*/
void battle_intro_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d240ULL || rel >= 0x93d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d350 size=32 callers=0 calls=0
*/
void sub_93d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d350ULL || rel >= 0x93d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d370 size=48 callers=0 calls=0
*/
void sub_93d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d370ULL || rel >= 0x93d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d3a0 size=816 callers=1 calls=6
   calls: sub_5cfad0, sub_8ebfe0, sub_e7ea90, sub_e7f7e0, sub_e83430, sub_eb6230
*/
void sub_93d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d3a0ULL || rel >= 0x93d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d6d0 size=16 callers=0 calls=0
*/
void sub_93d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d6d0ULL || rel >= 0x93d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d6e0 size=112 callers=0 calls=2
   calls: sub_14ab2b0, sub_eb6530
*/
void sub_93d6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d6e0ULL || rel >= 0x93d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d750 size=16 callers=0 calls=0
*/
void sub_93d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d750ULL || rel >= 0x93d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d760 size=16 callers=0 calls=0
*/
void sub_93d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d760ULL || rel >= 0x93d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d770 size=16 callers=0 calls=0
*/
void sub_93d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d770ULL || rel >= 0x93d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d780 size=16 callers=0 calls=0
*/
void sub_93d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d780ULL || rel >= 0x93d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d790 size=16 callers=0 calls=0
*/
void sub_93d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d790ULL || rel >= 0x93d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d7a0 size=16 callers=0 calls=0
*/
void sub_93d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d7a0ULL || rel >= 0x93d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d7b0 size=16 callers=0 calls=0
*/
void sub_93d7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d7b0ULL || rel >= 0x93d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d7c0 size=16 callers=0 calls=0
*/
void sub_93d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d7c0ULL || rel >= 0x93d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093d7d0 size=832 callers=0 calls=12
   calls: sub_5cfad0, sub_78f150, sub_78f240, sub_794e80, sub_93db10, sub_93ea20, sub_93ed70, sub_93f1b0, sub_93f5f0, sub_e7c0f0, sub_e7e890, sub_ee78c0
   ref: TalkView
   ref: RemainTimeView
   ref: MessageView
   ref: StartingDemoView
*/
void StartingDemoView_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d7d0ULL || rel >= 0x93db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093db10 size=272 callers=1 calls=3
   calls: sub_93e3b0, sub_93e4e0, sub_e7c160
*/
void sub_93db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93db10ULL || rel >= 0x93dc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093dc20 size=384 callers=0 calls=4
   calls: sub_939b10, sub_939d50, sub_93e3b0, sub_e7f440
   ref: TalkView
   ref: MessageView
*/
void MessageView_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93dc20ULL || rel >= 0x93dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093dda0 size=288 callers=0 calls=1
   calls: sub_93e3b0
*/
void sub_93dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93dda0ULL || rel >= 0x93dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093dec0 size=224 callers=0 calls=2
   calls: sub_93f940, sub_e7c160
*/
void sub_93dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93dec0ULL || rel >= 0x93dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093dfa0 size=16 callers=0 calls=0
*/
void sub_93dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93dfa0ULL || rel >= 0x93dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093dfb0 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_93dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93dfb0ULL || rel >= 0x93e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e150 size=16 callers=0 calls=0
*/
void sub_93e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e150ULL || rel >= 0x93e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e160 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_93e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e160ULL || rel >= 0x93e210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e210 size=16 callers=0 calls=0
*/
void sub_93e210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e210ULL || rel >= 0x93e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e220 size=16 callers=0 calls=0
*/
void sub_93e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e220ULL || rel >= 0x93e230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e230 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_93e230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e230ULL || rel >= 0x93e2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e2e0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_93e2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e2e0ULL || rel >= 0x93e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e390 size=16 callers=0 calls=0
*/
void sub_93e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e390ULL || rel >= 0x93e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e3a0 size=16 callers=0 calls=0
*/
void sub_93e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e3a0ULL || rel >= 0x93e3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e3b0 size=304 callers=4 calls=0
*/
void sub_93e3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e3b0ULL || rel >= 0x93e4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e4e0 size=336 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_93e4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e4e0ULL || rel >= 0x93e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e630 size=128 callers=0 calls=0
*/
void sub_93e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e630ULL || rel >= 0x93e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e6b0 size=128 callers=0 calls=0
*/
void sub_93e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e6b0ULL || rel >= 0x93e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e730 size=16 callers=0 calls=0
*/
void sub_93e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e730ULL || rel >= 0x93e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e740 size=128 callers=0 calls=0
*/
void sub_93e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e740ULL || rel >= 0x93e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e7c0 size=128 callers=0 calls=0
*/
void sub_93e7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e7c0ULL || rel >= 0x93e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e840 size=16 callers=0 calls=0
*/
void sub_93e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e840ULL || rel >= 0x93e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e850 size=16 callers=0 calls=0
*/
void sub_93e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e850ULL || rel >= 0x93e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e860 size=128 callers=0 calls=0
*/
void sub_93e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e860ULL || rel >= 0x93e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e8e0 size=128 callers=0 calls=0
*/
void sub_93e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e8e0ULL || rel >= 0x93e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e960 size=96 callers=0 calls=0
*/
void sub_93e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e960ULL || rel >= 0x93e9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093e9c0 size=96 callers=0 calls=0
*/
void sub_93e9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e9c0ULL || rel >= 0x93ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093ea20 size=288 callers=1 calls=2
   calls: sub_93eb40, sub_e809c0
*/
void sub_93ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93ea20ULL || rel >= 0x93eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093eb40 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_93eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93eb40ULL || rel >= 0x93ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093ed70 size=288 callers=1 calls=2
   calls: sub_93ee90, sub_e809c0
*/
void sub_93ed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93ed70ULL || rel >= 0x93ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093ee90 size=384 callers=1 calls=3
   calls: sub_790490, sub_93f010, sub_e7fe20
*/
void sub_93ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93ee90ULL || rel >= 0x93f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093f010 size=416 callers=1 calls=1
   calls: anonymous_2
*/
void sub_93f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93f010ULL || rel >= 0x93f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093f1b0 size=288 callers=1 calls=2
   calls: sub_93f2d0, sub_e809c0
*/
void sub_93f1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93f1b0ULL || rel >= 0x93f2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093f2d0 size=384 callers=1 calls=3
   calls: sub_790490, sub_93f450, sub_e7fe20
*/
void sub_93f2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93f2d0ULL || rel >= 0x93f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093f450 size=416 callers=1 calls=1
   calls: anonymous_2
*/
void sub_93f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93f450ULL || rel >= 0x93f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093f5f0 size=288 callers=1 calls=2
   calls: sub_93f710, sub_e809c0
*/
void sub_93f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93f5f0ULL || rel >= 0x93f710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093f710 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_93f710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93f710ULL || rel >= 0x93f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093f940 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_93f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93f940ULL || rel >= 0x93fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fa80 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/battle_comtime_00_lyt.bin
*/
void battle_comtime_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fa80ULL || rel >= 0x93fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fb90 size=80 callers=0 calls=2
   calls: sub_e83930, sub_e83a40
*/
void sub_93fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fb90ULL || rel >= 0x93fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fbe0 size=16 callers=0 calls=0
*/
void sub_93fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fbe0ULL || rel >= 0x93fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fbf0 size=336 callers=1 calls=2
   calls: sub_e83540, sub_e83930
*/
void sub_93fbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fbf0ULL || rel >= 0x93fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fd40 size=96 callers=2 calls=2
   calls: sub_e83930, sub_e83a40
*/
void sub_93fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fd40ULL || rel >= 0x93fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fda0 size=16 callers=0 calls=0
*/
void sub_93fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fda0ULL || rel >= 0x93fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fdb0 size=16 callers=0 calls=0
*/
void sub_93fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fdb0ULL || rel >= 0x93fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fdc0 size=16 callers=0 calls=0
*/
void sub_93fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fdc0ULL || rel >= 0x93fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fdd0 size=16 callers=0 calls=0
*/
void sub_93fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fdd0ULL || rel >= 0x93fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fde0 size=16 callers=0 calls=0
*/
void sub_93fde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fde0ULL || rel >= 0x93fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fdf0 size=16 callers=0 calls=0
*/
void sub_93fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fdf0ULL || rel >= 0x93fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fe00 size=16 callers=0 calls=0
*/
void sub_93fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fe00ULL || rel >= 0x93fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fe10 size=16 callers=0 calls=0
*/
void sub_93fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fe10ULL || rel >= 0x93fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fe20 size=192 callers=0 calls=1
   calls: sub_e83540
*/
void sub_93fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fe20ULL || rel >= 0x93fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fee0 size=16 callers=0 calls=0
*/
void sub_93fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fee0ULL || rel >= 0x93fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093fef0 size=32 callers=0 calls=0
*/
void sub_93fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fef0ULL || rel >= 0x93ff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093ff10 size=32 callers=0 calls=0
*/
void sub_93ff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93ff10ULL || rel >= 0x93ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093ff30 size=416 callers=0 calls=4
   calls: sub_939f80, sub_c39c40, sub_d0c0, sub_e806b0
   ref: RemainTimeView
   ref: RemainTimeState
*/
void RemainTimeState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93ff30ULL || rel >= 0x9400d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009400d0 size=192 callers=0 calls=3
   calls: sub_93e3b0, sub_93fbf0, sub_93fd40
*/
void sub_9400d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9400d0ULL || rel >= 0x940190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00940190 size=16 callers=0 calls=0
*/
void sub_940190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x940190ULL || rel >= 0x9401a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009401a0 size=96 callers=0 calls=0
*/
void sub_9401a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9401a0ULL || rel >= 0x940200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00940200 size=96 callers=0 calls=0
*/
void sub_940200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x940200ULL || rel >= 0x940260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00940260 size=16 callers=0 calls=0
*/
void sub_940260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x940260ULL || rel >= 0x940270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00940270 size=96 callers=0 calls=0
*/
void sub_940270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x940270ULL || rel >= 0x9402d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009402d0 size=96 callers=0 calls=0
*/
void sub_9402d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9402d0ULL || rel >= 0x940330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00940330 size=16 callers=0 calls=0
*/
void sub_940330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x940330ULL || rel >= 0x940340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00940340 size=16 callers=0 calls=0
*/
void sub_940340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x940340ULL || rel >= 0x940350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00940350 size=96 callers=0 calls=0
*/
void sub_940350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x940350ULL || rel >= 0x9403b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009403b0 size=96 callers=0 calls=0
*/
void sub_9403b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9403b0ULL || rel >= 0x940410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00940410 size=304 callers=0 calls=0
*/
void sub_940410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x940410ULL || rel >= 0x940540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00940540 size=2496 callers=1 calls=10
   calls: sub_11061d0, sub_5cf8e0, sub_5cf8f0, sub_65d700, sub_65f110, sub_7910a0, sub_7c2da0, sub_8a7f30, sub_940f00, sub_987d90
*/
void sub_940540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x940540ULL || rel >= 0x940f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00940f00 size=704 callers=2 calls=1
   calls: sub_8a7f50
*/
void sub_940f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x940f00ULL || rel >= 0x9411c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009411c0 size=96 callers=29 calls=0
*/
void sub_9411c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9411c0ULL || rel >= 0x941220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00941220 size=64 callers=1 calls=0
*/
void sub_941220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x941220ULL || rel >= 0x941260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00941260 size=2368 callers=1 calls=11
   calls: sub_11061d0, sub_5cf8e0, sub_5cf8f0, sub_65d700, sub_65f110, sub_7910a0, sub_7c2da0, sub_8a7f30, sub_8a8e30, sub_940f00, sub_987d90
*/
void sub_941260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x941260ULL || rel >= 0x941ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00941ba0 size=5952 callers=0 calls=61
   calls: ee700_bg_fog_02, sub_12f8340, sub_12f8350, sub_12f8360, sub_142a1c0, sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2070, sub_5d76c0, sub_67b990, sub_7c56e0
   ... +49 more
   ref: fel_999
   ref: fel_181
   ref: bin/battle/waza/sequence/%s.bseq
*/
void fel_999(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x941ba0ULL || rel >= 0x9432e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009432e0 size=1552 callers=1 calls=4
   calls: sub_65f1c0, sub_7c56e0, sub_8a9060, sub_987eb0
*/
void sub_9432e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9432e0ULL || rel >= 0x9438f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009438f0 size=4176 callers=1 calls=13
   calls: sub_5cfad0, sub_6032f0, sub_6323a0, sub_68f030, sub_68f670, sub_946e90, sub_967240, sub_969e30, sub_9a4920, sub_ea0fd0, sub_ed1920, sub_ee49b0
   ... +1 more
*/
void sub_9438f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9438f0ULL || rel >= 0x944940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00944940 size=6592 callers=2 calls=5
   calls: sub_5dd790, sub_5e2930, sub_94e8d0, sub_965df0, sub_965f20
   ref: ee700_bg_fog_01
   ref: ee050_grs01_cam
   ref: ee051_mst01_cam
   ref: ee053_psy01_cam
   ref: ee050_grs01
   ref: ee052_elc01
   ref: .gfpak
   ref: ee051_mst01
*/
void ee700_bg_fog_02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x944940ULL || rel >= 0x946300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00946300 size=304 callers=6 calls=3
   calls: sub_5e6180, sub_969b60, sub_d0c0
*/
void sub_946300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x946300ULL || rel >= 0x946430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00946430 size=1040 callers=1 calls=9
   calls: sub_e44850, sub_e44b30, sub_e44bd0, sub_e44da0, sub_e44e00, sub_e469f0, sub_e46a40, sub_e910e0, sub_ee78f0
*/
void sub_946430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x946430ULL || rel >= 0x946840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00946840 size=288 callers=2 calls=2
   calls: sub_962fb0, sub_98e220
*/
void sub_946840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x946840ULL || rel >= 0x946960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00946960 size=272 callers=1 calls=1
   calls: sub_620d70
*/
void sub_946960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x946960ULL || rel >= 0x946a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00946a70 size=32 callers=5 calls=0
*/
void sub_946a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x946a70ULL || rel >= 0x946a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00946a90 size=192 callers=2 calls=5
   calls: sub_791560, sub_95b660, sub_95b790, sub_95b8d0, sub_c1f2b0
*/
void sub_946a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x946a90ULL || rel >= 0x946b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00946b50 size=832 callers=1 calls=0
*/
void sub_946b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x946b50ULL || rel >= 0x946e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00946e90 size=416 callers=22 calls=1
   calls: sub_969d40
*/
void sub_946e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x946e90ULL || rel >= 0x947030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00947030 size=128 callers=1 calls=2
   calls: sub_1106200, sub_1106f30
*/
void sub_947030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x947030ULL || rel >= 0x9470b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009470b0 size=16 callers=0 calls=0
*/
void sub_9470b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9470b0ULL || rel >= 0x9470c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009470c0 size=3136 callers=0 calls=14
   calls: sub_5dd790, sub_5e2930, sub_7c56e0, sub_7c5910, sub_7ca1d0, sub_8a9060, sub_947d90, sub_948390, sub_9799b0, sub_97a520, sub_97b480, sub_987ee0
   ... +2 more
   ref: bin/archive/battle/battle_common.gfpak
*/
void battle_common(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9470c0ULL || rel >= 0x947d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00947d00 size=144 callers=13 calls=1
   calls: sub_ea0fd0
*/
void sub_947d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x947d00ULL || rel >= 0x947d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00947d90 size=1536 callers=1 calls=5
   calls: sub_987e20, sub_98af30, sub_98b080, sub_b334c0, sub_ea0fd0
*/
void sub_947d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x947d90ULL || rel >= 0x948390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00948390 size=304 callers=10 calls=3
   calls: sub_5e6180, sub_96af40, sub_d0c0
*/
void sub_948390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x948390ULL || rel >= 0x9484c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009484c0 size=720 callers=0 calls=0
*/
void sub_9484c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9484c0ULL || rel >= 0x948790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00948790 size=1936 callers=0 calls=4
   calls: GroundAttributes, sub_948f20, sub_949300, sub_9495a0
*/
void sub_948790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x948790ULL || rel >= 0x948f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00948f20 size=992 callers=27 calls=3
   calls: sub_7c56e0, sub_8a9070, sub_981b70
*/
void sub_948f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x948f20ULL || rel >= 0x949300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00949300 size=672 callers=2 calls=2
   calls: sub_981b70, sub_9825b0
*/
void sub_949300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x949300ULL || rel >= 0x9495a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009495a0 size=576 callers=16 calls=3
   calls: sub_7c56e0, sub_8a9070, sub_981b70
*/
void sub_9495a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9495a0ULL || rel >= 0x9497e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009497e0 size=1520 callers=0 calls=4
   calls: g_table, sub_98b660, sub_98d1c0, sub_98d400
   ref: fi_action_uniq_trigger
   ref: fi_wait_type
   ref: fi_action_number
*/
void fi_action_uniq_trigger(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9497e0ULL || rel >= 0x949dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00949dd0 size=304 callers=1 calls=6
   calls: sub_949f00, sub_97e340, sub_987e90, sub_988230, sub_98c900, sub_9af2d0
*/
void sub_949dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x949dd0ULL || rel >= 0x949f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00949f00 size=176 callers=1 calls=2
   calls: sub_987e90, sub_98c900
*/
void sub_949f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x949f00ULL || rel >= 0x949fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00949fb0 size=368 callers=0 calls=3
   calls: sub_97e740, sub_98ca60, sub_9af430
*/
void sub_949fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x949fb0ULL || rel >= 0x94a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094a120 size=1776 callers=2 calls=7
   calls: sub_5dd790, sub_5e2930, sub_5f50, sub_7910b0, sub_7912b0, sub_948390, sub_94a810
   ref: bin/battle/data_table/battle_wazamsg.prmb
   ref: bin/battle/data_table/battle_misc.prmb
   ref: Battle_System_Flow.bnk
   ref: bin/battle/wait_camera_lens_distortion/wait_camera_lens_distortion_data.bin
   ref: bin/battle/data_table/wait_camera.prmb
*/
void wait_camera_lens_distortion_data(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94a120ULL || rel >= 0x94a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094a810 size=304 callers=1 calls=3
   calls: sub_5e6180, sub_96b0b0, sub_d0c0
*/
void sub_94a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94a810ULL || rel >= 0x94a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094a940 size=192 callers=4 calls=1
   calls: sub_791560
*/
void sub_94a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94a940ULL || rel >= 0x94aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094aa00 size=2336 callers=2 calls=15
   calls: stadiumcrowdd, sub_5dd790, sub_5e2930, sub_7c56e0, sub_7c5910, sub_7ca1d0, sub_8a9060, sub_965df0, sub_965f20, sub_97a520, sub_97b480, sub_984250
   ... +3 more
   ref: ee090_finder00_cam
   ref: .gfpak
   ref: bin/archive/battle/effect/
*/
void ee090_finder00_cam(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94aa00ULL || rel >= 0x94b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094b320 size=176 callers=8 calls=2
   calls: sub_965df0, sub_965f20
   ref: .gfpak
   ref: bin/archive/battle/effect/
*/
void unnamed_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94b320ULL || rel >= 0x94b3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094b3d0 size=1632 callers=1 calls=4
   calls: sub_987e20, sub_98af30, sub_98b080, sub_ea0fd0
   ref: stadiumcrowdc
   ref: stadiumcrowdd
   ref: stadiumcrowdb
   ref: stadiumcrowda
*/
void stadiumcrowdd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94b3d0ULL || rel >= 0x94ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094ba30 size=1008 callers=4 calls=1
   calls: sub_9846c0
*/
void sub_94ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94ba30ULL || rel >= 0x94be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094be20 size=1584 callers=1 calls=9
   calls: GroundAttributes, PM_Health, ba_drone_move, sub_14db420, sub_7eef50, sub_948f20, sub_9495a0, sub_983f70, sub_984790
*/
void sub_94be20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94be20ULL || rel >= 0x94c450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094c450 size=1696 callers=0 calls=4
   calls: sub_614680, sub_8a9060, sub_98b660, sub_98c1b0
   ref: tr0155body
   ref: tr0150body
   ref: tr0149body
   ref: tr0148body
   ref: Col0SecondaryColor
   ref: Col0PrimaryColor
   ref: tr0151body
   ref: tr0028body
*/
void Col0SecondaryColor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94c450ULL || rel >= 0x94caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094caf0 size=7568 callers=0 calls=58
   calls: sub_12f8370, sub_142aa00, sub_5cf8e0, sub_5cf8f0, sub_5cfaf0, sub_5e2bc0, sub_68da60, sub_68f650, sub_791180, sub_791400, sub_791560, sub_794330
   ... +46 more
   ref: Stop_PM_G_Lowtone
   ref: Set_State_Battle_Off
*/
void Set_State_Battle_Off(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94caf0ULL || rel >= 0x94e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094e880 size=80 callers=2 calls=1
   calls: sub_98e3e0
*/
void sub_94e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94e880ULL || rel >= 0x94e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094e8d0 size=336 callers=3 calls=2
   calls: sub_5e2bc0, sub_98e3e0
*/
void sub_94e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94e8d0ULL || rel >= 0x94ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094ea20 size=1840 callers=0 calls=18
   calls: Audience_Tension, Play_Ba_sys_pinch, es005_paralysis, sub_142a480, sub_5cfad0, sub_94f150, sub_94f2c0, sub_9626e0, sub_97ad20, sub_97f190, sub_989eb0, sub_9a5a30
   ... +6 more
   ref: ba_cheer
*/
void ba_cheer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94ea20ULL || rel >= 0x94f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094f150 size=368 callers=1 calls=3
   calls: sub_9f9360, sub_9f9380, to_ba02_megaappeal01
*/
void sub_94f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94f150ULL || rel >= 0x94f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0094f2c0 size=4816 callers=1 calls=36
   calls: sub_607550, sub_791180, sub_791400, sub_791560, sub_793a10, sub_793a60, sub_7c56e0, sub_7ee6b0, sub_8a7f50, sub_8a9060, sub_8ea550, sub_946a90
   ... +24 more
*/
void sub_94f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94f2c0ULL || rel >= 0x950590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00950590 size=1248 callers=1 calls=8
   calls: PM_Health, sub_5cfaf0, sub_793a60, sub_794330, sub_8ea650, sub_8ea6b0, sub_95bb50, sub_d0c0
   ref: Play_Ba_sys_pinch
*/
void Play_Ba_sys_pinch(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x950590ULL || rel >= 0x950a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00950a70 size=64 callers=0 calls=1
   calls: sub_8a9060
*/
void sub_950a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x950a70ULL || rel >= 0x950ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00950ab0 size=64 callers=0 calls=1
   calls: sub_8a9070
*/
void sub_950ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x950ab0ULL || rel >= 0x950af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00950af0 size=64 callers=0 calls=1
   calls: sub_8a9070
*/
void sub_950af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x950af0ULL || rel >= 0x950b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00950b30 size=64 callers=0 calls=1
   calls: sub_8a9070
*/
void sub_950b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x950b30ULL || rel >= 0x950b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00950b70 size=64 callers=0 calls=1
   calls: sub_8a9070
*/
void sub_950b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x950b70ULL || rel >= 0x950bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00950bb0 size=112 callers=0 calls=2
   calls: sub_7ca170, sub_8a9070
*/
void sub_950bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x950bb0ULL || rel >= 0x950c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00950c20 size=64 callers=0 calls=1
   calls: sub_8a9070
*/
void sub_950c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x950c20ULL || rel >= 0x950c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00950c60 size=16 callers=0 calls=0
*/
void sub_950c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x950c60ULL || rel >= 0x950c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00950c70 size=16 callers=0 calls=0
*/
void sub_950c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x950c70ULL || rel >= 0x950c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00950c80 size=16 callers=0 calls=0
*/
void sub_950c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x950c80ULL || rel >= 0x950c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00950c90 size=16 callers=0 calls=0
*/
void sub_950c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x950c90ULL || rel >= 0x950ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00950ca0 size=448 callers=2 calls=1
   calls: sub_981b70
*/
void sub_950ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x950ca0ULL || rel >= 0x950e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00950e60 size=656 callers=7 calls=1
   calls: sub_981b70
*/
void sub_950e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x950e60ULL || rel >= 0x9510f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009510f0 size=608 callers=1 calls=1
   calls: sub_981b70
*/
void sub_9510f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9510f0ULL || rel >= 0x951350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00951350 size=864 callers=10 calls=1
   calls: sub_981b70
*/
void sub_951350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x951350ULL || rel >= 0x9516b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009516b0 size=736 callers=2 calls=1
   calls: sub_981b70
*/
void sub_9516b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9516b0ULL || rel >= 0x951990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00951990 size=464 callers=5 calls=2
   calls: sub_950e60, sub_951b60
*/
void sub_951990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x951990ULL || rel >= 0x951b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00951b60 size=832 callers=2 calls=2
   calls: sub_7c56e0, sub_8a9070
*/
void sub_951b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x951b60ULL || rel >= 0x951ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00951ea0 size=2000 callers=1 calls=4
   calls: sub_950e60, sub_951350, sub_951b60, sub_981b70
*/
void sub_951ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x951ea0ULL || rel >= 0x952670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00952670 size=128 callers=148 calls=0
*/
void sub_952670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x952670ULL || rel >= 0x9526f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009526f0 size=128 callers=71 calls=0
*/
void sub_9526f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9526f0ULL || rel >= 0x952770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00952770 size=416 callers=1 calls=0
*/
void sub_952770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x952770ULL || rel >= 0x952910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00952910 size=16 callers=1 calls=0
*/
void sub_952910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x952910ULL || rel >= 0x952920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00952920 size=16 callers=1 calls=0
*/
void sub_952920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x952920ULL || rel >= 0x952930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00952930 size=16 callers=1 calls=0
*/
void sub_952930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x952930ULL || rel >= 0x952940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00952940 size=1616 callers=27 calls=4
   calls: sub_142a660, sub_948f20, sub_96c930, sub_96cb60
*/
void sub_952940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x952940ULL || rel >= 0x952f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00952f90 size=288 callers=16 calls=1
   calls: sub_9495a0
*/
void sub_952f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x952f90ULL || rel >= 0x9530b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009530b0 size=192 callers=14 calls=2
   calls: sub_951990, sub_9531f0
*/
void sub_9530b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9530b0ULL || rel >= 0x953170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00953170 size=128 callers=2 calls=2
   calls: sub_951990, sub_9531f0
*/
void sub_953170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x953170ULL || rel >= 0x9531f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009531f0 size=512 callers=4 calls=8
   calls: sub_142a660, sub_953470, sub_9901f0, sub_9a71a0, sub_9a71d0, sub_9a7220, sub_9a7230, sub_9a7240
*/
void sub_9531f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9531f0ULL || rel >= 0x9533f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009533f0 size=128 callers=2 calls=2
   calls: sub_951ea0, sub_9531f0
*/
void sub_9533f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9533f0ULL || rel >= 0x953470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00953470 size=496 callers=4 calls=0
*/
void sub_953470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x953470ULL || rel >= 0x953660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00953660 size=128 callers=1 calls=0
*/
void sub_953660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x953660ULL || rel >= 0x9536e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009536e0 size=208 callers=1 calls=2
   calls: sub_7c56e0, sub_8a9060
*/
void sub_9536e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9536e0ULL || rel >= 0x9537b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009537b0 size=96 callers=1 calls=0
*/
void sub_9537b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9537b0ULL || rel >= 0x953810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00953810 size=96 callers=1 calls=0
*/
void sub_953810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x953810ULL || rel >= 0x953870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00953870 size=96 callers=2 calls=0
*/
void sub_953870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x953870ULL || rel >= 0x9538d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009538d0 size=128 callers=2 calls=1
   calls: sub_620d70
*/
void sub_9538d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9538d0ULL || rel >= 0x953950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00953950 size=32 callers=1 calls=0
*/
void sub_953950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x953950ULL || rel >= 0x953970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00953970 size=64 callers=1 calls=1
   calls: sub_620d70
*/
void sub_953970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x953970ULL || rel >= 0x9539b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009539b0 size=192 callers=2 calls=0
*/
void sub_9539b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9539b0ULL || rel >= 0x953a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00953a70 size=448 callers=2 calls=0
*/
void sub_953a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x953a70ULL || rel >= 0x953c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00953c30 size=192 callers=3 calls=0
*/
void sub_953c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x953c30ULL || rel >= 0x953cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00953cf0 size=448 callers=2 calls=0
*/
void sub_953cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x953cf0ULL || rel >= 0x953eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00953eb0 size=192 callers=1 calls=0
*/
void sub_953eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x953eb0ULL || rel >= 0x953f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00953f70 size=448 callers=1 calls=0
*/
void sub_953f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x953f70ULL || rel >= 0x954130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954130 size=336 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_6194a0, sub_96ccf0
*/
void sub_954130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954130ULL || rel >= 0x954280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954280 size=336 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_6194a0, sub_96ccf0
*/
void sub_954280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954280ULL || rel >= 0x9543d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009543d0 size=128 callers=2 calls=1
   calls: sub_c5ac90
*/
void sub_9543d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9543d0ULL || rel >= 0x954450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954450 size=208 callers=1 calls=2
   calls: sub_c5ac90, sub_c5ad40
*/
void sub_954450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954450ULL || rel >= 0x954520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954520 size=80 callers=1 calls=1
   calls: sub_eeb2b0
*/
void sub_954520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954520ULL || rel >= 0x954570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954570 size=32 callers=0 calls=0
*/
void sub_954570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954570ULL || rel >= 0x954590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954590 size=240 callers=6 calls=2
   calls: sub_c58d20, sub_c5ab30
*/
void sub_954590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954590ULL || rel >= 0x954680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954680 size=112 callers=2 calls=2
   calls: sub_ed3290, sub_ed32d0
*/
void sub_954680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954680ULL || rel >= 0x9546f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009546f0 size=112 callers=2 calls=2
   calls: sub_ed3290, sub_ed32d0
*/
void sub_9546f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9546f0ULL || rel >= 0x954760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954760 size=96 callers=2 calls=2
   calls: sub_ed3290, sub_ed32d0
*/
void sub_954760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954760ULL || rel >= 0x9547c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009547c0 size=176 callers=2 calls=3
   calls: sub_954590, sub_ed3290, sub_ed32d0
*/
void sub_9547c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9547c0ULL || rel >= 0x954870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954870 size=112 callers=2 calls=3
   calls: sub_954590, sub_ed3290, sub_ed32d0
*/
void sub_954870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954870ULL || rel >= 0x9548e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009548e0 size=128 callers=2 calls=3
   calls: sub_954590, sub_ed3290, sub_ed32d0
*/
void sub_9548e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9548e0ULL || rel >= 0x954960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954960 size=160 callers=2 calls=2
   calls: sub_ed3290, sub_ed32d0
*/
void sub_954960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954960ULL || rel >= 0x954a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954a00 size=144 callers=2 calls=2
   calls: sub_ed3290, sub_ed32d0
*/
void sub_954a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954a00ULL || rel >= 0x954a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954a90 size=128 callers=2 calls=3
   calls: sub_954590, sub_ed3290, sub_ed32d0
*/
void sub_954a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954a90ULL || rel >= 0x954b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954b10 size=48 callers=2 calls=1
   calls: sub_607550
*/
void sub_954b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954b10ULL || rel >= 0x954b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954b40 size=144 callers=2 calls=2
   calls: sub_607550, sub_ed34f0
*/
void sub_954b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954b40ULL || rel >= 0x954bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00954bd0 size=2640 callers=1 calls=15
   calls: sub_620d70, sub_7c56e0, sub_8a9060, sub_9495a0, sub_951990, sub_952940, sub_953470, sub_9a71a0, sub_9a71d0, sub_9a7220, sub_9a7230, sub_9a7240
   ... +3 more
*/
void sub_954bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x954bd0ULL || rel >= 0x955620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00955620 size=608 callers=2 calls=1
   calls: sub_946300
   ref: bin/battle/waza/particle/eb_set/eb%03d_%s.ptcl
   ref: bin/battle/waza/particle/eb_set/eb%03d_ballout.ptcl
   ref: bin/battle/waza/particle/eb_set/eb%03d_capture.ptcl
*/
void eb_03d_capture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x955620ULL || rel >= 0x955880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00955880 size=1008 callers=2 calls=6
   calls: sub_955c70, sub_955da0, sub_955ed0, sub_956000, sub_956130, sub_956260
   ref: bin/chara/data/ob/ob0215_00_quickball/mdl/ob0215_00.gfbmdl
   ref: bin/chara/data/ob/ob0222_00_friendball/mdl/ob0222_00.gfbmdl
   ref: bin/chara/data/ob/ob0226_00_parallelball/mdl/ob0226_00.gfbmdl
   ref: bin/chara/data/ob/ob0216_00_cherishball/mdl/ob0216_00.gfbmdl
   ref: bin/chara/data/ob/ob0207_00_diveball/mdl/ob0207_00.gfbmdl
   ref: bin/chara/data/ob/ob0219_00_lureball/mdl/ob0219_00.gfbmdl
   ref: bin/chara/data/ob/ob0223_00_moonball/mdl/ob0223_00.gfbmdl
   ref: bin/chara/data/ob/ob0205_00_safariball/mdl/ob0205_00.gfbmdl
*/
void ob0226_00_gfbmdl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x955880ULL || rel >= 0x955c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00955c70 size=304 callers=5 calls=3
   calls: sub_5e6180, sub_96cde0, sub_d0c0
*/
void sub_955c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x955c70ULL || rel >= 0x955da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00955da0 size=304 callers=14 calls=3
   calls: sub_5e6180, sub_96ce60, sub_d0c0
*/
void sub_955da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x955da0ULL || rel >= 0x955ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00955ed0 size=304 callers=2 calls=3
   calls: sub_5e6180, sub_96cee0, sub_d0c0
*/
void sub_955ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x955ed0ULL || rel >= 0x956000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00956000 size=304 callers=9 calls=3
   calls: sub_5e6180, sub_969f10, sub_d0c0
*/
void sub_956000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x956000ULL || rel >= 0x956130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00956130 size=304 callers=12 calls=3
   calls: sub_5e6180, sub_96cf60, sub_d0c0
*/
void sub_956130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x956130ULL || rel >= 0x956260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00956260 size=304 callers=3 calls=3
   calls: sub_5e6180, sub_96cfe0, sub_d0c0
*/
void sub_956260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x956260ULL || rel >= 0x956390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00956390 size=1008 callers=1 calls=6
   calls: sub_955da0, sub_956000, sub_956130, sub_956780, sub_9568b0, sub_9569e0
   ref: bin/archive/chara/data/ob/mdl/ob0213_00_duskball.gfpak
   ref: bin/archive/chara/data/ob/mdl/ob0223_00_moonball.gfpak
   ref: bin/archive/chara/data/ob/mdl/ob0217_00_fastball.gfpak
   ref: bin/archive/chara/data/ob/mdl/ob0226_00_parallelball.gfpak
   ref: bin/archive/chara/data/ob/mdl/ob0220_00_heavyball.gfpak
   ref: bin/archive/chara/data/ob/mdl/ob0208_00_nestball.gfpak
   ref: bin/archive/chara/data/ob/mdl/ob0209_00_repeatball.gfpak
   ref: bin/archive/chara/data/ob/mdl/ob0218_00_levelball.gfpak
*/
void ob0226_00_parallelball(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x956390ULL || rel >= 0x956780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00956780 size=304 callers=8 calls=3
   calls: sub_5e6180, sub_96d060, sub_d0c0
*/
void sub_956780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x956780ULL || rel >= 0x9568b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009568b0 size=304 callers=6 calls=3
   calls: sub_5e6180, sub_96d0e0, sub_d0c0
*/
void sub_9568b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9568b0ULL || rel >= 0x9569e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009569e0 size=304 callers=19 calls=3
   calls: sub_5e6180, sub_96b960, sub_d0c0
*/
void sub_9569e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9569e0ULL || rel >= 0x956b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00956b10 size=480 callers=2 calls=4
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0
   ref: monsno
*/
void monsno(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x956b10ULL || rel >= 0x956cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00956cf0 size=992 callers=1 calls=6
   calls: monsno, sub_11061e0, sub_1106200, sub_1106320, sub_11063e0, sub_11065b0
   ref: monsno
   ref: formno
   ref: timing_table
*/
void timing_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x956cf0ULL || rel >= 0x9570d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009570d0 size=1360 callers=1 calls=6
   calls: monsno, sub_11061e0, sub_1106200, sub_1106320, sub_11063e0, sub_11065b0
   ref: monsno
   ref: formno
   ref: waza_table
*/
void waza_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9570d0ULL || rel >= 0x957620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00957620 size=896 callers=2 calls=5
   calls: sub_1106200, sub_1106280, sub_1106320, sub_11063e0, sub_11065b0
   ref: exadjust_table
   ref: monsno
   ref: formno
*/
void exadjust_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x957620ULL || rel >= 0x9579a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009579a0 size=896 callers=1 calls=5
   calls: sub_1106200, sub_1106280, sub_1106320, sub_11063e0, sub_11065b0
   ref: monsno
   ref: formno
   ref: land_adjust_table
*/
void land_adjust_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9579a0ULL || rel >= 0x957d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00957d20 size=80 callers=6 calls=1
   calls: sub_957d70
   ref: bin/graphics/mask_texture/pattern_%02d/mask%d.bntx
*/
void mask_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x957d20ULL || rel >= 0x957d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00957d70 size=304 callers=10 calls=3
   calls: sub_5e6180, sub_96d160, sub_d0c0
*/
void sub_957d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x957d70ULL || rel >= 0x957ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00957ea0 size=80 callers=2 calls=1
   calls: sub_957d70
   ref: bin/archive/graphics/mask_texture/pattern_%02d.gfpak
*/
void pattern__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x957ea0ULL || rel >= 0x957ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00957ef0 size=80 callers=3 calls=1
   calls: sub_957d70
   ref: bin/graphics/mask_graphics/pattern_%02d/pattern_%02d.gfbmdl
*/
void pattern__02d_gfbmdl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x957ef0ULL || rel >= 0x957f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00957f40 size=80 callers=2 calls=1
   calls: sub_957d70
   ref: bin/archive/graphics/mask_graphics/pattern_%02d.gfpak
*/
void pattern__02d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x957f40ULL || rel >= 0x957f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00957f90 size=416 callers=1 calls=4
   calls: sub_987ee0, sub_987fa0, sub_c1f490, sub_ea0fd0
*/
void sub_957f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x957f90ULL || rel >= 0x958130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00958130 size=80 callers=1 calls=1
   calls: sub_988230
*/
void sub_958130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x958130ULL || rel >= 0x958180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00958180 size=304 callers=2 calls=0
*/
void sub_958180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x958180ULL || rel >= 0x9582b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009582b0 size=768 callers=2 calls=1
   calls: sub_981b70
*/
void sub_9582b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9582b0ULL || rel >= 0x9585b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009585b0 size=464 callers=1 calls=5
   calls: barrierbreak_g, sub_9582b0, sub_958780, sub_959420, sub_981b70
*/
void sub_9585b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9585b0ULL || rel >= 0x958780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00958780 size=3232 callers=3 calls=1
   calls: sub_95c170
*/
void sub_958780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x958780ULL || rel >= 0x959420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00959420 size=640 callers=2 calls=1
   calls: sub_7eef40
*/
void sub_959420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x959420ULL || rel >= 0x9596a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009596a0 size=3072 callers=2 calls=9
   calls: sub_76d0d0, sub_780d70, sub_7c56e0, sub_7ee800, sub_82d990, sub_82da30, sub_8a9060, sub_95b140, sub_981b70
   ref: _poke_only
   ref: _2_poke_only
   ref: bin/battle/waza/sequence/eg_heal.bseq
   ref: bin/battle/waza/sequence/eg_turn_hit.bseq
   ref: bin/battle/waza/sequence/ew%03d_field.bseq
   ref: _barrierbreak_g
   ref: bin/battle/waza/sequence/eg777.bseq
   ref: _barrierbreak
*/
void barrierbreak_g(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9596a0ULL || rel >= 0x95a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095a2a0 size=400 callers=32 calls=5
   calls: sub_1106320, sub_11063e0, sub_1106bc0, sub_76d0d0, sub_95ae30
   ref: bin/battle/waza/sequence/%s.bseq
   ref: g_table
   ref: fileName
*/
void fileName_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95a2a0ULL || rel >= 0x95a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095a430 size=368 callers=1 calls=5
   calls: sub_9582b0, sub_958780, sub_959420, sub_95a5a0, sub_981b70
*/
void sub_95a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95a430ULL || rel >= 0x95a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095a5a0 size=240 callers=1 calls=3
   calls: barrierbreak_g, sub_95ae30, sub_95afb0
*/
void sub_95a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95a5a0ULL || rel >= 0x95a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095a690 size=1024 callers=2 calls=12
   calls: Audience_Tension_3, fileName_2, sub_780e60, sub_780ec0, sub_7eef40, sub_950e60, sub_9585b0, sub_958780, sub_95a430, sub_95aa90, sub_97efb0, sub_9bc580
*/
void sub_95a690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95a690ULL || rel >= 0x95aa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095aa90 size=304 callers=1 calls=7
   calls: sub_14db420, sub_7cb540, sub_7cb660, sub_7eef50, sub_7ef2b0, sub_7fc2f0, sub_8a9060
*/
void sub_95aa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95aa90ULL || rel >= 0x95abc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095abc0 size=16 callers=1 calls=0
*/
void sub_95abc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95abc0ULL || rel >= 0x95abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095abd0 size=16 callers=56 calls=0
*/
void sub_95abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95abd0ULL || rel >= 0x95abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095abe0 size=16 callers=1 calls=0
*/
void sub_95abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95abe0ULL || rel >= 0x95abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095abf0 size=48 callers=1 calls=0
*/
void sub_95abf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95abf0ULL || rel >= 0x95ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095ac20 size=144 callers=0 calls=2
   calls: sub_ea3d10, sub_ea4820
*/
void sub_95ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95ac20ULL || rel >= 0x95acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095acb0 size=384 callers=1 calls=3
   calls: sub_ea3d20, sub_ea5dd0, sub_ea5df0
*/
void sub_95acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95acb0ULL || rel >= 0x95ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095ae30 size=384 callers=12 calls=2
   calls: sub_96d3a0, sub_9f9080
*/
void sub_95ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95ae30ULL || rel >= 0x95afb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095afb0 size=400 callers=14 calls=3
   calls: sub_5e6180, sub_96d300, sub_d0c0
*/
void sub_95afb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95afb0ULL || rel >= 0x95b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095b140 size=528 callers=2 calls=1
   calls: sub_780d40
*/
void sub_95b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95b140ULL || rel >= 0x95b350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095b350 size=112 callers=0 calls=0
*/
void sub_95b350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95b350ULL || rel >= 0x95b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095b3c0 size=240 callers=0 calls=0
*/
void sub_95b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95b3c0ULL || rel >= 0x95b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095b4b0 size=432 callers=6 calls=2
   calls: sub_607550, sub_c5ac60
*/
void sub_95b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95b4b0ULL || rel >= 0x95b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095b660 size=304 callers=1 calls=0
*/
void sub_95b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95b660ULL || rel >= 0x95b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095b790 size=320 callers=1 calls=1
   calls: sub_967bd0
*/
void sub_95b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95b790ULL || rel >= 0x95b8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095b8d0 size=272 callers=1 calls=1
   calls: sub_980d90
*/
void sub_95b8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95b8d0ULL || rel >= 0x95b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095b9e0 size=368 callers=1 calls=0
*/
void sub_95b9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95b9e0ULL || rel >= 0x95bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095bb50 size=224 callers=13 calls=2
   calls: sub_14dd2a0, sub_967370
*/
void sub_95bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95bb50ULL || rel >= 0x95bc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095bc30 size=96 callers=4 calls=0
*/
void sub_95bc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95bc30ULL || rel >= 0x95bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095bc90 size=112 callers=1 calls=0
*/
void sub_95bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95bc90ULL || rel >= 0x95bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095bd00 size=16 callers=0 calls=0
*/
void sub_95bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95bd00ULL || rel >= 0x95bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095bd10 size=32 callers=0 calls=0
*/
void sub_95bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95bd10ULL || rel >= 0x95bd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095bd30 size=176 callers=0 calls=9
   calls: sub_7cb850, sub_7cc840, sub_7dfdc0, sub_8a7f60, sub_8a7f70, sub_8a7f80, sub_8a7f90, sub_8a9060, sub_98a7b0
*/
void sub_95bd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95bd30ULL || rel >= 0x95bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095bde0 size=16 callers=0 calls=0
*/
void sub_95bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95bde0ULL || rel >= 0x95bdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095bdf0 size=16 callers=0 calls=0
*/
void sub_95bdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95bdf0ULL || rel >= 0x95be00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095be00 size=16 callers=0 calls=0
*/
void sub_95be00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95be00ULL || rel >= 0x95be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095be10 size=544 callers=7 calls=2
   calls: fileName_2, sub_981b70
*/
void sub_95be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95be10ULL || rel >= 0x95c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095c030 size=320 callers=6 calls=0
*/
void sub_95c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95c030ULL || rel >= 0x95c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095c170 size=944 callers=1 calls=0
*/
void sub_95c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95c170ULL || rel >= 0x95c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0095c520 size=16624 callers=2 calls=21
   calls: sub_136b580, sub_762930, sub_762940, sub_763cc0, sub_768e10, sub_7c2d80, sub_7c56e0, sub_7cb660, sub_7cb7a0, sub_7cc840, sub_7d72b0, sub_7ee800
   ... +9 more
*/
void sub_95c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95c520ULL || rel >= 0x960610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00960610 size=16 callers=23 calls=0
*/
void sub_960610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x960610ULL || rel >= 0x960620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00960620 size=160 callers=21 calls=0
*/
void sub_960620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x960620ULL || rel >= 0x9606c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009606c0 size=112 callers=22 calls=0
*/
void sub_9606c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9606c0ULL || rel >= 0x960730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00960730 size=1168 callers=8 calls=2
   calls: sub_948f20, sub_972af0
*/
void sub_960730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x960730ULL || rel >= 0x960bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00960bc0 size=1120 callers=2 calls=3
   calls: sub_948f20, sub_961020, sub_972af0
*/
void sub_960bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x960bc0ULL || rel >= 0x961020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00961020 size=352 callers=12 calls=1
   calls: sub_967bd0
*/
void sub_961020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x961020ULL || rel >= 0x961180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00961180 size=752 callers=9 calls=3
   calls: sub_142a660, sub_960730, sub_96d9a0
*/
void sub_961180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x961180ULL || rel >= 0x961470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00961470 size=736 callers=1 calls=4
   calls: sub_142a660, sub_960730, sub_961020, sub_96d9a0
*/
void sub_961470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x961470ULL || rel >= 0x961750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00961750 size=640 callers=3 calls=3
   calls: sub_142a660, sub_9619d0, sub_96d9a0
*/
void sub_961750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x961750ULL || rel >= 0x9619d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009619d0 size=752 callers=4 calls=1
   calls: sub_948f20
*/
void sub_9619d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9619d0ULL || rel >= 0x961cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00961cc0 size=592 callers=2 calls=1
   calls: sub_948f20
*/
void sub_961cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x961cc0ULL || rel >= 0x961f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00961f10 size=192 callers=33 calls=0
*/
void sub_961f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x961f10ULL || rel >= 0x961fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00961fd0 size=384 callers=5 calls=3
   calls: sub_948f20, sub_962230, sub_972af0
*/
void sub_961fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x961fd0ULL || rel >= 0x962150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00962150 size=224 callers=3 calls=1
   calls: sub_962230
*/
void sub_962150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x962150ULL || rel >= 0x962230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00962230 size=480 callers=14 calls=0
*/
void sub_962230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x962230ULL || rel >= 0x962410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00962410 size=16 callers=4 calls=0
*/
void sub_962410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x962410ULL || rel >= 0x962420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00962420 size=16 callers=17 calls=0
*/
void sub_962420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x962420ULL || rel >= 0x962430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00962430 size=16 callers=2 calls=0
*/
void sub_962430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x962430ULL || rel >= 0x962440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00962440 size=16 callers=18 calls=0
*/
void sub_962440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x962440ULL || rel >= 0x962450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00962450 size=16 callers=18 calls=0
*/
void sub_962450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x962450ULL || rel >= 0x962460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00962460 size=96 callers=1 calls=2
   calls: sub_7910b0, sub_7912b0
*/
void sub_962460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x962460ULL || rel >= 0x9624c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009624c0 size=480 callers=3 calls=0
*/
void sub_9624c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9624c0ULL || rel >= 0x9626a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009626a0 size=64 callers=3 calls=1
   calls: sub_ea8c70
*/
void sub_9626a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9626a0ULL || rel >= 0x9626e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009626e0 size=1392 callers=2 calls=3
   calls: sub_975b90, sub_9a7250, sub_9a72a0
*/
void sub_9626e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9626e0ULL || rel >= 0x962c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00962c50 size=624 callers=1 calls=3
   calls: sub_c5ac60, sub_e46ba0, sub_e910e0
*/
void sub_962c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x962c50ULL || rel >= 0x962ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00962ec0 size=240 callers=4 calls=2
   calls: sub_e46d00, sub_e910e0
*/
void sub_962ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x962ec0ULL || rel >= 0x962fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00962fb0 size=352 callers=1 calls=1
   calls: sub_68d9b0
*/
void sub_962fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x962fb0ULL || rel >= 0x963110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00963110 size=448 callers=3 calls=1
   calls: sub_68da60
*/
void sub_963110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x963110ULL || rel >= 0x9632d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009632d0 size=416 callers=1 calls=3
   calls: sub_98e1d0, sub_98e220, sub_ea0fd0
*/
void sub_9632d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9632d0ULL || rel >= 0x963470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00963470 size=656 callers=5 calls=0
*/
void sub_963470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x963470ULL || rel >= 0x963700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00963700 size=464 callers=0 calls=2
   calls: sub_5cf8f0, sub_5d2070
*/
void sub_963700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x963700ULL || rel >= 0x9638d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009638d0 size=160 callers=0 calls=0
*/
void sub_9638d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9638d0ULL || rel >= 0x963970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00963970 size=224 callers=2 calls=2
   calls: sub_793480, sub_963a50
   ref: _g.ptcl
*/
void unnamed_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x963970ULL || rel >= 0x963a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00963a50 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_963a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x963a50ULL || rel >= 0x963ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00963ad0 size=5648 callers=6 calls=36
   calls: sub_5cf8e0, sub_5cf8f0, sub_5cfaf0, sub_620d70, sub_68d9f0, sub_794330, sub_7c56e0, sub_8a9060, sub_95acb0, sub_969d40, sub_96c590, sub_96c6c0
   ... +24 more
   ref: Play_PM_G_Lowtone
   ref: Set_State_Battle_Wild
   ref: Set_State_Battle_DoubleBattle
   ref: Set_State_Battle_GymLeader
   ref: 02_audience_switch_off
   ref: Set_State_Battle_Trainer
*/
void Set_State_Battle_Wild(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x963ad0ULL || rel >= 0x9650e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009650e0 size=112 callers=1 calls=1
   calls: sub_c7a070
*/
void sub_9650e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9650e0ULL || rel >= 0x965150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00965150 size=208 callers=6 calls=1
   calls: sub_9a59d0
*/
void sub_965150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x965150ULL || rel >= 0x965220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00965220 size=1392 callers=1 calls=7
   calls: sub_5cfaf0, sub_794330, sub_9516b0, sub_96c590, sub_c5ac60, sub_ce6060, sub_d0c0
   ref: Play_PM_G_Lowtone
   ref: Stop_PM_G_Lowtone
*/
void Stop_PM_G_Lowtone(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x965220ULL || rel >= 0x965790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00965790 size=848 callers=5 calls=6
   calls: sub_5cf8e0, sub_5cf8f0, sub_619130, sub_96c590, sub_96ccf0, sub_c79200
*/
void sub_965790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x965790ULL || rel >= 0x965ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00965ae0 size=16 callers=1 calls=0
*/
void sub_965ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x965ae0ULL || rel >= 0x965af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00965af0 size=352 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_619300, sub_96ccf0
*/
void sub_965af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x965af0ULL || rel >= 0x965c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00965c50 size=224 callers=1 calls=1
   calls: sub_98d5f0
*/
void sub_965c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x965c50ULL || rel >= 0x965d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00965d30 size=192 callers=2 calls=0
*/
void sub_965d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x965d30ULL || rel >= 0x965df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00965df0 size=304 callers=15 calls=3
   calls: sub_5e6180, sub_96fb50, sub_d0c0
*/
void sub_965df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x965df0ULL || rel >= 0x965f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00965f20 size=528 callers=12 calls=3
   calls: sub_5e6180, sub_96fbd0, sub_d0c0
*/
void sub_965f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x965f20ULL || rel >= 0x966130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00966130 size=4048 callers=0 calls=11
   calls: sub_5e2bc0, sub_682dd0, sub_7dfde0, sub_9674a0, sub_967760, sub_967970, sub_9682b0, sub_9683c0, sub_968660, sub_968900, sub_968ba0
*/
void sub_966130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x966130ULL || rel >= 0x967100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967100 size=16 callers=0 calls=0
*/
void sub_967100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967100ULL || rel >= 0x967110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967110 size=16 callers=0 calls=0
*/
void sub_967110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967110ULL || rel >= 0x967120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967120 size=16 callers=0 calls=0
*/
void sub_967120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967120ULL || rel >= 0x967130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967130 size=16 callers=0 calls=0
*/
void sub_967130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967130ULL || rel >= 0x967140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967140 size=16 callers=0 calls=0
*/
void sub_967140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967140ULL || rel >= 0x967150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967150 size=16 callers=0 calls=0
*/
void sub_967150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967150ULL || rel >= 0x967160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967160 size=16 callers=0 calls=0
*/
void sub_967160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967160ULL || rel >= 0x967170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967170 size=32 callers=0 calls=0
*/
void sub_967170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967170ULL || rel >= 0x967190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967190 size=16 callers=0 calls=0
*/
void sub_967190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967190ULL || rel >= 0x9671a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009671a0 size=16 callers=0 calls=0
*/
void sub_9671a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9671a0ULL || rel >= 0x9671b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009671b0 size=16 callers=0 calls=0
*/
void sub_9671b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9671b0ULL || rel >= 0x9671c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009671c0 size=32 callers=0 calls=0
*/
void sub_9671c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9671c0ULL || rel >= 0x9671e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009671e0 size=32 callers=0 calls=0
*/
void sub_9671e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9671e0ULL || rel >= 0x967200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967200 size=32 callers=0 calls=0
*/
void sub_967200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967200ULL || rel >= 0x967220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967220 size=32 callers=0 calls=0
*/
void sub_967220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967220ULL || rel >= 0x967240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967240 size=304 callers=591 calls=0
*/
void sub_967240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967240ULL || rel >= 0x967370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967370 size=304 callers=63 calls=0
*/
void sub_967370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967370ULL || rel >= 0x9674a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009674a0 size=704 callers=2 calls=1
   calls: sub_5e2bc0
*/
void sub_9674a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9674a0ULL || rel >= 0x967760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967760 size=448 callers=1 calls=0
*/
void sub_967760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967760ULL || rel >= 0x967920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967920 size=16 callers=0 calls=0
*/
void sub_967920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967920ULL || rel >= 0x967930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967930 size=16 callers=0 calls=0
*/
void sub_967930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967930ULL || rel >= 0x967940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967940 size=16 callers=0 calls=0
*/
void sub_967940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967940ULL || rel >= 0x967950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967950 size=32 callers=0 calls=0
*/
void sub_967950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967950ULL || rel >= 0x967970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967970 size=320 callers=4 calls=0
*/
void sub_967970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967970ULL || rel >= 0x967ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967ab0 size=48 callers=0 calls=1
   calls: sub_967970
*/
void sub_967ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967ab0ULL || rel >= 0x967ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967ae0 size=80 callers=0 calls=0
*/
void sub_967ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967ae0ULL || rel >= 0x967b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967b30 size=80 callers=0 calls=0
*/
void sub_967b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967b30ULL || rel >= 0x967b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967b80 size=16 callers=0 calls=0
*/
void sub_967b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967b80ULL || rel >= 0x967b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967b90 size=16 callers=0 calls=0
*/
void sub_967b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967b90ULL || rel >= 0x967ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967ba0 size=16 callers=0 calls=0
*/
void sub_967ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967ba0ULL || rel >= 0x967bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967bb0 size=16 callers=0 calls=0
*/
void sub_967bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967bb0ULL || rel >= 0x967bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967bc0 size=16 callers=0 calls=0
*/
void sub_967bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967bc0ULL || rel >= 0x967bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967bd0 size=784 callers=3 calls=1
   calls: sub_967ee0
*/
void sub_967bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967bd0ULL || rel >= 0x967ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967ee0 size=272 callers=3 calls=0
*/
void sub_967ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967ee0ULL || rel >= 0x967ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00967ff0 size=704 callers=1 calls=0
*/
void sub_967ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x967ff0ULL || rel >= 0x9682b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009682b0 size=272 callers=4 calls=1
   calls: sub_c1f910
*/
void sub_9682b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9682b0ULL || rel >= 0x9683c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009683c0 size=240 callers=3 calls=0
*/
void sub_9683c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9683c0ULL || rel >= 0x9684b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009684b0 size=224 callers=0 calls=0
*/
void sub_9684b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9684b0ULL || rel >= 0x968590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00968590 size=208 callers=0 calls=0
*/
void sub_968590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x968590ULL || rel >= 0x968660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00968660 size=240 callers=3 calls=0
*/
void sub_968660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x968660ULL || rel >= 0x968750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00968750 size=224 callers=0 calls=0
*/
void sub_968750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x968750ULL || rel >= 0x968830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00968830 size=208 callers=0 calls=0
*/
void sub_968830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x968830ULL || rel >= 0x968900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00968900 size=240 callers=3 calls=0
*/
void sub_968900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x968900ULL || rel >= 0x9689f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009689f0 size=224 callers=0 calls=0
*/
void sub_9689f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9689f0ULL || rel >= 0x968ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00968ad0 size=208 callers=0 calls=0
*/
void sub_968ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x968ad0ULL || rel >= 0x968ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00968ba0 size=240 callers=3 calls=0
*/
void sub_968ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x968ba0ULL || rel >= 0x968c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00968c90 size=224 callers=0 calls=0
*/
void sub_968c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x968c90ULL || rel >= 0x968d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00968d70 size=208 callers=0 calls=0
*/
void sub_968d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x968d70ULL || rel >= 0x968e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00968e40 size=704 callers=1 calls=0
*/
void sub_968e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x968e40ULL || rel >= 0x969100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00969100 size=704 callers=1 calls=0
*/
void sub_969100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x969100ULL || rel >= 0x9693c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009693c0 size=272 callers=4 calls=0
*/
void sub_9693c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9693c0ULL || rel >= 0x9694d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009694d0 size=704 callers=0 calls=0
*/
void sub_9694d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9694d0ULL || rel >= 0x969790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00969790 size=272 callers=3 calls=0
*/
void sub_969790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x969790ULL || rel >= 0x9698a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009698a0 size=704 callers=1 calls=0
*/
void sub_9698a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9698a0ULL || rel >= 0x969b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00969b60 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_969b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x969b60ULL || rel >= 0x969be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00969be0 size=352 callers=28 calls=1
   calls: sub_967240
*/
void sub_969be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x969be0ULL || rel >= 0x969d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00969d40 size=240 callers=42 calls=1
   calls: sub_967240
*/
void sub_969d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x969d40ULL || rel >= 0x969e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00969e30 size=224 callers=16 calls=1
   calls: sub_68edd0
*/
void sub_969e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x969e30ULL || rel >= 0x969f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00969f10 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_969f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x969f10ULL || rel >= 0x969f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00969f90 size=1024 callers=0 calls=7
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_956000, sub_96a3a0, sub_96a5a0
   ref: bin/battle/waza/model/digda_rock/digda_rock.gfbmdl
   ref: bin/battle/waza/model/PG_BgFadeMask/PG_BgFadeMask.gfbmdl
*/
void digda_rock_gfbmdl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x969f90ULL || rel >= 0x96a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096a390 size=16 callers=0 calls=0
*/
void sub_96a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96a390ULL || rel >= 0x96a3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096a3a0 size=304 callers=9 calls=3
   calls: sub_5e6180, sub_96aea0, sub_d0c0
*/
void sub_96a3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96a3a0ULL || rel >= 0x96a4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096a4d0 size=160 callers=0 calls=1
   calls: sub_987fa0
*/
void sub_96a4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96a4d0ULL || rel >= 0x96a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096a570 size=16 callers=0 calls=0
*/
void sub_96a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96a570ULL || rel >= 0x96a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096a580 size=16 callers=0 calls=0
*/
void sub_96a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96a580ULL || rel >= 0x96a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096a590 size=16 callers=0 calls=0
*/
void sub_96a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96a590ULL || rel >= 0x96a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096a5a0 size=2304 callers=29 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5de540, sub_5e2500, sub_5e6970, sub_624e60, sub_df90
*/
void sub_96a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96a5a0ULL || rel >= 0x96aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096aea0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96aea0ULL || rel >= 0x96af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096af20 size=16 callers=0 calls=0
*/
void sub_96af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96af20ULL || rel >= 0x96af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096af30 size=16 callers=0 calls=0
*/
void sub_96af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96af30ULL || rel >= 0x96af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096af40 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96af40ULL || rel >= 0x96afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096afc0 size=64 callers=0 calls=1
   calls: sub_9a59e0
*/
void sub_96afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96afc0ULL || rel >= 0x96b000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b000 size=16 callers=0 calls=0
*/
void sub_96b000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b000ULL || rel >= 0x96b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b010 size=16 callers=0 calls=0
*/
void sub_96b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b010ULL || rel >= 0x96b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b020 size=16 callers=0 calls=0
*/
void sub_96b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b020ULL || rel >= 0x96b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b030 size=80 callers=0 calls=2
   calls: sub_1106200, sub_1106f30
*/
void sub_96b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b030ULL || rel >= 0x96b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b080 size=16 callers=0 calls=0
*/
void sub_96b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b080ULL || rel >= 0x96b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b090 size=16 callers=0 calls=0
*/
void sub_96b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b090ULL || rel >= 0x96b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b0a0 size=16 callers=0 calls=0
*/
void sub_96b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b0a0ULL || rel >= 0x96b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b0b0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b0b0ULL || rel >= 0x96b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b130 size=400 callers=0 calls=8
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_1106cd0, sub_1106f30, sub_96b2d0, sub_96b570
   ref: g_table
   ref: fileName
*/
void fileName_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b130ULL || rel >= 0x96b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b2c0 size=16 callers=0 calls=0
*/
void sub_96b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b2c0ULL || rel >= 0x96b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b2d0 size=672 callers=1 calls=1
   calls: sub_96b570
*/
void sub_96b2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b2d0ULL || rel >= 0x96b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b570 size=272 callers=2 calls=0
*/
void sub_96b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b570ULL || rel >= 0x96b680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b680 size=704 callers=0 calls=0
*/
void sub_96b680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b680ULL || rel >= 0x96b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b940 size=16 callers=0 calls=0
*/
void sub_96b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b940ULL || rel >= 0x96b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b950 size=16 callers=0 calls=0
*/
void sub_96b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b950ULL || rel >= 0x96b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b960 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b960ULL || rel >= 0x96b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096b9e0 size=400 callers=0 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_9569e0, sub_96bb80
   ref: bin/battle/waza/particle/ee090/ee090_finder00_cam.ptcl
*/
void ee090_finder00_cam_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96b9e0ULL || rel >= 0x96bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096bb70 size=16 callers=0 calls=0
*/
void sub_96bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96bb70ULL || rel >= 0x96bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096bb80 size=2304 callers=36 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5de540, sub_5e2500, sub_5e6970, sub_692840, sub_df90
*/
void sub_96bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96bb80ULL || rel >= 0x96c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096c480 size=16 callers=0 calls=0
*/
void sub_96c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c480ULL || rel >= 0x96c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096c490 size=16 callers=0 calls=0
*/
void sub_96c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c490ULL || rel >= 0x96c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096c4a0 size=240 callers=71 calls=1
   calls: sub_967240
*/
void sub_96c4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c4a0ULL || rel >= 0x96c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096c590 size=304 callers=36 calls=1
   calls: sub_967240
*/
void sub_96c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c590ULL || rel >= 0x96c6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096c6c0 size=240 callers=14 calls=1
   calls: sub_607750
*/
void sub_96c6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c6c0ULL || rel >= 0x96c7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096c7b0 size=80 callers=0 calls=0
*/
void sub_96c7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c7b0ULL || rel >= 0x96c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096c800 size=48 callers=0 calls=0
*/
void sub_96c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c800ULL || rel >= 0x96c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096c830 size=112 callers=0 calls=0
*/
void sub_96c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c830ULL || rel >= 0x96c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096c8a0 size=64 callers=0 calls=0
*/
void sub_96c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c8a0ULL || rel >= 0x96c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096c8e0 size=32 callers=0 calls=0
*/
void sub_96c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c8e0ULL || rel >= 0x96c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096c900 size=16 callers=0 calls=0
*/
void sub_96c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c900ULL || rel >= 0x96c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096c910 size=16 callers=0 calls=0
*/
void sub_96c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c910ULL || rel >= 0x96c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096c920 size=16 callers=0 calls=0
*/
void sub_96c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c920ULL || rel >= 0x96c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096c930 size=320 callers=3 calls=1
   calls: sub_98f600
*/
void sub_96c930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c930ULL || rel >= 0x96ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ca70 size=32 callers=0 calls=0
*/
void sub_96ca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ca70ULL || rel >= 0x96ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ca90 size=16 callers=0 calls=0
*/
void sub_96ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ca90ULL || rel >= 0x96caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096caa0 size=16 callers=0 calls=0
*/
void sub_96caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96caa0ULL || rel >= 0x96cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cab0 size=16 callers=0 calls=0
*/
void sub_96cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cab0ULL || rel >= 0x96cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cac0 size=32 callers=0 calls=0
*/
void sub_96cac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cac0ULL || rel >= 0x96cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cae0 size=16 callers=0 calls=0
*/
void sub_96cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cae0ULL || rel >= 0x96caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096caf0 size=16 callers=0 calls=0
*/
void sub_96caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96caf0ULL || rel >= 0x96cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cb00 size=16 callers=0 calls=0
*/
void sub_96cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cb00ULL || rel >= 0x96cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cb10 size=32 callers=0 calls=0
*/
void sub_96cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cb10ULL || rel >= 0x96cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cb30 size=16 callers=0 calls=0
*/
void sub_96cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cb30ULL || rel >= 0x96cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cb40 size=16 callers=0 calls=0
*/
void sub_96cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cb40ULL || rel >= 0x96cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cb50 size=16 callers=0 calls=0
*/
void sub_96cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cb50ULL || rel >= 0x96cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cb60 size=320 callers=2 calls=1
   calls: sub_98f600
*/
void sub_96cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cb60ULL || rel >= 0x96cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cca0 size=32 callers=0 calls=0
*/
void sub_96cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cca0ULL || rel >= 0x96ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ccc0 size=16 callers=0 calls=0
*/
void sub_96ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ccc0ULL || rel >= 0x96ccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ccd0 size=16 callers=0 calls=0
*/
void sub_96ccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ccd0ULL || rel >= 0x96cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cce0 size=16 callers=0 calls=0
*/
void sub_96cce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cce0ULL || rel >= 0x96ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ccf0 size=240 callers=111 calls=1
   calls: sub_607750
*/
void sub_96ccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ccf0ULL || rel >= 0x96cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cde0 size=128 callers=2 calls=1
   calls: sub_d0c0
*/
void sub_96cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cde0ULL || rel >= 0x96ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ce60 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ce60ULL || rel >= 0x96cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cee0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cee0ULL || rel >= 0x96cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cf60 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cf60ULL || rel >= 0x96cfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096cfe0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96cfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96cfe0ULL || rel >= 0x96d060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d060 size=128 callers=2 calls=1
   calls: sub_d0c0
*/
void sub_96d060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d060ULL || rel >= 0x96d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d0e0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96d0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d0e0ULL || rel >= 0x96d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d160 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d160ULL || rel >= 0x96d1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d1e0 size=208 callers=0 calls=0
*/
void sub_96d1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d1e0ULL || rel >= 0x96d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d2b0 size=16 callers=0 calls=0
*/
void sub_96d2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d2b0ULL || rel >= 0x96d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d2c0 size=32 callers=0 calls=0
*/
void sub_96d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d2c0ULL || rel >= 0x96d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d2e0 size=32 callers=0 calls=0
*/
void sub_96d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d2e0ULL || rel >= 0x96d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d300 size=160 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d300ULL || rel >= 0x96d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d3a0 size=672 callers=5 calls=4
   calls: sub_5e6180, sub_d510, sub_d5c0, sub_d670
*/
void sub_96d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d3a0ULL || rel >= 0x96d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d640 size=784 callers=1 calls=1
   calls: sub_969790
*/
void sub_96d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d640ULL || rel >= 0x96d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d950 size=32 callers=0 calls=0
*/
void sub_96d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d950ULL || rel >= 0x96d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d970 size=16 callers=0 calls=0
*/
void sub_96d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d970ULL || rel >= 0x96d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d980 size=16 callers=0 calls=0
*/
void sub_96d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d980ULL || rel >= 0x96d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d990 size=16 callers=0 calls=0
*/
void sub_96d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d990ULL || rel >= 0x96d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096d9a0 size=320 callers=4 calls=1
   calls: sub_98f600
*/
void sub_96d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d9a0ULL || rel >= 0x96dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096dae0 size=32 callers=0 calls=0
*/
void sub_96dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96dae0ULL || rel >= 0x96db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096db00 size=16 callers=0 calls=0
*/
void sub_96db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96db00ULL || rel >= 0x96db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096db10 size=16 callers=0 calls=0
*/
void sub_96db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96db10ULL || rel >= 0x96db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096db20 size=16 callers=0 calls=0
*/
void sub_96db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96db20ULL || rel >= 0x96db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096db30 size=32 callers=0 calls=0
*/
void sub_96db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96db30ULL || rel >= 0x96db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096db50 size=16 callers=0 calls=0
*/
void sub_96db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96db50ULL || rel >= 0x96db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096db60 size=16 callers=0 calls=0
*/
void sub_96db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96db60ULL || rel >= 0x96db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096db70 size=16 callers=0 calls=0
*/
void sub_96db70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96db70ULL || rel >= 0x96db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096db80 size=496 callers=0 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_96bb80, sub_96dd80
   ref: bin/battle/waza/particle/ee050/ee050_grs01.ptcl
*/
void ee050_grs01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96db80ULL || rel >= 0x96dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096dd70 size=16 callers=0 calls=0
*/
void sub_96dd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96dd70ULL || rel >= 0x96dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096dd80 size=304 callers=7 calls=3
   calls: sub_5e6180, sub_c4aba0, sub_d0c0
*/
void sub_96dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96dd80ULL || rel >= 0x96deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096deb0 size=16 callers=0 calls=0
*/
void sub_96deb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96deb0ULL || rel >= 0x96dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096dec0 size=16 callers=0 calls=0
*/
void sub_96dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96dec0ULL || rel >= 0x96ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ded0 size=496 callers=0 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_96bb80, sub_96e0d0
   ref: bin/battle/waza/particle/ee050/ee050_grs01_cam.ptcl
*/
void ee050_grs01_cam(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ded0ULL || rel >= 0x96e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e0c0 size=16 callers=0 calls=0
*/
void sub_96e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e0c0ULL || rel >= 0x96e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e0d0 size=304 callers=10 calls=3
   calls: sub_5e6180, sub_96e200, sub_d0c0
*/
void sub_96e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e0d0ULL || rel >= 0x96e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

