/* subsdk1 functions 001c9000..001eafc0 (9 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 001c9000 size=64 callers=0 calls=0
*/
void sub_1c9000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c9000ULL || rel >= 0x1c9040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c9040 size=368 callers=0 calls=1
   calls: sub_1c8880
*/
void sub_1c9040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c9040ULL || rel >= 0x1c91b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c91b0 size=80 callers=0 calls=0
*/
void sub_1c91b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c91b0ULL || rel >= 0x1c9200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c9200 size=320 callers=1 calls=0
*/
void sub_1c9200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c9200ULL || rel >= 0x1c9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c9340 size=400 callers=0 calls=2
   calls: sub_1c61e0, sub_7f1b0
*/
void sub_1c9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c9340ULL || rel >= 0x1c94d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c94d0 size=256 callers=0 calls=2
   calls: sub_1c6b90, sub_1c95d0
*/
void sub_1c94d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c94d0ULL || rel >= 0x1c95d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c95d0 size=288 callers=1 calls=0
*/
void sub_1c95d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c95d0ULL || rel >= 0x1c96f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c96f0 size=336 callers=0 calls=2
   calls: sub_3fa0, sub_80ee0
*/
void sub_1c96f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c96f0ULL || rel >= 0x1c9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c9840 size=320 callers=1 calls=0
*/
void sub_1c9840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c9840ULL || rel >= 0x1c9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c9980 size=384 callers=0 calls=1
   calls: sub_1c8880
*/
void sub_1c9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c9980ULL || rel >= 0x1c9b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c9b00 size=128 callers=0 calls=0
*/
void sub_1c9b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c9b00ULL || rel >= 0x1c9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c9b80 size=480 callers=0 calls=0
*/
void sub_1c9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c9b80ULL || rel >= 0x1c9d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c9d60 size=320 callers=1 calls=0
*/
void sub_1c9d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c9d60ULL || rel >= 0x1c9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c9ea0 size=448 callers=0 calls=1
   calls: sub_1c8880
*/
void sub_1c9ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c9ea0ULL || rel >= 0x1ca060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca060 size=16 callers=0 calls=0
*/
void sub_1ca060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca060ULL || rel >= 0x1ca070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca070 size=16 callers=0 calls=0
*/
void sub_1ca070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca070ULL || rel >= 0x1ca080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca080 size=320 callers=1 calls=0
*/
void sub_1ca080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca080ULL || rel >= 0x1ca1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca1c0 size=336 callers=0 calls=1
   calls: sub_1c8880
