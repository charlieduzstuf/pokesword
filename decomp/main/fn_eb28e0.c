/* main functions 00eb28e0..00ed3140 (116 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00eb28e0 size=464 callers=110 calls=0
*/
void sub_eb28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb28e0ULL || rel >= 0xeb2ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb2ab0 size=464 callers=2 calls=0
*/
void sub_eb2ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb2ab0ULL || rel >= 0xeb2c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb2c80 size=80 callers=8 calls=1
   calls: sub_5e2350
*/
void sub_eb2c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb2c80ULL || rel >= 0xeb2cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb2cd0 size=160 callers=0 calls=1
   calls: sub_eb58b0
*/
void sub_eb2cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb2cd0ULL || rel >= 0xeb2d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb2d70 size=160 callers=0 calls=1
   calls: sub_eb58b0
*/
void sub_eb2d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb2d70ULL || rel >= 0xeb2e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb2e10 size=160 callers=0 calls=1
   calls: sub_eb58b0
*/
void sub_eb2e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb2e10ULL || rel >= 0xeb2eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb2eb0 size=16 callers=0 calls=0
*/
void sub_eb2eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb2eb0ULL || rel >= 0xeb2ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb2ec0 size=16 callers=0 calls=0
*/
void sub_eb2ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb2ec0ULL || rel >= 0xeb2ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb2ed0 size=16 callers=0 calls=0
*/
void sub_eb2ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb2ed0ULL || rel >= 0xeb2ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb2ee0 size=400 callers=6 calls=2
   calls: sub_eb58b0, sub_eb5c10
*/
void sub_eb2ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb2ee0ULL || rel >= 0xeb3070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb3070 size=736 callers=4 calls=2
   calls: sub_eb3070, sub_eb57c0
*/
void sub_eb3070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb3070ULL || rel >= 0xeb3350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb3350 size=6000 callers=1 calls=4
   calls: sub_eb1100, sub_eb1b90, sub_eb57c0, sub_eb5a40
*/
void sub_eb3350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb3350ULL || rel >= 0xeb4ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb4ac0 size=1584 callers=1 calls=4
   calls: sub_eb08a0, sub_eb1e50, sub_eb57c0, sub_eb5a40
*/
void sub_eb4ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb4ac0ULL || rel >= 0xeb50f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb50f0 size=16 callers=1 calls=0
*/
void sub_eb50f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb50f0ULL || rel >= 0xeb5100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5100 size=16 callers=1 calls=0
*/
void sub_eb5100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5100ULL || rel >= 0xeb5110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5110 size=480 callers=1 calls=3
   calls: sub_eb2120, sub_eb5a40, sub_eb5c90
*/
void sub_eb5110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5110ULL || rel >= 0xeb52f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb52f0 size=48 callers=4 calls=1
   calls: sub_eb5110
*/
void sub_eb52f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb52f0ULL || rel >= 0xeb5320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5320 size=16 callers=0 calls=0
*/
void sub_eb5320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5320ULL || rel >= 0xeb5330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5330 size=544 callers=3 calls=3
   calls: sub_eb5330, sub_eb5550, sub_eb57c0
*/
void sub_eb5330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5330ULL || rel >= 0xeb5550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5550 size=512 callers=1 calls=4
   calls: sub_eb0e30, sub_eb2390, sub_eb2ab0, sub_eb5a40
*/
void sub_eb5550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5550ULL || rel >= 0xeb5750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5750 size=64 callers=3 calls=2
   calls: sub_eb5330, sub_eb5cd0
*/
void sub_eb5750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5750ULL || rel >= 0xeb5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5790 size=16 callers=0 calls=0
*/
void sub_eb5790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5790ULL || rel >= 0xeb57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb57a0 size=16 callers=0 calls=0
*/
void sub_eb57a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb57a0ULL || rel >= 0xeb57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb57b0 size=16 callers=0 calls=0
*/
void sub_eb57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb57b0ULL || rel >= 0xeb57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb57c0 size=240 callers=43 calls=0
*/
void sub_eb57c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb57c0ULL || rel >= 0xeb58b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb58b0 size=400 callers=4 calls=0
*/
void sub_eb58b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb58b0ULL || rel >= 0xeb5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5a40 size=464 callers=8 calls=0
*/
void sub_eb5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5a40ULL || rel >= 0xeb5c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5c10 size=80 callers=1 calls=0
*/
void sub_eb5c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5c10ULL || rel >= 0xeb5c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5c60 size=16 callers=0 calls=0
*/
void sub_eb5c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5c60ULL || rel >= 0xeb5c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5c70 size=32 callers=2 calls=0
*/
void sub_eb5c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5c70ULL || rel >= 0xeb5c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5c90 size=64 callers=1 calls=0
*/
void sub_eb5c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5c90ULL || rel >= 0xeb5cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5cd0 size=48 callers=1 calls=0
*/
void sub_eb5cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5cd0ULL || rel >= 0xeb5d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5d00 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/error/bin/error_00_lyt.bin
   ref: bin/appli/error/bin/uikit_error.bin
