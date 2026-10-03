/* main functions 00309970..0032b140 (18 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00309970 size=96 callers=0 calls=0
*/
void sub_309970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x309970ULL || rel >= 0x3099d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003099d0 size=144 callers=1 calls=2
   calls: sub_382d00, sub_382d80
*/
void sub_3099d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3099d0ULL || rel >= 0x309a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00309a60 size=96 callers=1 calls=1
   calls: sub_382d80
*/
void sub_309a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x309a60ULL || rel >= 0x309ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00309ac0 size=784 callers=2 calls=4
   calls: sub_3045e0, sub_3047c0, sub_309dd0, sub_385430
*/
void sub_309ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x309ac0ULL || rel >= 0x309dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00309dd0 size=704 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_309dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x309dd0ULL || rel >= 0x30a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a090 size=48 callers=5 calls=0
*/
void sub_30a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a090ULL || rel >= 0x30a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a0c0 size=336 callers=0 calls=3
   calls: sub_306180, sub_306340, sub_3064b0
*/
void sub_30a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a0c0ULL || rel >= 0x30a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a210 size=208 callers=0 calls=4
   calls: sub_306180, sub_306340, sub_3064b0, sub_34b7c0
*/
void sub_30a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a210ULL || rel >= 0x30a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a2e0 size=176 callers=0 calls=0
*/
void sub_30a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a2e0ULL || rel >= 0x30a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a390 size=160 callers=0 calls=0
*/
void sub_30a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a390ULL || rel >= 0x30a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a430 size=176 callers=0 calls=1
   calls: sub_306990
*/
void sub_30a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a430ULL || rel >= 0x30a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a4e0 size=32 callers=0 calls=0
*/
void sub_30a4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a4e0ULL || rel >= 0x30a500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a500 size=32 callers=0 calls=0
*/
void sub_30a500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a500ULL || rel >= 0x30a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a520 size=448 callers=0 calls=3
   calls: sub_3045e0, sub_3047c0, sub_306990
*/
void sub_30a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a520ULL || rel >= 0x30a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a6e0 size=16 callers=0 calls=0
*/
void sub_30a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a6e0ULL || rel >= 0x30a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a6f0 size=32 callers=0 calls=0
*/
void sub_30a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a6f0ULL || rel >= 0x30a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a710 size=512 callers=0 calls=2
   calls: sub_39d140, sub_3b33a0
*/
void sub_30a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a710ULL || rel >= 0x30a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a910 size=16 callers=0 calls=0
*/
void sub_30a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a910ULL || rel >= 0x30a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a920 size=672 callers=2 calls=3
   calls: sub_3045e0, sub_3047c0, sub_30a920
*/
void sub_30a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a920ULL || rel >= 0x30abc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030abc0 size=128 callers=1 calls=0
*/
void sub_30abc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30abc0ULL || rel >= 0x30ac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ac40 size=112 callers=1 calls=0
*/
void sub_30ac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ac40ULL || rel >= 0x30acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030acb0 size=48 callers=1 calls=0
*/
void sub_30acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30acb0ULL || rel >= 0x30ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ace0 size=80 callers=2 calls=1
   calls: sub_3086e0
*/
void sub_30ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ace0ULL || rel >= 0x30ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ad30 size=16 callers=0 calls=0
*/
void sub_30ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ad30ULL || rel >= 0x30ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ad40 size=16 callers=0 calls=0
*/
void sub_30ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ad40ULL || rel >= 0x30ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ad50 size=16 callers=0 calls=0
*/
void sub_30ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ad50ULL || rel >= 0x30ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ad60 size=16 callers=0 calls=0
*/
void sub_30ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ad60ULL || rel >= 0x30ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ad70 size=128 callers=4 calls=1
   calls: sub_308970
*/
void sub_30ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ad70ULL || rel >= 0x30adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030adf0 size=16 callers=1 calls=0
*/
void sub_30adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30adf0ULL || rel >= 0x30ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ae00 size=16 callers=0 calls=0
*/
void sub_30ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ae00ULL || rel >= 0x30ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ae10 size=64 callers=3 calls=0
*/
void sub_30ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ae10ULL || rel >= 0x30ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ae50 size=16 callers=0 calls=0
*/
void sub_30ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ae50ULL || rel >= 0x30ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ae60 size=16 callers=0 calls=0
*/
void sub_30ae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ae60ULL || rel >= 0x30ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ae70 size=208 callers=0 calls=6
   calls: sub_30b050, sub_30b300, sub_3187b0, sub_318820, sub_3190a0, sub_319150
*/
void sub_30ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ae70ULL || rel >= 0x30af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030af40 size=64 callers=2 calls=1
   calls: sub_308e90
*/
void sub_30af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30af40ULL || rel >= 0x30af80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030af80 size=128 callers=4 calls=3
   calls: sub_3187b0, sub_318820, sub_318830
*/
void sub_30af80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30af80ULL || rel >= 0x30b000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b000 size=16 callers=2 calls=0
*/
void sub_30b000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b000ULL || rel >= 0x30b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b010 size=64 callers=1 calls=1
   calls: sub_30c140
*/
void sub_30b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b010ULL || rel >= 0x30b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b050 size=64 callers=8 calls=1
   calls: sub_30b050
*/
void sub_30b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b050ULL || rel >= 0x30b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b090 size=96 callers=1 calls=0
*/
void sub_30b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b090ULL || rel >= 0x30b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b0f0 size=528 callers=1 calls=5
   calls: sub_3047c0, sub_306c70, sub_309110, sub_309250, sub_31a1b0
*/
void sub_30b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b0f0ULL || rel >= 0x30b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b300 size=464 callers=4 calls=4
   calls: sub_30a090, sub_30e9f0, sub_30ea00, sub_30ea20
*/
void sub_30b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b300ULL || rel >= 0x30b4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b4d0 size=208 callers=3 calls=2
   calls: sub_3047c0, sub_306c70
*/
void sub_30b4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b4d0ULL || rel >= 0x30b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b5a0 size=160 callers=0 calls=2
   calls: sub_3047c0, sub_306c70
*/
void sub_30b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b5a0ULL || rel >= 0x30b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b640 size=96 callers=2 calls=1
   calls: sub_31a480
*/
void sub_30b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b640ULL || rel >= 0x30b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b6a0 size=32 callers=1 calls=0
*/
void sub_30b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b6a0ULL || rel >= 0x30b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b6c0 size=128 callers=2 calls=0
*/
void sub_30b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b6c0ULL || rel >= 0x30b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b740 size=128 callers=1 calls=2
   calls: sub_30ea00, sub_30ea20
*/
void sub_30b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b740ULL || rel >= 0x30b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b7c0 size=384 callers=1 calls=3
   calls: sub_3047c0, sub_306c70, sub_309250
*/
void sub_30b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b7c0ULL || rel >= 0x30b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b940 size=144 callers=0 calls=0
*/
void sub_30b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b940ULL || rel >= 0x30b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030b9d0 size=48 callers=1 calls=0
*/
void sub_30b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30b9d0ULL || rel >= 0x30ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ba00 size=96 callers=10 calls=1
   calls: sub_308aa0
*/
void sub_30ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ba00ULL || rel >= 0x30ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ba60 size=448 callers=0 calls=5
   calls: sub_30b300, sub_30ea20, sub_30ea40, sub_30eb10, sub_38f5d0
*/
void sub_30ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ba60ULL || rel >= 0x30bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030bc20 size=208 callers=1 calls=2
   calls: sub_331150, sub_3e1550
*/
void sub_30bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30bc20ULL || rel >= 0x30bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030bcf0 size=320 callers=2 calls=4
   calls: sub_3047c0, sub_308aa0, sub_3b59a0, sub_3e1580
*/
void sub_30bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30bcf0ULL || rel >= 0x30be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030be30 size=608 callers=1 calls=8
   calls: sub_308aa0, sub_308fa0, sub_3095b0, sub_3095c0, sub_3187b0, sub_318820, sub_318830, sub_3e16a0
*/
void sub_30be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30be30ULL || rel >= 0x30c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c090 size=176 callers=0 calls=2
   calls: sub_3047c0, sub_308aa0
*/
void sub_30c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c090ULL || rel >= 0x30c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c140 size=64 callers=1 calls=1
   calls: sub_30c180
*/
void sub_30c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c140ULL || rel >= 0x30c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c180 size=432 callers=1 calls=4
   calls: sub_3047c0, sub_308aa0, sub_309110, sub_309250
*/
void sub_30c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c180ULL || rel >= 0x30c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c330 size=240 callers=0 calls=5
   calls: sub_3187b0, sub_318820, sub_318de0, sub_3190a0, sub_319150
*/
void sub_30c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c330ULL || rel >= 0x30c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c420 size=272 callers=1 calls=3
   calls: sub_3047c0, sub_306dc0, sub_30c530
*/
void sub_30c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c420ULL || rel >= 0x30c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c530 size=672 callers=1 calls=10
   calls: sub_3047c0, sub_309380, sub_30a920, sub_30af80, sub_30c7f0, sub_30c8e0, sub_3187b0, sub_318820, sub_318830, sub_318980
*/
void sub_30c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c530ULL || rel >= 0x30c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c7d0 size=16 callers=1 calls=0
*/
void sub_30c7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c7d0ULL || rel >= 0x30c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c7e0 size=16 callers=0 calls=0
*/
void sub_30c7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c7e0ULL || rel >= 0x30c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c7f0 size=240 callers=1 calls=2
   calls: sub_309380, sub_3351b0
