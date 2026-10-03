/* main functions 00bb5e50..00bcde30 (91 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00bb5e50 size=16 callers=0 calls=0
*/
void sub_bb5e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5e50ULL || rel >= 0xbb5e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5e60 size=16 callers=0 calls=0
*/
void sub_bb5e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5e60ULL || rel >= 0xbb5e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5e70 size=16 callers=0 calls=0
*/
void sub_bb5e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5e70ULL || rel >= 0xbb5e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5e80 size=16 callers=0 calls=0
*/
void sub_bb5e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5e80ULL || rel >= 0xbb5e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb5e90 size=480 callers=2 calls=4
   calls: sub_5e2350, sub_6d04c0, sub_6d70e0, sub_899e80
*/
void sub_bb5e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb5e90ULL || rel >= 0xbb6070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6070 size=496 callers=0 calls=3
   calls: sub_6d0670, sub_89a0f0, sub_bb5420
*/
void sub_bb6070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6070ULL || rel >= 0xbb6260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6260 size=16 callers=0 calls=0
*/
void sub_bb6260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6260ULL || rel >= 0xbb6270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6270 size=240 callers=0 calls=0
*/
void sub_bb6270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6270ULL || rel >= 0xbb6360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6360 size=32 callers=0 calls=0
*/
void sub_bb6360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6360ULL || rel >= 0xbb6380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6380 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_bb6380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6380ULL || rel >= 0xbb63e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb63e0 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_bb63e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb63e0ULL || rel >= 0xbb6470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6470 size=368 callers=0 calls=2
   calls: sub_6ae9d0, sub_89a310
*/
void sub_bb6470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6470ULL || rel >= 0xbb65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb65e0 size=384 callers=0 calls=3
   calls: sub_6ae9d0, sub_6d7e60, sub_89a310
*/
void sub_bb65e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb65e0ULL || rel >= 0xbb6760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6760 size=464 callers=0 calls=4
   calls: sub_6ae9d0, sub_6d7aa0, sub_6d7e60, sub_89a310
*/
void sub_bb6760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6760ULL || rel >= 0xbb6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6930 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_bb6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6930ULL || rel >= 0xbb69e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb69e0 size=16 callers=0 calls=0
*/
void sub_bb69e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb69e0ULL || rel >= 0xbb69f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb69f0 size=16 callers=0 calls=0
*/
void sub_bb69f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb69f0ULL || rel >= 0xbb6a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6a00 size=16 callers=0 calls=0
*/
void sub_bb6a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6a00ULL || rel >= 0xbb6a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6a10 size=16 callers=0 calls=0
*/
void sub_bb6a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6a10ULL || rel >= 0xbb6a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6a20 size=16 callers=0 calls=0
*/
void sub_bb6a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6a20ULL || rel >= 0xbb6a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6a30 size=16 callers=0 calls=0
*/
void sub_bb6a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6a30ULL || rel >= 0xbb6a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6a40 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_bb6a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6a40ULL || rel >= 0xbb6aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6aa0 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_bb6aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6aa0ULL || rel >= 0xbb6b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6b30 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_bb6b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6b30ULL || rel >= 0xbb6be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6be0 size=16 callers=0 calls=0
*/
void sub_bb6be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6be0ULL || rel >= 0xbb6bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6bf0 size=16 callers=0 calls=0
*/
void sub_bb6bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6bf0ULL || rel >= 0xbb6c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6c00 size=16 callers=0 calls=0
*/
void sub_bb6c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6c00ULL || rel >= 0xbb6c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6c10 size=32 callers=0 calls=0
*/
void sub_bb6c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6c10ULL || rel >= 0xbb6c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6c30 size=80 callers=0 calls=1
   calls: sub_6d12e0
*/
void sub_bb6c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6c30ULL || rel >= 0xbb6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6c80 size=16 callers=0 calls=0
*/
void sub_bb6c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6c80ULL || rel >= 0xbb6c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6c90 size=16 callers=0 calls=0
*/
void sub_bb6c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6c90ULL || rel >= 0xbb6ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6ca0 size=16 callers=0 calls=0
*/
void sub_bb6ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6ca0ULL || rel >= 0xbb6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6cb0 size=128 callers=0 calls=4
   calls: sub_6d7ac0, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_bb6cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6cb0ULL || rel >= 0xbb6d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6d30 size=16 callers=0 calls=0
*/
void sub_bb6d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6d30ULL || rel >= 0xbb6d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6d40 size=32 callers=0 calls=0
*/
void sub_bb6d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6d40ULL || rel >= 0xbb6d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6d60 size=32 callers=0 calls=0
*/
void sub_bb6d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6d60ULL || rel >= 0xbb6d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6d80 size=224 callers=0 calls=5
   calls: sub_6d7aa0, sub_6d7d80, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_bb6d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6d80ULL || rel >= 0xbb6e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6e60 size=16 callers=0 calls=0
*/
void sub_bb6e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6e60ULL || rel >= 0xbb6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6e70 size=32 callers=0 calls=0
*/
void sub_bb6e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6e70ULL || rel >= 0xbb6e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6e90 size=32 callers=0 calls=0
*/
void sub_bb6e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6e90ULL || rel >= 0xbb6eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb6eb0 size=544 callers=2 calls=2
   calls: sub_5e2350, sub_89b480
*/
void sub_bb6eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6eb0ULL || rel >= 0xbb70d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb70d0 size=80 callers=0 calls=0
*/
void sub_bb70d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb70d0ULL || rel >= 0xbb7120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7120 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_bb7120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7120ULL || rel >= 0xbb7190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7190 size=16 callers=0 calls=0
*/
void sub_bb7190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7190ULL || rel >= 0xbb71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb71a0 size=48 callers=0 calls=0
*/
void sub_bb71a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb71a0ULL || rel >= 0xbb71d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb71d0 size=80 callers=0 calls=0
*/
void sub_bb71d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb71d0ULL || rel >= 0xbb7220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7220 size=80 callers=0 calls=0
*/
void sub_bb7220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7220ULL || rel >= 0xbb7270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7270 size=80 callers=0 calls=0
*/
void sub_bb7270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7270ULL || rel >= 0xbb72c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb72c0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_bb72c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb72c0ULL || rel >= 0xbb7330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7330 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_bb7330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7330ULL || rel >= 0xbb73a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb73a0 size=80 callers=0 calls=0
*/
void sub_bb73a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb73a0ULL || rel >= 0xbb73f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb73f0 size=80 callers=0 calls=0
*/
void sub_bb73f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb73f0ULL || rel >= 0xbb7440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7440 size=160 callers=0 calls=0
*/
void sub_bb7440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7440ULL || rel >= 0xbb74e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb74e0 size=480 callers=0 calls=6
   calls: contents_empty_cmd_5, gflnet3_message_lite_2, sub_65da00, sub_65daf0, sub_bb83a0, sub_bb9360
*/
void sub_bb74e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb74e0ULL || rel >= 0xbb76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb76c0 size=160 callers=0 calls=0
*/
void sub_bb76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb76c0ULL || rel >= 0xbb7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7760 size=160 callers=0 calls=0
*/
void sub_bb7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7760ULL || rel >= 0xbb7800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7800 size=160 callers=0 calls=0
*/
void sub_bb7800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7800ULL || rel >= 0xbb78a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb78a0 size=160 callers=0 calls=0
*/
void sub_bb78a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb78a0ULL || rel >= 0xbb7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7940 size=240 callers=3 calls=0
*/
void sub_bb7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7940ULL || rel >= 0xbb7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7a30 size=160 callers=0 calls=0
*/
void sub_bb7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7a30ULL || rel >= 0xbb7ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7ad0 size=112 callers=0 calls=1
   calls: sub_bb7940
*/
void sub_bb7ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7ad0ULL || rel >= 0xbb7b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7b40 size=16 callers=0 calls=0
*/
void sub_bb7b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7b40ULL || rel >= 0xbb7b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7b50 size=160 callers=0 calls=0
*/
void sub_bb7b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7b50ULL || rel >= 0xbb7bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7bf0 size=160 callers=0 calls=0
*/
void sub_bb7bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7bf0ULL || rel >= 0xbb7c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7c90 size=112 callers=0 calls=1
   calls: sub_bb7940
*/
void sub_bb7c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7c90ULL || rel >= 0xbb7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7d00 size=112 callers=0 calls=1
   calls: sub_bb7940
*/
void sub_bb7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7d00ULL || rel >= 0xbb7d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7d70 size=160 callers=0 calls=0
*/
void sub_bb7d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7d70ULL || rel >= 0xbb7e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7e10 size=160 callers=0 calls=0
*/
void sub_bb7e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7e10ULL || rel >= 0xbb7eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7eb0 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_bb83a0, sub_bb8640, sub_bb9110, sub_bb9860, sub_c70
*/
void sub_bb7eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7eb0ULL || rel >= 0xbb7fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb7fe0 size=128 callers=0 calls=0
*/
void sub_bb7fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb7fe0ULL || rel >= 0xbb8060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8060 size=352 callers=0 calls=10
   calls: contents_comp_organize_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
   ref: CHECK failed: file != NULL: 
   ref: comp_organize_data_holder.proto