*/
void sub_1ca1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca1c0ULL || rel >= 0x1ca310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca310 size=16 callers=0 calls=0
*/
void sub_1ca310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca310ULL || rel >= 0x1ca320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca320 size=16 callers=0 calls=0
*/
void sub_1ca320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca320ULL || rel >= 0x1ca330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca330 size=16 callers=0 calls=0
*/
void sub_1ca330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca330ULL || rel >= 0x1ca340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca340 size=16 callers=0 calls=0
*/
void sub_1ca340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca340ULL || rel >= 0x1ca350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca350 size=16 callers=0 calls=0
*/
void sub_1ca350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca350ULL || rel >= 0x1ca360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca360 size=16 callers=0 calls=0
*/
void sub_1ca360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca360ULL || rel >= 0x1ca370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca370 size=16 callers=0 calls=0
*/
void sub_1ca370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca370ULL || rel >= 0x1ca380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca380 size=16 callers=0 calls=0
*/
void sub_1ca380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca380ULL || rel >= 0x1ca390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca390 size=16 callers=0 calls=0
*/
void sub_1ca390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca390ULL || rel >= 0x1ca3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca3a0 size=16 callers=0 calls=0
*/
void sub_1ca3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca3a0ULL || rel >= 0x1ca3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca3b0 size=16 callers=0 calls=0
*/
void sub_1ca3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca3b0ULL || rel >= 0x1ca3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca3c0 size=16 callers=0 calls=0
*/
void sub_1ca3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca3c0ULL || rel >= 0x1ca3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca3d0 size=16 callers=0 calls=0
*/
void sub_1ca3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca3d0ULL || rel >= 0x1ca3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca3e0 size=16 callers=0 calls=0
*/
void sub_1ca3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca3e0ULL || rel >= 0x1ca3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca3f0 size=16 callers=0 calls=0
*/
void sub_1ca3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca3f0ULL || rel >= 0x1ca400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca400 size=16 callers=0 calls=0
*/
void sub_1ca400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca400ULL || rel >= 0x1ca410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca410 size=16 callers=0 calls=0
*/
void sub_1ca410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca410ULL || rel >= 0x1ca420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca420 size=16 callers=0 calls=0
*/
void sub_1ca420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca420ULL || rel >= 0x1ca430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca430 size=16 callers=0 calls=0
*/
void sub_1ca430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca430ULL || rel >= 0x1ca440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca440 size=16 callers=0 calls=0
*/
void sub_1ca440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca440ULL || rel >= 0x1ca450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca450 size=16 callers=0 calls=0
*/
void sub_1ca450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca450ULL || rel >= 0x1ca460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca460 size=16 callers=0 calls=0
*/
void sub_1ca460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca460ULL || rel >= 0x1ca470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca470 size=16 callers=0 calls=0
*/
void sub_1ca470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca470ULL || rel >= 0x1ca480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca480 size=16 callers=0 calls=0
*/
void sub_1ca480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca480ULL || rel >= 0x1ca490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca490 size=16 callers=0 calls=0
*/
void sub_1ca490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca490ULL || rel >= 0x1ca4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca4a0 size=16 callers=0 calls=0
*/
void sub_1ca4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca4a0ULL || rel >= 0x1ca4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca4b0 size=16 callers=0 calls=0
*/
void sub_1ca4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca4b0ULL || rel >= 0x1ca4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca4c0 size=16 callers=0 calls=0
*/
void sub_1ca4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca4c0ULL || rel >= 0x1ca4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca4d0 size=16 callers=0 calls=0
*/
void sub_1ca4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca4d0ULL || rel >= 0x1ca4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca4e0 size=16 callers=0 calls=0
*/
void sub_1ca4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca4e0ULL || rel >= 0x1ca4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca4f0 size=16 callers=0 calls=0
*/
void sub_1ca4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca4f0ULL || rel >= 0x1ca500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca500 size=16 callers=0 calls=0
*/
void sub_1ca500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca500ULL || rel >= 0x1ca510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca510 size=16 callers=0 calls=0
*/
void sub_1ca510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca510ULL || rel >= 0x1ca520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca520 size=16 callers=0 calls=0
*/
void sub_1ca520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca520ULL || rel >= 0x1ca530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca530 size=16 callers=0 calls=0
*/
void sub_1ca530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca530ULL || rel >= 0x1ca540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca540 size=16 callers=0 calls=0
*/
void sub_1ca540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca540ULL || rel >= 0x1ca550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca550 size=16 callers=0 calls=0
*/
void sub_1ca550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca550ULL || rel >= 0x1ca560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca560 size=16 callers=0 calls=0
*/
void sub_1ca560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca560ULL || rel >= 0x1ca570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca570 size=16 callers=0 calls=0
*/
void sub_1ca570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca570ULL || rel >= 0x1ca580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca580 size=16 callers=0 calls=0
*/
void sub_1ca580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca580ULL || rel >= 0x1ca590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca590 size=16 callers=0 calls=0
*/
void sub_1ca590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca590ULL || rel >= 0x1ca5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca5a0 size=16 callers=0 calls=0
*/
void sub_1ca5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca5a0ULL || rel >= 0x1ca5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca5b0 size=16 callers=0 calls=0
*/
void sub_1ca5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca5b0ULL || rel >= 0x1ca5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca5c0 size=16 callers=0 calls=0
*/
void sub_1ca5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca5c0ULL || rel >= 0x1ca5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca5d0 size=16 callers=0 calls=0
*/
void sub_1ca5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca5d0ULL || rel >= 0x1ca5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca5e0 size=16 callers=0 calls=0
*/
void sub_1ca5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca5e0ULL || rel >= 0x1ca5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca5f0 size=16 callers=0 calls=0
*/
void sub_1ca5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca5f0ULL || rel >= 0x1ca600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca600 size=16 callers=0 calls=0
*/
void sub_1ca600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca600ULL || rel >= 0x1ca610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca610 size=16 callers=0 calls=0
*/
void sub_1ca610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca610ULL || rel >= 0x1ca620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca620 size=16 callers=0 calls=0
*/
void sub_1ca620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca620ULL || rel >= 0x1ca630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca630 size=16 callers=0 calls=0
*/
void sub_1ca630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca630ULL || rel >= 0x1ca640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca640 size=16 callers=0 calls=0
*/
void sub_1ca640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca640ULL || rel >= 0x1ca650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca650 size=16 callers=0 calls=0
*/
void sub_1ca650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca650ULL || rel >= 0x1ca660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca660 size=16 callers=0 calls=0
*/
void sub_1ca660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca660ULL || rel >= 0x1ca670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca670 size=16 callers=0 calls=0
*/
void sub_1ca670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca670ULL || rel >= 0x1ca680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca680 size=16 callers=0 calls=0
*/
void sub_1ca680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca680ULL || rel >= 0x1ca690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca690 size=16 callers=0 calls=0
*/
void sub_1ca690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca690ULL || rel >= 0x1ca6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca6a0 size=16 callers=0 calls=0
*/
void sub_1ca6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca6a0ULL || rel >= 0x1ca6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca6b0 size=16 callers=0 calls=0
*/
void sub_1ca6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca6b0ULL || rel >= 0x1ca6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca6c0 size=16 callers=0 calls=0
*/
void sub_1ca6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca6c0ULL || rel >= 0x1ca6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca6d0 size=16 callers=0 calls=0
*/
void sub_1ca6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca6d0ULL || rel >= 0x1ca6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca6e0 size=16 callers=0 calls=0
*/
void sub_1ca6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca6e0ULL || rel >= 0x1ca6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca6f0 size=16 callers=0 calls=0
*/
void sub_1ca6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca6f0ULL || rel >= 0x1ca700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca700 size=16 callers=0 calls=0
*/
void sub_1ca700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca700ULL || rel >= 0x1ca710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca710 size=16 callers=0 calls=0
*/
void sub_1ca710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca710ULL || rel >= 0x1ca720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca720 size=16 callers=0 calls=0
*/
void sub_1ca720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca720ULL || rel >= 0x1ca730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca730 size=16 callers=0 calls=0
*/
void sub_1ca730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca730ULL || rel >= 0x1ca740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca740 size=16 callers=0 calls=0
*/
void sub_1ca740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca740ULL || rel >= 0x1ca750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca750 size=16 callers=0 calls=0
*/
void sub_1ca750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca750ULL || rel >= 0x1ca760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca760 size=16 callers=0 calls=0
*/
void sub_1ca760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca760ULL || rel >= 0x1ca770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca770 size=16 callers=0 calls=0
*/
void sub_1ca770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca770ULL || rel >= 0x1ca780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca780 size=16 callers=0 calls=0
*/
void sub_1ca780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca780ULL || rel >= 0x1ca790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca790 size=16 callers=0 calls=0
*/
void sub_1ca790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca790ULL || rel >= 0x1ca7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca7a0 size=16 callers=0 calls=0
*/
void sub_1ca7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca7a0ULL || rel >= 0x1ca7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca7b0 size=16 callers=0 calls=0
*/
void sub_1ca7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca7b0ULL || rel >= 0x1ca7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca7c0 size=16 callers=0 calls=0
*/
void sub_1ca7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca7c0ULL || rel >= 0x1ca7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca7d0 size=16 callers=0 calls=0
*/
void sub_1ca7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca7d0ULL || rel >= 0x1ca7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca7e0 size=16 callers=0 calls=0
*/
void sub_1ca7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca7e0ULL || rel >= 0x1ca7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca7f0 size=16 callers=0 calls=0
*/
void sub_1ca7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca7f0ULL || rel >= 0x1ca800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca800 size=16 callers=0 calls=0
*/
void sub_1ca800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca800ULL || rel >= 0x1ca810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca810 size=16 callers=0 calls=0
*/
void sub_1ca810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca810ULL || rel >= 0x1ca820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca820 size=16 callers=0 calls=0
*/
void sub_1ca820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca820ULL || rel >= 0x1ca830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca830 size=16 callers=0 calls=0
*/
void sub_1ca830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca830ULL || rel >= 0x1ca840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca840 size=16 callers=0 calls=0
*/
void sub_1ca840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca840ULL || rel >= 0x1ca850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca850 size=16 callers=0 calls=0
*/
void sub_1ca850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca850ULL || rel >= 0x1ca860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca860 size=16 callers=0 calls=0
*/
void sub_1ca860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca860ULL || rel >= 0x1ca870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca870 size=16 callers=0 calls=0
*/
void sub_1ca870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca870ULL || rel >= 0x1ca880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca880 size=16 callers=0 calls=0
*/
void sub_1ca880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca880ULL || rel >= 0x1ca890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca890 size=16 callers=0 calls=0
*/
void sub_1ca890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca890ULL || rel >= 0x1ca8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca8a0 size=16 callers=0 calls=0
*/
void sub_1ca8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca8a0ULL || rel >= 0x1ca8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca8b0 size=16 callers=0 calls=0
*/
void sub_1ca8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca8b0ULL || rel >= 0x1ca8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca8c0 size=16 callers=0 calls=0
*/
void sub_1ca8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca8c0ULL || rel >= 0x1ca8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca8d0 size=16 callers=0 calls=0
*/
void sub_1ca8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca8d0ULL || rel >= 0x1ca8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca8e0 size=16 callers=0 calls=0
*/
void sub_1ca8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca8e0ULL || rel >= 0x1ca8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca8f0 size=16 callers=0 calls=0
*/
void sub_1ca8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca8f0ULL || rel >= 0x1ca900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca900 size=16 callers=0 calls=0
*/
void sub_1ca900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca900ULL || rel >= 0x1ca910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca910 size=16 callers=0 calls=0
*/
void sub_1ca910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca910ULL || rel >= 0x1ca920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca920 size=16 callers=0 calls=0
*/
void sub_1ca920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca920ULL || rel >= 0x1ca930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca930 size=16 callers=0 calls=0
*/
void sub_1ca930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca930ULL || rel >= 0x1ca940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca940 size=16 callers=0 calls=0
*/
void sub_1ca940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca940ULL || rel >= 0x1ca950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca950 size=16 callers=0 calls=0
*/
void sub_1ca950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca950ULL || rel >= 0x1ca960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca960 size=16 callers=0 calls=0
*/
void sub_1ca960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca960ULL || rel >= 0x1ca970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca970 size=16 callers=0 calls=0
*/
void sub_1ca970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca970ULL || rel >= 0x1ca980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca980 size=16 callers=0 calls=0
*/
void sub_1ca980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca980ULL || rel >= 0x1ca990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca990 size=16 callers=0 calls=0
*/
void sub_1ca990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca990ULL || rel >= 0x1ca9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca9a0 size=16 callers=0 calls=0
*/
void sub_1ca9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca9a0ULL || rel >= 0x1ca9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca9b0 size=16 callers=0 calls=0
*/
void sub_1ca9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca9b0ULL || rel >= 0x1ca9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca9c0 size=16 callers=0 calls=0
*/
void sub_1ca9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca9c0ULL || rel >= 0x1ca9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca9d0 size=16 callers=0 calls=0
*/
void sub_1ca9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca9d0ULL || rel >= 0x1ca9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca9e0 size=16 callers=0 calls=0
*/
void sub_1ca9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca9e0ULL || rel >= 0x1ca9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca9f0 size=16 callers=0 calls=0
*/
void sub_1ca9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca9f0ULL || rel >= 0x1caa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caa00 size=16 callers=0 calls=0
*/
void sub_1caa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caa00ULL || rel >= 0x1caa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caa10 size=16 callers=0 calls=0
*/
void sub_1caa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caa10ULL || rel >= 0x1caa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caa20 size=16 callers=0 calls=0
*/
void sub_1caa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caa20ULL || rel >= 0x1caa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caa30 size=16 callers=0 calls=0
*/
void sub_1caa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caa30ULL || rel >= 0x1caa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caa40 size=16 callers=0 calls=0
*/
void sub_1caa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caa40ULL || rel >= 0x1caa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caa50 size=16 callers=0 calls=0
*/
void sub_1caa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caa50ULL || rel >= 0x1caa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caa60 size=16 callers=0 calls=0
*/
void sub_1caa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caa60ULL || rel >= 0x1caa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caa70 size=16 callers=0 calls=0
*/
void sub_1caa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caa70ULL || rel >= 0x1caa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caa80 size=16 callers=0 calls=0
*/
void sub_1caa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caa80ULL || rel >= 0x1caa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caa90 size=16 callers=0 calls=0
*/
void sub_1caa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caa90ULL || rel >= 0x1caaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caaa0 size=16 callers=0 calls=0
*/
void sub_1caaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caaa0ULL || rel >= 0x1caab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caab0 size=16 callers=0 calls=0
*/
void sub_1caab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caab0ULL || rel >= 0x1caac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caac0 size=16 callers=0 calls=0
*/
void sub_1caac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caac0ULL || rel >= 0x1caad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caad0 size=16 callers=0 calls=0
*/
void sub_1caad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caad0ULL || rel >= 0x1caae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caae0 size=16 callers=0 calls=0
*/
void sub_1caae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caae0ULL || rel >= 0x1caaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caaf0 size=16 callers=0 calls=0
*/
void sub_1caaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caaf0ULL || rel >= 0x1cab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cab00 size=16 callers=0 calls=0
*/
void sub_1cab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cab00ULL || rel >= 0x1cab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cab10 size=16 callers=0 calls=0
*/
void sub_1cab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cab10ULL || rel >= 0x1cab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cab20 size=16 callers=0 calls=0
*/
void sub_1cab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cab20ULL || rel >= 0x1cab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cab30 size=16 callers=0 calls=0
*/
void sub_1cab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cab30ULL || rel >= 0x1cab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cab40 size=16 callers=0 calls=0
*/
void sub_1cab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cab40ULL || rel >= 0x1cab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cab50 size=16 callers=0 calls=0
*/
void sub_1cab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cab50ULL || rel >= 0x1cab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cab60 size=16 callers=0 calls=0
*/
void sub_1cab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cab60ULL || rel >= 0x1cab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cab70 size=16 callers=0 calls=0
*/
void sub_1cab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cab70ULL || rel >= 0x1cab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cab80 size=16 callers=0 calls=0
*/
void sub_1cab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cab80ULL || rel >= 0x1cab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cab90 size=16 callers=0 calls=0
*/
void sub_1cab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cab90ULL || rel >= 0x1caba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caba0 size=16 callers=0 calls=0
*/
void sub_1caba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caba0ULL || rel >= 0x1cabb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cabb0 size=16 callers=0 calls=0
*/
void sub_1cabb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cabb0ULL || rel >= 0x1cabc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cabc0 size=16 callers=0 calls=0
*/
void sub_1cabc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cabc0ULL || rel >= 0x1cabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cabd0 size=16 callers=0 calls=0
*/
void sub_1cabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cabd0ULL || rel >= 0x1cabe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cabe0 size=16 callers=0 calls=0
*/
void sub_1cabe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cabe0ULL || rel >= 0x1cabf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cabf0 size=16 callers=0 calls=0
*/
void sub_1cabf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cabf0ULL || rel >= 0x1cac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cac00 size=16 callers=0 calls=0
*/
void sub_1cac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cac00ULL || rel >= 0x1cac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cac10 size=16 callers=0 calls=0
*/
void sub_1cac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cac10ULL || rel >= 0x1cac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cac20 size=16 callers=0 calls=0
*/
void sub_1cac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cac20ULL || rel >= 0x1cac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cac30 size=16 callers=0 calls=0
*/
void sub_1cac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cac30ULL || rel >= 0x1cac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cac40 size=16 callers=0 calls=0
*/
void sub_1cac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cac40ULL || rel >= 0x1cac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cac50 size=16 callers=0 calls=0
*/
void sub_1cac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cac50ULL || rel >= 0x1cac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cac60 size=16 callers=0 calls=0
*/
void sub_1cac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cac60ULL || rel >= 0x1cac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cac70 size=16 callers=0 calls=0
*/
void sub_1cac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cac70ULL || rel >= 0x1cac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cac80 size=16 callers=0 calls=0
*/
void sub_1cac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cac80ULL || rel >= 0x1cac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cac90 size=16 callers=0 calls=0
*/
void sub_1cac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cac90ULL || rel >= 0x1caca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001caca0 size=16 callers=0 calls=0
*/
void sub_1caca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1caca0ULL || rel >= 0x1cacb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cacb0 size=16 callers=0 calls=0
*/
void sub_1cacb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cacb0ULL || rel >= 0x1cacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cacc0 size=16 callers=0 calls=0
*/
void sub_1cacc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cacc0ULL || rel >= 0x1cacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cacd0 size=16 callers=0 calls=0
*/
void sub_1cacd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cacd0ULL || rel >= 0x1cace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cace0 size=16 callers=0 calls=0
*/
void sub_1cace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cace0ULL || rel >= 0x1cacf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cacf0 size=16 callers=0 calls=0
*/
void sub_1cacf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cacf0ULL || rel >= 0x1cad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cad00 size=16 callers=0 calls=0
*/
void sub_1cad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cad00ULL || rel >= 0x1cad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cad10 size=16 callers=0 calls=0
*/
void sub_1cad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cad10ULL || rel >= 0x1cad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cad20 size=16 callers=0 calls=0
*/
void sub_1cad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cad20ULL || rel >= 0x1cad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cad30 size=16 callers=0 calls=0
*/
void sub_1cad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cad30ULL || rel >= 0x1cad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cad40 size=16 callers=0 calls=0
*/
void sub_1cad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cad40ULL || rel >= 0x1cad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cad50 size=16 callers=0 calls=0
*/
void sub_1cad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cad50ULL || rel >= 0x1cad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cad60 size=16 callers=0 calls=0
*/
void sub_1cad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cad60ULL || rel >= 0x1cad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cad70 size=16 callers=0 calls=0
*/
void sub_1cad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cad70ULL || rel >= 0x1cad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cad80 size=16 callers=0 calls=0
*/
void sub_1cad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cad80ULL || rel >= 0x1cad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cad90 size=16 callers=0 calls=0
*/
void sub_1cad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cad90ULL || rel >= 0x1cada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cada0 size=16 callers=0 calls=0
*/
void sub_1cada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cada0ULL || rel >= 0x1cadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cadb0 size=16 callers=0 calls=0
*/
void sub_1cadb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cadb0ULL || rel >= 0x1cadc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cadc0 size=16 callers=0 calls=0
*/
void sub_1cadc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cadc0ULL || rel >= 0x1cadd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cadd0 size=16 callers=0 calls=0
*/
void sub_1cadd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cadd0ULL || rel >= 0x1cade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cade0 size=16 callers=0 calls=0
*/
void sub_1cade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cade0ULL || rel >= 0x1cadf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cadf0 size=16 callers=0 calls=0
*/
void sub_1cadf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cadf0ULL || rel >= 0x1cae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cae00 size=16 callers=0 calls=0
*/
void sub_1cae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cae00ULL || rel >= 0x1cae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cae10 size=16 callers=0 calls=0
*/
void sub_1cae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cae10ULL || rel >= 0x1cae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cae20 size=16 callers=0 calls=0
*/
void sub_1cae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cae20ULL || rel >= 0x1cae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cae30 size=48 callers=0 calls=0
*/
void sub_1cae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cae30ULL || rel >= 0x1cae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cae60 size=496 callers=1 calls=0
*/
void sub_1cae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cae60ULL || rel >= 0x1cb050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cb050 size=976 callers=1 calls=1
   calls: sub_1bb950