*/
void sub_30c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c7f0ULL || rel >= 0x30c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c8e0 size=512 callers=1 calls=8
   calls: sub_3045e0, sub_3047c0, sub_308aa0, sub_30af80, sub_30ea00, sub_30ea20, sub_3190a0, sub_319150
*/
void sub_30c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c8e0ULL || rel >= 0x30cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030cae0 size=448 callers=2 calls=4
   calls: sub_30cca0, sub_3187b0, sub_318820, sub_3188d0
*/
void sub_30cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30cae0ULL || rel >= 0x30cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030cca0 size=304 callers=2 calls=4
   calls: sub_3047c0, sub_30ecc0, sub_318830, sub_318980
*/
void sub_30cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30cca0ULL || rel >= 0x30cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030cdd0 size=272 callers=2 calls=5
   calls: sub_3045e0, sub_3187b0, sub_318820, sub_3190a0, sub_319150
*/
void sub_30cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30cdd0ULL || rel >= 0x30cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030cee0 size=192 callers=1 calls=2
   calls: sub_3096f0, sub_38b060
*/
void sub_30cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30cee0ULL || rel >= 0x30cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030cfa0 size=80 callers=0 calls=1
   calls: sub_309710
*/
void sub_30cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30cfa0ULL || rel >= 0x30cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030cff0 size=80 callers=0 calls=1
   calls: sub_309710
*/
void sub_30cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30cff0ULL || rel >= 0x30d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d040 size=96 callers=0 calls=1
   calls: sub_309710
*/
void sub_30d040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d040ULL || rel >= 0x30d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d0a0 size=96 callers=0 calls=2
   calls: sub_309710, sub_38b5d0
*/
void sub_30d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d0a0ULL || rel >= 0x30d100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d100 size=96 callers=0 calls=2
   calls: sub_309710, sub_38b5d0
*/
void sub_30d100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d100ULL || rel >= 0x30d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d160 size=96 callers=0 calls=2
   calls: sub_309710, sub_38b5d0
*/
void sub_30d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d160ULL || rel >= 0x30d1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d1c0 size=80 callers=0 calls=2
   calls: sub_309740, sub_31dab0
*/
void sub_30d1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d1c0ULL || rel >= 0x30d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d210 size=80 callers=0 calls=2
   calls: sub_309740, sub_31dab0
*/
void sub_30d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d210ULL || rel >= 0x30d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d260 size=48 callers=0 calls=1
   calls: sub_309730
*/
void sub_30d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d260ULL || rel >= 0x30d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d290 size=48 callers=0 calls=1
   calls: sub_309730
*/
void sub_30d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d290ULL || rel >= 0x30d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d2c0 size=16 callers=0 calls=0
*/
void sub_30d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d2c0ULL || rel >= 0x30d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d2d0 size=16 callers=0 calls=0
*/
void sub_30d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d2d0ULL || rel >= 0x30d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d2e0 size=32 callers=0 calls=0
*/
void sub_30d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d2e0ULL || rel >= 0x30d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d300 size=112 callers=3 calls=0
*/
void sub_30d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d300ULL || rel >= 0x30d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d370 size=144 callers=0 calls=1
   calls: sub_38c050
*/
void sub_30d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d370ULL || rel >= 0x30d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d400 size=144 callers=0 calls=1
   calls: sub_38c050
*/
void sub_30d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d400ULL || rel >= 0x30d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d490 size=16 callers=0 calls=0
*/
void sub_30d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d490ULL || rel >= 0x30d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d4a0 size=32 callers=0 calls=0
*/
void sub_30d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d4a0ULL || rel >= 0x30d4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d4c0 size=64 callers=0 calls=0
*/
void sub_30d4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d4c0ULL || rel >= 0x30d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d500 size=80 callers=0 calls=0
*/
void sub_30d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d500ULL || rel >= 0x30d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d550 size=16 callers=0 calls=0
*/
void sub_30d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d550ULL || rel >= 0x30d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d560 size=16 callers=0 calls=0
*/
void sub_30d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d560ULL || rel >= 0x30d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d570 size=16 callers=0 calls=0
*/
void sub_30d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d570ULL || rel >= 0x30d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d580 size=16 callers=0 calls=0
*/
void sub_30d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d580ULL || rel >= 0x30d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d590 size=16 callers=0 calls=0
*/
void sub_30d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d590ULL || rel >= 0x30d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d5a0 size=16 callers=0 calls=0
*/
void sub_30d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d5a0ULL || rel >= 0x30d5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d5b0 size=48 callers=0 calls=1
   calls: sub_38cca0
*/
void sub_30d5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d5b0ULL || rel >= 0x30d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d5e0 size=48 callers=0 calls=1
   calls: sub_38cca0
*/
void sub_30d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d5e0ULL || rel >= 0x30d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d610 size=32 callers=0 calls=0
*/
void sub_30d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d610ULL || rel >= 0x30d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d630 size=32 callers=0 calls=0
*/
void sub_30d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d630ULL || rel >= 0x30d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d650 size=240 callers=1 calls=0
*/
void sub_30d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d650ULL || rel >= 0x30d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d740 size=128 callers=0 calls=1
   calls: sub_31db50
*/
void sub_30d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d740ULL || rel >= 0x30d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d7c0 size=64 callers=0 calls=1
   calls: sub_38d590
*/
void sub_30d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d7c0ULL || rel >= 0x30d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d800 size=64 callers=0 calls=1
   calls: sub_38d590
*/
void sub_30d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d800ULL || rel >= 0x30d840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d840 size=32 callers=0 calls=0
*/
void sub_30d840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d840ULL || rel >= 0x30d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d860 size=16 callers=0 calls=0
*/
void sub_30d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d860ULL || rel >= 0x30d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d870 size=16 callers=0 calls=0
*/
void sub_30d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d870ULL || rel >= 0x30d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d880 size=16 callers=0 calls=0
*/
void sub_30d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d880ULL || rel >= 0x30d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d890 size=16 callers=0 calls=0
*/
void sub_30d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d890ULL || rel >= 0x30d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d8a0 size=16 callers=0 calls=0
*/
void sub_30d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d8a0ULL || rel >= 0x30d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d8b0 size=16 callers=0 calls=0
*/
void sub_30d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d8b0ULL || rel >= 0x30d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d8c0 size=176 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_30d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d8c0ULL || rel >= 0x30d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d970 size=176 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_30d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d970ULL || rel >= 0x30da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030da20 size=176 callers=0 calls=2
   calls: sub_3047c0, sub_3097b0
*/
void sub_30da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30da20ULL || rel >= 0x30dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030dad0 size=176 callers=0 calls=2
   calls: sub_3047c0, sub_3097b0
*/
void sub_30dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30dad0ULL || rel >= 0x30db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030db80 size=144 callers=1 calls=3
   calls: sub_3045e0, sub_309750, sub_3820f0
*/
void sub_30db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30db80ULL || rel >= 0x30dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030dc10 size=624 callers=1 calls=7
   calls: sub_3045e0, sub_3046a0, sub_304740, sub_3047c0, sub_309ac0, sub_30de80, sub_349be0
*/
void sub_30dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30dc10ULL || rel >= 0x30de80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030de80 size=336 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_30de80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30de80ULL || rel >= 0x30dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030dfd0 size=16 callers=0 calls=0
*/
void sub_30dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30dfd0ULL || rel >= 0x30dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030dfe0 size=128 callers=0 calls=0
*/
void sub_30dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30dfe0ULL || rel >= 0x30e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030e060 size=128 callers=0 calls=0
*/
void sub_30e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30e060ULL || rel >= 0x30e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030e0e0 size=192 callers=0 calls=5
   calls: sub_3045e0, sub_308aa0, sub_309380, sub_31b920, sub_31bb10
*/
void sub_30e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30e0e0ULL || rel >= 0x30e1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030e1a0 size=176 callers=2 calls=5
   calls: sub_3045e0, sub_308aa0, sub_309380, sub_319d70, sub_31a080
*/
void sub_30e1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30e1a0ULL || rel >= 0x30e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030e250 size=304 callers=0 calls=0
*/
void sub_30e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30e250ULL || rel >= 0x30e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030e380 size=240 callers=0 calls=7
   calls: sub_3045e0, sub_308aa0, sub_309110, sub_309380, sub_30ae10, sub_31b920, sub_31bb10
*/
void sub_30e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30e380ULL || rel >= 0x30e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030e470 size=48 callers=3 calls=0
*/
void sub_30e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30e470ULL || rel >= 0x30e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030e4a0 size=816 callers=4 calls=1
   calls: sub_30a090
*/
void sub_30e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30e4a0ULL || rel >= 0x30e7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030e7d0 size=160 callers=2 calls=1
   calls: sub_30e870
*/
void sub_30e7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30e7d0ULL || rel >= 0x30e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030e870 size=384 callers=1 calls=0
*/
void sub_30e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30e870ULL || rel >= 0x30e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030e9f0 size=16 callers=12 calls=0
*/
void sub_30e9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30e9f0ULL || rel >= 0x30ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ea00 size=32 callers=7 calls=0
*/
void sub_30ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ea00ULL || rel >= 0x30ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ea20 size=32 callers=15 calls=0
*/
void sub_30ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ea20ULL || rel >= 0x30ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ea40 size=208 callers=1 calls=1
   calls: sub_38f6e0