*/
void contents_comp_organize_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8060ULL || rel >= 0xbb81c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb81c0 size=240 callers=3 calls=8
   calls: contents_empty_cmd_2, contents_empty_cmd_5, contents_regulation_2, gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_bb9360, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
   ref: comp_organize_data_holder.proto
*/
void contents_comp_organize_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb81c0ULL || rel >= 0xbb82b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb82b0 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_bb82b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb82b0ULL || rel >= 0xbb8310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8310 size=144 callers=0 calls=4
   calls: contents_comp_organize_data_holder_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_bb8310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8310ULL || rel >= 0xbb83a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb83a0 size=32 callers=3 calls=0
*/
void sub_bb83a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb83a0ULL || rel >= 0xbb83c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb83c0 size=352 callers=0 calls=6
   calls: contents_empty_cmd_5, gflnet3_generated_message_util, sub_bb9110, sub_bb9360, sub_bb9d40, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
*/
void contents_comp_organize_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb83c0ULL || rel >= 0xbb8520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8520 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_bb8520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8520ULL || rel >= 0xbb85b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb85b0 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_bb85b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb85b0ULL || rel >= 0xbb8640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8640 size=80 callers=2 calls=0
*/
void sub_bb8640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8640ULL || rel >= 0xbb8690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8690 size=16 callers=0 calls=0
*/
void sub_bb8690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8690ULL || rel >= 0xbb86a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb86a0 size=96 callers=0 calls=2
   calls: sub_bb8700, sub_c70
*/
void sub_bb86a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb86a0ULL || rel >= 0xbb8700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8700 size=32 callers=1 calls=0
*/
void sub_bb8700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8700ULL || rel >= 0xbb8720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8720 size=80 callers=0 calls=0
*/
void sub_bb8720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8720ULL || rel >= 0xbb8770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8770 size=736 callers=0 calls=10
   calls: sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_bb9110, sub_bb94c0, sub_bb9d40, sub_bb9fc0, sub_c70
*/
void sub_bb8770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8770ULL || rel >= 0xbb8a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8a50 size=96 callers=0 calls=1
   calls: sub_714af0
*/
void sub_bb8a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8a50ULL || rel >= 0xbb8ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8ab0 size=224 callers=0 calls=0
*/
void sub_bb8ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8ab0ULL || rel >= 0xbb8b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8b90 size=144 callers=0 calls=3
   calls: sub_70d000, sub_bb9660, sub_bba080
*/
void sub_bb8b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8b90ULL || rel >= 0xbb8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8c20 size=208 callers=0 calls=2
   calls: contents_comp_organize_data_holder_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
*/
void contents_comp_organize_data_holder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8c20ULL || rel >= 0xbb8cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8cf0 size=80 callers=0 calls=0
*/
void sub_bb8cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8cf0ULL || rel >= 0xbb8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8d40 size=16 callers=0 calls=0
*/
void sub_bb8d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8d40ULL || rel >= 0xbb8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8d50 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_bb8d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8d50ULL || rel >= 0xbb8dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8dc0 size=16 callers=0 calls=0
*/
void sub_bb8dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8dc0ULL || rel >= 0xbb8dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8dd0 size=32 callers=0 calls=0
*/
void sub_bb8dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8dd0ULL || rel >= 0xbb8df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8df0 size=16 callers=0 calls=0
*/
void sub_bb8df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8df0ULL || rel >= 0xbb8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8e00 size=16 callers=0 calls=0
*/
void sub_bb8e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8e00ULL || rel >= 0xbb8e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8e10 size=16 callers=0 calls=0
*/
void sub_bb8e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8e10ULL || rel >= 0xbb8e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8e20 size=256 callers=0 calls=9
   calls: contents_regulation_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
   ref: regulation.proto
*/
void contents_regulation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8e20ULL || rel >= 0xbb8f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb8f20 size=272 callers=5 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
   ref: regulation.proto
*/
void contents_regulation_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8f20ULL || rel >= 0xbb9030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9030 size=80 callers=0 calls=0
*/
void sub_bb9030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9030ULL || rel >= 0xbb9080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9080 size=144 callers=0 calls=4
   calls: contents_regulation_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_bb9080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9080ULL || rel >= 0xbb9110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9110 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_bb9110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9110ULL || rel >= 0xbb91b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb91b0 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
*/
void contents_regulation_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb91b0ULL || rel >= 0xbb9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9210 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_bb9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9210ULL || rel >= 0xbb92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb92b0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_bb92b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb92b0ULL || rel >= 0xbb9350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9350 size=16 callers=0 calls=0
*/
void sub_bb9350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9350ULL || rel >= 0xbb9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9360 size=64 callers=3 calls=1
   calls: contents_regulation_2
*/
void sub_bb9360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9360ULL || rel >= 0xbb93a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb93a0 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_bb9460, sub_c70
*/
void sub_bb93a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb93a0ULL || rel >= 0xbb9460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9460 size=32 callers=1 calls=0
*/
void sub_bb9460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9460ULL || rel >= 0xbb9480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9480 size=64 callers=0 calls=0
*/
void sub_bb9480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9480ULL || rel >= 0xbb94c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb94c0 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_bb94c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb94c0ULL || rel >= 0xbb95f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb95f0 size=48 callers=0 calls=0
*/
void sub_bb95f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb95f0ULL || rel >= 0xbb9620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9620 size=64 callers=0 calls=0
*/
void sub_bb9620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9620ULL || rel >= 0xbb9660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9660 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_bb9660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9660ULL || rel >= 0xbb9700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9700 size=272 callers=0 calls=2
   calls: contents_regulation_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
*/
void contents_regulation_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9700ULL || rel >= 0xbb9810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9810 size=80 callers=0 calls=0
*/
void sub_bb9810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9810ULL || rel >= 0xbb9860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9860 size=112 callers=1 calls=0
*/
void sub_bb9860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9860ULL || rel >= 0xbb98d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb98d0 size=16 callers=0 calls=0
*/
void sub_bb98d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb98d0ULL || rel >= 0xbb98e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb98e0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_bb98e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb98e0ULL || rel >= 0xbb9950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9950 size=16 callers=0 calls=0
*/
void sub_bb9950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9950ULL || rel >= 0xbb9960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9960 size=32 callers=0 calls=0
*/
void sub_bb9960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9960ULL || rel >= 0xbb9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9980 size=16 callers=0 calls=0
*/
void sub_bb9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9980ULL || rel >= 0xbb9990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9990 size=16 callers=0 calls=0
*/
void sub_bb9990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9990ULL || rel >= 0xbb99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb99a0 size=16 callers=0 calls=0
*/
void sub_bb99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb99a0ULL || rel >= 0xbb99b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb99b0 size=384 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: CHECK failed: file != NULL: 
   ref: empty_cmd.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
*/
void contents_empty_cmd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb99b0ULL || rel >= 0xbb9b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9b30 size=160 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: empty_cmd.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
*/
void contents_empty_cmd_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9b30ULL || rel >= 0xbb9bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9bd0 size=80 callers=0 calls=0
*/
void sub_bb9bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9bd0ULL || rel >= 0xbb9c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9c20 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: empty_cmd.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
*/
void contents_empty_cmd_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9c20ULL || rel >= 0xbb9d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9d40 size=32 callers=4 calls=0
*/
void sub_bb9d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9d40ULL || rel >= 0xbb9d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9d60 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
*/
void contents_empty_cmd_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9d60ULL || rel >= 0xbb9d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9d90 size=96 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_bb9d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9d90ULL || rel >= 0xbb9df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9df0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_bb9df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9df0ULL || rel >= 0xbb9e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9e50 size=16 callers=0 calls=0
*/
void sub_bb9e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9e50ULL || rel >= 0xbb9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9e60 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: empty_cmd.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
*/
void contents_empty_cmd_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9e60ULL || rel >= 0xbb9f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9f30 size=96 callers=0 calls=2
   calls: sub_bb9f90, sub_c70
*/
void sub_bb9f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9f30ULL || rel >= 0xbb9f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9f90 size=32 callers=1 calls=0
*/
void sub_bb9f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9f90ULL || rel >= 0xbb9fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9fb0 size=16 callers=0 calls=0
*/
void sub_bb9fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9fb0ULL || rel >= 0xbb9fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bb9fc0 size=160 callers=1 calls=2
   calls: sub_70c480, sub_713480