*/
void sub_1cb050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cb050ULL || rel >= 0x1cb420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cb420 size=224 callers=51 calls=1
   calls: sub_1bb950
*/
void sub_1cb420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cb420ULL || rel >= 0x1cb500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cb500 size=640 callers=32 calls=5
   calls: sub_1bb830, sub_1bb950, sub_9b3d0, sub_9b500, sub_9ca30
*/
void sub_1cb500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cb500ULL || rel >= 0x1cb780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cb780 size=288 callers=8 calls=3
   calls: sub_1bb950, sub_1cb420, sub_1cb500
*/
void sub_1cb780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cb780ULL || rel >= 0x1cb8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cb8a0 size=16 callers=0 calls=0
*/
void sub_1cb8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cb8a0ULL || rel >= 0x1cb8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cb8b0 size=48 callers=0 calls=0
*/
void sub_1cb8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cb8b0ULL || rel >= 0x1cb8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cb8e0 size=48 callers=0 calls=0
*/
void sub_1cb8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cb8e0ULL || rel >= 0x1cb910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cb910 size=160 callers=0 calls=0
*/
void sub_1cb910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cb910ULL || rel >= 0x1cb9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cb9b0 size=96 callers=0 calls=0
*/
void sub_1cb9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cb9b0ULL || rel >= 0x1cba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cba10 size=176 callers=0 calls=0
*/
void sub_1cba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cba10ULL || rel >= 0x1cbac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cbac0 size=192 callers=0 calls=0
*/
void sub_1cbac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cbac0ULL || rel >= 0x1cbb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cbb80 size=288 callers=0 calls=0
*/
void sub_1cbb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cbb80ULL || rel >= 0x1cbca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cbca0 size=112 callers=0 calls=0
*/
void sub_1cbca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cbca0ULL || rel >= 0x1cbd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cbd10 size=272 callers=0 calls=0
*/
void sub_1cbd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cbd10ULL || rel >= 0x1cbe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cbe20 size=112 callers=0 calls=0
*/
void sub_1cbe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cbe20ULL || rel >= 0x1cbe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cbe90 size=128 callers=0 calls=0
*/
void sub_1cbe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cbe90ULL || rel >= 0x1cbf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cbf10 size=144 callers=0 calls=0
*/
void sub_1cbf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cbf10ULL || rel >= 0x1cbfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cbfa0 size=192 callers=0 calls=0
*/
void sub_1cbfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cbfa0ULL || rel >= 0x1cc060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc060 size=160 callers=0 calls=0
*/
void sub_1cc060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc060ULL || rel >= 0x1cc100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc100 size=128 callers=0 calls=2
   calls: sub_1cb420, sub_1cb500