*/
void sub_30ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ea40ULL || rel >= 0x30eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030eb10 size=304 callers=1 calls=1
   calls: sub_30a090
*/
void sub_30eb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30eb10ULL || rel >= 0x30ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ec40 size=128 callers=2 calls=0
*/
void sub_30ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ec40ULL || rel >= 0x30ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ecc0 size=144 callers=1 calls=1
   calls: sub_3147a0
*/
void sub_30ecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ecc0ULL || rel >= 0x30ed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ed50 size=144 callers=0 calls=2
   calls: sub_3047c0, sub_35b640
*/
void sub_30ed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ed50ULL || rel >= 0x30ede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ede0 size=144 callers=0 calls=2
   calls: sub_3047c0, sub_35b640
*/
void sub_30ede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ede0ULL || rel >= 0x30ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ee70 size=144 callers=0 calls=3
   calls: sub_3047c0, sub_3150f0, sub_35b640
*/
void sub_30ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ee70ULL || rel >= 0x30ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ef00 size=144 callers=0 calls=3
   calls: sub_3047c0, sub_3150f0, sub_35b640
*/
void sub_30ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ef00ULL || rel >= 0x30ef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ef90 size=224 callers=1 calls=4
   calls: sub_3045e0, sub_3150a0, sub_35b620, sub_3820f0
*/
void sub_30ef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ef90ULL || rel >= 0x30f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030f070 size=432 callers=1 calls=5
   calls: sub_3045e0, sub_3047c0, sub_315290, sub_349be0, sub_35b660
*/
void sub_30f070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30f070ULL || rel >= 0x30f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030f220 size=16 callers=0 calls=0
*/
void sub_30f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30f220ULL || rel >= 0x30f230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030f230 size=32 callers=0 calls=0
*/
void sub_30f230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30f230ULL || rel >= 0x30f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030f250 size=16 callers=0 calls=0
*/
void sub_30f250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30f250ULL || rel >= 0x30f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030f260 size=96 callers=0 calls=0
*/
void sub_30f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30f260ULL || rel >= 0x30f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030f2c0 size=304 callers=0 calls=0
*/
void sub_30f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30f2c0ULL || rel >= 0x30f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030f3f0 size=192 callers=0 calls=5
   calls: sub_3045e0, sub_308aa0, sub_309380, sub_310160, sub_310340
*/
void sub_30f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30f3f0ULL || rel >= 0x30f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030f4b0 size=160 callers=0 calls=2
   calls: sub_309110, sub_30ae10
*/
void sub_30f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30f4b0ULL || rel >= 0x30f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030f550 size=96 callers=0 calls=2
   calls: sub_35c1b0, sub_382d80
*/
void sub_30f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30f550ULL || rel >= 0x30f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030f5b0 size=96 callers=0 calls=2
   calls: sub_35c1b0, sub_382d80
*/
void sub_30f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30f5b0ULL || rel >= 0x30f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030f610 size=656 callers=0 calls=6
   calls: sub_3047c0, sub_35bf90, sub_382d00, sub_382d80, sub_3baa80, sub_3baab0
*/
void sub_30f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30f610ULL || rel >= 0x30f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030f8a0 size=400 callers=0 calls=5
   calls: sub_3047c0, sub_35bf90, sub_382d80, sub_3baa80, sub_3bab30
*/
void sub_30f8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30f8a0ULL || rel >= 0x30fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030fa30 size=848 callers=0 calls=6
   calls: sub_3045e0, sub_3047c0, sub_3351b0, sub_35bcd0, sub_3b5280, sub_3bbe70
*/
void sub_30fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30fa30ULL || rel >= 0x30fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030fd80 size=16 callers=0 calls=0
*/
void sub_30fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30fd80ULL || rel >= 0x30fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030fd90 size=16 callers=0 calls=0
*/
void sub_30fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30fd90ULL || rel >= 0x30fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030fda0 size=48 callers=0 calls=1
   calls: sub_3191e0
*/
void sub_30fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30fda0ULL || rel >= 0x30fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030fdd0 size=48 callers=0 calls=1
   calls: sub_3191e0
*/
void sub_30fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30fdd0ULL || rel >= 0x30fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030fe00 size=80 callers=0 calls=2
   calls: sub_308aa0, sub_3193d0
*/
void sub_30fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30fe00ULL || rel >= 0x30fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030fe50 size=16 callers=0 calls=0
*/
void sub_30fe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30fe50ULL || rel >= 0x30fe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030fe60 size=288 callers=1 calls=2
   calls: sub_309110, sub_309250
*/
void sub_30fe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30fe60ULL || rel >= 0x30ff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ff80 size=480 callers=0 calls=3
   calls: sub_310a50, sub_310b00, sub_310c50
*/
void sub_30ff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ff80ULL || rel >= 0x310160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00310160 size=144 callers=1 calls=1
   calls: sub_30ace0
*/
void sub_310160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x310160ULL || rel >= 0x3101f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003101f0 size=224 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_3101f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3101f0ULL || rel >= 0x3102d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003102d0 size=16 callers=0 calls=0
*/
void sub_3102d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3102d0ULL || rel >= 0x3102e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003102e0 size=48 callers=0 calls=1
   calls: sub_3101f0
*/
void sub_3102e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3102e0ULL || rel >= 0x310310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00310310 size=48 callers=0 calls=1
   calls: sub_3101f0
*/
void sub_310310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x310310ULL || rel >= 0x310340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00310340 size=864 callers=1 calls=13
   calls: sub_3045e0, sub_3047c0, sub_30ad70, sub_3106e0, sub_310a50, sub_310b00, sub_310c50, sub_313050, sub_3b7880, sub_3b78a0, sub_3b78c0, sub_3b7900
   ... +1 more
*/
void sub_310340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x310340ULL || rel >= 0x3106a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003106a0 size=64 callers=0 calls=1
   calls: sub_3b78c0
*/
void sub_3106a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3106a0ULL || rel >= 0x3106e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003106e0 size=576 callers=2 calls=6
   calls: sub_3045e0, sub_3047c0, sub_308aa0, sub_309380, sub_310a50, sub_310b00
*/
void sub_3106e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3106e0ULL || rel >= 0x310920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00310920 size=64 callers=0 calls=0
*/
void sub_310920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x310920ULL || rel >= 0x310960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00310960 size=240 callers=0 calls=3
   calls: sub_310a50, sub_310b00, sub_310c50
*/
void sub_310960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x310960ULL || rel >= 0x310a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00310a50 size=176 callers=6 calls=1
   calls: sub_35bcd0
*/
void sub_310a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x310a50ULL || rel >= 0x310b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00310b00 size=336 callers=7 calls=7
   calls: sub_3045e0, sub_308aa0, sub_309380, sub_30ad70, sub_319190, sub_319500, sub_3351b0
*/
void sub_310b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x310b00ULL || rel >= 0x310c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00310c50 size=5408 callers=5 calls=21
   calls: sub_3045e0, sub_3047c0, sub_308aa0, sub_309110, sub_309380, sub_30af80, sub_30b050, sub_30c420, sub_30ea20, sub_312a50, sub_312b30, sub_318780
   ... +9 more
*/
void sub_310c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x310c50ULL || rel >= 0x312170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312170 size=432 callers=0 calls=5
   calls: sub_3047c0, sub_308aa0, sub_30b010, sub_30fe60, sub_312320
*/
void sub_312170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312170ULL || rel >= 0x312320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312320 size=320 callers=1 calls=8
   calls: sub_30b050, sub_30b300, sub_30c7d0, sub_3187b0, sub_318820, sub_3190a0, sub_319150, sub_38f5d0
*/
void sub_312320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312320ULL || rel >= 0x312460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312460 size=32 callers=0 calls=0
*/
void sub_312460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312460ULL || rel >= 0x312480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312480 size=256 callers=0 calls=0
*/
void sub_312480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312480ULL || rel >= 0x312580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312580 size=48 callers=0 calls=0
*/
void sub_312580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312580ULL || rel >= 0x3125b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003125b0 size=192 callers=0 calls=2
   calls: sub_308aa0, sub_309250
*/
void sub_3125b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3125b0ULL || rel >= 0x312670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312670 size=336 callers=0 calls=4
   calls: sub_318f30, sub_318fa0, sub_318fd0, sub_318fe0
*/
void sub_312670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312670ULL || rel >= 0x3127c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003127c0 size=144 callers=0 calls=3
   calls: sub_318fa0, sub_318fd0, sub_318fe0
*/
void sub_3127c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3127c0ULL || rel >= 0x312850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312850 size=96 callers=0 calls=2
   calls: sub_308d10, sub_309110
*/
void sub_312850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312850ULL || rel >= 0x3128b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003128b0 size=400 callers=0 calls=3
   calls: sub_3047c0, sub_308aa0, sub_30af40
*/
void sub_3128b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3128b0ULL || rel >= 0x312a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312a40 size=16 callers=0 calls=0
*/
void sub_312a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312a40ULL || rel >= 0x312a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312a50 size=224 callers=1 calls=5
   calls: sub_315a80, sub_315d60, sub_3187b0, sub_318820, sub_318830