*/
void sub_bb9fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb9fc0ULL || rel >= 0xbba060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba060 size=16 callers=0 calls=0
*/
void sub_bba060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba060ULL || rel >= 0xbba070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba070 size=16 callers=0 calls=0
*/
void sub_bba070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba070ULL || rel >= 0xbba080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba080 size=16 callers=1 calls=0
*/
void sub_bba080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba080ULL || rel >= 0xbba090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba090 size=352 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: empty_cmd.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
*/
void contents_empty_cmd_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba090ULL || rel >= 0xbba1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba1f0 size=80 callers=0 calls=0
*/
void sub_bba1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba1f0ULL || rel >= 0xbba240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba240 size=32 callers=1 calls=0
*/
void sub_bba240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba240ULL || rel >= 0xbba260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba260 size=16 callers=0 calls=0
*/
void sub_bba260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba260ULL || rel >= 0xbba270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba270 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_bba270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba270ULL || rel >= 0xbba2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba2e0 size=16 callers=0 calls=0
*/
void sub_bba2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba2e0ULL || rel >= 0xbba2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba2f0 size=32 callers=0 calls=0
*/
void sub_bba2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba2f0ULL || rel >= 0xbba310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba310 size=16 callers=0 calls=0
*/
void sub_bba310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba310ULL || rel >= 0xbba320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba320 size=16 callers=0 calls=0
*/
void sub_bba320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba320ULL || rel >= 0xbba330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba330 size=160 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: empty_cmd.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffer
*/
void contents_empty_cmd_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba330ULL || rel >= 0xbba3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba3d0 size=576 callers=3 calls=5
   calls: sub_5cfaf0, sub_795bc0, sub_79b990, sub_bba610, sub_c39c40
   ref: OptionBar
*/
void OptionBar_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba3d0ULL || rel >= 0xbba610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba610 size=496 callers=1 calls=4
   calls: sub_67d450, sub_ba4690, sub_eb7570, sub_eb75e0
*/
void sub_bba610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba610ULL || rel >= 0xbba800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba800 size=144 callers=3 calls=2
   calls: sub_eb8c60, sub_eb8ea0
*/
void sub_bba800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba800ULL || rel >= 0xbba890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bba890 size=512 callers=9 calls=5
   calls: sub_1311c60, sub_67d450, sub_ba4690, sub_e807f0, sub_eb8930
*/
void sub_bba890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbba890ULL || rel >= 0xbbaa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbaa90 size=176 callers=3 calls=2
   calls: sub_ba4690, sub_eb8a30
*/
void sub_bbaa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbaa90ULL || rel >= 0xbbab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbab40 size=352 callers=16 calls=3
   calls: sub_67d450, sub_ba4690, sub_eb7640
*/
void sub_bbab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbab40ULL || rel >= 0xbbaca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbaca0 size=112 callers=0 calls=0
*/
void sub_bbaca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbaca0ULL || rel >= 0xbbad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbad10 size=112 callers=0 calls=0
*/
void sub_bbad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbad10ULL || rel >= 0xbbad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbad80 size=112 callers=0 calls=0
*/
void sub_bbad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbad80ULL || rel >= 0xbbadf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbadf0 size=112 callers=0 calls=0
*/
void sub_bbadf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbadf0ULL || rel >= 0xbbae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbae60 size=112 callers=0 calls=0
*/
void sub_bbae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbae60ULL || rel >= 0xbbaed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbaed0 size=112 callers=0 calls=0
*/
void sub_bbaed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbaed0ULL || rel >= 0xbbaf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbaf40 size=1568 callers=0 calls=14
   calls: C_button_confirm, OptionBar_4, anime_detail_switch, sub_67b990, sub_ba3800, sub_ba4690, sub_ba52f0, sub_ba7c60, sub_ba7cd0, sub_ba7d40, sub_ba8da0, sub_bbd0f0
   ... +2 more
   ref: ViewTop
   ref: ViewSelect
   ref: OrganizeLocalComp
*/
void OrganizeLocalComp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbaf40ULL || rel >= 0xbbb560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbb560 size=928 callers=0 calls=15
   calls: sub_ba4690, sub_ba7290, sub_bba800, sub_bbab40, sub_bbb900, sub_bbc000, sub_e76a20, sub_e7a2e0, sub_e80580, sub_eb6230, sub_eb6530, sub_eb7730
   ... +3 more
*/
void sub_bbb560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbb560ULL || rel >= 0xbbb900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbb900 size=1776 callers=8 calls=20
   calls: C_button_confirm, L_co_top_detail_00_2, L_co_top_detail_00_3, L_co_top_detail_01_2, L_co_top_detail_01_3, L_co_top_detail_03_2, L_co_top_detail_03_3, L_co_top_detail_05_2, sub_67b990, sub_67bc30, sub_67bdc0, sub_7c2280
   ... +8 more
*/
void sub_bbb900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbb900ULL || rel >= 0xbbbff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbbff0 size=16 callers=0 calls=0
*/
void sub_bbbff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbbff0ULL || rel >= 0xbbc000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbc000 size=432 callers=2 calls=3
   calls: sub_ba4690, sub_bbd240, sub_e807f0
*/
void sub_bbc000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbc000ULL || rel >= 0xbbc1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbc1b0 size=336 callers=0 calls=7
   calls: sub_ba7290, sub_bbab40, sub_e80580, sub_e806b0, sub_e807f0, sub_eb6230, switch_fn_2
*/
void sub_bbc1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbc1b0ULL || rel >= 0xbbc300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbc300 size=336 callers=0 calls=7
   calls: sub_ba7290, sub_bbab40, sub_e80580, sub_e806b0, sub_e807f0, sub_eb6230, switch_fn
*/
void sub_bbc300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbc300ULL || rel >= 0xbbc450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbc450 size=336 callers=0 calls=7
   calls: sub_138c980, sub_138cb20, sub_8dfff0, sub_ba3800, sub_ba4690, sub_bbc5a0, sub_e80580
*/
void sub_bbc450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbc450ULL || rel >= 0xbbc5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbc5a0 size=1104 callers=2 calls=9
   calls: sub_136b530, sub_136b580, sub_136b590, sub_136b770, sub_65c7c0, sub_67bdb0, sub_67c120, sub_8dfba0, sub_8e0250
*/
void sub_bbc5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbc5a0ULL || rel >= 0xbbc9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbc9f0 size=192 callers=0 calls=0
*/
void sub_bbc9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbc9f0ULL || rel >= 0xbbcab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbcab0 size=192 callers=0 calls=0
*/
void sub_bbcab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbcab0ULL || rel >= 0xbbcb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbcb70 size=192 callers=0 calls=0
*/
void sub_bbcb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbcb70ULL || rel >= 0xbbcc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbcc30 size=192 callers=0 calls=0
*/
void sub_bbcc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbcc30ULL || rel >= 0xbbccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbccf0 size=192 callers=0 calls=0
*/
void sub_bbccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbccf0ULL || rel >= 0xbbcdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbcdb0 size=192 callers=0 calls=0
*/
void sub_bbcdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbcdb0ULL || rel >= 0xbbce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbce70 size=192 callers=0 calls=3
   calls: sub_ba3800, sub_ba4690, sub_e80580
*/
void sub_bbce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbce70ULL || rel >= 0xbbcf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbcf30 size=16 callers=0 calls=0
*/
void sub_bbcf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbcf30ULL || rel >= 0xbbcf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbcf40 size=16 callers=0 calls=0
*/
void sub_bbcf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbcf40ULL || rel >= 0xbbcf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbcf50 size=16 callers=0 calls=0
*/
void sub_bbcf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbcf50ULL || rel >= 0xbbcf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbcf60 size=16 callers=0 calls=0
*/
void sub_bbcf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbcf60ULL || rel >= 0xbbcf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbcf70 size=16 callers=0 calls=0
*/
void sub_bbcf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbcf70ULL || rel >= 0xbbcf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbcf80 size=16 callers=0 calls=0
*/
void sub_bbcf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbcf80ULL || rel >= 0xbbcf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbcf90 size=16 callers=0 calls=0
*/
void sub_bbcf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbcf90ULL || rel >= 0xbbcfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbcfa0 size=288 callers=0 calls=3
   calls: sub_ba3800, sub_ba4690, sub_ba8de0
*/
void sub_bbcfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbcfa0ULL || rel >= 0xbbd0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd0c0 size=16 callers=0 calls=0
*/
void sub_bbd0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd0c0ULL || rel >= 0xbbd0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd0d0 size=16 callers=0 calls=0
*/
void sub_bbd0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd0d0ULL || rel >= 0xbbd0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd0e0 size=16 callers=0 calls=0
*/
void sub_bbd0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd0e0ULL || rel >= 0xbbd0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd0f0 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_ba5440
*/
void sub_bbd0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd0f0ULL || rel >= 0xbbd240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd240 size=320 callers=1 calls=2
   calls: sub_1311c60, sub_67d450
