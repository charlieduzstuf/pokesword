/* main functions 00a6b250..00a81590 (79 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00a6b250 size=32 callers=0 calls=0
*/
void sub_a6b250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b250ULL || rel >= 0xa6b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b270 size=400 callers=1 calls=1
   calls: sub_992180
*/
void sub_a6b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b270ULL || rel >= 0xa6b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b400 size=144 callers=0 calls=3
   calls: sub_954a00, sub_ed3290, sub_ed32d0
*/
void sub_a6b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b400ULL || rel >= 0xa6b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b490 size=64 callers=0 calls=0
*/
void sub_a6b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b490ULL || rel >= 0xa6b4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b4d0 size=48 callers=0 calls=0
*/
void sub_a6b4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b4d0ULL || rel >= 0xa6b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b500 size=32 callers=0 calls=0
*/
void sub_a6b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b500ULL || rel >= 0xa6b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b520 size=368 callers=1 calls=1
   calls: sub_992790
*/
void sub_a6b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b520ULL || rel >= 0xa6b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b690 size=144 callers=0 calls=3
   calls: sub_954a90, sub_ed3290, sub_ed32d0
*/
void sub_a6b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b690ULL || rel >= 0xa6b720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b720 size=64 callers=0 calls=0
*/
void sub_a6b720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b720ULL || rel >= 0xa6b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b760 size=48 callers=0 calls=0
*/
void sub_a6b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b760ULL || rel >= 0xa6b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b790 size=32 callers=0 calls=0
*/
void sub_a6b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b790ULL || rel >= 0xa6b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b7b0 size=304 callers=1 calls=1
   calls: sub_992be0
*/
void sub_a6b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b7b0ULL || rel >= 0xa6b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b8e0 size=112 callers=0 calls=1
   calls: sub_619300
*/
void sub_a6b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b8e0ULL || rel >= 0xa6b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b950 size=16 callers=0 calls=0
*/
void sub_a6b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b950ULL || rel >= 0xa6b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b960 size=16 callers=0 calls=0
*/
void sub_a6b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b960ULL || rel >= 0xa6b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b970 size=16 callers=0 calls=0
*/
void sub_a6b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b970ULL || rel >= 0xa6b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b980 size=48 callers=0 calls=1
   calls: sub_ed2ed0
*/
void sub_a6b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b980ULL || rel >= 0xa6b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b9b0 size=64 callers=0 calls=0
*/
void sub_a6b9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b9b0ULL || rel >= 0xa6b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6b9f0 size=48 callers=0 calls=0
*/
void sub_a6b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6b9f0ULL || rel >= 0xa6ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6ba20 size=32 callers=0 calls=0
*/
void sub_a6ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6ba20ULL || rel >= 0xa6ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6ba40 size=64 callers=0 calls=1
   calls: sub_ed3050
*/
void sub_a6ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6ba40ULL || rel >= 0xa6ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6ba80 size=64 callers=0 calls=0
*/
void sub_a6ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6ba80ULL || rel >= 0xa6bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bac0 size=48 callers=0 calls=0
*/
void sub_a6bac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bac0ULL || rel >= 0xa6baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6baf0 size=32 callers=0 calls=0
*/
void sub_a6baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6baf0ULL || rel >= 0xa6bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bb10 size=32 callers=0 calls=0
*/
void sub_a6bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bb10ULL || rel >= 0xa6bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bb30 size=16 callers=0 calls=0
*/
void sub_a6bb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bb30ULL || rel >= 0xa6bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bb40 size=16 callers=0 calls=0
*/
void sub_a6bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bb40ULL || rel >= 0xa6bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bb50 size=16 callers=0 calls=0
*/
void sub_a6bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bb50ULL || rel >= 0xa6bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bb60 size=32 callers=0 calls=0
*/
void sub_a6bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bb60ULL || rel >= 0xa6bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bb80 size=16 callers=0 calls=0
*/
void sub_a6bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bb80ULL || rel >= 0xa6bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bb90 size=16 callers=0 calls=0
*/
void sub_a6bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bb90ULL || rel >= 0xa6bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bba0 size=16 callers=0 calls=0
*/
void sub_a6bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bba0ULL || rel >= 0xa6bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bbb0 size=32 callers=0 calls=0
*/
void sub_a6bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bbb0ULL || rel >= 0xa6bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bbd0 size=16 callers=0 calls=0
*/
void sub_a6bbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bbd0ULL || rel >= 0xa6bbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bbe0 size=16 callers=0 calls=0
*/
void sub_a6bbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bbe0ULL || rel >= 0xa6bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bbf0 size=16 callers=0 calls=0
*/
void sub_a6bbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bbf0ULL || rel >= 0xa6bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bc00 size=16 callers=0 calls=0
*/
void sub_a6bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bc00ULL || rel >= 0xa6bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bc10 size=16 callers=0 calls=0
*/
void sub_a6bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bc10ULL || rel >= 0xa6bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bc20 size=16 callers=0 calls=0
*/
void sub_a6bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bc20ULL || rel >= 0xa6bc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bc30 size=16 callers=0 calls=0
*/
void sub_a6bc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bc30ULL || rel >= 0xa6bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bc40 size=32 callers=0 calls=0
*/
void sub_a6bc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bc40ULL || rel >= 0xa6bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bc60 size=16 callers=0 calls=0
*/
void sub_a6bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bc60ULL || rel >= 0xa6bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bc70 size=16 callers=0 calls=0
*/
void sub_a6bc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bc70ULL || rel >= 0xa6bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bc80 size=16 callers=0 calls=0
*/
void sub_a6bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bc80ULL || rel >= 0xa6bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bc90 size=16 callers=0 calls=0
*/
void sub_a6bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bc90ULL || rel >= 0xa6bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bca0 size=16 callers=0 calls=0
*/
void sub_a6bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bca0ULL || rel >= 0xa6bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bcb0 size=16 callers=0 calls=0
*/
void sub_a6bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bcb0ULL || rel >= 0xa6bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bcc0 size=16 callers=0 calls=0
*/
void sub_a6bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bcc0ULL || rel >= 0xa6bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bcd0 size=32 callers=0 calls=0
*/
void sub_a6bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bcd0ULL || rel >= 0xa6bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bcf0 size=16 callers=0 calls=0
*/
void sub_a6bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bcf0ULL || rel >= 0xa6bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bd00 size=16 callers=0 calls=0
*/
void sub_a6bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bd00ULL || rel >= 0xa6bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bd10 size=16 callers=0 calls=0
*/
void sub_a6bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bd10ULL || rel >= 0xa6bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bd20 size=608 callers=0 calls=3
   calls: sub_ed29e0, sub_ed32f0, sub_ed3e60
*/
void sub_a6bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bd20ULL || rel >= 0xa6bf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bf80 size=16 callers=0 calls=0
*/
void sub_a6bf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bf80ULL || rel >= 0xa6bf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bf90 size=16 callers=0 calls=0
*/
void sub_a6bf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bf90ULL || rel >= 0xa6bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bfa0 size=16 callers=0 calls=0
*/
void sub_a6bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bfa0ULL || rel >= 0xa6bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bfb0 size=64 callers=0 calls=1
   calls: sub_97d380
*/
void sub_a6bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bfb0ULL || rel >= 0xa6bff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6bff0 size=64 callers=0 calls=0
*/
void sub_a6bff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6bff0ULL || rel >= 0xa6c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c030 size=32 callers=0 calls=0
*/
void sub_a6c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c030ULL || rel >= 0xa6c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c050 size=16 callers=0 calls=0
*/
void sub_a6c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c050ULL || rel >= 0xa6c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c060 size=64 callers=0 calls=1
   calls: sub_97d380
*/
void sub_a6c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c060ULL || rel >= 0xa6c0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c0a0 size=64 callers=0 calls=0
*/
void sub_a6c0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c0a0ULL || rel >= 0xa6c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c0e0 size=32 callers=0 calls=0
*/
void sub_a6c0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c0e0ULL || rel >= 0xa6c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c100 size=16 callers=0 calls=0
*/
void sub_a6c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c100ULL || rel >= 0xa6c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c110 size=80 callers=0 calls=2
   calls: sub_962ec0, sub_965790