*/
void uikit_error(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5d00ULL || rel >= 0xeb5ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5ee0 size=128 callers=2 calls=1
   calls: sub_e83fe0
*/
void sub_eb5ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5ee0ULL || rel >= 0xeb5f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5f60 size=16 callers=1 calls=0
*/
void sub_eb5f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5f60ULL || rel >= 0xeb5f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5f70 size=32 callers=1 calls=0
*/
void sub_eb5f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5f70ULL || rel >= 0xeb5f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5f90 size=32 callers=1 calls=0
*/
void sub_eb5f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5f90ULL || rel >= 0xeb5fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb5fb0 size=192 callers=6 calls=3
   calls: sub_67bdb0, sub_e83930, sub_e83b20
*/
void sub_eb5fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5fb0ULL || rel >= 0xeb6070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6070 size=16 callers=16 calls=0
*/
void sub_eb6070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6070ULL || rel >= 0xeb6080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6080 size=16 callers=0 calls=0
*/
void sub_eb6080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6080ULL || rel >= 0xeb6090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6090 size=16 callers=0 calls=0
*/
void sub_eb6090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6090ULL || rel >= 0xeb60a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb60a0 size=16 callers=0 calls=0
*/
void sub_eb60a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb60a0ULL || rel >= 0xeb60b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb60b0 size=16 callers=0 calls=0
*/
void sub_eb60b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb60b0ULL || rel >= 0xeb60c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb60c0 size=16 callers=0 calls=0
*/
void sub_eb60c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb60c0ULL || rel >= 0xeb60d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb60d0 size=16 callers=0 calls=0
*/
void sub_eb60d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb60d0ULL || rel >= 0xeb60e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb60e0 size=16 callers=0 calls=0
*/
void sub_eb60e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb60e0ULL || rel >= 0xeb60f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb60f0 size=16 callers=0 calls=0
*/
void sub_eb60f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb60f0ULL || rel >= 0xeb6100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6100 size=304 callers=4 calls=0
*/
void sub_eb6100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6100ULL || rel >= 0xeb6230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6230 size=768 callers=441 calls=4
   calls: sub_1502120, sub_5cfad0, sub_e83430, sub_e83540
*/
void sub_eb6230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6230ULL || rel >= 0xeb6530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6530 size=256 callers=309 calls=1
   calls: sub_14ab2b0
*/
void sub_eb6530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6530ULL || rel >= 0xeb6630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6630 size=128 callers=10 calls=1
   calls: sub_14ab2b0
*/
void sub_eb6630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6630ULL || rel >= 0xeb66b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb66b0 size=48 callers=0 calls=0
*/
void sub_eb66b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb66b0ULL || rel >= 0xeb66e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb66e0 size=16 callers=0 calls=0
*/
void sub_eb66e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb66e0ULL || rel >= 0xeb66f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb66f0 size=16 callers=0 calls=0
*/
void sub_eb66f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb66f0ULL || rel >= 0xeb6700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6700 size=16 callers=0 calls=0
*/
void sub_eb6700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6700ULL || rel >= 0xeb6710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6710 size=48 callers=0 calls=0
*/
void sub_eb6710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6710ULL || rel >= 0xeb6740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6740 size=16 callers=0 calls=0
*/
void sub_eb6740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6740ULL || rel >= 0xeb6750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6750 size=16 callers=0 calls=0
*/
void sub_eb6750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6750ULL || rel >= 0xeb6760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6760 size=16 callers=0 calls=0
*/
void sub_eb6760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6760ULL || rel >= 0xeb6770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6770 size=48 callers=0 calls=0
*/
void sub_eb6770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6770ULL || rel >= 0xeb67a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb67a0 size=16 callers=0 calls=0
*/
void sub_eb67a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb67a0ULL || rel >= 0xeb67b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb67b0 size=16 callers=0 calls=0
*/
void sub_eb67b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb67b0ULL || rel >= 0xeb67c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb67c0 size=16 callers=0 calls=0
*/
void sub_eb67c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb67c0ULL || rel >= 0xeb67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb67d0 size=48 callers=0 calls=0
*/
void sub_eb67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb67d0ULL || rel >= 0xeb6800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6800 size=16 callers=0 calls=0
*/
void sub_eb6800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6800ULL || rel >= 0xeb6810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6810 size=16 callers=0 calls=0
*/
void sub_eb6810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6810ULL || rel >= 0xeb6820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6820 size=16 callers=0 calls=0
*/
void sub_eb6820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6820ULL || rel >= 0xeb6830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6830 size=464 callers=0 calls=3
   calls: sub_67b990, sub_93c570, sub_e7f7f0
*/
void sub_eb6830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6830ULL || rel >= 0xeb6a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6a00 size=368 callers=3 calls=2
   calls: sub_67be10, sub_67bfa0
*/
void sub_eb6a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6a00ULL || rel >= 0xeb6b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6b70 size=48 callers=1 calls=1
   calls: sub_eb6a00
*/
void sub_eb6b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6b70ULL || rel >= 0xeb6ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb6ba0 size=1232 callers=2 calls=8
   calls: Play_UI_common_decide_4, sub_14e3670, sub_14e3680, sub_14e39e0, sub_14e3fb0, sub_14e4040, sub_14e4920, sub_67bdc0
*/
void sub_eb6ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb6ba0ULL || rel >= 0xeb7070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7070 size=16 callers=2 calls=0
*/
void sub_eb7070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7070ULL || rel >= 0xeb7080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7080 size=112 callers=2 calls=0
*/
void sub_eb7080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7080ULL || rel >= 0xeb70f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb70f0 size=240 callers=1 calls=0
*/
void sub_eb70f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb70f0ULL || rel >= 0xeb71e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb71e0 size=48 callers=0 calls=1
   calls: sub_eb70f0
*/
void sub_eb71e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb71e0ULL || rel >= 0xeb7210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7210 size=64 callers=0 calls=0
*/
void sub_eb7210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7210ULL || rel >= 0xeb7250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7250 size=16 callers=0 calls=0
*/
void sub_eb7250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7250ULL || rel >= 0xeb7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7260 size=16 callers=0 calls=0
*/
void sub_eb7260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7260ULL || rel >= 0xeb7270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7270 size=16 callers=0 calls=0
*/
void sub_eb7270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7270ULL || rel >= 0xeb7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7280 size=272 callers=0 calls=1
   calls: sub_eb7b00
*/
void sub_eb7280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7280ULL || rel >= 0xeb7390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7390 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/optionbar/bin/uikit_data_optionbar_00.bin
   ref: bin/appli/optionbar/bin/data_optionbar_00_lyt.bin
*/
void uikit_data_optionbar_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7390ULL || rel >= 0xeb7570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7570 size=112 callers=173 calls=1
   calls: sub_14ea4f0
*/
void sub_eb7570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7570ULL || rel >= 0xeb75e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb75e0 size=96 callers=82 calls=1
   calls: sub_14ea9a0
*/
void sub_eb75e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb75e0ULL || rel >= 0xeb7640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7640 size=96 callers=3 calls=1
   calls: sub_14ea9e0
*/
void sub_eb7640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7640ULL || rel >= 0xeb76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb76a0 size=16 callers=1 calls=0
*/
void sub_eb76a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb76a0ULL || rel >= 0xeb76b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb76b0 size=112 callers=12 calls=0
*/
void sub_eb76b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb76b0ULL || rel >= 0xeb7720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7720 size=16 callers=2 calls=0
*/
void sub_eb7720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7720ULL || rel >= 0xeb7730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7730 size=96 callers=60 calls=3
   calls: sub_e82f10, sub_e83390, sub_e83430
*/
void sub_eb7730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7730ULL || rel >= 0xeb7790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7790 size=96 callers=53 calls=1
   calls: sub_14ab2b0
*/
void sub_eb7790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7790ULL || rel >= 0xeb77f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb77f0 size=64 callers=74 calls=1
   calls: sub_e83430
*/
void sub_eb77f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb77f0ULL || rel >= 0xeb7830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7830 size=96 callers=51 calls=1
   calls: sub_14ab2b0
*/
void sub_eb7830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7830ULL || rel >= 0xeb7890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7890 size=96 callers=0 calls=0
*/
void sub_eb7890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7890ULL || rel >= 0xeb78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb78f0 size=96 callers=0 calls=0
*/
void sub_eb78f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb78f0ULL || rel >= 0xeb7950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7950 size=16 callers=0 calls=0
*/
void sub_eb7950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7950ULL || rel >= 0xeb7960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7960 size=96 callers=0 calls=0
*/
void sub_eb7960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7960ULL || rel >= 0xeb79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb79c0 size=96 callers=0 calls=0
*/
void sub_eb79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb79c0ULL || rel >= 0xeb7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7a20 size=16 callers=0 calls=0
*/
void sub_eb7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7a20ULL || rel >= 0xeb7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7a30 size=16 callers=0 calls=0
*/
void sub_eb7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7a30ULL || rel >= 0xeb7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7a40 size=96 callers=0 calls=0
*/
void sub_eb7a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7a40ULL || rel >= 0xeb7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7aa0 size=96 callers=0 calls=0
*/
void sub_eb7aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7aa0ULL || rel >= 0xeb7b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7b00 size=480 callers=36 calls=2
   calls: sub_93c750, sub_eb7b00
*/
void sub_eb7b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7b00ULL || rel >= 0xeb7ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7ce0 size=304 callers=7 calls=0
*/
void sub_eb7ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7ce0ULL || rel >= 0xeb7e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7e10 size=48 callers=3 calls=1
   calls: sub_eb86c0
*/
void sub_eb7e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7e10ULL || rel >= 0xeb7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7e40 size=176 callers=23 calls=1
   calls: sub_eb85d0
*/
void sub_eb7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7e40ULL || rel >= 0xeb7ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7ef0 size=192 callers=3 calls=1
   calls: sub_eb8990
*/
void sub_eb7ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7ef0ULL || rel >= 0xeb7fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb7fb0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/msg_sys/bin/uikit_msg_sys_00.bin
   ref: bin/appli/msg_sys/bin/msg_sys_00_lyt.bin
*/
void uikit_msg_sys_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7fb0ULL || rel >= 0xeb8190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8190 size=16 callers=0 calls=0
*/
void sub_eb8190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8190ULL || rel >= 0xeb81a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb81a0 size=352 callers=0 calls=0
*/
void sub_eb81a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb81a0ULL || rel >= 0xeb8300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8300 size=16 callers=0 calls=0
*/
void sub_eb8300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8300ULL || rel >= 0xeb8310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8310 size=112 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_eb8310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8310ULL || rel >= 0xeb8380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8380 size=16 callers=0 calls=0
*/
void sub_eb8380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8380ULL || rel >= 0xeb8390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8390 size=16 callers=0 calls=0
*/
void sub_eb8390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8390ULL || rel >= 0xeb83a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb83a0 size=112 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_eb83a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb83a0ULL || rel >= 0xeb8410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8410 size=112 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_eb8410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8410ULL || rel >= 0xeb8480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8480 size=16 callers=0 calls=0
*/
void sub_eb8480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8480ULL || rel >= 0xeb8490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8490 size=16 callers=0 calls=0
*/
void sub_eb8490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8490ULL || rel >= 0xeb84a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb84a0 size=304 callers=17 calls=0
*/
void sub_eb84a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb84a0ULL || rel >= 0xeb85d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb85d0 size=240 callers=1 calls=1
   calls: sub_13fb3f0
*/
void sub_eb85d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb85d0ULL || rel >= 0xeb86c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb86c0 size=480 callers=3 calls=3
   calls: sub_1310f00, sub_14aad40, sub_14b3270
*/
void sub_eb86c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb86c0ULL || rel >= 0xeb88a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb88a0 size=144 callers=0 calls=2
   calls: sub_14a8a10, sub_14a8b70
*/
void sub_eb88a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb88a0ULL || rel >= 0xeb8930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8930 size=96 callers=104 calls=1
   calls: sub_eb8990
*/
void sub_eb8930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8930ULL || rel >= 0xeb8990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8990 size=160 callers=12 calls=4
   calls: sub_14a91a0, sub_14a9460, sub_14a9580, sub_eb6a00
*/
void sub_eb8990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8990ULL || rel >= 0xeb8a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8a30 size=80 callers=113 calls=1
   calls: sub_14a91c0
*/
void sub_eb8a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8a30ULL || rel >= 0xeb8a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8a80 size=96 callers=4 calls=2
   calls: sub_14a91c0, sub_e82ef0
*/
void sub_eb8a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8a80ULL || rel >= 0xeb8ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8ae0 size=176 callers=0 calls=2
   calls: sub_14a8240, sub_5f19d0
*/
void sub_eb8ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8ae0ULL || rel >= 0xeb8b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8b90 size=208 callers=2 calls=7
   calls: sub_14a8fd0, sub_14a91c0, sub_14a92b0, sub_14a92c0, sub_14a9630, sub_e82ef0, sub_eb6ba0
*/
void sub_eb8b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8b90ULL || rel >= 0xeb8c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8c60 size=80 callers=96 calls=1
   calls: sub_14a92b0
*/
void sub_eb8c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8c60ULL || rel >= 0xeb8cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8cb0 size=464 callers=0 calls=1
   calls: sub_eb7080
*/
void sub_eb8cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8cb0ULL || rel >= 0xeb8e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8e80 size=32 callers=159 calls=1
   calls: sub_14a92b0
*/
void sub_eb8e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8e80ULL || rel >= 0xeb8ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8ea0 size=32 callers=93 calls=0
*/
void sub_eb8ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8ea0ULL || rel >= 0xeb8ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8ec0 size=128 callers=0 calls=1
   calls: sub_eb8990
*/
void sub_eb8ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8ec0ULL || rel >= 0xeb8f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8f40 size=16 callers=0 calls=0
*/
void sub_eb8f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8f40ULL || rel >= 0xeb8f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8f50 size=16 callers=0 calls=0
*/
void sub_eb8f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8f50ULL || rel >= 0xeb8f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8f60 size=16 callers=0 calls=0
*/
void sub_eb8f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8f60ULL || rel >= 0xeb8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8f70 size=16 callers=0 calls=0
*/
void sub_eb8f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8f70ULL || rel >= 0xeb8f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8f80 size=16 callers=0 calls=0
*/
void sub_eb8f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8f80ULL || rel >= 0xeb8f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8f90 size=16 callers=0 calls=0
*/
void sub_eb8f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8f90ULL || rel >= 0xeb8fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8fa0 size=16 callers=0 calls=0
*/
void sub_eb8fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8fa0ULL || rel >= 0xeb8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8fb0 size=16 callers=0 calls=0
*/
void sub_eb8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8fb0ULL || rel >= 0xeb8fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8fc0 size=16 callers=0 calls=0
*/
void sub_eb8fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8fc0ULL || rel >= 0xeb8fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8fd0 size=16 callers=0 calls=0
*/
void sub_eb8fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8fd0ULL || rel >= 0xeb8fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8fe0 size=16 callers=0 calls=0
*/
void sub_eb8fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8fe0ULL || rel >= 0xeb8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb8ff0 size=16 callers=0 calls=0
*/
void sub_eb8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8ff0ULL || rel >= 0xeb9000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb9000 size=304 callers=2 calls=3
   calls: sub_5dd790, sub_5e2930, sub_c46830
*/
void sub_eb9000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9000ULL || rel >= 0xeb9130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb9130 size=208 callers=1 calls=4
   calls: sub_1106200, sub_1106220, sub_11063e0, sub_1106f30
   ref: tipsdata
*/
void tipsdata(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9130ULL || rel >= 0xeb9200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb9200 size=64 callers=3 calls=2
   calls: sub_1106220, sub_1106280
*/
void sub_eb9200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9200ULL || rel >= 0xeb9240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb9240 size=160 callers=1 calls=4
   calls: sub_1106220, sub_1106320, sub_11063e0, sub_1106cd0
*/
void sub_eb9240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9240ULL || rel >= 0xeb92e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb92e0 size=256 callers=7 calls=5
   calls: sub_1106220, sub_1106280, sub_1106320, sub_11063e0, sub_1106cd0
*/
void sub_eb92e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb92e0ULL || rel >= 0xeb93e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb93e0 size=176 callers=1 calls=2
   calls: sub_137bcc0, sub_eb92e0
*/
void sub_eb93e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb93e0ULL || rel >= 0xeb9490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb9490 size=224 callers=1 calls=6
   calls: sub_11061d0, sub_1106220, sub_1106320, sub_11063e0, sub_11065b0, sub_eb92e0
   ref: appvisible
*/
void appvisible(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9490ULL || rel >= 0xeb9570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb9570 size=304 callers=1 calls=2
   calls: sub_11061d0, sub_1106200
*/
void sub_eb9570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9570ULL || rel >= 0xeb96a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb96a0 size=176 callers=7 calls=4
   calls: sub_11061d0, sub_1106200, sub_eb9000, sub_eba3b0
*/
void sub_eb96a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb96a0ULL || rel >= 0xeb9750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb9750 size=336 callers=7 calls=9
   calls: picfilename, sub_1106200, sub_1106220, sub_11063e0, sub_1106f30, sub_687680, sub_687770, sub_c47a90, sub_eb98a0
   ref: tipsdata
*/
void tipsdata_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9750ULL || rel >= 0xeb98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb98a0 size=144 callers=1 calls=5
   calls: sub_11061d0, sub_1106200, sub_1106220, sub_1106320, sub_eb92e0
*/
void sub_eb98a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb98a0ULL || rel >= 0xeb9930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb9930 size=608 callers=1 calls=6
   calls: sub_1106220, sub_11063e0, sub_11069b0, sub_5e2930, sub_c47200, sub_eb9fd0
   ref: picfilename
*/
void picfilename(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9930ULL || rel >= 0xeb9b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb9b90 size=144 callers=1 calls=3
   calls: sub_1106220, sub_1106280, sub_11063e0
*/
void sub_eb9b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9b90ULL || rel >= 0xeb9c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb9c20 size=160 callers=3 calls=3
   calls: sub_1106220, sub_11063e0, sub_1106cd0
*/
void sub_eb9c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9c20ULL || rel >= 0xeb9cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb9cc0 size=224 callers=2 calls=4
   calls: sub_1106220, sub_1106280, sub_1106320, sub_11063e0
*/
void sub_eb9cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9cc0ULL || rel >= 0xeb9da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb9da0 size=192 callers=1 calls=4
   calls: sub_1106220, sub_11063e0, sub_1106cd0, sub_eb9cc0
   ref: message
*/
void message(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9da0ULL || rel >= 0xeb9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb9e60 size=368 callers=1 calls=6
   calls: sub_1106220, sub_11063e0, sub_11069b0, sub_687770, sub_687a20, sub_eb9cc0
   ref: picturename
*/
void picturename(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9e60ULL || rel >= 0xeb9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb9fd0 size=304 callers=1 calls=3
   calls: sub_5e6180, sub_d0c0, sub_eba830
*/
void sub_eb9fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9fd0ULL || rel >= 0xeba100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eba100 size=176 callers=23 calls=2
   calls: sub_137bcc0, sub_eb92e0
*/
void sub_eba100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeba100ULL || rel >= 0xeba1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eba1b0 size=176 callers=0 calls=2
   calls: sub_137bcf0, sub_eb92e0
*/
void sub_eba1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeba1b0ULL || rel >= 0xeba260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eba260 size=160 callers=2 calls=2
   calls: sub_137bd20, sub_eb92e0
*/
void sub_eba260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeba260ULL || rel >= 0xeba300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eba300 size=176 callers=1 calls=2
   calls: sub_137bd50, sub_eb92e0
*/
void sub_eba300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeba300ULL || rel >= 0xeba3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eba3b0 size=320 callers=2 calls=1
   calls: sub_11061d0
*/
void sub_eba3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeba3b0ULL || rel >= 0xeba4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eba4f0 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_eba4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeba4f0ULL || rel >= 0xeba5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eba5c0 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_eba5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeba5c0ULL || rel >= 0xeba690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eba690 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_eba690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeba690ULL || rel >= 0xeba760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eba760 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_eba760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeba760ULL || rel >= 0xeba830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eba830 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_eba830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeba830ULL || rel >= 0xeba8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eba8b0 size=528 callers=1 calls=1
   calls: anonymous_2
*/
void sub_eba8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeba8b0ULL || rel >= 0xebaac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebaac0 size=160 callers=0 calls=4
   calls: sub_5cfad0, sub_e7e890, sub_e7ea20, tipsdata_2
*/
void sub_ebaac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebaac0ULL || rel >= 0xebab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebab60 size=624 callers=0 calls=7
   calls: sub_67b990, sub_67d450, sub_e7ea90, sub_ebadd0, sub_ebbab0, sub_ebc2f0, sub_ebc990
   ref: common/tips.dat
*/
void tips(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebab60ULL || rel >= 0xebadd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebadd0 size=464 callers=3 calls=5
   calls: sub_67b990, sub_67d450, sub_eb9b90, sub_eb9c20, sub_ebc300
*/
void sub_ebadd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebadd0ULL || rel >= 0xebafa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebafa0 size=128 callers=0 calls=3
   calls: sub_eb6230, sub_ebadd0, tipsdata_2
*/
void sub_ebafa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebafa0ULL || rel >= 0xebb020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb020 size=288 callers=7 calls=5
   calls: sub_a7a360, sub_eb96a0, sub_ebadd0, sub_ebca20, tipsdata_2
*/
void sub_ebb020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb020ULL || rel >= 0xebb140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb140 size=176 callers=3 calls=2
   calls: sub_ebca20, tipsdata_2
*/
void sub_ebb140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb140ULL || rel >= 0xebb1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb1f0 size=32 callers=1 calls=0
*/
void sub_ebb1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb1f0ULL || rel >= 0xebb210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb210 size=128 callers=0 calls=3
   calls: message, picturename, sub_67d450
*/
void sub_ebb210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb210ULL || rel >= 0xebb290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb290 size=48 callers=2 calls=0
*/
void sub_ebb290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb290ULL || rel >= 0xebb2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb2c0 size=32 callers=0 calls=0
*/
void sub_ebb2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb2c0ULL || rel >= 0xebb2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb2e0 size=80 callers=0 calls=1
   calls: sub_ebc8a0
*/
void sub_ebb2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb2e0ULL || rel >= 0xebb330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb330 size=288 callers=0 calls=2
   calls: sub_5e2bc0, sub_78fcb0
*/
void sub_ebb330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb330ULL || rel >= 0xebb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb450 size=16 callers=0 calls=0
*/
void sub_ebb450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb450ULL || rel >= 0xebb460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb460 size=112 callers=0 calls=1
   calls: sub_ebb700
*/
void sub_ebb460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb460ULL || rel >= 0xebb4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb4d0 size=16 callers=0 calls=0
*/
void sub_ebb4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb4d0ULL || rel >= 0xebb4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb4e0 size=16 callers=0 calls=0
*/
void sub_ebb4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb4e0ULL || rel >= 0xebb4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb4f0 size=112 callers=0 calls=1
   calls: sub_ebb700
*/
void sub_ebb4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb4f0ULL || rel >= 0xebb560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb560 size=112 callers=0 calls=1
   calls: sub_ebb700
*/
void sub_ebb560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb560ULL || rel >= 0xebb5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb5d0 size=16 callers=0 calls=0
*/
void sub_ebb5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb5d0ULL || rel >= 0xebb5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb5e0 size=16 callers=0 calls=0
*/
void sub_ebb5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb5e0ULL || rel >= 0xebb5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb5f0 size=272 callers=0 calls=0
*/
void sub_ebb5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb5f0ULL || rel >= 0xebb700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb700 size=304 callers=4 calls=0
*/
void sub_ebb700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb700ULL || rel >= 0xebb830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb830 size=48 callers=0 calls=0
*/
void sub_ebb830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb830ULL || rel >= 0xebb860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb860 size=16 callers=0 calls=0
*/
void sub_ebb860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb860ULL || rel >= 0xebb870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb870 size=32 callers=0 calls=0
*/
void sub_ebb870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb870ULL || rel >= 0xebb890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb890 size=32 callers=0 calls=0
*/
void sub_ebb890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb890ULL || rel >= 0xebb8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebb8b0 size=512 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/info/bin/info_00_uikit.bin
   ref: bin/appli/info/bin/info_00_lyt.bin
*/
void info_00_uikit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb8b0ULL || rel >= 0xebbab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebbab0 size=1200 callers=1 calls=9
   calls: sub_14e1a00, sub_67b990, sub_e806b0, sub_e83430, sub_e83fe0, sub_eb7b00, sub_ebbf60, sub_ebc120, sub_ebcbf0
*/
void sub_ebbab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebbab0ULL || rel >= 0xebbf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebbf60 size=448 callers=1 calls=3
   calls: sub_14aad40, sub_7a3a10, sub_8f3180
*/
void sub_ebbf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebbf60ULL || rel >= 0xebc120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebc120 size=464 callers=1 calls=3
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450
*/
void sub_ebc120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebc120ULL || rel >= 0xebc2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebc2f0 size=16 callers=1 calls=0
*/
void sub_ebc2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebc2f0ULL || rel >= 0xebc300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebc300 size=240 callers=2 calls=2
   calls: sub_130ada0, sub_67bdb0
*/
void sub_ebc300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebc300ULL || rel >= 0xebc3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebc3f0 size=1200 callers=3 calls=7
   calls: sub_130ad50, sub_1315b90, sub_14ac370, sub_14e1a00, sub_17ac6a0, sub_67bc30, sub_e83930
*/
void sub_ebc3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebc3f0ULL || rel >= 0xebc8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebc8a0 size=112 callers=1 calls=0
*/
void sub_ebc8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebc8a0ULL || rel >= 0xebc910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebc910 size=80 callers=0 calls=0
*/
void sub_ebc910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebc910ULL || rel >= 0xebc960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebc960 size=48 callers=4 calls=0
*/
void sub_ebc960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebc960ULL || rel >= 0xebc990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebc990 size=112 callers=2 calls=0
*/
void sub_ebc990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebc990ULL || rel >= 0xebca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebca00 size=32 callers=0 calls=0
*/
void sub_ebca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebca00ULL || rel >= 0xebca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebca20 size=48 callers=2 calls=0
*/
void sub_ebca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebca20ULL || rel >= 0xebca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebca50 size=16 callers=0 calls=0
*/
void sub_ebca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebca50ULL || rel >= 0xebca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebca60 size=16 callers=0 calls=0
*/
void sub_ebca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebca60ULL || rel >= 0xebca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebca70 size=16 callers=0 calls=0
*/
void sub_ebca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebca70ULL || rel >= 0xebca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebca80 size=16 callers=0 calls=0
*/
void sub_ebca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebca80ULL || rel >= 0xebca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebca90 size=16 callers=0 calls=0
*/
void sub_ebca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebca90ULL || rel >= 0xebcaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcaa0 size=16 callers=0 calls=0
*/
void sub_ebcaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcaa0ULL || rel >= 0xebcab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcab0 size=16 callers=0 calls=0
*/
void sub_ebcab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcab0ULL || rel >= 0xebcac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcac0 size=16 callers=0 calls=0
*/
void sub_ebcac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcac0ULL || rel >= 0xebcad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcad0 size=80 callers=0 calls=1
   calls: sub_ebc3f0
*/
void sub_ebcad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcad0ULL || rel >= 0xebcb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcb20 size=16 callers=0 calls=0
*/
void sub_ebcb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcb20ULL || rel >= 0xebcb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcb30 size=16 callers=0 calls=0
*/
void sub_ebcb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcb30ULL || rel >= 0xebcb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcb40 size=16 callers=0 calls=0
*/
void sub_ebcb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcb40ULL || rel >= 0xebcb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcb50 size=80 callers=0 calls=1
   calls: sub_ebc3f0
*/
void sub_ebcb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcb50ULL || rel >= 0xebcba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcba0 size=16 callers=0 calls=0
*/
void sub_ebcba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcba0ULL || rel >= 0xebcbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcbb0 size=16 callers=0 calls=0
*/
void sub_ebcbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcbb0ULL || rel >= 0xebcbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcbc0 size=16 callers=0 calls=0
*/
void sub_ebcbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcbc0ULL || rel >= 0xebcbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcbd0 size=16 callers=0 calls=0
*/
void sub_ebcbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcbd0ULL || rel >= 0xebcbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcbe0 size=16 callers=0 calls=0
*/
void sub_ebcbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcbe0ULL || rel >= 0xebcbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcbf0 size=16 callers=1 calls=0
*/
void sub_ebcbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcbf0ULL || rel >= 0xebcc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcc00 size=16 callers=0 calls=0
*/
void sub_ebcc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcc00ULL || rel >= 0xebcc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcc10 size=80 callers=0 calls=1
   calls: sub_ebc3f0
*/
void sub_ebcc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcc10ULL || rel >= 0xebcc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcc60 size=16 callers=0 calls=0
*/
void sub_ebcc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcc60ULL || rel >= 0xebcc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcc70 size=16 callers=0 calls=0
*/
void sub_ebcc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcc70ULL || rel >= 0xebcc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcc80 size=16 callers=0 calls=0
*/
void sub_ebcc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcc80ULL || rel >= 0xebcc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcc90 size=16 callers=0 calls=0
*/
void sub_ebcc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcc90ULL || rel >= 0xebcca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcca0 size=16 callers=0 calls=0
*/
void sub_ebcca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcca0ULL || rel >= 0xebccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebccb0 size=16 callers=0 calls=0
*/
void sub_ebccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebccb0ULL || rel >= 0xebccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebccc0 size=16 callers=0 calls=0
*/
void sub_ebccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebccc0ULL || rel >= 0xebccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebccd0 size=736 callers=21 calls=0
*/
void sub_ebccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebccd0ULL || rel >= 0xebcfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebcfb0 size=384 callers=21 calls=1
   calls: sub_eaa040
*/
void sub_ebcfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebcfb0ULL || rel >= 0xebd130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebd130 size=32 callers=35 calls=0
*/
void sub_ebd130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebd130ULL || rel >= 0xebd150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebd150 size=16 callers=0 calls=0
*/
void sub_ebd150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebd150ULL || rel >= 0xebd160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebd160 size=16 callers=0 calls=0
*/
void sub_ebd160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebd160ULL || rel >= 0xebd170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebd170 size=16 callers=0 calls=0
*/
void sub_ebd170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebd170ULL || rel >= 0xebd180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebd180 size=496 callers=1 calls=3
   calls: sub_762930, sub_762940, sub_764b40
*/
void sub_ebd180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebd180ULL || rel >= 0xebd370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebd370 size=5760 callers=0 calls=1
   calls: sub_ebe9f0
   ref: pt1_monsno
   ref: pt1_mons_form
   ref: pt2_monsno
   ref: pt0_mons_lv
   ref: pt0_mons_form
   ref: pt2_mons_form
   ref: pt2_mons_lv
   ref: pt0_monsno
*/
void pt3_mons_form(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebd370ULL || rel >= 0xebe9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebe9f0 size=816 callers=113 calls=0
*/
void sub_ebe9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebe9f0ULL || rel >= 0xebed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebed20 size=3952 callers=0 calls=11
   calls: sub_136b590, sub_136f5a0, sub_136f5b0, sub_1379a60, sub_137b970, sub_15b7a90, sub_15b7d30, sub_7c2d80, sub_ea3d10, sub_ea4890, sub_ebe9f0
   ref: controller
   ref: play_time
   ref: time_stamp
   ref: time_zone
   ref: pokedex_cap
   ref: tv_mobile
*/
void pokedex_cap(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebed20ULL || rel >= 0xebfc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebfc90 size=32 callers=0 calls=0
*/
void sub_ebfc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebfc90ULL || rel >= 0xebfcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebfcb0 size=48 callers=0 calls=0
   ref: raid_p2p_sp
*/
void raid_p2p_sp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebfcb0ULL || rel >= 0xebfce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebfce0 size=32 callers=0 calls=0
*/
void sub_ebfce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebfce0ULL || rel >= 0xebfd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebfd00 size=48 callers=0 calls=0
   ref: raid_net_sp
*/
void raid_net_sp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebfd00ULL || rel >= 0xebfd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebfd30 size=48 callers=0 calls=1
   calls: sub_eb86c0
*/
void sub_ebfd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebfd30ULL || rel >= 0xebfd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebfd60 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/battle_msg_00_lyt.bin
   ref: bin/appli/msg_sys/bin/uikit_msg_sys_00.bin
*/
void uikit_msg_sys_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebfd60ULL || rel >= 0xebff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebff40 size=16 callers=0 calls=0
*/
void sub_ebff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebff40ULL || rel >= 0xebff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebff50 size=16 callers=0 calls=0
*/
void sub_ebff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebff50ULL || rel >= 0xebff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebff60 size=112 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_ebff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebff60ULL || rel >= 0xebffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebffd0 size=16 callers=0 calls=0
*/
void sub_ebffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebffd0ULL || rel >= 0xebffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebffe0 size=16 callers=0 calls=0
*/
void sub_ebffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebffe0ULL || rel >= 0xebfff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ebfff0 size=112 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_ebfff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebfff0ULL || rel >= 0xec0060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec0060 size=112 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_ec0060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec0060ULL || rel >= 0xec00d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec00d0 size=16 callers=0 calls=0
*/
void sub_ec00d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec00d0ULL || rel >= 0xec00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec00e0 size=16 callers=0 calls=0
*/
void sub_ec00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec00e0ULL || rel >= 0xec00f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec00f0 size=48 callers=0 calls=0
*/
void sub_ec00f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec00f0ULL || rel >= 0xec0120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec0120 size=544 callers=0 calls=2
   calls: sub_136e710, sub_ebe9f0
*/
void sub_ec0120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec0120ULL || rel >= 0xec0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec0340 size=48 callers=0 calls=1
   calls: sub_eb86c0
*/
void sub_ec0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec0340ULL || rel >= 0xec0370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec0370 size=192 callers=5 calls=1
   calls: sub_13fb3f0
*/
void sub_ec0370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec0370ULL || rel >= 0xec0430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec0430 size=176 callers=0 calls=1
   calls: sub_eb8990
*/
void sub_ec0430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec0430ULL || rel >= 0xec04e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec04e0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/msg/bin/msg_00_lyt.bin
   ref: bin/appli/msg/bin/uikit_msg_00.bin
*/
void uikit_msg_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec04e0ULL || rel >= 0xec06c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec06c0 size=16 callers=0 calls=0
*/
void sub_ec06c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec06c0ULL || rel >= 0xec06d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec06d0 size=16 callers=0 calls=0
*/
void sub_ec06d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec06d0ULL || rel >= 0xec06e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec06e0 size=112 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_ec06e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec06e0ULL || rel >= 0xec0750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec0750 size=16 callers=0 calls=0
*/
void sub_ec0750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec0750ULL || rel >= 0xec0760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec0760 size=16 callers=0 calls=0
*/
void sub_ec0760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec0760ULL || rel >= 0xec0770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec0770 size=112 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_ec0770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec0770ULL || rel >= 0xec07e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec07e0 size=112 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_ec07e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec07e0ULL || rel >= 0xec0850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec0850 size=16 callers=0 calls=0
*/
void sub_ec0850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec0850ULL || rel >= 0xec0860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec0860 size=16 callers=0 calls=0
*/
void sub_ec0860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec0860ULL || rel >= 0xec0870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec0870 size=112 callers=1 calls=4
   calls: sub_136b530, sub_136b580, sub_136b590, sub_136b770
*/
void sub_ec0870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec0870ULL || rel >= 0xec08e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec08e0 size=1088 callers=0 calls=6
   calls: sub_5cfad0, sub_67b990, sub_c39c40, sub_d0c0, sub_e7ea90, sub_eaa040
   ref: black_list_state
*/
void black_list_state(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec08e0ULL || rel >= 0xec0d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec0d20 size=352 callers=2 calls=2
   calls: sub_c39c40, sub_f16430
*/
void sub_ec0d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec0d20ULL || rel >= 0xec0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec0e80 size=1632 callers=0 calls=13
   calls: sub_67d450, sub_e80580, sub_e806b0, sub_e807f0, sub_e80810, sub_eb8930, sub_eb8e80, sub_eb8ea0, sub_ec14e0, sub_ec1610, sub_ec1810, sub_ec1930
   ... +1 more
*/
void sub_ec0e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec0e80ULL || rel >= 0xec14e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec14e0 size=304 callers=1 calls=1
   calls: sub_1047180
*/
void sub_ec14e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec14e0ULL || rel >= 0xec1610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1610 size=512 callers=3 calls=1
   calls: sub_67bfa0
*/
void sub_ec1610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1610ULL || rel >= 0xec1810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1810 size=288 callers=4 calls=4
   calls: sub_1311c60, sub_1314a80, sub_67be60, sub_67d450
*/
void sub_ec1810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1810ULL || rel >= 0xec1930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1930 size=320 callers=1 calls=2
   calls: sub_1046880, sub_eaed70
*/
void sub_ec1930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1930ULL || rel >= 0xec1a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1a70 size=448 callers=1 calls=4
   calls: sub_1311c60, sub_1314a80, sub_67be60, sub_67d450
*/
void sub_ec1a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1a70ULL || rel >= 0xec1c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1c30 size=16 callers=0 calls=0
*/
void sub_ec1c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1c30ULL || rel >= 0xec1c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1c40 size=304 callers=4 calls=1
   calls: sub_1047180
*/
void sub_ec1c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1c40ULL || rel >= 0xec1d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1d70 size=288 callers=0 calls=0
*/
void sub_ec1d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1d70ULL || rel >= 0xec1e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1e90 size=16 callers=0 calls=0
*/
void sub_ec1e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1e90ULL || rel >= 0xec1ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1ea0 size=16 callers=0 calls=0
*/
void sub_ec1ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1ea0ULL || rel >= 0xec1eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1eb0 size=16 callers=0 calls=0
*/
void sub_ec1eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1eb0ULL || rel >= 0xec1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1ec0 size=16 callers=0 calls=0
*/
void sub_ec1ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1ec0ULL || rel >= 0xec1ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1ed0 size=16 callers=0 calls=0
*/
void sub_ec1ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1ed0ULL || rel >= 0xec1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1ee0 size=16 callers=0 calls=0
*/
void sub_ec1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1ee0ULL || rel >= 0xec1ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1ef0 size=16 callers=0 calls=0
*/
void sub_ec1ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1ef0ULL || rel >= 0xec1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1f00 size=16 callers=0 calls=0
*/
void sub_ec1f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1f00ULL || rel >= 0xec1f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec1f10 size=304 callers=0 calls=0
*/
void sub_ec1f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1f10ULL || rel >= 0xec2040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec2040 size=288 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/wazainfo/bin/wazainfo_00_lyt.bin
*/
void wazainfo_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec2040ULL || rel >= 0xec2160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec2160 size=736 callers=0 calls=9
   calls: sub_1308340, sub_14d6820, sub_5cfad0, sub_c46830, sub_e7e400, sub_e7e550, sub_e7e890, sub_e7ea20, wazainfo
   ref: font_fs_42_00.bffnt
*/
void font_fs_42_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec2160ULL || rel >= 0xec2440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec2440 size=1136 callers=0 calls=6
   calls: sub_14d68a0, sub_14da630, sub_5cfad0, sub_8f3180, sub_e7ea90, sub_e806b0
*/
void sub_ec2440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec2440ULL || rel >= 0xec28b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec28b0 size=32 callers=0 calls=0
*/
void sub_ec28b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec28b0ULL || rel >= 0xec28d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec28d0 size=32 callers=0 calls=0
*/
void sub_ec28d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec28d0ULL || rel >= 0xec28f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec28f0 size=48 callers=1 calls=1
   calls: sub_ec2920
*/
void sub_ec28f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec28f0ULL || rel >= 0xec2920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec2920 size=1680 callers=2 calls=18
   calls: sub_1315b90, sub_14ac370, sub_14d6920, sub_14da890, sub_67bdb0, sub_67d080, sub_67d450, sub_780d10, sub_780d40, sub_780d70, sub_780ec0, sub_7812a0
   ... +6 more
*/
void sub_ec2920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec2920ULL || rel >= 0xec2fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec2fb0 size=16 callers=1 calls=0
*/
void sub_ec2fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec2fb0ULL || rel >= 0xec2fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec2fc0 size=464 callers=0 calls=3
   calls: sub_5e2bc0, sub_78fcb0, sub_e7e5e0
*/
void sub_ec2fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec2fc0ULL || rel >= 0xec3190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec3190 size=16 callers=0 calls=0
*/
void sub_ec3190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec3190ULL || rel >= 0xec31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec31a0 size=16 callers=0 calls=0
*/
void sub_ec31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec31a0ULL || rel >= 0xec31b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec31b0 size=16 callers=0 calls=0
*/
void sub_ec31b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec31b0ULL || rel >= 0xec31c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec31c0 size=16 callers=0 calls=0
*/
void sub_ec31c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec31c0ULL || rel >= 0xec31d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec31d0 size=16 callers=0 calls=0
*/
void sub_ec31d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec31d0ULL || rel >= 0xec31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec31e0 size=16 callers=0 calls=0
*/
void sub_ec31e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec31e0ULL || rel >= 0xec31f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec31f0 size=16 callers=0 calls=0
*/
void sub_ec31f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec31f0ULL || rel >= 0xec3200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec3200 size=16 callers=0 calls=0
*/
void sub_ec3200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec3200ULL || rel >= 0xec3210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec3210 size=304 callers=0 calls=0
*/
void sub_ec3210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec3210ULL || rel >= 0xec3340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec3340 size=5056 callers=9 calls=4
   calls: sub_14aad40, sub_14ba7b0, sub_8f3180, sub_e7f7f0
   ref: L_btlteam_pokelist_03_L_team_pokelist_icon_01_P_pokeIcon_00
   ref: pane_%s
   ref: L_btlteam_pokelist_00_P_team_pokelist_icon_02
   ref: L_btlteam_pokelist_00_L_team_pokelist_icon_01_P_pokeIcon_00
   ref: pane_%s_%s
   ref: L_btlteam_pokelist_04_P_team_pokelist_icon_03
   ref: L_btlteam_pokelist_03_P_team_pokelist_icon_02
   ref: L_btlteam_pokelist_01_P_team_pokelist_icon_03
*/
void L_btlteam_pokelist_05_P_team_pokelist_icon_03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec3340ULL || rel >= 0xec4700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec4700 size=5312 callers=4 calls=16
   calls: sub_1311c60, sub_1313430, sub_1315b90, sub_14ab0c0, sub_14ab440, sub_14bb4c0, sub_14bbb20, sub_67bdb0, sub_67be60, sub_762d50, sub_762d70, sub_764b40
   ... +4 more
   ref: switch
   ref: L_btlteam_pokelist_03_item_bg_color
   ref: team_bg_color
   ref: pane_%s
   ref: anime_%s
   ref: L_btlteam_pokelist_04_T_team_pokelist_00
   ref: L_btlteam_pokelist_01_L_team_pokelist_icon_00_switch
   ref: T_btlteam_03
*/
void L_btlteam_pokelist_05_switch(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec4700ULL || rel >= 0xec5bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec5bc0 size=480 callers=16 calls=4
   calls: sub_14ab0c0, sub_14ab200, sub_14ab440, sub_14ab5c0
   ref: anime_%s
   ref: unselect_header_color
   ref: anime_%s_%s
   ref: select_header_color
*/
void unselect_header_color(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec5bc0ULL || rel >= 0xec5da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec5da0 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_ec5da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec5da0ULL || rel >= 0xec5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec5df0 size=208 callers=0 calls=5
   calls: sub_14aad40, sub_e833a0, sub_e83870, sub_ec5ec0, sub_ec6070
   ref: anime_ptn_pos
   ref: anime_in
*/
void anime_ptn_pos(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec5df0ULL || rel >= 0xec5ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec5ec0 size=432 callers=2 calls=3
   calls: sub_1315b90, sub_14ac370, sub_67d450
*/
void sub_ec5ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec5ec0ULL || rel >= 0xec6070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6070 size=432 callers=2 calls=3
   calls: sub_1315b90, sub_14ac370, sub_67d450
*/
void sub_ec6070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6070ULL || rel >= 0xec6220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6220 size=16 callers=0 calls=0
   ref: anime_out
*/
void anime_out_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6220ULL || rel >= 0xec6230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6230 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/msg_money/bin/msg_money_00_lyt.bin
*/
void msg_money_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6230ULL || rel >= 0xec6340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6340 size=16 callers=0 calls=0
*/
void sub_ec6340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6340ULL || rel >= 0xec6350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6350 size=96 callers=0 calls=0
*/
void sub_ec6350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6350ULL || rel >= 0xec63b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec63b0 size=96 callers=0 calls=0
*/
void sub_ec63b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec63b0ULL || rel >= 0xec6410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6410 size=16 callers=0 calls=0
*/
void sub_ec6410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6410ULL || rel >= 0xec6420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6420 size=96 callers=0 calls=0
*/
void sub_ec6420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6420ULL || rel >= 0xec6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6480 size=96 callers=0 calls=0
*/
void sub_ec6480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6480ULL || rel >= 0xec64e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec64e0 size=16 callers=0 calls=0
*/
void sub_ec64e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec64e0ULL || rel >= 0xec64f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec64f0 size=16 callers=0 calls=0
*/
void sub_ec64f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec64f0ULL || rel >= 0xec6500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6500 size=96 callers=0 calls=0
*/
void sub_ec6500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6500ULL || rel >= 0xec6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6560 size=96 callers=0 calls=0
*/
void sub_ec6560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6560ULL || rel >= 0xec65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec65c0 size=304 callers=0 calls=0
*/
void sub_ec65c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec65c0ULL || rel >= 0xec66f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec66f0 size=112 callers=1 calls=2
   calls: anonymous_2, sub_14ba3b0
*/
void sub_ec66f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec66f0ULL || rel >= 0xec6760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6760 size=336 callers=0 calls=3
   calls: sub_1307dd0, sub_5cfad0, sub_c4ac70
*/
void sub_ec6760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6760ULL || rel >= 0xec68b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec68b0 size=64 callers=0 calls=1
   calls: sub_1308340
*/
void sub_ec68b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec68b0ULL || rel >= 0xec68f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec68f0 size=64 callers=0 calls=1
   calls: sub_1308340
*/
void sub_ec68f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec68f0ULL || rel >= 0xec6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6930 size=144 callers=0 calls=3
   calls: sub_14aad40, sub_14ba7b0, sub_8f3180
*/
void sub_ec6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6930ULL || rel >= 0xec69c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec69c0 size=16 callers=0 calls=0
*/
void sub_ec69c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec69c0ULL || rel >= 0xec69d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec69d0 size=272 callers=0 calls=1
   calls: sub_c46830
*/
void sub_ec69d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec69d0ULL || rel >= 0xec6ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6ae0 size=32 callers=0 calls=1
   calls: sub_14bacd0
*/
void sub_ec6ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6ae0ULL || rel >= 0xec6b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6b00 size=800 callers=0 calls=9
   calls: sub_1315270, sub_14ac040, sub_14ac370, sub_14bb4c0, sub_67d080, sub_67d450, sub_786b80, sub_786c10, wazaname
*/
void sub_ec6b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6b00ULL || rel >= 0xec6e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6e20 size=16 callers=0 calls=0
*/
void sub_ec6e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6e20ULL || rel >= 0xec6e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6e30 size=16 callers=0 calls=0
*/
void sub_ec6e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6e30ULL || rel >= 0xec6e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6e40 size=32 callers=0 calls=0
*/
void sub_ec6e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6e40ULL || rel >= 0xec6e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6e60 size=32 callers=0 calls=0
*/
void sub_ec6e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6e60ULL || rel >= 0xec6e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6e80 size=128 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_ec6e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6e80ULL || rel >= 0xec6f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6f00 size=128 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_ec6f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6f00ULL || rel >= 0xec6f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6f80 size=16 callers=0 calls=0
*/
void sub_ec6f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6f80ULL || rel >= 0xec6f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec6f90 size=128 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_ec6f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec6f90ULL || rel >= 0xec7010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec7010 size=128 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_ec7010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec7010ULL || rel >= 0xec7090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec7090 size=16 callers=0 calls=0
*/
void sub_ec7090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec7090ULL || rel >= 0xec70a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec70a0 size=16 callers=0 calls=0
*/
void sub_ec70a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec70a0ULL || rel >= 0xec70b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec70b0 size=128 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_ec70b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec70b0ULL || rel >= 0xec7130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec7130 size=128 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_ec7130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec7130ULL || rel >= 0xec71b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec71b0 size=304 callers=0 calls=0
*/
void sub_ec71b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec71b0ULL || rel >= 0xec72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec72e0 size=48 callers=0 calls=0
   ref: camp_parle_p2p
*/
void camp_parle_p2p(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec72e0ULL || rel >= 0xec7310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec7310 size=2256 callers=0 calls=1
   calls: sub_ebe9f0
   ref: friend_monsno
*/
void friend_monsno(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec7310ULL || rel >= 0xec7be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec7be0 size=48 callers=0 calls=0
   ref: camp_parle_net
*/
void camp_parle_net(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec7be0ULL || rel >= 0xec7c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec7c10 size=32 callers=0 calls=0
   ref: camp_cooking_p2p
*/
void camp_cooking_p2p(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec7c10ULL || rel >= 0xec7c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec7c30 size=1456 callers=0 calls=1
   calls: sub_ebe9f0
   ref: cooking_dex
   ref: material_no
   ref: cooking_no
   ref: cooking_lv
*/
void cooking_dex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec7c30ULL || rel >= 0xec81e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec81e0 size=32 callers=0 calls=0
   ref: camp_cooking_net
*/
void camp_cooking_net(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec81e0ULL || rel >= 0xec8200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec8200 size=672 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_ec8200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec8200ULL || rel >= 0xec84a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec84a0 size=304 callers=0 calls=3
   calls: sub_5dd790, sub_5e2930, sub_9b4980
   ref: bin/appli/eraberu_bgm/bin/eraberu_bgm.prmb
*/
void eraberu_bgm(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec84a0ULL || rel >= 0xec85d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec85d0 size=672 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_ec85d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec85d0ULL || rel >= 0xec8870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec8870 size=16 callers=0 calls=0
*/
void sub_ec8870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec8870ULL || rel >= 0xec8880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec8880 size=16 callers=0 calls=0
*/
void sub_ec8880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec8880ULL || rel >= 0xec8890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec8890 size=16 callers=0 calls=0
*/
void sub_ec8890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec8890ULL || rel >= 0xec88a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec88a0 size=16 callers=0 calls=0
*/
void sub_ec88a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec88a0ULL || rel >= 0xec88b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec88b0 size=16 callers=0 calls=0
*/
void sub_ec88b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec88b0ULL || rel >= 0xec88c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec88c0 size=1600 callers=1 calls=10
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_11069b0, sub_1106cd0, sub_1106f30, sub_135a1a0, sub_137bc40, sub_ec9570
   ref: MsgLabel
   ref: Unlock
   ref: PostEventName
   ref: bgmData
*/
void PostEventName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec88c0ULL || rel >= 0xec8f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec8f00 size=80 callers=6 calls=0
*/
void sub_ec8f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec8f00ULL || rel >= 0xec8f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec8f50 size=288 callers=3 calls=1
   calls: sub_137bc50
*/
void sub_ec8f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec8f50ULL || rel >= 0xec9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec9070 size=512 callers=1 calls=0
*/
void sub_ec9070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec9070ULL || rel >= 0xec9270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec9270 size=400 callers=2 calls=1
   calls: sub_1c0
*/
void sub_ec9270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec9270ULL || rel >= 0xec9400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec9400 size=48 callers=3 calls=0
*/
void sub_ec9400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec9400ULL || rel >= 0xec9430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec9430 size=48 callers=3 calls=0
*/
void sub_ec9430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec9430ULL || rel >= 0xec9460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec9460 size=240 callers=0 calls=0
*/
void sub_ec9460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec9460ULL || rel >= 0xec9550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec9550 size=16 callers=0 calls=0
*/
void sub_ec9550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec9550ULL || rel >= 0xec9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec9560 size=16 callers=0 calls=0
*/
void sub_ec9560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec9560ULL || rel >= 0xec9570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec9570 size=704 callers=2 calls=0
*/
void sub_ec9570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec9570ULL || rel >= 0xec9830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec9830 size=512 callers=8 calls=9
   calls: sub_105b2c0, sub_1376420, sub_158a790, sub_15bc1e0, sub_15bc310, sub_16305f0, sub_762930, sub_762940, sub_7847d0
*/
void sub_ec9830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec9830ULL || rel >= 0xec9a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ec9a30 size=5216 callers=0 calls=1
   calls: sub_ebe9f0
   ref: mons_form_2
   ref: mons_form_3
   ref: mons_form_1
   ref: rental_id
   ref: mons_form_5
   ref: mons_form_6
   ref: mons_form_4
*/
void mons_form_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec9a30ULL || rel >= 0xecae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecae90 size=128 callers=0 calls=0
*/
void sub_ecae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecae90ULL || rel >= 0xecaf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecaf10 size=48 callers=0 calls=0
   ref: check_point
*/
void check_point(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecaf10ULL || rel >= 0xecaf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecaf40 size=12496 callers=0 calls=24
   calls: sub_136b580, sub_136b590, sub_136b780, sub_136e710, sub_136f5a0, sub_136f5b0, sub_136f5e0, sub_136f5f0, sub_136f600, sub_1379a60, sub_1379c20, sub_137b8b0
   ... +12 more
   ref: controller
   ref: now_money
   ref: mons_lv_1
   ref: gform_pokeno
   ref: trainerid
   ref: last_reporttime
   ref: dex_capture
   ref: %04d%02d%02d
*/
void dex_capture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecaf40ULL || rel >= 0xece010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece010 size=48 callers=0 calls=0
   ref: tower_double
*/
void tower_double(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece010ULL || rel >= 0xece040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece040 size=16 callers=0 calls=0
*/
void sub_ece040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece040ULL || rel >= 0xece050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece050 size=48 callers=0 calls=0
   ref: tower_single
*/
void tower_single(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece050ULL || rel >= 0xece080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece080 size=16 callers=0 calls=0
*/
void sub_ece080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece080ULL || rel >= 0xece090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece090 size=16 callers=1 calls=0
*/
void sub_ece090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece090ULL || rel >= 0xece0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece0a0 size=16 callers=6 calls=0
*/
void sub_ece0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece0a0ULL || rel >= 0xece0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece0b0 size=16 callers=3 calls=0
*/
void sub_ece0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece0b0ULL || rel >= 0xece0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece0c0 size=144 callers=14 calls=1
   calls: sub_eaa580
*/
void sub_ece0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece0c0ULL || rel >= 0xece150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece150 size=32 callers=4 calls=0
*/
void sub_ece150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece150ULL || rel >= 0xece170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece170 size=16 callers=1 calls=0
*/
void sub_ece170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece170ULL || rel >= 0xece180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece180 size=16 callers=1 calls=0
*/
void sub_ece180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece180ULL || rel >= 0xece190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece190 size=16 callers=2 calls=0
*/
void sub_ece190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece190ULL || rel >= 0xece1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece1a0 size=32 callers=1 calls=0
*/
void sub_ece1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece1a0ULL || rel >= 0xece1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece1c0 size=32 callers=2 calls=0
*/
void sub_ece1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece1c0ULL || rel >= 0xece1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece1e0 size=32 callers=3 calls=0
*/
void sub_ece1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece1e0ULL || rel >= 0xece200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece200 size=32 callers=1 calls=0
*/
void sub_ece200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece200ULL || rel >= 0xece220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece220 size=64 callers=2 calls=1
   calls: sub_eaa630
*/
void sub_ece220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece220ULL || rel >= 0xece260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece260 size=16 callers=1 calls=0
*/
void sub_ece260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece260ULL || rel >= 0xece270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece270 size=32 callers=11 calls=0
*/
void sub_ece270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece270ULL || rel >= 0xece290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece290 size=32 callers=2 calls=0
*/
void sub_ece290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece290ULL || rel >= 0xece2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece2b0 size=32 callers=2 calls=0
*/
void sub_ece2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece2b0ULL || rel >= 0xece2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece2d0 size=192 callers=2 calls=1
   calls: sub_76d0d0
   ref: bin/misc/palma/bin/wave/pv%04d_%03d_%s.wav
   ref: Common
*/
void Common(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece2d0ULL || rel >= 0xece390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece390 size=160 callers=1 calls=1
   calls: sub_76d0d0
   ref: bin/misc/palma/bin/rgbled/poke_f_%04d_%03d_%s%s.bin
*/
void poke_f__04d__03d__s_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece390ULL || rel >= 0xece430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece430 size=464 callers=4 calls=0
*/
void sub_ece430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece430ULL || rel >= 0xece600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ece600 size=3248 callers=0 calls=1
   calls: sub_ebe9f0
   ref: get_item_%d
   ref: get_money
   ref: get_dress_%d
   ref: get_mons_form
   ref: get_parts_%d
   ref: get_itemcnt_%d
   ref: get_monsno
*/
void get_mons_form(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece600ULL || rel >= 0xecf2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecf2b0 size=48 callers=0 calls=0
   ref: fushigi_p2p
*/
void fushigi_p2p(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecf2b0ULL || rel >= 0xecf2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecf2e0 size=48 callers=0 calls=0
   ref: fushigi_serial
*/
void fushigi_serial(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecf2e0ULL || rel >= 0xecf310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecf310 size=48 callers=0 calls=0
   ref: fushigi_net
*/
void fushigi_net(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecf310ULL || rel >= 0xecf340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecf340 size=32 callers=0 calls=0
   ref: live_competition
*/
void live_competition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecf340ULL || rel >= 0xecf360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecf360 size=16 callers=0 calls=0
*/
void sub_ecf360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecf360ULL || rel >= 0xecf370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecf370 size=48 callers=0 calls=0
   ref: rentalteam_lend
*/
void rentalteam_lend(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecf370ULL || rel >= 0xecf3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecf3a0 size=16 callers=0 calls=0
   ref: my_name
*/
void my_name(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecf3a0ULL || rel >= 0xecf3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecf3b0 size=2544 callers=0 calls=7
   calls: sub_67c7e0, sub_762930, sub_762940, sub_783bd0, sub_7847d0, sub_785110, sub_ebe9f0
   ref: rental_id
*/
void rental_id(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecf3b0ULL || rel >= 0xecfda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecfda0 size=48 callers=0 calls=0
   ref: rentalteam_rent
*/
void rentalteam_rent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecfda0ULL || rel >= 0xecfdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecfdd0 size=16 callers=0 calls=0
   ref: owner_name
*/
void owner_name(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecfdd0ULL || rel >= 0xecfde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecfde0 size=48 callers=0 calls=0
   ref: internet_competition
*/
void internet_competition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecfde0ULL || rel >= 0xecfe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecfe10 size=16 callers=0 calls=0
*/
void sub_ecfe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecfe10ULL || rel >= 0xecfe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecfe20 size=48 callers=0 calls=0
   ref: casualmatch_double
*/
void casualmatch_double(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecfe20ULL || rel >= 0xecfe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecfe50 size=16 callers=0 calls=0
*/
void sub_ecfe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecfe50ULL || rel >= 0xecfe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecfe60 size=48 callers=0 calls=0
   ref: casualmatch_single
*/
void casualmatch_single(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecfe60ULL || rel >= 0xecfe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecfe90 size=16 callers=0 calls=0
*/
void sub_ecfe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecfe90ULL || rel >= 0xecfea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecfea0 size=32 callers=0 calls=0
   ref: rankmatch_double
*/
void rankmatch_double(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecfea0ULL || rel >= 0xecfec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecfec0 size=16 callers=0 calls=0
*/
void sub_ecfec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecfec0ULL || rel >= 0xecfed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecfed0 size=32 callers=0 calls=0
   ref: rankmatch_single
*/
void rankmatch_single(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecfed0ULL || rel >= 0xecfef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecfef0 size=16 callers=0 calls=0
*/
void sub_ecfef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecfef0ULL || rel >= 0xecff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecff00 size=48 callers=0 calls=0
   ref: frienly_competition
*/
void frienly_competition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecff00ULL || rel >= 0xecff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecff30 size=16 callers=0 calls=0
*/
void sub_ecff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecff30ULL || rel >= 0xecff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecff40 size=48 callers=0 calls=0
   ref: rankmatch_double_m
*/
void rankmatch_double_m(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecff40ULL || rel >= 0xecff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecff70 size=16 callers=0 calls=0
*/
void sub_ecff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecff70ULL || rel >= 0xecff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecff80 size=48 callers=0 calls=0
   ref: rankmatch_single_m
*/
void rankmatch_single_m(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecff80ULL || rel >= 0xecffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecffb0 size=16 callers=0 calls=0
*/
void sub_ecffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecffb0ULL || rel >= 0xecffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ecffc0 size=112 callers=4 calls=2
   calls: sub_762930, sub_762940
*/
void sub_ecffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecffc0ULL || rel >= 0xed0030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0030 size=1776 callers=0 calls=1
   calls: sub_ebe9f0
   ref: my_form_no
   ref: opp_form_no
   ref: my_mons_no
   ref: opp_rom_id
   ref: opp_mons_no
*/
void opp_mons_no(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0030ULL || rel >= 0xed0720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0720 size=128 callers=0 calls=0
*/
void sub_ed0720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0720ULL || rel >= 0xed07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed07a0 size=48 callers=0 calls=0
   ref: yy_trade_p2p
*/
void yy_trade_p2p(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed07a0ULL || rel >= 0xed07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed07d0 size=48 callers=0 calls=0
   ref: yy_trade_net
*/
void yy_trade_net(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed07d0ULL || rel >= 0xed0800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0800 size=48 callers=0 calls=0
   ref: yy_magicaltrade_p2p
*/
void yy_magicaltrade_p2p(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0800ULL || rel >= 0xed0830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0830 size=48 callers=0 calls=0
   ref: yy_magicaltrade_net
*/
void yy_magicaltrade_net(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0830ULL || rel >= 0xed0860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0860 size=48 callers=0 calls=0
   ref: yy_battle_double_p2p
*/
void yy_battle_double_p2p(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0860ULL || rel >= 0xed0890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0890 size=16 callers=0 calls=0
*/
void sub_ed0890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0890ULL || rel >= 0xed08a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed08a0 size=48 callers=0 calls=0
   ref: yy_battle_single_p2p
*/
void yy_battle_single_p2p(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed08a0ULL || rel >= 0xed08d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed08d0 size=16 callers=0 calls=0
*/
void sub_ed08d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed08d0ULL || rel >= 0xed08e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed08e0 size=48 callers=0 calls=0
   ref: yy_battle_double_net
*/
void yy_battle_double_net(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed08e0ULL || rel >= 0xed0910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0910 size=16 callers=0 calls=0
*/
void sub_ed0910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0910ULL || rel >= 0xed0920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0920 size=48 callers=0 calls=0
   ref: yy_battle_single_net
*/
void yy_battle_single_net(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0920ULL || rel >= 0xed0950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0950 size=16 callers=0 calls=0
*/
void sub_ed0950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0950ULL || rel >= 0xed0960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0960 size=96 callers=15 calls=3
   calls: sub_59b060, sub_59b090, sub_59b0c0
*/
void sub_ed0960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0960ULL || rel >= 0xed09c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed09c0 size=96 callers=6 calls=3
   calls: sub_59b060, sub_59b100, sub_59b130
*/
void sub_ed09c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed09c0ULL || rel >= 0xed0a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0a20 size=96 callers=7 calls=3
   calls: sub_59b060, sub_59b170, sub_59b1a0
*/
void sub_ed0a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0a20ULL || rel >= 0xed0a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0a80 size=96 callers=8 calls=3
   calls: sub_59b060, sub_59b1f0, sub_59b200
*/
void sub_ed0a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0a80ULL || rel >= 0xed0ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0ae0 size=240 callers=2 calls=2
   calls: sub_5db8e0, sub_65d700
*/
void sub_ed0ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0ae0ULL || rel >= 0xed0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0bd0 size=16 callers=0 calls=0
*/
void sub_ed0bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0bd0ULL || rel >= 0xed0be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0be0 size=16 callers=0 calls=0
*/
void sub_ed0be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0be0ULL || rel >= 0xed0bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0bf0 size=48 callers=0 calls=1
   calls: sub_5db450
*/
void sub_ed0bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0bf0ULL || rel >= 0xed0c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0c20 size=544 callers=0 calls=3
   calls: sub_65cd50, sub_65cd70, sub_65cd90
*/
void sub_ed0c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0c20ULL || rel >= 0xed0e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0e40 size=48 callers=0 calls=1
   calls: sub_5db450
*/
void sub_ed0e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0e40ULL || rel >= 0xed0e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed0e70 size=1232 callers=1 calls=6
   calls: sub_5a1660, sub_5d99d0, sub_5dc5d0, sub_612ef0, sub_967240, sub_b447b0
*/
void sub_ed0e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed0e70ULL || rel >= 0xed1340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed1340 size=768 callers=1 calls=1
   calls: sub_972c70
*/
void sub_ed1340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed1340ULL || rel >= 0xed1640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed1640 size=272 callers=0 calls=0
*/
void sub_ed1640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed1640ULL || rel >= 0xed1750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed1750 size=16 callers=0 calls=0
*/
void sub_ed1750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed1750ULL || rel >= 0xed1760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed1760 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_ed1760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed1760ULL || rel >= 0xed17d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed17d0 size=16 callers=0 calls=0
*/
void sub_ed17d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed17d0ULL || rel >= 0xed17e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed17e0 size=16 callers=0 calls=0
*/
void sub_ed17e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed17e0ULL || rel >= 0xed17f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed17f0 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_ed17f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed17f0ULL || rel >= 0xed1860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed1860 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_ed1860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed1860ULL || rel >= 0xed18d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed18d0 size=16 callers=0 calls=0
*/
void sub_ed18d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed18d0ULL || rel >= 0xed18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed18e0 size=16 callers=0 calls=0
*/
void sub_ed18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed18e0ULL || rel >= 0xed18f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed18f0 size=48 callers=0 calls=1
   calls: sub_972c70
*/
void sub_ed18f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed18f0ULL || rel >= 0xed1920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed1920 size=944 callers=6 calls=2
   calls: sub_631840, sub_ea9e40
*/
void sub_ed1920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed1920ULL || rel >= 0xed1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed1cd0 size=304 callers=2 calls=2
   calls: sub_5cfad0, sub_608fa0
   ref: DownsizedBufferPath
*/
void DownsizedBufferPath(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed1cd0ULL || rel >= 0xed1e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed1e00 size=176 callers=1 calls=0
*/
void sub_ed1e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed1e00ULL || rel >= 0xed1eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed1eb0 size=416 callers=0 calls=8
   calls: sub_17876b0, sub_17876c0, sub_1788d40, sub_5f3260, sub_5f8bc0, sub_5f8c40, sub_609420, sub_691f10
*/
void sub_ed1eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed1eb0ULL || rel >= 0xed2050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed2050 size=368 callers=0 calls=0
*/
void sub_ed2050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2050ULL || rel >= 0xed21c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed21c0 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ed21c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed21c0ULL || rel >= 0xed2290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed2290 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_ed2290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2290ULL || rel >= 0xed2340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed2340 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ed2340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2340ULL || rel >= 0xed2410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed2410 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ed2410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2410ULL || rel >= 0xed24e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed24e0 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_ed24e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed24e0ULL || rel >= 0xed2590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed2590 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_ed2590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2590ULL || rel >= 0xed2640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed2640 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ed2640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2640ULL || rel >= 0xed2710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed2710 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ed2710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2710ULL || rel >= 0xed27e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed27e0 size=512 callers=1 calls=3
   calls: sub_5e0d90, sub_602030, sub_ed5370
*/
void sub_ed27e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed27e0ULL || rel >= 0xed29e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed29e0 size=16 callers=19 calls=0
*/
void sub_ed29e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed29e0ULL || rel >= 0xed29f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed29f0 size=160 callers=5 calls=1
   calls: sub_ed2a90
*/
void sub_ed29f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed29f0ULL || rel >= 0xed2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed2a90 size=1056 callers=1 calls=2
   calls: sub_63b210, sub_63d820
*/
void sub_ed2a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2a90ULL || rel >= 0xed2eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed2eb0 size=32 callers=1 calls=0
*/
void sub_ed2eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2eb0ULL || rel >= 0xed2ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed2ed0 size=80 callers=10 calls=0
*/
void sub_ed2ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2ed0ULL || rel >= 0xed2f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed2f20 size=16 callers=3 calls=0
*/
void sub_ed2f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2f20ULL || rel >= 0xed2f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed2f30 size=16 callers=2 calls=0
*/
void sub_ed2f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2f30ULL || rel >= 0xed2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed2f40 size=160 callers=2 calls=1
   calls: sub_6445a0
*/
void sub_ed2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2f40ULL || rel >= 0xed2fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed2fe0 size=112 callers=12 calls=4
   calls: DepthBuffer, sub_5f32b0, sub_619300, sub_682dd0
*/
void sub_ed2fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2fe0ULL || rel >= 0xed3050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3050 size=48 callers=8 calls=0
*/
void sub_ed3050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3050ULL || rel >= 0xed3080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3080 size=32 callers=3 calls=0
*/
void sub_ed3080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3080ULL || rel >= 0xed30a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed30a0 size=16 callers=6 calls=0
*/
void sub_ed30a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed30a0ULL || rel >= 0xed30b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed30b0 size=16 callers=1 calls=0
*/
void sub_ed30b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed30b0ULL || rel >= 0xed30c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed30c0 size=16 callers=1 calls=0
*/
void sub_ed30c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed30c0ULL || rel >= 0xed30d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed30d0 size=32 callers=1 calls=0
*/
void sub_ed30d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed30d0ULL || rel >= 0xed30f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed30f0 size=16 callers=2 calls=0
*/
void sub_ed30f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed30f0ULL || rel >= 0xed3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3100 size=32 callers=2 calls=0
*/
void sub_ed3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3100ULL || rel >= 0xed3120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3120 size=32 callers=2 calls=0
*/
void sub_ed3120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3120ULL || rel >= 0xed3140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3140 size=336 callers=3 calls=2
   calls: sub_643e60, sub_64a3c0
*/
void sub_ed3140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3140ULL || rel >= 0xed3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

