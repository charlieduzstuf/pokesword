/* main functions 00049c90..0007e650 (3 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00049c90 size=2800 callers=1 calls=1
   calls: sub_4add0
*/
void sub_49c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c90ULL || rel >= 0x4a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a780 size=32 callers=1 calls=0
*/
void sub_4a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a780ULL || rel >= 0x4a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a7a0 size=32 callers=1 calls=0
*/
void sub_4a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a7a0ULL || rel >= 0x4a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a7c0 size=512 callers=1 calls=0
*/
void sub_4a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a7c0ULL || rel >= 0x4a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a9c0 size=1040 callers=1 calls=0
*/
void sub_4a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a9c0ULL || rel >= 0x4add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004add0 size=816 callers=2 calls=1
   calls: sub_4a7c0
*/
void sub_4add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4add0ULL || rel >= 0x4b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004b100 size=848 callers=1 calls=0
*/
void sub_4b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b100ULL || rel >= 0x4b450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004b450 size=1888 callers=1 calls=1
   calls: sub_4a9c0
*/
void sub_4b450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b450ULL || rel >= 0x4bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004bbb0 size=64 callers=0 calls=0
*/
void sub_4bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bbb0ULL || rel >= 0x4bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004bbf0 size=688 callers=0 calls=0
*/
void sub_4bbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bbf0ULL || rel >= 0x4bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004bea0 size=192 callers=1 calls=6
   calls: sub_476a0, sub_476b0, sub_47a40, sub_4bf60, sub_4e650, sub_4e690
*/
void sub_4bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bea0ULL || rel >= 0x4bf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004bf60 size=3040 callers=1 calls=0
*/
void sub_4bf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf60ULL || rel >= 0x4cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004cb40 size=272 callers=1 calls=1
   calls: sub_4e160
*/
void sub_4cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb40ULL || rel >= 0x4cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004cc50 size=80 callers=1 calls=3
   calls: sub_4a780, sub_4a7a0, sub_4f600
*/
void sub_4cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc50ULL || rel >= 0x4cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004cca0 size=688 callers=1 calls=0
*/
void sub_4cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cca0ULL || rel >= 0x4cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004cf50 size=1328 callers=1 calls=0
*/
void sub_4cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf50ULL || rel >= 0x4d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004d480 size=1136 callers=1 calls=0
*/
void sub_4d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d480ULL || rel >= 0x4d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004d8f0 size=1200 callers=1 calls=0
*/
void sub_4d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8f0ULL || rel >= 0x4dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004dda0 size=960 callers=1 calls=0
*/
void sub_4dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dda0ULL || rel >= 0x4e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004e160 size=624 callers=1 calls=7
   calls: sub_47b30, sub_4cca0, sub_4cf50, sub_4d480, sub_4d8f0, sub_4dda0, sub_4e6a0
*/
void sub_4e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e160ULL || rel >= 0x4e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004e3d0 size=640 callers=0 calls=0
*/
void sub_4e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3d0ULL || rel >= 0x4e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004e650 size=64 callers=1 calls=0
*/
void sub_4e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e650ULL || rel >= 0x4e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004e690 size=16 callers=3 calls=0
*/
void sub_4e690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e690ULL || rel >= 0x4e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004e6a0 size=1584 callers=1 calls=2
   calls: sub_4ecd0, sub_4f1b0
*/
void sub_4e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6a0ULL || rel >= 0x4ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004ecd0 size=1248 callers=1 calls=0
*/
void sub_4ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ecd0ULL || rel >= 0x4f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004f1b0 size=1104 callers=1 calls=0
*/
void sub_4f1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1b0ULL || rel >= 0x4f600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004f600 size=96 callers=1 calls=0
*/
void sub_4f600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f600ULL || rel >= 0x4f660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004f660 size=528 callers=0 calls=0
*/
void sub_4f660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f660ULL || rel >= 0x4f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004f870 size=176 callers=1 calls=0
*/
void sub_4f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f870ULL || rel >= 0x4f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004f920 size=16 callers=2 calls=0
*/
void sub_4f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f920ULL || rel >= 0x4f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004f930 size=6928 callers=1 calls=5
   calls: sub_300c80, sub_300cb0, sub_301c30, sub_51440, sub_b0c90
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f930ULL || rel >= 0x51440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00051440 size=1488 callers=1 calls=0
*/
void sub_51440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51440ULL || rel >= 0x51a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00051a10 size=160 callers=1 calls=0
*/
void sub_51a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51a10ULL || rel >= 0x51ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00051ab0 size=576 callers=0 calls=0
*/
void sub_51ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51ab0ULL || rel >= 0x51cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00051cf0 size=1648 callers=0 calls=5
   calls: NonTrackedAlloc_44, sub_300c80, sub_456e0, sub_52360, sub_53490
*/
void sub_51cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51cf0ULL || rel >= 0x52360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052360 size=416 callers=1 calls=0
*/
void sub_52360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52360ULL || rel >= 0x52500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052500 size=1840 callers=0 calls=9
   calls: NonTrackedAlloc_50, NonTrackedAlloc_51, NonTrackedAlloc_52, NonTrackedAlloc_53, NonTrackedAlloc_54, NonTrackedAlloc_55, sub_300c80, sub_52c30, sub_52f60
*/
void sub_52500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52500ULL || rel >= 0x52c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052c30 size=816 callers=1 calls=1
   calls: NonTrackedAlloc_47
*/
void sub_52c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52c30ULL || rel >= 0x52f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052f60 size=208 callers=7 calls=3
   calls: NonTrackedAlloc_44, sub_456e0, sub_53490
*/
void sub_52f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52f60ULL || rel >= 0x53030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053030 size=1120 callers=2 calls=1
   calls: sub_300c80
*/
void sub_53030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53030ULL || rel >= 0x53490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053490 size=64 callers=10 calls=1
   calls: NonTrackedAlloc_44
*/
void sub_53490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53490ULL || rel >= 0x534d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000534d0 size=160 callers=4 calls=1
   calls: sub_300c80