*/
void sub_312a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312a50ULL || rel >= 0x312b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312b30 size=688 callers=2 calls=6
   calls: sub_309110, sub_30b740, sub_30ea00, sub_318830, sub_318c20, sub_318d10
*/
void sub_312b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312b30ULL || rel >= 0x312de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312de0 size=272 callers=0 calls=3
   calls: sub_310a50, sub_310b00, sub_310c50
*/
void sub_312de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312de0ULL || rel >= 0x312ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312ef0 size=224 callers=0 calls=3
   calls: sub_310a50, sub_310b00, sub_310c50
*/
void sub_312ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312ef0ULL || rel >= 0x312fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312fd0 size=64 callers=0 calls=2
   calls: sub_3b78a0, sub_3b78c0
*/
void sub_312fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312fd0ULL || rel >= 0x313010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313010 size=16 callers=0 calls=0
*/
void sub_313010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313010ULL || rel >= 0x313020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313020 size=16 callers=0 calls=0
*/
void sub_313020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313020ULL || rel >= 0x313030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313030 size=16 callers=0 calls=0
*/
void sub_313030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313030ULL || rel >= 0x313040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313040 size=16 callers=0 calls=0
*/
void sub_313040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313040ULL || rel >= 0x313050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313050 size=272 callers=1 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3b7880
*/
void sub_313050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313050ULL || rel >= 0x313160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313160 size=400 callers=2 calls=2
   calls: sub_3047c0, sub_3a7bb0
*/
void sub_313160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313160ULL || rel >= 0x3132f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003132f0 size=16 callers=0 calls=0
*/
void sub_3132f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3132f0ULL || rel >= 0x313300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313300 size=48 callers=0 calls=1
   calls: sub_313160
*/
void sub_313300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313300ULL || rel >= 0x313330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313330 size=48 callers=0 calls=1
   calls: sub_313160
*/
void sub_313330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313330ULL || rel >= 0x313360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313360 size=176 callers=1 calls=3
   calls: sub_3045e0, sub_3820f0, sub_3a72c0
*/
void sub_313360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313360ULL || rel >= 0x313410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313410 size=2128 callers=2 calls=11
   calls: sub_3045e0, sub_3046a0, sub_304740, sub_3047c0, sub_313c60, sub_313e90, sub_314040, sub_3142d0, sub_349990, sub_349be0, sub_385430
*/
void sub_313410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313410ULL || rel >= 0x313c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313c60 size=560 callers=1 calls=4
   calls: sub_3045e0, sub_314540, sub_3a7b80, sub_3a7d40
*/
void sub_313c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313c60ULL || rel >= 0x313e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313e90 size=432 callers=1 calls=4
   calls: sub_3045e0, sub_314540, sub_3a7b80, sub_3a7e40
*/
void sub_313e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313e90ULL || rel >= 0x314040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314040 size=544 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_314040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314040ULL || rel >= 0x314260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314260 size=16 callers=0 calls=0
*/
void sub_314260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314260ULL || rel >= 0x314270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314270 size=16 callers=0 calls=0
*/
void sub_314270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314270ULL || rel >= 0x314280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314280 size=16 callers=0 calls=0
*/
void sub_314280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314280ULL || rel >= 0x314290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314290 size=64 callers=0 calls=0
*/
void sub_314290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314290ULL || rel >= 0x3142d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003142d0 size=624 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3142d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3142d0ULL || rel >= 0x314540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314540 size=512 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_314540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314540ULL || rel >= 0x314740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314740 size=80 callers=1 calls=0
*/
void sub_314740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314740ULL || rel >= 0x314790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314790 size=16 callers=0 calls=0
*/
void sub_314790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314790ULL || rel >= 0x3147a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003147a0 size=128 callers=1 calls=2
   calls: sub_356720, sub_3b36d0
*/
void sub_3147a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3147a0ULL || rel >= 0x314820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314820 size=96 callers=2 calls=0
*/
void sub_314820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314820ULL || rel >= 0x314880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314880 size=144 callers=1 calls=0
*/
void sub_314880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314880ULL || rel >= 0x314910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314910 size=144 callers=0 calls=2
   calls: sub_3a7f50, sub_3a7f80
*/
void sub_314910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314910ULL || rel >= 0x3149a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003149a0 size=80 callers=0 calls=1
   calls: sub_3a7f80
*/
void sub_3149a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3149a0ULL || rel >= 0x3149f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003149f0 size=128 callers=1 calls=0
*/
void sub_3149f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3149f0ULL || rel >= 0x314a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314a70 size=112 callers=1 calls=0
*/
void sub_314a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314a70ULL || rel >= 0x314ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314ae0 size=32 callers=1 calls=0
*/
void sub_314ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314ae0ULL || rel >= 0x314b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314b00 size=752 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_314b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314b00ULL || rel >= 0x314df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314df0 size=288 callers=2 calls=0
*/
void sub_314df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314df0ULL || rel >= 0x314f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314f10 size=112 callers=0 calls=1
   calls: sub_3e2550
*/
void sub_314f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314f10ULL || rel >= 0x314f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314f80 size=160 callers=0 calls=1
   calls: sub_3e2550
*/
void sub_314f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314f80ULL || rel >= 0x315020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315020 size=128 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_315020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315020ULL || rel >= 0x3150a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003150a0 size=80 callers=2 calls=1
   calls: sub_309750
*/
void sub_3150a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3150a0ULL || rel >= 0x3150f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003150f0 size=96 callers=4 calls=1
   calls: sub_315150
*/
void sub_3150f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3150f0ULL || rel >= 0x315150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315150 size=192 callers=5 calls=1
   calls: sub_3047c0
*/
void sub_315150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315150ULL || rel >= 0x315210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315210 size=96 callers=0 calls=1
   calls: sub_315150
*/
void sub_315210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315210ULL || rel >= 0x315270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315270 size=16 callers=0 calls=0
*/
void sub_315270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315270ULL || rel >= 0x315280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315280 size=16 callers=0 calls=0
*/
void sub_315280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315280ULL || rel >= 0x315290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315290 size=1728 callers=2 calls=4
   calls: sub_3045e0, sub_3047c0, sub_309ac0, sub_315150
*/
void sub_315290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315290ULL || rel >= 0x315950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315950 size=304 callers=1 calls=0
*/
void sub_315950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315950ULL || rel >= 0x315a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315a80 size=736 callers=1 calls=0
*/
void sub_315a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315a80ULL || rel >= 0x315d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315d60 size=672 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_315d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315d60ULL || rel >= 0x316000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316000 size=128 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_316000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316000ULL || rel >= 0x316080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316080 size=208 callers=0 calls=4
   calls: sub_3099d0, sub_309a60, sub_382d00, sub_382d80
*/
void sub_316080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316080ULL || rel >= 0x316150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316150 size=96 callers=0 calls=1
   calls: sub_382d80
*/
void sub_316150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316150ULL || rel >= 0x3161b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003161b0 size=48 callers=0 calls=0
*/
void sub_3161b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3161b0ULL || rel >= 0x3161e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003161e0 size=208 callers=4 calls=1
   calls: sub_3047c0
*/
void sub_3161e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3161e0ULL || rel >= 0x3162b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003162b0 size=64 callers=5 calls=0
*/
void sub_3162b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3162b0ULL || rel >= 0x3162f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003162f0 size=208 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3162f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3162f0ULL || rel >= 0x3163c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003163c0 size=64 callers=2 calls=1
   calls: sub_3163c0
*/
void sub_3163c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3163c0ULL || rel >= 0x316400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316400 size=480 callers=4 calls=4
   calls: sub_3045e0, sub_394270, sub_3942b0, sub_394c80
*/
void sub_316400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316400ULL || rel >= 0x3165e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003165e0 size=704 callers=1 calls=4
   calls: sub_3045e0, sub_394270, sub_3942b0, sub_394c80
*/
void sub_3165e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3165e0ULL || rel >= 0x3168a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003168a0 size=48 callers=1 calls=0
*/
void sub_3168a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3168a0ULL || rel >= 0x3168d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003168d0 size=16 callers=4 calls=0
*/
void sub_3168d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3168d0ULL || rel >= 0x3168e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003168e0 size=480 callers=1 calls=3
   calls: sub_316ac0, sub_316c50, sub_316d50
*/
void sub_3168e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3168e0ULL || rel >= 0x316ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316ac0 size=400 callers=4 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3165e0
*/
void sub_316ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316ac0ULL || rel >= 0x316c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316c50 size=256 callers=8 calls=1
   calls: sub_3047c0
*/
void sub_316c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316c50ULL || rel >= 0x316d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316d50 size=400 callers=3 calls=4
   calls: sub_316400, sub_317ac0, sub_317fc0, sub_38f250
*/
void sub_316d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316d50ULL || rel >= 0x316ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316ee0 size=96 callers=0 calls=0
*/
void sub_316ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316ee0ULL || rel >= 0x316f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316f40 size=768 callers=1 calls=3
   calls: sub_316ac0, sub_316c50, sub_316d50
*/
void sub_316f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316f40ULL || rel >= 0x317240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00317240 size=592 callers=1 calls=3
   calls: sub_316ac0, sub_316c50, sub_316d50