*/
void sub_1cc100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc100ULL || rel >= 0x1cc180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc180 size=144 callers=0 calls=2
   calls: sub_1cb420, sub_1cb500
*/
void sub_1cc180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc180ULL || rel >= 0x1cc210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc210 size=160 callers=0 calls=2
   calls: sub_1cb420, sub_1cb500
*/
void sub_1cc210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc210ULL || rel >= 0x1cc2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc2b0 size=208 callers=0 calls=2
   calls: sub_1cb420, sub_9b3d0
*/
void sub_1cc2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc2b0ULL || rel >= 0x1cc380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc380 size=160 callers=0 calls=2
   calls: sub_1cb420, sub_1cb500
*/
void sub_1cc380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc380ULL || rel >= 0x1cc420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc420 size=176 callers=0 calls=2
   calls: sub_1cb420, sub_1cb500
*/
void sub_1cc420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc420ULL || rel >= 0x1cc4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc4d0 size=240 callers=0 calls=2
   calls: sub_1cb420, sub_9b3d0
*/
void sub_1cc4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc4d0ULL || rel >= 0x1cc5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc5c0 size=224 callers=0 calls=1
   calls: sub_1cb780
*/
void sub_1cc5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc5c0ULL || rel >= 0x1cc6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc6a0 size=384 callers=0 calls=3
   calls: sub_1bb950, sub_1cb420, sub_1cb500
*/
void sub_1cc6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc6a0ULL || rel >= 0x1cc820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc820 size=224 callers=0 calls=1
   calls: sub_1bb830
*/
void sub_1cc820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc820ULL || rel >= 0x1cc900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc900 size=96 callers=0 calls=0
*/
void sub_1cc900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc900ULL || rel >= 0x1cc960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc960 size=64 callers=0 calls=0
*/
void sub_1cc960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc960ULL || rel >= 0x1cc9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc9a0 size=240 callers=0 calls=2
   calls: sub_1cb420, sub_1cb500
*/
void sub_1cc9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc9a0ULL || rel >= 0x1cca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cca90 size=368 callers=0 calls=2
   calls: sub_1cb420, sub_9b3d0
*/
void sub_1cca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cca90ULL || rel >= 0x1ccc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ccc00 size=64 callers=0 calls=0
*/
void sub_1ccc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ccc00ULL || rel >= 0x1ccc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ccc40 size=256 callers=0 calls=3
   calls: sub_1bbac0, sub_9b3d0, sub_9b3e0
*/
void sub_1ccc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ccc40ULL || rel >= 0x1ccd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ccd40 size=128 callers=0 calls=0
*/
void sub_1ccd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ccd40ULL || rel >= 0x1ccdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ccdc0 size=192 callers=0 calls=0
*/
void sub_1ccdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ccdc0ULL || rel >= 0x1cce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cce80 size=176 callers=0 calls=0
*/
void sub_1cce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cce80ULL || rel >= 0x1ccf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ccf30 size=144 callers=0 calls=0
*/
void sub_1ccf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ccf30ULL || rel >= 0x1ccfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ccfc0 size=112 callers=0 calls=1
   calls: sub_1cb780
*/
void sub_1ccfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ccfc0ULL || rel >= 0x1cd030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cd030 size=208 callers=0 calls=0
*/
void sub_1cd030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cd030ULL || rel >= 0x1cd100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cd100 size=192 callers=0 calls=2
   calls: sub_1bbd50, sub_1cb780
*/
void sub_1cd100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cd100ULL || rel >= 0x1cd1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cd1c0 size=288 callers=0 calls=3
   calls: sub_1bbd50, sub_1cb420, sub_1cb500
*/
void sub_1cd1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cd1c0ULL || rel >= 0x1cd2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cd2e0 size=80 callers=0 calls=1
   calls: sub_1cb780
*/
void sub_1cd2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cd2e0ULL || rel >= 0x1cd330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cd330 size=432 callers=0 calls=1
   calls: sub_1cb420
*/
void sub_1cd330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cd330ULL || rel >= 0x1cd4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cd4e0 size=480 callers=0 calls=2
   calls: sub_1bb950, sub_1cb420
*/
void sub_1cd4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cd4e0ULL || rel >= 0x1cd6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cd6c0 size=128 callers=0 calls=2
   calls: sub_1cb420, sub_1cb500
*/
void sub_1cd6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cd6c0ULL || rel >= 0x1cd740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cd740 size=1872 callers=1 calls=5
   calls: sub_182050, sub_1bb6e0, sub_1bb950, sub_1cb420, sub_1cb500
*/
void sub_1cd740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cd740ULL || rel >= 0x1cde90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cde90 size=240 callers=7 calls=4
   calls: sub_1bb950, sub_1cb420, sub_1cb500, sub_9b3d0
*/
void sub_1cde90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cde90ULL || rel >= 0x1cdf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cdf80 size=224 callers=0 calls=1
   calls: sub_1cde90
*/
void sub_1cdf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cdf80ULL || rel >= 0x1ce060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ce060 size=320 callers=0 calls=1
   calls: sub_1cde90
*/
void sub_1ce060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce060ULL || rel >= 0x1ce1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ce1a0 size=288 callers=0 calls=1
   calls: sub_1cde90
*/
void sub_1ce1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce1a0ULL || rel >= 0x1ce2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ce2c0 size=240 callers=0 calls=1
   calls: sub_1cde90
*/
void sub_1ce2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce2c0ULL || rel >= 0x1ce3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ce3b0 size=192 callers=0 calls=1
   calls: sub_1cde90
*/
void sub_1ce3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce3b0ULL || rel >= 0x1ce470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ce470 size=384 callers=0 calls=3
   calls: sub_1cb420, sub_1cb500, sub_9b3d0
*/
void sub_1ce470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce470ULL || rel >= 0x1ce5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ce5f0 size=240 callers=0 calls=1
   calls: sub_1cde90
*/
void sub_1ce5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce5f0ULL || rel >= 0x1ce6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ce6e0 size=240 callers=0 calls=1
   calls: sub_1cde90
*/
void sub_1ce6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce6e0ULL || rel >= 0x1ce7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ce7d0 size=304 callers=6 calls=4
   calls: sub_1bb950, sub_1cb420, sub_1cb500, sub_9b3d0
*/
void sub_1ce7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce7d0ULL || rel >= 0x1ce900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ce900 size=224 callers=0 calls=1
   calls: sub_1ce7d0
*/
void sub_1ce900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce900ULL || rel >= 0x1ce9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ce9e0 size=240 callers=0 calls=1
   calls: sub_1ce7d0