*/
void sub_534d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534d0ULL || rel >= 0x53570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053570 size=48 callers=2 calls=0
*/
void sub_53570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53570ULL || rel >= 0x535a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000535a0 size=48 callers=2 calls=0
*/
void sub_535a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x535a0ULL || rel >= 0x535d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000535d0 size=16 callers=0 calls=0
*/
void sub_535d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x535d0ULL || rel >= 0x535e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000535e0 size=16 callers=0 calls=0
*/
void sub_535e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x535e0ULL || rel >= 0x535f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000535f0 size=16 callers=0 calls=0
*/
void sub_535f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x535f0ULL || rel >= 0x53600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053600 size=16 callers=0 calls=0
*/
void sub_53600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53600ULL || rel >= 0x53610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053610 size=96 callers=0 calls=0
*/
void sub_53610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53610ULL || rel >= 0x53670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053670 size=96 callers=0 calls=0
*/
void sub_53670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53670ULL || rel >= 0x536d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000536d0 size=96 callers=0 calls=0
*/
void sub_536d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536d0ULL || rel >= 0x53730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053730 size=96 callers=0 calls=0
*/
void sub_53730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53730ULL || rel >= 0x53790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053790 size=16 callers=0 calls=0
*/
void sub_53790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53790ULL || rel >= 0x537a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000537a0 size=16 callers=0 calls=0
*/
void sub_537a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537a0ULL || rel >= 0x537b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000537b0 size=16 callers=0 calls=0
*/
void sub_537b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537b0ULL || rel >= 0x537c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000537c0 size=16 callers=0 calls=0
*/
void sub_537c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537c0ULL || rel >= 0x537d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000537d0 size=48 callers=0 calls=0
*/
void sub_537d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537d0ULL || rel >= 0x53800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053800 size=48 callers=0 calls=0
*/
void sub_53800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53800ULL || rel >= 0x53830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053830 size=96 callers=0 calls=0
*/
void sub_53830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53830ULL || rel >= 0x53890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053890 size=96 callers=0 calls=0
*/
void sub_53890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53890ULL || rel >= 0x538f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000538f0 size=16 callers=0 calls=0
*/
void sub_538f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538f0ULL || rel >= 0x53900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053900 size=16 callers=0 calls=0
*/
void sub_53900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53900ULL || rel >= 0x53910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053910 size=96 callers=0 calls=0
*/
void sub_53910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53910ULL || rel >= 0x53970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053970 size=96 callers=0 calls=0
*/
void sub_53970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53970ULL || rel >= 0x539d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000539d0 size=32 callers=0 calls=0
*/
void sub_539d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539d0ULL || rel >= 0x539f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000539f0 size=32 callers=0 calls=0
*/
void sub_539f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x539f0ULL || rel >= 0x53a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053a10 size=224 callers=0 calls=0
*/
void sub_53a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53a10ULL || rel >= 0x53af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053af0 size=224 callers=0 calls=0
*/
void sub_53af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53af0ULL || rel >= 0x53bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053bd0 size=224 callers=0 calls=0
*/
void sub_53bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53bd0ULL || rel >= 0x53cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053cb0 size=224 callers=0 calls=0
*/
void sub_53cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53cb0ULL || rel >= 0x53d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053d90 size=224 callers=0 calls=0
*/
void sub_53d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53d90ULL || rel >= 0x53e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053e70 size=224 callers=0 calls=0
*/
void sub_53e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53e70ULL || rel >= 0x53f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053f50 size=224 callers=0 calls=0
*/
void sub_53f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53f50ULL || rel >= 0x54030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054030 size=224 callers=0 calls=0
*/
void sub_54030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54030ULL || rel >= 0x54110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054110 size=224 callers=0 calls=0
*/
void sub_54110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54110ULL || rel >= 0x541f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000541f0 size=224 callers=0 calls=0
*/
void sub_541f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x541f0ULL || rel >= 0x542d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000542d0 size=224 callers=0 calls=0
*/
void sub_542d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542d0ULL || rel >= 0x543b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000543b0 size=224 callers=0 calls=0
*/
void sub_543b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x543b0ULL || rel >= 0x54490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054490 size=96 callers=0 calls=0
*/
void sub_54490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54490ULL || rel >= 0x544f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000544f0 size=96 callers=0 calls=0
*/
void sub_544f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x544f0ULL || rel >= 0x54550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054550 size=32 callers=0 calls=0
*/
void sub_54550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54550ULL || rel >= 0x54570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054570 size=32 callers=0 calls=0
*/
void sub_54570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54570ULL || rel >= 0x54590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054590 size=96 callers=0 calls=0
*/
void sub_54590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54590ULL || rel >= 0x545f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000545f0 size=96 callers=0 calls=0
*/
void sub_545f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x545f0ULL || rel >= 0x54650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054650 size=32 callers=0 calls=0
*/
void sub_54650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54650ULL || rel >= 0x54670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054670 size=32 callers=0 calls=0
*/
void sub_54670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54670ULL || rel >= 0x54690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054690 size=96 callers=0 calls=0
*/
void sub_54690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54690ULL || rel >= 0x546f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000546f0 size=96 callers=0 calls=0
*/
void sub_546f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x546f0ULL || rel >= 0x54750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054750 size=32 callers=0 calls=0
*/
void sub_54750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54750ULL || rel >= 0x54770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054770 size=32 callers=0 calls=0
*/
void sub_54770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54770ULL || rel >= 0x54790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054790 size=96 callers=0 calls=1
   calls: sub_58500
*/
void sub_54790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54790ULL || rel >= 0x547f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000547f0 size=80 callers=0 calls=1
   calls: sub_58500
*/
void sub_547f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x547f0ULL || rel >= 0x54840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054840 size=16 callers=0 calls=0
*/
void sub_54840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54840ULL || rel >= 0x54850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054850 size=16 callers=0 calls=0
*/
void sub_54850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54850ULL || rel >= 0x54860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054860 size=32 callers=0 calls=0
*/
void sub_54860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54860ULL || rel >= 0x54880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054880 size=32 callers=0 calls=0
*/
void sub_54880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54880ULL || rel >= 0x548a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000548a0 size=16 callers=0 calls=0
*/
void sub_548a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x548a0ULL || rel >= 0x548b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000548b0 size=16 callers=0 calls=0
*/
void sub_548b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x548b0ULL || rel >= 0x548c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000548c0 size=288 callers=0 calls=1
   calls: sub_46e30
*/
void sub_548c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x548c0ULL || rel >= 0x549e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000549e0 size=288 callers=0 calls=1
   calls: sub_46e30
*/
void sub_549e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x549e0ULL || rel >= 0x54b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054b00 size=16 callers=0 calls=0
*/
void sub_54b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54b00ULL || rel >= 0x54b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054b10 size=16 callers=0 calls=0
*/
void sub_54b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54b10ULL || rel >= 0x54b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054b20 size=1232 callers=0 calls=4
   calls: NonTrackedAlloc_44, NonTrackedAlloc_60, sub_456e0, sub_53490
*/
void sub_54b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54b20ULL || rel >= 0x54ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054ff0 size=16 callers=0 calls=0
*/
void sub_54ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54ff0ULL || rel >= 0x55000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055000 size=16 callers=0 calls=0
*/
void sub_55000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55000ULL || rel >= 0x55010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055010 size=16 callers=0 calls=0
*/
void sub_55010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55010ULL || rel >= 0x55020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055020 size=640 callers=0 calls=2
   calls: NonTrackedAlloc_61, sub_552a0
*/
void sub_55020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55020ULL || rel >= 0x552a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000552a0 size=224 callers=2 calls=1
   calls: NonTrackedAlloc_61
*/
void sub_552a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552a0ULL || rel >= 0x55380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055380 size=16 callers=0 calls=0
*/
void sub_55380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55380ULL || rel >= 0x55390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055390 size=16 callers=0 calls=0
*/
void sub_55390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55390ULL || rel >= 0x553a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000553a0 size=16 callers=0 calls=0
*/
void sub_553a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x553a0ULL || rel >= 0x553b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000553b0 size=1280 callers=0 calls=4
   calls: NonTrackedAlloc_44, NonTrackedAlloc_60, sub_456e0, sub_53490
*/
void sub_553b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x553b0ULL || rel >= 0x558b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000558b0 size=16 callers=0 calls=0
*/
void sub_558b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558b0ULL || rel >= 0x558c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000558c0 size=16 callers=0 calls=0
*/
void sub_558c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558c0ULL || rel >= 0x558d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000558d0 size=16 callers=0 calls=0
*/
void sub_558d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558d0ULL || rel >= 0x558e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000558e0 size=528 callers=0 calls=2
   calls: NonTrackedAlloc_35, sub_55af0
*/
void sub_558e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558e0ULL || rel >= 0x55af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055af0 size=224 callers=3 calls=1
   calls: NonTrackedAlloc_35
*/
void sub_55af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55af0ULL || rel >= 0x55bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055bd0 size=16 callers=0 calls=0
*/
void sub_55bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55bd0ULL || rel >= 0x55be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055be0 size=16 callers=0 calls=0
*/
void sub_55be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55be0ULL || rel >= 0x55bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055bf0 size=16 callers=0 calls=0
*/
void sub_55bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55bf0ULL || rel >= 0x55c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055c00 size=992 callers=0 calls=4
   calls: NonTrackedAlloc_48, NonTrackedAlloc_62, sub_45770, sub_59230
*/
void sub_55c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c00ULL || rel >= 0x55fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055fe0 size=16 callers=0 calls=0
*/
void sub_55fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55fe0ULL || rel >= 0x55ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055ff0 size=432 callers=0 calls=3
   calls: NonTrackedAlloc_48, NonTrackedAlloc_62, sub_45770
