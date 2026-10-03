/* main functions 0105fe70..0107b3c0 (134 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0105fe70 size=64 callers=0 calls=0
*/
void sub_105fe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105fe70ULL || rel >= 0x105feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105feb0 size=240 callers=1 calls=0
*/
void sub_105feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105feb0ULL || rel >= 0x105ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105ffa0 size=128 callers=1 calls=3
   calls: sub_1060c30, sub_1060da0, sub_6ae870
*/
void sub_105ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ffa0ULL || rel >= 0x1060020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01060020 size=1120 callers=0 calls=7
   calls: sub_10538c0, sub_1060f90, sub_136b8b0, sub_783bd0, sub_785320, sub_7cd960, sub_b08840
*/
void sub_1060020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1060020ULL || rel >= 0x1060480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01060480 size=16 callers=0 calls=0
*/
void sub_1060480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1060480ULL || rel >= 0x1060490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01060490 size=272 callers=0 calls=0
*/
void sub_1060490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1060490ULL || rel >= 0x10605a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010605a0 size=272 callers=0 calls=0
*/
void sub_10605a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10605a0ULL || rel >= 0x10606b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010606b0 size=240 callers=0 calls=0
*/
void sub_10606b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10606b0ULL || rel >= 0x10607a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010607a0 size=16 callers=0 calls=0
*/
void sub_10607a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10607a0ULL || rel >= 0x10607b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010607b0 size=16 callers=0 calls=0
*/
void sub_10607b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10607b0ULL || rel >= 0x10607c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010607c0 size=144 callers=0 calls=0
*/
void sub_10607c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10607c0ULL || rel >= 0x1060850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01060850 size=144 callers=0 calls=0
*/
void sub_1060850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1060850ULL || rel >= 0x10608e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010608e0 size=240 callers=0 calls=0
*/
void sub_10608e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10608e0ULL || rel >= 0x10609d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010609d0 size=144 callers=0 calls=0
*/
void sub_10609d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10609d0ULL || rel >= 0x1060a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01060a60 size=144 callers=0 calls=0
*/
void sub_1060a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1060a60ULL || rel >= 0x1060af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01060af0 size=16 callers=0 calls=0
*/
void sub_1060af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1060af0ULL || rel >= 0x1060b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01060b00 size=16 callers=0 calls=0
*/
void sub_1060b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1060b00ULL || rel >= 0x1060b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01060b10 size=144 callers=0 calls=0
*/
void sub_1060b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1060b10ULL || rel >= 0x1060ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01060ba0 size=144 callers=0 calls=0
*/
void sub_1060ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1060ba0ULL || rel >= 0x1060c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01060c30 size=368 callers=1 calls=4
   calls: sub_1741420, sub_1741740, sub_6ac2d0, sub_6ae890
*/
void sub_1060c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1060c30ULL || rel >= 0x1060da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01060da0 size=240 callers=1 calls=4
   calls: sub_173f370, sub_17414c0, sub_1741870, sub_6ac2d0
*/
void sub_1060da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1060da0ULL || rel >= 0x1060e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01060e90 size=256 callers=0 calls=2
   calls: sub_1741110, sub_6ac2d0
*/
void sub_1060e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1060e90ULL || rel >= 0x1060f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01060f90 size=320 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1060f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1060f90ULL || rel >= 0x10610d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010610d0 size=80 callers=0 calls=0
*/
void sub_10610d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10610d0ULL || rel >= 0x1061120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061120 size=240 callers=0 calls=0
*/
void sub_1061120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061120ULL || rel >= 0x1061210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061210 size=80 callers=0 calls=0
*/
void sub_1061210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061210ULL || rel >= 0x1061260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061260 size=80 callers=0 calls=0
*/
void sub_1061260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061260ULL || rel >= 0x10612b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010612b0 size=16 callers=0 calls=0
*/
void sub_10612b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10612b0ULL || rel >= 0x10612c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010612c0 size=16 callers=0 calls=0
*/
void sub_10612c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10612c0ULL || rel >= 0x10612d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010612d0 size=80 callers=0 calls=0
*/
void sub_10612d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10612d0ULL || rel >= 0x1061320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061320 size=80 callers=0 calls=0
*/
void sub_1061320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061320ULL || rel >= 0x1061370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061370 size=128 callers=0 calls=0
*/
void sub_1061370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061370ULL || rel >= 0x10613f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010613f0 size=432 callers=1 calls=0
*/
void sub_10613f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10613f0ULL || rel >= 0x10615a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010615a0 size=208 callers=0 calls=0
*/
void sub_10615a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10615a0ULL || rel >= 0x1061670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061670 size=208 callers=0 calls=0
*/
void sub_1061670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061670ULL || rel >= 0x1061740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061740 size=32 callers=1 calls=0
*/
void sub_1061740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061740ULL || rel >= 0x1061760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061760 size=32 callers=1 calls=0
*/
void sub_1061760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061760ULL || rel >= 0x1061780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061780 size=32 callers=1 calls=0
*/
void sub_1061780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061780ULL || rel >= 0x10617a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010617a0 size=32 callers=16 calls=0
*/
void sub_10617a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10617a0ULL || rel >= 0x10617c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010617c0 size=32 callers=9 calls=0
*/
void sub_10617c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10617c0ULL || rel >= 0x10617e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010617e0 size=32 callers=4 calls=0
*/
void sub_10617e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10617e0ULL || rel >= 0x1061800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061800 size=16 callers=34 calls=0
*/
void sub_1061800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061800ULL || rel >= 0x1061810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061810 size=32 callers=34 calls=0
*/
void sub_1061810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061810ULL || rel >= 0x1061830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061830 size=96 callers=21 calls=2
   calls: sub_6ae890, sub_6ba6a0
*/
void sub_1061830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061830ULL || rel >= 0x1061890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061890 size=80 callers=7 calls=1
   calls: sub_174e000
*/
void sub_1061890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061890ULL || rel >= 0x10618e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010618e0 size=240 callers=2 calls=2
   calls: sub_1061bf0, sub_6ae880
*/
void sub_10618e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10618e0ULL || rel >= 0x10619d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010619d0 size=32 callers=6 calls=0
*/
void sub_10619d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10619d0ULL || rel >= 0x10619f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010619f0 size=32 callers=28 calls=0
*/
void sub_10619f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10619f0ULL || rel >= 0x1061a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061a10 size=48 callers=1 calls=0
*/
void sub_1061a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061a10ULL || rel >= 0x1061a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061a40 size=176 callers=6 calls=2
   calls: sub_16b0030, sub_174de50
*/
void sub_1061a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061a40ULL || rel >= 0x1061af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061af0 size=16 callers=0 calls=0
*/
void sub_1061af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061af0ULL || rel >= 0x1061b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061b00 size=112 callers=0 calls=0
*/
void sub_1061b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061b00ULL || rel >= 0x1061b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061b70 size=16 callers=0 calls=0
*/
void sub_1061b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061b70ULL || rel >= 0x1061b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061b80 size=112 callers=0 calls=0
*/
void sub_1061b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061b80ULL || rel >= 0x1061bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061bf0 size=544 callers=1 calls=0
*/
void sub_1061bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061bf0ULL || rel >= 0x1061e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061e10 size=128 callers=0 calls=0
*/
void sub_1061e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061e10ULL || rel >= 0x1061e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01061e90 size=1184 callers=2 calls=10
   calls: sub_1048150, sub_10653b0, sub_106b170, sub_106b7c0, sub_106dcb0, sub_106e120, sub_106e4b0, sub_1074c90, sub_1075c50, sub_1078340
*/
void sub_1061e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061e90ULL || rel >= 0x1062330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01062330 size=16 callers=0 calls=0
*/
void sub_1062330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1062330ULL || rel >= 0x1062340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01062340 size=16 callers=0 calls=0
*/
void sub_1062340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1062340ULL || rel >= 0x1062350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01062350 size=16 callers=3 calls=0
*/
void sub_1062350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1062350ULL || rel >= 0x1062360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01062360 size=16 callers=3 calls=0
*/
void sub_1062360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1062360ULL || rel >= 0x1062370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01062370 size=16 callers=1 calls=0
*/
void sub_1062370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1062370ULL || rel >= 0x1062380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01062380 size=704 callers=1 calls=14
   calls: add_updated_record, not_registered_becaouse_there_is_no_delete_target, sub_106c3b0, sub_106c570, sub_106c620, sub_106db10, sub_106db90, sub_10783c0, sub_10783f0, sub_1078500, sub_1078510, sub_1078520
   ... +2 more
*/
void sub_1062380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1062380ULL || rel >= 0x1062640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01062640 size=1168 callers=1 calls=22
   calls: add_created_record, add_deleted_record, add_updated_record, network, sub_10466c0, sub_1047180, sub_1065b10, sub_1065e00, sub_10660e0, sub_1066860, sub_106dcb0, sub_106dd10
   ... +10 more
   ref: not registered becaouse there is no delete target