*/
void sub_1ce9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce9e0ULL || rel >= 0x1cead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cead0 size=240 callers=0 calls=1
   calls: sub_1ce7d0
*/
void sub_1cead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cead0ULL || rel >= 0x1cebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cebc0 size=192 callers=0 calls=1
   calls: sub_1ce7d0
*/
void sub_1cebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cebc0ULL || rel >= 0x1cec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cec80 size=448 callers=0 calls=3
   calls: sub_1cb420, sub_1cb500, sub_9b3d0
*/
void sub_1cec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cec80ULL || rel >= 0x1cee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cee40 size=240 callers=0 calls=1
   calls: sub_1ce7d0
*/
void sub_1cee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cee40ULL || rel >= 0x1cef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cef30 size=240 callers=0 calls=1
   calls: sub_1ce7d0
*/
void sub_1cef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cef30ULL || rel >= 0x1cf020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cf020 size=336 callers=6 calls=4
   calls: sub_1bb950, sub_1cb420, sub_1cb500, sub_9b3d0
*/
void sub_1cf020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cf020ULL || rel >= 0x1cf170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cf170 size=176 callers=0 calls=1
   calls: sub_1cf020
*/
void sub_1cf170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cf170ULL || rel >= 0x1cf220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cf220 size=192 callers=0 calls=1
   calls: sub_1cf020
*/
void sub_1cf220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cf220ULL || rel >= 0x1cf2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cf2e0 size=192 callers=0 calls=1
   calls: sub_1cf020
*/
void sub_1cf2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cf2e0ULL || rel >= 0x1cf3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cf3a0 size=144 callers=0 calls=1
   calls: sub_1cf020
*/
void sub_1cf3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cf3a0ULL || rel >= 0x1cf430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cf430 size=432 callers=0 calls=3
   calls: sub_1cb420, sub_1cb500, sub_9b3d0
*/
void sub_1cf430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cf430ULL || rel >= 0x1cf5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cf5e0 size=192 callers=0 calls=1
   calls: sub_1cf020
*/
void sub_1cf5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cf5e0ULL || rel >= 0x1cf6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cf6a0 size=192 callers=0 calls=1
   calls: sub_1cf020
*/
void sub_1cf6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cf6a0ULL || rel >= 0x1cf760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cf760 size=11632 callers=0 calls=51
   calls: sub_11d890, sub_11e390, sub_129650, sub_1bb5e0, sub_1bb6d0, sub_1bb830, sub_1bb8d0, sub_1bb910, sub_1bb950, sub_1bbe80, sub_1bc170, sub_1bc2b0
   ... +39 more
*/
void sub_1cf760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cf760ULL || rel >= 0x1d24d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d24d0 size=368 callers=46 calls=1
   calls: sub_1bb950
*/
void sub_1d24d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d24d0ULL || rel >= 0x1d2640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d2640 size=672 callers=43 calls=5
   calls: sub_1bb830, sub_1bb950, sub_9b3d0, sub_9b500, sub_9ca30
*/
void sub_1d2640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d2640ULL || rel >= 0x1d28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d28e0 size=160 callers=4 calls=1
   calls: sub_1bb950
*/
void sub_1d28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d28e0ULL || rel >= 0x1d2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d2980 size=256 callers=12 calls=3
   calls: sub_1d24d0, sub_1d2640, sub_1d28e0
*/
void sub_1d2980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d2980ULL || rel >= 0x1d2a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d2a80 size=48 callers=0 calls=0
*/
void sub_1d2a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d2a80ULL || rel >= 0x1d2ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d2ab0 size=48 callers=0 calls=0
*/
void sub_1d2ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d2ab0ULL || rel >= 0x1d2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d2ae0 size=368 callers=0 calls=0
*/
void sub_1d2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d2ae0ULL || rel >= 0x1d2c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d2c50 size=384 callers=0 calls=0
*/
void sub_1d2c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d2c50ULL || rel >= 0x1d2dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d2dd0 size=272 callers=0 calls=0
*/
void sub_1d2dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d2dd0ULL || rel >= 0x1d2ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d2ee0 size=304 callers=0 calls=0
*/
void sub_1d2ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d2ee0ULL || rel >= 0x1d3010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3010 size=400 callers=0 calls=0
*/
void sub_1d3010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3010ULL || rel >= 0x1d31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d31a0 size=240 callers=0 calls=0
*/
void sub_1d31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d31a0ULL || rel >= 0x1d3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3290 size=384 callers=0 calls=0
*/
void sub_1d3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3290ULL || rel >= 0x1d3410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3410 size=368 callers=0 calls=3
   calls: sub_1d24d0, sub_1d2640, sub_3af80
*/
void sub_1d3410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3410ULL || rel >= 0x1d3580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3580 size=272 callers=0 calls=1
   calls: sub_1d2980
*/
void sub_1d3580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3580ULL || rel >= 0x1d3690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3690 size=112 callers=0 calls=0
*/
void sub_1d3690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3690ULL || rel >= 0x1d3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3700 size=240 callers=0 calls=0
*/
void sub_1d3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3700ULL || rel >= 0x1d37f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d37f0 size=144 callers=0 calls=0
*/
void sub_1d37f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d37f0ULL || rel >= 0x1d3880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3880 size=208 callers=0 calls=0
*/
void sub_1d3880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3880ULL || rel >= 0x1d3950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3950 size=208 callers=0 calls=0
*/
void sub_1d3950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3950ULL || rel >= 0x1d3a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3a20 size=416 callers=0 calls=0
*/
void sub_1d3a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3a20ULL || rel >= 0x1d3bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3bc0 size=288 callers=0 calls=0
*/
void sub_1d3bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3bc0ULL || rel >= 0x1d3ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3ce0 size=256 callers=0 calls=0
*/
void sub_1d3ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3ce0ULL || rel >= 0x1d3de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3de0 size=288 callers=0 calls=1
   calls: sub_182050
*/
void sub_1d3de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3de0ULL || rel >= 0x1d3f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3f00 size=272 callers=0 calls=0
*/
void sub_1d3f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3f00ULL || rel >= 0x1d4010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4010 size=320 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d4010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4010ULL || rel >= 0x1d4150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4150 size=304 callers=0 calls=1
   calls: sub_1d2980
*/
void sub_1d4150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4150ULL || rel >= 0x1d4280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4280 size=336 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d4280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4280ULL || rel >= 0x1d43d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d43d0 size=320 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d43d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d43d0ULL || rel >= 0x1d4510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4510 size=416 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d4510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4510ULL || rel >= 0x1d46b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d46b0 size=400 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d46b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d46b0ULL || rel >= 0x1d4840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4840 size=256 callers=4 calls=0
*/
void sub_1d4840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4840ULL || rel >= 0x1d4940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4940 size=192 callers=0 calls=1
   calls: sub_1d4840
*/
void sub_1d4940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4940ULL || rel >= 0x1d4a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4a00 size=192 callers=0 calls=1
   calls: sub_1d4840
*/
void sub_1d4a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4a00ULL || rel >= 0x1d4ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4ac0 size=368 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d4ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4ac0ULL || rel >= 0x1d4c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4c30 size=384 callers=0 calls=2
   calls: sub_1d24d0, sub_9b3d0
*/
void sub_1d4c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4c30ULL || rel >= 0x1d4db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4db0 size=288 callers=0 calls=2
   calls: sub_1bb950, sub_1d2980
*/
void sub_1d4db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4db0ULL || rel >= 0x1d4ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4ed0 size=320 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d4ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4ed0ULL || rel >= 0x1d5010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d5010 size=320 callers=0 calls=1
   calls: sub_1d2980
*/
void sub_1d5010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5010ULL || rel >= 0x1d5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d5150 size=352 callers=0 calls=1
   calls: sub_1d2980
*/
void sub_1d5150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5150ULL || rel >= 0x1d52b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d52b0 size=352 callers=0 calls=1
   calls: sub_1d2640
*/
void sub_1d52b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d52b0ULL || rel >= 0x1d5410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d5410 size=368 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d5410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5410ULL || rel >= 0x1d5580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d5580 size=384 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d5580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5580ULL || rel >= 0x1d5700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d5700 size=368 callers=0 calls=2
   calls: sub_1d24d0, sub_9b3d0
*/
void sub_1d5700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5700ULL || rel >= 0x1d5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d5870 size=432 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d5870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5870ULL || rel >= 0x1d5a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d5a20 size=432 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d5a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5a20ULL || rel >= 0x1d5bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d5bd0 size=416 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d5bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5bd0ULL || rel >= 0x1d5d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d5d70 size=96 callers=0 calls=0
*/
void sub_1d5d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5d70ULL || rel >= 0x1d5dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d5dd0 size=176 callers=0 calls=1
   calls: sub_1d4840