*/
void sub_317240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x317240ULL || rel >= 0x317490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00317490 size=832 callers=1 calls=6
   calls: sub_3047c0, sub_316ac0, sub_316c50, sub_317240, sub_3177d0, sub_3179c0
*/
void sub_317490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x317490ULL || rel >= 0x3177d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003177d0 size=496 callers=2 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3177d0
*/
void sub_3177d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3177d0ULL || rel >= 0x3179c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003179c0 size=256 callers=1 calls=2
   calls: sub_316400, sub_317fc0
*/
void sub_3179c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3179c0ULL || rel >= 0x317ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00317ac0 size=672 callers=1 calls=6
   calls: sub_316400, sub_318240, sub_394700, sub_394730, sub_3947d0, sub_394810
*/
void sub_317ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x317ac0ULL || rel >= 0x317d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00317d60 size=608 callers=0 calls=3
   calls: sub_316400, sub_394730, sub_3947a0
*/
void sub_317d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x317d60ULL || rel >= 0x317fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00317fc0 size=640 callers=3 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_317fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x317fc0ULL || rel >= 0x318240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318240 size=1328 callers=1 calls=7
   calls: sub_3045e0, sub_3047c0, sub_317fc0, sub_3946d0, sub_394700, sub_394770, sub_3947a0
*/
void sub_318240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318240ULL || rel >= 0x318770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318770 size=16 callers=0 calls=0
*/
void sub_318770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318770ULL || rel >= 0x318780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318780 size=48 callers=1 calls=0
*/
void sub_318780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318780ULL || rel >= 0x3187b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003187b0 size=112 callers=13 calls=0
*/
void sub_3187b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3187b0ULL || rel >= 0x318820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318820 size=16 callers=16 calls=0
*/
void sub_318820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318820ULL || rel >= 0x318830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318830 size=160 callers=9 calls=0
*/
void sub_318830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318830ULL || rel >= 0x3188d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003188d0 size=176 callers=1 calls=1
   calls: sub_319130
*/
void sub_3188d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3188d0ULL || rel >= 0x318980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318980 size=672 callers=5 calls=4
   calls: sub_30e4a0, sub_319130, sub_319150, sub_319170
*/
void sub_318980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318980ULL || rel >= 0x318c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318c20 size=240 callers=1 calls=2
   calls: sub_30ea20, sub_319150
*/
void sub_318c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318c20ULL || rel >= 0x318d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318d10 size=208 callers=1 calls=1
   calls: sub_319130
*/
void sub_318d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318d10ULL || rel >= 0x318de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318de0 size=256 callers=1 calls=1
   calls: sub_319150
*/
void sub_318de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318de0ULL || rel >= 0x318ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318ee0 size=80 callers=1 calls=0
*/
void sub_318ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318ee0ULL || rel >= 0x318f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318f30 size=112 callers=4 calls=0
*/
void sub_318f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318f30ULL || rel >= 0x318fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318fa0 size=48 callers=4 calls=0
*/
void sub_318fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318fa0ULL || rel >= 0x318fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318fd0 size=16 callers=3 calls=0
*/
void sub_318fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318fd0ULL || rel >= 0x318fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318fe0 size=192 callers=4 calls=1
   calls: sub_319130
*/
void sub_318fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318fe0ULL || rel >= 0x3190a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003190a0 size=144 callers=9 calls=0
*/
void sub_3190a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3190a0ULL || rel >= 0x319130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319130 size=32 callers=4 calls=0
*/
void sub_319130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319130ULL || rel >= 0x319150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319150 size=32 callers=11 calls=0
*/
void sub_319150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319150ULL || rel >= 0x319170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319170 size=32 callers=1 calls=0
*/
void sub_319170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319170ULL || rel >= 0x319190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319190 size=80 callers=3 calls=1
   calls: sub_30ace0
*/
void sub_319190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319190ULL || rel >= 0x3191e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003191e0 size=128 callers=6 calls=1
   calls: sub_30ba00
*/
void sub_3191e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3191e0ULL || rel >= 0x319260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319260 size=128 callers=0 calls=1
   calls: sub_30ba00
*/
void sub_319260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319260ULL || rel >= 0x3192e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003192e0 size=16 callers=0 calls=0
*/
void sub_3192e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3192e0ULL || rel >= 0x3192f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003192f0 size=16 callers=0 calls=0
*/
void sub_3192f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3192f0ULL || rel >= 0x319300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319300 size=208 callers=4 calls=4
   calls: sub_30b050, sub_3187b0, sub_318820, sub_3190a0
*/
void sub_319300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319300ULL || rel >= 0x3193d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003193d0 size=160 callers=1 calls=3
   calls: sub_30af40, sub_30b4d0, sub_30ba00
*/
void sub_3193d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3193d0ULL || rel >= 0x319470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319470 size=144 callers=3 calls=2
   calls: sub_30b4d0, sub_30ba00
*/
void sub_319470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319470ULL || rel >= 0x319500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319500 size=128 callers=5 calls=2
   calls: sub_3045e0, sub_30b090
*/
void sub_319500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319500ULL || rel >= 0x319580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319580 size=448 callers=0 calls=3
   calls: sub_30b0f0, sub_30b9d0, sub_30ba00
*/
void sub_319580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319580ULL || rel >= 0x319740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319740 size=336 callers=0 calls=3
   calls: sub_30b050, sub_318ee0, sub_318fd0
*/
void sub_319740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319740ULL || rel >= 0x319890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319890 size=128 callers=0 calls=0
*/
void sub_319890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319890ULL || rel >= 0x319910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319910 size=16 callers=0 calls=0
*/
void sub_319910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319910ULL || rel >= 0x319920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319920 size=16 callers=0 calls=0
*/
void sub_319920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319920ULL || rel >= 0x319930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319930 size=16 callers=0 calls=0
*/
void sub_319930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319930ULL || rel >= 0x319940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319940 size=720 callers=0 calls=8
   calls: sub_308aa0, sub_309380, sub_30b4d0, sub_30b640, sub_30ba00, sub_30e7d0, sub_30e9f0, sub_30ea20
*/
void sub_319940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319940ULL || rel >= 0x319c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319c10 size=128 callers=0 calls=0
*/
void sub_319c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319c10ULL || rel >= 0x319c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319c90 size=64 callers=0 calls=0
*/
void sub_319c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319c90ULL || rel >= 0x319cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319cd0 size=144 callers=0 calls=1
   calls: sub_30b7c0
*/
void sub_319cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319cd0ULL || rel >= 0x319d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319d60 size=16 callers=0 calls=0
*/
void sub_319d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319d60ULL || rel >= 0x319d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319d70 size=144 callers=1 calls=2
   calls: sub_3086e0, sub_31b1a0
*/
void sub_319d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319d70ULL || rel >= 0x319e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319e00 size=160 callers=0 calls=2
   calls: sub_31b1c0, sub_31deb0
*/
void sub_319e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319e00ULL || rel >= 0x319ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319ea0 size=160 callers=0 calls=2
   calls: sub_31b1c0, sub_31deb0
*/
void sub_319ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319ea0ULL || rel >= 0x319f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319f40 size=160 callers=0 calls=3
   calls: sub_308750, sub_31b1c0, sub_31deb0
*/
void sub_319f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319f40ULL || rel >= 0x319fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319fe0 size=160 callers=0 calls=3
   calls: sub_308750, sub_31b1c0, sub_31deb0
*/
void sub_319fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319fe0ULL || rel >= 0x31a080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a080 size=48 callers=1 calls=2
   calls: sub_308970, sub_31a0b0
*/
void sub_31a080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a080ULL || rel >= 0x31a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a0b0 size=208 callers=1 calls=4
   calls: sub_30e470, sub_31de30, sub_31e120, sub_3b7900
*/
void sub_31a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a0b0ULL || rel >= 0x31a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a180 size=16 callers=6 calls=0
*/
void sub_31a180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a180ULL || rel >= 0x31a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a190 size=16 callers=2 calls=0
*/
void sub_31a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a190ULL || rel >= 0x31a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a1a0 size=16 callers=1 calls=0
*/
void sub_31a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a1a0ULL || rel >= 0x31a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a1b0 size=176 callers=1 calls=3
   calls: sub_30e9f0, sub_31a260, sub_31d4e0
*/
void sub_31a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a1b0ULL || rel >= 0x31a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a260 size=544 callers=1 calls=9
   calls: sub_3047c0, sub_309110, sub_309250, sub_3095f0, sub_30e9f0, sub_31b260, sub_31cbb0, sub_31ce40, sub_31ce50
*/
void sub_31a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a260ULL || rel >= 0x31a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a480 size=144 callers=1 calls=3
   calls: sub_30e470, sub_30e9f0, sub_314df0
*/
void sub_31a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a480ULL || rel >= 0x31a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a510 size=48 callers=0 calls=1
   calls: sub_308d10
*/
void sub_31a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a510ULL || rel >= 0x31a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a540 size=496 callers=0 calls=7
   calls: sub_3045e0, sub_30e470, sub_314880, sub_319300, sub_31a7e0, sub_31b1f0, sub_31df00
*/
void sub_31a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a540ULL || rel >= 0x31a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a730 size=96 callers=0 calls=3
   calls: sub_308aa0, sub_308e90, sub_31b2c0
