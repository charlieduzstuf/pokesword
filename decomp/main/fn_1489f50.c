/* main functions 01489f50..014a1d50 (175 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01489f50 size=384 callers=1 calls=3
   calls: sub_148a0d0, sub_790490, sub_e7fe20
*/
void sub_1489f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489f50ULL || rel >= 0x148a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148a0d0 size=416 callers=1 calls=1
   calls: anonymous_2
*/
void sub_148a0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148a0d0ULL || rel >= 0x148a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148a270 size=288 callers=1 calls=2
   calls: sub_148a390, sub_e809c0
*/
void sub_148a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148a270ULL || rel >= 0x148a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148a390 size=384 callers=1 calls=3
   calls: sub_148a510, sub_790490, sub_e7fe20
*/
void sub_148a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148a390ULL || rel >= 0x148a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148a510 size=432 callers=1 calls=1
   calls: anonymous_2
*/
void sub_148a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148a510ULL || rel >= 0x148a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148a6c0 size=288 callers=1 calls=2
   calls: sub_148a7e0, sub_e809c0
*/
void sub_148a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148a6c0ULL || rel >= 0x148a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148a7e0 size=736 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_148a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148a7e0ULL || rel >= 0x148aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148aac0 size=288 callers=1 calls=2
   calls: sub_148abe0, sub_e809c0
*/
void sub_148aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148aac0ULL || rel >= 0x148abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148abe0 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_148abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148abe0ULL || rel >= 0x148ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148ae30 size=288 callers=1 calls=2
   calls: sub_148af50, sub_e809c0
*/
void sub_148ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148ae30ULL || rel >= 0x148af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148af50 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_148af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148af50ULL || rel >= 0x148b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b180 size=288 callers=1 calls=2
   calls: sub_148b2a0, sub_e809c0
*/
void sub_148b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b180ULL || rel >= 0x148b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b2a0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_148b2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b2a0ULL || rel >= 0x148b4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b4d0 size=336 callers=6 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_148b4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b4d0ULL || rel >= 0x148b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b620 size=32 callers=0 calls=0
*/
void sub_148b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b620ULL || rel >= 0x148b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b640 size=16 callers=0 calls=0
*/
void sub_148b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b640ULL || rel >= 0x148b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b650 size=16 callers=0 calls=0
*/
void sub_148b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b650ULL || rel >= 0x148b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b660 size=16 callers=0 calls=0
*/
void sub_148b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b660ULL || rel >= 0x148b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b670 size=32 callers=0 calls=0
*/
void sub_148b670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b670ULL || rel >= 0x148b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b690 size=16 callers=0 calls=0
*/
void sub_148b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b690ULL || rel >= 0x148b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b6a0 size=16 callers=0 calls=0
*/
void sub_148b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b6a0ULL || rel >= 0x148b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b6b0 size=16 callers=0 calls=0
*/
void sub_148b6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b6b0ULL || rel >= 0x148b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b6c0 size=32 callers=0 calls=0
*/
void sub_148b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b6c0ULL || rel >= 0x148b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b6e0 size=16 callers=0 calls=0
*/
void sub_148b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b6e0ULL || rel >= 0x148b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b6f0 size=16 callers=0 calls=0
*/
void sub_148b6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b6f0ULL || rel >= 0x148b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b700 size=16 callers=0 calls=0
*/
void sub_148b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b700ULL || rel >= 0x148b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b710 size=336 callers=8 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_148b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b710ULL || rel >= 0x148b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b860 size=16 callers=0 calls=0
*/
void sub_148b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b860ULL || rel >= 0x148b870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b870 size=16 callers=0 calls=0
*/
void sub_148b870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b870ULL || rel >= 0x148b880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b880 size=16 callers=0 calls=0
*/
void sub_148b880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b880ULL || rel >= 0x148b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b890 size=16 callers=0 calls=0
*/
void sub_148b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b890ULL || rel >= 0x148b8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b8a0 size=16 callers=0 calls=0
*/
void sub_148b8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b8a0ULL || rel >= 0x148b8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b8b0 size=16 callers=0 calls=0
*/
void sub_148b8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b8b0ULL || rel >= 0x148b8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b8c0 size=16 callers=0 calls=0
*/
void sub_148b8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b8c0ULL || rel >= 0x148b8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b8d0 size=16 callers=0 calls=0
*/
void sub_148b8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b8d0ULL || rel >= 0x148b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b8e0 size=16 callers=0 calls=0
*/
void sub_148b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b8e0ULL || rel >= 0x148b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b8f0 size=16 callers=0 calls=0
*/
void sub_148b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b8f0ULL || rel >= 0x148b900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b900 size=16 callers=0 calls=0
*/
void sub_148b900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b900ULL || rel >= 0x148b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b910 size=16 callers=0 calls=0
*/
void sub_148b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b910ULL || rel >= 0x148b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148b920 size=336 callers=9 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_148b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148b920ULL || rel >= 0x148ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148ba70 size=16 callers=0 calls=0
*/
void sub_148ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148ba70ULL || rel >= 0x148ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148ba80 size=16 callers=0 calls=0
*/
void sub_148ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148ba80ULL || rel >= 0x148ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148ba90 size=16 callers=0 calls=0
*/
void sub_148ba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148ba90ULL || rel >= 0x148baa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148baa0 size=16 callers=0 calls=0
*/
void sub_148baa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148baa0ULL || rel >= 0x148bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148bab0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148bab0ULL || rel >= 0x148bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148bbf0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148bbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148bbf0ULL || rel >= 0x148bd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148bd30 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148bd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148bd30ULL || rel >= 0x148be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148be70 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148be70ULL || rel >= 0x148bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148bfb0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148bfb0ULL || rel >= 0x148c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148c0f0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148c0f0ULL || rel >= 0x148c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148c230 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148c230ULL || rel >= 0x148c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148c370 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148c370ULL || rel >= 0x148c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148c4b0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148c4b0ULL || rel >= 0x148c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148c5f0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148c5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148c5f0ULL || rel >= 0x148c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148c730 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148c730ULL || rel >= 0x148c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148c870 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148c870ULL || rel >= 0x148c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148c9b0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148c9b0ULL || rel >= 0x148caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148caf0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148caf0ULL || rel >= 0x148cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148cc30 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148cc30ULL || rel >= 0x148cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148cd70 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148cd70ULL || rel >= 0x148ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148ceb0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148ceb0ULL || rel >= 0x148cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148cff0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148cff0ULL || rel >= 0x148d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148d130 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148d130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148d130ULL || rel >= 0x148d270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148d270 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148d270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148d270ULL || rel >= 0x148d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148d3b0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148d3b0ULL || rel >= 0x148d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148d4f0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148d4f0ULL || rel >= 0x148d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148d630 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148d630ULL || rel >= 0x148d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148d770 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_148d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148d770ULL || rel >= 0x148d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148d8b0 size=1344 callers=0 calls=13
   calls: sub_148e000, sub_148e150, sub_67b990, sub_67d450, sub_795bc0, sub_c39c40, sub_d0c0, sub_e7eb10, sub_e806b0, sub_eb6230, sub_eb7570, sub_eb75e0
   ... +1 more
   ref: OptionBar
   ref: ViewTop
   ref: ViewBackGround
   ref: State_First