*/
void sub_bbd240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd240ULL || rel >= 0xbbd380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd380 size=64 callers=0 calls=1
   calls: sub_bbb900
*/
void sub_bbd380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd380ULL || rel >= 0xbbd3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd3c0 size=16 callers=0 calls=0
*/
void sub_bbd3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd3c0ULL || rel >= 0xbbd3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd3d0 size=16 callers=0 calls=0
*/
void sub_bbd3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd3d0ULL || rel >= 0xbbd3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd3e0 size=16 callers=0 calls=0
*/
void sub_bbd3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd3e0ULL || rel >= 0xbbd3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd3f0 size=304 callers=0 calls=7
   calls: sub_ba3800, sub_ba4690, sub_ba7290, sub_bbab40, sub_bbb900, sub_e80580, sub_eb6230
*/
void sub_bbd3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd3f0ULL || rel >= 0xbbd520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd520 size=16 callers=0 calls=0
*/
void sub_bbd520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd520ULL || rel >= 0xbbd530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd530 size=16 callers=0 calls=0
*/
void sub_bbd530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd530ULL || rel >= 0xbbd540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd540 size=16 callers=0 calls=0
*/
void sub_bbd540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd540ULL || rel >= 0xbbd550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd550 size=128 callers=0 calls=5
   calls: sub_ba7290, sub_bbab40, sub_bbb900, sub_e80580, sub_eb6230
*/
void sub_bbd550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd550ULL || rel >= 0xbbd5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd5d0 size=16 callers=0 calls=0
*/
void sub_bbd5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd5d0ULL || rel >= 0xbbd5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd5e0 size=16 callers=0 calls=0
*/
void sub_bbd5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd5e0ULL || rel >= 0xbbd5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd5f0 size=16 callers=0 calls=0
*/
void sub_bbd5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd5f0ULL || rel >= 0xbbd600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd600 size=272 callers=0 calls=7
   calls: sub_ba3800, sub_ba4690, sub_ba7290, sub_bbab40, sub_bbb900, sub_e80580, sub_eb6230
*/
void sub_bbd600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd600ULL || rel >= 0xbbd710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd710 size=16 callers=0 calls=0
*/
void sub_bbd710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd710ULL || rel >= 0xbbd720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd720 size=16 callers=0 calls=0
*/
void sub_bbd720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd720ULL || rel >= 0xbbd730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd730 size=16 callers=0 calls=0
*/
void sub_bbd730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd730ULL || rel >= 0xbbd740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd740 size=128 callers=0 calls=5
   calls: sub_ba7290, sub_bbab40, sub_bbb900, sub_e80580, sub_eb6230
*/
void sub_bbd740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd740ULL || rel >= 0xbbd7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd7c0 size=16 callers=0 calls=0
*/
void sub_bbd7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd7c0ULL || rel >= 0xbbd7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd7d0 size=16 callers=0 calls=0
*/
void sub_bbd7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd7d0ULL || rel >= 0xbbd7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd7e0 size=16 callers=0 calls=0
*/
void sub_bbd7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd7e0ULL || rel >= 0xbbd7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbd7f0 size=1568 callers=0 calls=14
   calls: C_button_confirm, OptionBar_4, anime_detail_switch, sub_67b990, sub_ba3800, sub_ba4690, sub_ba52f0, sub_ba7c60, sub_ba7cd0, sub_ba7d40, sub_ba8da0, sub_bbd0f0
   ... +2 more
   ref: OrganizeInternetComp
   ref: ViewTop
   ref: ViewSelect
*/
void OrganizeInternetComp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd7f0ULL || rel >= 0xbbde10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbde10 size=1072 callers=0 calls=16
   calls: sub_ba4690, sub_ba7290, sub_bba800, sub_bbab40, sub_bbc000, sub_bbe240, sub_bbe9f0, sub_e76a20, sub_e7a2e0, sub_e80580, sub_eb6230, sub_eb6530
   ... +4 more
*/
void sub_bbde10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbde10ULL || rel >= 0xbbe240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbe240 size=1952 callers=11 calls=22
   calls: C_button_confirm, L_co_top_detail_00_2, L_co_top_detail_00_3, L_co_top_detail_01_2, L_co_top_detail_01_3, L_co_top_detail_02_2, L_co_top_detail_03_2, L_co_top_detail_03_3, L_co_top_detail_04_2, L_co_top_detail_05_2, sub_67b990, sub_67bc30
   ... +10 more
*/
void sub_bbe240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbe240ULL || rel >= 0xbbe9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbe9e0 size=16 callers=0 calls=0
*/
void sub_bbe9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbe9e0ULL || rel >= 0xbbe9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbe9f0 size=432 callers=2 calls=3
   calls: sub_ba4690, sub_bbfac0, sub_e807f0
*/
void sub_bbe9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbe9f0ULL || rel >= 0xbbeba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbeba0 size=400 callers=0 calls=10
   calls: InstanceTable_431, pointer, sub_15b7a70, sub_15b8290, sub_6a4d50, sub_ba7290, sub_e80580, sub_e806b0, sub_e807f0, sub_eb6230
*/
void sub_bbeba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbeba0ULL || rel >= 0xbbed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbed30 size=336 callers=0 calls=7
   calls: sub_ba7290, sub_bbab40, sub_e80580, sub_e806b0, sub_e807f0, sub_eb6230, switch_fn_2
*/
void sub_bbed30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbed30ULL || rel >= 0xbbee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbee80 size=864 callers=0 calls=10
   calls: T_co_date_00, sub_ba3800, sub_ba4690, sub_ba7290, sub_bbab40, sub_e80580, sub_e806b0, sub_e807f0, sub_eb6230, switch_fn
*/
void sub_bbee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbee80ULL || rel >= 0xbbf1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf1e0 size=208 callers=0 calls=4
   calls: sub_ba3800, sub_ba4690, sub_bbc5a0, sub_e80580
*/
void sub_bbf1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf1e0ULL || rel >= 0xbbf2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf2b0 size=192 callers=0 calls=0
*/
void sub_bbf2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf2b0ULL || rel >= 0xbbf370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf370 size=192 callers=0 calls=0
*/
void sub_bbf370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf370ULL || rel >= 0xbbf430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf430 size=192 callers=0 calls=0
*/
void sub_bbf430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf430ULL || rel >= 0xbbf4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf4f0 size=192 callers=0 calls=0
*/
void sub_bbf4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf4f0ULL || rel >= 0xbbf5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf5b0 size=192 callers=0 calls=0
*/
void sub_bbf5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf5b0ULL || rel >= 0xbbf670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf670 size=192 callers=0 calls=0
*/
void sub_bbf670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf670ULL || rel >= 0xbbf730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf730 size=192 callers=0 calls=3
   calls: sub_ba3800, sub_ba4690, sub_e80580
*/
void sub_bbf730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf730ULL || rel >= 0xbbf7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf7f0 size=16 callers=0 calls=0
*/
void sub_bbf7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf7f0ULL || rel >= 0xbbf800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf800 size=16 callers=0 calls=0
*/
void sub_bbf800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf800ULL || rel >= 0xbbf810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf810 size=16 callers=0 calls=0
*/
void sub_bbf810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf810ULL || rel >= 0xbbf820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf820 size=16 callers=0 calls=0
*/
void sub_bbf820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf820ULL || rel >= 0xbbf830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf830 size=16 callers=0 calls=0
*/
void sub_bbf830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf830ULL || rel >= 0xbbf840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf840 size=16 callers=0 calls=0
*/
void sub_bbf840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf840ULL || rel >= 0xbbf850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf850 size=16 callers=0 calls=0
*/
void sub_bbf850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf850ULL || rel >= 0xbbf860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbf860 size=448 callers=0 calls=4
   calls: sub_ba3800, sub_ba4690, sub_ba8de0, sub_bbe9f0
*/
void sub_bbf860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbf860ULL || rel >= 0xbbfa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfa20 size=16 callers=0 calls=0
*/
void sub_bbfa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfa20ULL || rel >= 0xbbfa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfa30 size=16 callers=0 calls=0
*/
void sub_bbfa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfa30ULL || rel >= 0xbbfa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfa40 size=16 callers=0 calls=0
*/
void sub_bbfa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfa40ULL || rel >= 0xbbfa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfa50 size=64 callers=0 calls=1
   calls: sub_bbe240
*/
void sub_bbfa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfa50ULL || rel >= 0xbbfa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfa90 size=16 callers=0 calls=0
*/
void sub_bbfa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfa90ULL || rel >= 0xbbfaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfaa0 size=16 callers=0 calls=0
*/
void sub_bbfaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfaa0ULL || rel >= 0xbbfab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfab0 size=16 callers=0 calls=0
*/
void sub_bbfab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfab0ULL || rel >= 0xbbfac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfac0 size=352 callers=1 calls=2
   calls: sub_1311c60, sub_67d450