*/
void sub_55ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ff0ULL || rel >= 0x561a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000561a0 size=16 callers=0 calls=0
*/
void sub_561a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561a0ULL || rel >= 0x561b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000561b0 size=32 callers=0 calls=0
*/
void sub_561b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561b0ULL || rel >= 0x561d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000561d0 size=32 callers=0 calls=0
*/
void sub_561d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561d0ULL || rel >= 0x561f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000561f0 size=16 callers=0 calls=0
*/
void sub_561f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561f0ULL || rel >= 0x56200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056200 size=16 callers=0 calls=0
*/
void sub_56200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56200ULL || rel >= 0x56210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056210 size=32 callers=0 calls=0
*/
void sub_56210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56210ULL || rel >= 0x56230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056230 size=32 callers=0 calls=0
*/
void sub_56230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56230ULL || rel >= 0x56250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056250 size=16 callers=0 calls=0
*/
void sub_56250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56250ULL || rel >= 0x56260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056260 size=16 callers=0 calls=0
*/
void sub_56260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56260ULL || rel >= 0x56270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056270 size=32 callers=0 calls=0
*/
void sub_56270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56270ULL || rel >= 0x56290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056290 size=32 callers=0 calls=0
*/
void sub_56290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56290ULL || rel >= 0x562b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000562b0 size=16 callers=0 calls=0
*/
void sub_562b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562b0ULL || rel >= 0x562c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000562c0 size=16 callers=0 calls=0
*/
void sub_562c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562c0ULL || rel >= 0x562d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000562d0 size=16 callers=0 calls=0
*/
void sub_562d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562d0ULL || rel >= 0x562e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000562e0 size=16 callers=0 calls=0
*/
void sub_562e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562e0ULL || rel >= 0x562f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000562f0 size=16 callers=0 calls=0
*/
void sub_562f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562f0ULL || rel >= 0x56300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056300 size=16 callers=0 calls=0
*/
void sub_56300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56300ULL || rel >= 0x56310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056310 size=32 callers=0 calls=0
*/
void sub_56310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56310ULL || rel >= 0x56330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056330 size=32 callers=0 calls=0
*/
void sub_56330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56330ULL || rel >= 0x56350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056350 size=16 callers=0 calls=0
*/
void sub_56350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56350ULL || rel >= 0x56360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056360 size=16 callers=0 calls=0
*/
void sub_56360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56360ULL || rel >= 0x56370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056370 size=112 callers=0 calls=0
*/
void sub_56370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56370ULL || rel >= 0x563e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000563e0 size=112 callers=0 calls=0
*/
void sub_563e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563e0ULL || rel >= 0x56450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056450 size=80 callers=0 calls=0
*/
void sub_56450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56450ULL || rel >= 0x564a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000564a0 size=80 callers=0 calls=0
*/
void sub_564a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564a0ULL || rel >= 0x564f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000564f0 size=160 callers=0 calls=2
   calls: sub_456e0, sub_53490
*/
void sub_564f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564f0ULL || rel >= 0x56590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056590 size=160 callers=0 calls=2
   calls: sub_456e0, sub_53490
*/
void sub_56590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56590ULL || rel >= 0x56630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056630 size=48 callers=0 calls=1
   calls: sub_534d0
*/
void sub_56630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56630ULL || rel >= 0x56660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056660 size=48 callers=0 calls=1
   calls: sub_534d0
*/
void sub_56660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56660ULL || rel >= 0x56690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056690 size=16 callers=0 calls=0
*/
void sub_56690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56690ULL || rel >= 0x566a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000566a0 size=16 callers=0 calls=0
*/
void sub_566a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x566a0ULL || rel >= 0x566b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000566b0 size=48 callers=0 calls=0
*/
void sub_566b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x566b0ULL || rel >= 0x566e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000566e0 size=48 callers=0 calls=0
*/
void sub_566e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x566e0ULL || rel >= 0x56710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056710 size=16 callers=0 calls=0
*/
void sub_56710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56710ULL || rel >= 0x56720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056720 size=16 callers=0 calls=0
*/
void sub_56720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56720ULL || rel >= 0x56730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056730 size=16 callers=0 calls=0
*/
void sub_56730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56730ULL || rel >= 0x56740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056740 size=16 callers=0 calls=0
*/
void sub_56740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56740ULL || rel >= 0x56750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056750 size=112 callers=0 calls=0
*/
void sub_56750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56750ULL || rel >= 0x567c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000567c0 size=112 callers=0 calls=0
*/
void sub_567c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x567c0ULL || rel >= 0x56830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056830 size=80 callers=0 calls=0
*/
void sub_56830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56830ULL || rel >= 0x56880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056880 size=80 callers=0 calls=0
*/
void sub_56880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56880ULL || rel >= 0x568d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000568d0 size=160 callers=0 calls=2
   calls: sub_456e0, sub_53490
*/
void sub_568d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x568d0ULL || rel >= 0x56970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056970 size=160 callers=0 calls=2
   calls: sub_456e0, sub_53490
*/
void sub_56970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56970ULL || rel >= 0x56a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056a10 size=48 callers=0 calls=1
   calls: sub_534d0
*/
void sub_56a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56a10ULL || rel >= 0x56a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056a40 size=48 callers=0 calls=1
   calls: sub_534d0
*/
void sub_56a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56a40ULL || rel >= 0x56a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056a70 size=16 callers=0 calls=0
*/
void sub_56a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56a70ULL || rel >= 0x56a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056a80 size=16 callers=0 calls=0
*/
void sub_56a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56a80ULL || rel >= 0x56a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056a90 size=256 callers=0 calls=1
   calls: sub_456e0
*/
void sub_56a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56a90ULL || rel >= 0x56b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056b90 size=16 callers=0 calls=0
*/
void sub_56b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56b90ULL || rel >= 0x56ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056ba0 size=16 callers=0 calls=0
*/
void sub_56ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56ba0ULL || rel >= 0x56bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056bb0 size=16 callers=0 calls=0
*/
void sub_56bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56bb0ULL || rel >= 0x56bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056bc0 size=96 callers=0 calls=0
*/
void sub_56bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56bc0ULL || rel >= 0x56c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056c20 size=96 callers=0 calls=0
*/
void sub_56c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56c20ULL || rel >= 0x56c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056c80 size=32 callers=0 calls=0
*/
void sub_56c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56c80ULL || rel >= 0x56ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056ca0 size=32 callers=0 calls=0
*/
void sub_56ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56ca0ULL || rel >= 0x56cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056cc0 size=112 callers=0 calls=0
*/
void sub_56cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56cc0ULL || rel >= 0x56d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056d30 size=112 callers=0 calls=0
*/
void sub_56d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56d30ULL || rel >= 0x56da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056da0 size=80 callers=0 calls=0
*/
void sub_56da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56da0ULL || rel >= 0x56df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056df0 size=80 callers=0 calls=0
*/
void sub_56df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56df0ULL || rel >= 0x56e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056e40 size=112 callers=0 calls=0
*/
void sub_56e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56e40ULL || rel >= 0x56eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056eb0 size=112 callers=0 calls=0
*/
void sub_56eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56eb0ULL || rel >= 0x56f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056f20 size=80 callers=0 calls=0
*/
void sub_56f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56f20ULL || rel >= 0x56f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056f70 size=80 callers=0 calls=0
*/
void sub_56f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56f70ULL || rel >= 0x56fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056fc0 size=32 callers=0 calls=0
*/
void sub_56fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56fc0ULL || rel >= 0x56fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056fe0 size=32 callers=0 calls=0
*/
void sub_56fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56fe0ULL || rel >= 0x57000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057000 size=16 callers=0 calls=0
*/
void sub_57000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57000ULL || rel >= 0x57010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057010 size=16 callers=0 calls=0
*/
void sub_57010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57010ULL || rel >= 0x57020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057020 size=112 callers=0 calls=0
*/
void sub_57020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57020ULL || rel >= 0x57090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057090 size=112 callers=0 calls=0
*/
void sub_57090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57090ULL || rel >= 0x57100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057100 size=80 callers=0 calls=0
*/
void sub_57100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57100ULL || rel >= 0x57150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057150 size=80 callers=0 calls=0
*/
void sub_57150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57150ULL || rel >= 0x571a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000571a0 size=16 callers=0 calls=0
*/
void sub_571a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x571a0ULL || rel >= 0x571b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000571b0 size=16 callers=0 calls=0
*/
void sub_571b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x571b0ULL || rel >= 0x571c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000571c0 size=128 callers=0 calls=1
   calls: sub_53490
*/
void sub_571c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x571c0ULL || rel >= 0x57240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057240 size=128 callers=0 calls=1
   calls: sub_53490