*/
void sub_31a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a730ULL || rel >= 0x31a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a790 size=64 callers=0 calls=1
   calls: sub_308eb0
*/
void sub_31a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a790ULL || rel >= 0x31a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a7d0 size=16 callers=1 calls=0
*/
void sub_31a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a7d0ULL || rel >= 0x31a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a7e0 size=384 callers=2 calls=3
   calls: sub_3045e0, sub_3047c0, sub_319300
*/
void sub_31a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a7e0ULL || rel >= 0x31a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031a960 size=528 callers=1 calls=10
   calls: sub_30e4a0, sub_30e9f0, sub_30ea20, sub_314df0, sub_319300, sub_31a7e0, sub_31ab70, sub_31acb0, sub_31ae50, sub_31b2c0
*/
void sub_31a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31a960ULL || rel >= 0x31ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031ab70 size=320 callers=1 calls=2
   calls: sub_3047c0, sub_31df00
*/
void sub_31ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31ab70ULL || rel >= 0x31acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031acb0 size=416 callers=1 calls=4
   calls: sub_3045e0, sub_3047c0, sub_31b1f0, sub_31df00
*/
void sub_31acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31acb0ULL || rel >= 0x31ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031ae50 size=512 callers=1 calls=4
   calls: sub_3045e0, sub_3047c0, sub_3095f0, sub_31b1f0
*/
void sub_31ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31ae50ULL || rel >= 0x31b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b050 size=16 callers=3 calls=0
*/
void sub_31b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b050ULL || rel >= 0x31b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b060 size=64 callers=1 calls=2
   calls: sub_30e9f0, sub_319300
*/
void sub_31b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b060ULL || rel >= 0x31b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b0a0 size=16 callers=1 calls=0
*/
void sub_31b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b0a0ULL || rel >= 0x31b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b0b0 size=48 callers=0 calls=1
   calls: sub_31b1c0
*/
void sub_31b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b0b0ULL || rel >= 0x31b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b0e0 size=32 callers=0 calls=0
*/
void sub_31b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b0e0ULL || rel >= 0x31b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b100 size=64 callers=0 calls=0
*/
void sub_31b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b100ULL || rel >= 0x31b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b140 size=16 callers=0 calls=0
*/
void sub_31b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b140ULL || rel >= 0x31b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b150 size=16 callers=0 calls=0
*/
void sub_31b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b150ULL || rel >= 0x31b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b160 size=16 callers=0 calls=0
*/
void sub_31b160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b160ULL || rel >= 0x31b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b170 size=16 callers=0 calls=0
*/
void sub_31b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b170ULL || rel >= 0x31b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b180 size=16 callers=0 calls=0
*/
void sub_31b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b180ULL || rel >= 0x31b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b190 size=16 callers=0 calls=0
*/
void sub_31b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b190ULL || rel >= 0x31b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b1a0 size=32 callers=2 calls=0
*/
void sub_31b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b1a0ULL || rel >= 0x31b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b1c0 size=32 callers=10 calls=0
*/
void sub_31b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b1c0ULL || rel >= 0x31b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b1e0 size=16 callers=0 calls=0
*/
void sub_31b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b1e0ULL || rel >= 0x31b1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b1f0 size=112 callers=6 calls=0
*/
void sub_31b1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b1f0ULL || rel >= 0x31b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b260 size=96 callers=4 calls=0
*/
void sub_31b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b260ULL || rel >= 0x31b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b2c0 size=128 callers=3 calls=1
   calls: sub_3047c0
*/
void sub_31b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b2c0ULL || rel >= 0x31b340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b340 size=224 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_31b340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b340ULL || rel >= 0x31b420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b420 size=224 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_31b420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b420ULL || rel >= 0x31b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b500 size=32 callers=1 calls=0
*/
void sub_31b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b500ULL || rel >= 0x31b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b520 size=16 callers=0 calls=0
*/
void sub_31b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b520ULL || rel >= 0x31b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b530 size=16 callers=1 calls=0
*/
void sub_31b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b530ULL || rel >= 0x31b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b540 size=64 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_31b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b540ULL || rel >= 0x31b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b580 size=560 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_31b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b580ULL || rel >= 0x31b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b7b0 size=176 callers=1 calls=0
*/
void sub_31b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b7b0ULL || rel >= 0x31b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b860 size=192 callers=1 calls=0
*/
void sub_31b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b860ULL || rel >= 0x31b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b920 size=112 callers=2 calls=1
   calls: sub_319190
*/
void sub_31b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b920ULL || rel >= 0x31b990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b990 size=96 callers=0 calls=0
*/
void sub_31b990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b990ULL || rel >= 0x31b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b9f0 size=96 callers=0 calls=0
*/
void sub_31b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b9f0ULL || rel >= 0x31ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031ba50 size=96 callers=0 calls=1
   calls: sub_3191e0
*/
void sub_31ba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31ba50ULL || rel >= 0x31bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031bab0 size=96 callers=0 calls=1
   calls: sub_3191e0
*/
void sub_31bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31bab0ULL || rel >= 0x31bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031bb10 size=128 callers=2 calls=3
   calls: sub_30ad70, sub_30e9f0, sub_31bb90
*/
void sub_31bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31bb10ULL || rel >= 0x31bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031bb90 size=336 callers=2 calls=6
   calls: sub_308aa0, sub_30b6c0, sub_30e1a0, sub_30ea00, sub_30ea20, sub_319500
*/
void sub_31bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31bb90ULL || rel >= 0x31bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031bce0 size=224 callers=0 calls=2
   calls: sub_30e9f0, sub_30ec40
*/
void sub_31bce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31bce0ULL || rel >= 0x31bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031bdc0 size=240 callers=0 calls=6
   calls: sub_308aa0, sub_309250, sub_309380, sub_30b050, sub_319470, sub_31bb90
*/
void sub_31bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31bdc0ULL || rel >= 0x31beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031beb0 size=128 callers=0 calls=2
   calls: sub_30ea20, sub_30ec40
*/
void sub_31beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31beb0ULL || rel >= 0x31bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031bf30 size=208 callers=0 calls=6
   calls: sub_30b050, sub_30b300, sub_3187b0, sub_318820, sub_3190a0, sub_319150
*/
void sub_31bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31bf30ULL || rel >= 0x31c000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c000 size=16 callers=0 calls=0
*/
void sub_31c000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c000ULL || rel >= 0x31c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c010 size=16 callers=0 calls=0
*/
void sub_31c010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c010ULL || rel >= 0x31c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c020 size=128 callers=2 calls=2
   calls: sub_3168a0, sub_319190
*/
void sub_31c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c020ULL || rel >= 0x31c0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c0a0 size=112 callers=0 calls=2
   calls: sub_3168d0, sub_316c50
*/
void sub_31c0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c0a0ULL || rel >= 0x31c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c110 size=128 callers=0 calls=2
   calls: sub_3168d0, sub_316c50
*/
void sub_31c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c110ULL || rel >= 0x31c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c190 size=112 callers=0 calls=3
   calls: sub_3168d0, sub_316c50, sub_3191e0
*/
void sub_31c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c190ULL || rel >= 0x31c200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c200 size=128 callers=0 calls=3
   calls: sub_3168d0, sub_316c50, sub_3191e0
*/
void sub_31c200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c200ULL || rel >= 0x31c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c280 size=240 callers=2 calls=4
   calls: sub_30ad70, sub_30e9f0, sub_3168e0, sub_31c370
*/
void sub_31c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c280ULL || rel >= 0x31c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c370 size=608 callers=7 calls=4
   calls: sub_3047c0, sub_315950, sub_316f40, sub_31c8b0
*/
void sub_31c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c370ULL || rel >= 0x31c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c5d0 size=16 callers=0 calls=0
*/
void sub_31c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c5d0ULL || rel >= 0x31c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c5e0 size=80 callers=0 calls=1
   calls: sub_31c370
*/
void sub_31c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c5e0ULL || rel >= 0x31c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c630 size=160 callers=0 calls=3
   calls: sub_317490, sub_319470, sub_31c370
*/
void sub_31c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c630ULL || rel >= 0x31c6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c6d0 size=464 callers=0 calls=1
   calls: sub_31c370
*/
void sub_31c6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c6d0ULL || rel >= 0x31c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c8a0 size=16 callers=0 calls=0
*/
void sub_31c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c8a0ULL || rel >= 0x31c8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c8b0 size=704 callers=2 calls=12
   calls: sub_308aa0, sub_30b640, sub_30b6a0, sub_30b6c0, sub_30e1a0, sub_30e4a0, sub_30e7d0, sub_30e9f0, sub_30ea00, sub_30ea20, sub_319500, sub_3351b0
*/
void sub_31c8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c8b0ULL || rel >= 0x31cb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031cb70 size=16 callers=0 calls=0
*/
void sub_31cb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31cb70ULL || rel >= 0x31cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031cb80 size=16 callers=0 calls=0
*/
void sub_31cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31cb80ULL || rel >= 0x31cb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031cb90 size=16 callers=0 calls=0
*/
void sub_31cb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31cb90ULL || rel >= 0x31cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031cba0 size=16 callers=0 calls=0
*/
void sub_31cba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31cba0ULL || rel >= 0x31cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031cbb0 size=208 callers=1 calls=4
   calls: sub_3045e0, sub_3086e0, sub_31b1a0, sub_379b50