*/
void ViewBackGround(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148d8b0ULL || rel >= 0x148ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148ddf0 size=80 callers=0 calls=2
   calls: sub_eb6530, sub_eb7790
*/
void sub_148ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148ddf0ULL || rel >= 0x148de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148de40 size=16 callers=0 calls=0
*/
void sub_148de40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148de40ULL || rel >= 0x148de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148de50 size=16 callers=0 calls=0
*/
void sub_148de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148de50ULL || rel >= 0x148de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148de60 size=16 callers=0 calls=0
*/
void sub_148de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148de60ULL || rel >= 0x148de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148de70 size=16 callers=0 calls=0
*/
void sub_148de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148de70ULL || rel >= 0x148de80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148de80 size=16 callers=0 calls=0
*/
void sub_148de80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148de80ULL || rel >= 0x148de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148de90 size=16 callers=0 calls=0
*/
void sub_148de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148de90ULL || rel >= 0x148dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148dea0 size=16 callers=0 calls=0
*/
void sub_148dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148dea0ULL || rel >= 0x148deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148deb0 size=16 callers=0 calls=0
*/
void sub_148deb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148deb0ULL || rel >= 0x148dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148dec0 size=16 callers=0 calls=0
*/
void sub_148dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148dec0ULL || rel >= 0x148ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148ded0 size=304 callers=0 calls=0
*/
void sub_148ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148ded0ULL || rel >= 0x148e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e000 size=336 callers=8 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_148e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e000ULL || rel >= 0x148e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e150 size=336 callers=7 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_148e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e150ULL || rel >= 0x148e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e2a0 size=1280 callers=0 calls=13
   calls: sub_148b920, sub_148e9a0, sub_149fa80, sub_149faa0, sub_14a1a80, sub_67b990, sub_67d450, sub_795bc0, sub_c39c40, sub_d0c0, sub_e7eb10, sub_eb7570
   ... +1 more
   ref: OptionBar
   ref: State_Option
   ref: ViewNavigator
   ref: ViewOption
*/
void ViewNavigator(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e2a0ULL || rel >= 0x148e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e7a0 size=64 callers=0 calls=1
   calls: sub_14a1af0
*/
void sub_148e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e7a0ULL || rel >= 0x148e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e7e0 size=16 callers=0 calls=0
*/
void sub_148e7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e7e0ULL || rel >= 0x148e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e7f0 size=16 callers=0 calls=0
*/
void sub_148e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e7f0ULL || rel >= 0x148e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e800 size=16 callers=0 calls=0
*/
void sub_148e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e800ULL || rel >= 0x148e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e810 size=16 callers=0 calls=0
*/
void sub_148e810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e810ULL || rel >= 0x148e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e820 size=16 callers=0 calls=0
*/
void sub_148e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e820ULL || rel >= 0x148e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e830 size=16 callers=0 calls=0
*/
void sub_148e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e830ULL || rel >= 0x148e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e840 size=16 callers=0 calls=0
*/
void sub_148e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e840ULL || rel >= 0x148e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e850 size=16 callers=0 calls=0
*/
void sub_148e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e850ULL || rel >= 0x148e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e860 size=16 callers=0 calls=0
*/
void sub_148e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e860ULL || rel >= 0x148e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e870 size=304 callers=0 calls=0
*/
void sub_148e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e870ULL || rel >= 0x148e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148e9a0 size=336 callers=11 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_148e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148e9a0ULL || rel >= 0x148eaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148eaf0 size=1280 callers=0 calls=13
   calls: sub_148e9a0, sub_148f1f0, sub_149fa80, sub_149faa0, sub_14a7830, sub_67b990, sub_67d450, sub_795bc0, sub_c39c40, sub_d0c0, sub_e7eb10, sub_eb7570
   ... +1 more
   ref: State_Update
   ref: OptionBar
   ref: ViewNavigator
   ref: ViewYesNo
*/
void ViewNavigator_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148eaf0ULL || rel >= 0x148eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148eff0 size=64 callers=0 calls=1
   calls: sub_14a7890
*/
void sub_148eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148eff0ULL || rel >= 0x148f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f030 size=16 callers=0 calls=0
*/
void sub_148f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f030ULL || rel >= 0x148f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f040 size=16 callers=0 calls=0
*/
void sub_148f040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f040ULL || rel >= 0x148f050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f050 size=16 callers=0 calls=0
*/
void sub_148f050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f050ULL || rel >= 0x148f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f060 size=16 callers=0 calls=0
*/
void sub_148f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f060ULL || rel >= 0x148f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f070 size=16 callers=0 calls=0
*/
void sub_148f070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f070ULL || rel >= 0x148f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f080 size=16 callers=0 calls=0
*/
void sub_148f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f080ULL || rel >= 0x148f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f090 size=16 callers=0 calls=0
*/
void sub_148f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f090ULL || rel >= 0x148f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f0a0 size=16 callers=0 calls=0
*/
void sub_148f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f0a0ULL || rel >= 0x148f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f0b0 size=16 callers=0 calls=0
*/
void sub_148f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f0b0ULL || rel >= 0x148f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f0c0 size=304 callers=0 calls=0
*/
void sub_148f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f0c0ULL || rel >= 0x148f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f1f0 size=336 callers=8 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_148f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f1f0ULL || rel >= 0x148f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f340 size=752 callers=0 calls=7
   calls: sub_148e000, sub_148e150, sub_795bc0, sub_c39c40, sub_d0c0, sub_eb6230, sub_eb77f0
   ref: OptionBar
   ref: ViewTop
   ref: State_TopToEnd
   ref: ViewBackGround
*/
void ViewBackGround_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f340ULL || rel >= 0x148f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f630 size=80 callers=0 calls=2
   calls: sub_eb6530, sub_eb7830
*/
void sub_148f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f630ULL || rel >= 0x148f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f680 size=80 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_148f680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f680ULL || rel >= 0x148f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f6d0 size=16 callers=0 calls=0
*/
void sub_148f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f6d0ULL || rel >= 0x148f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f6e0 size=16 callers=0 calls=0
*/
void sub_148f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f6e0ULL || rel >= 0x148f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f6f0 size=16 callers=0 calls=0
*/
void sub_148f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f6f0ULL || rel >= 0x148f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f700 size=16 callers=0 calls=0
*/
void sub_148f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f700ULL || rel >= 0x148f710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f710 size=16 callers=0 calls=0
*/
void sub_148f710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f710ULL || rel >= 0x148f720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f720 size=16 callers=0 calls=0
*/
void sub_148f720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f720ULL || rel >= 0x148f730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f730 size=16 callers=0 calls=0
*/
void sub_148f730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f730ULL || rel >= 0x148f740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f740 size=16 callers=0 calls=0
*/
void sub_148f740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f740ULL || rel >= 0x148f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f750 size=304 callers=0 calls=0
*/
void sub_148f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f750ULL || rel >= 0x148f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148f880 size=624 callers=0 calls=9
   calls: sub_137b940, sub_1489610, sub_148b920, sub_14a0cf0, sub_14bf9c0, sub_1502120, sub_5cfad0, sub_c39c40, sub_d0c0
   ref: State_BuyPayOff
   ref: ViewOption
*/
void State_BuyPayOff(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f880ULL || rel >= 0x148faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148faf0 size=64 callers=0 calls=2
   calls: sub_14bfb80, sub_1502160
*/
void sub_148faf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148faf0ULL || rel >= 0x148fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148fb30 size=16 callers=0 calls=0
*/
void sub_148fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148fb30ULL || rel >= 0x148fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148fb40 size=96 callers=0 calls=0
*/
void sub_148fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148fb40ULL || rel >= 0x148fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148fba0 size=96 callers=0 calls=0
*/
void sub_148fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148fba0ULL || rel >= 0x148fc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148fc00 size=16 callers=0 calls=0
*/
void sub_148fc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148fc00ULL || rel >= 0x148fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148fc10 size=96 callers=0 calls=0
*/
void sub_148fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148fc10ULL || rel >= 0x148fc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148fc70 size=96 callers=0 calls=0
*/
void sub_148fc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148fc70ULL || rel >= 0x148fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148fcd0 size=16 callers=0 calls=0
*/
void sub_148fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148fcd0ULL || rel >= 0x148fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148fce0 size=16 callers=0 calls=0
*/
void sub_148fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148fce0ULL || rel >= 0x148fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148fcf0 size=96 callers=0 calls=0
*/
void sub_148fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148fcf0ULL || rel >= 0x148fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148fd50 size=96 callers=0 calls=0
*/
void sub_148fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148fd50ULL || rel >= 0x148fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148fdb0 size=304 callers=0 calls=0
*/
void sub_148fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148fdb0ULL || rel >= 0x148fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0148fee0 size=304 callers=0 calls=0
*/
void sub_148fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148fee0ULL || rel >= 0x1490010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490010 size=1392 callers=0 calls=14
   calls: sub_1489610, sub_148b4d0, sub_148e9a0, sub_149db40, sub_149fa80, sub_149faa0, sub_67b990, sub_67d450, sub_795bc0, sub_c39c40, sub_d0c0, sub_e7eb10
   ... +2 more
   ref: OptionBar
   ref: ViewCustomize
   ref: State_Customize
   ref: ViewNavigator
*/
void State_Customize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490010ULL || rel >= 0x1490580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490580 size=160 callers=0 calls=6
   calls: sub_149dbc0, sub_149dc20, sub_149dce0, sub_149dd90, sub_149ddb0, sub_14bf9c0
*/
void sub_1490580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490580ULL || rel >= 0x1490620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490620 size=16 callers=0 calls=0
*/
void sub_1490620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490620ULL || rel >= 0x1490630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490630 size=96 callers=0 calls=0
*/
void sub_1490630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490630ULL || rel >= 0x1490690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490690 size=96 callers=0 calls=0
*/
void sub_1490690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490690ULL || rel >= 0x14906f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014906f0 size=16 callers=0 calls=0
*/
void sub_14906f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14906f0ULL || rel >= 0x1490700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490700 size=96 callers=0 calls=0
*/
void sub_1490700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490700ULL || rel >= 0x1490760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490760 size=96 callers=0 calls=0
*/
void sub_1490760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490760ULL || rel >= 0x14907c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014907c0 size=16 callers=0 calls=0
*/
void sub_14907c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14907c0ULL || rel >= 0x14907d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014907d0 size=16 callers=0 calls=0
*/
void sub_14907d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14907d0ULL || rel >= 0x14907e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014907e0 size=96 callers=0 calls=0
*/
void sub_14907e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14907e0ULL || rel >= 0x1490840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490840 size=96 callers=0 calls=0
*/
void sub_1490840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490840ULL || rel >= 0x14908a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014908a0 size=304 callers=0 calls=0
*/
void sub_14908a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14908a0ULL || rel >= 0x14909d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014909d0 size=800 callers=0 calls=6
   calls: sub_1345ca0, sub_1345cb0, sub_1489610, sub_14be490, sub_14bea40, sub_d0c0
   ref: State_SaveCreate
*/
void State_SaveCreate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14909d0ULL || rel >= 0x1490cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490cf0 size=16 callers=0 calls=0
*/
void sub_1490cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490cf0ULL || rel >= 0x1490d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490d00 size=16 callers=0 calls=0
*/
void sub_1490d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490d00ULL || rel >= 0x1490d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490d10 size=16 callers=0 calls=0
*/
void sub_1490d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490d10ULL || rel >= 0x1490d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490d20 size=16 callers=0 calls=0
*/
void sub_1490d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490d20ULL || rel >= 0x1490d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490d30 size=16 callers=0 calls=0
*/
void sub_1490d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490d30ULL || rel >= 0x1490d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490d40 size=16 callers=0 calls=0
*/
void sub_1490d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490d40ULL || rel >= 0x1490d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490d50 size=16 callers=0 calls=0
*/
void sub_1490d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490d50ULL || rel >= 0x1490d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490d60 size=16 callers=0 calls=0
*/
void sub_1490d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490d60ULL || rel >= 0x1490d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490d70 size=16 callers=0 calls=0
*/
void sub_1490d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490d70ULL || rel >= 0x1490d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490d80 size=16 callers=0 calls=0
*/
void sub_1490d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490d80ULL || rel >= 0x1490d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490d90 size=304 callers=0 calls=0
*/
void sub_1490d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490d90ULL || rel >= 0x1490ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01490ec0 size=672 callers=0 calls=4
   calls: sub_1345ca0, sub_1345cb0, sub_14be490, sub_d0c0
   ref: State_SaveUpdate
*/
void State_SaveUpdate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1490ec0ULL || rel >= 0x1491160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491160 size=16 callers=0 calls=0
*/
void sub_1491160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491160ULL || rel >= 0x1491170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491170 size=16 callers=0 calls=0
*/
void sub_1491170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491170ULL || rel >= 0x1491180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491180 size=16 callers=0 calls=0
*/
void sub_1491180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491180ULL || rel >= 0x1491190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491190 size=16 callers=0 calls=0
*/
void sub_1491190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491190ULL || rel >= 0x14911a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014911a0 size=16 callers=0 calls=0
*/
void sub_14911a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14911a0ULL || rel >= 0x14911b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014911b0 size=16 callers=0 calls=0
*/
void sub_14911b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14911b0ULL || rel >= 0x14911c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014911c0 size=16 callers=0 calls=0
*/
void sub_14911c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14911c0ULL || rel >= 0x14911d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014911d0 size=16 callers=0 calls=0
*/
void sub_14911d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14911d0ULL || rel >= 0x14911e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014911e0 size=16 callers=0 calls=0
*/
void sub_14911e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14911e0ULL || rel >= 0x14911f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014911f0 size=16 callers=0 calls=0
*/
void sub_14911f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14911f0ULL || rel >= 0x1491200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491200 size=304 callers=0 calls=0
*/
void sub_1491200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491200ULL || rel >= 0x1491330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491330 size=544 callers=0 calls=6
   calls: sub_148b920, sub_148f1f0, sub_14a1b30, sub_c39c40, sub_d0c0, sub_eb6230
   ref: ViewOption
   ref: ViewYesNo
   ref: State_BuyToOption
*/
void State_BuyToOption(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491330ULL || rel >= 0x1491550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491550 size=64 callers=0 calls=2
   calls: sub_14a1b50, sub_eb6530
*/
void sub_1491550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491550ULL || rel >= 0x1491590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491590 size=16 callers=0 calls=0
*/
void sub_1491590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491590ULL || rel >= 0x14915a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014915a0 size=16 callers=0 calls=0
*/
void sub_14915a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14915a0ULL || rel >= 0x14915b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014915b0 size=16 callers=0 calls=0
*/
void sub_14915b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14915b0ULL || rel >= 0x14915c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014915c0 size=16 callers=0 calls=0
*/
void sub_14915c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14915c0ULL || rel >= 0x14915d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014915d0 size=16 callers=0 calls=0
*/
void sub_14915d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14915d0ULL || rel >= 0x14915e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014915e0 size=16 callers=0 calls=0
*/
void sub_14915e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14915e0ULL || rel >= 0x14915f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014915f0 size=16 callers=0 calls=0
*/
void sub_14915f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14915f0ULL || rel >= 0x1491600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491600 size=16 callers=0 calls=0
*/
void sub_1491600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491600ULL || rel >= 0x1491610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491610 size=16 callers=0 calls=0
*/
void sub_1491610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491610ULL || rel >= 0x1491620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491620 size=304 callers=0 calls=0
*/
void sub_1491620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491620ULL || rel >= 0x1491750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491750 size=592 callers=0 calls=8
   calls: N_gloss_00, sub_148b920, sub_148f1f0, sub_14a1b40, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: ViewOption
   ref: ViewYesNo
   ref: State_OptionToBuy
*/
void State_OptionToBuy(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491750ULL || rel >= 0x14919a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014919a0 size=64 callers=0 calls=2
   calls: sub_14a1b70, sub_eb6530
*/
void sub_14919a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14919a0ULL || rel >= 0x14919e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014919e0 size=16 callers=0 calls=0
*/
void sub_14919e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14919e0ULL || rel >= 0x14919f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014919f0 size=16 callers=0 calls=0
*/
void sub_14919f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14919f0ULL || rel >= 0x1491a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491a00 size=16 callers=0 calls=0
*/
void sub_1491a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491a00ULL || rel >= 0x1491a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491a10 size=16 callers=0 calls=0
*/
void sub_1491a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491a10ULL || rel >= 0x1491a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491a20 size=16 callers=0 calls=0
*/
void sub_1491a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491a20ULL || rel >= 0x1491a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491a30 size=16 callers=0 calls=0
*/
void sub_1491a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491a30ULL || rel >= 0x1491a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491a40 size=16 callers=0 calls=0
*/
void sub_1491a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491a40ULL || rel >= 0x1491a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491a50 size=16 callers=0 calls=0
*/
void sub_1491a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491a50ULL || rel >= 0x1491a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491a60 size=16 callers=0 calls=0
*/
void sub_1491a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491a60ULL || rel >= 0x1491a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491a70 size=304 callers=0 calls=0
*/
void sub_1491a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491a70ULL || rel >= 0x1491ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01491ba0 size=1280 callers=0 calls=13
   calls: sub_148b710, sub_148e9a0, sub_149fa80, sub_149faa0, sub_14a44f0, sub_67b990, sub_67d450, sub_795bc0, sub_c39c40, sub_d0c0, sub_e7eb10, sub_eb7570
   ... +1 more
   ref: OptionBar
   ref: ViewNavigator
   ref: ViewPhotography
   ref: State_Photography
*/
void State_Photography(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491ba0ULL || rel >= 0x14920a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014920a0 size=32 callers=0 calls=0
*/
void sub_14920a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14920a0ULL || rel >= 0x14920c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014920c0 size=16 callers=0 calls=0
*/
void sub_14920c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14920c0ULL || rel >= 0x14920d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014920d0 size=16 callers=0 calls=0
*/
void sub_14920d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14920d0ULL || rel >= 0x14920e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014920e0 size=16 callers=0 calls=0
*/
void sub_14920e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14920e0ULL || rel >= 0x14920f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014920f0 size=16 callers=0 calls=0
*/
void sub_14920f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14920f0ULL || rel >= 0x1492100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492100 size=16 callers=0 calls=0
*/
void sub_1492100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492100ULL || rel >= 0x1492110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492110 size=16 callers=0 calls=0
*/
void sub_1492110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492110ULL || rel >= 0x1492120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492120 size=16 callers=0 calls=0
*/
void sub_1492120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492120ULL || rel >= 0x1492130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492130 size=16 callers=0 calls=0
*/
void sub_1492130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492130ULL || rel >= 0x1492140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492140 size=16 callers=0 calls=0
*/
void sub_1492140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492140ULL || rel >= 0x1492150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492150 size=304 callers=0 calls=0
*/
void sub_1492150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492150ULL || rel >= 0x1492280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492280 size=1232 callers=0 calls=11
   calls: N_gloss_00, sub_148e000, sub_148e150, sub_148e9a0, sub_148f1f0, sub_1492970, sub_149abd0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: ViewTop
   ref: ViewNavigator
   ref: State_TopToUpdate
   ref: ViewBackGround
   ref: ViewYesNo
   ref: ViewCard
*/
void State_TopToUpdate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492280ULL || rel >= 0x1492750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492750 size=96 callers=0 calls=2
   calls: sub_149ac10, sub_eb6530
*/
void sub_1492750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492750ULL || rel >= 0x14927b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014927b0 size=16 callers=0 calls=0
*/
void sub_14927b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14927b0ULL || rel >= 0x14927c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014927c0 size=16 callers=0 calls=0
*/
void sub_14927c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14927c0ULL || rel >= 0x14927d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014927d0 size=16 callers=0 calls=0
*/
void sub_14927d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14927d0ULL || rel >= 0x14927e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014927e0 size=16 callers=0 calls=0
*/
void sub_14927e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14927e0ULL || rel >= 0x14927f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014927f0 size=16 callers=0 calls=0
*/
void sub_14927f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14927f0ULL || rel >= 0x1492800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492800 size=16 callers=0 calls=0
*/
void sub_1492800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492800ULL || rel >= 0x1492810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492810 size=16 callers=0 calls=0
*/
void sub_1492810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492810ULL || rel >= 0x1492820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492820 size=16 callers=0 calls=0
*/
void sub_1492820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492820ULL || rel >= 0x1492830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492830 size=16 callers=0 calls=0
*/
void sub_1492830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492830ULL || rel >= 0x1492840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492840 size=304 callers=0 calls=0
*/
void sub_1492840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492840ULL || rel >= 0x1492970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492970 size=336 callers=6 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1492970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492970ULL || rel >= 0x1492ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492ac0 size=1152 callers=0 calls=9
   calls: sub_148e000, sub_148e9a0, sub_148f1f0, sub_1492970, sub_795bc0, sub_c39c40, sub_d0c0, sub_eb6230, sub_eb77f0
   ref: OptionBar
   ref: State_UpdateToEnd
   ref: ViewNavigator
   ref: ViewBackGround
   ref: ViewYesNo
   ref: ViewCard
*/
void State_UpdateToEnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492ac0ULL || rel >= 0x1492f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492f40 size=96 callers=0 calls=2
   calls: sub_eb6530, sub_eb7830
*/
void sub_1492f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492f40ULL || rel >= 0x1492fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01492fa0 size=112 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_1492fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1492fa0ULL || rel >= 0x1493010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493010 size=16 callers=0 calls=0
*/
void sub_1493010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493010ULL || rel >= 0x1493020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493020 size=16 callers=0 calls=0
*/
void sub_1493020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493020ULL || rel >= 0x1493030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493030 size=16 callers=0 calls=0
*/
void sub_1493030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493030ULL || rel >= 0x1493040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493040 size=16 callers=0 calls=0
*/
void sub_1493040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493040ULL || rel >= 0x1493050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493050 size=16 callers=0 calls=0
*/
void sub_1493050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493050ULL || rel >= 0x1493060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493060 size=16 callers=0 calls=0
*/
void sub_1493060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493060ULL || rel >= 0x1493070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493070 size=16 callers=0 calls=0
*/
void sub_1493070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493070ULL || rel >= 0x1493080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493080 size=16 callers=0 calls=0
*/
void sub_1493080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493080ULL || rel >= 0x1493090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493090 size=304 callers=0 calls=0
*/
void sub_1493090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493090ULL || rel >= 0x14931c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014931c0 size=1280 callers=0 calls=11
   calls: sub_1489610, sub_148e000, sub_148e150, sub_148e9a0, sub_148f1f0, sub_1492970, sub_149abd0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: State_UpdateToTop
   ref: ViewTop
   ref: ViewNavigator
   ref: ViewBackGround
   ref: ViewYesNo
   ref: ViewCard
*/
void State_UpdateToTop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14931c0ULL || rel >= 0x14936c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014936c0 size=96 callers=0 calls=2
   calls: sub_149ac10, sub_eb6530
*/
void sub_14936c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14936c0ULL || rel >= 0x1493720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493720 size=80 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_1493720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493720ULL || rel >= 0x1493770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493770 size=96 callers=0 calls=0
*/
void sub_1493770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493770ULL || rel >= 0x14937d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014937d0 size=96 callers=0 calls=0
*/
void sub_14937d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14937d0ULL || rel >= 0x1493830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493830 size=16 callers=0 calls=0
*/
void sub_1493830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493830ULL || rel >= 0x1493840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493840 size=96 callers=0 calls=0
*/
void sub_1493840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493840ULL || rel >= 0x14938a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014938a0 size=96 callers=0 calls=0
*/
void sub_14938a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14938a0ULL || rel >= 0x1493900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493900 size=16 callers=0 calls=0
*/
void sub_1493900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493900ULL || rel >= 0x1493910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493910 size=16 callers=0 calls=0
*/
void sub_1493910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493910ULL || rel >= 0x1493920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493920 size=96 callers=0 calls=0
*/
void sub_1493920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493920ULL || rel >= 0x1493980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493980 size=96 callers=0 calls=0
*/
void sub_1493980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493980ULL || rel >= 0x14939e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014939e0 size=304 callers=0 calls=0
*/
void sub_14939e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14939e0ULL || rel >= 0x1493b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01493b10 size=1280 callers=0 calls=11
   calls: sub_1489610, sub_148b4d0, sub_148e000, sub_148e150, sub_148e9a0, sub_1492970, sub_149abd0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: ViewCustomize
   ref: ViewTop
   ref: ViewNavigator
   ref: ViewBackGround
   ref: State_CustomizeToTop
   ref: ViewCard
*/
void State_CustomizeToTop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1493b10ULL || rel >= 0x1494010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494010 size=96 callers=0 calls=2
   calls: sub_149ac10, sub_eb6530
*/
void sub_1494010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494010ULL || rel >= 0x1494070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494070 size=80 callers=0 calls=2
   calls: sub_149f950, sub_e806b0
*/
void sub_1494070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494070ULL || rel >= 0x14940c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014940c0 size=96 callers=0 calls=0
*/
void sub_14940c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14940c0ULL || rel >= 0x1494120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494120 size=96 callers=0 calls=0
*/
void sub_1494120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494120ULL || rel >= 0x1494180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494180 size=16 callers=0 calls=0
*/
void sub_1494180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494180ULL || rel >= 0x1494190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494190 size=96 callers=0 calls=0
*/
void sub_1494190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494190ULL || rel >= 0x14941f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014941f0 size=96 callers=0 calls=0
*/
void sub_14941f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14941f0ULL || rel >= 0x1494250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494250 size=16 callers=0 calls=0
*/
void sub_1494250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494250ULL || rel >= 0x1494260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494260 size=16 callers=0 calls=0
*/
void sub_1494260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494260ULL || rel >= 0x1494270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494270 size=96 callers=0 calls=0
*/
void sub_1494270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494270ULL || rel >= 0x14942d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014942d0 size=96 callers=0 calls=0
*/
void sub_14942d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14942d0ULL || rel >= 0x1494330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494330 size=304 callers=0 calls=0
*/
void sub_1494330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494330ULL || rel >= 0x1494460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494460 size=1424 callers=0 calls=14
   calls: sub_148b4d0, sub_148b710, sub_148e000, sub_148e150, sub_148e9a0, sub_1492970, sub_149abd0, sub_149e5d0, sub_149e880, sub_14a42a0, sub_c39c40, sub_d0c0
   ... +2 more
   ref: ViewCustomize
   ref: ViewTop
   ref: ViewNavigator
   ref: State_TopToCustomize
   ref: ViewBackGround
   ref: ViewPhotography
   ref: ViewCard
*/
void State_TopToCustomize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494460ULL || rel >= 0x14949f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014949f0 size=96 callers=0 calls=2
   calls: sub_149ac10, sub_eb6530
*/
void sub_14949f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14949f0ULL || rel >= 0x1494a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494a50 size=16 callers=0 calls=0
*/
void sub_1494a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494a50ULL || rel >= 0x1494a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494a60 size=16 callers=0 calls=0
*/
void sub_1494a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494a60ULL || rel >= 0x1494a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494a70 size=16 callers=0 calls=0
*/
void sub_1494a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494a70ULL || rel >= 0x1494a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494a80 size=16 callers=0 calls=0
*/
void sub_1494a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494a80ULL || rel >= 0x1494a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494a90 size=16 callers=0 calls=0
*/
void sub_1494a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494a90ULL || rel >= 0x1494aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494aa0 size=16 callers=0 calls=0
*/
void sub_1494aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494aa0ULL || rel >= 0x1494ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494ab0 size=16 callers=0 calls=0
*/
void sub_1494ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494ab0ULL || rel >= 0x1494ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494ac0 size=16 callers=0 calls=0
*/
void sub_1494ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494ac0ULL || rel >= 0x1494ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494ad0 size=16 callers=0 calls=0
*/
void sub_1494ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494ad0ULL || rel >= 0x1494ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494ae0 size=304 callers=0 calls=0
*/
void sub_1494ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494ae0ULL || rel >= 0x1494c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494c10 size=336 callers=0 calls=4
   calls: sub_148b710, sub_14a46e0, sub_c39c40, sub_d0c0
   ref: State_PhotographyList
   ref: ViewPhotography
*/
void State_PhotographyList(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494c10ULL || rel >= 0x1494d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494d60 size=224 callers=0 calls=4
   calls: sub_14a4600, sub_14a4770, sub_14a4800, sub_14a4860
*/
void sub_1494d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494d60ULL || rel >= 0x1494e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494e40 size=16 callers=0 calls=0
*/
void sub_1494e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494e40ULL || rel >= 0x1494e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494e50 size=16 callers=0 calls=0
*/
void sub_1494e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494e50ULL || rel >= 0x1494e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494e60 size=16 callers=0 calls=0
*/
void sub_1494e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494e60ULL || rel >= 0x1494e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494e70 size=16 callers=0 calls=0
*/
void sub_1494e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494e70ULL || rel >= 0x1494e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494e80 size=16 callers=0 calls=0
*/
void sub_1494e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494e80ULL || rel >= 0x1494e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494e90 size=16 callers=0 calls=0
*/
void sub_1494e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494e90ULL || rel >= 0x1494ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494ea0 size=16 callers=0 calls=0
*/
void sub_1494ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494ea0ULL || rel >= 0x1494eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494eb0 size=16 callers=0 calls=0
*/
void sub_1494eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494eb0ULL || rel >= 0x1494ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494ec0 size=16 callers=0 calls=0
*/
void sub_1494ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494ec0ULL || rel >= 0x1494ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01494ed0 size=304 callers=0 calls=0
*/
void sub_1494ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494ed0ULL || rel >= 0x1495000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495000 size=304 callers=0 calls=0
*/
void sub_1495000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495000ULL || rel >= 0x1495130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495130 size=688 callers=0 calls=8
   calls: sub_1489610, sub_148b710, sub_148b920, sub_14bf9c0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: State_OptionToPhotography
   ref: ViewOption
   ref: ViewPhotography
*/
void State_OptionToPhotography(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495130ULL || rel >= 0x14953e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014953e0 size=80 callers=0 calls=2
   calls: sub_14bfb80, sub_eb6530
*/
void sub_14953e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14953e0ULL || rel >= 0x1495430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495430 size=16 callers=0 calls=0
*/
void sub_1495430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495430ULL || rel >= 0x1495440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495440 size=96 callers=0 calls=0
*/
void sub_1495440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495440ULL || rel >= 0x14954a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014954a0 size=96 callers=0 calls=0
*/
void sub_14954a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14954a0ULL || rel >= 0x1495500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495500 size=16 callers=0 calls=0
*/
void sub_1495500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495500ULL || rel >= 0x1495510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495510 size=96 callers=0 calls=0
*/
void sub_1495510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495510ULL || rel >= 0x1495570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495570 size=96 callers=0 calls=0
*/
void sub_1495570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495570ULL || rel >= 0x14955d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014955d0 size=16 callers=0 calls=0
*/
void sub_14955d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14955d0ULL || rel >= 0x14955e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014955e0 size=16 callers=0 calls=0
*/
void sub_14955e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14955e0ULL || rel >= 0x14955f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014955f0 size=96 callers=0 calls=0
*/
void sub_14955f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14955f0ULL || rel >= 0x1495650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495650 size=96 callers=0 calls=0
*/
void sub_1495650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495650ULL || rel >= 0x14956b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014956b0 size=304 callers=0 calls=0
*/
void sub_14956b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14956b0ULL || rel >= 0x14957e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014957e0 size=688 callers=0 calls=8
   calls: sub_1489610, sub_148b710, sub_148b920, sub_14bf9c0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: State_PhotographyToOption
   ref: ViewOption
   ref: ViewPhotography
*/
void State_PhotographyToOption(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14957e0ULL || rel >= 0x1495a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495a90 size=80 callers=0 calls=2
   calls: sub_14bfb80, sub_eb6530
*/
void sub_1495a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495a90ULL || rel >= 0x1495ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495ae0 size=16 callers=0 calls=0
*/
void sub_1495ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495ae0ULL || rel >= 0x1495af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495af0 size=96 callers=0 calls=0
*/
void sub_1495af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495af0ULL || rel >= 0x1495b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495b50 size=96 callers=0 calls=0
*/
void sub_1495b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495b50ULL || rel >= 0x1495bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495bb0 size=16 callers=0 calls=0
*/
void sub_1495bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495bb0ULL || rel >= 0x1495bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495bc0 size=96 callers=0 calls=0
*/
void sub_1495bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495bc0ULL || rel >= 0x1495c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495c20 size=96 callers=0 calls=0
*/
void sub_1495c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495c20ULL || rel >= 0x1495c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495c80 size=16 callers=0 calls=0
*/
void sub_1495c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495c80ULL || rel >= 0x1495c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495c90 size=16 callers=0 calls=0
*/
void sub_1495c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495c90ULL || rel >= 0x1495ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495ca0 size=96 callers=0 calls=0
*/
void sub_1495ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495ca0ULL || rel >= 0x1495d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495d00 size=96 callers=0 calls=0
*/
void sub_1495d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495d00ULL || rel >= 0x1495d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495d60 size=304 callers=0 calls=0
*/
void sub_1495d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495d60ULL || rel >= 0x1495e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01495e90 size=688 callers=0 calls=8
   calls: sub_1489610, sub_148b4d0, sub_148b710, sub_14bf9c0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: ViewCustomize
   ref: State_CustomizeToPhotography
   ref: ViewPhotography
*/
void State_CustomizeToPhotography(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1495e90ULL || rel >= 0x1496140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496140 size=80 callers=0 calls=2
   calls: sub_14bfb80, sub_eb6530
*/
void sub_1496140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496140ULL || rel >= 0x1496190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496190 size=16 callers=0 calls=0
*/
void sub_1496190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496190ULL || rel >= 0x14961a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014961a0 size=96 callers=0 calls=0
*/
void sub_14961a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14961a0ULL || rel >= 0x1496200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496200 size=96 callers=0 calls=0
*/
void sub_1496200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496200ULL || rel >= 0x1496260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496260 size=16 callers=0 calls=0
*/
void sub_1496260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496260ULL || rel >= 0x1496270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496270 size=96 callers=0 calls=0
*/
void sub_1496270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496270ULL || rel >= 0x14962d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014962d0 size=96 callers=0 calls=0
*/
void sub_14962d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14962d0ULL || rel >= 0x1496330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496330 size=16 callers=0 calls=0
*/
void sub_1496330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496330ULL || rel >= 0x1496340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496340 size=16 callers=0 calls=0
*/
void sub_1496340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496340ULL || rel >= 0x1496350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496350 size=96 callers=0 calls=0
*/
void sub_1496350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496350ULL || rel >= 0x14963b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014963b0 size=96 callers=0 calls=0
*/
void sub_14963b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14963b0ULL || rel >= 0x1496410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496410 size=304 callers=0 calls=0
*/
void sub_1496410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496410ULL || rel >= 0x1496540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496540 size=688 callers=0 calls=8
   calls: sub_1489610, sub_148b4d0, sub_148b710, sub_14bf9c0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: ViewCustomize
   ref: State_PhotographyToCustomize
   ref: ViewPhotography
*/
void State_PhotographyToCustomize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496540ULL || rel >= 0x14967f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014967f0 size=80 callers=0 calls=2
   calls: sub_14bfb80, sub_eb6530
*/
void sub_14967f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14967f0ULL || rel >= 0x1496840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496840 size=16 callers=0 calls=0
*/
void sub_1496840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496840ULL || rel >= 0x1496850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496850 size=96 callers=0 calls=0
*/
void sub_1496850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496850ULL || rel >= 0x14968b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014968b0 size=96 callers=0 calls=0
*/
void sub_14968b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14968b0ULL || rel >= 0x1496910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496910 size=16 callers=0 calls=0
*/
void sub_1496910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496910ULL || rel >= 0x1496920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496920 size=96 callers=0 calls=0
*/
void sub_1496920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496920ULL || rel >= 0x1496980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496980 size=96 callers=0 calls=0
*/
void sub_1496980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496980ULL || rel >= 0x14969e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014969e0 size=16 callers=0 calls=0
*/
void sub_14969e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14969e0ULL || rel >= 0x14969f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014969f0 size=16 callers=0 calls=0
*/
void sub_14969f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14969f0ULL || rel >= 0x1496a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496a00 size=96 callers=0 calls=0
*/
void sub_1496a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496a00ULL || rel >= 0x1496a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496a60 size=96 callers=0 calls=0
*/
void sub_1496a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496a60ULL || rel >= 0x1496ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496ac0 size=304 callers=0 calls=0
*/
void sub_1496ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496ac0ULL || rel >= 0x1496bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01496bf0 size=1488 callers=0 calls=15
   calls: sub_148b920, sub_148e9a0, sub_148f1f0, sub_149fa80, sub_149faa0, sub_149fb70, sub_14a7830, sub_67b990, sub_67d450, sub_795bc0, sub_c39c40, sub_d0c0
   ... +3 more
   ref: OptionBar
   ref: ViewNavigator
   ref: State_Buy
   ref: ViewOption
   ref: ViewYesNo
*/
void ViewNavigator_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1496bf0ULL || rel >= 0x14971c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014971c0 size=64 callers=0 calls=1
   calls: sub_14a7890
*/
void sub_14971c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14971c0ULL || rel >= 0x1497200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497200 size=624 callers=0 calls=2
   calls: sub_1345ca0, sub_1345cb0
*/
void sub_1497200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497200ULL || rel >= 0x1497470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497470 size=16 callers=0 calls=0
*/
void sub_1497470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497470ULL || rel >= 0x1497480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497480 size=16 callers=0 calls=0
*/
void sub_1497480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497480ULL || rel >= 0x1497490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497490 size=16 callers=0 calls=0
*/
void sub_1497490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497490ULL || rel >= 0x14974a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014974a0 size=16 callers=0 calls=0
*/
void sub_14974a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14974a0ULL || rel >= 0x14974b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014974b0 size=16 callers=0 calls=0
*/
void sub_14974b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14974b0ULL || rel >= 0x14974c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014974c0 size=16 callers=0 calls=0
*/
void sub_14974c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14974c0ULL || rel >= 0x14974d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014974d0 size=16 callers=0 calls=0
*/
void sub_14974d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14974d0ULL || rel >= 0x14974e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014974e0 size=16 callers=0 calls=0
*/
void sub_14974e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14974e0ULL || rel >= 0x14974f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014974f0 size=304 callers=0 calls=0
*/
void sub_14974f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14974f0ULL || rel >= 0x1497620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497620 size=1360 callers=0 calls=10
   calls: sub_148b920, sub_148e000, sub_148e9a0, sub_148f1f0, sub_1492970, sub_795bc0, sub_c39c40, sub_d0c0, sub_eb6230, sub_eb77f0
   ref: OptionBar
   ref: State_End
   ref: ViewNavigator
   ref: ViewBackGround
   ref: ViewOption
   ref: ViewYesNo
   ref: ViewCard
*/
void ViewBackGround_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497620ULL || rel >= 0x1497b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497b70 size=112 callers=0 calls=2
   calls: sub_eb6530, sub_eb7830
*/
void sub_1497b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497b70ULL || rel >= 0x1497be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497be0 size=128 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_1497be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497be0ULL || rel >= 0x1497c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497c60 size=16 callers=0 calls=0
*/
void sub_1497c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497c60ULL || rel >= 0x1497c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497c70 size=16 callers=0 calls=0
*/
void sub_1497c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497c70ULL || rel >= 0x1497c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497c80 size=16 callers=0 calls=0
*/
void sub_1497c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497c80ULL || rel >= 0x1497c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497c90 size=16 callers=0 calls=0
*/
void sub_1497c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497c90ULL || rel >= 0x1497ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497ca0 size=16 callers=0 calls=0
*/
void sub_1497ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497ca0ULL || rel >= 0x1497cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497cb0 size=16 callers=0 calls=0
*/
void sub_1497cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497cb0ULL || rel >= 0x1497cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497cc0 size=16 callers=0 calls=0
*/
void sub_1497cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497cc0ULL || rel >= 0x1497cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497cd0 size=16 callers=0 calls=0
*/
void sub_1497cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497cd0ULL || rel >= 0x1497ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497ce0 size=304 callers=0 calls=0
*/
void sub_1497ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497ce0ULL || rel >= 0x1497e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01497e10 size=1200 callers=0 calls=11
   calls: sub_1489610, sub_148e150, sub_14a6120, sub_67b990, sub_67d450, sub_795bc0, sub_c39c40, sub_d0c0, sub_e7eb10, sub_eb7570, sub_eb75e0
   ref: OptionBar
   ref: ViewTop
   ref: State_Top
*/
void State_Top(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1497e10ULL || rel >= 0x14982c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014982c0 size=112 callers=0 calls=3
   calls: sub_1498330, sub_14985a0, sub_14a6170
*/
void sub_14982c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14982c0ULL || rel >= 0x1498330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01498330 size=624 callers=1 calls=3
   calls: sub_1345ca0, sub_14be490, sub_14bf750
*/
void sub_1498330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498330ULL || rel >= 0x14985a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014985a0 size=624 callers=1 calls=3
   calls: sub_1345ca0, sub_14be490, sub_14bf750
*/
void sub_14985a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14985a0ULL || rel >= 0x1498810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01498810 size=16 callers=0 calls=0
*/
void sub_1498810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498810ULL || rel >= 0x1498820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01498820 size=96 callers=0 calls=0
*/
void sub_1498820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498820ULL || rel >= 0x1498880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01498880 size=96 callers=0 calls=0
*/
void sub_1498880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498880ULL || rel >= 0x14988e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014988e0 size=16 callers=0 calls=0
*/
void sub_14988e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14988e0ULL || rel >= 0x14988f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014988f0 size=96 callers=0 calls=0
*/
void sub_14988f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14988f0ULL || rel >= 0x1498950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01498950 size=96 callers=0 calls=0
*/
void sub_1498950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498950ULL || rel >= 0x14989b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014989b0 size=16 callers=0 calls=0
*/
void sub_14989b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14989b0ULL || rel >= 0x14989c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014989c0 size=16 callers=0 calls=0
*/
void sub_14989c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14989c0ULL || rel >= 0x14989d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014989d0 size=96 callers=0 calls=0
*/
void sub_14989d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14989d0ULL || rel >= 0x1498a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01498a30 size=96 callers=0 calls=0
*/
void sub_1498a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498a30ULL || rel >= 0x1498a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01498a90 size=304 callers=0 calls=0
*/
void sub_1498a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498a90ULL || rel >= 0x1498bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01498bc0 size=448 callers=1 calls=1
   calls: sub_149a940
*/
void sub_1498bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498bc0ULL || rel >= 0x1498d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01498d80 size=16 callers=1 calls=0
*/
void sub_1498d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498d80ULL || rel >= 0x1498d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01498d90 size=288 callers=0 calls=8
   calls: FacialAnimMax, sub_14991e0, sub_687680, sub_687770, sub_c47a90, thmbTexName, thmbTexName_2, thmbTexName_3
*/
void sub_1498d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498d90ULL || rel >= 0x1498eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01498eb0 size=176 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_1498eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498eb0ULL || rel >= 0x1498f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01498f60 size=192 callers=5 calls=3
   calls: sub_149a750, sub_687a20, sub_687a40
*/
void sub_1498f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1498f60ULL || rel >= 0x1499020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01499020 size=112 callers=0 calls=1
   calls: sub_149a940
*/
void sub_1499020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1499020ULL || rel >= 0x1499090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01499090 size=112 callers=0 calls=1
   calls: sub_149a940
*/
void sub_1499090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1499090ULL || rel >= 0x1499100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01499100 size=112 callers=0 calls=1
   calls: sub_149a940
*/
void sub_1499100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1499100ULL || rel >= 0x1499170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01499170 size=112 callers=0 calls=1
   calls: sub_149a940
*/
void sub_1499170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1499170ULL || rel >= 0x14991e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014991e0 size=304 callers=1 calls=3
   calls: sub_1306f20, sub_5e2930, sub_c47200
*/
void sub_14991e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14991e0ULL || rel >= 0x1499310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01499310 size=1152 callers=1 calls=10
   calls: sub_1106320, sub_11063e0, sub_11065b0, sub_11069b0, sub_1106f30, sub_1306f20, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0
   ref: bg1Data
   ref: thmbTexName
   ref: TextureMax
*/
void thmbTexName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1499310ULL || rel >= 0x1499790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01499790 size=1152 callers=1 calls=10
   calls: sub_1106320, sub_11063e0, sub_11065b0, sub_11069b0, sub_1106f30, sub_1306f20, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0
   ref: bg2Data
   ref: thmbTexName
   ref: TextureMax
*/
void thmbTexName_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1499790ULL || rel >= 0x1499c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01499c10 size=1152 callers=1 calls=10
   calls: sub_1106320, sub_11063e0, sub_11065b0, sub_11069b0, sub_1106f30, sub_1306f20, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0
   ref: thmbTexName
   ref: frameData
   ref: TextureMax
*/
void thmbTexName_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1499c10ULL || rel >= 0x149a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149a090 size=1728 callers=1 calls=10
   calls: sub_1106320, sub_11063e0, sub_11065b0, sub_11069b0, sub_1106f30, sub_1306f20, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0
   ref: facialData
   ref: thmbTexName
   ref: FacialAnimMax
   ref: PoseAnimMax
   ref: poseData
*/
void FacialAnimMax(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149a090ULL || rel >= 0x149a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149a750 size=496 callers=1 calls=0
*/
void sub_149a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149a750ULL || rel >= 0x149a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149a940 size=368 callers=5 calls=1
   calls: sub_5e2bc0
*/
void sub_149a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149a940ULL || rel >= 0x149aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149aab0 size=16 callers=0 calls=0
*/
void sub_149aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149aab0ULL || rel >= 0x149aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149aac0 size=272 callers=0 calls=1
   calls: sub_c46830
*/
void sub_149aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149aac0ULL || rel >= 0x149abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149abd0 size=64 callers=4 calls=0
*/
void sub_149abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149abd0ULL || rel >= 0x149ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ac10 size=112 callers=4 calls=1
   calls: sub_14ab2b0
*/
void sub_149ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ac10ULL || rel >= 0x149ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ac80 size=16 callers=0 calls=0
*/
void sub_149ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ac80ULL || rel >= 0x149ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ac90 size=16 callers=0 calls=0
*/
void sub_149ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ac90ULL || rel >= 0x149aca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149aca0 size=16 callers=0 calls=0
*/
void sub_149aca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149aca0ULL || rel >= 0x149acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149acb0 size=16 callers=0 calls=0
*/
void sub_149acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149acb0ULL || rel >= 0x149acc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149acc0 size=16 callers=0 calls=0
*/
void sub_149acc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149acc0ULL || rel >= 0x149acd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149acd0 size=16 callers=0 calls=0
*/
void sub_149acd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149acd0ULL || rel >= 0x149ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ace0 size=16 callers=0 calls=0
*/
void sub_149ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ace0ULL || rel >= 0x149acf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149acf0 size=16 callers=0 calls=0
*/
void sub_149acf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149acf0ULL || rel >= 0x149ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ad00 size=304 callers=0 calls=0
*/
void sub_149ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ad00ULL || rel >= 0x149ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ae30 size=16 callers=0 calls=0
*/
void sub_149ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ae30ULL || rel >= 0x149ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ae40 size=272 callers=0 calls=1
   calls: sub_c46830
*/
void sub_149ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ae40ULL || rel >= 0x149af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149af50 size=176 callers=1 calls=1
   calls: sub_14cb040
   ref: L_license_00
*/
void L_license_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149af50ULL || rel >= 0x149b000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149b000 size=16 callers=0 calls=0
*/
void sub_149b000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149b000ULL || rel >= 0x149b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149b010 size=16 callers=0 calls=0
*/
void sub_149b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149b010ULL || rel >= 0x149b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149b020 size=16 callers=0 calls=0
*/
void sub_149b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149b020ULL || rel >= 0x149b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149b030 size=16 callers=0 calls=0
*/
void sub_149b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149b030ULL || rel >= 0x149b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149b040 size=16 callers=0 calls=0
*/
void sub_149b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149b040ULL || rel >= 0x149b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149b050 size=16 callers=0 calls=0
*/
void sub_149b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149b050ULL || rel >= 0x149b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149b060 size=16 callers=0 calls=0
*/
void sub_149b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149b060ULL || rel >= 0x149b070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149b070 size=16 callers=0 calls=0
*/
void sub_149b070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149b070ULL || rel >= 0x149b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149b080 size=304 callers=0 calls=0
*/
void sub_149b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149b080ULL || rel >= 0x149b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149b1b0 size=912 callers=0 calls=6
   calls: L_common_new_00, PlayReportConditions, sub_149cfd0, sub_149eef0, sub_5cfad0, sub_7a3c20
*/
void sub_149b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149b1b0ULL || rel >= 0x149b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149b540 size=4720 callers=1 calls=16
   calls: sub_1106320, sub_11063e0, sub_11065b0, sub_1106cd0, sub_1106f30, sub_135a1a0, sub_136e710, sub_1394560, sub_149de50, sub_149f4e0, sub_5dd790, sub_5e26a0
   ... +4 more
   ref: bin/appli/trlicence/bin/bg1_texture_list_data.prmb
   ref: bg1Data
   ref: bg2Data
   ref: Unlock
   ref: PlayReportID
   ref: bin/appli/trlicence/bin/bg2_texture_list_data.prmb
   ref: frameData
   ref: PlayReportConditions
*/
void PlayReportConditions(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149b540ULL || rel >= 0x149c7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149c7b0 size=2080 callers=1 calls=8
   calls: sub_149e510, sub_14aad40, sub_14e1a00, sub_14e1a30, sub_8f3180, sub_e84250, sub_e86780, sub_e86db0
   ref: pane_%s
   ref: P_tl_loader_00
   ref: pane_%s_%s
   ref: button_%02d
   ref: L_thumb_parts_%02d
   ref: P_wear_00
   ref: L_common_new_00
*/
void L_common_new_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149c7b0ULL || rel >= 0x149cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149cfd0 size=2464 callers=1 calls=6
   calls: sub_14e1a30, sub_8f19b0, sub_e7eb10, sub_e86780, sub_e868f0, sub_e86db0
*/
void sub_149cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149cfd0ULL || rel >= 0x149d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149d970 size=464 callers=0 calls=1
   calls: sub_c46830
*/
void sub_149d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149d970ULL || rel >= 0x149db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149db40 size=128 callers=1 calls=2
   calls: sub_14e1a30, sub_1500c40
*/
void sub_149db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149db40ULL || rel >= 0x149dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149dbc0 size=96 callers=1 calls=2
   calls: sub_14e1a30, sub_1500c40
*/
void sub_149dbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149dbc0ULL || rel >= 0x149dc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149dc20 size=192 callers=1 calls=3
   calls: sub_14e1a00, sub_14e1a30, sub_1500c40
*/
void sub_149dc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149dc20ULL || rel >= 0x149dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149dce0 size=176 callers=1 calls=1
   calls: sub_14e1a00
*/
void sub_149dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149dce0ULL || rel >= 0x149dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149dd90 size=32 callers=1 calls=0
*/
void sub_149dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149dd90ULL || rel >= 0x149ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ddb0 size=160 callers=1 calls=1
   calls: sub_14e1a00
*/
void sub_149ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ddb0ULL || rel >= 0x149de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149de50 size=304 callers=5 calls=3
   calls: sub_149f6b0, sub_5e6180, sub_d0c0
*/
void sub_149de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149de50ULL || rel >= 0x149df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149df80 size=1120 callers=0 calls=3
   calls: sub_1394530, sub_1500c40, sub_e83430
   ref: anime_%s
   ref: L_thumb_parts_%02d
   ref: check_on
   ref: anime_%s_%s
*/
void check_on(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149df80ULL || rel >= 0x149e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149e3e0 size=240 callers=0 calls=1
   calls: sub_1498f60
*/
void sub_149e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149e3e0ULL || rel >= 0x149e4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149e4d0 size=64 callers=0 calls=2
   calls: sub_14eebd0, sub_14eebe0
*/
void sub_149e4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149e4d0ULL || rel >= 0x149e510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149e510 size=192 callers=2 calls=4
   calls: sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870
*/
void sub_149e510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149e510ULL || rel >= 0x149e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149e5d0 size=16 callers=1 calls=0
*/
void sub_149e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149e5d0ULL || rel >= 0x149e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149e5e0 size=384 callers=0 calls=3
   calls: sub_14ab0c0, sub_14ab440, sub_14ab5c0
   ref: anime_%s
   ref: L_thumb_parts_%02d
   ref: check_on
   ref: anime_%s_%s
*/
void check_on_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149e5e0ULL || rel >= 0x149e760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149e760 size=288 callers=4 calls=1
   calls: sub_14e1a00
*/
void sub_149e760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149e760ULL || rel >= 0x149e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149e880 size=32 callers=1 calls=0
*/
void sub_149e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149e880ULL || rel >= 0x149e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149e8a0 size=1184 callers=0 calls=0
*/
void sub_149e8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149e8a0ULL || rel >= 0x149ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ed40 size=16 callers=0 calls=0
*/
void sub_149ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ed40ULL || rel >= 0x149ed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ed50 size=16 callers=0 calls=0
*/
void sub_149ed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ed50ULL || rel >= 0x149ed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ed60 size=16 callers=0 calls=0
*/
void sub_149ed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ed60ULL || rel >= 0x149ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ed70 size=16 callers=0 calls=0
*/
void sub_149ed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ed70ULL || rel >= 0x149ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ed80 size=16 callers=0 calls=0
*/
void sub_149ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ed80ULL || rel >= 0x149ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ed90 size=16 callers=0 calls=0
*/
void sub_149ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ed90ULL || rel >= 0x149eda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149eda0 size=16 callers=0 calls=0
*/
void sub_149eda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149eda0ULL || rel >= 0x149edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149edb0 size=16 callers=0 calls=0
*/
void sub_149edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149edb0ULL || rel >= 0x149edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149edc0 size=304 callers=0 calls=0
*/
void sub_149edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149edc0ULL || rel >= 0x149eef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149eef0 size=416 callers=2 calls=1
   calls: sub_14e19a0
*/
void sub_149eef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149eef0ULL || rel >= 0x149f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f090 size=160 callers=0 calls=2
   calls: sub_149e760, sub_14e1a00
*/
void sub_149f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f090ULL || rel >= 0x149f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f130 size=16 callers=0 calls=0
*/
void sub_149f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f130ULL || rel >= 0x149f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f140 size=16 callers=0 calls=0
*/
void sub_149f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f140ULL || rel >= 0x149f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f150 size=16 callers=0 calls=0
*/
void sub_149f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f150ULL || rel >= 0x149f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f160 size=16 callers=0 calls=0
*/
void sub_149f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f160ULL || rel >= 0x149f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f170 size=16 callers=0 calls=0
*/
void sub_149f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f170ULL || rel >= 0x149f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f180 size=16 callers=0 calls=0
*/
void sub_149f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f180ULL || rel >= 0x149f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f190 size=16 callers=0 calls=0
*/
void sub_149f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f190ULL || rel >= 0x149f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f1a0 size=80 callers=0 calls=1
   calls: sub_149e510
*/
void sub_149f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f1a0ULL || rel >= 0x149f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f1f0 size=16 callers=0 calls=0
*/
void sub_149f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f1f0ULL || rel >= 0x149f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f200 size=16 callers=0 calls=0
*/
void sub_149f200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f200ULL || rel >= 0x149f210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f210 size=16 callers=0 calls=0
*/
void sub_149f210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f210ULL || rel >= 0x149f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f220 size=144 callers=0 calls=2
   calls: sub_149e760, sub_14e1a00
*/
void sub_149f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f220ULL || rel >= 0x149f2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f2b0 size=16 callers=0 calls=0
*/
void sub_149f2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f2b0ULL || rel >= 0x149f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f2c0 size=16 callers=0 calls=0
*/
void sub_149f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f2c0ULL || rel >= 0x149f2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f2d0 size=16 callers=0 calls=0
*/
void sub_149f2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f2d0ULL || rel >= 0x149f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f2e0 size=144 callers=0 calls=2
   calls: sub_149e760, sub_14e1a00
*/
void sub_149f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f2e0ULL || rel >= 0x149f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f370 size=16 callers=0 calls=0
*/
void sub_149f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f370ULL || rel >= 0x149f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f380 size=16 callers=0 calls=0
*/
void sub_149f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f380ULL || rel >= 0x149f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f390 size=16 callers=0 calls=0
*/
void sub_149f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f390ULL || rel >= 0x149f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f3a0 size=144 callers=0 calls=2
   calls: sub_149e760, sub_14e1a00
*/
void sub_149f3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f3a0ULL || rel >= 0x149f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f430 size=16 callers=0 calls=0
*/
void sub_149f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f430ULL || rel >= 0x149f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f440 size=16 callers=0 calls=0
*/
void sub_149f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f440ULL || rel >= 0x149f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f450 size=16 callers=0 calls=0
*/
void sub_149f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f450ULL || rel >= 0x149f460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f460 size=80 callers=0 calls=1
   calls: sub_14e1a30
*/
void sub_149f460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f460ULL || rel >= 0x149f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f4b0 size=16 callers=0 calls=0
*/
void sub_149f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f4b0ULL || rel >= 0x149f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f4c0 size=16 callers=0 calls=0
*/
void sub_149f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f4c0ULL || rel >= 0x149f4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f4d0 size=16 callers=0 calls=0
*/
void sub_149f4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f4d0ULL || rel >= 0x149f4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f4e0 size=464 callers=6 calls=1
   calls: sub_5e2350
*/
void sub_149f4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f4e0ULL || rel >= 0x149f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f6b0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_149f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f6b0ULL || rel >= 0x149f730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f730 size=48 callers=0 calls=0
*/
void sub_149f730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f730ULL || rel >= 0x149f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f760 size=16 callers=0 calls=0
*/
void sub_149f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f760ULL || rel >= 0x149f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f770 size=32 callers=0 calls=0
*/
void sub_149f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f770ULL || rel >= 0x149f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f790 size=32 callers=0 calls=0
*/
void sub_149f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f790ULL || rel >= 0x149f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f7b0 size=416 callers=0 calls=4
   calls: sub_14aad40, sub_e7eb10, sub_e7f7c0, sub_e83430
   ref: N_balloon_00
   ref: pane_%s_%s
   ref: L_character_navi_00
*/
void L_character_navi_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f7b0ULL || rel >= 0x149f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f950 size=32 callers=1 calls=0
*/
void sub_149f950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f950ULL || rel >= 0x149f970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149f970 size=272 callers=0 calls=1
   calls: sub_c46830
*/
void sub_149f970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149f970ULL || rel >= 0x149fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149fa80 size=32 callers=5 calls=0
*/
void sub_149fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149fa80ULL || rel >= 0x149faa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149faa0 size=208 callers=5 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_149faa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149faa0ULL || rel >= 0x149fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149fb70 size=176 callers=1 calls=1
   calls: sub_1315b90
*/
void sub_149fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149fb70ULL || rel >= 0x149fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149fc20 size=96 callers=0 calls=0
*/
void sub_149fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149fc20ULL || rel >= 0x149fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149fc80 size=96 callers=0 calls=0
*/
void sub_149fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149fc80ULL || rel >= 0x149fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149fce0 size=16 callers=0 calls=0
*/
void sub_149fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149fce0ULL || rel >= 0x149fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149fcf0 size=96 callers=0 calls=0
*/
void sub_149fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149fcf0ULL || rel >= 0x149fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149fd50 size=96 callers=0 calls=0
*/
void sub_149fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149fd50ULL || rel >= 0x149fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149fdb0 size=16 callers=0 calls=0
*/
void sub_149fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149fdb0ULL || rel >= 0x149fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149fdc0 size=16 callers=0 calls=0
*/
void sub_149fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149fdc0ULL || rel >= 0x149fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149fdd0 size=96 callers=0 calls=0
*/
void sub_149fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149fdd0ULL || rel >= 0x149fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149fe30 size=96 callers=0 calls=0
*/
void sub_149fe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149fe30ULL || rel >= 0x149fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149fe90 size=304 callers=0 calls=0
*/
void sub_149fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149fe90ULL || rel >= 0x149ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0149ffc0 size=752 callers=0 calls=9
   calls: BtnCompHash, T_itemlist_number_01_2, sub_14a0af0, sub_14a0cf0, sub_14e1a30, sub_e7eb10, sub_e7f7c0, sub_e84190, sub_e84310
*/
void sub_149ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149ffc0ULL || rel >= 0x14a02b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a02b0 size=2112 callers=1 calls=13
   calls: sub_1106320, sub_11063e0, sub_11065b0, sub_1106cd0, sub_1106f30, sub_1345ca0, sub_135a1a0, sub_1394560, sub_149de50, sub_5dd790, sub_5e26a0, sub_5e2930
   ... +1 more
   ref: MsgLabel
   ref: Unlock
   ref: BtnCompHash
   ref: bin/appli/trlicence/bin/gloss_texture_list_data.prmb
   ref: glossData
   ref: TextureMax
*/
void BtnCompHash(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a02b0ULL || rel >= 0x14a0af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a0af0 size=512 callers=1 calls=2
   calls: sub_5cfad0, sub_7a3c20
*/
void sub_14a0af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a0af0ULL || rel >= 0x14a0cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a0cf0 size=576 callers=3 calls=7
   calls: sub_1315b90, sub_137b8b0, sub_14ac040, sub_14ac370, sub_67d450, sub_e7eb10, sub_e7f7c0
*/
void sub_14a0cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a0cf0ULL || rel >= 0x14a0f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a0f30 size=2432 callers=1 calls=13
   calls: sub_1315b90, sub_14aad40, sub_14ac040, sub_14ac370, sub_14e1a00, sub_14e1a30, sub_14e62c0, sub_14e6d90, sub_67d450, sub_e7eb10, sub_e7f7c0, sub_e83430
   ... +1 more
   ref: T_itemlist_number_01
   ref: pane_%s
   ref: anime_%s
   ref: T_itemlist_name
   ref: L_icon_new_00
   ref: pane_%s_%s
   ref: anime_%s_%s
   ref: L_btn_select_coat_%02d
*/
void T_itemlist_number_01_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a0f30ULL || rel >= 0x14a18b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a18b0 size=464 callers=0 calls=1
   calls: sub_c46830
*/
void sub_14a18b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a18b0ULL || rel >= 0x14a1a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1a80 size=112 callers=1 calls=2
   calls: sub_14e1a30, sub_e807f0
*/
void sub_14a1a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1a80ULL || rel >= 0x14a1af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1af0 size=64 callers=1 calls=1
   calls: sub_14e1a30
*/
void sub_14a1af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1af0ULL || rel >= 0x14a1b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1b30 size=16 callers=1 calls=0
*/
void sub_14a1b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1b30ULL || rel >= 0x14a1b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1b40 size=16 callers=1 calls=0
*/
void sub_14a1b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1b40ULL || rel >= 0x14a1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1b50 size=32 callers=1 calls=0
*/
void sub_14a1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1b50ULL || rel >= 0x14a1b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1b70 size=32 callers=1 calls=0
*/
void sub_14a1b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1b70ULL || rel >= 0x14a1b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1b90 size=416 callers=0 calls=0
*/
void sub_14a1b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1b90ULL || rel >= 0x14a1d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1d30 size=16 callers=0 calls=0
*/
void sub_14a1d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1d30ULL || rel >= 0x14a1d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1d40 size=16 callers=0 calls=0
*/
void sub_14a1d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1d40ULL || rel >= 0x14a1d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1d50 size=16 callers=0 calls=0
*/
void sub_14a1d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1d50ULL || rel >= 0x14a1d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