*/
void not_registered_becaouse_there_is_no_delete_target(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1062640ULL || rel >= 0x1062ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01062ad0 size=496 callers=3 calls=10
   calls: not_registered_becaouse_there_is_no_delete_target_2, sub_1062cc0, sub_10674e0, sub_106b5a0, sub_106b690, sub_106b6a0, sub_106dc40, sub_1078500, sub_1078510, sub_1078520
*/
void sub_1062ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1062ad0ULL || rel >= 0x1062cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01062cc0 size=272 callers=4 calls=7
   calls: sub_65c700, sub_6c1cb0, sub_6c1ed0, sub_6c1f90, sub_6c1ff0, sub_6c2000, sub_6c2b60
*/
void sub_1062cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1062cc0ULL || rel >= 0x1062dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01062dd0 size=992 callers=1 calls=20
   calls: add_created_record, add_deleted_record, add_updated_record, network, sub_10466c0, sub_1047180, sub_1067800, sub_1067a80, sub_1067fa0, sub_106dcb0, sub_106dea0, sub_106dfe0
   ... +8 more
   ref: not registered becaouse there is no delete target
*/
void not_registered_becaouse_there_is_no_delete_target_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1062dd0ULL || rel >= 0x10631b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010631b0 size=512 callers=1 calls=11
   calls: not_registered_becaouse_there_is_no_delete_target_3, sub_10633b0, sub_106b5a0, sub_106b690, sub_106b6a0, sub_106dc40, sub_106f8b0, sub_1075ee0, sub_1078500, sub_1078510, sub_1078520
*/
void sub_10631b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10631b0ULL || rel >= 0x10633b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010633b0 size=272 callers=4 calls=7
   calls: sub_65c700, sub_6c1cb0, sub_6c1ed0, sub_6c1f90, sub_6c1ff0, sub_6c2000, sub_6c2b60
*/
void sub_10633b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10633b0ULL || rel >= 0x10634c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010634c0 size=672 callers=2 calls=16
   calls: add_created_record, add_deleted_record, add_updated_record, network, sub_10466c0, sub_1047180, sub_1068b30, sub_1068c70, sub_10690e0, sub_106dcb0, sub_106dea0, sub_106dfe0
   ... +4 more
   ref: not registered becaouse there is no delete target
*/
void not_registered_becaouse_there_is_no_delete_target_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10634c0ULL || rel >= 0x1063760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01063760 size=496 callers=1 calls=7
   calls: not_registered_becaouse_there_is_no_delete_target_3, sub_10488a0, sub_106b690, sub_106b6a0, sub_1078500, sub_1078510, sub_1078520
*/
void sub_1063760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1063760ULL || rel >= 0x1063950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01063950 size=128 callers=1 calls=2
   calls: not_registered_becaouse_there_is_no_delete_target_4, sub_1078520
*/
void sub_1063950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1063950ULL || rel >= 0x10639d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010639d0 size=1168 callers=2 calls=22
   calls: add_created_record, add_deleted_record, add_updated_record, network, sub_10466c0, sub_1047180, sub_10696d0, sub_10699c0, sub_1069ca0, sub_106a150, sub_106dcb0, sub_106dd10
   ... +10 more
   ref: not registered becaouse there is no delete target
*/
void not_registered_becaouse_there_is_no_delete_target_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10639d0ULL || rel >= 0x1063e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01063e60 size=64 callers=4 calls=2
   calls: not_registered_becaouse_there_is_no_delete_target_4, sub_1078520
*/
void sub_1063e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1063e60ULL || rel >= 0x1063ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01063ea0 size=176 callers=1 calls=5
   calls: add_offline_record, add_online_record, sub_10783f0, sub_10784a0, sub_1078550
*/
void sub_1063ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1063ea0ULL || rel >= 0x1063f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01063f50 size=144 callers=2 calls=3
   calls: add_offline_record, sub_10783f0, sub_10784a0
*/
void sub_1063f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1063f50ULL || rel >= 0x1063fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01063fe0 size=912 callers=5 calls=7
   calls: sub_1048190, sub_10482f0, sub_106dcb0, sub_106dd10, sub_106fa30, sub_106fc70, sub_10783c0
*/
void sub_1063fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1063fe0ULL || rel >= 0x1064370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01064370 size=224 callers=4 calls=2
   calls: sub_1075f10, sub_10783c0
*/
void sub_1064370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1064370ULL || rel >= 0x1064450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01064450 size=672 callers=4 calls=5
   calls: sub_106e890, sub_106eb30, sub_10783c0, sub_10f67c0, sub_10f78e0
*/
void sub_1064450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1064450ULL || rel >= 0x10646f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010646f0 size=336 callers=2 calls=2
   calls: sub_106f1c0, sub_10783c0
*/
void sub_10646f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10646f0ULL || rel >= 0x1064840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01064840 size=224 callers=8 calls=2
   calls: sub_106e210, sub_10783c0
*/
void sub_1064840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1064840ULL || rel >= 0x1064920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01064920 size=80 callers=1 calls=0
*/
void sub_1064920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1064920ULL || rel >= 0x1064970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01064970 size=176 callers=14 calls=2
   calls: sub_106dfe0, sub_10783f0
*/
void sub_1064970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1064970ULL || rel >= 0x1064a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01064a20 size=736 callers=20 calls=0
*/
void sub_1064a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1064a20ULL || rel >= 0x1064d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01064d00 size=80 callers=1 calls=0
*/
void sub_1064d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1064d00ULL || rel >= 0x1064d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01064d50 size=16 callers=3 calls=0
*/
void sub_1064d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1064d50ULL || rel >= 0x1064d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01064d60 size=192 callers=1 calls=1
   calls: sub_106c0e0
*/
void sub_1064d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1064d60ULL || rel >= 0x1064e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01064e20 size=16 callers=10 calls=0
*/
void sub_1064e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1064e20ULL || rel >= 0x1064e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01064e30 size=48 callers=1 calls=1
   calls: sub_106c0e0
*/
void sub_1064e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1064e30ULL || rel >= 0x1064e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01064e60 size=128 callers=1 calls=4
   calls: add_offline_record, sub_106deb0, sub_10783f0, sub_1078600
*/
void sub_1064e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1064e60ULL || rel >= 0x1064ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01064ee0 size=528 callers=0 calls=1
   calls: sub_10651e0
*/
void sub_1064ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1064ee0ULL || rel >= 0x10650f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010650f0 size=16 callers=0 calls=0
*/
void sub_10650f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10650f0ULL || rel >= 0x1065100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01065100 size=112 callers=0 calls=0
*/
void sub_1065100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1065100ULL || rel >= 0x1065170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01065170 size=112 callers=0 calls=0
*/
void sub_1065170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1065170ULL || rel >= 0x10651e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010651e0 size=464 callers=1 calls=0
*/
void sub_10651e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10651e0ULL || rel >= 0x10653b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010653b0 size=1120 callers=1 calls=1
   calls: sub_1065810
*/
void sub_10653b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10653b0ULL || rel >= 0x1065810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01065810 size=768 callers=10 calls=0
*/
void sub_1065810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1065810ULL || rel >= 0x1065b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01065b10 size=752 callers=1 calls=8
   calls: sub_1066670, sub_106b020, sub_106b070, sub_106b090, sub_106b0a0, sub_106b100, sub_106dfe0, sub_e53300
*/
void sub_1065b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1065b10ULL || rel >= 0x1065e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01065e00 size=736 callers=1 calls=3
   calls: sub_1066ef0, sub_1067190, sub_10783c0
*/
void sub_1065e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1065e00ULL || rel >= 0x10660e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010660e0 size=1424 callers=1 calls=2
   calls: sub_10783c0, sub_e53730
*/
void sub_10660e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10660e0ULL || rel >= 0x1066670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01066670 size=496 callers=2 calls=1
   calls: sub_106b020
*/
void sub_1066670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1066670ULL || rel >= 0x1066860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01066860 size=656 callers=2 calls=3
   calls: sub_1066af0, sub_106fc70, sub_1075f10
*/
void sub_1066860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1066860ULL || rel >= 0x1066af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01066af0 size=400 callers=1 calls=2
   calls: sub_1066c80, sub_106e890
*/
void sub_1066af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1066af0ULL || rel >= 0x1066c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01066c80 size=624 callers=1 calls=3
   calls: sub_10482f0, sub_106e210, sub_106f1c0
*/
void sub_1066c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1066c80ULL || rel >= 0x1066ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01066ef0 size=672 callers=2 calls=0
*/
void sub_1066ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1066ef0ULL || rel >= 0x1067190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01067190 size=400 callers=1 calls=2
   calls: sub_1065810, sub_1067320
*/
void sub_1067190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1067190ULL || rel >= 0x1067320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01067320 size=448 callers=1 calls=2
   calls: sub_1066ef0, sub_10783c0
*/
void sub_1067320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1067320ULL || rel >= 0x10674e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010674e0 size=512 callers=1 calls=3
   calls: sub_10676e0, sub_106e860, sub_106f8b0
*/
void sub_10674e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10674e0ULL || rel >= 0x10676e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010676e0 size=288 callers=1 calls=3
   calls: sub_1048160, sub_106dae0, sub_106f190
*/
void sub_10676e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10676e0ULL || rel >= 0x1067800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01067800 size=640 callers=1 calls=3
   calls: sub_10685b0, sub_1068830, sub_10783c0
*/
void sub_1067800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1067800ULL || rel >= 0x1067a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01067a80 size=1312 callers=1 calls=2
   calls: sub_10783c0, sub_e53730
*/
void sub_1067a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1067a80ULL || rel >= 0x1067fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01067fa0 size=544 callers=1 calls=3
   calls: sub_10681c0, sub_106dd10, sub_106fc70
*/
void sub_1067fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1067fa0ULL || rel >= 0x10681c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010681c0 size=400 callers=1 calls=2
   calls: sub_1068350, sub_106e890
*/
void sub_10681c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10681c0ULL || rel >= 0x1068350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01068350 size=608 callers=1 calls=3
   calls: sub_10482f0, sub_106db10, sub_106f1c0
*/
void sub_1068350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1068350ULL || rel >= 0x10685b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010685b0 size=640 callers=2 calls=0
*/
void sub_10685b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10685b0ULL || rel >= 0x1068830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01068830 size=400 callers=1 calls=2
   calls: sub_1065810, sub_10689c0
*/
void sub_1068830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1068830ULL || rel >= 0x10689c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010689c0 size=368 callers=1 calls=2
   calls: sub_10685b0, sub_10783c0
*/
void sub_10689c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10689c0ULL || rel >= 0x1068b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01068b30 size=320 callers=1 calls=2
   calls: sub_10693b0, sub_1069540
*/
void sub_1068b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1068b30ULL || rel >= 0x1068c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01068c70 size=1136 callers=1 calls=2
   calls: sub_10783c0, sub_e53730
*/
void sub_1068c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1068c70ULL || rel >= 0x10690e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010690e0 size=720 callers=1 calls=3
   calls: sub_106dd10, sub_106fc70, sub_1075f10
*/
void sub_10690e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10690e0ULL || rel >= 0x10693b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010693b0 size=400 callers=2 calls=1
   calls: sub_10783c0
*/
void sub_10693b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10693b0ULL || rel >= 0x1069540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01069540 size=400 callers=1 calls=2
   calls: sub_1065810, sub_10693b0
*/
void sub_1069540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1069540ULL || rel >= 0x10696d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010696d0 size=752 callers=1 calls=8
   calls: sub_1066670, sub_106b020, sub_106b070, sub_106b090, sub_106b0a0, sub_106b100, sub_106dfe0, sub_e53300
*/
void sub_10696d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10696d0ULL || rel >= 0x10699c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010699c0 size=736 callers=1 calls=3
   calls: sub_106a930, sub_106ac50, sub_10783c0
*/
void sub_10699c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10699c0ULL || rel >= 0x1069ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01069ca0 size=1200 callers=1 calls=3
   calls: sub_106a930, sub_10783c0, sub_e53730
*/
void sub_1069ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1069ca0ULL || rel >= 0x106a150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106a150 size=656 callers=2 calls=3
   calls: sub_106a3e0, sub_106fc70, sub_1075f10
*/
void sub_106a150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106a150ULL || rel >= 0x106a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106a3e0 size=400 callers=1 calls=2
   calls: sub_106a570, sub_106e890
*/
void sub_106a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106a3e0ULL || rel >= 0x106a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106a570 size=432 callers=1 calls=3
   calls: sub_106a720, sub_106e210, sub_106f1c0
*/
void sub_106a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106a570ULL || rel >= 0x106a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106a720 size=528 callers=1 calls=3
   calls: sub_10482f0, sub_106db10, sub_106db90
*/
void sub_106a720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106a720ULL || rel >= 0x106a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106a930 size=800 callers=3 calls=0
*/
void sub_106a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106a930ULL || rel >= 0x106ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106ac50 size=400 callers=1 calls=2
   calls: sub_1065810, sub_106ade0
*/
void sub_106ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ac50ULL || rel >= 0x106ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106ade0 size=448 callers=1 calls=2
   calls: sub_106a930, sub_10783c0
*/
void sub_106ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ade0ULL || rel >= 0x106afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106afa0 size=128 callers=0 calls=0
*/
void sub_106afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106afa0ULL || rel >= 0x106b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b020 size=80 callers=3 calls=0
*/
void sub_106b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b020ULL || rel >= 0x106b070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b070 size=16 callers=4 calls=0
*/
void sub_106b070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b070ULL || rel >= 0x106b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b080 size=16 callers=1 calls=0
*/
void sub_106b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b080ULL || rel >= 0x106b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b090 size=16 callers=4 calls=0
*/
void sub_106b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b090ULL || rel >= 0x106b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b0a0 size=96 callers=2 calls=1
   calls: sub_106e270
*/
void sub_106b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b0a0ULL || rel >= 0x106b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b100 size=112 callers=2 calls=0
*/
void sub_106b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b100ULL || rel >= 0x106b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b170 size=96 callers=1 calls=1
   calls: sub_106b1d0
*/
void sub_106b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b170ULL || rel >= 0x106b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b1d0 size=384 callers=1 calls=0
*/
void sub_106b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b1d0ULL || rel >= 0x106b350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b350 size=384 callers=0 calls=0
*/
void sub_106b350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b350ULL || rel >= 0x106b4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b4d0 size=16 callers=1 calls=0
*/
void sub_106b4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b4d0ULL || rel >= 0x106b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b4e0 size=16 callers=1 calls=0
*/
void sub_106b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b4e0ULL || rel >= 0x106b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b4f0 size=32 callers=0 calls=0
*/
void sub_106b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b4f0ULL || rel >= 0x106b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b510 size=16 callers=0 calls=0
*/
void sub_106b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b510ULL || rel >= 0x106b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b520 size=128 callers=0 calls=0
*/
void sub_106b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b520ULL || rel >= 0x106b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b5a0 size=96 callers=4 calls=0
*/
void sub_106b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b5a0ULL || rel >= 0x106b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b600 size=96 callers=2 calls=3
   calls: sub_10619d0, sub_1061a10, sub_6a0e70
*/
void sub_106b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b600ULL || rel >= 0x106b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b660 size=48 callers=2 calls=0
*/
void sub_106b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b660ULL || rel >= 0x106b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b690 size=16 callers=3 calls=0
*/
void sub_106b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b690ULL || rel >= 0x106b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b6a0 size=16 callers=3 calls=0
*/
void sub_106b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b6a0ULL || rel >= 0x106b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b6b0 size=144 callers=2 calls=0
*/
void sub_106b6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b6b0ULL || rel >= 0x106b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b740 size=128 callers=0 calls=0
*/
void sub_106b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b740ULL || rel >= 0x106b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b7c0 size=432 callers=1 calls=1
   calls: sub_106b970
*/
void sub_106b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b7c0ULL || rel >= 0x106b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106b970 size=416 callers=5 calls=0
*/
void sub_106b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b970ULL || rel >= 0x106bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106bb10 size=16 callers=2 calls=0
*/
void sub_106bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106bb10ULL || rel >= 0x106bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106bb20 size=16 callers=2 calls=0
*/
void sub_106bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106bb20ULL || rel >= 0x106bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106bb30 size=16 callers=2 calls=0
*/
void sub_106bb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106bb30ULL || rel >= 0x106bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106bb40 size=16 callers=2 calls=0
*/
void sub_106bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106bb40ULL || rel >= 0x106bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106bb50 size=16 callers=2 calls=0
*/
void sub_106bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106bb50ULL || rel >= 0x106bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106bb60 size=304 callers=6 calls=2
   calls: network, sub_106dfe0
   ref: add updated record
*/
void add_updated_record(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106bb60ULL || rel >= 0x106bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106bc90 size=208 callers=4 calls=2
   calls: network, sub_106dfe0
   ref: add created record
*/
void add_created_record(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106bc90ULL || rel >= 0x106bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106bd60 size=480 callers=4 calls=3
   calls: network, sub_106dd10, sub_106dfe0
   ref: add deleted record
*/
void add_deleted_record(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106bd60ULL || rel >= 0x106bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106bf40 size=208 callers=1 calls=2
   calls: network, sub_106dfe0
   ref: add online record
*/
void add_online_record(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106bf40ULL || rel >= 0x106c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106c010 size=208 callers=3 calls=2
   calls: network, sub_106dfe0
   ref: add offline record
*/
void add_offline_record(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c010ULL || rel >= 0x106c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106c0e0 size=32 callers=2 calls=0
*/
void sub_106c0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c0e0ULL || rel >= 0x106c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106c100 size=560 callers=0 calls=0
*/
void sub_106c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c100ULL || rel >= 0x106c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106c330 size=128 callers=0 calls=0
*/
void sub_106c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c330ULL || rel >= 0x106c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106c3b0 size=128 callers=1 calls=1
   calls: sub_106c430
*/
void sub_106c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c3b0ULL || rel >= 0x106c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106c430 size=320 callers=2 calls=3
   calls: sub_106d170, sub_106dc40, sub_106f8b0
*/
void sub_106c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c430ULL || rel >= 0x106c570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106c570 size=176 callers=1 calls=1
   calls: sub_106dae0
*/
void sub_106c570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c570ULL || rel >= 0x106c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106c620 size=160 callers=1 calls=1
   calls: sub_106db80
*/
void sub_106c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c620ULL || rel >= 0x106c6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106c6c0 size=736 callers=1 calls=3
   calls: sub_106c430, sub_106d460, sub_106dec0
*/
void sub_106c6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c6c0ULL || rel >= 0x106c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106c9a0 size=1712 callers=1 calls=4
   calls: sub_106d460, sub_106db30, sub_106dba0, sub_106dec0
*/
void sub_106c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c9a0ULL || rel >= 0x106d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d050 size=32 callers=0 calls=0
*/
void sub_106d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d050ULL || rel >= 0x106d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d070 size=16 callers=0 calls=0
*/
void sub_106d070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d070ULL || rel >= 0x106d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d080 size=48 callers=0 calls=0
*/
void sub_106d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d080ULL || rel >= 0x106d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d0b0 size=48 callers=1 calls=0
*/
void sub_106d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d0b0ULL || rel >= 0x106d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d0e0 size=16 callers=0 calls=0
*/
void sub_106d0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d0e0ULL || rel >= 0x106d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d0f0 size=32 callers=0 calls=0
*/
void sub_106d0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d0f0ULL || rel >= 0x106d110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d110 size=32 callers=0 calls=0
*/
void sub_106d110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d110ULL || rel >= 0x106d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d130 size=32 callers=0 calls=0
*/
void sub_106d130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d130ULL || rel >= 0x106d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d150 size=32 callers=0 calls=0
*/
void sub_106d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d150ULL || rel >= 0x106d170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d170 size=432 callers=1 calls=3
   calls: sub_106d320, sub_106e860, sub_1075ee0
*/
void sub_106d170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d170ULL || rel >= 0x106d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d320 size=320 callers=1 calls=3
   calls: sub_1048160, sub_106e150, sub_106f190
*/
void sub_106d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d320ULL || rel >= 0x106d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d460 size=272 callers=2 calls=3
   calls: sub_106d570, sub_106fd60, sub_1076270
*/
void sub_106d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d460ULL || rel >= 0x106d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d570 size=272 callers=1 calls=3
   calls: sub_106d680, sub_106eb70, sub_106f400
*/
void sub_106d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d570ULL || rel >= 0x106d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d680 size=256 callers=1 calls=2
   calls: sub_10485f0, sub_106e310
*/
void sub_106d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d680ULL || rel >= 0x106d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d780 size=128 callers=0 calls=0
*/
void sub_106d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d780ULL || rel >= 0x106d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d800 size=160 callers=2 calls=0
*/
void sub_106d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d800ULL || rel >= 0x106d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106d8a0 size=352 callers=0 calls=4
   calls: sub_1049b40, sub_104ba50, sub_1063fe0, sub_1064a20
*/
void sub_106d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d8a0ULL || rel >= 0x106da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106da00 size=16 callers=0 calls=0
*/
void sub_106da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106da00ULL || rel >= 0x106da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106da10 size=16 callers=0 calls=0
*/
void sub_106da10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106da10ULL || rel >= 0x106da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106da20 size=16 callers=0 calls=0
*/
void sub_106da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106da20ULL || rel >= 0x106da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106da30 size=16 callers=0 calls=0
*/
void sub_106da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106da30ULL || rel >= 0x106da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106da40 size=16 callers=0 calls=0
*/
void sub_106da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106da40ULL || rel >= 0x106da50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106da50 size=16 callers=0 calls=0
*/
void sub_106da50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106da50ULL || rel >= 0x106da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106da60 size=128 callers=0 calls=0
*/
void sub_106da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106da60ULL || rel >= 0x106dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106dae0 size=48 callers=3 calls=0
*/
void sub_106dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106dae0ULL || rel >= 0x106db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106db10 size=32 callers=3 calls=0
*/
void sub_106db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106db10ULL || rel >= 0x106db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106db30 size=80 callers=3 calls=0
*/
void sub_106db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106db30ULL || rel >= 0x106db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106db80 size=16 callers=2 calls=0
*/
void sub_106db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106db80ULL || rel >= 0x106db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106db90 size=16 callers=2 calls=0
*/
void sub_106db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106db90ULL || rel >= 0x106dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106dba0 size=16 callers=2 calls=0
*/
void sub_106dba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106dba0ULL || rel >= 0x106dbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106dbb0 size=128 callers=0 calls=0
*/
void sub_106dbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106dbb0ULL || rel >= 0x106dc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106dc30 size=16 callers=58 calls=0
*/
void sub_106dc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106dc30ULL || rel >= 0x106dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106dc40 size=112 callers=6 calls=0
*/
void sub_106dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106dc40ULL || rel >= 0x106dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106dcb0 size=96 callers=6 calls=2
   calls: sub_eaa040, sub_eaa0d0
*/
void sub_106dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106dcb0ULL || rel >= 0x106dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106dd10 size=144 callers=19 calls=0
*/
void sub_106dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106dd10ULL || rel >= 0x106dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106dda0 size=144 callers=1 calls=0
*/
void sub_106dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106dda0ULL || rel >= 0x106de30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106de30 size=96 callers=7 calls=0
*/
void sub_106de30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106de30ULL || rel >= 0x106de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106de90 size=16 callers=1 calls=0
*/
void sub_106de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106de90ULL || rel >= 0x106dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106dea0 size=16 callers=9 calls=0
*/
void sub_106dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106dea0ULL || rel >= 0x106deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106deb0 size=16 callers=14 calls=0
*/
void sub_106deb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106deb0ULL || rel >= 0x106dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106dec0 size=272 callers=5 calls=0
*/
void sub_106dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106dec0ULL || rel >= 0x106dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106dfd0 size=16 callers=2 calls=0
*/
void sub_106dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106dfd0ULL || rel >= 0x106dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106dfe0 size=112 callers=39 calls=0
*/
void sub_106dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106dfe0ULL || rel >= 0x106e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e050 size=80 callers=9 calls=1
   calls: sub_6dd2f0
   ref: network
*/
void network(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e050ULL || rel >= 0x106e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e0a0 size=128 callers=0 calls=0
*/
void sub_106e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e0a0ULL || rel >= 0x106e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e120 size=16 callers=1 calls=0
*/
void sub_106e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e120ULL || rel >= 0x106e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e130 size=32 callers=8 calls=0
*/
void sub_106e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e130ULL || rel >= 0x106e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e150 size=192 callers=2 calls=0
*/
void sub_106e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e150ULL || rel >= 0x106e210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e210 size=96 callers=3 calls=0
*/
void sub_106e210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e210ULL || rel >= 0x106e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e270 size=96 callers=1 calls=0
*/
void sub_106e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e270ULL || rel >= 0x106e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e2d0 size=16 callers=3 calls=0
*/
void sub_106e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e2d0ULL || rel >= 0x106e2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e2e0 size=16 callers=12 calls=0
*/
void sub_106e2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e2e0ULL || rel >= 0x106e2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e2f0 size=16 callers=4 calls=0
*/
void sub_106e2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e2f0ULL || rel >= 0x106e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e300 size=16 callers=1 calls=0
*/
void sub_106e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e300ULL || rel >= 0x106e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e310 size=288 callers=2 calls=0
*/
void sub_106e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e310ULL || rel >= 0x106e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e430 size=128 callers=0 calls=0
*/
void sub_106e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e430ULL || rel >= 0x106e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e4b0 size=48 callers=2 calls=0
*/
void sub_106e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e4b0ULL || rel >= 0x106e4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e4e0 size=48 callers=15 calls=0
*/
void sub_106e4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e4e0ULL || rel >= 0x106e510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e510 size=688 callers=1 calls=2
   calls: sub_1074da0, sub_1074fe0
*/
void sub_106e510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e510ULL || rel >= 0x106e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e7c0 size=160 callers=4 calls=1
   calls: sub_1074fe0
*/
void sub_106e7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e7c0ULL || rel >= 0x106e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e860 size=48 callers=3 calls=1
   calls: sub_106e510
*/
void sub_106e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e860ULL || rel >= 0x106e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e890 size=352 callers=5 calls=2
   calls: sub_1074f20, sub_67c270
*/
void sub_106e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e890ULL || rel >= 0x106e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106e9f0 size=16 callers=3 calls=0
*/
void sub_106e9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e9f0ULL || rel >= 0x106ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106ea00 size=16 callers=6 calls=0
*/
void sub_106ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ea00ULL || rel >= 0x106ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106ea10 size=16 callers=27 calls=0
*/
void sub_106ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ea10ULL || rel >= 0x106ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106ea20 size=16 callers=2 calls=0
*/
void sub_106ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ea20ULL || rel >= 0x106ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106ea30 size=16 callers=2 calls=0
*/
void sub_106ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ea30ULL || rel >= 0x106ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106ea40 size=16 callers=2 calls=0
*/
void sub_106ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ea40ULL || rel >= 0x106ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106ea50 size=96 callers=3 calls=1
   calls: sub_67c120
*/
void sub_106ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ea50ULL || rel >= 0x106eab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106eab0 size=16 callers=2 calls=0
*/
void sub_106eab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106eab0ULL || rel >= 0x106eac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106eac0 size=16 callers=1 calls=0
*/
void sub_106eac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106eac0ULL || rel >= 0x106ead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106ead0 size=16 callers=5 calls=0
*/
void sub_106ead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ead0ULL || rel >= 0x106eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106eae0 size=16 callers=7 calls=0
*/
void sub_106eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106eae0ULL || rel >= 0x106eaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106eaf0 size=16 callers=4 calls=0
*/
void sub_106eaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106eaf0ULL || rel >= 0x106eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106eb00 size=16 callers=6 calls=0
*/
void sub_106eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106eb00ULL || rel >= 0x106eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106eb10 size=32 callers=3 calls=0
*/
void sub_106eb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106eb10ULL || rel >= 0x106eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106eb30 size=64 callers=3 calls=0
*/
void sub_106eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106eb30ULL || rel >= 0x106eb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106eb70 size=816 callers=3 calls=2
   calls: sub_1074c90, sub_1075080
*/
void sub_106eb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106eb70ULL || rel >= 0x106eea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106eea0 size=128 callers=0 calls=0
*/
void sub_106eea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106eea0ULL || rel >= 0x106ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106ef20 size=96 callers=1 calls=0
*/
void sub_106ef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ef20ULL || rel >= 0x106ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106ef80 size=528 callers=1 calls=1
   calls: sub_1074da0
*/
void sub_106ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ef80ULL || rel >= 0x106f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f190 size=48 callers=3 calls=1
   calls: sub_106ef80
*/
void sub_106f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f190ULL || rel >= 0x106f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f1c0 size=368 callers=5 calls=1
   calls: sub_1074f20
*/
void sub_106f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f1c0ULL || rel >= 0x106f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f330 size=16 callers=2 calls=0
*/
void sub_106f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f330ULL || rel >= 0x106f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f340 size=32 callers=2 calls=0
*/
void sub_106f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f340ULL || rel >= 0x106f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f360 size=16 callers=1 calls=0
*/
void sub_106f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f360ULL || rel >= 0x106f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f370 size=16 callers=2 calls=0
*/
void sub_106f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f370ULL || rel >= 0x106f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f380 size=16 callers=1 calls=0
*/
void sub_106f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f380ULL || rel >= 0x106f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f390 size=16 callers=1 calls=0
*/
void sub_106f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f390ULL || rel >= 0x106f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f3a0 size=16 callers=2 calls=0
*/
void sub_106f3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f3a0ULL || rel >= 0x106f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f3b0 size=16 callers=3 calls=0
*/
void sub_106f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f3b0ULL || rel >= 0x106f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f3c0 size=16 callers=1 calls=0
*/
void sub_106f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f3c0ULL || rel >= 0x106f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f3d0 size=16 callers=2 calls=0
*/
void sub_106f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f3d0ULL || rel >= 0x106f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f3e0 size=16 callers=1 calls=0
*/
void sub_106f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f3e0ULL || rel >= 0x106f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f3f0 size=16 callers=1 calls=0
*/
void sub_106f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f3f0ULL || rel >= 0x106f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f400 size=1072 callers=3 calls=1
   calls: sub_1075080
*/
void sub_106f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f400ULL || rel >= 0x106f830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f830 size=128 callers=0 calls=0
*/
void sub_106f830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f830ULL || rel >= 0x106f8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106f8b0 size=384 callers=6 calls=1
   calls: sub_1070050
*/
void sub_106f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106f8b0ULL || rel >= 0x106fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106fa30 size=576 callers=4 calls=6
   calls: sub_10707c0, sub_136b530, sub_136b580, sub_136b590, sub_136b770, sub_136b780
*/
void sub_106fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106fa30ULL || rel >= 0x106fc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106fc70 size=128 callers=7 calls=1
   calls: sub_67c270
*/
void sub_106fc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106fc70ULL || rel >= 0x106fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106fcf0 size=16 callers=7 calls=0
*/
void sub_106fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106fcf0ULL || rel >= 0x106fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106fd00 size=16 callers=9 calls=0
*/
void sub_106fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106fd00ULL || rel >= 0x106fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106fd10 size=32 callers=2 calls=0
*/
void sub_106fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106fd10ULL || rel >= 0x106fd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106fd30 size=16 callers=8 calls=0
*/
void sub_106fd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106fd30ULL || rel >= 0x106fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106fd40 size=16 callers=3 calls=0
*/
void sub_106fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106fd40ULL || rel >= 0x106fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106fd50 size=16 callers=1 calls=0
*/
void sub_106fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106fd50ULL || rel >= 0x106fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106fd60 size=624 callers=4 calls=1
   calls: sub_1070da0
*/
void sub_106fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106fd60ULL || rel >= 0x106ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0106ffd0 size=128 callers=0 calls=0
*/
void sub_106ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ffd0ULL || rel >= 0x1070050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01070050 size=1904 callers=1 calls=17
   calls: sub_10713c0, sub_1071520, sub_1071680, sub_10717e0, sub_1071940, sub_1071aa0, sub_1071c00, sub_1071d60, sub_1071ec0, sub_1072020, sub_1072180, sub_10722e0
   ... +5 more
*/
void sub_1070050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1070050ULL || rel >= 0x10707c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010707c0 size=416 callers=1 calls=3
   calls: sub_b70e60, sub_b70ea0, sub_b70eb0
*/
void sub_10707c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10707c0ULL || rel >= 0x1070960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01070960 size=416 callers=0 calls=0
*/
void sub_1070960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1070960ULL || rel >= 0x1070b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01070b00 size=672 callers=0 calls=4
   calls: sub_b6f8c0, sub_b70e60, sub_b70ea0, sub_b719f0
*/
void sub_1070b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1070b00ULL || rel >= 0x1070da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01070da0 size=1568 callers=2 calls=17
   calls: sub_1072b20, sub_1072d10, sub_1072f00, sub_10730f0, sub_10732e0, sub_10734d0, sub_10736c0, sub_10738b0, sub_1073aa0, sub_1073c90, sub_1073e80, sub_1074070
   ... +5 more
*/
void sub_1070da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1070da0ULL || rel >= 0x10713c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010713c0 size=352 callers=1 calls=0
*/
void sub_10713c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10713c0ULL || rel >= 0x1071520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01071520 size=352 callers=1 calls=0
*/
void sub_1071520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1071520ULL || rel >= 0x1071680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01071680 size=352 callers=1 calls=0
*/
void sub_1071680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1071680ULL || rel >= 0x10717e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010717e0 size=352 callers=1 calls=0
*/
void sub_10717e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10717e0ULL || rel >= 0x1071940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01071940 size=352 callers=1 calls=0
*/
void sub_1071940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1071940ULL || rel >= 0x1071aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01071aa0 size=352 callers=1 calls=0
*/
void sub_1071aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1071aa0ULL || rel >= 0x1071c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01071c00 size=352 callers=1 calls=0
*/
void sub_1071c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1071c00ULL || rel >= 0x1071d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01071d60 size=352 callers=1 calls=0
*/
void sub_1071d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1071d60ULL || rel >= 0x1071ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01071ec0 size=352 callers=1 calls=0
*/
void sub_1071ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1071ec0ULL || rel >= 0x1072020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01072020 size=352 callers=1 calls=0
*/
void sub_1072020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1072020ULL || rel >= 0x1072180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01072180 size=352 callers=1 calls=0
*/
void sub_1072180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1072180ULL || rel >= 0x10722e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010722e0 size=352 callers=1 calls=0
*/
void sub_10722e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10722e0ULL || rel >= 0x1072440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01072440 size=352 callers=1 calls=0
*/
void sub_1072440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1072440ULL || rel >= 0x10725a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010725a0 size=352 callers=1 calls=0
*/
void sub_10725a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10725a0ULL || rel >= 0x1072700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01072700 size=352 callers=1 calls=0
*/
void sub_1072700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1072700ULL || rel >= 0x1072860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01072860 size=352 callers=1 calls=0
*/
void sub_1072860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1072860ULL || rel >= 0x10729c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010729c0 size=352 callers=1 calls=0
*/
void sub_10729c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10729c0ULL || rel >= 0x1072b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01072b20 size=496 callers=1 calls=0
*/
void sub_1072b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1072b20ULL || rel >= 0x1072d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01072d10 size=496 callers=1 calls=0
*/
void sub_1072d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1072d10ULL || rel >= 0x1072f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01072f00 size=496 callers=1 calls=0
*/
void sub_1072f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1072f00ULL || rel >= 0x10730f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010730f0 size=496 callers=1 calls=0
*/
void sub_10730f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10730f0ULL || rel >= 0x10732e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010732e0 size=496 callers=1 calls=0
*/
void sub_10732e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10732e0ULL || rel >= 0x10734d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010734d0 size=496 callers=1 calls=0
*/
void sub_10734d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10734d0ULL || rel >= 0x10736c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010736c0 size=496 callers=1 calls=0
*/
void sub_10736c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10736c0ULL || rel >= 0x10738b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010738b0 size=496 callers=1 calls=0
*/
void sub_10738b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10738b0ULL || rel >= 0x1073aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01073aa0 size=496 callers=1 calls=0
*/
void sub_1073aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1073aa0ULL || rel >= 0x1073c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01073c90 size=496 callers=1 calls=0
*/
void sub_1073c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1073c90ULL || rel >= 0x1073e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01073e80 size=496 callers=1 calls=0
*/
void sub_1073e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1073e80ULL || rel >= 0x1074070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01074070 size=496 callers=1 calls=0
*/
void sub_1074070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1074070ULL || rel >= 0x1074260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01074260 size=496 callers=1 calls=0
*/
void sub_1074260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1074260ULL || rel >= 0x1074450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01074450 size=496 callers=1 calls=0
*/
void sub_1074450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1074450ULL || rel >= 0x1074640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01074640 size=496 callers=1 calls=0
*/
void sub_1074640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1074640ULL || rel >= 0x1074830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01074830 size=496 callers=1 calls=0
*/
void sub_1074830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1074830ULL || rel >= 0x1074a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01074a20 size=496 callers=1 calls=0
*/
void sub_1074a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1074a20ULL || rel >= 0x1074c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01074c10 size=128 callers=0 calls=0
*/
void sub_1074c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1074c10ULL || rel >= 0x1074c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01074c90 size=32 callers=5 calls=0
*/
void sub_1074c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1074c90ULL || rel >= 0x1074cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01074cb0 size=240 callers=4 calls=8
   calls: sub_762930, sub_762940, sub_763330, sub_763cc0, sub_7670a0, sub_767950, sub_768dd0, sub_768ef0
*/
void sub_1074cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1074cb0ULL || rel >= 0x1074da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01074da0 size=384 callers=2 calls=1
   calls: sub_1075380
*/
void sub_1074da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1074da0ULL || rel >= 0x1074f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01074f20 size=192 callers=2 calls=0
*/
void sub_1074f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1074f20ULL || rel >= 0x1074fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01074fe0 size=16 callers=12 calls=0
*/
void sub_1074fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1074fe0ULL || rel >= 0x1074ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01074ff0 size=16 callers=4 calls=0
*/
void sub_1074ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1074ff0ULL || rel >= 0x1075000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075000 size=16 callers=4 calls=0
*/
void sub_1075000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075000ULL || rel >= 0x1075010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075010 size=16 callers=4 calls=0
*/
void sub_1075010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075010ULL || rel >= 0x1075020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075020 size=16 callers=4 calls=0
*/
void sub_1075020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075020ULL || rel >= 0x1075030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075030 size=16 callers=4 calls=0
*/
void sub_1075030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075030ULL || rel >= 0x1075040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075040 size=16 callers=5 calls=0
*/
void sub_1075040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075040ULL || rel >= 0x1075050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075050 size=16 callers=1 calls=0
*/
void sub_1075050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075050ULL || rel >= 0x1075060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075060 size=16 callers=1 calls=0
*/
void sub_1075060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075060ULL || rel >= 0x1075070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075070 size=16 callers=3 calls=0
*/
void sub_1075070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075070ULL || rel >= 0x1075080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075080 size=768 callers=3 calls=2
   calls: sub_10754f0, sub_1075710
*/
void sub_1075080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075080ULL || rel >= 0x1075380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075380 size=368 callers=1 calls=0
*/
void sub_1075380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075380ULL || rel >= 0x10754f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010754f0 size=544 callers=1 calls=0
*/
void sub_10754f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10754f0ULL || rel >= 0x1075710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075710 size=320 callers=1 calls=0
*/
void sub_1075710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075710ULL || rel >= 0x1075850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075850 size=128 callers=0 calls=0
*/
void sub_1075850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075850ULL || rel >= 0x10758d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010758d0 size=16 callers=4 calls=0
*/
void sub_10758d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10758d0ULL || rel >= 0x10758e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010758e0 size=48 callers=1 calls=0
*/
void sub_10758e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10758e0ULL || rel >= 0x1075910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075910 size=144 callers=3 calls=0
*/
void sub_1075910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075910ULL || rel >= 0x10759a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010759a0 size=16 callers=65 calls=0
*/
void sub_10759a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10759a0ULL || rel >= 0x10759b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010759b0 size=16 callers=9 calls=0
*/
void sub_10759b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10759b0ULL || rel >= 0x10759c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010759c0 size=16 callers=10 calls=0
*/
void sub_10759c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10759c0ULL || rel >= 0x10759d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010759d0 size=640 callers=6 calls=0
*/
void sub_10759d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10759d0ULL || rel >= 0x1075c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075c50 size=176 callers=3 calls=0
*/
void sub_1075c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075c50ULL || rel >= 0x1075d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075d00 size=48 callers=1 calls=0
*/
void sub_1075d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075d00ULL || rel >= 0x1075d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075d30 size=432 callers=1 calls=0
*/
void sub_1075d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075d30ULL || rel >= 0x1075ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075ee0 size=48 callers=5 calls=1
   calls: sub_1075d30
*/
void sub_1075ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075ee0ULL || rel >= 0x1075f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01075f10 size=544 callers=6 calls=0
*/
void sub_1075f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1075f10ULL || rel >= 0x1076130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01076130 size=16 callers=3 calls=0
*/
void sub_1076130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076130ULL || rel >= 0x1076140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01076140 size=16 callers=1 calls=0
*/
void sub_1076140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076140ULL || rel >= 0x1076150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01076150 size=16 callers=1 calls=0
*/
void sub_1076150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076150ULL || rel >= 0x1076160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01076160 size=16 callers=1 calls=0
*/
void sub_1076160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076160ULL || rel >= 0x1076170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01076170 size=16 callers=2 calls=0
*/
void sub_1076170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076170ULL || rel >= 0x1076180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01076180 size=224 callers=7 calls=0
*/
void sub_1076180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076180ULL || rel >= 0x1076260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01076260 size=16 callers=77 calls=0
*/
void sub_1076260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076260ULL || rel >= 0x1076270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01076270 size=736 callers=3 calls=1
   calls: sub_10759d0
*/
void sub_1076270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076270ULL || rel >= 0x1076550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01076550 size=128 callers=0 calls=0
*/
void sub_1076550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076550ULL || rel >= 0x10765d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010765d0 size=624 callers=0 calls=3
   calls: sub_1064a20, sub_106dc30, sub_10783f0
*/
void sub_10765d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10765d0ULL || rel >= 0x1076840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01076840 size=304 callers=1 calls=1
   calls: sub_106dc30
*/
void sub_1076840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076840ULL || rel >= 0x1076970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01076970 size=96 callers=1 calls=1
   calls: sub_1049b20
*/
void sub_1076970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076970ULL || rel >= 0x10769d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010769d0 size=512 callers=0 calls=3
   calls: sub_104ba50, sub_1061760, sub_1077060
*/
void sub_10769d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10769d0ULL || rel >= 0x1076bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01076bd0 size=608 callers=1 calls=2
   calls: sub_1063950, sub_1077a10
*/
void sub_1076bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076bd0ULL || rel >= 0x1076e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01076e30 size=320 callers=1 calls=1
   calls: sub_1061810
*/
void sub_1076e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076e30ULL || rel >= 0x1076f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01076f70 size=240 callers=2 calls=1
   calls: sub_106dc30
*/
void sub_1076f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076f70ULL || rel >= 0x1077060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01077060 size=1136 callers=1 calls=4
   calls: sub_1064970, sub_1064a20, sub_106dd10, sub_b2f890
*/
void sub_1077060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1077060ULL || rel >= 0x10774d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010774d0 size=288 callers=1 calls=2
   calls: sub_1064a20, sub_10775f0
*/
void sub_10774d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10774d0ULL || rel >= 0x10775f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010775f0 size=1056 callers=1 calls=2
   calls: sub_106dec0, sub_1077ea0
*/
void sub_10775f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10775f0ULL || rel >= 0x1077a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01077a10 size=368 callers=1 calls=4
   calls: sub_106dc40, sub_106f8b0, sub_1075ee0, sub_1077b80
*/
void sub_1077a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1077a10ULL || rel >= 0x1077b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01077b80 size=528 callers=1 calls=4
   calls: sub_106e150, sub_106e860, sub_106f190, sub_1077d90
*/
void sub_1077b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1077b80ULL || rel >= 0x1077d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01077d90 size=272 callers=1 calls=3
   calls: sub_1048160, sub_106dae0, sub_106db80
*/
void sub_1077d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1077d90ULL || rel >= 0x1077ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01077ea0 size=272 callers=1 calls=3
   calls: sub_106fd60, sub_1076270, sub_1077fb0
*/
void sub_1077ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1077ea0ULL || rel >= 0x1077fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01077fb0 size=272 callers=1 calls=3
   calls: sub_106eb70, sub_106f400, sub_10780c0
*/
void sub_1077fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1077fb0ULL || rel >= 0x10780c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010780c0 size=256 callers=1 calls=3
   calls: sub_10485f0, sub_106e310, sub_10781c0
*/
void sub_10780c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10780c0ULL || rel >= 0x10781c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010781c0 size=256 callers=1 calls=2
   calls: sub_106db30, sub_106dba0
*/
void sub_10781c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10781c0ULL || rel >= 0x10782c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010782c0 size=128 callers=0 calls=0
*/
void sub_10782c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10782c0ULL || rel >= 0x1078340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078340 size=128 callers=1 calls=0
*/
void sub_1078340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078340ULL || rel >= 0x10783c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010783c0 size=48 callers=24 calls=0
*/
void sub_10783c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10783c0ULL || rel >= 0x10783f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010783f0 size=16 callers=39 calls=0
*/
void sub_10783f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10783f0ULL || rel >= 0x1078400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078400 size=16 callers=14 calls=0
*/
void sub_1078400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078400ULL || rel >= 0x1078410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078410 size=16 callers=68 calls=0
*/
void sub_1078410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078410ULL || rel >= 0x1078420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078420 size=16 callers=7 calls=0
*/
void sub_1078420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078420ULL || rel >= 0x1078430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078430 size=16 callers=7 calls=0
*/
void sub_1078430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078430ULL || rel >= 0x1078440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078440 size=16 callers=8 calls=0
*/
void sub_1078440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078440ULL || rel >= 0x1078450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078450 size=16 callers=2 calls=0
*/
void sub_1078450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078450ULL || rel >= 0x1078460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078460 size=16 callers=4 calls=0
*/
void sub_1078460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078460ULL || rel >= 0x1078470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078470 size=16 callers=1 calls=0
*/
void sub_1078470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078470ULL || rel >= 0x1078480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078480 size=16 callers=1 calls=0
*/
void sub_1078480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078480ULL || rel >= 0x1078490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078490 size=16 callers=8 calls=0
*/
void sub_1078490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078490ULL || rel >= 0x10784a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010784a0 size=16 callers=10 calls=0
*/
void sub_10784a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10784a0ULL || rel >= 0x10784b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010784b0 size=80 callers=4 calls=1
   calls: sub_106deb0
*/
void sub_10784b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10784b0ULL || rel >= 0x1078500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078500 size=16 callers=4 calls=0
*/
void sub_1078500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078500ULL || rel >= 0x1078510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078510 size=16 callers=4 calls=0
*/
void sub_1078510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078510ULL || rel >= 0x1078520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078520 size=48 callers=6 calls=0
*/
void sub_1078520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078520ULL || rel >= 0x1078550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078550 size=176 callers=1 calls=0
*/
void sub_1078550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078550ULL || rel >= 0x1078600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078600 size=48 callers=1 calls=0
*/
void sub_1078600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078600ULL || rel >= 0x1078630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078630 size=16 callers=4 calls=0
*/
void sub_1078630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078630ULL || rel >= 0x1078640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078640 size=128 callers=0 calls=0
*/
void sub_1078640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078640ULL || rel >= 0x10786c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010786c0 size=256 callers=0 calls=2
   calls: sub_1049ae0, sub_1049b20
*/
void sub_10786c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10786c0ULL || rel >= 0x10787c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010787c0 size=64 callers=0 calls=0
*/
void sub_10787c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10787c0ULL || rel >= 0x1078800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078800 size=16 callers=0 calls=0
*/
void sub_1078800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078800ULL || rel >= 0x1078810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078810 size=16 callers=0 calls=0
*/
void sub_1078810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078810ULL || rel >= 0x1078820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078820 size=192 callers=0 calls=1
   calls: sub_1049b20
*/
void sub_1078820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078820ULL || rel >= 0x10788e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010788e0 size=80 callers=0 calls=0
*/
void sub_10788e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10788e0ULL || rel >= 0x1078930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078930 size=80 callers=0 calls=0
*/
void sub_1078930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078930ULL || rel >= 0x1078980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078980 size=64 callers=0 calls=0
*/
void sub_1078980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078980ULL || rel >= 0x10789c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010789c0 size=16 callers=0 calls=0
*/
void sub_10789c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10789c0ULL || rel >= 0x10789d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010789d0 size=16 callers=0 calls=0
*/
void sub_10789d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10789d0ULL || rel >= 0x10789e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010789e0 size=16 callers=0 calls=0
*/
void sub_10789e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10789e0ULL || rel >= 0x10789f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010789f0 size=16 callers=0 calls=0
*/
void sub_10789f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10789f0ULL || rel >= 0x1078a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078a00 size=16 callers=0 calls=0
*/
void sub_1078a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078a00ULL || rel >= 0x1078a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078a10 size=48 callers=0 calls=0
*/
void sub_1078a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078a10ULL || rel >= 0x1078a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078a40 size=128 callers=0 calls=0
*/
void sub_1078a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078a40ULL || rel >= 0x1078ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078ac0 size=912 callers=0 calls=7
   calls: sub_6a0d40, sub_6ae660, sub_6ae770, sub_6ae790, sub_6ae7b0, sub_6ae7d0, sub_6ae7f0
*/
void sub_1078ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078ac0ULL || rel >= 0x1078e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078e50 size=64 callers=0 calls=0
*/
void sub_1078e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078e50ULL || rel >= 0x1078e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078e90 size=16 callers=0 calls=0
*/
void sub_1078e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078e90ULL || rel >= 0x1078ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078ea0 size=16 callers=0 calls=0
*/
void sub_1078ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078ea0ULL || rel >= 0x1078eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01078eb0 size=400 callers=0 calls=6
   calls: sub_6ae5a0, sub_6ae770, sub_6ae790, sub_6ae7b0, sub_6ae7d0, sub_6ae7f0
*/
void sub_1078eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1078eb0ULL || rel >= 0x1079040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079040 size=224 callers=2 calls=0
*/
void sub_1079040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079040ULL || rel >= 0x1079120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079120 size=48 callers=0 calls=1
   calls: sub_1079040
*/
void sub_1079120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079120ULL || rel >= 0x1079150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079150 size=64 callers=0 calls=0
*/
void sub_1079150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079150ULL || rel >= 0x1079190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079190 size=16 callers=0 calls=0
*/
void sub_1079190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079190ULL || rel >= 0x10791a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010791a0 size=16 callers=0 calls=0
*/
void sub_10791a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10791a0ULL || rel >= 0x10791b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010791b0 size=16 callers=0 calls=0
*/
void sub_10791b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10791b0ULL || rel >= 0x10791c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010791c0 size=16 callers=0 calls=0
*/
void sub_10791c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10791c0ULL || rel >= 0x10791d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010791d0 size=16 callers=0 calls=0
*/
void sub_10791d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10791d0ULL || rel >= 0x10791e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010791e0 size=48 callers=0 calls=0
*/
void sub_10791e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10791e0ULL || rel >= 0x1079210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079210 size=128 callers=0 calls=0
*/
void sub_1079210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079210ULL || rel >= 0x1079290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079290 size=480 callers=0 calls=7
   calls: sub_6a0d40, sub_6ae640, sub_6ae770, sub_6ae790, sub_6ae7b0, sub_6ae7d0, sub_6ae7f0
*/
void sub_1079290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079290ULL || rel >= 0x1079470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079470 size=64 callers=0 calls=0
*/
void sub_1079470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079470ULL || rel >= 0x10794b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010794b0 size=16 callers=0 calls=0
*/
void sub_10794b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10794b0ULL || rel >= 0x10794c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010794c0 size=336 callers=0 calls=3
   calls: sub_10618e0, sub_6ae620, sub_6ae640
*/
void sub_10794c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10794c0ULL || rel >= 0x1079610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079610 size=16 callers=0 calls=0
*/
void sub_1079610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079610ULL || rel >= 0x1079620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079620 size=576 callers=0 calls=7
   calls: sub_6ae5a0, sub_6ae6c0, sub_6ae770, sub_6ae790, sub_6ae7b0, sub_6ae7d0, sub_6ae7f0
*/
void sub_1079620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079620ULL || rel >= 0x1079860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079860 size=80 callers=0 calls=0
*/
void sub_1079860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079860ULL || rel >= 0x10798b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010798b0 size=80 callers=0 calls=0
*/
void sub_10798b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10798b0ULL || rel >= 0x1079900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079900 size=64 callers=0 calls=0
*/
void sub_1079900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079900ULL || rel >= 0x1079940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079940 size=16 callers=0 calls=0
*/
void sub_1079940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079940ULL || rel >= 0x1079950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079950 size=16 callers=0 calls=0
*/
void sub_1079950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079950ULL || rel >= 0x1079960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079960 size=16 callers=0 calls=0
*/
void sub_1079960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079960ULL || rel >= 0x1079970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079970 size=16 callers=0 calls=0
*/
void sub_1079970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079970ULL || rel >= 0x1079980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079980 size=16 callers=0 calls=0
*/
void sub_1079980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079980ULL || rel >= 0x1079990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079990 size=48 callers=0 calls=0
*/
void sub_1079990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079990ULL || rel >= 0x10799c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010799c0 size=128 callers=0 calls=0
*/
void sub_10799c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10799c0ULL || rel >= 0x1079a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079a40 size=384 callers=0 calls=7
   calls: sub_6a0d40, sub_6ae6c0, sub_6ae770, sub_6ae790, sub_6ae7b0, sub_6ae7d0, sub_6ae7f0
*/
void sub_1079a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079a40ULL || rel >= 0x1079bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079bc0 size=64 callers=2 calls=0
*/
void sub_1079bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079bc0ULL || rel >= 0x1079c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079c00 size=16 callers=0 calls=0
*/
void sub_1079c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079c00ULL || rel >= 0x1079c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079c10 size=16 callers=0 calls=0
*/
void sub_1079c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079c10ULL || rel >= 0x1079c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079c20 size=16 callers=0 calls=0
*/
void sub_1079c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079c20ULL || rel >= 0x1079c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079c30 size=80 callers=0 calls=0
*/
void sub_1079c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079c30ULL || rel >= 0x1079c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079c80 size=80 callers=0 calls=0
*/
void sub_1079c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079c80ULL || rel >= 0x1079cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079cd0 size=64 callers=0 calls=0
*/
void sub_1079cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079cd0ULL || rel >= 0x1079d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079d10 size=16 callers=0 calls=0
*/
void sub_1079d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079d10ULL || rel >= 0x1079d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079d20 size=16 callers=0 calls=0
*/
void sub_1079d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079d20ULL || rel >= 0x1079d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079d30 size=16 callers=0 calls=0
*/
void sub_1079d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079d30ULL || rel >= 0x1079d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079d40 size=16 callers=0 calls=0
*/
void sub_1079d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079d40ULL || rel >= 0x1079d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079d50 size=16 callers=0 calls=0
*/
void sub_1079d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079d50ULL || rel >= 0x1079d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079d60 size=48 callers=0 calls=0
*/
void sub_1079d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079d60ULL || rel >= 0x1079d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079d90 size=128 callers=0 calls=0
*/
void sub_1079d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079d90ULL || rel >= 0x1079e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079e10 size=16 callers=0 calls=0
*/
void sub_1079e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079e10ULL || rel >= 0x1079e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01079e20 size=1104 callers=0 calls=8
   calls: sub_105c390, sub_6a0d40, sub_6ae530, sub_6ae770, sub_6ae790, sub_6ae7b0, sub_6ae7d0, sub_6ae7f0
*/
void sub_1079e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1079e20ULL || rel >= 0x107a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a270 size=64 callers=0 calls=0
*/
void sub_107a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a270ULL || rel >= 0x107a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a2b0 size=16 callers=0 calls=0
*/
void sub_107a2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a2b0ULL || rel >= 0x107a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a2c0 size=16 callers=0 calls=0
*/
void sub_107a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a2c0ULL || rel >= 0x107a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a2d0 size=576 callers=0 calls=7
   calls: sub_6ae5a0, sub_6ae6c0, sub_6ae770, sub_6ae790, sub_6ae7b0, sub_6ae7d0, sub_6ae7f0
*/
void sub_107a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a2d0ULL || rel >= 0x107a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a510 size=48 callers=0 calls=1
   calls: sub_107a5c0
*/
void sub_107a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a510ULL || rel >= 0x107a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a540 size=64 callers=0 calls=0
*/
void sub_107a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a540ULL || rel >= 0x107a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a580 size=16 callers=0 calls=0
*/
void sub_107a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a580ULL || rel >= 0x107a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a590 size=16 callers=0 calls=0
*/
void sub_107a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a590ULL || rel >= 0x107a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a5a0 size=16 callers=0 calls=0
*/
void sub_107a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a5a0ULL || rel >= 0x107a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a5b0 size=16 callers=0 calls=0
*/
void sub_107a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a5b0ULL || rel >= 0x107a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a5c0 size=224 callers=1 calls=0
*/
void sub_107a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a5c0ULL || rel >= 0x107a6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a6a0 size=16 callers=0 calls=0
*/
void sub_107a6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a6a0ULL || rel >= 0x107a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a6b0 size=48 callers=0 calls=0
*/
void sub_107a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a6b0ULL || rel >= 0x107a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a6e0 size=160 callers=0 calls=0
*/
void sub_107a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a6e0ULL || rel >= 0x107a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107a780 size=816 callers=0 calls=14
   calls: sub_107ab40, sub_107b1e0, sub_107bc60, sub_158bc00, sub_158c0f0, sub_15b9390, sub_15cf190, sub_6a3fa0, sub_6a4020, sub_6a4030, sub_6a6fa0, sub_6a7050
   ... +2 more
*/
void sub_107a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107a780ULL || rel >= 0x107aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107aab0 size=64 callers=0 calls=0
*/
void sub_107aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107aab0ULL || rel >= 0x107aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107aaf0 size=16 callers=0 calls=0
*/
void sub_107aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107aaf0ULL || rel >= 0x107ab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107ab00 size=48 callers=0 calls=0
*/
void sub_107ab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107ab00ULL || rel >= 0x107ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107ab30 size=16 callers=0 calls=0
*/
void sub_107ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107ab30ULL || rel >= 0x107ab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107ab40 size=336 callers=7 calls=2
   calls: sub_15b9390, sub_15cf3c0
*/
void sub_107ab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107ab40ULL || rel >= 0x107ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107ac90 size=16 callers=0 calls=0
*/
void sub_107ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107ac90ULL || rel >= 0x107aca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107aca0 size=128 callers=0 calls=2
   calls: sub_107ad20, sub_107bc60
*/
void sub_107aca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107aca0ULL || rel >= 0x107ad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107ad20 size=480 callers=3 calls=6
   calls: sub_158a790, sub_15bc1e0, sub_15bc310, sub_15bccf0, sub_16305f0, sub_67c910
*/
void sub_107ad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107ad20ULL || rel >= 0x107af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107af00 size=128 callers=0 calls=2
   calls: sub_107ad20, sub_107bc60
*/
void sub_107af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107af00ULL || rel >= 0x107af80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107af80 size=96 callers=0 calls=2
   calls: sub_1047680, sub_104c0e0
*/
void sub_107af80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107af80ULL || rel >= 0x107afe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107afe0 size=96 callers=0 calls=2
   calls: sub_1047680, sub_104c0e0
*/
void sub_107afe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107afe0ULL || rel >= 0x107b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b040 size=96 callers=0 calls=0
*/
void sub_107b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b040ULL || rel >= 0x107b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b0a0 size=64 callers=0 calls=0
*/
void sub_107b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b0a0ULL || rel >= 0x107b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b0e0 size=16 callers=0 calls=0
*/
void sub_107b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b0e0ULL || rel >= 0x107b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b0f0 size=16 callers=0 calls=0
*/
void sub_107b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b0f0ULL || rel >= 0x107b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b100 size=16 callers=0 calls=0
*/
void sub_107b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b100ULL || rel >= 0x107b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b110 size=16 callers=0 calls=0
*/
void sub_107b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b110ULL || rel >= 0x107b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b120 size=16 callers=0 calls=0
*/
void sub_107b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b120ULL || rel >= 0x107b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b130 size=16 callers=0 calls=0
*/
void sub_107b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b130ULL || rel >= 0x107b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b140 size=16 callers=0 calls=0
*/
void sub_107b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b140ULL || rel >= 0x107b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b150 size=16 callers=0 calls=0
*/
void sub_107b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b150ULL || rel >= 0x107b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b160 size=16 callers=0 calls=0
*/
void sub_107b160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b160ULL || rel >= 0x107b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b170 size=16 callers=0 calls=0
*/
void sub_107b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b170ULL || rel >= 0x107b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b180 size=16 callers=0 calls=0
*/
void sub_107b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b180ULL || rel >= 0x107b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b190 size=16 callers=0 calls=0
*/
void sub_107b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b190ULL || rel >= 0x107b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b1a0 size=16 callers=0 calls=0
*/
void sub_107b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b1a0ULL || rel >= 0x107b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b1b0 size=16 callers=0 calls=0
*/
void sub_107b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b1b0ULL || rel >= 0x107b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b1c0 size=16 callers=0 calls=0
*/
void sub_107b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b1c0ULL || rel >= 0x107b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b1d0 size=16 callers=0 calls=0
*/
void sub_107b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b1d0ULL || rel >= 0x107b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b1e0 size=480 callers=4 calls=11
   calls: sub_107b470, sub_107b670, sub_107baf0, sub_158bc00, sub_158c0f0, sub_15b9390, sub_15bab00, sub_15bc1e0, sub_15bc310, sub_15cf460, sub_6abc20
*/
void sub_107b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b1e0ULL || rel >= 0x107b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0107b3c0 size=48 callers=0 calls=1
   calls: sub_107ab40
*/
void sub_107b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b3c0ULL || rel >= 0x107b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