*/
void sub_bbfac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfac0ULL || rel >= 0xbbfc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfc20 size=224 callers=0 calls=4
   calls: sub_ba3800, sub_ba4690, sub_bbaa90, sub_bbe240
*/
void sub_bbfc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfc20ULL || rel >= 0xbbfd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfd00 size=16 callers=0 calls=0
*/
void sub_bbfd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfd00ULL || rel >= 0xbbfd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfd10 size=16 callers=0 calls=0
*/
void sub_bbfd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfd10ULL || rel >= 0xbbfd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfd20 size=16 callers=0 calls=0
*/
void sub_bbfd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfd20ULL || rel >= 0xbbfd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfd30 size=304 callers=0 calls=7
   calls: sub_ba3800, sub_ba4690, sub_ba7290, sub_bbab40, sub_bbe240, sub_e80580, sub_eb6230
*/
void sub_bbfd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfd30ULL || rel >= 0xbbfe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfe60 size=16 callers=0 calls=0
*/
void sub_bbfe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfe60ULL || rel >= 0xbbfe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfe70 size=16 callers=0 calls=0
*/
void sub_bbfe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfe70ULL || rel >= 0xbbfe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfe80 size=16 callers=0 calls=0
*/
void sub_bbfe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfe80ULL || rel >= 0xbbfe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbfe90 size=128 callers=0 calls=5
   calls: sub_ba7290, sub_bbab40, sub_bbe240, sub_e80580, sub_eb6230
*/
void sub_bbfe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbfe90ULL || rel >= 0xbbff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbff10 size=16 callers=0 calls=0
*/
void sub_bbff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbff10ULL || rel >= 0xbbff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbff20 size=16 callers=0 calls=0
*/
void sub_bbff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbff20ULL || rel >= 0xbbff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbff30 size=16 callers=0 calls=0
*/
void sub_bbff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbff30ULL || rel >= 0xbbff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bbff40 size=304 callers=0 calls=7
   calls: sub_ba3800, sub_ba4690, sub_ba7290, sub_bbab40, sub_bbe240, sub_e80580, sub_eb6230
*/
void sub_bbff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbff40ULL || rel >= 0xbc0070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0070 size=16 callers=0 calls=0
*/
void sub_bc0070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0070ULL || rel >= 0xbc0080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0080 size=16 callers=0 calls=0
*/
void sub_bc0080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0080ULL || rel >= 0xbc0090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0090 size=16 callers=0 calls=0
*/
void sub_bc0090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0090ULL || rel >= 0xbc00a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc00a0 size=128 callers=0 calls=5
   calls: sub_ba7290, sub_bbab40, sub_bbe240, sub_e80580, sub_eb6230
*/
void sub_bc00a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc00a0ULL || rel >= 0xbc0120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0120 size=16 callers=0 calls=0
*/
void sub_bc0120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0120ULL || rel >= 0xbc0130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0130 size=16 callers=0 calls=0
*/
void sub_bc0130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0130ULL || rel >= 0xbc0140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0140 size=16 callers=0 calls=0
*/
void sub_bc0140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0140ULL || rel >= 0xbc0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0150 size=272 callers=0 calls=7
   calls: sub_ba3800, sub_ba4690, sub_ba7290, sub_bbab40, sub_bbe240, sub_e80580, sub_eb6230
*/
void sub_bc0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0150ULL || rel >= 0xbc0260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0260 size=16 callers=0 calls=0
*/
void sub_bc0260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0260ULL || rel >= 0xbc0270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0270 size=16 callers=0 calls=0
*/
void sub_bc0270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0270ULL || rel >= 0xbc0280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0280 size=16 callers=0 calls=0
*/
void sub_bc0280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0280ULL || rel >= 0xbc0290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0290 size=128 callers=0 calls=5
   calls: sub_ba7290, sub_bbab40, sub_bbe240, sub_e80580, sub_eb6230
*/
void sub_bc0290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0290ULL || rel >= 0xbc0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0310 size=16 callers=0 calls=0
*/
void sub_bc0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0310ULL || rel >= 0xbc0320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0320 size=16 callers=0 calls=0
*/
void sub_bc0320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0320ULL || rel >= 0xbc0330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0330 size=16 callers=0 calls=0
*/
void sub_bc0330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0330ULL || rel >= 0xbc0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0340 size=1680 callers=1 calls=11
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d12d0, sub_5d1b50, sub_5d1ea0, sub_5d2070, sub_5ecb70, sub_65d700, sub_bc0a10, sub_bc0b00, sub_c15100
*/
void sub_bc0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0340ULL || rel >= 0xbc09d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc09d0 size=48 callers=0 calls=0
*/
void sub_bc09d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc09d0ULL || rel >= 0xbc0a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0a00 size=16 callers=0 calls=0
*/
void sub_bc0a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0a00ULL || rel >= 0xbc0a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0a10 size=240 callers=6 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2010, sub_bc6640
*/
void sub_bc0a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0a10ULL || rel >= 0xbc0b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0b00 size=304 callers=4 calls=2
   calls: sub_136b580, sub_bc52a0
*/
void sub_bc0b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0b00ULL || rel >= 0xbc0c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0c30 size=608 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_bc0c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0c30ULL || rel >= 0xbc0e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0e90 size=16 callers=0 calls=0
*/
void sub_bc0e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0e90ULL || rel >= 0xbc0ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0ea0 size=16 callers=0 calls=0
*/
void sub_bc0ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0ea0ULL || rel >= 0xbc0eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0eb0 size=16 callers=0 calls=0
*/
void sub_bc0eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0eb0ULL || rel >= 0xbc0ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0ec0 size=16 callers=0 calls=0
*/
void sub_bc0ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0ec0ULL || rel >= 0xbc0ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0ed0 size=16 callers=0 calls=0
*/
void sub_bc0ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0ed0ULL || rel >= 0xbc0ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0ee0 size=192 callers=1 calls=2
   calls: sub_5cf8f0, sub_5d2010
*/
void sub_bc0ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0ee0ULL || rel >= 0xbc0fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc0fa0 size=2080 callers=1 calls=11
   calls: sub_140ae90, sub_5dd790, sub_5e2930, sub_5e6180, sub_76d200, sub_8c2f40, sub_bc4ff0, sub_bc52a0, sub_c160c0, sub_c17320, sub_c49fc0
   ref: bin/archive/demo/%s.gfpak
*/
void unnamed_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc0fa0ULL || rel >= 0xbc17c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc17c0 size=1232 callers=0 calls=12
   calls: sub_5d99d0, sub_967240, sub_986200, sub_bc1c90, sub_bc2290, sub_bc2530, sub_bc27d0, sub_bc4b30, sub_bc4dd0, sub_bc7710, sub_bc7de0, sub_c18300
*/
void sub_bc17c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc17c0ULL || rel >= 0xbc1c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc1c90 size=1536 callers=1 calls=1
   calls: sub_bc4ff0
*/
void sub_bc1c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc1c90ULL || rel >= 0xbc2290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc2290 size=672 callers=74 calls=1
   calls: sub_bc6da0
*/
void sub_bc2290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc2290ULL || rel >= 0xbc2530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc2530 size=672 callers=103 calls=1
   calls: sub_bc7170
*/
void sub_bc2530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc2530ULL || rel >= 0xbc27d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc27d0 size=9056 callers=1 calls=97
   calls: sub_bc8af0, sub_bc8cb0, sub_bc8de0, sub_bc8f40, sub_bc9080, sub_bc9230, sub_bc9460, sub_bc9620, sub_bc9730, sub_bc9840, sub_bc9950, sub_bc9a60
   ... +85 more
*/
void sub_bc27d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc27d0ULL || rel >= 0xbc4b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc4b30 size=672 callers=1 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2010, sub_5d2070, sub_bc83b0
*/
void sub_bc4b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc4b30ULL || rel >= 0xbc4dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc4dd0 size=544 callers=2 calls=1
   calls: sub_bc8a00
*/
void sub_bc4dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc4dd0ULL || rel >= 0xbc4ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc4ff0 size=688 callers=5 calls=1
   calls: sub_bc7fe0
*/
void sub_bc4ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc4ff0ULL || rel >= 0xbc52a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc52a0 size=688 callers=8 calls=1
   calls: sub_bc7fe0
*/
void sub_bc52a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc52a0ULL || rel >= 0xbc5550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc5550 size=480 callers=0 calls=4
   calls: sub_64b100, sub_bc7540, sub_be55a0, sub_eb52f0
*/
void sub_bc5550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc5550ULL || rel >= 0xbc5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc5730 size=32 callers=1 calls=0
*/
void sub_bc5730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc5730ULL || rel >= 0xbc5750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc5750 size=896 callers=0 calls=11
   calls: sub_140beb0, sub_5e2930, sub_5e3870, sub_5e6180, sub_96cde0, sub_9ad440, sub_bc6020, sub_c49fc0, sub_eafd60, sub_eb1820, sub_ee3bd0
   ref: bin/demo/res/system_resource/camera/screen_paste_cam.gfbcam