*/
void sub_1d5dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5dd0ULL || rel >= 0x1d5e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d5e80 size=192 callers=0 calls=1
   calls: sub_1d4840
*/
void sub_1d5e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5e80ULL || rel >= 0x1d5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d5f40 size=352 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d5f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5f40ULL || rel >= 0x1d60a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d60a0 size=400 callers=0 calls=2
   calls: sub_1d24d0, sub_9b3d0
*/
void sub_1d60a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d60a0ULL || rel >= 0x1d6230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d6230 size=320 callers=0 calls=1
   calls: sub_1d2980
*/
void sub_1d6230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6230ULL || rel >= 0x1d6370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d6370 size=128 callers=0 calls=0
*/
void sub_1d6370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6370ULL || rel >= 0x1d63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d63f0 size=416 callers=0 calls=1
   calls: sub_1d2980
*/
void sub_1d63f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d63f0ULL || rel >= 0x1d6590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d6590 size=416 callers=0 calls=1
   calls: sub_1d2980
*/
void sub_1d6590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6590ULL || rel >= 0x1d6730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d6730 size=432 callers=0 calls=2
   calls: sub_1d24d0, sub_9b3d0
*/
void sub_1d6730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6730ULL || rel >= 0x1d68e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d68e0 size=352 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d68e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d68e0ULL || rel >= 0x1d6a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d6a40 size=400 callers=0 calls=2
   calls: sub_1d24d0, sub_9b3d0
*/
void sub_1d6a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6a40ULL || rel >= 0x1d6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d6bd0 size=400 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6bd0ULL || rel >= 0x1d6d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d6d60 size=416 callers=0 calls=0
*/
void sub_1d6d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6d60ULL || rel >= 0x1d6f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d6f00 size=304 callers=0 calls=1
   calls: sub_1d2980
*/
void sub_1d6f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6f00ULL || rel >= 0x1d7030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d7030 size=320 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d7030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7030ULL || rel >= 0x1d7170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d7170 size=384 callers=0 calls=2
   calls: sub_1d24d0, sub_9b3d0
*/
void sub_1d7170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7170ULL || rel >= 0x1d72f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d72f0 size=448 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d72f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d72f0ULL || rel >= 0x1d74b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d74b0 size=496 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d74b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d74b0ULL || rel >= 0x1d76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d76a0 size=272 callers=0 calls=1
   calls: sub_1bb830
*/
void sub_1d76a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d76a0ULL || rel >= 0x1d77b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d77b0 size=160 callers=0 calls=0
*/
void sub_1d77b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d77b0ULL || rel >= 0x1d7850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d7850 size=144 callers=0 calls=0
*/
void sub_1d7850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7850ULL || rel >= 0x1d78e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d78e0 size=352 callers=0 calls=0
*/
void sub_1d78e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d78e0ULL || rel >= 0x1d7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d7a40 size=432 callers=0 calls=1
   calls: sub_1bb830
*/
void sub_1d7a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7a40ULL || rel >= 0x1d7bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d7bf0 size=592 callers=0 calls=1
   calls: sub_182050
*/
void sub_1d7bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7bf0ULL || rel >= 0x1d7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d7e40 size=336 callers=0 calls=0
*/
void sub_1d7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7e40ULL || rel >= 0x1d7f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d7f90 size=416 callers=0 calls=0
*/
void sub_1d7f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7f90ULL || rel >= 0x1d8130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d8130 size=432 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d8130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8130ULL || rel >= 0x1d82e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d82e0 size=512 callers=0 calls=2
   calls: sub_1d24d0, sub_9b3d0
*/
void sub_1d82e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d82e0ULL || rel >= 0x1d84e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d84e0 size=160 callers=0 calls=0
*/
void sub_1d84e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d84e0ULL || rel >= 0x1d8580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d8580 size=336 callers=0 calls=1
   calls: sub_1d2640
*/
void sub_1d8580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8580ULL || rel >= 0x1d86d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d86d0 size=432 callers=0 calls=3
   calls: sub_1bbac0, sub_9b3d0, sub_9b3e0
*/
void sub_1d86d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d86d0ULL || rel >= 0x1d8880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d8880 size=288 callers=0 calls=0
*/
void sub_1d8880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8880ULL || rel >= 0x1d89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d89a0 size=224 callers=0 calls=0
*/
void sub_1d89a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d89a0ULL || rel >= 0x1d8a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d8a80 size=352 callers=0 calls=2
   calls: sub_1d2640, sub_9b3e0
*/
void sub_1d8a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8a80ULL || rel >= 0x1d8be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d8be0 size=144 callers=0 calls=0
*/
void sub_1d8be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8be0ULL || rel >= 0x1d8c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d8c70 size=336 callers=0 calls=1
   calls: sub_1bb950
*/
void sub_1d8c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8c70ULL || rel >= 0x1d8dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d8dc0 size=288 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d8dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8dc0ULL || rel >= 0x1d8ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d8ee0 size=160 callers=0 calls=0
*/
void sub_1d8ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8ee0ULL || rel >= 0x1d8f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d8f80 size=288 callers=0 calls=1
   calls: sub_1d2980
*/
void sub_1d8f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8f80ULL || rel >= 0x1d90a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d90a0 size=368 callers=0 calls=0
*/
void sub_1d90a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d90a0ULL || rel >= 0x1d9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9210 size=352 callers=0 calls=0
*/
void sub_1d9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9210ULL || rel >= 0x1d9370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9370 size=224 callers=0 calls=1
   calls: sub_1d2640
*/
void sub_1d9370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9370ULL || rel >= 0x1d9450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9450 size=256 callers=0 calls=3
   calls: sub_1d24d0, sub_1d2640, sub_9b3e0
*/
void sub_1d9450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9450ULL || rel >= 0x1d9550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9550 size=112 callers=0 calls=0
*/
void sub_1d9550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9550ULL || rel >= 0x1d95c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d95c0 size=16 callers=0 calls=0
*/
void sub_1d95c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d95c0ULL || rel >= 0x1d95d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d95d0 size=176 callers=0 calls=0
*/
void sub_1d95d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d95d0ULL || rel >= 0x1d9680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9680 size=304 callers=0 calls=1
   calls: sub_1d2640
*/
void sub_1d9680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9680ULL || rel >= 0x1d97b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d97b0 size=240 callers=0 calls=0
*/
void sub_1d97b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d97b0ULL || rel >= 0x1d98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d98a0 size=112 callers=0 calls=0
*/
void sub_1d98a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d98a0ULL || rel >= 0x1d9910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9910 size=336 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d9910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9910ULL || rel >= 0x1d9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9a60 size=96 callers=0 calls=1
   calls: sub_1d24d0
*/
void sub_1d9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9a60ULL || rel >= 0x1d9ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9ac0 size=416 callers=0 calls=3
   calls: sub_1d24d0, sub_1d2640, sub_1d28e0
*/
void sub_1d9ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9ac0ULL || rel >= 0x1d9c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9c60 size=448 callers=0 calls=4
   calls: sub_1d24d0, sub_1d2640, sub_1d28e0, sub_9b3d0
*/
void sub_1d9c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9c60ULL || rel >= 0x1d9e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9e20 size=128 callers=0 calls=0
*/
void sub_1d9e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9e20ULL || rel >= 0x1d9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9ea0 size=304 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d9ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9ea0ULL || rel >= 0x1d9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9fd0 size=336 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1d9fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9fd0ULL || rel >= 0x1da120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001da120 size=144 callers=0 calls=0
*/
void sub_1da120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1da120ULL || rel >= 0x1da1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001da1b0 size=304 callers=0 calls=0
*/
void sub_1da1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1da1b0ULL || rel >= 0x1da2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001da2e0 size=288 callers=0 calls=0
*/
void sub_1da2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1da2e0ULL || rel >= 0x1da400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001da400 size=336 callers=0 calls=0
*/
void sub_1da400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1da400ULL || rel >= 0x1da550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001da550 size=288 callers=0 calls=1
   calls: sub_1d2980
*/
void sub_1da550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1da550ULL || rel >= 0x1da670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001da670 size=368 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1da670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1da670ULL || rel >= 0x1da7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001da7e0 size=272 callers=0 calls=1
   calls: sub_1d2980
*/
void sub_1da7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1da7e0ULL || rel >= 0x1da8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001da8f0 size=736 callers=0 calls=1
   calls: sub_1d24d0