*/
void sub_a6c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c110ULL || rel >= 0xa6c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c160 size=16 callers=0 calls=0
*/
void sub_a6c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c160ULL || rel >= 0xa6c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c170 size=16 callers=0 calls=0
*/
void sub_a6c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c170ULL || rel >= 0xa6c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c180 size=16 callers=0 calls=0
*/
void sub_a6c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c180ULL || rel >= 0xa6c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c190 size=16 callers=0 calls=0
*/
void sub_a6c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c190ULL || rel >= 0xa6c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c1a0 size=16 callers=0 calls=0
*/
void sub_a6c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c1a0ULL || rel >= 0xa6c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c1b0 size=16 callers=0 calls=0
*/
void sub_a6c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c1b0ULL || rel >= 0xa6c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c1c0 size=16 callers=0 calls=0
*/
void sub_a6c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c1c0ULL || rel >= 0xa6c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c1d0 size=16 callers=0 calls=0
*/
void sub_a6c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c1d0ULL || rel >= 0xa6c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c1e0 size=16 callers=0 calls=0
*/
void sub_a6c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c1e0ULL || rel >= 0xa6c1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c1f0 size=16 callers=0 calls=0
*/
void sub_a6c1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c1f0ULL || rel >= 0xa6c200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c200 size=16 callers=0 calls=0
*/
void sub_a6c200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c200ULL || rel >= 0xa6c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c210 size=16 callers=0 calls=0
*/
void sub_a6c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c210ULL || rel >= 0xa6c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c220 size=64 callers=0 calls=0
*/
void sub_a6c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c220ULL || rel >= 0xa6c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c260 size=32 callers=0 calls=0
*/
void sub_a6c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c260ULL || rel >= 0xa6c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c280 size=16 callers=0 calls=0
*/
void sub_a6c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c280ULL || rel >= 0xa6c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c290 size=32 callers=0 calls=0
*/
void sub_a6c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c290ULL || rel >= 0xa6c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c2b0 size=16 callers=0 calls=0
*/
void sub_a6c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c2b0ULL || rel >= 0xa6c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c2c0 size=16 callers=0 calls=0
*/
void sub_a6c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c2c0ULL || rel >= 0xa6c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c2d0 size=16 callers=0 calls=0
*/
void sub_a6c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c2d0ULL || rel >= 0xa6c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c2e0 size=32 callers=0 calls=0
*/
void sub_a6c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c2e0ULL || rel >= 0xa6c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c300 size=16 callers=0 calls=0
*/
void sub_a6c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c300ULL || rel >= 0xa6c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c310 size=16 callers=0 calls=0
*/
void sub_a6c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c310ULL || rel >= 0xa6c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c320 size=16 callers=0 calls=0
*/
void sub_a6c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c320ULL || rel >= 0xa6c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c330 size=32 callers=0 calls=0
*/
void sub_a6c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c330ULL || rel >= 0xa6c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c350 size=16 callers=0 calls=0
*/
void sub_a6c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c350ULL || rel >= 0xa6c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c360 size=16 callers=0 calls=0
*/
void sub_a6c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c360ULL || rel >= 0xa6c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c370 size=16 callers=0 calls=0
*/
void sub_a6c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c370ULL || rel >= 0xa6c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c380 size=32 callers=0 calls=0
*/
void sub_a6c380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c380ULL || rel >= 0xa6c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c3a0 size=16 callers=0 calls=0
*/
void sub_a6c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c3a0ULL || rel >= 0xa6c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c3b0 size=16 callers=0 calls=0
*/
void sub_a6c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c3b0ULL || rel >= 0xa6c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c3c0 size=16 callers=0 calls=0
*/
void sub_a6c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c3c0ULL || rel >= 0xa6c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c3d0 size=32 callers=0 calls=0
*/
void sub_a6c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c3d0ULL || rel >= 0xa6c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c3f0 size=16 callers=0 calls=0
*/
void sub_a6c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c3f0ULL || rel >= 0xa6c400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c400 size=16 callers=0 calls=0
*/
void sub_a6c400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c400ULL || rel >= 0xa6c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c410 size=16 callers=0 calls=0
*/
void sub_a6c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c410ULL || rel >= 0xa6c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c420 size=240 callers=0 calls=0
*/
void sub_a6c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c420ULL || rel >= 0xa6c510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6c510 size=1920 callers=1 calls=10
   calls: battleEffectId, sound_attr, sub_76f5d0, sub_7ed820, sub_7edcf0, sub_7fc1c0, sub_7fc1e0, sub_7fc210, sub_940540, sub_e893e0
   ref: NONE_NONE
*/
void NONE_NONE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6c510ULL || rel >= 0xa6cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6cc90 size=784 callers=0 calls=2
   calls: sub_5e2bc0, sub_7fc1e0
*/
void sub_a6cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6cc90ULL || rel >= 0xa6cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6cfa0 size=16 callers=0 calls=0
*/
void sub_a6cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6cfa0ULL || rel >= 0xa6cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6cfb0 size=16 callers=0 calls=0
*/
void sub_a6cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6cfb0ULL || rel >= 0xa6cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6cfc0 size=16 callers=0 calls=0
*/
void sub_a6cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6cfc0ULL || rel >= 0xa6cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6cfd0 size=64 callers=0 calls=1
   calls: sub_98a8f0
*/
void sub_a6cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6cfd0ULL || rel >= 0xa6d010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d010 size=16 callers=0 calls=0
*/
void sub_a6d010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d010ULL || rel >= 0xa6d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d020 size=48 callers=0 calls=0
*/
void sub_a6d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d020ULL || rel >= 0xa6d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d050 size=32 callers=0 calls=0
*/
void sub_a6d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d050ULL || rel >= 0xa6d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d070 size=144 callers=0 calls=0
*/
void sub_a6d070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d070ULL || rel >= 0xa6d100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d100 size=48 callers=0 calls=0
*/
void sub_a6d100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d100ULL || rel >= 0xa6d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d130 size=64 callers=0 calls=0
*/
void sub_a6d130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d130ULL || rel >= 0xa6d170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d170 size=16 callers=0 calls=0
*/
void sub_a6d170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d170ULL || rel >= 0xa6d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d180 size=16 callers=0 calls=0
*/
void sub_a6d180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d180ULL || rel >= 0xa6d190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d190 size=112 callers=0 calls=0
*/
void sub_a6d190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d190ULL || rel >= 0xa6d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d200 size=96 callers=1 calls=0
*/
void sub_a6d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d200ULL || rel >= 0xa6d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d260 size=16 callers=0 calls=0
*/
void sub_a6d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d260ULL || rel >= 0xa6d270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d270 size=16 callers=0 calls=0
*/
void sub_a6d270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d270ULL || rel >= 0xa6d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d280 size=320 callers=1 calls=2
   calls: sub_952940, sub_952f90
*/
void sub_a6d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d280ULL || rel >= 0xa6d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d3c0 size=64 callers=0 calls=0
*/
void sub_a6d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d3c0ULL || rel >= 0xa6d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d400 size=16 callers=0 calls=0
*/
void sub_a6d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d400ULL || rel >= 0xa6d410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d410 size=16 callers=0 calls=0
*/
void sub_a6d410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d410ULL || rel >= 0xa6d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d420 size=16 callers=0 calls=0
*/
void sub_a6d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d420ULL || rel >= 0xa6d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d430 size=48 callers=0 calls=0
*/
void sub_a6d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d430ULL || rel >= 0xa6d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d460 size=96 callers=0 calls=0
*/
void sub_a6d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d460ULL || rel >= 0xa6d4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d4c0 size=480 callers=0 calls=4
   calls: sub_118dc70, sub_5dd790, sub_5e2930, sub_947030
   ref: bin/archive/chara/data/tr/anm/tr0001_00_champion_tr0001_00_battle02.gfpak
*/
void tr0001_00_champion_tr0001_00_battle02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d4c0ULL || rel >= 0xa6d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d6a0 size=32 callers=0 calls=0
*/
void sub_a6d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d6a0ULL || rel >= 0xa6d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d6c0 size=16 callers=0 calls=0
*/
void sub_a6d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d6c0ULL || rel >= 0xa6d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d6d0 size=16 callers=0 calls=0
*/
void sub_a6d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d6d0ULL || rel >= 0xa6d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d6e0 size=16 callers=0 calls=0
*/
void sub_a6d6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d6e0ULL || rel >= 0xa6d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d6f0 size=144 callers=0 calls=2
   calls: sub_5e2bc0, sub_949dd0
*/
void sub_a6d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d6f0ULL || rel >= 0xa6d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d780 size=16 callers=0 calls=0
*/
void sub_a6d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d780ULL || rel >= 0xa6d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d790 size=112 callers=0 calls=2
   calls: sub_94be20, sub_97ffc0
*/
void sub_a6d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d790ULL || rel >= 0xa6d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6d800 size=832 callers=0 calls=8
   calls: ee090_finder00_cam, sub_14dd2a0, sub_8ea710, sub_9543d0, sub_963470, sub_967370, sub_981b60, wait_camera_lens_distortion_data