*/
void screen_paste_cam_gfbcam(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc5750ULL || rel >= 0xbc5ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc5ad0 size=496 callers=0 calls=8
   calls: sub_c178a0, sub_c18060, sub_c18230, sub_c182b0, sub_c583e0, sub_ea3d10, sub_ea4760, sub_eafd60
*/
void sub_bc5ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc5ad0ULL || rel >= 0xbc5cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc5cc0 size=864 callers=0 calls=10
   calls: sub_14a8a10, sub_14a8b70, sub_5e2bc0, sub_bc86e0, sub_be55b0, sub_c17ed0, sub_eafd60, sub_eb1680, sub_eb1810, sub_ee3bd0
*/
void sub_bc5cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc5cc0ULL || rel >= 0xbc6020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc6020 size=1152 callers=1 calls=9
   calls: nn_ldn_SetStationAcceptPolicy, sub_5cfad0, sub_5f19d0, sub_6032f0, sub_6323a0, sub_637e80, sub_9a5290, sub_bc7540, sub_c18300
*/
void sub_bc6020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc6020ULL || rel >= 0xbc64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc64a0 size=64 callers=7 calls=1
   calls: sub_c182b0
*/
void sub_bc64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc64a0ULL || rel >= 0xbc64e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc64e0 size=16 callers=7 calls=0
*/
void sub_bc64e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc64e0ULL || rel >= 0xbc64f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc64f0 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_bc64f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc64f0ULL || rel >= 0xbc6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc6560 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_bc6560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc6560ULL || rel >= 0xbc65d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc65d0 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_bc65d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc65d0ULL || rel >= 0xbc6640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc6640 size=400 callers=1 calls=4
   calls: sub_5d12d0, sub_5d1b50, sub_5d1ea0, sub_5ecb70
*/
void sub_bc6640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc6640ULL || rel >= 0xbc67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc67d0 size=144 callers=0 calls=0
*/
void sub_bc67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc67d0ULL || rel >= 0xbc6860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc6860 size=144 callers=0 calls=0
*/
void sub_bc6860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc6860ULL || rel >= 0xbc68f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc68f0 size=176 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_bc68f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc68f0ULL || rel >= 0xbc69a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc69a0 size=32 callers=0 calls=0
*/
void sub_bc69a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc69a0ULL || rel >= 0xbc69c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc69c0 size=160 callers=0 calls=0
*/
void sub_bc69c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc69c0ULL || rel >= 0xbc6a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc6a60 size=160 callers=0 calls=0
*/
void sub_bc6a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc6a60ULL || rel >= 0xbc6b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc6b00 size=176 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_bc6b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc6b00ULL || rel >= 0xbc6bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc6bb0 size=176 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_bc6bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc6bb0ULL || rel >= 0xbc6c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc6c60 size=160 callers=0 calls=0
*/
void sub_bc6c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc6c60ULL || rel >= 0xbc6d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc6d00 size=160 callers=0 calls=0
*/
void sub_bc6d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc6d00ULL || rel >= 0xbc6da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc6da0 size=272 callers=1 calls=0
*/
void sub_bc6da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc6da0ULL || rel >= 0xbc6eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc6eb0 size=704 callers=0 calls=0
*/
void sub_bc6eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc6eb0ULL || rel >= 0xbc7170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7170 size=272 callers=1 calls=0
*/
void sub_bc7170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7170ULL || rel >= 0xbc7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7280 size=704 callers=0 calls=0
*/
void sub_bc7280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7280ULL || rel >= 0xbc7540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7540 size=304 callers=14 calls=0
*/
void sub_bc7540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7540ULL || rel >= 0xbc7670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7670 size=16 callers=0 calls=0
*/
void sub_bc7670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7670ULL || rel >= 0xbc7680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7680 size=16 callers=0 calls=0
*/
void sub_bc7680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7680ULL || rel >= 0xbc7690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7690 size=16 callers=0 calls=0
*/
void sub_bc7690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7690ULL || rel >= 0xbc76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc76a0 size=32 callers=0 calls=0
*/
void sub_bc76a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc76a0ULL || rel >= 0xbc76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc76c0 size=16 callers=0 calls=0
*/
void sub_bc76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc76c0ULL || rel >= 0xbc76d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc76d0 size=32 callers=0 calls=0
*/
void sub_bc76d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc76d0ULL || rel >= 0xbc76f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc76f0 size=32 callers=0 calls=0
*/
void sub_bc76f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc76f0ULL || rel >= 0xbc7710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7710 size=400 callers=1 calls=2
   calls: sub_5db1b0, sub_bc7be0
*/
void sub_bc7710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7710ULL || rel >= 0xbc78a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc78a0 size=352 callers=0 calls=0
*/
void sub_bc78a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc78a0ULL || rel >= 0xbc7a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7a00 size=16 callers=0 calls=0
*/
void sub_bc7a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7a00ULL || rel >= 0xbc7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7a10 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_bc7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7a10ULL || rel >= 0xbc7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7a80 size=16 callers=0 calls=0
*/
void sub_bc7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7a80ULL || rel >= 0xbc7a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7a90 size=16 callers=0 calls=0
*/
void sub_bc7a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7a90ULL || rel >= 0xbc7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7aa0 size=16 callers=0 calls=0
*/
void sub_bc7aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7aa0ULL || rel >= 0xbc7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7ab0 size=16 callers=0 calls=0
*/
void sub_bc7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7ab0ULL || rel >= 0xbc7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7ac0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_bc7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7ac0ULL || rel >= 0xbc7b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7b30 size=16 callers=0 calls=0
*/
void sub_bc7b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7b30ULL || rel >= 0xbc7b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7b40 size=16 callers=0 calls=0
*/
void sub_bc7b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7b40ULL || rel >= 0xbc7b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7b50 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_bc7b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7b50ULL || rel >= 0xbc7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7bc0 size=16 callers=0 calls=0
*/
void sub_bc7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7bc0ULL || rel >= 0xbc7bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7bd0 size=16 callers=0 calls=0
*/
void sub_bc7bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7bd0ULL || rel >= 0xbc7be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7be0 size=512 callers=1 calls=0
*/
void sub_bc7be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7be0ULL || rel >= 0xbc7de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7de0 size=512 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_bc7de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7de0ULL || rel >= 0xbc7fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc7fe0 size=272 callers=2 calls=0
*/
void sub_bc7fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7fe0ULL || rel >= 0xbc80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc80f0 size=704 callers=0 calls=0
*/
void sub_bc80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc80f0ULL || rel >= 0xbc83b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc83b0 size=336 callers=1 calls=0
*/
void sub_bc83b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc83b0ULL || rel >= 0xbc8500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc8500 size=480 callers=0 calls=0
*/
void sub_bc8500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc8500ULL || rel >= 0xbc86e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc86e0 size=800 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_bc86e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc86e0ULL || rel >= 0xbc8a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc8a00 size=240 callers=317 calls=0
*/
void sub_bc8a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc8a00ULL || rel >= 0xbc8af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc8af0 size=448 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bc8af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc8af0ULL || rel >= 0xbc8cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc8cb0 size=304 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bc8cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc8cb0ULL || rel >= 0xbc8de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc8de0 size=352 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bc8de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc8de0ULL || rel >= 0xbc8f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc8f40 size=320 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bc8f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc8f40ULL || rel >= 0xbc9080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9080 size=432 callers=1 calls=2
   calls: sub_65d700, sub_be50b0
*/
void sub_bc9080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9080ULL || rel >= 0xbc9230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9230 size=560 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bc9230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9230ULL || rel >= 0xbc9460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9460 size=448 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bc9460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9460ULL || rel >= 0xbc9620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9620 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bc9620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9620ULL || rel >= 0xbc9730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9730 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bc9730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9730ULL || rel >= 0xbc9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9840 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bc9840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9840ULL || rel >= 0xbc9950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9950 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bc9950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9950ULL || rel >= 0xbc9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9a60 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bc9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9a60ULL || rel >= 0xbc9b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9b70 size=16 callers=0 calls=0
*/
void sub_bc9b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9b70ULL || rel >= 0xbc9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9b80 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bc9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9b80ULL || rel >= 0xbc9bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9bf0 size=32 callers=0 calls=0
*/
void sub_bc9bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9bf0ULL || rel >= 0xbc9c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9c10 size=144 callers=0 calls=1
   calls: sub_be6ec0
*/
void sub_bc9c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9c10ULL || rel >= 0xbc9ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9ca0 size=16 callers=0 calls=0
*/
void sub_bc9ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9ca0ULL || rel >= 0xbc9cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9cb0 size=16 callers=0 calls=0
*/
void sub_bc9cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9cb0ULL || rel >= 0xbc9cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9cc0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bc9cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9cc0ULL || rel >= 0xbc9d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9d30 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bc9d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9d30ULL || rel >= 0xbc9da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9da0 size=16 callers=0 calls=0
*/
void sub_bc9da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9da0ULL || rel >= 0xbc9db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9db0 size=16 callers=0 calls=0
*/
void sub_bc9db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9db0ULL || rel >= 0xbc9dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9dc0 size=16 callers=0 calls=0
*/
void sub_bc9dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9dc0ULL || rel >= 0xbc9dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9dd0 size=16 callers=0 calls=0
*/
void sub_bc9dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9dd0ULL || rel >= 0xbc9de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9de0 size=16 callers=0 calls=0
*/
void sub_bc9de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9de0ULL || rel >= 0xbc9df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9df0 size=16 callers=0 calls=0
*/
void sub_bc9df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9df0ULL || rel >= 0xbc9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9e00 size=16 callers=0 calls=0
*/
void sub_bc9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9e00ULL || rel >= 0xbc9e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9e10 size=16 callers=0 calls=0
*/
void sub_bc9e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9e10ULL || rel >= 0xbc9e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9e20 size=16 callers=0 calls=0
*/
void sub_bc9e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9e20ULL || rel >= 0xbc9e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9e30 size=16 callers=0 calls=0
*/
void sub_bc9e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9e30ULL || rel >= 0xbc9e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9e40 size=16 callers=0 calls=0
*/
void sub_bc9e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9e40ULL || rel >= 0xbc9e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9e50 size=16 callers=0 calls=0
*/
void sub_bc9e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9e50ULL || rel >= 0xbc9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9e60 size=16 callers=0 calls=0
*/
void sub_bc9e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9e60ULL || rel >= 0xbc9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9e70 size=16 callers=0 calls=0
*/
void sub_bc9e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9e70ULL || rel >= 0xbc9e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bc9e80 size=464 callers=0 calls=4
   calls: sub_59a4f0, sub_607750, sub_b471c0, sub_be7240
*/
void sub_bc9e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc9e80ULL || rel >= 0xbca050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca050 size=16 callers=0 calls=0
*/
void sub_bca050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca050ULL || rel >= 0xbca060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca060 size=16 callers=0 calls=0
*/
void sub_bca060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca060ULL || rel >= 0xbca070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca070 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bca070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca070ULL || rel >= 0xbca180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca180 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bca180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca180ULL || rel >= 0xbca290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca290 size=16 callers=0 calls=0
*/
void sub_bca290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca290ULL || rel >= 0xbca2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca2a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bca2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca2a0ULL || rel >= 0xbca310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca310 size=16 callers=0 calls=0
*/
void sub_bca310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca310ULL || rel >= 0xbca320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca320 size=128 callers=0 calls=0
*/
void sub_bca320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca320ULL || rel >= 0xbca3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca3a0 size=16 callers=0 calls=0
*/
void sub_bca3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca3a0ULL || rel >= 0xbca3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca3b0 size=16 callers=0 calls=0
*/
void sub_bca3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca3b0ULL || rel >= 0xbca3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca3c0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bca3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca3c0ULL || rel >= 0xbca430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca430 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bca430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca430ULL || rel >= 0xbca4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca4a0 size=16 callers=0 calls=0
*/
void sub_bca4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca4a0ULL || rel >= 0xbca4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca4b0 size=16 callers=0 calls=0
*/
void sub_bca4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca4b0ULL || rel >= 0xbca4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca4c0 size=16 callers=0 calls=0
*/
void sub_bca4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca4c0ULL || rel >= 0xbca4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca4d0 size=16 callers=0 calls=0
*/
void sub_bca4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca4d0ULL || rel >= 0xbca4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca4e0 size=768 callers=0 calls=7
   calls: sub_607750, sub_b4c060, sub_b95620, sub_b981b0, sub_bc2290, sub_bca8b0, sub_be7240
*/
void sub_bca4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca4e0ULL || rel >= 0xbca7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca7e0 size=208 callers=5 calls=2
   calls: sub_bc2290, sub_bca8b0
*/
void sub_bca7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca7e0ULL || rel >= 0xbca8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bca8b0 size=464 callers=267 calls=0
*/
void sub_bca8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbca8b0ULL || rel >= 0xbcaa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcaa80 size=16 callers=0 calls=0
*/
void sub_bcaa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcaa80ULL || rel >= 0xbcaa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcaa90 size=16 callers=0 calls=0
*/
void sub_bcaa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcaa90ULL || rel >= 0xbcaaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcaaa0 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bcaaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcaaa0ULL || rel >= 0xbcabb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcabb0 size=16 callers=0 calls=0
*/
void sub_bcabb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcabb0ULL || rel >= 0xbcabc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcabc0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcabc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcabc0ULL || rel >= 0xbcac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcac30 size=64 callers=0 calls=1
   calls: sub_140bca0
*/
void sub_bcac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcac30ULL || rel >= 0xbcac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcac70 size=208 callers=0 calls=0
*/
void sub_bcac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcac70ULL || rel >= 0xbcad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcad40 size=16 callers=0 calls=0
*/
void sub_bcad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcad40ULL || rel >= 0xbcad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcad50 size=16 callers=0 calls=0
*/
void sub_bcad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcad50ULL || rel >= 0xbcad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcad60 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcad60ULL || rel >= 0xbcadd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcadd0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcadd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcadd0ULL || rel >= 0xbcae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcae40 size=16 callers=0 calls=0
*/
void sub_bcae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcae40ULL || rel >= 0xbcae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcae50 size=16 callers=0 calls=0
*/
void sub_bcae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcae50ULL || rel >= 0xbcae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcae60 size=128 callers=0 calls=2
   calls: sub_bc2530, sub_bca8b0
*/
void sub_bcae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcae60ULL || rel >= 0xbcaee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcaee0 size=16 callers=0 calls=0
*/
void sub_bcaee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcaee0ULL || rel >= 0xbcaef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcaef0 size=192 callers=14 calls=2
   calls: sub_bc2530, sub_bca8b0
*/
void sub_bcaef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcaef0ULL || rel >= 0xbcafb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcafb0 size=16 callers=0 calls=0
*/
void sub_bcafb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcafb0ULL || rel >= 0xbcafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcafc0 size=16 callers=0 calls=0
*/
void sub_bcafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcafc0ULL || rel >= 0xbcafd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcafd0 size=448 callers=0 calls=2
   calls: sub_bc2530, sub_bca8b0
*/
void sub_bcafd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcafd0ULL || rel >= 0xbcb190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb190 size=16 callers=0 calls=0
*/
void sub_bcb190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb190ULL || rel >= 0xbcb1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb1a0 size=16 callers=0 calls=0
*/
void sub_bcb1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb1a0ULL || rel >= 0xbcb1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb1b0 size=16 callers=0 calls=0
*/
void sub_bcb1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb1b0ULL || rel >= 0xbcb1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb1c0 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bcb1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb1c0ULL || rel >= 0xbcb2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb2e0 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bcb2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb2e0ULL || rel >= 0xbcb400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb400 size=16 callers=0 calls=0
*/
void sub_bcb400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb400ULL || rel >= 0xbcb410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb410 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcb410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb410ULL || rel >= 0xbcb480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb480 size=64 callers=0 calls=1
   calls: sub_140bca0
*/
void sub_bcb480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb480ULL || rel >= 0xbcb4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb4c0 size=208 callers=0 calls=0
*/
void sub_bcb4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb4c0ULL || rel >= 0xbcb590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb590 size=16 callers=0 calls=0
*/
void sub_bcb590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb590ULL || rel >= 0xbcb5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb5a0 size=16 callers=0 calls=0
*/
void sub_bcb5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb5a0ULL || rel >= 0xbcb5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb5b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcb5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb5b0ULL || rel >= 0xbcb620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb620 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcb620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb620ULL || rel >= 0xbcb690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb690 size=16 callers=0 calls=0
*/
void sub_bcb690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb690ULL || rel >= 0xbcb6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb6a0 size=16 callers=0 calls=0
*/
void sub_bcb6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb6a0ULL || rel >= 0xbcb6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb6b0 size=128 callers=0 calls=2
   calls: sub_bc2530, sub_bca8b0
*/
void sub_bcb6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb6b0ULL || rel >= 0xbcb730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb730 size=16 callers=0 calls=0
*/
void sub_bcb730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb730ULL || rel >= 0xbcb740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb740 size=16 callers=0 calls=0
*/
void sub_bcb740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb740ULL || rel >= 0xbcb750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb750 size=16 callers=0 calls=0
*/
void sub_bcb750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb750ULL || rel >= 0xbcb760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb760 size=480 callers=0 calls=2
   calls: sub_bc2530, sub_bca8b0
*/
void sub_bcb760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb760ULL || rel >= 0xbcb940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb940 size=16 callers=0 calls=0
*/
void sub_bcb940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb940ULL || rel >= 0xbcb950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb950 size=16 callers=0 calls=0
*/
void sub_bcb950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb950ULL || rel >= 0xbcb960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb960 size=16 callers=0 calls=0
*/
void sub_bcb960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb960ULL || rel >= 0xbcb970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcb970 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bcb970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb970ULL || rel >= 0xbcba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcba80 size=464 callers=1 calls=3
   calls: sub_1c0, sub_5e6770, sub_be50b0
*/
void sub_bcba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcba80ULL || rel >= 0xbcbc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcbc50 size=112 callers=0 calls=0
*/
void sub_bcbc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcbc50ULL || rel >= 0xbcbcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcbcc0 size=112 callers=0 calls=0
*/
void sub_bcbcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcbcc0ULL || rel >= 0xbcbd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcbd30 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcbd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcbd30ULL || rel >= 0xbcbda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcbda0 size=304 callers=0 calls=6
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_5cff50, sub_5e6770
*/
void sub_bcbda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcbda0ULL || rel >= 0xbcbed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcbed0 size=336 callers=0 calls=1
   calls: sub_bcc2c0
*/
void sub_bcbed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcbed0ULL || rel >= 0xbcc020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcc020 size=112 callers=0 calls=0
*/
void sub_bcc020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcc020ULL || rel >= 0xbcc090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcc090 size=112 callers=0 calls=0
*/
void sub_bcc090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcc090ULL || rel >= 0xbcc100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcc100 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcc100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcc100ULL || rel >= 0xbcc170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcc170 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcc170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcc170ULL || rel >= 0xbcc1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcc1e0 size=112 callers=0 calls=0
*/
void sub_bcc1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcc1e0ULL || rel >= 0xbcc250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcc250 size=112 callers=0 calls=0
*/
void sub_bcc250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcc250ULL || rel >= 0xbcc2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcc2c0 size=176 callers=1 calls=3
   calls: sub_bcaef0, sub_bcc370, sub_bcc4e0
*/
void sub_bcc2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcc2c0ULL || rel >= 0xbcc370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcc370 size=368 callers=8 calls=1
   calls: sub_bc8a00
*/
void sub_bcc370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcc370ULL || rel >= 0xbcc4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcc4e0 size=368 callers=10 calls=1
   calls: sub_bc8a00
*/
void sub_bcc4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcc4e0ULL || rel >= 0xbcc650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcc650 size=16 callers=0 calls=0
*/
void sub_bcc650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcc650ULL || rel >= 0xbcc660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcc660 size=16 callers=0 calls=0
*/
void sub_bcc660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcc660ULL || rel >= 0xbcc670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcc670 size=1232 callers=0 calls=11
   calls: sub_59bee0, sub_5cfaf0, sub_5d99d0, sub_607750, sub_bc2290, sub_bc2530, sub_bca7e0, sub_bca8b0, sub_bccb40, sub_c1cf90, sub_c1d420
*/
void sub_bcc670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcc670ULL || rel >= 0xbccb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bccb40 size=224 callers=1 calls=1
   calls: sub_c1cf00
*/
void sub_bccb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbccb40ULL || rel >= 0xbccc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bccc20 size=16 callers=0 calls=0
*/
void sub_bccc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbccc20ULL || rel >= 0xbccc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bccc30 size=16 callers=0 calls=0
*/
void sub_bccc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbccc30ULL || rel >= 0xbccc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bccc40 size=160 callers=0 calls=3
   calls: sub_bc2290, sub_bca8b0, sub_bcccf0
*/
void sub_bccc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbccc40ULL || rel >= 0xbccce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bccce0 size=16 callers=0 calls=0
*/
void sub_bccce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbccce0ULL || rel >= 0xbcccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcccf0 size=656 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_bccf80
*/
void sub_bcccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcccf0ULL || rel >= 0xbccf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bccf80 size=240 callers=8 calls=1
   calls: sub_607750
*/
void sub_bccf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbccf80ULL || rel >= 0xbcd070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd070 size=16 callers=0 calls=0
*/
void sub_bcd070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd070ULL || rel >= 0xbcd080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd080 size=16 callers=0 calls=0
*/
void sub_bcd080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd080ULL || rel >= 0xbcd090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd090 size=176 callers=0 calls=3
   calls: sub_bc2290, sub_bca8b0, sub_bcccf0
*/
void sub_bcd090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd090ULL || rel >= 0xbcd140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd140 size=16 callers=0 calls=0
*/
void sub_bcd140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd140ULL || rel >= 0xbcd150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd150 size=16 callers=0 calls=0
*/
void sub_bcd150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd150ULL || rel >= 0xbcd160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd160 size=16 callers=0 calls=0
*/
void sub_bcd160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd160ULL || rel >= 0xbcd170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd170 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bcd170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd170ULL || rel >= 0xbcd280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd280 size=16 callers=0 calls=0
*/
void sub_bcd280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd280ULL || rel >= 0xbcd290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd290 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcd290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd290ULL || rel >= 0xbcd300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd300 size=16 callers=0 calls=0
*/
void sub_bcd300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd300ULL || rel >= 0xbcd310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd310 size=208 callers=0 calls=0
*/
void sub_bcd310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd310ULL || rel >= 0xbcd3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd3e0 size=16 callers=0 calls=0
*/
void sub_bcd3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd3e0ULL || rel >= 0xbcd3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd3f0 size=16 callers=0 calls=0
*/
void sub_bcd3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd3f0ULL || rel >= 0xbcd400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd400 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcd400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd400ULL || rel >= 0xbcd470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd470 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcd470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd470ULL || rel >= 0xbcd4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd4e0 size=16 callers=0 calls=0
*/
void sub_bcd4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd4e0ULL || rel >= 0xbcd4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd4f0 size=16 callers=0 calls=0
*/
void sub_bcd4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd4f0ULL || rel >= 0xbcd500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd500 size=128 callers=0 calls=2
   calls: sub_bc2530, sub_bca8b0
*/
void sub_bcd500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd500ULL || rel >= 0xbcd580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd580 size=16 callers=0 calls=0
*/
void sub_bcd580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd580ULL || rel >= 0xbcd590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd590 size=16 callers=0 calls=0
*/
void sub_bcd590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd590ULL || rel >= 0xbcd5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd5a0 size=16 callers=0 calls=0
*/
void sub_bcd5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd5a0ULL || rel >= 0xbcd5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd5b0 size=336 callers=0 calls=2
   calls: sub_bc2530, sub_bca8b0
*/
void sub_bcd5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd5b0ULL || rel >= 0xbcd700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd700 size=16 callers=0 calls=0
*/
void sub_bcd700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd700ULL || rel >= 0xbcd710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd710 size=16 callers=0 calls=0
*/
void sub_bcd710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd710ULL || rel >= 0xbcd720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd720 size=16 callers=0 calls=0
*/
void sub_bcd720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd720ULL || rel >= 0xbcd730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd730 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bcd730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd730ULL || rel >= 0xbcd850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd850 size=16 callers=0 calls=0
*/
void sub_bcd850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd850ULL || rel >= 0xbcd860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd860 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcd860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd860ULL || rel >= 0xbcd8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd8d0 size=112 callers=0 calls=1
   calls: sub_140bc80
*/
void sub_bcd8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd8d0ULL || rel >= 0xbcd940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd940 size=128 callers=0 calls=0
*/
void sub_bcd940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd940ULL || rel >= 0xbcd9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd9c0 size=16 callers=0 calls=0
*/
void sub_bcd9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd9c0ULL || rel >= 0xbcd9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd9d0 size=16 callers=0 calls=0
*/
void sub_bcd9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd9d0ULL || rel >= 0xbcd9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcd9e0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcd9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd9e0ULL || rel >= 0xbcda50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcda50 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcda50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcda50ULL || rel >= 0xbcdac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcdac0 size=16 callers=0 calls=0
*/
void sub_bcdac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcdac0ULL || rel >= 0xbcdad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcdad0 size=16 callers=0 calls=0
*/
void sub_bcdad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcdad0ULL || rel >= 0xbcdae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcdae0 size=16 callers=0 calls=0
*/
void sub_bcdae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcdae0ULL || rel >= 0xbcdaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcdaf0 size=16 callers=0 calls=0
*/
void sub_bcdaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcdaf0ULL || rel >= 0xbcdb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcdb00 size=800 callers=0 calls=2
   calls: sub_bc2530, sub_bca8b0
*/
void sub_bcdb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcdb00ULL || rel >= 0xbcde20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcde20 size=16 callers=0 calls=0
*/
void sub_bcde20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcde20ULL || rel >= 0xbcde30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcde30 size=16 callers=0 calls=0
*/
void sub_bcde30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcde30ULL || rel >= 0xbcde40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