*/
void sub_1da8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1da8f0ULL || rel >= 0x1dabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dabd0 size=736 callers=0 calls=2
   calls: sub_1d24d0, sub_1d28e0
*/
void sub_1dabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dabd0ULL || rel >= 0x1daeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001daeb0 size=304 callers=0 calls=2
   calls: sub_1d24d0, sub_1d2640
*/
void sub_1daeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1daeb0ULL || rel >= 0x1dafe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dafe0 size=176 callers=0 calls=0
*/
void sub_1dafe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dafe0ULL || rel >= 0x1db090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001db090 size=208 callers=7 calls=0
*/
void sub_1db090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1db090ULL || rel >= 0x1db160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001db160 size=576 callers=0 calls=1
   calls: sub_1db090
*/
void sub_1db160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1db160ULL || rel >= 0x1db3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001db3a0 size=592 callers=0 calls=1
   calls: sub_1db090
*/
void sub_1db3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1db3a0ULL || rel >= 0x1db5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001db5f0 size=528 callers=0 calls=1
   calls: sub_1db090
*/
void sub_1db5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1db5f0ULL || rel >= 0x1db800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001db800 size=416 callers=0 calls=1
   calls: sub_1db090
*/
void sub_1db800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1db800ULL || rel >= 0x1db9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001db9a0 size=272 callers=0 calls=1
   calls: sub_1db090
*/
void sub_1db9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1db9a0ULL || rel >= 0x1dbab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dbab0 size=448 callers=0 calls=1
   calls: sub_1db090
*/
void sub_1dbab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dbab0ULL || rel >= 0x1dbc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dbc70 size=464 callers=0 calls=1
   calls: sub_1db090
*/
void sub_1dbc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dbc70ULL || rel >= 0x1dbe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dbe40 size=224 callers=7 calls=3
   calls: sub_1d24d0, sub_1d2640, sub_9b3d0
*/
void sub_1dbe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dbe40ULL || rel >= 0x1dbf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dbf20 size=400 callers=0 calls=1
   calls: sub_1dbe40
*/
void sub_1dbf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dbf20ULL || rel >= 0x1dc0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dc0b0 size=416 callers=0 calls=1
   calls: sub_1dbe40
*/
void sub_1dc0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dc0b0ULL || rel >= 0x1dc250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dc250 size=464 callers=0 calls=1
   calls: sub_1dbe40
*/
void sub_1dc250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dc250ULL || rel >= 0x1dc420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dc420 size=400 callers=0 calls=1
   calls: sub_1dbe40
*/
void sub_1dc420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dc420ULL || rel >= 0x1dc5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dc5b0 size=320 callers=0 calls=1
   calls: sub_1dbe40
*/
void sub_1dc5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dc5b0ULL || rel >= 0x1dc6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dc6f0 size=576 callers=0 calls=3
   calls: sub_1d24d0, sub_1d2640, sub_9b3d0
*/
void sub_1dc6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dc6f0ULL || rel >= 0x1dc930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dc930 size=416 callers=0 calls=1
   calls: sub_1dbe40
*/
void sub_1dc930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dc930ULL || rel >= 0x1dcad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dcad0 size=416 callers=0 calls=1
   calls: sub_1dbe40
*/
void sub_1dcad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dcad0ULL || rel >= 0x1dcc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dcc70 size=272 callers=4 calls=3
   calls: sub_1d24d0, sub_1d2640, sub_9b3d0
*/
void sub_1dcc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dcc70ULL || rel >= 0x1dcd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dcd80 size=400 callers=0 calls=1
   calls: sub_1dcc70
*/
void sub_1dcd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dcd80ULL || rel >= 0x1dcf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dcf10 size=400 callers=0 calls=1
   calls: sub_1dcc70
*/
void sub_1dcf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dcf10ULL || rel >= 0x1dd0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dd0a0 size=400 callers=0 calls=1
   calls: sub_1dcc70
*/
void sub_1dd0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dd0a0ULL || rel >= 0x1dd230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dd230 size=352 callers=0 calls=1
   calls: sub_1dcc70
*/
void sub_1dd230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dd230ULL || rel >= 0x1dd390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dd390 size=544 callers=0 calls=3
   calls: sub_1d24d0, sub_1d2640, sub_9b3d0
*/
void sub_1dd390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dd390ULL || rel >= 0x1dd5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dd5b0 size=192 callers=4 calls=3
   calls: sub_1d24d0, sub_1d2640, sub_9b3d0
*/
void sub_1dd5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dd5b0ULL || rel >= 0x1dd670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dd670 size=496 callers=0 calls=1
   calls: sub_1dd5b0
*/
void sub_1dd670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dd670ULL || rel >= 0x1dd860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dd860 size=496 callers=0 calls=1
   calls: sub_1dd5b0
*/
void sub_1dd860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dd860ULL || rel >= 0x1dda50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dda50 size=528 callers=0 calls=1
   calls: sub_1dd5b0
*/
void sub_1dda50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dda50ULL || rel >= 0x1ddc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ddc60 size=480 callers=0 calls=1
   calls: sub_1dd5b0
*/
void sub_1ddc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ddc60ULL || rel >= 0x1dde40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dde40 size=528 callers=0 calls=3
   calls: sub_1d24d0, sub_1d2640, sub_9b3d0
*/
void sub_1dde40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dde40ULL || rel >= 0x1de050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001de050 size=256 callers=0 calls=0
*/
void sub_1de050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1de050ULL || rel >= 0x1de150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001de150 size=208 callers=0 calls=0
*/
void sub_1de150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1de150ULL || rel >= 0x1de220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001de220 size=16 callers=0 calls=0
*/
void sub_1de220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1de220ULL || rel >= 0x1de230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001de230 size=1504 callers=0 calls=2
   calls: sub_1bbbb0, sub_1bbd50
*/
void sub_1de230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1de230ULL || rel >= 0x1de810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001de810 size=16 callers=0 calls=0
*/
void sub_1de810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1de810ULL || rel >= 0x1de820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001de820 size=208 callers=0 calls=0
*/
void sub_1de820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1de820ULL || rel >= 0x1de8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001de8f0 size=160 callers=41 calls=2
   calls: sub_9b3d0, sub_9b500
*/
void sub_1de8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1de8f0ULL || rel >= 0x1de990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001de990 size=368 callers=5 calls=3
   calls: sub_9b3d0, sub_9b500, sub_9ca30
*/
void sub_1de990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1de990ULL || rel >= 0x1deb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001deb00 size=336 callers=2 calls=3
   calls: sub_9b3d0, sub_9b500, sub_9ca30
*/
void sub_1deb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1deb00ULL || rel >= 0x1dec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dec50 size=880 callers=56 calls=2
   calls: sub_66d40, sub_67af0
*/
void sub_1dec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dec50ULL || rel >= 0x1defc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001defc0 size=224 callers=0 calls=0
*/
void sub_1defc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1defc0ULL || rel >= 0x1df0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001df0a0 size=240 callers=0 calls=0
*/
void sub_1df0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1df0a0ULL || rel >= 0x1df190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001df190 size=208 callers=0 calls=0
*/
void sub_1df190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1df190ULL || rel >= 0x1df260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001df260 size=624 callers=0 calls=1
   calls: sub_63c30
*/
void sub_1df260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1df260ULL || rel >= 0x1df4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001df4d0 size=768 callers=0 calls=1
   calls: sub_1dec50
*/
void sub_1df4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1df4d0ULL || rel >= 0x1df7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001df7d0 size=832 callers=0 calls=1
   calls: sub_1dec50
*/
void sub_1df7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1df7d0ULL || rel >= 0x1dfb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dfb10 size=176 callers=0 calls=0
*/
void sub_1dfb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dfb10ULL || rel >= 0x1dfbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dfbc0 size=256 callers=0 calls=0
*/
void sub_1dfbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dfbc0ULL || rel >= 0x1dfcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dfcc0 size=736 callers=0 calls=5
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_3af80, sub_9ca30
*/
void sub_1dfcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dfcc0ULL || rel >= 0x1dffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dffa0 size=976 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1dffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dffa0ULL || rel >= 0x1e0370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e0370 size=128 callers=0 calls=0
*/
void sub_1e0370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e0370ULL || rel >= 0x1e03f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e03f0 size=176 callers=0 calls=0
*/
void sub_1e03f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e03f0ULL || rel >= 0x1e04a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e04a0 size=96 callers=0 calls=0
*/
void sub_1e04a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e04a0ULL || rel >= 0x1e0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e0500 size=176 callers=0 calls=0
*/
void sub_1e0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e0500ULL || rel >= 0x1e05b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e05b0 size=192 callers=0 calls=1
   calls: sub_1dec50