*/
void sub_31cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31cbb0ULL || rel >= 0x31cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031cc80 size=112 callers=0 calls=2
   calls: sub_31b1c0, sub_379b60
*/
void sub_31cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31cc80ULL || rel >= 0x31ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031ccf0 size=112 callers=0 calls=2
   calls: sub_31b1c0, sub_379b60
*/
void sub_31ccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31ccf0ULL || rel >= 0x31cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031cd60 size=112 callers=0 calls=3
   calls: sub_308750, sub_31b1c0, sub_379b60
*/
void sub_31cd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31cd60ULL || rel >= 0x31cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031cdd0 size=112 callers=0 calls=3
   calls: sub_308750, sub_31b1c0, sub_379b60
*/
void sub_31cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31cdd0ULL || rel >= 0x31ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031ce40 size=16 callers=1 calls=0
*/
void sub_31ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31ce40ULL || rel >= 0x31ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031ce50 size=16 callers=1 calls=0
*/
void sub_31ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31ce50ULL || rel >= 0x31ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031ce60 size=160 callers=0 calls=4
   calls: sub_308d10, sub_31a180, sub_31b050, sub_31cf00
*/
void sub_31ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31ce60ULL || rel >= 0x31cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031cf00 size=1328 callers=1 calls=3
   calls: sub_3045e0, sub_314820, sub_31b1f0
*/
void sub_31cf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31cf00ULL || rel >= 0x31d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031d430 size=160 callers=0 calls=4
   calls: sub_3047c0, sub_308e90, sub_31a7d0, sub_31b2c0
*/
void sub_31d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31d430ULL || rel >= 0x31d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031d4d0 size=16 callers=0 calls=0
*/
void sub_31d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31d4d0ULL || rel >= 0x31d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031d4e0 size=192 callers=1 calls=4
   calls: sub_308aa0, sub_30d300, sub_31d5a0, sub_32e6c0
*/
void sub_31d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31d4e0ULL || rel >= 0x31d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031d5a0 size=896 callers=1 calls=8
   calls: sub_3045e0, sub_3047c0, sub_30d300, sub_30d650, sub_31b1f0, sub_31b260, sub_31d920, sub_32e6c0
*/
void sub_31d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31d5a0ULL || rel >= 0x31d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031d920 size=400 callers=1 calls=6
   calls: sub_305d30, sub_314820, sub_31a180, sub_31a190, sub_31a1a0, sub_3e15a0
*/
void sub_31d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31d920ULL || rel >= 0x31dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031dab0 size=160 callers=3 calls=2
   calls: sub_3047c0, sub_31b420
*/
void sub_31dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31dab0ULL || rel >= 0x31db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031db50 size=288 callers=1 calls=2
   calls: sub_31b060, sub_31b0a0
*/
void sub_31db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31db50ULL || rel >= 0x31dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031dc70 size=112 callers=0 calls=2
   calls: sub_31a180, sub_31b050
*/
void sub_31dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31dc70ULL || rel >= 0x31dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031dce0 size=48 callers=0 calls=1
   calls: sub_31b1c0
*/
void sub_31dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31dce0ULL || rel >= 0x31dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031dd10 size=112 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_31dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31dd10ULL || rel >= 0x31dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031dd80 size=128 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_31dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31dd80ULL || rel >= 0x31de00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031de00 size=16 callers=0 calls=0
*/
void sub_31de00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31de00ULL || rel >= 0x31de10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031de10 size=16 callers=0 calls=0
*/
void sub_31de10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31de10ULL || rel >= 0x31de20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031de20 size=16 callers=0 calls=0
*/
void sub_31de20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31de20ULL || rel >= 0x31de30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031de30 size=128 callers=1 calls=2
   calls: sub_3045e0, sub_3b7880
*/
void sub_31de30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31de30ULL || rel >= 0x31deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031deb0 size=80 callers=8 calls=0
*/
void sub_31deb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31deb0ULL || rel >= 0x31df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031df00 size=64 callers=4 calls=0
*/
void sub_31df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31df00ULL || rel >= 0x31df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031df40 size=480 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_31df40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31df40ULL || rel >= 0x31e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e120 size=176 callers=1 calls=5
   calls: sub_314ae0, sub_31a180, sub_31b050, sub_31df40, sub_3b79c0
*/
void sub_31e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e120ULL || rel >= 0x31e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e1d0 size=208 callers=0 calls=3
   calls: sub_31a180, sub_31a960, sub_31df40
*/
void sub_31e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e1d0ULL || rel >= 0x31e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e2a0 size=112 callers=0 calls=2
   calls: sub_3047c0, sub_3b78c0
*/
void sub_31e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e2a0ULL || rel >= 0x31e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e310 size=128 callers=0 calls=3
   calls: sub_3047c0, sub_3b78a0, sub_3b78c0
*/
void sub_31e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e310ULL || rel >= 0x31e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e390 size=80 callers=0 calls=0
*/
void sub_31e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e390ULL || rel >= 0x31e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e3e0 size=352 callers=0 calls=0
*/
void sub_31e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e3e0ULL || rel >= 0x31e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e540 size=32 callers=0 calls=0
*/
void sub_31e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e540ULL || rel >= 0x31e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e560 size=16 callers=0 calls=0
*/
void sub_31e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e560ULL || rel >= 0x31e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e570 size=352 callers=0 calls=0
*/
void sub_31e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e570ULL || rel >= 0x31e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e6d0 size=160 callers=0 calls=0
*/
void sub_31e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e6d0ULL || rel >= 0x31e770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e770 size=96 callers=0 calls=0
*/
void sub_31e770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e770ULL || rel >= 0x31e7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e7d0 size=32 callers=0 calls=0
*/
void sub_31e7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e7d0ULL || rel >= 0x31e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e7f0 size=2320 callers=0 calls=2
   calls: sub_31f100, sub_31f5a0
*/
void sub_31e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e7f0ULL || rel >= 0x31f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031f100 size=1168 callers=3 calls=0
*/
void sub_31f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31f100ULL || rel >= 0x31f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031f590 size=16 callers=0 calls=0
*/
void sub_31f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31f590ULL || rel >= 0x31f5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031f5a0 size=560 callers=5 calls=0
*/
void sub_31f5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31f5a0ULL || rel >= 0x31f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031f7d0 size=80 callers=0 calls=0
*/
void sub_31f7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31f7d0ULL || rel >= 0x31f820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031f820 size=16 callers=0 calls=0
*/
void sub_31f820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31f820ULL || rel >= 0x31f830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031f830 size=16 callers=0 calls=0
*/
void sub_31f830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31f830ULL || rel >= 0x31f840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031f840 size=112 callers=0 calls=0
*/
void sub_31f840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31f840ULL || rel >= 0x31f8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031f8b0 size=144 callers=0 calls=0
*/
void sub_31f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31f8b0ULL || rel >= 0x31f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031f940 size=80 callers=0 calls=0
*/
void sub_31f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31f940ULL || rel >= 0x31f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031f990 size=160 callers=0 calls=0
*/
void sub_31f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31f990ULL || rel >= 0x31fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fa30 size=320 callers=0 calls=0
*/
void sub_31fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fa30ULL || rel >= 0x31fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fb70 size=80 callers=0 calls=0
*/
void sub_31fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fb70ULL || rel >= 0x31fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fbc0 size=80 callers=0 calls=0
*/
void sub_31fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fbc0ULL || rel >= 0x31fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fc10 size=16 callers=0 calls=0
*/
void sub_31fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fc10ULL || rel >= 0x31fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fc20 size=16 callers=0 calls=0
*/
void sub_31fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fc20ULL || rel >= 0x31fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fc30 size=48 callers=0 calls=0
*/
void sub_31fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fc30ULL || rel >= 0x31fc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fc60 size=432 callers=1 calls=0
*/
void sub_31fc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fc60ULL || rel >= 0x31fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fe10 size=128 callers=0 calls=0
*/
void sub_31fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fe10ULL || rel >= 0x31fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fe90 size=192 callers=0 calls=0
*/
void sub_31fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fe90ULL || rel >= 0x31ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031ff50 size=32 callers=0 calls=0
*/
void sub_31ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31ff50ULL || rel >= 0x31ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031ff70 size=2320 callers=0 calls=1
   calls: sub_31fc60