*/
void sub_57240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57240ULL || rel >= 0x572c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000572c0 size=16 callers=0 calls=0
*/
void sub_572c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x572c0ULL || rel >= 0x572d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000572d0 size=16 callers=0 calls=0
*/
void sub_572d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x572d0ULL || rel >= 0x572e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000572e0 size=16 callers=0 calls=0
*/
void sub_572e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x572e0ULL || rel >= 0x572f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000572f0 size=16 callers=0 calls=0
*/
void sub_572f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x572f0ULL || rel >= 0x57300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057300 size=16 callers=0 calls=0
*/
void sub_57300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57300ULL || rel >= 0x57310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057310 size=16 callers=0 calls=0
*/
void sub_57310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57310ULL || rel >= 0x57320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057320 size=32 callers=0 calls=0
*/
void sub_57320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57320ULL || rel >= 0x57340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057340 size=32 callers=0 calls=0
*/
void sub_57340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57340ULL || rel >= 0x57360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057360 size=16 callers=0 calls=0
*/
void sub_57360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57360ULL || rel >= 0x57370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057370 size=16 callers=0 calls=0
*/
void sub_57370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57370ULL || rel >= 0x57380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057380 size=32 callers=0 calls=0
*/
void sub_57380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57380ULL || rel >= 0x573a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000573a0 size=32 callers=0 calls=0
*/
void sub_573a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573a0ULL || rel >= 0x573c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000573c0 size=16 callers=0 calls=0
*/
void sub_573c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573c0ULL || rel >= 0x573d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000573d0 size=16 callers=0 calls=0
*/
void sub_573d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573d0ULL || rel >= 0x573e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000573e0 size=32 callers=0 calls=0
*/
void sub_573e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573e0ULL || rel >= 0x57400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057400 size=32 callers=0 calls=0
*/
void sub_57400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57400ULL || rel >= 0x57420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057420 size=16 callers=0 calls=0
*/
void sub_57420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57420ULL || rel >= 0x57430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057430 size=16 callers=0 calls=0
*/
void sub_57430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57430ULL || rel >= 0x57440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057440 size=16 callers=0 calls=0
*/
void sub_57440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57440ULL || rel >= 0x57450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057450 size=16 callers=0 calls=0
*/
void sub_57450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57450ULL || rel >= 0x57460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057460 size=32 callers=0 calls=0
*/
void sub_57460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57460ULL || rel >= 0x57480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057480 size=32 callers=0 calls=0
*/
void sub_57480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57480ULL || rel >= 0x574a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000574a0 size=16 callers=0 calls=0
*/
void sub_574a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574a0ULL || rel >= 0x574b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000574b0 size=16 callers=0 calls=0
*/
void sub_574b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574b0ULL || rel >= 0x574c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000574c0 size=16 callers=0 calls=0
*/
void sub_574c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574c0ULL || rel >= 0x574d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000574d0 size=16 callers=0 calls=0
*/
void sub_574d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574d0ULL || rel >= 0x574e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000574e0 size=16 callers=0 calls=0
*/
void sub_574e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574e0ULL || rel >= 0x574f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000574f0 size=16 callers=0 calls=0
*/
void sub_574f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574f0ULL || rel >= 0x57500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057500 size=16 callers=0 calls=0
*/
void sub_57500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57500ULL || rel >= 0x57510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057510 size=16 callers=0 calls=0
*/
void sub_57510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57510ULL || rel >= 0x57520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057520 size=32 callers=0 calls=0
*/
void sub_57520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57520ULL || rel >= 0x57540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057540 size=32 callers=0 calls=0
*/
void sub_57540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57540ULL || rel >= 0x57560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057560 size=16 callers=0 calls=0
*/
void sub_57560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57560ULL || rel >= 0x57570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057570 size=16 callers=0 calls=0
*/
void sub_57570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57570ULL || rel >= 0x57580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057580 size=16 callers=0 calls=0
*/
void sub_57580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57580ULL || rel >= 0x57590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057590 size=16 callers=0 calls=0
*/
void sub_57590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57590ULL || rel >= 0x575a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000575a0 size=16 callers=0 calls=0
*/
void sub_575a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x575a0ULL || rel >= 0x575b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000575b0 size=16 callers=0 calls=0
*/
void sub_575b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x575b0ULL || rel >= 0x575c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000575c0 size=96 callers=0 calls=0
*/
void sub_575c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x575c0ULL || rel >= 0x57620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057620 size=96 callers=0 calls=0
*/
void sub_57620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57620ULL || rel >= 0x57680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057680 size=96 callers=0 calls=0
*/
void sub_57680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57680ULL || rel >= 0x576e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000576e0 size=96 callers=0 calls=0
*/
void sub_576e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576e0ULL || rel >= 0x57740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057740 size=96 callers=0 calls=0
*/
void sub_57740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57740ULL || rel >= 0x577a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000577a0 size=96 callers=0 calls=0
*/
void sub_577a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x577a0ULL || rel >= 0x57800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057800 size=96 callers=0 calls=0
*/
void sub_57800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57800ULL || rel >= 0x57860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057860 size=96 callers=0 calls=0
*/
void sub_57860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57860ULL || rel >= 0x578c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000578c0 size=16 callers=0 calls=0
*/
void sub_578c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578c0ULL || rel >= 0x578d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000578d0 size=16 callers=0 calls=0
*/
void sub_578d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578d0ULL || rel >= 0x578e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000578e0 size=240 callers=0 calls=4
   calls: NonTrackedAlloc_57, sub_41410, sub_41430, sub_579d0
*/
void sub_578e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578e0ULL || rel >= 0x579d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000579d0 size=144 callers=2 calls=1
   calls: NonTrackedAlloc_56
*/
void sub_579d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x579d0ULL || rel >= 0x57a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057a60 size=240 callers=0 calls=4
   calls: NonTrackedAlloc_57, sub_41410, sub_41430, sub_579d0
*/
void sub_57a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57a60ULL || rel >= 0x57b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057b50 size=192 callers=0 calls=1
   calls: sub_43a40
*/
void sub_57b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b50ULL || rel >= 0x57c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057c10 size=192 callers=0 calls=1
   calls: sub_43a40
*/
void sub_57c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c10ULL || rel >= 0x57cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057cd0 size=16 callers=0 calls=0
*/
void sub_57cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57cd0ULL || rel >= 0x57ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057ce0 size=16 callers=0 calls=0
*/
void sub_57ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57ce0ULL || rel >= 0x57cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057cf0 size=80 callers=0 calls=1
   calls: sub_456e0
*/
void sub_57cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57cf0ULL || rel >= 0x57d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057d40 size=80 callers=0 calls=1
   calls: sub_456e0
*/
void sub_57d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d40ULL || rel >= 0x57d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057d90 size=112 callers=0 calls=1
   calls: sub_300c80
*/
void sub_57d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d90ULL || rel >= 0x57e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057e00 size=96 callers=0 calls=1
   calls: sub_300c80