*/
void sub_a6d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6d800ULL || rel >= 0xa6db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6db40 size=480 callers=0 calls=9
   calls: Set_State_Battle_Wild, ee420, sub_94a940, sub_94ba30, sub_95abd0, sub_95b4b0, sub_965150, tu001, tu002
*/
void sub_a6db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6db40ULL || rel >= 0xa6dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6dd20 size=320 callers=1 calls=4
   calls: sub_95ae30, sub_98a7e0, sub_98a820, sub_9b2290
   ref: bin/battle/waza/sequence/tu001.bseq
*/
void tu001(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6dd20ULL || rel >= 0xa6de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6de60 size=288 callers=1 calls=2
   calls: sub_95ae30, sub_9b2290
   ref: bin/battle/waza/sequence/tu002.bseq
*/
void tu002(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6de60ULL || rel >= 0xa6df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6df80 size=16 callers=0 calls=0
*/
void sub_a6df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6df80ULL || rel >= 0xa6df90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6df90 size=16 callers=0 calls=0
*/
void sub_a6df90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6df90ULL || rel >= 0xa6dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6dfa0 size=16 callers=0 calls=0
*/
void sub_a6dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6dfa0ULL || rel >= 0xa6dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6dfb0 size=16 callers=0 calls=0
*/
void sub_a6dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6dfb0ULL || rel >= 0xa6dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6dfc0 size=352 callers=0 calls=4
   calls: sub_5e2930, sub_5e3870, sub_a49010, sub_b77710
   ref: bin/chara/data/tr/tr0001_00_champion/anm/tr0001_00_battle02.gfbanmcfg
*/
void tr0001_00_battle02_gfbanmcfg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6dfc0ULL || rel >= 0xa6e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e120 size=16 callers=0 calls=0
*/
void sub_a6e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e120ULL || rel >= 0xa6e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e130 size=16 callers=0 calls=0
*/
void sub_a6e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e130ULL || rel >= 0xa6e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e140 size=16 callers=0 calls=0
*/
void sub_a6e140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e140ULL || rel >= 0xa6e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e150 size=240 callers=0 calls=0
*/
void sub_a6e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e150ULL || rel >= 0xa6e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e240 size=144 callers=1 calls=1
   calls: sub_a6e2d0
*/
void sub_a6e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e240ULL || rel >= 0xa6e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e2d0 size=448 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_a6e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e2d0ULL || rel >= 0xa6e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e490 size=96 callers=0 calls=0
*/
void sub_a6e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e490ULL || rel >= 0xa6e4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e4f0 size=96 callers=0 calls=0
*/
void sub_a6e4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e4f0ULL || rel >= 0xa6e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e550 size=96 callers=0 calls=0
*/
void sub_a6e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e550ULL || rel >= 0xa6e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e5b0 size=96 callers=0 calls=0
*/
void sub_a6e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e5b0ULL || rel >= 0xa6e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e610 size=96 callers=0 calls=0
*/
void sub_a6e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e610ULL || rel >= 0xa6e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e670 size=96 callers=0 calls=0
*/
void sub_a6e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e670ULL || rel >= 0xa6e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e6d0 size=16 callers=0 calls=0
*/
void sub_a6e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e6d0ULL || rel >= 0xa6e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e6e0 size=16 callers=0 calls=0
*/
void sub_a6e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e6e0ULL || rel >= 0xa6e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e6f0 size=16 callers=0 calls=0
*/
void sub_a6e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e6f0ULL || rel >= 0xa6e700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e700 size=240 callers=0 calls=1
   calls: sub_a6e7f0
*/
void sub_a6e700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e700ULL || rel >= 0xa6e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e7f0 size=272 callers=1 calls=3
   calls: sub_672c10, sub_a6ea60, sub_c386f0
*/
void sub_a6e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e7f0ULL || rel >= 0xa6e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e900 size=16 callers=0 calls=0
*/
void sub_a6e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e900ULL || rel >= 0xa6e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e910 size=16 callers=0 calls=0
*/
void sub_a6e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e910ULL || rel >= 0xa6e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e920 size=16 callers=0 calls=0
*/
void sub_a6e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e920ULL || rel >= 0xa6e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6e930 size=304 callers=0 calls=0
*/
void sub_a6e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e930ULL || rel >= 0xa6ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6ea60 size=224 callers=1 calls=2
   calls: sub_a6eb40, sub_e7b660
*/
void sub_a6ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6ea60ULL || rel >= 0xa6eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6eb40 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_a6ec20, sub_e7b5e0
*/
void sub_a6eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6eb40ULL || rel >= 0xa6ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6ec20 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_a6ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6ec20ULL || rel >= 0xa6ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6ed10 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_a6ed10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6ed10ULL || rel >= 0xa6ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6ed90 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_a6ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6ed90ULL || rel >= 0xa6ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6ef00 size=96 callers=0 calls=1
   calls: sub_a6f120
*/
void sub_a6ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6ef00ULL || rel >= 0xa6ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6ef60 size=16 callers=0 calls=0
*/
void sub_a6ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6ef60ULL || rel >= 0xa6ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6ef70 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_a6ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6ef70ULL || rel >= 0xa6f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6f010 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_a6f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6f010ULL || rel >= 0xa6f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6f0d0 size=16 callers=0 calls=0
*/
void sub_a6f0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6f0d0ULL || rel >= 0xa6f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6f0e0 size=16 callers=0 calls=0
*/
void sub_a6f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6f0e0ULL || rel >= 0xa6f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6f0f0 size=16 callers=0 calls=0
*/
void sub_a6f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6f0f0ULL || rel >= 0xa6f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6f100 size=32 callers=0 calls=0
*/
void sub_a6f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6f100ULL || rel >= 0xa6f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6f120 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_a6f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6f120ULL || rel >= 0xa6f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6f200 size=1200 callers=1 calls=4
   calls: sub_10466c0, sub_1310f00, sub_67b990, sub_e7c210
*/
void sub_a6f200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6f200ULL || rel >= 0xa6f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6f6b0 size=208 callers=3 calls=2
   calls: sub_1311c60, sub_67d450
*/
void sub_a6f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6f6b0ULL || rel >= 0xa6f780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6f780 size=432 callers=1 calls=3
   calls: sub_1311c60, sub_67d450, sub_a6f6b0
*/
void sub_a6f780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6f780ULL || rel >= 0xa6f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6f930 size=96 callers=3 calls=1
   calls: sub_67d450
*/
void sub_a6f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6f930ULL || rel >= 0xa6f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6f990 size=624 callers=0 calls=11
   calls: sub_1047170, sub_5cfad0, sub_78f150, sub_78f240, sub_79ab20, sub_79b250, sub_a6fc00, sub_a704f0, sub_a708b0, sub_e7c0f0, sub_e7e890
   ref: CommonOptionBar
   ref: View_Top
   ref: common/blacklist.dat
   ref: MessageView
*/
void CommonOptionBar_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6f990ULL || rel >= 0xa6fc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6fc00 size=400 callers=1 calls=3
   calls: sub_a6f200, sub_a70780, sub_e7c160
*/
void sub_a6fc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6fc00ULL || rel >= 0xa6fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6fd90 size=16 callers=0 calls=0
*/
void sub_a6fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6fd90ULL || rel >= 0xa6fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6fda0 size=16 callers=0 calls=0
*/
void sub_a6fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6fda0ULL || rel >= 0xa6fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6fdb0 size=16 callers=0 calls=0
*/
void sub_a6fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6fdb0ULL || rel >= 0xa6fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6fdc0 size=464 callers=0 calls=5
   calls: sub_1047170, sub_a70780, sub_a70c90, sub_a70dd0, sub_e7c160
*/
void sub_a6fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6fdc0ULL || rel >= 0xa6ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6ff90 size=16 callers=0 calls=0
*/
void sub_a6ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6ff90ULL || rel >= 0xa6ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a6ffa0 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_a6ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6ffa0ULL || rel >= 0xa70140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70140 size=16 callers=0 calls=0
*/
void sub_a70140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70140ULL || rel >= 0xa70150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70150 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_a70150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70150ULL || rel >= 0xa70200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70200 size=16 callers=0 calls=0
*/
void sub_a70200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70200ULL || rel >= 0xa70210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70210 size=16 callers=0 calls=0
*/
void sub_a70210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70210ULL || rel >= 0xa70220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70220 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_a70220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70220ULL || rel >= 0xa702d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a702d0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_a702d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa702d0ULL || rel >= 0xa70380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70380 size=16 callers=0 calls=0
*/
void sub_a70380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70380ULL || rel >= 0xa70390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70390 size=16 callers=0 calls=0
*/
void sub_a70390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70390ULL || rel >= 0xa703a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a703a0 size=208 callers=0 calls=0
*/
void sub_a703a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa703a0ULL || rel >= 0xa70470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70470 size=16 callers=0 calls=0
*/
void sub_a70470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70470ULL || rel >= 0xa70480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70480 size=16 callers=0 calls=0
*/
void sub_a70480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70480ULL || rel >= 0xa70490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70490 size=16 callers=0 calls=0
*/
void sub_a70490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70490ULL || rel >= 0xa704a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a704a0 size=16 callers=0 calls=0
*/
void sub_a704a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa704a0ULL || rel >= 0xa704b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a704b0 size=16 callers=0 calls=0
*/
void sub_a704b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa704b0ULL || rel >= 0xa704c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a704c0 size=16 callers=0 calls=0
*/
void sub_a704c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa704c0ULL || rel >= 0xa704d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a704d0 size=16 callers=0 calls=0
*/
void sub_a704d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa704d0ULL || rel >= 0xa704e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a704e0 size=16 callers=0 calls=0
*/
void sub_a704e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa704e0ULL || rel >= 0xa704f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a704f0 size=656 callers=3 calls=0
*/
void sub_a704f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa704f0ULL || rel >= 0xa70780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70780 size=304 callers=10 calls=0
*/
void sub_a70780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70780ULL || rel >= 0xa708b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a708b0 size=288 callers=1 calls=2
   calls: sub_a709d0, sub_e809c0
*/
void sub_a708b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa708b0ULL || rel >= 0xa709d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a709d0 size=384 callers=1 calls=3
   calls: sub_790490, sub_a70b50, sub_e7fe20
*/
void sub_a709d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa709d0ULL || rel >= 0xa70b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70b50 size=320 callers=1 calls=2
   calls: anonymous_2, sub_65d700
*/
void sub_a70b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70b50ULL || rel >= 0xa70c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70c90 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a70c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70c90ULL || rel >= 0xa70dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70dd0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a70dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70dd0ULL || rel >= 0xa70f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a70f10 size=1296 callers=0 calls=14
   calls: sub_5cfad0, sub_5cfaf0, sub_795bc0, sub_79b990, sub_a6f930, sub_a70780, sub_a718a0, sub_c39c40, sub_d0c0, sub_e7eb10, sub_e806b0, sub_eb6230
   ... +2 more
   ref: View_Top
*/
void View_Top(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70f10ULL || rel >= 0xa71420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a71420 size=704 callers=0 calls=12
   calls: sub_a6f6b0, sub_a70780, sub_c39c40, sub_e7eb10, sub_e807f0, sub_eb6230, sub_eb6530, sub_eb7790, sub_eb77f0, sub_eb7830, sub_eb8930, sub_eb8e80
*/
void sub_a71420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa71420ULL || rel >= 0xa716e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a716e0 size=16 callers=0 calls=0
*/
void sub_a716e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa716e0ULL || rel >= 0xa716f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a716f0 size=16 callers=0 calls=0
*/
void sub_a716f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa716f0ULL || rel >= 0xa71700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a71700 size=16 callers=0 calls=0
*/
void sub_a71700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa71700ULL || rel >= 0xa71710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a71710 size=16 callers=0 calls=0
*/
void sub_a71710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa71710ULL || rel >= 0xa71720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a71720 size=16 callers=0 calls=0
*/
void sub_a71720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa71720ULL || rel >= 0xa71730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a71730 size=16 callers=0 calls=0
*/
void sub_a71730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa71730ULL || rel >= 0xa71740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a71740 size=16 callers=0 calls=0
*/
void sub_a71740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa71740ULL || rel >= 0xa71750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a71750 size=16 callers=0 calls=0
*/
void sub_a71750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa71750ULL || rel >= 0xa71760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a71760 size=16 callers=0 calls=0
*/
void sub_a71760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa71760ULL || rel >= 0xa71770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a71770 size=304 callers=0 calls=0
*/
void sub_a71770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa71770ULL || rel >= 0xa718a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a718a0 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_a718a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa718a0ULL || rel >= 0xa719f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a719f0 size=256 callers=0 calls=3
   calls: sub_67b990, sub_a71af0, sub_a71c10
*/
void sub_a719f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa719f0ULL || rel >= 0xa71af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a71af0 size=288 callers=1 calls=2
   calls: sub_14ba7b0, sub_8f3180
*/
void sub_a71af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa71af0ULL || rel >= 0xa71c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a71c10 size=848 callers=1 calls=8
   calls: sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1860, sub_14f1870, sub_7a4ba0, sub_a73170, sub_e84250
*/
void sub_a71c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa71c10ULL || rel >= 0xa71f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a71f60 size=480 callers=0 calls=2
   calls: sub_5cfad0, sub_7a3c20
*/
void sub_a71f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa71f60ULL || rel >= 0xa72140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a72140 size=112 callers=0 calls=3
   calls: sub_14e1a30, sub_e82ef0, sub_e84310
*/
void sub_a72140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa72140ULL || rel >= 0xa721b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a721b0 size=1200 callers=0 calls=9
   calls: player_icon_table_3, sub_1314a80, sub_1315b90, sub_14ac370, sub_5cfad0, sub_67be60, sub_67d450, sub_e7ea90, sub_e7f7e0
   ref: common/blacklist.dat
*/
void blacklist(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa721b0ULL || rel >= 0xa72660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a72660 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/blacklist/bin/blacklist_uikit.bin
   ref: bin/appli/blacklist/bin/blacklist_lyt.bin
*/
void blacklist_uikit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa72660ULL || rel >= 0xa72840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a72840 size=16 callers=0 calls=0
*/
void sub_a72840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa72840ULL || rel >= 0xa72850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a72850 size=16 callers=0 calls=0
*/
void sub_a72850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa72850ULL || rel >= 0xa72860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a72860 size=112 callers=1 calls=4
   calls: sub_14e1a30, sub_e80580, sub_e807f0, sub_e84310
*/
void sub_a72860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa72860ULL || rel >= 0xa728d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a728d0 size=896 callers=1 calls=10
   calls: sub_14edac0, sub_14eebd0, sub_14eebe0, sub_14f1840, sub_14f1850, sub_14f1860, sub_14f1870, sub_7a4ba0, sub_a73170, sub_e84250
*/
void sub_a728d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa728d0ULL || rel >= 0xa72c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a72c50 size=160 callers=0 calls=0
*/
void sub_a72c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa72c50ULL || rel >= 0xa72cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a72cf0 size=160 callers=0 calls=0
*/
void sub_a72cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa72cf0ULL || rel >= 0xa72d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a72d90 size=16 callers=0 calls=0
*/
void sub_a72d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa72d90ULL || rel >= 0xa72da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a72da0 size=160 callers=0 calls=0
*/
void sub_a72da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa72da0ULL || rel >= 0xa72e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a72e40 size=160 callers=0 calls=0
*/
void sub_a72e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa72e40ULL || rel >= 0xa72ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a72ee0 size=16 callers=0 calls=0
*/
void sub_a72ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa72ee0ULL || rel >= 0xa72ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a72ef0 size=16 callers=0 calls=0
*/
void sub_a72ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa72ef0ULL || rel >= 0xa72f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a72f00 size=160 callers=0 calls=0
*/
void sub_a72f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa72f00ULL || rel >= 0xa72fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a72fa0 size=160 callers=0 calls=0
*/
void sub_a72fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa72fa0ULL || rel >= 0xa73040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a73040 size=304 callers=0 calls=0
*/
void sub_a73040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa73040ULL || rel >= 0xa73170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a73170 size=464 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_a73170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa73170ULL || rel >= 0xa73340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a73340 size=48 callers=0 calls=0
*/
void sub_a73340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa73340ULL || rel >= 0xa73370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a73370 size=16 callers=0 calls=0
*/
void sub_a73370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa73370ULL || rel >= 0xa73380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a73380 size=32 callers=0 calls=0
*/
void sub_a73380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa73380ULL || rel >= 0xa733a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a733a0 size=32 callers=0 calls=0
*/
void sub_a733a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa733a0ULL || rel >= 0xa733c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a733c0 size=112 callers=0 calls=3
   calls: sub_14e1a30, sub_e82ef0, sub_e84310
*/
void sub_a733c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa733c0ULL || rel >= 0xa73430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a73430 size=16 callers=0 calls=0
*/
void sub_a73430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa73430ULL || rel >= 0xa73440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a73440 size=16 callers=0 calls=0
*/
void sub_a73440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa73440ULL || rel >= 0xa73450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a73450 size=16 callers=0 calls=0
*/
void sub_a73450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa73450ULL || rel >= 0xa73460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a73460 size=1584 callers=0 calls=14
   calls: sub_5cfad0, sub_5cfaf0, sub_795bc0, sub_79b990, sub_a6f930, sub_a70780, sub_a718a0, sub_c39c40, sub_d0c0, sub_e7eb10, sub_e806b0, sub_eb6230
   ... +2 more
   ref: View_Top
*/
void View_Top_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa73460ULL || rel >= 0xa73a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a73a90 size=1728 callers=0 calls=22
   calls: sub_1046fa0, sub_1047170, sub_1314a80, sub_67be60, sub_a6f780, sub_a704f0, sub_a70780, sub_a72860, sub_a728d0, sub_c39c40, sub_c43ed0, sub_c44310
   ... +10 more
*/
void sub_a73a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa73a90ULL || rel >= 0xa74150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74150 size=16 callers=0 calls=0
*/
void sub_a74150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74150ULL || rel >= 0xa74160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74160 size=16 callers=0 calls=0
*/
void sub_a74160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74160ULL || rel >= 0xa74170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74170 size=16 callers=0 calls=0
*/
void sub_a74170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74170ULL || rel >= 0xa74180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74180 size=16 callers=0 calls=0
*/
void sub_a74180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74180ULL || rel >= 0xa74190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74190 size=16 callers=0 calls=0
*/
void sub_a74190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74190ULL || rel >= 0xa741a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a741a0 size=16 callers=0 calls=0
*/
void sub_a741a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa741a0ULL || rel >= 0xa741b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a741b0 size=16 callers=0 calls=0
*/
void sub_a741b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa741b0ULL || rel >= 0xa741c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a741c0 size=16 callers=0 calls=0
*/
void sub_a741c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa741c0ULL || rel >= 0xa741d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a741d0 size=16 callers=0 calls=0
*/
void sub_a741d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa741d0ULL || rel >= 0xa741e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a741e0 size=304 callers=0 calls=0
*/
void sub_a741e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa741e0ULL || rel >= 0xa74310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74310 size=384 callers=3 calls=2
   calls: sub_a74490, sub_a76020
*/
void sub_a74310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74310ULL || rel >= 0xa74490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74490 size=416 callers=1 calls=3
   calls: sub_a74630, sub_c38350, sub_e9db40
*/
void sub_a74490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74490ULL || rel >= 0xa74630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74630 size=736 callers=1 calls=4
   calls: sub_76f550, sub_783bd0, sub_a74910, sub_e9d130
*/
void sub_a74630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74630ULL || rel >= 0xa74910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74910 size=304 callers=10 calls=0
*/
void sub_a74910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74910ULL || rel >= 0xa74a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74a40 size=384 callers=0 calls=0
*/
void sub_a74a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74a40ULL || rel >= 0xa74bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74bc0 size=16 callers=0 calls=0
*/
void sub_a74bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74bc0ULL || rel >= 0xa74bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74bd0 size=16 callers=0 calls=0
*/
void sub_a74bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74bd0ULL || rel >= 0xa74be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74be0 size=16 callers=0 calls=0
*/
void sub_a74be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74be0ULL || rel >= 0xa74bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74bf0 size=16 callers=0 calls=0
*/
void sub_a74bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74bf0ULL || rel >= 0xa74c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74c00 size=16 callers=0 calls=0
*/
void sub_a74c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74c00ULL || rel >= 0xa74c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74c10 size=16 callers=0 calls=0
*/
void sub_a74c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74c10ULL || rel >= 0xa74c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74c20 size=288 callers=0 calls=2
   calls: sub_1351670, sub_14e0750
*/
void sub_a74c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74c20ULL || rel >= 0xa74d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74d40 size=128 callers=0 calls=0
*/
void sub_a74d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74d40ULL || rel >= 0xa74dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a74dc0 size=3648 callers=0 calls=11
   calls: sub_134f3a0, sub_134f3e0, sub_1353ad0, sub_1353b00, sub_1354890, sub_76f6c0, sub_a75c00, sub_a75d10, sub_a75e20, sub_a777c0, sub_c39c40
*/
void sub_a74dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa74dc0ULL || rel >= 0xa75c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a75c00 size=272 callers=9 calls=3
   calls: sub_672c10, sub_a76150, sub_c386f0
*/
void sub_a75c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa75c00ULL || rel >= 0xa75d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a75d10 size=272 callers=2 calls=3
   calls: sub_672c10, sub_a76910, sub_c386f0
*/
void sub_a75d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa75d10ULL || rel >= 0xa75e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a75e20 size=400 callers=14 calls=3
   calls: sub_12ca770, sub_672c10, sub_c386f0
*/
void sub_a75e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa75e20ULL || rel >= 0xa75fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a75fb0 size=16 callers=0 calls=0
*/
void sub_a75fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa75fb0ULL || rel >= 0xa75fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a75fc0 size=16 callers=0 calls=0
*/
void sub_a75fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa75fc0ULL || rel >= 0xa75fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a75fd0 size=16 callers=0 calls=0
*/
void sub_a75fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa75fd0ULL || rel >= 0xa75fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a75fe0 size=16 callers=0 calls=0
*/
void sub_a75fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa75fe0ULL || rel >= 0xa75ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a75ff0 size=16 callers=0 calls=0
*/
void sub_a75ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa75ff0ULL || rel >= 0xa76000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76000 size=16 callers=0 calls=0
*/
void sub_a76000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76000ULL || rel >= 0xa76010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76010 size=16 callers=0 calls=0
*/
void sub_a76010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76010ULL || rel >= 0xa76020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76020 size=304 callers=1 calls=0
*/
void sub_a76020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76020ULL || rel >= 0xa76150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76150 size=272 callers=1 calls=2
   calls: sub_a76260, sub_e7b660
*/
void sub_a76150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76150ULL || rel >= 0xa76260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76260 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_a76340, sub_e7b5e0
*/
void sub_a76260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76260ULL || rel >= 0xa76340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76340 size=288 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_a76340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76340ULL || rel >= 0xa76460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76460 size=64 callers=0 calls=1
   calls: sub_a76720
*/
void sub_a76460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76460ULL || rel >= 0xa764a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a764a0 size=64 callers=0 calls=1
   calls: sub_a76720
*/
void sub_a764a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa764a0ULL || rel >= 0xa764e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a764e0 size=96 callers=0 calls=1
   calls: sub_a76810
*/
void sub_a764e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa764e0ULL || rel >= 0xa76540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76540 size=16 callers=0 calls=0
*/
void sub_a76540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76540ULL || rel >= 0xa76550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76550 size=176 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_a76550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76550ULL || rel >= 0xa76600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76600 size=208 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_a76600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76600ULL || rel >= 0xa766d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a766d0 size=16 callers=0 calls=0
*/
void sub_a766d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa766d0ULL || rel >= 0xa766e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a766e0 size=16 callers=0 calls=0
*/
void sub_a766e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa766e0ULL || rel >= 0xa766f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a766f0 size=16 callers=0 calls=0
*/
void sub_a766f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa766f0ULL || rel >= 0xa76700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76700 size=32 callers=0 calls=0
*/
void sub_a76700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76700ULL || rel >= 0xa76720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76720 size=240 callers=3 calls=0
*/
void sub_a76720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76720ULL || rel >= 0xa76810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76810 size=256 callers=7 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_a76810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76810ULL || rel >= 0xa76910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76910 size=240 callers=2 calls=2
   calls: sub_a76a00, sub_e7b660
*/
void sub_a76910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76910ULL || rel >= 0xa76a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76a00 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_a76ae0, sub_e7b5e0
*/
void sub_a76a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76a00ULL || rel >= 0xa76ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76ae0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_a76ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76ae0ULL || rel >= 0xa76bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76bd0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_a76bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76bd0ULL || rel >= 0xa76c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76c50 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_a76c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76c50ULL || rel >= 0xa76dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76dc0 size=96 callers=0 calls=1
   calls: sub_a76fe0
*/
void sub_a76dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76dc0ULL || rel >= 0xa76e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76e20 size=16 callers=0 calls=0
*/
void sub_a76e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76e20ULL || rel >= 0xa76e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76e30 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_a76e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76e30ULL || rel >= 0xa76ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76ed0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_a76ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76ed0ULL || rel >= 0xa76f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76f90 size=16 callers=0 calls=0
*/
void sub_a76f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76f90ULL || rel >= 0xa76fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76fa0 size=16 callers=0 calls=0
*/
void sub_a76fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76fa0ULL || rel >= 0xa76fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76fb0 size=16 callers=0 calls=0
*/
void sub_a76fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76fb0ULL || rel >= 0xa76fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76fc0 size=32 callers=0 calls=0
*/
void sub_a76fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76fc0ULL || rel >= 0xa76fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a76fe0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_a76fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa76fe0ULL || rel >= 0xa770c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a770c0 size=128 callers=0 calls=0
*/
void sub_a770c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa770c0ULL || rel >= 0xa77140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a77140 size=16 callers=1 calls=0
*/
void sub_a77140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa77140ULL || rel >= 0xa77150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a77150 size=16 callers=31 calls=0
*/
void sub_a77150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa77150ULL || rel >= 0xa77160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a77160 size=16 callers=17 calls=0
*/
void sub_a77160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa77160ULL || rel >= 0xa77170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a77170 size=496 callers=1 calls=10
   calls: poke_panel_62, poke_panel_63, sub_102d9a0, sub_102da40, sub_102daa0, sub_102dab0, sub_102dac0, sub_102dad0, sub_102dae0, sub_102dc50
*/
void sub_a77170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa77170ULL || rel >= 0xa77360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a77360 size=256 callers=1 calls=4
   calls: sub_1503210, sub_1503280, sub_15032c0, sub_1505a20
*/
void sub_a77360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa77360ULL || rel >= 0xa77460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a77460 size=16 callers=6 calls=0
*/
void sub_a77460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa77460ULL || rel >= 0xa77470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a77470 size=48 callers=19 calls=0
*/
void sub_a77470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa77470ULL || rel >= 0xa774a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a774a0 size=32 callers=13 calls=0
*/
void sub_a774a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa774a0ULL || rel >= 0xa774c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a774c0 size=16 callers=4 calls=0
*/
void sub_a774c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa774c0ULL || rel >= 0xa774d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a774d0 size=272 callers=1 calls=2
   calls: fel_999_2, sub_15030e0
*/
void sub_a774d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa774d0ULL || rel >= 0xa775e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a775e0 size=16 callers=1 calls=0
*/
void sub_a775e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa775e0ULL || rel >= 0xa775f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a775f0 size=32 callers=1 calls=0
*/
void sub_a775f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa775f0ULL || rel >= 0xa77610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a77610 size=368 callers=16 calls=1
   calls: sub_12f9ef0
*/
void sub_a77610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa77610ULL || rel >= 0xa77780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a77780 size=16 callers=3 calls=0
*/
void sub_a77780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa77780ULL || rel >= 0xa77790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a77790 size=16 callers=3 calls=0
*/
void sub_a77790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa77790ULL || rel >= 0xa777a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a777a0 size=32 callers=1 calls=0
*/
void sub_a777a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa777a0ULL || rel >= 0xa777c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a777c0 size=16 callers=16 calls=0
*/
void sub_a777c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa777c0ULL || rel >= 0xa777d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a777d0 size=4000 callers=0 calls=41
   calls: monsname_sort_table, sub_14b9c90, sub_14ba010, sub_5dd790, sub_5e2930, sub_78f150, sub_78f240, sub_790140, sub_794e80, sub_7950c0, sub_79ab20, sub_79b250
   ... +29 more
   ref: font_fs_42_00.bffnt
   ref: View_Model
   ref: common/tokuseiinfo.dat
   ref: OptionBar
   ref: bin/appli/ribbon/data_table/status_ribbon.prmb
   ref: View_Search
   ref: common/box.dat
   ref: SystemMessageView
*/
void View_Model(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa777d0ULL || rel >= 0xa78770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a78770 size=272 callers=1 calls=3
   calls: sub_a7a5e0, sub_a7a700, sub_e7c160
*/
void sub_a78770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa78770ULL || rel >= 0xa78880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a78880 size=464 callers=0 calls=5
   calls: sub_14b9450, sub_15030d0, sub_a7a700, sub_e7e550, sub_e7ea20
*/
void sub_a78880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa78880ULL || rel >= 0xa78a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a78a50 size=720 callers=0 calls=13
   calls: anime_info_out, poke_panel_65, poke_panel_67, sub_11061e0, sub_1106f30, sub_1500ea0, sub_795bc0, sub_a77610, sub_a7a700, sub_a7bb80, sub_a7bcd0, sub_a7be20
   ... +1 more
   ref: OptionBar
   ref: View_Search
   ref: View_Top
   ref: View_Wallpaper
*/
void View_Wallpaper(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa78a50ULL || rel >= 0xa78d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a78d20 size=208 callers=0 calls=3
   calls: sub_a77170, sub_a77360, sub_a7a700
*/
void sub_a78d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa78d20ULL || rel >= 0xa78df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a78df0 size=2896 callers=0 calls=30
   calls: sub_a7a700, sub_a7bf70, sub_a7c0b0, sub_a7c1f0, sub_a7c330, sub_a7c470, sub_a7c5b0, sub_a7c6f0, sub_a7c830, sub_a7c970, sub_a7cab0, sub_a7cbf0
   ... +18 more
*/
void sub_a78df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa78df0ULL || rel >= 0xa79940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a79940 size=912 callers=0 calls=10
   calls: sub_14b9510, sub_14b95d0, sub_15030d0, sub_15032c0, sub_1505a10, sub_1505a20, sub_1505a30, sub_1505cf0, sub_5e2bc0, sub_a7a700
*/
void sub_a79940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa79940ULL || rel >= 0xa79cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a79cd0 size=352 callers=0 calls=2
   calls: sub_5e2bc0, sub_a76720
*/
void sub_a79cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa79cd0ULL || rel >= 0xa79e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a79e30 size=16 callers=0 calls=0
*/
void sub_a79e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa79e30ULL || rel >= 0xa79e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a79e40 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_a79e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa79e40ULL || rel >= 0xa79ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a79ef0 size=16 callers=0 calls=0
*/
void sub_a79ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa79ef0ULL || rel >= 0xa79f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a79f00 size=16 callers=0 calls=0
*/
void sub_a79f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa79f00ULL || rel >= 0xa79f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a79f10 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_a79f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa79f10ULL || rel >= 0xa79fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a79fc0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_a79fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa79fc0ULL || rel >= 0xa7a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a070 size=16 callers=0 calls=0
*/
void sub_a7a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a070ULL || rel >= 0xa7a080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a080 size=16 callers=0 calls=0
*/
void sub_a7a080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a080ULL || rel >= 0xa7a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a090 size=112 callers=0 calls=0
*/
void sub_a7a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a090ULL || rel >= 0xa7a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a100 size=112 callers=0 calls=0
*/
void sub_a7a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a100ULL || rel >= 0xa7a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a170 size=16 callers=0 calls=0
*/
void sub_a7a170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a170ULL || rel >= 0xa7a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a180 size=112 callers=0 calls=0
*/
void sub_a7a180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a180ULL || rel >= 0xa7a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a1f0 size=112 callers=0 calls=0
*/
void sub_a7a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a1f0ULL || rel >= 0xa7a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a260 size=16 callers=0 calls=0
*/
void sub_a7a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a260ULL || rel >= 0xa7a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a270 size=16 callers=0 calls=0
*/
void sub_a7a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a270ULL || rel >= 0xa7a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a280 size=112 callers=0 calls=0
*/
void sub_a7a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a280ULL || rel >= 0xa7a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a2f0 size=112 callers=0 calls=0
*/
void sub_a7a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a2f0ULL || rel >= 0xa7a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a360 size=336 callers=6 calls=1
   calls: sub_11061d0
*/
void sub_a7a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a360ULL || rel >= 0xa7a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a4b0 size=256 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_a7a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a4b0ULL || rel >= 0xa7a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a5b0 size=16 callers=0 calls=0
*/
void sub_a7a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a5b0ULL || rel >= 0xa7a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a5c0 size=16 callers=0 calls=0
*/
void sub_a7a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a5c0ULL || rel >= 0xa7a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a5d0 size=16 callers=0 calls=0
*/
void sub_a7a5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a5d0ULL || rel >= 0xa7a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a5e0 size=288 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_a7a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a5e0ULL || rel >= 0xa7a700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a700 size=304 callers=118 calls=0
*/
void sub_a7a700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a700ULL || rel >= 0xa7a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a830 size=288 callers=2 calls=1
   calls: sub_14b88c0
*/
void sub_a7a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a830ULL || rel >= 0xa7a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a950 size=16 callers=0 calls=0
*/
void sub_a7a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a950ULL || rel >= 0xa7a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a960 size=16 callers=0 calls=0
*/
void sub_a7a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a960ULL || rel >= 0xa7a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a970 size=16 callers=0 calls=0
*/
void sub_a7a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a970ULL || rel >= 0xa7a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a980 size=16 callers=0 calls=0
*/
void sub_a7a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a980ULL || rel >= 0xa7a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a990 size=16 callers=0 calls=0
*/
void sub_a7a990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a990ULL || rel >= 0xa7a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a9a0 size=16 callers=0 calls=0
*/
void sub_a7a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a9a0ULL || rel >= 0xa7a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7a9b0 size=288 callers=1 calls=2
   calls: sub_a7aad0, sub_e809c0
*/
void sub_a7a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a9b0ULL || rel >= 0xa7aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7aad0 size=384 callers=1 calls=3
   calls: sub_790490, sub_a7ac50, sub_e7fe20
*/
void sub_a7aad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7aad0ULL || rel >= 0xa7ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ac50 size=464 callers=1 calls=2
   calls: anonymous_2, sub_11061d0
*/
void sub_a7ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ac50ULL || rel >= 0xa7ae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ae20 size=288 callers=1 calls=2
   calls: sub_a7af40, sub_e809c0
*/
void sub_a7ae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ae20ULL || rel >= 0xa7af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7af40 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_a7af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7af40ULL || rel >= 0xa7b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7b1b0 size=288 callers=1 calls=2
   calls: sub_a7b2d0, sub_e809c0
*/
void sub_a7b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7b1b0ULL || rel >= 0xa7b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7b2d0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_a7b2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7b2d0ULL || rel >= 0xa7b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7b500 size=288 callers=1 calls=2
   calls: sub_a7b620, sub_e809c0
*/
void sub_a7b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7b500ULL || rel >= 0xa7b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7b620 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_a7b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7b620ULL || rel >= 0xa7b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7b850 size=288 callers=10 calls=2
   calls: sub_a7b970, sub_e809c0
*/
void sub_a7b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7b850ULL || rel >= 0xa7b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7b970 size=528 callers=1 calls=3
   calls: sub_790490, sub_e7fe20, sub_eba8b0
*/
void sub_a7b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7b970ULL || rel >= 0xa7bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7bb80 size=336 callers=29 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_a7bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7bb80ULL || rel >= 0xa7bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7bcd0 size=336 callers=4 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_a7bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7bcd0ULL || rel >= 0xa7be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7be20 size=336 callers=4 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_a7be20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7be20ULL || rel >= 0xa7bf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7bf70 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7bf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7bf70ULL || rel >= 0xa7c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7c0b0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7c0b0ULL || rel >= 0xa7c1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7c1f0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7c1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7c1f0ULL || rel >= 0xa7c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7c330 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7c330ULL || rel >= 0xa7c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7c470 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7c470ULL || rel >= 0xa7c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7c5b0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7c5b0ULL || rel >= 0xa7c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7c6f0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7c6f0ULL || rel >= 0xa7c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7c830 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7c830ULL || rel >= 0xa7c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7c970 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7c970ULL || rel >= 0xa7cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7cab0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7cab0ULL || rel >= 0xa7cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7cbf0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7cbf0ULL || rel >= 0xa7cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7cd30 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7cd30ULL || rel >= 0xa7ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ce70 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ce70ULL || rel >= 0xa7cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7cfb0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7cfb0ULL || rel >= 0xa7d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7d0f0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7d0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7d0f0ULL || rel >= 0xa7d230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7d230 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7d230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7d230ULL || rel >= 0xa7d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7d370 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7d370ULL || rel >= 0xa7d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7d4b0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7d4b0ULL || rel >= 0xa7d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7d5f0 size=336 callers=1 calls=2
   calls: anonymous, sub_e76a20
*/
void sub_a7d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7d5f0ULL || rel >= 0xa7d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7d740 size=336 callers=1 calls=2
   calls: anonymous, sub_e76a20
*/
void sub_a7d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7d740ULL || rel >= 0xa7d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7d890 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7d890ULL || rel >= 0xa7d9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7d9d0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7d9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7d9d0ULL || rel >= 0xa7db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7db10 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7db10ULL || rel >= 0xa7dc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7dc50 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7dc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7dc50ULL || rel >= 0xa7dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7dd90 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7dd90ULL || rel >= 0xa7ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ded0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ded0ULL || rel >= 0xa7e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e010 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_a7e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e010ULL || rel >= 0xa7e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e160 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_a7e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e160ULL || rel >= 0xa7e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e2a0 size=128 callers=0 calls=0
*/
void sub_a7e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e2a0ULL || rel >= 0xa7e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e320 size=464 callers=0 calls=8
   calls: anime_box_in, anime_info_out_3, sub_a77610, sub_a7a700, sub_a7bb80, sub_aab1b0, sub_c39c40, sub_d0c0
   ref: boxtray_in
   ref: View_Top
*/
void boxtray_in(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e320ULL || rel >= 0xa7e4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e4f0 size=144 callers=0 calls=3
   calls: sub_a77150, sub_a7a700, sub_aa6f70
*/
void sub_a7e4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e4f0ULL || rel >= 0xa7e580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e580 size=16 callers=0 calls=0
*/
void sub_a7e580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e580ULL || rel >= 0xa7e590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e590 size=16 callers=0 calls=0
*/
void sub_a7e590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e590ULL || rel >= 0xa7e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e5a0 size=16 callers=0 calls=0
*/
void sub_a7e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e5a0ULL || rel >= 0xa7e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e5b0 size=16 callers=0 calls=0
*/
void sub_a7e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e5b0ULL || rel >= 0xa7e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e5c0 size=16 callers=0 calls=0
*/
void sub_a7e5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e5c0ULL || rel >= 0xa7e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e5d0 size=16 callers=0 calls=0
*/
void sub_a7e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e5d0ULL || rel >= 0xa7e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e5e0 size=16 callers=0 calls=0
*/
void sub_a7e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e5e0ULL || rel >= 0xa7e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e5f0 size=16 callers=0 calls=0
*/
void sub_a7e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e5f0ULL || rel >= 0xa7e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e600 size=16 callers=0 calls=0
*/
void sub_a7e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e600ULL || rel >= 0xa7e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e610 size=304 callers=0 calls=0
*/
void sub_a7e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e610ULL || rel >= 0xa7e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e740 size=304 callers=0 calls=0
*/
void sub_a7e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e740ULL || rel >= 0xa7e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e870 size=128 callers=0 calls=0
*/
void sub_a7e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e870ULL || rel >= 0xa7e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7e8f0 size=368 callers=0 calls=4
   calls: anime_box_out, sub_a7bb80, sub_c39c40, sub_d0c0
   ref: boxtray_out
   ref: View_Top
*/
void boxtray_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7e8f0ULL || rel >= 0xa7ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ea60 size=256 callers=0 calls=8
   calls: anime_info_out_4, poke_panel_53, sub_a77150, sub_a77610, sub_a7a700, sub_aab1b0, sub_aab8b0, sub_aab8c0
*/
void sub_a7ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ea60ULL || rel >= 0xa7eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7eb60 size=16 callers=0 calls=0
*/
void sub_a7eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7eb60ULL || rel >= 0xa7eb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7eb70 size=16 callers=0 calls=0
*/
void sub_a7eb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7eb70ULL || rel >= 0xa7eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7eb80 size=16 callers=0 calls=0
*/
void sub_a7eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7eb80ULL || rel >= 0xa7eb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7eb90 size=16 callers=0 calls=0
*/
void sub_a7eb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7eb90ULL || rel >= 0xa7eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7eba0 size=16 callers=0 calls=0
*/
void sub_a7eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7eba0ULL || rel >= 0xa7ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ebb0 size=16 callers=0 calls=0
*/
void sub_a7ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ebb0ULL || rel >= 0xa7ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ebc0 size=16 callers=0 calls=0
*/
void sub_a7ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ebc0ULL || rel >= 0xa7ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ebd0 size=16 callers=0 calls=0
*/
void sub_a7ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ebd0ULL || rel >= 0xa7ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ebe0 size=16 callers=0 calls=0
*/
void sub_a7ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ebe0ULL || rel >= 0xa7ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ebf0 size=304 callers=0 calls=0
*/
void sub_a7ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ebf0ULL || rel >= 0xa7ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ed20 size=128 callers=0 calls=0
*/
void sub_a7ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ed20ULL || rel >= 0xa7eda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7eda0 size=368 callers=0 calls=4
   calls: sub_a7bb80, sub_aa89f0, sub_c39c40, sub_d0c0
   ref: View_Top
   ref: boxtray_put
*/
void boxtray_put(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7eda0ULL || rel >= 0xa7ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ef10 size=144 callers=0 calls=3
   calls: sub_a77150, sub_a7a700, sub_aa8a00
*/
void sub_a7ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ef10ULL || rel >= 0xa7efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7efa0 size=16 callers=0 calls=0
*/
void sub_a7efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7efa0ULL || rel >= 0xa7efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7efb0 size=16 callers=0 calls=0
*/
void sub_a7efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7efb0ULL || rel >= 0xa7efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7efc0 size=16 callers=0 calls=0
*/
void sub_a7efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7efc0ULL || rel >= 0xa7efd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7efd0 size=16 callers=0 calls=0
*/
void sub_a7efd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7efd0ULL || rel >= 0xa7efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7efe0 size=16 callers=0 calls=0
*/
void sub_a7efe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7efe0ULL || rel >= 0xa7eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7eff0 size=16 callers=0 calls=0
*/
void sub_a7eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7eff0ULL || rel >= 0xa7f000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f000 size=16 callers=0 calls=0
*/
void sub_a7f000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f000ULL || rel >= 0xa7f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f010 size=16 callers=0 calls=0
*/
void sub_a7f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f010ULL || rel >= 0xa7f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f020 size=16 callers=0 calls=0
*/
void sub_a7f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f020ULL || rel >= 0xa7f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f030 size=304 callers=0 calls=0
*/
void sub_a7f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f030ULL || rel >= 0xa7f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f160 size=128 callers=0 calls=0
*/
void sub_a7f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f160ULL || rel >= 0xa7f1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f1e0 size=816 callers=0 calls=11
   calls: sub_1502120, sub_5cfad0, sub_795bc0, sub_a77160, sub_a77610, sub_a7a700, sub_a7bb80, sub_a96aa0, sub_c39c40, sub_d0c0, sub_eb77f0
   ref: OptionBar
   ref: View_Top
*/
void OptionBar(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f1e0ULL || rel >= 0xa7f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f510 size=256 callers=0 calls=8
   calls: poke_panel_64, sub_a77150, sub_a77160, sub_a7a700, sub_a94040, sub_a96af0, sub_aab1f0, sub_eb7830
*/
void sub_a7f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f510ULL || rel >= 0xa7f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f610 size=320 callers=0 calls=4
   calls: sub_a7bb80, sub_c39c40, sub_e80580, sub_e806b0
   ref: View_Top
*/
void View_Top_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f610ULL || rel >= 0xa7f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f750 size=16 callers=0 calls=0
*/
void sub_a7f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f750ULL || rel >= 0xa7f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f760 size=16 callers=0 calls=0
*/
void sub_a7f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f760ULL || rel >= 0xa7f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f770 size=16 callers=0 calls=0
*/
void sub_a7f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f770ULL || rel >= 0xa7f780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f780 size=16 callers=0 calls=0
*/
void sub_a7f780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f780ULL || rel >= 0xa7f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f790 size=16 callers=0 calls=0
*/
void sub_a7f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f790ULL || rel >= 0xa7f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f7a0 size=16 callers=0 calls=0
*/
void sub_a7f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f7a0ULL || rel >= 0xa7f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f7b0 size=16 callers=0 calls=0
*/
void sub_a7f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f7b0ULL || rel >= 0xa7f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f7c0 size=16 callers=0 calls=0
*/
void sub_a7f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f7c0ULL || rel >= 0xa7f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f7d0 size=304 callers=0 calls=0
*/
void sub_a7f7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f7d0ULL || rel >= 0xa7f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f900 size=128 callers=0 calls=0
*/
void sub_a7f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f900ULL || rel >= 0xa7f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7f980 size=1120 callers=0 calls=18
   calls: poke_panel_42, sub_1502120, sub_5cfad0, sub_5cfaf0, sub_795bc0, sub_a77160, sub_a77790, sub_a777a0, sub_a7a700, sub_a7bb80, sub_a800f0, sub_a96a70
   ... +6 more
   ref: OptionBar
   ref: View_Top
*/
void OptionBar_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f980ULL || rel >= 0xa7fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7fde0 size=336 callers=0 calls=8
   calls: poke_panel_38, sub_a77150, sub_a77160, sub_a7a700, sub_a96af0, sub_aaa5d0, sub_eb7790, sub_eba100
*/
void sub_a7fde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7fde0ULL || rel >= 0xa7ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ff30 size=16 callers=0 calls=0
*/
void sub_a7ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ff30ULL || rel >= 0xa7ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ff40 size=16 callers=0 calls=0
*/
void sub_a7ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ff40ULL || rel >= 0xa7ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ff50 size=16 callers=0 calls=0
*/
void sub_a7ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ff50ULL || rel >= 0xa7ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ff60 size=16 callers=0 calls=0
*/
void sub_a7ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ff60ULL || rel >= 0xa7ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ff70 size=16 callers=0 calls=0
*/
void sub_a7ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ff70ULL || rel >= 0xa7ff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ff80 size=16 callers=0 calls=0
*/
void sub_a7ff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ff80ULL || rel >= 0xa7ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ff90 size=16 callers=0 calls=0
*/
void sub_a7ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ff90ULL || rel >= 0xa7ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ffa0 size=16 callers=0 calls=0
*/
void sub_a7ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ffa0ULL || rel >= 0xa7ffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ffb0 size=16 callers=0 calls=0
*/
void sub_a7ffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ffb0ULL || rel >= 0xa7ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a7ffc0 size=304 callers=0 calls=0
*/
void sub_a7ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7ffc0ULL || rel >= 0xa800f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a800f0 size=240 callers=11 calls=1
   calls: sub_e7f6c0
*/
void sub_a800f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa800f0ULL || rel >= 0xa801e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a801e0 size=128 callers=0 calls=0
*/
void sub_a801e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa801e0ULL || rel >= 0xa80260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a80260 size=544 callers=0 calls=14
   calls: boxtray_cursor__02d, marking_panel, poke_panel_42, poke_panel_8, sub_a77140, sub_a7a700, sub_a7bb80, sub_a96b10, sub_a96b30, sub_aa75b0, sub_aab2c0, sub_c39c40
   ... +2 more
   ref: View_Top
   ref: execute
*/
void View_Top_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa80260ULL || rel >= 0xa80480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a80480 size=2576 callers=0 calls=27
   calls: poke_panel_38, poke_panel_39, poke_panel_54, poke_panel_55, poke_panel_63, poke_panel_65, poke_panel_66, sub_104bf60, sub_10619f0, sub_1502120, sub_5cfad0, sub_a77150
   ... +15 more
*/
void sub_a80480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa80480ULL || rel >= 0xa80e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a80e90 size=16 callers=0 calls=0
*/
void sub_a80e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa80e90ULL || rel >= 0xa80ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a80ea0 size=16 callers=0 calls=0
*/
void sub_a80ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa80ea0ULL || rel >= 0xa80eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a80eb0 size=16 callers=0 calls=0
*/
void sub_a80eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa80eb0ULL || rel >= 0xa80ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a80ec0 size=16 callers=0 calls=0
*/
void sub_a80ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa80ec0ULL || rel >= 0xa80ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a80ed0 size=16 callers=0 calls=0
*/
void sub_a80ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa80ed0ULL || rel >= 0xa80ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a80ee0 size=16 callers=0 calls=0
*/
void sub_a80ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa80ee0ULL || rel >= 0xa80ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a80ef0 size=16 callers=0 calls=0
*/
void sub_a80ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa80ef0ULL || rel >= 0xa80f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a80f00 size=16 callers=0 calls=0
*/
void sub_a80f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa80f00ULL || rel >= 0xa80f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a80f10 size=16 callers=0 calls=0
*/
void sub_a80f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa80f10ULL || rel >= 0xa80f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a80f20 size=304 callers=0 calls=0
*/
void sub_a80f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa80f20ULL || rel >= 0xa81050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81050 size=128 callers=0 calls=0
*/
void sub_a81050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81050ULL || rel >= 0xa810d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a810d0 size=640 callers=0 calls=5
   calls: sub_5cfaf0, sub_79b990, sub_a7bb80, sub_c39c40, sub_d0c0
   ref: View_Top
*/
void View_Top_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa810d0ULL || rel >= 0xa81350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81350 size=480 callers=0 calls=15
   calls: poke_panel_38, poke_panel_47, poke_panel_48, poke_panel_49, poke_panel_50, poke_panel_65, sub_a77150, sub_a77610, sub_a7a700, sub_aa5350, sub_aa5e60, sub_e806b0
   ... +3 more
*/
void sub_a81350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81350ULL || rel >= 0xa81530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81530 size=16 callers=0 calls=0
*/
void sub_a81530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81530ULL || rel >= 0xa81540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81540 size=16 callers=0 calls=0
*/
void sub_a81540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81540ULL || rel >= 0xa81550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81550 size=16 callers=0 calls=0
*/
void sub_a81550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81550ULL || rel >= 0xa81560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81560 size=16 callers=0 calls=0
*/
void sub_a81560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81560ULL || rel >= 0xa81570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81570 size=16 callers=0 calls=0
*/
void sub_a81570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81570ULL || rel >= 0xa81580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81580 size=16 callers=0 calls=0
*/
void sub_a81580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81580ULL || rel >= 0xa81590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81590 size=16 callers=0 calls=0
*/
void sub_a81590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81590ULL || rel >= 0xa815a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