*/
void sub_31ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31ff70ULL || rel >= 0x320880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00320880 size=1360 callers=0 calls=0
*/
void sub_320880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x320880ULL || rel >= 0x320dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00320dd0 size=1696 callers=0 calls=0
*/
void sub_320dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x320dd0ULL || rel >= 0x321470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321470 size=1632 callers=0 calls=0
*/
void sub_321470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321470ULL || rel >= 0x321ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321ad0 size=16 callers=0 calls=0
*/
void sub_321ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321ad0ULL || rel >= 0x321ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321ae0 size=64 callers=0 calls=0
*/
void sub_321ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321ae0ULL || rel >= 0x321b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321b20 size=16 callers=0 calls=0
*/
void sub_321b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321b20ULL || rel >= 0x321b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321b30 size=16 callers=0 calls=0
*/
void sub_321b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321b30ULL || rel >= 0x321b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321b40 size=128 callers=0 calls=0
*/
void sub_321b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321b40ULL || rel >= 0x321bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321bc0 size=96 callers=0 calls=0
*/
void sub_321bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321bc0ULL || rel >= 0x321c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321c20 size=80 callers=0 calls=0
*/
void sub_321c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321c20ULL || rel >= 0x321c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321c70 size=128 callers=0 calls=0
*/
void sub_321c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321c70ULL || rel >= 0x321cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321cf0 size=256 callers=0 calls=0
*/
void sub_321cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321cf0ULL || rel >= 0x321df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321df0 size=80 callers=0 calls=0
*/
void sub_321df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321df0ULL || rel >= 0x321e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321e40 size=192 callers=0 calls=0
*/
void sub_321e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321e40ULL || rel >= 0x321f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321f00 size=16 callers=0 calls=0
*/
void sub_321f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321f00ULL || rel >= 0x321f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321f10 size=16 callers=0 calls=0
*/
void sub_321f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321f10ULL || rel >= 0x321f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321f20 size=816 callers=0 calls=5
   calls: sub_322250, sub_322410, sub_322890, sub_3286c0, sub_32b090
*/
void sub_321f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321f20ULL || rel >= 0x322250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00322250 size=448 callers=3 calls=3
   calls: sub_322a50, sub_3230b0, sub_323190
*/
void sub_322250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x322250ULL || rel >= 0x322410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00322410 size=1152 callers=2 calls=3
   calls: sub_328390, sub_328f00, sub_32b090
*/
void sub_322410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x322410ULL || rel >= 0x322890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00322890 size=448 callers=1 calls=2
   calls: sub_328390, sub_32ab90
*/
void sub_322890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x322890ULL || rel >= 0x322a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00322a50 size=224 callers=3 calls=1
   calls: sub_322b30
*/
void sub_322a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x322a50ULL || rel >= 0x322b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00322b30 size=1408 callers=6 calls=0
*/
void sub_322b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x322b30ULL || rel >= 0x3230b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003230b0 size=224 callers=3 calls=1
   calls: sub_322b30
*/
void sub_3230b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3230b0ULL || rel >= 0x323190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00323190 size=224 callers=3 calls=1
   calls: sub_322b30
*/
void sub_323190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x323190ULL || rel >= 0x323270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00323270 size=512 callers=0 calls=4
   calls: sub_328940, sub_329120, sub_32ac10, sub_32b100
*/
void sub_323270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x323270ULL || rel >= 0x323470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00323470 size=384 callers=0 calls=4
   calls: sub_328980, sub_329170, sub_32ac50, sub_32b140
*/
void sub_323470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x323470ULL || rel >= 0x3235f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003235f0 size=32 callers=0 calls=0
*/
void sub_3235f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3235f0ULL || rel >= 0x323610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00323610 size=2320 callers=1 calls=13
   calls: sub_322250, sub_322410, sub_322a50, sub_3230b0, sub_323190, sub_3286c0, sub_328940, sub_328980, sub_329120, sub_329170, sub_32b090, sub_32b100
   ... +1 more
*/
void sub_323610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x323610ULL || rel >= 0x323f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00323f20 size=496 callers=1 calls=4
   calls: sub_322a50, sub_3230b0, sub_323190, sub_328d60
*/
void sub_323f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x323f20ULL || rel >= 0x324110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00324110 size=672 callers=0 calls=8
   calls: sub_323610, sub_323f20, sub_3243b0, sub_324ab0, sub_325440, sub_325d90, sub_326e10, sub_327730
*/
void sub_324110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x324110ULL || rel >= 0x3243b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003243b0 size=1792 callers=1 calls=9
   calls: sub_3284d0, sub_3289a0, sub_3291c0, sub_32ac70, sub_32ade0, sub_32b160, sub_32b2d0, sub_32b550, sub_32b610
*/
void sub_3243b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3243b0ULL || rel >= 0x324ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00324ab0 size=2448 callers=1 calls=9
   calls: sub_3284d0, sub_3289a0, sub_3296a0, sub_32ac70, sub_32ade0, sub_32b160, sub_32b2d0, sub_32b550, sub_32b610
*/
void sub_324ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x324ab0ULL || rel >= 0x325440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325440 size=2384 callers=1 calls=9
   calls: sub_3284d0, sub_3289a0, sub_329be0, sub_32ac70, sub_32ade0, sub_32b160, sub_32b2d0, sub_32b550, sub_32b610
*/
void sub_325440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325440ULL || rel >= 0x325d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325d90 size=4224 callers=1 calls=9
   calls: sub_3284d0, sub_3289a0, sub_329be0, sub_32ac70, sub_32ade0, sub_32b160, sub_32b2d0, sub_32b550, sub_32b610
*/
void sub_325d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325d90ULL || rel >= 0x326e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00326e10 size=2336 callers=1 calls=9
   calls: sub_3284d0, sub_3289a0, sub_3296a0, sub_32ac70, sub_32ade0, sub_32b160, sub_32b2d0, sub_32b550, sub_32b610
*/
void sub_326e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x326e10ULL || rel >= 0x327730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327730 size=3152 callers=1 calls=10
   calls: sub_3284d0, sub_3289a0, sub_329be0, sub_32ac70, sub_32ade0, sub_32b160, sub_32b2d0, sub_32b460, sub_32b550, sub_32b610
*/
void sub_327730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327730ULL || rel >= 0x328380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00328380 size=16 callers=0 calls=0
*/
void sub_328380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x328380ULL || rel >= 0x328390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00328390 size=288 callers=2 calls=0
*/
void sub_328390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x328390ULL || rel >= 0x3284b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003284b0 size=32 callers=0 calls=0
*/
void sub_3284b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3284b0ULL || rel >= 0x3284d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003284d0 size=496 callers=24 calls=0
*/
void sub_3284d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3284d0ULL || rel >= 0x3286c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003286c0 size=640 callers=3 calls=0
*/
void sub_3286c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3286c0ULL || rel >= 0x328940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00328940 size=64 callers=3 calls=0
*/
void sub_328940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x328940ULL || rel >= 0x328980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00328980 size=32 callers=3 calls=0
*/
void sub_328980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x328980ULL || rel >= 0x3289a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003289a0 size=960 callers=6 calls=0
*/
void sub_3289a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3289a0ULL || rel >= 0x328d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00328d60 size=416 callers=1 calls=0
*/
void sub_328d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x328d60ULL || rel >= 0x328f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00328f00 size=544 callers=2 calls=1
   calls: sub_32b090
*/
void sub_328f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x328f00ULL || rel >= 0x329120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00329120 size=80 callers=4 calls=1
   calls: sub_32b100
*/
void sub_329120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x329120ULL || rel >= 0x329170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00329170 size=80 callers=4 calls=1
   calls: sub_32b140
*/
void sub_329170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x329170ULL || rel >= 0x3291c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003291c0 size=16 callers=1 calls=0
*/
void sub_3291c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3291c0ULL || rel >= 0x3291d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003291d0 size=1232 callers=0 calls=0
*/
void sub_3291d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3291d0ULL || rel >= 0x3296a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003296a0 size=32 callers=2 calls=0
*/
void sub_3296a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3296a0ULL || rel >= 0x3296c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003296c0 size=1312 callers=0 calls=0
*/
void sub_3296c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3296c0ULL || rel >= 0x329be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00329be0 size=48 callers=3 calls=1
   calls: sub_329c10
*/
void sub_329be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x329be0ULL || rel >= 0x329c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00329c10 size=1376 callers=1 calls=0
*/
void sub_329c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x329c10ULL || rel >= 0x32a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a170 size=64 callers=0 calls=0
*/
void sub_32a170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a170ULL || rel >= 0x32a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a1b0 size=16 callers=0 calls=0
*/
void sub_32a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a1b0ULL || rel >= 0x32a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a1c0 size=16 callers=0 calls=0
*/
void sub_32a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a1c0ULL || rel >= 0x32a1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a1d0 size=160 callers=0 calls=0
*/
void sub_32a1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a1d0ULL || rel >= 0x32a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a270 size=304 callers=0 calls=0
*/
void sub_32a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a270ULL || rel >= 0x32a3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a3a0 size=80 callers=0 calls=0
*/
void sub_32a3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a3a0ULL || rel >= 0x32a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a3f0 size=576 callers=0 calls=0
*/
void sub_32a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a3f0ULL || rel >= 0x32a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a630 size=1376 callers=0 calls=0
*/
void sub_32a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a630ULL || rel >= 0x32ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ab90 size=128 callers=4 calls=0
*/
void sub_32ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ab90ULL || rel >= 0x32ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ac10 size=64 callers=6 calls=0
*/
void sub_32ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ac10ULL || rel >= 0x32ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ac50 size=32 callers=6 calls=0
*/
void sub_32ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ac50ULL || rel >= 0x32ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ac70 size=368 callers=24 calls=0
*/
void sub_32ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ac70ULL || rel >= 0x32ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ade0 size=688 callers=6 calls=0
*/
void sub_32ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ade0ULL || rel >= 0x32b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b090 size=112 callers=16 calls=0
*/
void sub_32b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b090ULL || rel >= 0x32b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b100 size=64 callers=18 calls=0
*/
void sub_32b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b100ULL || rel >= 0x32b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b140 size=32 callers=19 calls=0
*/
void sub_32b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b140ULL || rel >= 0x32b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