*/
void sub_57e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57e00ULL || rel >= 0x57e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057e60 size=1232 callers=0 calls=8
   calls: NonTrackedAlloc_44, NonTrackedAlloc_58, NonTrackedAlloc_59, NonTrackedAlloc_60, NonTrackedAlloc_63, sub_300c80, sub_58330, sub_59500
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_49(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57e60ULL || rel >= 0x58330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058330 size=224 callers=2 calls=1
   calls: NonTrackedAlloc_58
*/
void sub_58330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58330ULL || rel >= 0x58410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058410 size=16 callers=0 calls=0
*/
void sub_58410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58410ULL || rel >= 0x58420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058420 size=32 callers=0 calls=0
*/
void sub_58420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58420ULL || rel >= 0x58440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058440 size=80 callers=0 calls=2
   calls: sub_415d0, sub_53030
*/
void sub_58440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58440ULL || rel >= 0x58490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058490 size=32 callers=0 calls=0
*/
void sub_58490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58490ULL || rel >= 0x584b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000584b0 size=80 callers=0 calls=2
   calls: sub_415d0, sub_53030
*/
void sub_584b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584b0ULL || rel >= 0x58500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058500 size=224 callers=2 calls=1
   calls: NonTrackedAlloc_47
*/
void sub_58500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58500ULL || rel >= 0x585e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000585e0 size=192 callers=1 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x585e0ULL || rel >= 0x586a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000586a0 size=240 callers=1 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_51(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x586a0ULL || rel >= 0x58790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058790 size=240 callers=6 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_52(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58790ULL || rel >= 0x58880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058880 size=192 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_53(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58880ULL || rel >= 0x58940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058940 size=240 callers=1 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_54(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58940ULL || rel >= 0x58a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058a30 size=240 callers=1 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_55(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58a30ULL || rel >= 0x58b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058b20 size=224 callers=1 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_56(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58b20ULL || rel >= 0x58c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058c00 size=288 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_57(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58c00ULL || rel >= 0x58d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058d20 size=304 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58d20ULL || rel >= 0x58e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058e50 size=368 callers=1 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_59(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58e50ULL || rel >= 0x58fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058fc0 size=320 callers=3 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58fc0ULL || rel >= 0x59100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059100 size=304 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_61(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59100ULL || rel >= 0x59230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059230 size=64 callers=1 calls=1
   calls: NonTrackedAlloc_48
*/
void sub_59230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59230ULL || rel >= 0x59270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059270 size=304 callers=3 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_62(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59270ULL || rel >= 0x593a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000593a0 size=352 callers=1 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_63(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x593a0ULL || rel >= 0x59500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059500 size=608 callers=1 calls=3
   calls: NonTrackedAlloc_36, sub_300c80, sub_55af0
*/
void sub_59500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59500ULL || rel >= 0x59760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059760 size=16 callers=1 calls=0
*/
void sub_59760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59760ULL || rel >= 0x59770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059770 size=16 callers=2 calls=0
*/
void sub_59770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59770ULL || rel >= 0x59780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059780 size=16 callers=2 calls=0
*/
void sub_59780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59780ULL || rel >= 0x59790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059790 size=80 callers=1 calls=1
   calls: sub_63f60
*/
void sub_59790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59790ULL || rel >= 0x597e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000597e0 size=64 callers=2 calls=0
*/
void sub_597e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x597e0ULL || rel >= 0x59820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059820 size=16 callers=1 calls=0
*/
void sub_59820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59820ULL || rel >= 0x59830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059830 size=16 callers=1 calls=0
*/
void sub_59830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59830ULL || rel >= 0x59840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059840 size=16 callers=1 calls=0
*/
void sub_59840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59840ULL || rel >= 0x59850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059850 size=4064 callers=2 calls=1
   calls: sub_5a830
*/
void sub_59850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59850ULL || rel >= 0x5a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005a830 size=816 callers=6 calls=0
*/
void sub_5a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a830ULL || rel >= 0x5ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005ab60 size=1248 callers=4 calls=0
*/
void sub_5ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ab60ULL || rel >= 0x5b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005b040 size=3536 callers=3 calls=1
   calls: sub_5a830
*/
void sub_5b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b040ULL || rel >= 0x5be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005be10 size=1216 callers=1 calls=0
*/
void sub_5be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be10ULL || rel >= 0x5c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005c2d0 size=1152 callers=1 calls=0
*/
void sub_5c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c2d0ULL || rel >= 0x5c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005c750 size=2544 callers=0 calls=0
*/
void sub_5c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c750ULL || rel >= 0x5d140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005d140 size=976 callers=2 calls=0
*/
void sub_5d140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d140ULL || rel >= 0x5d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005d510 size=1696 callers=2 calls=0
*/
void sub_5d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d510ULL || rel >= 0x5dbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005dbb0 size=432 callers=0 calls=2
   calls: sub_5ab60, sub_63b90
*/
void sub_5dbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dbb0ULL || rel >= 0x5dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005dd60 size=8672 callers=3 calls=1
   calls: sub_5a830
*/
void sub_5dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd60ULL || rel >= 0x5ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005ff40 size=768 callers=2 calls=2
   calls: sub_60240, sub_60490
*/
void sub_5ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ff40ULL || rel >= 0x60240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060240 size=592 callers=3 calls=0
*/
void sub_60240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60240ULL || rel >= 0x60490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060490 size=992 callers=2 calls=0
*/
void sub_60490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60490ULL || rel >= 0x60870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060870 size=1920 callers=0 calls=10
   calls: sub_59850, sub_5ab60, sub_5b040, sub_5be10, sub_5c2d0, sub_5dd60, sub_5ff40, sub_60ff0, sub_613e0, sub_617d0
*/
void sub_60870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60870ULL || rel >= 0x60ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060ff0 size=1008 callers=2 calls=0
*/
void sub_60ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60ff0ULL || rel >= 0x613e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000613e0 size=1008 callers=1 calls=0
*/
void sub_613e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x613e0ULL || rel >= 0x617d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000617d0 size=1968 callers=1 calls=5
   calls: DyArticulationHelper, DyArticulationHelper_2, NonTrackedAlloc_3, sub_12160, sub_631a0
*/
void sub_617d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x617d0ULL || rel >= 0x61f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061f80 size=704 callers=0 calls=3
   calls: sub_5b040, sub_5dd60, sub_5ff40
*/
void sub_61f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f80ULL || rel >= 0x62240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00062240 size=3056 callers=0 calls=6
   calls: sub_59850, sub_5ab60, sub_60240, sub_60490, sub_60ff0, sub_63b90
*/
void sub_62240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62240ULL || rel >= 0x62e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00062e30 size=432 callers=3 calls=3
   calls: sub_3007d0, sub_3007e0, sub_5d510
   ref: Warning: articulation ill-conditioned or under severe stress, joint limit ignored
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelDyn
*/
void DyArticulationHelper(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62e30ULL || rel >= 0x62fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00062fe0 size=448 callers=1 calls=3
   calls: sub_3007d0, sub_3007e0, sub_5d510
   ref: Warning: articulation ill-conditioned or under severe stress, tangential spring ignored
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelDyn
*/
void DyArticulationHelper_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62fe0ULL || rel >= 0x631a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000631a0 size=992 callers=3 calls=0
*/
void sub_631a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x631a0ULL || rel >= 0x63580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063580 size=416 callers=8 calls=0
*/
void sub_63580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63580ULL || rel >= 0x63720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063720 size=1136 callers=8 calls=0
*/
void sub_63720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63720ULL || rel >= 0x63b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063b90 size=976 callers=2 calls=0
*/
void sub_63b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63b90ULL || rel >= 0x63f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063f60 size=80 callers=1 calls=0
*/
void sub_63f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63f60ULL || rel >= 0x63fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063fb0 size=80 callers=1 calls=1
   calls: sub_300c80
   ref: NonTrackedAlloc
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelDyn
*/
void NonTrackedAlloc_64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63fb0ULL || rel >= 0x64000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064000 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_64000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64000ULL || rel >= 0x64050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064050 size=1920 callers=0 calls=1
   calls: sub_2ff400
*/
void sub_64050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64050ULL || rel >= 0x647d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000647d0 size=4320 callers=0 calls=2
   calls: sub_2ff400, sub_2ffef0
*/
void sub_647d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x647d0ULL || rel >= 0x658b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000658b0 size=144 callers=0 calls=0
*/
void sub_658b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658b0ULL || rel >= 0x65940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00065940 size=16 callers=1 calls=0
*/
void sub_65940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65940ULL || rel >= 0x65950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00065950 size=16 callers=0 calls=0
*/
void sub_65950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65950ULL || rel >= 0x65960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00065960 size=16 callers=0 calls=0
*/
void sub_65960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65960ULL || rel >= 0x65970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00065970 size=560 callers=5 calls=0
*/
void sub_65970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65970ULL || rel >= 0x65ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00065ba0 size=880 callers=5 calls=0
*/
void sub_65ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ba0ULL || rel >= 0x65f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00065f10 size=656 callers=5 calls=0
*/
void sub_65f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f10ULL || rel >= 0x661a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000661a0 size=496 callers=5 calls=0
*/
void sub_661a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x661a0ULL || rel >= 0x66390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066390 size=400 callers=2 calls=0
*/
void sub_66390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66390ULL || rel >= 0x66520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066520 size=128 callers=0 calls=1
   calls: sub_65970
*/
void sub_66520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66520ULL || rel >= 0x665a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000665a0 size=560 callers=0 calls=1
   calls: sub_65970
*/
void sub_665a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x665a0ULL || rel >= 0x667d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000667d0 size=160 callers=0 calls=2
   calls: sub_65970, sub_66390
*/
void sub_667d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667d0ULL || rel >= 0x66870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066870 size=128 callers=0 calls=1
   calls: sub_65ba0
*/
void sub_66870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66870ULL || rel >= 0x668f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000668f0 size=1136 callers=0 calls=1
   calls: sub_65ba0
*/
void sub_668f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x668f0ULL || rel >= 0x66d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066d60 size=352 callers=0 calls=3
   calls: sub_2ff400, sub_65ba0, sub_661a0
*/
void sub_66d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66d60ULL || rel >= 0x66ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066ec0 size=128 callers=0 calls=1
   calls: sub_65f10
*/
void sub_66ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66ec0ULL || rel >= 0x66f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066f40 size=1136 callers=0 calls=1
   calls: sub_65f10
*/
void sub_66f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f40ULL || rel >= 0x673b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000673b0 size=352 callers=0 calls=3
   calls: sub_2ff400, sub_65f10, sub_661a0
*/
void sub_673b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x673b0ULL || rel >= 0x67510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067510 size=848 callers=3 calls=2
   calls: sub_63580, sub_63720
*/
void sub_67510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67510ULL || rel >= 0x67860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067860 size=1408 callers=3 calls=2
   calls: sub_63580, sub_63720
*/
void sub_67860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67860ULL || rel >= 0x67de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067de0 size=80 callers=0 calls=1
   calls: sub_67860
*/
void sub_67de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67de0ULL || rel >= 0x67e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067e30 size=592 callers=0 calls=1
   calls: sub_67860
*/
void sub_67e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67e30ULL || rel >= 0x68080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068080 size=288 callers=0 calls=3
   calls: sub_2ff400, sub_661a0, sub_67860
*/
void sub_68080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68080ULL || rel >= 0x681a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000681a0 size=64 callers=0 calls=1
   calls: sub_67510
*/
void sub_681a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x681a0ULL || rel >= 0x681e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000681e0 size=336 callers=0 calls=1
   calls: sub_67510
*/
void sub_681e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x681e0ULL || rel >= 0x68330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068330 size=64 callers=0 calls=2
   calls: sub_66390, sub_67510
*/
void sub_68330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68330ULL || rel >= 0x68370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068370 size=1056 callers=2 calls=0
*/
void sub_68370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68370ULL || rel >= 0x68790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068790 size=800 callers=0 calls=0
*/
void sub_68790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68790ULL || rel >= 0x68ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068ab0 size=16 callers=0 calls=0
*/
void sub_68ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ab0ULL || rel >= 0x68ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068ac0 size=1648 callers=2 calls=0
*/
void sub_68ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ac0ULL || rel >= 0x69130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069130 size=16 callers=0 calls=0
*/
void sub_69130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69130ULL || rel >= 0x69140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069140 size=992 callers=2 calls=0
*/
void sub_69140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69140ULL || rel >= 0x69520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069520 size=448 callers=0 calls=1
   calls: sub_68ac0
*/
void sub_69520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69520ULL || rel >= 0x696e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000696e0 size=400 callers=0 calls=1
   calls: sub_69140
*/
void sub_696e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696e0ULL || rel >= 0x69870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069870 size=272 callers=0 calls=3
   calls: sub_2ff400, sub_68370, sub_68ac0
*/
void sub_69870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69870ULL || rel >= 0x69980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069980 size=272 callers=0 calls=3
   calls: sub_2ff400, sub_68370, sub_69140
*/
void sub_69980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69980ULL || rel >= 0x69a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069a90 size=16 callers=0 calls=0
*/
void sub_69a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a90ULL || rel >= 0x69aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069aa0 size=864 callers=2 calls=0
*/
void sub_69aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69aa0ULL || rel >= 0x69e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069e00 size=112 callers=0 calls=1
   calls: sub_69aa0
*/
void sub_69e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e00ULL || rel >= 0x69e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069e70 size=48 callers=0 calls=1
   calls: sub_69aa0
*/
void sub_69e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e70ULL || rel >= 0x69ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069ea0 size=112 callers=0 calls=0
*/
void sub_69ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69ea0ULL || rel >= 0x69f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069f10 size=80 callers=2 calls=1
   calls: sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelDyn
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_65(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f10ULL || rel >= 0x69f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069f60 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_69f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69f60ULL || rel >= 0x69fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069fb0 size=3920 callers=0 calls=1
   calls: sub_2ff400
*/
void sub_69fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69fb0ULL || rel >= 0x6af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006af00 size=7808 callers=0 calls=2
   calls: sub_2ff400, sub_2ffef0
*/
void sub_6af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6af00ULL || rel >= 0x6cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006cd80 size=144 callers=0 calls=0
*/
void sub_6cd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd80ULL || rel >= 0x6ce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ce10 size=16 callers=0 calls=0
*/
void sub_6ce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce10ULL || rel >= 0x6ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ce20 size=512 callers=3 calls=0
*/
void sub_6ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce20ULL || rel >= 0x6d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006d020 size=592 callers=2 calls=0
*/
void sub_6d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d020ULL || rel >= 0x6d270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006d270 size=352 callers=3 calls=0
*/
void sub_6d270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d270ULL || rel >= 0x6d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006d3d0 size=416 callers=2 calls=0
*/
void sub_6d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3d0ULL || rel >= 0x6d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006d570 size=432 callers=3 calls=0
*/
void sub_6d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d570ULL || rel >= 0x6d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006d720 size=64 callers=0 calls=1
   calls: sub_6d020
*/
void sub_6d720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d720ULL || rel >= 0x6d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006d760 size=64 callers=0 calls=1
   calls: sub_6d020
*/
void sub_6d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d760ULL || rel >= 0x6d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006d7a0 size=64 callers=0 calls=1
   calls: sub_6d3d0
*/
void sub_6d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7a0ULL || rel >= 0x6d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006d7e0 size=64 callers=0 calls=1
   calls: sub_6d3d0
*/
void sub_6d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7e0ULL || rel >= 0x6d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006d820 size=64 callers=0 calls=1
   calls: sub_6ce20
*/
void sub_6d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d820ULL || rel >= 0x6d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006d860 size=384 callers=0 calls=1
   calls: sub_6ce20
*/
void sub_6d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d860ULL || rel >= 0x6d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006d9e0 size=240 callers=0 calls=3
   calls: sub_2ff400, sub_6ce20, sub_6d570
*/
void sub_6d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9e0ULL || rel >= 0x6dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006dad0 size=64 callers=0 calls=1
   calls: sub_6d270
*/
void sub_6dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dad0ULL || rel >= 0x6db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006db10 size=384 callers=0 calls=1
   calls: sub_6d270
*/
void sub_6db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db10ULL || rel >= 0x6dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006dc90 size=240 callers=0 calls=3
   calls: sub_2ff400, sub_6d270, sub_6d570
*/
void sub_6dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc90ULL || rel >= 0x6dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006dd80 size=992 callers=3 calls=2
   calls: sub_63580, sub_63720
*/
void sub_6dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd80ULL || rel >= 0x6e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e160 size=1008 callers=2 calls=2
   calls: sub_63580, sub_63720
*/
void sub_6e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e160ULL || rel >= 0x6e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e550 size=64 callers=0 calls=1
   calls: sub_6e160
*/
void sub_6e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e550ULL || rel >= 0x6e590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e590 size=64 callers=0 calls=1
   calls: sub_6e160
*/
void sub_6e590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e590ULL || rel >= 0x6e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e5d0 size=64 callers=0 calls=1
   calls: sub_6dd80
*/
void sub_6e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e5d0ULL || rel >= 0x6e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e610 size=384 callers=0 calls=1
   calls: sub_6dd80
*/
void sub_6e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e610ULL || rel >= 0x6e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e790 size=288 callers=0 calls=3
   calls: sub_2ff400, sub_6d570, sub_6dd80
*/
void sub_6e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e790ULL || rel >= 0x6e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e8b0 size=944 callers=2 calls=0
*/
void sub_6e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e8b0ULL || rel >= 0x6ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ec60 size=16 callers=0 calls=0
*/
void sub_6ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ec60ULL || rel >= 0x6ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ec70 size=960 callers=2 calls=0
*/
void sub_6ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ec70ULL || rel >= 0x6f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f030 size=528 callers=0 calls=0
*/
void sub_6f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f030ULL || rel >= 0x6f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f240 size=256 callers=0 calls=1
   calls: sub_6ec70
*/
void sub_6f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f240ULL || rel >= 0x6f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f340 size=752 callers=0 calls=0
*/
void sub_6f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f340ULL || rel >= 0x6f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f630 size=272 callers=0 calls=3
   calls: sub_2ff400, sub_6e8b0, sub_6ec70
*/
void sub_6f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f630ULL || rel >= 0x6f740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f740 size=784 callers=0 calls=2
   calls: sub_2ff400, sub_6e8b0
*/
void sub_6f740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f740ULL || rel >= 0x6fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006fa50 size=16 callers=0 calls=0
*/
void sub_6fa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fa50ULL || rel >= 0x6fa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006fa60 size=992 callers=0 calls=0
*/
void sub_6fa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fa60ULL || rel >= 0x6fe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006fe40 size=16 callers=0 calls=0
*/
void sub_6fe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fe40ULL || rel >= 0x6fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006fe50 size=592 callers=0 calls=0
*/
void sub_6fe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fe50ULL || rel >= 0x700a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000700a0 size=16 callers=0 calls=0
*/
void sub_700a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700a0ULL || rel >= 0x700b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000700b0 size=16 callers=0 calls=0
*/
void sub_700b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700b0ULL || rel >= 0x700c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000700c0 size=16 callers=0 calls=0
*/
void sub_700c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700c0ULL || rel >= 0x700d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000700d0 size=16 callers=0 calls=0
*/
void sub_700d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700d0ULL || rel >= 0x700e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000700e0 size=256 callers=1 calls=2
   calls: NonTrackedAlloc_67, sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelDyn
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_66(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700e0ULL || rel >= 0x701e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000701e0 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_701e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701e0ULL || rel >= 0x70230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070230 size=144 callers=1 calls=3
   calls: sub_2ff8f0, sub_2ff9b0, sub_7c590
*/
void sub_70230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70230ULL || rel >= 0x702c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000702c0 size=1536 callers=1 calls=8
   calls: NonTrackedAlloc_64, NonTrackedAlloc_65, sub_2ff8d0, sub_2ffa10, sub_300c80, sub_300cb0, sub_70b40, sub_73c70
   ref: ./../../LowLevelDynamics/include\DyContext.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SListImpl>::getName() [T = phys
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelDyn
   ref: NonTrackedAlloc
   ref: ./../../../../PxShared/src/foundation/include\PsSList.h
*/
void NonTrackedAlloc_67(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x702c0ULL || rel >= 0x708c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000708c0 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_708c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x708c0ULL || rel >= 0x70910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070910 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_70910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70910ULL || rel >= 0x70960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070960 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_70960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70960ULL || rel >= 0x709b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000709b0 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_709b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x709b0ULL || rel >= 0x70a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070a00 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_70a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70a00ULL || rel >= 0x70a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070a50 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_70a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70a50ULL || rel >= 0x70aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070aa0 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_70aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70aa0ULL || rel >= 0x70af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070af0 size=80 callers=3 calls=1
   calls: sub_300c80
*/
void sub_70af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70af0ULL || rel >= 0x70b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070b40 size=176 callers=3 calls=5
   calls: sub_1f3910, sub_2ff8e0, sub_2ff950, sub_300c80, sub_7b220
*/
void sub_70b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b40ULL || rel >= 0x70bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070bf0 size=1120 callers=1 calls=13
   calls: sub_2bb600, sub_300c80, sub_708c0, sub_70910, sub_70960, sub_709b0, sub_70a00, sub_70a50, sub_70aa0, sub_70af0, sub_70b40, sub_73c70
   ... +1 more
*/
void sub_70bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70bf0ULL || rel >= 0x71050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071050 size=48 callers=0 calls=1
   calls: sub_70bf0
*/
void sub_71050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71050ULL || rel >= 0x71080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071080 size=432 callers=2 calls=1
   calls: sub_59780
*/
void sub_71080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71080ULL || rel >= 0x71230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071230 size=336 callers=1 calls=0
*/
void sub_71230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71230ULL || rel >= 0x71380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071380 size=960 callers=1 calls=3
   calls: NonTrackedAlloc_76, PsSwitchMutex, sub_2ff4c0
*/
void sub_71380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71380ULL || rel >= 0x71740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071740 size=2304 callers=0 calls=18
   calls: NonTrackedAlloc_76, PsArray_138, PsArray_28, PsArray_58, PsArray_59, PsArray_60, PsArray_61, PsArray_62, PsArray_63, PsArray_64, PsArray_65, PsArray_66
   ... +6 more
*/
void sub_71740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71740ULL || rel >= 0x72040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00072040 size=192 callers=1 calls=1
   calls: PsArray_59
*/
void sub_72040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72040ULL || rel >= 0x72100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00072100 size=352 callers=1 calls=1
   calls: PsArray_60
*/
void sub_72100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72100ULL || rel >= 0x72260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00072260 size=16 callers=0 calls=0
*/
void sub_72260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72260ULL || rel >= 0x72270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00072270 size=208 callers=0 calls=2
   calls: sub_2ff8f0, sub_2ff9b0
*/
void sub_72270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72270ULL || rel >= 0x72340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00072340 size=1152 callers=0 calls=2
   calls: sub_2ff420, sub_7c7f0
*/
void sub_72340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72340ULL || rel >= 0x727c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000727c0 size=608 callers=1 calls=3
   calls: NonTrackedAlloc_76, PsSwitchMutex, sub_2ff4c0
*/
void sub_727c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x727c0ULL || rel >= 0x72a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00072a20 size=3488 callers=1 calls=1
   calls: sub_2ff400
*/
void sub_72a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72a20ULL || rel >= 0x737c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000737c0 size=992 callers=0 calls=3
   calls: NonTrackedAlloc_76, PsSwitchMutex, sub_2ff4c0
*/
void sub_737c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x737c0ULL || rel >= 0x73ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073ba0 size=16 callers=0 calls=0
*/
void sub_73ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73ba0ULL || rel >= 0x73bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073bb0 size=16 callers=0 calls=0
*/
void sub_73bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73bb0ULL || rel >= 0x73bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073bc0 size=16 callers=0 calls=0
*/
void sub_73bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73bc0ULL || rel >= 0x73bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073bd0 size=32 callers=0 calls=0
*/
void sub_73bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73bd0ULL || rel >= 0x73bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073bf0 size=16 callers=0 calls=0
   ref: PxsDynamics.preIntegrate
*/
void PxsDynamics_preIntegrate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73bf0ULL || rel >= 0x73c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073c00 size=32 callers=0 calls=0
*/
void sub_73c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c00ULL || rel >= 0x73c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073c20 size=16 callers=0 calls=0
   ref: PxsDynamics.solverCreateFinalizeConstraints
*/
void PxsDynamics_solverCreateFinalizeConstraints(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c20ULL || rel >= 0x73c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073c30 size=64 callers=1 calls=1
   calls: sub_300c80
*/
void sub_73c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c30ULL || rel >= 0x73c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073c70 size=320 callers=3 calls=3
   calls: sub_300c80, sub_73c30, sub_73dc0
*/
void sub_73c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c70ULL || rel >= 0x73db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073db0 size=16 callers=0 calls=0
*/
void sub_73db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73db0ULL || rel >= 0x73dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073dc0 size=64 callers=1 calls=0
*/
void sub_73dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73dc0ULL || rel >= 0x73e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073e00 size=32 callers=0 calls=0
*/
void sub_73e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73e00ULL || rel >= 0x73e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073e20 size=16 callers=0 calls=0
   ref: PxsDynamics.solverStart
*/
void PxsDynamics_solverStart(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73e20ULL || rel >= 0x73e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073e30 size=144 callers=0 calls=3
   calls: PxcThreadCoherentCache_4, sub_727c0, sub_74320
*/
void sub_73e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73e30ULL || rel >= 0x73ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073ec0 size=1120 callers=1 calls=7
   calls: PsSortInternals_6, PsSort_2, sub_2ff950, sub_300c80, sub_300cb0, sub_7c1c0, sub_7c4f0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Dy::ThreadContext>::getName() [T = phys
   ref: ./../../LowLevel/common/include/utils\PxcThreadCoherentCache.h
*/
void PxcThreadCoherentCache_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73ec0ULL || rel >= 0x74320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00074320 size=2480 callers=1 calls=10
   calls: NonTrackedAlloc_76, PsArray_138, PsArray_55, PsArray_56, PsSortInternals_7, PsSortInternals_8, PsSwitchMutex, sub_2ff4c0, sub_71080, sub_71230
*/
void sub_74320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74320ULL || rel >= 0x74cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00074cd0 size=368 callers=0 calls=3
   calls: NonTrackedAlloc_76, PsSwitchMutex, sub_2ff4c0
*/
void sub_74cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74cd0ULL || rel >= 0x74e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00074e40 size=2192 callers=1 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxsIndexedContactManager>::getName() [T
*/
void PsSortInternals_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74e40ULL || rel >= 0x756d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000756d0 size=1600 callers=1 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxSolverConstraintDesc>::getName() [T =
*/
void PsSortInternals_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756d0ULL || rel >= 0x75d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00075d10 size=352 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<const physx::PxsIndexedContactManager *>::getN
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_55(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d10ULL || rel >= 0x75e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00075e70 size=1440 callers=1 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: static const char *physx::shdfnd::ReflectionAllocator<const physx::PxsIndexedContactManager *>::getN
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e70ULL || rel >= 0x76410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076410 size=480 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Dy::CompoundContactManager>::getName() 
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_56(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76410ULL || rel >= 0x765f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000765f0 size=32 callers=0 calls=0
*/
void sub_765f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765f0ULL || rel >= 0x76610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076610 size=16 callers=0 calls=0
   ref: PxsDynamics.solverConstraintPostProcess
*/
void PxsDynamics_solverConstraintPostProcess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76610ULL || rel >= 0x76620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076620 size=272 callers=0 calls=5
   calls: sub_2ff950, sub_300c80, sub_300cb0, sub_76730, sub_7c1c0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Dy::ThreadContext>::getName() [T = phys
   ref: ./../../LowLevel/common/include/utils\PxcThreadCoherentCache.h
*/
void PxcThreadCoherentCache_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76620ULL || rel >= 0x76730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076730 size=2112 callers=1 calls=4
   calls: NonTrackedAlloc_3, PxcNpContactPrepShared, sub_12160, sub_76f70
*/
void sub_76730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76730ULL || rel >= 0x76f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076f70 size=2576 callers=1 calls=1
   calls: PsSortInternals_9
*/
void sub_76f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f70ULL || rel >= 0x77980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077980 size=1376 callers=1 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Dy::ContactPatch *>::getName() [T = phy
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77980ULL || rel >= 0x77ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077ee0 size=32 callers=0 calls=0
*/
void sub_77ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77ee0ULL || rel >= 0x77f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077f00 size=16 callers=0 calls=0
   ref: SolverArticulationUpdateTask
*/
void SolverArticulationUpdateTask(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77f00ULL || rel >= 0x77f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077f10 size=624 callers=0 calls=6
   calls: sub_2ff420, sub_2ff8f0, sub_2ff950, sub_300c80, sub_300cb0, sub_7c1c0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Dy::ThreadContext>::getName() [T = phys
   ref: ./../../LowLevel/common/include/utils\PxcThreadCoherentCache.h
*/
void PxcThreadCoherentCache_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77f10ULL || rel >= 0x78180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00078180 size=32 callers=0 calls=0
*/
void sub_78180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78180ULL || rel >= 0x781a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000781a0 size=16 callers=0 calls=0
   ref: PxsDynamics.solverEnd
*/
void PxsDynamics_solverEnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781a0ULL || rel >= 0x781b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000781b0 size=528 callers=0 calls=1
   calls: sub_12190
*/
void sub_781b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781b0ULL || rel >= 0x783c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000783c0 size=32 callers=0 calls=0
*/
void sub_783c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x783c0ULL || rel >= 0x783e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000783e0 size=16 callers=0 calls=0
   ref: PxsDynamics.solverSetupSolve
*/
void PxsDynamics_solverSetupSolve(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x783e0ULL || rel >= 0x783f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000783f0 size=5984 callers=0 calls=9
   calls: NonTrackedAlloc_76, PsArray_138, PsArray_58, PsArray_75, PsSwitchMutex, sub_2ff4c0, sub_2ffef0, sub_65940, sub_72a20
*/
void sub_783f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x783f0ULL || rel >= 0x79b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079b50 size=32 callers=0 calls=0
*/
void sub_79b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79b50ULL || rel >= 0x79b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079b70 size=16 callers=0 calls=0
   ref: PxsDynamics.parallelSolver
*/
void PxsDynamics_parallelSolver(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79b70ULL || rel >= 0x79b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079b80 size=192 callers=0 calls=1
   calls: sub_2ffef0
*/
void sub_79b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79b80ULL || rel >= 0x79c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079c40 size=32 callers=0 calls=0
*/
void sub_79c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79c40ULL || rel >= 0x79c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079c60 size=16 callers=0 calls=0
   ref: PxsDynamics.solverConstraintPartition
*/
void PxsDynamics_solverConstraintPartition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79c60ULL || rel >= 0x79c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079c70 size=640 callers=0 calls=1
   calls: DyConstraintPartition
*/
void sub_79c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79c70ULL || rel >= 0x79ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079ef0 size=32 callers=0 calls=0
*/
void sub_79ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79ef0ULL || rel >= 0x79f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079f10 size=16 callers=0 calls=0
   ref: PxsDynamics.createForceChangeThresholdStream
*/
void PxsDynamics_createForceChangeThresholdStream(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79f10ULL || rel >= 0x79f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079f20 size=32 callers=0 calls=0
*/
void sub_79f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79f20ULL || rel >= 0x79f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079f40 size=1152 callers=0 calls=4
   calls: NonTrackedAlloc_68, PsArray_138, PsArray_28, PsArray_57
*/
void sub_79f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79f40ULL || rel >= 0x7a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007a3c0 size=544 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../LowLevelDynamics/include\DyThresholdTable.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3c0ULL || rel >= 0x7a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007a5e0 size=608 callers=2 calls=0
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_57(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a5e0ULL || rel >= 0x7a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007a840 size=32 callers=0 calls=0
*/
void sub_7a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a840ULL || rel >= 0x7a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007a860 size=16 callers=0 calls=0
   ref: PxsDynamics.createFinalizeContacts
*/
void PxsDynamics_createFinalizeContacts(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a860ULL || rel >= 0x7a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007a870 size=2160 callers=0 calls=8
   calls: sub_2ff8f0, sub_2ff950, sub_300c80, sub_300cb0, sub_7c1c0, sub_7e3f0, sub_81ed0, sub_8b6d0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Dy::ThreadContext>::getName() [T = phys
   ref: ./../../LowLevel/common/include/utils\PxcThreadCoherentCache.h
*/
void PxcThreadCoherentCache_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a870ULL || rel >= 0x7b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007b0e0 size=16 callers=0 calls=0
*/
void sub_7b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b0e0ULL || rel >= 0x7b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007b0f0 size=144 callers=0 calls=1
   calls: sub_12160
*/
void sub_7b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b0f0ULL || rel >= 0x7b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007b180 size=128 callers=0 calls=1
   calls: sub_122c0
*/
void sub_7b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b180ULL || rel >= 0x7b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007b200 size=16 callers=0 calls=0
*/
void sub_7b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b200ULL || rel >= 0x7b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007b210 size=16 callers=0 calls=0
*/
void sub_7b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b210ULL || rel >= 0x7b220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007b220 size=560 callers=1 calls=1
   calls: sub_300c80
*/
void sub_7b220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b220ULL || rel >= 0x7b450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007b450 size=352 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxConstraintBatchHeader>::getName() [T 
*/
void PsArray_58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b450ULL || rel >= 0x7b5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007b5b0 size=336 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxSolverBody>::getName() [T = physx::Px
*/
void PsArray_59(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5b0ULL || rel >= 0x7b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007b700 size=496 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxSolverBodyData>::getName() [T = physx
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b700ULL || rel >= 0x7b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007b8f0 size=288 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxSolverConstraintDesc>::getName() [T =
*/
void PsArray_61(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8f0ULL || rel >= 0x7ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ba10 size=608 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxsIndexedContactManager>::getName() [T
*/
void PsArray_62(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ba10ULL || rel >= 0x7bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007bc70 size=304 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Cm::SpatialVector>::getName() [T = phys
*/
void PsArray_63(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc70ULL || rel >= 0x7bda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007bda0 size=352 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxsBodyCore *>::getName() [T = physx::P
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bda0ULL || rel >= 0x7bf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007bf00 size=352 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxsRigidBody *>::getName() [T = physx::
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_65(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf00ULL || rel >= 0x7c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c060 size=352 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Dy::Articulation *>::getName() [T = phy
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_66(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c060ULL || rel >= 0x7c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c1c0 size=816 callers=4 calls=2
   calls: PsArray_138, sub_300c80
*/
void sub_7c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c1c0ULL || rel >= 0x7c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c4f0 size=160 callers=1 calls=2
   calls: PsArray_67, PsArray_68
*/
void sub_7c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c4f0ULL || rel >= 0x7c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c590 size=64 callers=1 calls=0
*/
void sub_7c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c590ULL || rel >= 0x7c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c5d0 size=272 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxSolverConstraintDesc>::getName() [T =
*/
void PsArray_67(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5d0ULL || rel >= 0x7c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c6e0 size=272 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Dy::ArticulationSolverDesc>::getName() 
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c6e0ULL || rel >= 0x7c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c7f0 size=704 callers=3 calls=0
*/
void sub_7c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c7f0ULL || rel >= 0x7cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007cab0 size=1584 callers=5 calls=1
   calls: sub_7d0e0
*/
void sub_7cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cab0ULL || rel >= 0x7d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007d0e0 size=2848 callers=2 calls=0
*/
void sub_7d0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0e0ULL || rel >= 0x7dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007dc00 size=2032 callers=1 calls=4
   calls: sub_7cab0, sub_7e540, sub_7e6a0, sub_7e770
*/
void sub_7dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc00ULL || rel >= 0x7e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007e3f0 size=336 callers=1 calls=1
   calls: sub_7dc00
*/
void sub_7e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e3f0ULL || rel >= 0x7e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007e540 size=192 callers=4 calls=0
*/
void sub_7e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e540ULL || rel >= 0x7e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007e600 size=80 callers=4 calls=0
*/
void sub_7e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e600ULL || rel >= 0x7e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007e650 size=80 callers=2 calls=0
*/
void sub_7e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e650ULL || rel >= 0x7e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