*/
void sub_1e05b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e05b0ULL || rel >= 0x1e0670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e0670 size=224 callers=0 calls=0
*/
void sub_1e0670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e0670ULL || rel >= 0x1e0750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e0750 size=208 callers=0 calls=0
*/
void sub_1e0750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e0750ULL || rel >= 0x1e0820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e0820 size=352 callers=0 calls=2
   calls: sub_1bb950, sub_1dec50
*/
void sub_1e0820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e0820ULL || rel >= 0x1e0980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e0980 size=176 callers=0 calls=0
*/
void sub_1e0980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e0980ULL || rel >= 0x1e0a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e0a30 size=128 callers=0 calls=0
*/
void sub_1e0a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e0a30ULL || rel >= 0x1e0ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e0ab0 size=768 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e0ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e0ab0ULL || rel >= 0x1e0db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e0db0 size=208 callers=0 calls=0
*/
void sub_1e0db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e0db0ULL || rel >= 0x1e0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e0e80 size=1072 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e0e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e0e80ULL || rel >= 0x1e12b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e12b0 size=800 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e12b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e12b0ULL || rel >= 0x1e15d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e15d0 size=688 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e15d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e15d0ULL || rel >= 0x1e1880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e1880 size=864 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e1880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e1880ULL || rel >= 0x1e1be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e1be0 size=800 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e1be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e1be0ULL || rel >= 0x1e1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e1f00 size=752 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e1f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e1f00ULL || rel >= 0x1e21f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e21f0 size=736 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e21f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e21f0ULL || rel >= 0x1e24d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e24d0 size=816 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e24d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e24d0ULL || rel >= 0x1e2800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e2800 size=416 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1e2800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e2800ULL || rel >= 0x1e29a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e29a0 size=752 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e29a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e29a0ULL || rel >= 0x1e2c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e2c90 size=992 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e2c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e2c90ULL || rel >= 0x1e3070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e3070 size=1120 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e3070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e3070ULL || rel >= 0x1e34d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e34d0 size=624 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e34d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e34d0ULL || rel >= 0x1e3740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e3740 size=816 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e3740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e3740ULL || rel >= 0x1e3a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e3a70 size=784 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e3a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e3a70ULL || rel >= 0x1e3d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e3d80 size=272 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1e3d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e3d80ULL || rel >= 0x1e3e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e3e90 size=896 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e3e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e3e90ULL || rel >= 0x1e4210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4210 size=928 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e4210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4210ULL || rel >= 0x1e45b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e45b0 size=256 callers=0 calls=1
   calls: sub_1bb950
*/
void sub_1e45b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e45b0ULL || rel >= 0x1e46b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e46b0 size=48 callers=0 calls=0
*/
void sub_1e46b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e46b0ULL || rel >= 0x1e46e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e46e0 size=1120 callers=0 calls=3
   calls: sub_1bb830, sub_1bb950, sub_1de990
*/
void sub_1e46e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e46e0ULL || rel >= 0x1e4b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4b40 size=352 callers=0 calls=2
   calls: sub_1bb950, sub_1deb00
*/
void sub_1e4b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4b40ULL || rel >= 0x1e4ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4ca0 size=1536 callers=0 calls=3
   calls: sub_1bb830, sub_1bb950, sub_1de990
*/
void sub_1e4ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4ca0ULL || rel >= 0x1e52a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e52a0 size=1056 callers=0 calls=3
   calls: sub_1bb830, sub_1bb950, sub_1de990
*/
void sub_1e52a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e52a0ULL || rel >= 0x1e56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e56c0 size=320 callers=0 calls=2
   calls: sub_1bb950, sub_1deb00
*/
void sub_1e56c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e56c0ULL || rel >= 0x1e5800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5800 size=1184 callers=0 calls=3
   calls: sub_1bb830, sub_1bb950, sub_1de990
*/
void sub_1e5800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5800ULL || rel >= 0x1e5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5ca0 size=1328 callers=0 calls=3
   calls: sub_1bb830, sub_1bb950, sub_1de990
*/
void sub_1e5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5ca0ULL || rel >= 0x1e61d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e61d0 size=720 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e61d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e61d0ULL || rel >= 0x1e64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e64a0 size=752 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e64a0ULL || rel >= 0x1e6790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6790 size=816 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e6790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6790ULL || rel >= 0x1e6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6ac0 size=368 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1e6ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6ac0ULL || rel >= 0x1e6c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6c30 size=1184 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e6c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6c30ULL || rel >= 0x1e70d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e70d0 size=992 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e70d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e70d0ULL || rel >= 0x1e74b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e74b0 size=96 callers=0 calls=0
*/
void sub_1e74b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e74b0ULL || rel >= 0x1e7510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7510 size=672 callers=0 calls=2
   calls: sub_1bb830, sub_1bb950
*/
void sub_1e7510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7510ULL || rel >= 0x1e77b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e77b0 size=1360 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e77b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e77b0ULL || rel >= 0x1e7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7d00 size=384 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1e7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7d00ULL || rel >= 0x1e7e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7e80 size=784 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e7e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7e80ULL || rel >= 0x1e8190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8190 size=704 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e8190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8190ULL || rel >= 0x1e8450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8450 size=304 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1e8450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8450ULL || rel >= 0x1e8580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8580 size=352 callers=0 calls=0
*/
void sub_1e8580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8580ULL || rel >= 0x1e86e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e86e0 size=208 callers=0 calls=0
*/
void sub_1e86e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e86e0ULL || rel >= 0x1e87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e87b0 size=896 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e87b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e87b0ULL || rel >= 0x1e8b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8b30 size=256 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1e8b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8b30ULL || rel >= 0x1e8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8c30 size=800 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8c30ULL || rel >= 0x1e8f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e8f50 size=752 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1e8f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8f50ULL || rel >= 0x1e9240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9240 size=320 callers=0 calls=2
   calls: sub_1bb830, sub_1dec50
*/
void sub_1e9240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9240ULL || rel >= 0x1e9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9380 size=128 callers=0 calls=0
*/
void sub_1e9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9380ULL || rel >= 0x1e9400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9400 size=96 callers=0 calls=0
*/
void sub_1e9400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9400ULL || rel >= 0x1e9460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9460 size=256 callers=0 calls=0
*/
void sub_1e9460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9460ULL || rel >= 0x1e9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9560 size=304 callers=0 calls=1
   calls: sub_1bb830
*/
void sub_1e9560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9560ULL || rel >= 0x1e9690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9690 size=432 callers=0 calls=1
   calls: sub_1dec50
*/
void sub_1e9690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9690ULL || rel >= 0x1e9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9840 size=208 callers=0 calls=0
*/
void sub_1e9840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9840ULL || rel >= 0x1e9910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9910 size=208 callers=0 calls=0
*/
void sub_1e9910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9910ULL || rel >= 0x1e99e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e99e0 size=1360 callers=0 calls=5
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_1dec50, sub_9ca30
*/
void sub_1e99e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e99e0ULL || rel >= 0x1e9f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9f30 size=1472 callers=0 calls=5
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_1dec50, sub_9ca30
*/
void sub_1e9f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9f30ULL || rel >= 0x1ea4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea4f0 size=880 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1ea4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea4f0ULL || rel >= 0x1ea860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea860 size=656 callers=0 calls=3
   calls: sub_1bb950, sub_1dec50, sub_9b3d0
*/
void sub_1ea860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea860ULL || rel >= 0x1eaaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eaaf0 size=128 callers=0 calls=0
*/
void sub_1eaaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eaaf0ULL || rel >= 0x1eab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eab70 size=448 callers=0 calls=2
   calls: sub_1bb830, sub_1bb950
*/
void sub_1eab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eab70ULL || rel >= 0x1ead30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ead30 size=240 callers=0 calls=3
   calls: sub_1bbac0, sub_9b3d0, sub_9b3e0
*/
void sub_1ead30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ead30ULL || rel >= 0x1eae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eae20 size=256 callers=0 calls=1
   calls: sub_1bb950
*/
void sub_1eae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eae20ULL || rel >= 0x1eaf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eaf20 size=160 callers=0 calls=0
*/
void sub_1eaf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eaf20ULL || rel >= 0x1eafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eafc0 size=32 callers=0 calls=0
*/
void sub_1eafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eafc0ULL || rel >= 0x1eafe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

