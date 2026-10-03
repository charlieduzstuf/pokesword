/* main functions 00636450..00658d20 (41 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00636450 size=16 callers=0 calls=0
*/
void sub_636450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636450ULL || rel >= 0x636460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636460 size=32 callers=0 calls=0
*/
void sub_636460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636460ULL || rel >= 0x636480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636480 size=16 callers=0 calls=0
*/
void sub_636480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636480ULL || rel >= 0x636490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636490 size=32 callers=0 calls=0
*/
void sub_636490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636490ULL || rel >= 0x6364b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006364b0 size=32 callers=0 calls=0
*/
void sub_6364b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6364b0ULL || rel >= 0x6364d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006364d0 size=240 callers=0 calls=0
*/
void sub_6364d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6364d0ULL || rel >= 0x6365c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006365c0 size=240 callers=0 calls=0
*/
void sub_6365c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6365c0ULL || rel >= 0x6366b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006366b0 size=80 callers=0 calls=0
*/
void sub_6366b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6366b0ULL || rel >= 0x636700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636700 size=64 callers=0 calls=0
*/
void sub_636700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636700ULL || rel >= 0x636740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636740 size=32 callers=0 calls=0
*/
void sub_636740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636740ULL || rel >= 0x636760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636760 size=16 callers=0 calls=0
*/
void sub_636760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636760ULL || rel >= 0x636770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636770 size=16 callers=0 calls=0
*/
void sub_636770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636770ULL || rel >= 0x636780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636780 size=16 callers=0 calls=0
*/
void sub_636780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636780ULL || rel >= 0x636790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636790 size=16 callers=0 calls=0
*/
void sub_636790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636790ULL || rel >= 0x6367a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006367a0 size=16 callers=0 calls=0
*/
void sub_6367a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6367a0ULL || rel >= 0x6367b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006367b0 size=16 callers=0 calls=0
*/
void sub_6367b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6367b0ULL || rel >= 0x6367c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006367c0 size=16 callers=0 calls=0
*/
void sub_6367c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6367c0ULL || rel >= 0x6367d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006367d0 size=16 callers=0 calls=0
*/
void sub_6367d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6367d0ULL || rel >= 0x6367e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006367e0 size=16 callers=0 calls=0
*/
void sub_6367e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6367e0ULL || rel >= 0x6367f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006367f0 size=16 callers=0 calls=0
*/
void sub_6367f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6367f0ULL || rel >= 0x636800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636800 size=96 callers=0 calls=1
   calls: sub_634390
*/
void sub_636800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636800ULL || rel >= 0x636860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636860 size=96 callers=0 calls=1
   calls: sub_634390
*/
void sub_636860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636860ULL || rel >= 0x6368c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006368c0 size=32 callers=0 calls=0
*/
void sub_6368c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6368c0ULL || rel >= 0x6368e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006368e0 size=16 callers=0 calls=0
*/
void sub_6368e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6368e0ULL || rel >= 0x6368f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006368f0 size=32 callers=0 calls=0
*/
void sub_6368f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6368f0ULL || rel >= 0x636910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636910 size=16 callers=0 calls=0
*/
void sub_636910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636910ULL || rel >= 0x636920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636920 size=32 callers=0 calls=0
*/
void sub_636920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636920ULL || rel >= 0x636940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636940 size=352 callers=0 calls=0
*/
void sub_636940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636940ULL || rel >= 0x636aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636aa0 size=16 callers=0 calls=0
*/
void sub_636aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636aa0ULL || rel >= 0x636ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636ab0 size=32 callers=0 calls=0
*/
void sub_636ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636ab0ULL || rel >= 0x636ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636ad0 size=16 callers=0 calls=0
*/
void sub_636ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636ad0ULL || rel >= 0x636ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636ae0 size=32 callers=0 calls=0
*/
void sub_636ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636ae0ULL || rel >= 0x636b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636b00 size=16 callers=0 calls=0
*/
void sub_636b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636b00ULL || rel >= 0x636b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636b10 size=16 callers=0 calls=0
*/
void sub_636b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636b10ULL || rel >= 0x636b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636b20 size=16 callers=0 calls=0
*/
void sub_636b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636b20ULL || rel >= 0x636b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636b30 size=32 callers=0 calls=0
*/
void sub_636b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636b30ULL || rel >= 0x636b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636b50 size=16 callers=0 calls=0
*/
void sub_636b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636b50ULL || rel >= 0x636b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636b60 size=240 callers=0 calls=0
*/
void sub_636b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636b60ULL || rel >= 0x636c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636c50 size=240 callers=0 calls=0
*/
void sub_636c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636c50ULL || rel >= 0x636d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636d40 size=80 callers=0 calls=0
*/
void sub_636d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636d40ULL || rel >= 0x636d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636d90 size=64 callers=0 calls=0
*/
void sub_636d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636d90ULL || rel >= 0x636dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636dd0 size=32 callers=0 calls=0
*/
void sub_636dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636dd0ULL || rel >= 0x636df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636df0 size=16 callers=0 calls=0
*/
void sub_636df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636df0ULL || rel >= 0x636e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636e00 size=16 callers=0 calls=0
*/
void sub_636e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636e00ULL || rel >= 0x636e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636e10 size=16 callers=0 calls=0
*/
void sub_636e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636e10ULL || rel >= 0x636e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636e20 size=16 callers=0 calls=0
*/
void sub_636e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636e20ULL || rel >= 0x636e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636e30 size=16 callers=0 calls=0
*/
void sub_636e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636e30ULL || rel >= 0x636e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636e40 size=16 callers=0 calls=0
*/
void sub_636e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636e40ULL || rel >= 0x636e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636e50 size=16 callers=0 calls=0
*/
void sub_636e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636e50ULL || rel >= 0x636e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636e60 size=16 callers=0 calls=0
*/
void sub_636e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636e60ULL || rel >= 0x636e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636e70 size=16 callers=0 calls=0
*/
void sub_636e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636e70ULL || rel >= 0x636e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636e80 size=16 callers=0 calls=0
*/
void sub_636e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636e80ULL || rel >= 0x636e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636e90 size=96 callers=0 calls=1
   calls: sub_634390
*/
void sub_636e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636e90ULL || rel >= 0x636ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636ef0 size=96 callers=0 calls=1
   calls: sub_634390
*/
void sub_636ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636ef0ULL || rel >= 0x636f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636f50 size=32 callers=0 calls=0
*/
void sub_636f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636f50ULL || rel >= 0x636f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636f70 size=16 callers=0 calls=0
*/
void sub_636f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636f70ULL || rel >= 0x636f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636f80 size=32 callers=0 calls=0
*/
void sub_636f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636f80ULL || rel >= 0x636fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636fa0 size=16 callers=0 calls=0
*/
void sub_636fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636fa0ULL || rel >= 0x636fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636fb0 size=32 callers=0 calls=0
*/
void sub_636fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636fb0ULL || rel >= 0x636fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636fd0 size=32 callers=0 calls=0
*/
void sub_636fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636fd0ULL || rel >= 0x636ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00636ff0 size=80 callers=0 calls=0
*/
void sub_636ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636ff0ULL || rel >= 0x637040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637040 size=16 callers=0 calls=0
*/
void sub_637040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637040ULL || rel >= 0x637050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637050 size=16 callers=0 calls=0
*/
void sub_637050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637050ULL || rel >= 0x637060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637060 size=240 callers=0 calls=0
*/
void sub_637060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637060ULL || rel >= 0x637150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637150 size=240 callers=0 calls=0
*/
void sub_637150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637150ULL || rel >= 0x637240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637240 size=80 callers=0 calls=0
*/
void sub_637240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637240ULL || rel >= 0x637290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637290 size=64 callers=0 calls=0
*/
void sub_637290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637290ULL || rel >= 0x6372d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006372d0 size=32 callers=0 calls=0
*/
void sub_6372d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6372d0ULL || rel >= 0x6372f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006372f0 size=16 callers=0 calls=0
*/
void sub_6372f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6372f0ULL || rel >= 0x637300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637300 size=16 callers=0 calls=0
*/
void sub_637300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637300ULL || rel >= 0x637310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637310 size=16 callers=0 calls=0
*/
void sub_637310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637310ULL || rel >= 0x637320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637320 size=16 callers=0 calls=0
*/
void sub_637320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637320ULL || rel >= 0x637330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637330 size=16 callers=0 calls=0
*/
void sub_637330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637330ULL || rel >= 0x637340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637340 size=16 callers=0 calls=0
*/
void sub_637340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637340ULL || rel >= 0x637350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637350 size=16 callers=0 calls=0
*/
void sub_637350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637350ULL || rel >= 0x637360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637360 size=16 callers=0 calls=0
*/
void sub_637360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637360ULL || rel >= 0x637370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637370 size=16 callers=0 calls=0
*/
void sub_637370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637370ULL || rel >= 0x637380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637380 size=16 callers=0 calls=0
*/
void sub_637380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637380ULL || rel >= 0x637390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637390 size=96 callers=0 calls=1
   calls: sub_634390
*/
void sub_637390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637390ULL || rel >= 0x6373f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006373f0 size=96 callers=0 calls=1
   calls: sub_634390
*/
void sub_6373f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6373f0ULL || rel >= 0x637450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637450 size=32 callers=0 calls=0
*/
void sub_637450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637450ULL || rel >= 0x637470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637470 size=16 callers=0 calls=0
*/
void sub_637470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637470ULL || rel >= 0x637480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637480 size=32 callers=0 calls=0
*/
void sub_637480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637480ULL || rel >= 0x6374a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006374a0 size=16 callers=0 calls=0
*/
void sub_6374a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6374a0ULL || rel >= 0x6374b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006374b0 size=32 callers=0 calls=0
*/
void sub_6374b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6374b0ULL || rel >= 0x6374d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006374d0 size=352 callers=0 calls=0
*/
void sub_6374d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6374d0ULL || rel >= 0x637630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637630 size=16 callers=0 calls=0
*/
void sub_637630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637630ULL || rel >= 0x637640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637640 size=32 callers=0 calls=0
*/
void sub_637640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637640ULL || rel >= 0x637660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637660 size=16 callers=0 calls=0
*/
void sub_637660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637660ULL || rel >= 0x637670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637670 size=32 callers=0 calls=0
*/
void sub_637670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637670ULL || rel >= 0x637690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637690 size=16 callers=0 calls=0
*/
void sub_637690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637690ULL || rel >= 0x6376a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006376a0 size=16 callers=0 calls=0
*/
void sub_6376a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6376a0ULL || rel >= 0x6376b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006376b0 size=16 callers=0 calls=0
*/
void sub_6376b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6376b0ULL || rel >= 0x6376c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006376c0 size=32 callers=0 calls=0
*/
void sub_6376c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6376c0ULL || rel >= 0x6376e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006376e0 size=80 callers=0 calls=0
*/
void sub_6376e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6376e0ULL || rel >= 0x637730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637730 size=16 callers=0 calls=0
*/
void sub_637730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637730ULL || rel >= 0x637740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637740 size=240 callers=0 calls=0
*/
void sub_637740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637740ULL || rel >= 0x637830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637830 size=240 callers=0 calls=0
*/
void sub_637830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637830ULL || rel >= 0x637920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637920 size=80 callers=0 calls=0
*/
void sub_637920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637920ULL || rel >= 0x637970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637970 size=64 callers=0 calls=0
*/
void sub_637970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637970ULL || rel >= 0x6379b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006379b0 size=32 callers=0 calls=0
*/
void sub_6379b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6379b0ULL || rel >= 0x6379d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006379d0 size=16 callers=0 calls=0
*/
void sub_6379d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6379d0ULL || rel >= 0x6379e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006379e0 size=16 callers=0 calls=0
*/
void sub_6379e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6379e0ULL || rel >= 0x6379f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006379f0 size=16 callers=0 calls=0
*/
void sub_6379f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6379f0ULL || rel >= 0x637a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637a00 size=16 callers=0 calls=0
*/
void sub_637a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637a00ULL || rel >= 0x637a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637a10 size=16 callers=0 calls=0
*/
void sub_637a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637a10ULL || rel >= 0x637a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637a20 size=16 callers=0 calls=0
*/
void sub_637a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637a20ULL || rel >= 0x637a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637a30 size=16 callers=0 calls=0
*/
void sub_637a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637a30ULL || rel >= 0x637a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637a40 size=16 callers=0 calls=0
*/
void sub_637a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637a40ULL || rel >= 0x637a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637a50 size=16 callers=0 calls=0
*/
void sub_637a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637a50ULL || rel >= 0x637a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637a60 size=16 callers=0 calls=0
*/
void sub_637a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637a60ULL || rel >= 0x637a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637a70 size=96 callers=0 calls=1
   calls: sub_634390
*/
void sub_637a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637a70ULL || rel >= 0x637ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637ad0 size=96 callers=0 calls=1
   calls: sub_634390
*/
void sub_637ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637ad0ULL || rel >= 0x637b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637b30 size=32 callers=0 calls=0
*/
void sub_637b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637b30ULL || rel >= 0x637b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637b50 size=16 callers=0 calls=0
*/
void sub_637b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637b50ULL || rel >= 0x637b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637b60 size=32 callers=0 calls=0
*/
void sub_637b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637b60ULL || rel >= 0x637b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637b80 size=16 callers=0 calls=0
*/
void sub_637b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637b80ULL || rel >= 0x637b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637b90 size=32 callers=0 calls=0
*/
void sub_637b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637b90ULL || rel >= 0x637bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637bb0 size=32 callers=0 calls=0
*/
void sub_637bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637bb0ULL || rel >= 0x637bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637bd0 size=16 callers=0 calls=0
*/
void sub_637bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637bd0ULL || rel >= 0x637be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637be0 size=32 callers=0 calls=0
*/
void sub_637be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637be0ULL || rel >= 0x637c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637c00 size=16 callers=0 calls=0
*/
void sub_637c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637c00ULL || rel >= 0x637c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637c10 size=16 callers=0 calls=0
*/
void sub_637c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637c10ULL || rel >= 0x637c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637c20 size=16 callers=0 calls=0
*/
void sub_637c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637c20ULL || rel >= 0x637c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637c30 size=16 callers=0 calls=0
*/
void sub_637c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637c30ULL || rel >= 0x637c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637c40 size=32 callers=0 calls=0
*/
void sub_637c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637c40ULL || rel >= 0x637c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637c60 size=16 callers=0 calls=0
*/
void sub_637c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637c60ULL || rel >= 0x637c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637c70 size=32 callers=0 calls=0
*/
void sub_637c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637c70ULL || rel >= 0x637c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637c90 size=80 callers=0 calls=0
*/
void sub_637c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637c90ULL || rel >= 0x637ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637ce0 size=16 callers=0 calls=0
*/
void sub_637ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637ce0ULL || rel >= 0x637cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637cf0 size=16 callers=0 calls=0
*/
void sub_637cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637cf0ULL || rel >= 0x637d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637d00 size=240 callers=3 calls=1
   calls: sub_603810
*/
void sub_637d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637d00ULL || rel >= 0x637df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637df0 size=80 callers=2 calls=1
   calls: sub_5e2180
*/
void sub_637df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637df0ULL || rel >= 0x637e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637e40 size=64 callers=0 calls=2
   calls: sub_5e2750, sub_5e2830
*/
void sub_637e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637e40ULL || rel >= 0x637e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00637e80 size=800 callers=4 calls=0
*/
void sub_637e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x637e80ULL || rel >= 0x6381a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006381a0 size=96 callers=0 calls=0
*/
void sub_6381a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6381a0ULL || rel >= 0x638200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00638200 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_638200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x638200ULL || rel >= 0x638270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00638270 size=96 callers=0 calls=0
*/
void sub_638270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x638270ULL || rel >= 0x6382d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006382d0 size=96 callers=0 calls=0
*/
void sub_6382d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6382d0ULL || rel >= 0x638330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00638330 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_638330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x638330ULL || rel >= 0x6383a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006383a0 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_6383a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6383a0ULL || rel >= 0x638410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00638410 size=96 callers=0 calls=0
*/
void sub_638410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x638410ULL || rel >= 0x638470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00638470 size=96 callers=0 calls=0
*/
void sub_638470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x638470ULL || rel >= 0x6384d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006384d0 size=5168 callers=1 calls=1
   calls: sub_639900
*/
void sub_6384d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6384d0ULL || rel >= 0x639900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00639900 size=1680 callers=1 calls=0
*/
void sub_639900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x639900ULL || rel >= 0x639f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00639f90 size=432 callers=5 calls=3
   calls: DefaultPath, DummyTex, sub_63b430
*/
void sub_639f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x639f90ULL || rel >= 0x63a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063a140 size=16 callers=0 calls=0
*/
void sub_63a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63a140ULL || rel >= 0x63a150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063a150 size=2016 callers=1 calls=15
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_63a9a0, sub_63af60, sub_63b0b0, sub_63b210, sub_63bf20, sub_63e320, sub_641330, sub_642770, sub_65d700
   ... +3 more
   ref: shader/primitive_renderer_shader.bnsh
   ref: DummyTex
   ref: texture/primitive_renderer_texture.bntx
*/
void DummyTex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63a150ULL || rel >= 0x63a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063a930 size=112 callers=6 calls=1
   calls: sub_63bf20
*/
void sub_63a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63a930ULL || rel >= 0x63a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063a9a0 size=1472 callers=5 calls=5
   calls: sub_5e2bc0, sub_60fdb0, sub_610520, sub_63bf20, sub_6408c0
*/
void sub_63a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63a9a0ULL || rel >= 0x63af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063af60 size=336 callers=1 calls=4
   calls: sub_60e880, sub_60eda0, sub_60f110, sub_612020
*/
void sub_63af60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63af60ULL || rel >= 0x63b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063b0b0 size=352 callers=1 calls=4
   calls: sub_5fc600, sub_611740, sub_640450, sub_682dd0
*/
void sub_63b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63b0b0ULL || rel >= 0x63b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063b210 size=544 callers=15 calls=4
   calls: sub_1c0, sub_5fc9d0, sub_611740, sub_682dd0
*/
void sub_63b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63b210ULL || rel >= 0x63b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063b430 size=1824 callers=9 calls=3
   calls: sub_63bc20, sub_63bd60, sub_682dd0
*/
void sub_63b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63b430ULL || rel >= 0x63bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063bb50 size=208 callers=2 calls=0
*/
void sub_63bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63bb50ULL || rel >= 0x63bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063bc20 size=320 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_63bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63bc20ULL || rel >= 0x63bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063bd60 size=272 callers=1 calls=1
   calls: sub_682dd0
*/
void sub_63bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63bd60ULL || rel >= 0x63be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063be70 size=48 callers=0 calls=1
   calls: sub_63b430
*/
void sub_63be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63be70ULL || rel >= 0x63bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063bea0 size=32 callers=2 calls=0
*/
void sub_63bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63bea0ULL || rel >= 0x63bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063bec0 size=16 callers=3 calls=0
*/
void sub_63bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63bec0ULL || rel >= 0x63bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063bed0 size=16 callers=3 calls=0
*/
void sub_63bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63bed0ULL || rel >= 0x63bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063bee0 size=16 callers=2 calls=0
*/
void sub_63bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63bee0ULL || rel >= 0x63bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063bef0 size=16 callers=1 calls=0
*/
void sub_63bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63bef0ULL || rel >= 0x63bf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063bf00 size=16 callers=3 calls=0
*/
void sub_63bf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63bf00ULL || rel >= 0x63bf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063bf10 size=16 callers=1 calls=0
*/
void sub_63bf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63bf10ULL || rel >= 0x63bf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063bf20 size=672 callers=4 calls=1
   calls: sub_63ebb0
*/
void sub_63bf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63bf20ULL || rel >= 0x63c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063c1c0 size=256 callers=2 calls=2
   calls: sub_63b210, sub_63bf20
*/
void sub_63c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63c1c0ULL || rel >= 0x63c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063c2c0 size=1200 callers=12 calls=5
   calls: sub_5f7110, sub_5f7120, sub_60ccb0, sub_63ef80, sub_689610
*/
void sub_63c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63c2c0ULL || rel >= 0x63c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063c770 size=720 callers=0 calls=7
   calls: sub_63ca40, sub_63f250, sub_63f450, sub_63f760, sub_63f900, sub_63fba0, sub_682dd0
*/
void sub_63c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63c770ULL || rel >= 0x63ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063ca40 size=816 callers=1 calls=8
   calls: PrimitiveRendererConstantVS, sub_1787f70, sub_1787fd0, sub_1789270, sub_5f3730, sub_5f7540, sub_63d940, sub_682dd0
*/
void sub_63ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63ca40ULL || rel >= 0x63cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063cd70 size=1088 callers=1 calls=6
   calls: sub_5cfad0, sub_5f7110, sub_5f7120, sub_5f7320, sub_60f390, sub_641110
   ref: PrimitiveRendererConstantPS
   ref: PrimitiveRendererConstantVS
*/
void PrimitiveRendererConstantVS(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63cd70ULL || rel >= 0x63d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063d1b0 size=272 callers=2 calls=0
*/
void sub_63d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63d1b0ULL || rel >= 0x63d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063d2c0 size=528 callers=0 calls=2
   calls: sub_611bd0, sub_640c00
*/
void sub_63d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63d2c0ULL || rel >= 0x63d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063d4d0 size=448 callers=1 calls=0
*/
void sub_63d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63d4d0ULL || rel >= 0x63d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063d690 size=64 callers=4 calls=1
   calls: sub_63d4d0
*/
void sub_63d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63d690ULL || rel >= 0x63d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063d6d0 size=336 callers=4 calls=4
   calls: sub_611740, sub_611bd0, sub_640690, sub_682dd0
*/
void sub_63d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63d6d0ULL || rel >= 0x63d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063d820 size=288 callers=5 calls=1
   calls: sub_5e2bc0
*/
void sub_63d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63d820ULL || rel >= 0x63d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063d940 size=560 callers=1 calls=13
   calls: sub_1788030, sub_17880f0, sub_1788210, sub_1788310, sub_17883c0, sub_17893c0, sub_1789590, sub_5f7100, sub_5fced0, sub_5fd000, sub_60d8c0, sub_60f440
   ... +1 more
*/
void sub_63d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63d940ULL || rel >= 0x63db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063db70 size=352 callers=0 calls=3
   calls: sub_600c30, sub_619770, sub_63b430
*/
void sub_63db70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63db70ULL || rel >= 0x63dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063dcd0 size=16 callers=0 calls=0
*/
void sub_63dcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63dcd0ULL || rel >= 0x63dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063dce0 size=112 callers=0 calls=1
   calls: sub_603900
*/
void sub_63dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63dce0ULL || rel >= 0x63dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063dd50 size=128 callers=0 calls=2
   calls: sub_5f8bc0, sub_5f8c40
*/
void sub_63dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63dd50ULL || rel >= 0x63ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063ddd0 size=16 callers=0 calls=0
*/
void sub_63ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63ddd0ULL || rel >= 0x63dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063dde0 size=16 callers=0 calls=0
*/
void sub_63dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63dde0ULL || rel >= 0x63ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063ddf0 size=112 callers=0 calls=1
   calls: sub_603900
*/
void sub_63ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63ddf0ULL || rel >= 0x63de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063de60 size=112 callers=0 calls=1
   calls: sub_603900
*/
void sub_63de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63de60ULL || rel >= 0x63ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063ded0 size=16 callers=0 calls=0
*/
void sub_63ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63ded0ULL || rel >= 0x63dee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063dee0 size=16 callers=0 calls=0
*/
void sub_63dee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63dee0ULL || rel >= 0x63def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063def0 size=112 callers=0 calls=1
   calls: sub_63b430
*/
void sub_63def0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63def0ULL || rel >= 0x63df60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063df60 size=112 callers=0 calls=1
   calls: sub_63b430
*/
void sub_63df60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63df60ULL || rel >= 0x63dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063dfd0 size=112 callers=0 calls=1
   calls: sub_63b430
*/
void sub_63dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63dfd0ULL || rel >= 0x63e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063e040 size=112 callers=0 calls=1
   calls: sub_63b430
*/
void sub_63e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63e040ULL || rel >= 0x63e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063e0b0 size=112 callers=0 calls=1
   calls: sub_63b430
*/
void sub_63e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63e0b0ULL || rel >= 0x63e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063e120 size=112 callers=0 calls=1
   calls: sub_63b430
*/
void sub_63e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63e120ULL || rel >= 0x63e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063e190 size=352 callers=0 calls=3
   calls: sub_5f8bc0, sub_5f8c40, sub_603900
*/
void sub_63e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63e190ULL || rel >= 0x63e2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063e2f0 size=16 callers=0 calls=0
*/
void sub_63e2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63e2f0ULL || rel >= 0x63e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063e300 size=16 callers=0 calls=0
*/
void sub_63e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63e300ULL || rel >= 0x63e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063e310 size=16 callers=0 calls=0
*/
void sub_63e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63e310ULL || rel >= 0x63e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063e320 size=2192 callers=2 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e2500, sub_5e6970, sub_5faf20, sub_df90, sub_e840
*/
void sub_63e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63e320ULL || rel >= 0x63ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063ebb0 size=272 callers=1 calls=0
*/
void sub_63ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63ebb0ULL || rel >= 0x63ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063ecc0 size=704 callers=0 calls=0
*/
void sub_63ecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63ecc0ULL || rel >= 0x63ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063ef80 size=720 callers=1 calls=0
*/
void sub_63ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63ef80ULL || rel >= 0x63f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063f250 size=512 callers=1 calls=0
*/
void sub_63f250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63f250ULL || rel >= 0x63f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063f450 size=784 callers=1 calls=0
*/
void sub_63f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63f450ULL || rel >= 0x63f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063f760 size=416 callers=1 calls=2
   calls: sub_611bd0, sub_682dd0
*/
void sub_63f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63f760ULL || rel >= 0x63f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063f900 size=672 callers=1 calls=3
   calls: sub_5fc550, sub_611bd0, sub_682dd0
*/
void sub_63f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63f900ULL || rel >= 0x63fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063fba0 size=352 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_63fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63fba0ULL || rel >= 0x63fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063fd00 size=432 callers=0 calls=2
   calls: sub_5e2bc0, sub_640200
*/
void sub_63fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63fd00ULL || rel >= 0x63feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0063feb0 size=848 callers=0 calls=2
   calls: sub_5e2bc0, sub_640200
*/
void sub_63feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63feb0ULL || rel >= 0x640200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00640200 size=464 callers=3 calls=0
*/
void sub_640200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x640200ULL || rel >= 0x6403d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006403d0 size=16 callers=0 calls=0
*/
void sub_6403d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6403d0ULL || rel >= 0x6403e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006403e0 size=16 callers=0 calls=0
*/
void sub_6403e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6403e0ULL || rel >= 0x6403f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006403f0 size=16 callers=0 calls=0
*/
void sub_6403f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6403f0ULL || rel >= 0x640400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00640400 size=16 callers=0 calls=0
*/
void sub_640400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x640400ULL || rel >= 0x640410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00640410 size=16 callers=0 calls=0
*/
void sub_640410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x640410ULL || rel >= 0x640420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00640420 size=16 callers=0 calls=0
*/
void sub_640420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x640420ULL || rel >= 0x640430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00640430 size=16 callers=0 calls=0
*/
void sub_640430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x640430ULL || rel >= 0x640440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00640440 size=16 callers=0 calls=0
*/
void sub_640440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x640440ULL || rel >= 0x640450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00640450 size=576 callers=1 calls=3
   calls: sub_5fc600, sub_611bd0, sub_682dd0
*/
void sub_640450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x640450ULL || rel >= 0x640690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00640690 size=560 callers=1 calls=2
   calls: sub_611bd0, sub_682dd0
*/
void sub_640690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x640690ULL || rel >= 0x6408c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006408c0 size=832 callers=1 calls=2
   calls: sub_5e2bc0, sub_640200
*/
void sub_6408c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6408c0ULL || rel >= 0x640c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00640c00 size=624 callers=1 calls=3
   calls: sub_611bd0, sub_640e70, sub_641010
*/
void sub_640c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x640c00ULL || rel >= 0x640e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00640e70 size=416 callers=1 calls=1
   calls: sub_611bd0
*/
void sub_640e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x640e70ULL || rel >= 0x641010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00641010 size=256 callers=1 calls=1
   calls: sub_682dd0
*/
void sub_641010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x641010ULL || rel >= 0x641110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00641110 size=544 callers=1 calls=0
*/
void sub_641110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x641110ULL || rel >= 0x641330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00641330 size=64 callers=1 calls=3
   calls: sub_641370, sub_6418a0, sub_641e30
*/
void sub_641330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x641330ULL || rel >= 0x641370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00641370 size=1328 callers=1 calls=1
   calls: sub_63c2c0
*/
void sub_641370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x641370ULL || rel >= 0x6418a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006418a0 size=1424 callers=1 calls=1
   calls: sub_63c2c0
*/
void sub_6418a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6418a0ULL || rel >= 0x641e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00641e30 size=1904 callers=1 calls=1
   calls: sub_63c2c0
*/
void sub_641e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x641e30ULL || rel >= 0x6425a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006425a0 size=464 callers=0 calls=1
   calls: sub_63c2c0
*/
void sub_6425a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6425a0ULL || rel >= 0x642770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00642770 size=944 callers=1 calls=8
   calls: sub_1787440, sub_1787490, sub_17874c0, sub_1787500, sub_178f700, sub_178fb70, sub_642bd0, sub_642d00
*/
void sub_642770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x642770ULL || rel >= 0x642b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00642b20 size=176 callers=0 calls=3
   calls: sub_178f8d0, sub_178fb40, sub_178fd20
*/
void sub_642b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x642b20ULL || rel >= 0x642bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00642bd0 size=304 callers=4 calls=2
   calls: sub_178f8e0, sub_178f910
*/
void sub_642bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x642bd0ULL || rel >= 0x642d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00642d00 size=416 callers=1 calls=3
   calls: sub_178f6e0, sub_178f8f0, sub_178fb50
*/
void sub_642d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x642d00ULL || rel >= 0x642ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00642ea0 size=128 callers=0 calls=2
   calls: sub_5f71b0, sub_6430c0
*/
void sub_642ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x642ea0ULL || rel >= 0x642f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00642f20 size=128 callers=0 calls=2
   calls: sub_5f71b0, sub_6430c0
*/
void sub_642f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x642f20ULL || rel >= 0x642fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00642fa0 size=144 callers=0 calls=2
   calls: sub_5f71b0, sub_6430c0
*/
void sub_642fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x642fa0ULL || rel >= 0x643030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00643030 size=144 callers=0 calls=2
   calls: sub_5f71b0, sub_6430c0
*/
void sub_643030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x643030ULL || rel >= 0x6430c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006430c0 size=272 callers=4 calls=3
   calls: sub_178f6f0, sub_178f900, sub_178fb60
*/
void sub_6430c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6430c0ULL || rel >= 0x6431d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006431d0 size=16 callers=0 calls=0
*/
void sub_6431d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6431d0ULL || rel >= 0x6431e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006431e0 size=16 callers=0 calls=0
*/
void sub_6431e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6431e0ULL || rel >= 0x6431f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006431f0 size=16 callers=0 calls=0
*/
void sub_6431f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6431f0ULL || rel >= 0x643200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00643200 size=16 callers=0 calls=0
*/
void sub_643200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x643200ULL || rel >= 0x643210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00643210 size=480 callers=1 calls=7
   calls: sub_5cf8c0, sub_5cf8f0, sub_5d1b50, sub_5d2010, sub_5ff5f0, sub_60bb40, sub_6433f0
*/
void sub_643210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x643210ULL || rel >= 0x6433f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006433f0 size=256 callers=1 calls=1
   calls: sub_65d700
*/
void sub_6433f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6433f0ULL || rel >= 0x6434f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006434f0 size=688 callers=0 calls=6
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2010, sub_60ac80, sub_60c0a0, sub_644cd0
*/
void sub_6434f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6434f0ULL || rel >= 0x6437a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006437a0 size=1728 callers=0 calls=6
   calls: sub_1787580, sub_17892f0, sub_17893e0, sub_5ff9b0, sub_603900, sub_644dc0
*/
void sub_6437a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6437a0ULL || rel >= 0x643e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00643e60 size=688 callers=2 calls=3
   calls: sub_61f790, sub_61fec0, sub_644cd0
*/
void sub_643e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x643e60ULL || rel >= 0x644110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00644110 size=1168 callers=2 calls=4
   calls: sub_601140, sub_61fec0, sub_61fee0, sub_644cd0
*/
void sub_644110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x644110ULL || rel >= 0x6445a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006445a0 size=192 callers=4 calls=1
   calls: sub_603900
*/
void sub_6445a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6445a0ULL || rel >= 0x644660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00644660 size=112 callers=0 calls=2
   calls: sub_5cf8d0, sub_644b10
*/
void sub_644660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x644660ULL || rel >= 0x6446d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006446d0 size=112 callers=0 calls=2
   calls: sub_5cf8d0, sub_644b10
*/
void sub_6446d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6446d0ULL || rel >= 0x644740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00644740 size=176 callers=0 calls=1
   calls: sub_603900
*/
void sub_644740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x644740ULL || rel >= 0x6447f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006447f0 size=112 callers=0 calls=2
   calls: sub_5cf8d0, sub_644b10
*/
void sub_6447f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6447f0ULL || rel >= 0x644860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00644860 size=112 callers=0 calls=2
   calls: sub_5cf8d0, sub_644b10
*/
void sub_644860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x644860ULL || rel >= 0x6448d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006448d0 size=176 callers=0 calls=1
   calls: sub_603900
*/
void sub_6448d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6448d0ULL || rel >= 0x644980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00644980 size=176 callers=0 calls=1
   calls: sub_603900
*/
void sub_644980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x644980ULL || rel >= 0x644a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00644a30 size=112 callers=0 calls=2
   calls: sub_5cf8d0, sub_644b10
*/
void sub_644a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x644a30ULL || rel >= 0x644aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00644aa0 size=112 callers=0 calls=2
   calls: sub_5cf8d0, sub_644b10
*/
void sub_644aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x644aa0ULL || rel >= 0x644b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00644b10 size=448 callers=6 calls=0
*/
void sub_644b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x644b10ULL || rel >= 0x644cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00644cd0 size=240 callers=3 calls=1
   calls: sub_603900
*/
void sub_644cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x644cd0ULL || rel >= 0x644dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00644dc0 size=1648 callers=18 calls=3
   calls: sub_644dc0, sub_645430, sub_645630
*/
void sub_644dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x644dc0ULL || rel >= 0x645430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00645430 size=512 callers=2 calls=0
*/
void sub_645430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x645430ULL || rel >= 0x645630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00645630 size=976 callers=2 calls=1
   calls: sub_645430
*/
void sub_645630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x645630ULL || rel >= 0x645a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00645a00 size=240 callers=2 calls=2
   calls: sub_5cfad0, sub_608fa0
*/
void sub_645a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x645a00ULL || rel >= 0x645af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00645af0 size=608 callers=0 calls=9
   calls: sub_5cfad0, sub_5f7110, sub_5f7120, sub_5f7320, sub_5f8bc0, sub_609420, sub_60e2b0, sub_60f390, sub_60fc10
   ref: blendCubemapConstant
*/
void blendCubemapConstant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x645af0ULL || rel >= 0x645d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00645d50 size=208 callers=19 calls=1
   calls: sub_60e2c0
   ref: u_Source1
   ref: u_Source0
*/
void u_Source1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x645d50ULL || rel >= 0x645e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00645e20 size=80 callers=15 calls=0
*/
void sub_645e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x645e20ULL || rel >= 0x645e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00645e70 size=1824 callers=2 calls=19
   calls: sub_1787500, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5f7110, sub_5f7120, sub_602710, sub_6091a0, sub_60ccb0, sub_60de70, sub_60e390, sub_60e880
   ... +7 more
   ref: shader/blend_cubemap.bnsh
*/
void blend_cubemap(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x645e70ULL || rel >= 0x646590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00646590 size=288 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_646590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x646590ULL || rel >= 0x6466b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006466b0 size=16 callers=0 calls=0
*/
void sub_6466b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6466b0ULL || rel >= 0x6466c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006466c0 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_6466c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6466c0ULL || rel >= 0x646770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00646770 size=16 callers=0 calls=0
*/
void sub_646770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x646770ULL || rel >= 0x646780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00646780 size=16 callers=0 calls=0
*/
void sub_646780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x646780ULL || rel >= 0x646790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00646790 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_646790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x646790ULL || rel >= 0x646840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00646840 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_646840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x646840ULL || rel >= 0x6468f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006468f0 size=16 callers=0 calls=0
*/
void sub_6468f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6468f0ULL || rel >= 0x646900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00646900 size=16 callers=0 calls=0
*/
void sub_646900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x646900ULL || rel >= 0x646910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00646910 size=16 callers=0 calls=0
*/
void sub_646910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x646910ULL || rel >= 0x646920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00646920 size=192 callers=0 calls=1
   calls: sub_68ca30
*/
void sub_646920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x646920ULL || rel >= 0x6469e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006469e0 size=64 callers=1 calls=0
*/
void sub_6469e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6469e0ULL || rel >= 0x646a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00646a20 size=96 callers=1 calls=0
*/
void sub_646a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x646a20ULL || rel >= 0x646a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00646a80 size=976 callers=1 calls=0
*/
void sub_646a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x646a80ULL || rel >= 0x646e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00646e50 size=2384 callers=1 calls=3
   calls: sub_6477a0, sub_647db0, sub_6480d0
*/
void sub_646e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x646e50ULL || rel >= 0x6477a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006477a0 size=1552 callers=1 calls=0
*/
void sub_6477a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6477a0ULL || rel >= 0x647db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00647db0 size=800 callers=1 calls=0
*/
void sub_647db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x647db0ULL || rel >= 0x6480d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006480d0 size=4400 callers=1 calls=0
*/
void sub_6480d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6480d0ULL || rel >= 0x649200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00649200 size=2704 callers=1 calls=0
*/
void sub_649200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x649200ULL || rel >= 0x649c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00649c90 size=816 callers=1 calls=2
   calls: sub_649200, sub_649fc0
*/
void sub_649c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x649c90ULL || rel >= 0x649fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00649fc0 size=1024 callers=1 calls=0
*/
void sub_649fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x649fc0ULL || rel >= 0x64a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064a3c0 size=176 callers=1 calls=1
   calls: sub_64a470
*/
void sub_64a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64a3c0ULL || rel >= 0x64a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064a470 size=720 callers=2 calls=0
*/
void sub_64a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64a470ULL || rel >= 0x64a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064a740 size=336 callers=7 calls=4
   calls: sub_5d8ee0, sub_620a50, sub_621100, sub_65d700
*/
void sub_64a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64a740ULL || rel >= 0x64a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064a890 size=64 callers=7 calls=1
   calls: sub_64b600
*/
void sub_64a890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64a890ULL || rel >= 0x64a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064a8d0 size=320 callers=23 calls=4
   calls: sub_620ac0, sub_64aa10, sub_64b710, sub_64b820
*/
void sub_64a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64a8d0ULL || rel >= 0x64aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064aa10 size=576 callers=2 calls=1
   calls: sub_607750
*/
void sub_64aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64aa10ULL || rel >= 0x64ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064ac50 size=304 callers=1 calls=4
   calls: sub_620ac0, sub_64aa10, sub_64b710, sub_64b820
*/
void sub_64ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64ac50ULL || rel >= 0x64ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064ad80 size=320 callers=1 calls=4
   calls: sub_621170, sub_64aec0, sub_64ba30, sub_64bb40
*/
void sub_64ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64ad80ULL || rel >= 0x64aec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064aec0 size=576 callers=1 calls=1
   calls: sub_607750
*/
void sub_64aec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64aec0ULL || rel >= 0x64b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064b100 size=16 callers=1 calls=0
*/
void sub_64b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b100ULL || rel >= 0x64b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064b110 size=656 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_64b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b110ULL || rel >= 0x64b3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064b3a0 size=16 callers=0 calls=0
*/
void sub_64b3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b3a0ULL || rel >= 0x64b3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064b3b0 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_64b3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b3b0ULL || rel >= 0x64b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064b460 size=16 callers=0 calls=0
*/
void sub_64b460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b460ULL || rel >= 0x64b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064b470 size=16 callers=0 calls=0
*/
void sub_64b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b470ULL || rel >= 0x64b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064b480 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_64b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b480ULL || rel >= 0x64b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064b530 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_64b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b530ULL || rel >= 0x64b5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064b5e0 size=16 callers=0 calls=0
*/
void sub_64b5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b5e0ULL || rel >= 0x64b5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064b5f0 size=16 callers=0 calls=0
*/
void sub_64b5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b5f0ULL || rel >= 0x64b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064b600 size=272 callers=1 calls=2
   calls: sub_5d99d0, sub_64d590
*/
void sub_64b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b600ULL || rel >= 0x64b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064b710 size=272 callers=2 calls=2
   calls: sub_5d99d0, sub_64bd50
*/
void sub_64b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b710ULL || rel >= 0x64b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064b820 size=528 callers=2 calls=0
*/
void sub_64b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b820ULL || rel >= 0x64ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064ba30 size=272 callers=1 calls=2
   calls: sub_5d99d0, sub_64d090
*/
void sub_64ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64ba30ULL || rel >= 0x64bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064bb40 size=528 callers=1 calls=0
*/
void sub_64bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64bb40ULL || rel >= 0x64bd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064bd50 size=320 callers=1 calls=2
   calls: sub_5db1b0, sub_64c340
*/
void sub_64bd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64bd50ULL || rel >= 0x64be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064be90 size=192 callers=0 calls=0
*/
void sub_64be90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64be90ULL || rel >= 0x64bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064bf50 size=192 callers=0 calls=0
*/
void sub_64bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64bf50ULL || rel >= 0x64c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c010 size=16 callers=0 calls=0
*/
void sub_64c010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c010ULL || rel >= 0x64c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c020 size=192 callers=0 calls=0
*/
void sub_64c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c020ULL || rel >= 0x64c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c0e0 size=192 callers=0 calls=0
*/
void sub_64c0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c0e0ULL || rel >= 0x64c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c1a0 size=16 callers=0 calls=0
*/
void sub_64c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c1a0ULL || rel >= 0x64c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c1b0 size=16 callers=0 calls=0
*/
void sub_64c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c1b0ULL || rel >= 0x64c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c1c0 size=192 callers=0 calls=0
*/
void sub_64c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c1c0ULL || rel >= 0x64c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c280 size=192 callers=0 calls=0
*/
void sub_64c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c280ULL || rel >= 0x64c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c340 size=512 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_64c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c340ULL || rel >= 0x64c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c540 size=144 callers=0 calls=0
*/
void sub_64c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c540ULL || rel >= 0x64c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c5d0 size=144 callers=0 calls=0
*/
void sub_64c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c5d0ULL || rel >= 0x64c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c660 size=240 callers=0 calls=0
*/
void sub_64c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c660ULL || rel >= 0x64c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c750 size=144 callers=0 calls=0
*/
void sub_64c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c750ULL || rel >= 0x64c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c7e0 size=144 callers=0 calls=0
*/
void sub_64c7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c7e0ULL || rel >= 0x64c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c870 size=16 callers=0 calls=0
*/
void sub_64c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c870ULL || rel >= 0x64c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c880 size=16 callers=0 calls=0
*/
void sub_64c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c880ULL || rel >= 0x64c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c890 size=144 callers=0 calls=0
*/
void sub_64c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c890ULL || rel >= 0x64c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c920 size=144 callers=0 calls=0
*/
void sub_64c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c920ULL || rel >= 0x64c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064c9b0 size=304 callers=0 calls=0
*/
void sub_64c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c9b0ULL || rel >= 0x64cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064cae0 size=80 callers=2 calls=1
   calls: sub_5e2180
*/
void sub_64cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64cae0ULL || rel >= 0x64cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064cb30 size=64 callers=0 calls=2
   calls: sub_5e2750, sub_5e2830
*/
void sub_64cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64cb30ULL || rel >= 0x64cb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064cb70 size=496 callers=16 calls=0
*/
void sub_64cb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64cb70ULL || rel >= 0x64cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064cd60 size=96 callers=0 calls=0
*/
void sub_64cd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64cd60ULL || rel >= 0x64cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064cdc0 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_64cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64cdc0ULL || rel >= 0x64ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064ce30 size=96 callers=0 calls=0
*/
void sub_64ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64ce30ULL || rel >= 0x64ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064ce90 size=96 callers=0 calls=0
*/
void sub_64ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64ce90ULL || rel >= 0x64cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064cef0 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_64cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64cef0ULL || rel >= 0x64cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064cf60 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_64cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64cf60ULL || rel >= 0x64cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064cfd0 size=96 callers=0 calls=0
*/
void sub_64cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64cfd0ULL || rel >= 0x64d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d030 size=96 callers=0 calls=0
*/
void sub_64d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d030ULL || rel >= 0x64d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d090 size=448 callers=1 calls=2
   calls: sub_5db1b0, sub_61e8e0
*/
void sub_64d090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d090ULL || rel >= 0x64d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d250 size=336 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_64d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d250ULL || rel >= 0x64d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d3a0 size=16 callers=0 calls=0
*/
void sub_64d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d3a0ULL || rel >= 0x64d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d3b0 size=16 callers=0 calls=0
*/
void sub_64d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d3b0ULL || rel >= 0x64d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d3c0 size=16 callers=0 calls=0
*/
void sub_64d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d3c0ULL || rel >= 0x64d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d3d0 size=16 callers=0 calls=0
*/
void sub_64d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d3d0ULL || rel >= 0x64d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d3e0 size=16 callers=0 calls=0
*/
void sub_64d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d3e0ULL || rel >= 0x64d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d3f0 size=16 callers=0 calls=0
*/
void sub_64d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d3f0ULL || rel >= 0x64d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d400 size=16 callers=0 calls=0
*/
void sub_64d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d400ULL || rel >= 0x64d410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d410 size=16 callers=0 calls=0
*/
void sub_64d410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d410ULL || rel >= 0x64d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d420 size=32 callers=0 calls=0
*/
void sub_64d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d420ULL || rel >= 0x64d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d440 size=32 callers=0 calls=0
*/
void sub_64d440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d440ULL || rel >= 0x64d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d460 size=304 callers=0 calls=0
*/
void sub_64d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d460ULL || rel >= 0x64d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d590 size=480 callers=1 calls=7
   calls: sub_5db1b0, sub_5fc550, sub_5fc600, sub_611740, sub_64dd30, sub_682dd0, sub_699f60
*/
void sub_64d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d590ULL || rel >= 0x64d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d770 size=16 callers=0 calls=0
*/
void sub_64d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d770ULL || rel >= 0x64d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d780 size=112 callers=0 calls=0
*/
void sub_64d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d780ULL || rel >= 0x64d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d7f0 size=112 callers=0 calls=0
*/
void sub_64d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d7f0ULL || rel >= 0x64d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d860 size=192 callers=0 calls=1
   calls: sub_682dd0
*/
void sub_64d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d860ULL || rel >= 0x64d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d920 size=192 callers=0 calls=1
   calls: sub_682dd0
*/
void sub_64d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d920ULL || rel >= 0x64d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d9e0 size=16 callers=0 calls=0
*/
void sub_64d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d9e0ULL || rel >= 0x64d9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064d9f0 size=192 callers=0 calls=1
   calls: sub_682dd0
*/
void sub_64d9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d9f0ULL || rel >= 0x64dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064dab0 size=192 callers=0 calls=1
   calls: sub_682dd0
*/
void sub_64dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64dab0ULL || rel >= 0x64db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064db70 size=16 callers=0 calls=0
*/
void sub_64db70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64db70ULL || rel >= 0x64db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064db80 size=16 callers=0 calls=0
*/
void sub_64db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64db80ULL || rel >= 0x64db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064db90 size=208 callers=0 calls=1
   calls: sub_682dd0
*/
void sub_64db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64db90ULL || rel >= 0x64dc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064dc60 size=208 callers=0 calls=1
   calls: sub_682dd0
*/
void sub_64dc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64dc60ULL || rel >= 0x64dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064dd30 size=224 callers=1 calls=1
   calls: sub_64de10
*/
void sub_64dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64dd30ULL || rel >= 0x64de10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064de10 size=272 callers=2 calls=2
   calls: sub_5cf8c0, sub_5fc550
*/
void sub_64de10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64de10ULL || rel >= 0x64df20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064df20 size=96 callers=0 calls=2
   calls: sub_5cf8d0, sub_682dd0
*/
void sub_64df20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64df20ULL || rel >= 0x64df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064df80 size=96 callers=0 calls=2
   calls: sub_5cf8d0, sub_682dd0
*/
void sub_64df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64df80ULL || rel >= 0x64dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064dfe0 size=96 callers=0 calls=2
   calls: sub_5cf8d0, sub_682dd0
*/
void sub_64dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64dfe0ULL || rel >= 0x64e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064e040 size=96 callers=0 calls=2
   calls: sub_5cf8d0, sub_682dd0
*/
void sub_64e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64e040ULL || rel >= 0x64e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064e0a0 size=336 callers=1 calls=3
   calls: sub_5cf8c0, sub_5db1b0, sub_65d700
*/
void sub_64e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64e0a0ULL || rel >= 0x64e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064e1f0 size=464 callers=0 calls=2
   calls: sub_650260, sub_650800
*/
void sub_64e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64e1f0ULL || rel >= 0x64e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064e3c0 size=320 callers=4 calls=3
   calls: sub_5e2bc0, sub_650260, sub_650800
*/
void sub_64e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64e3c0ULL || rel >= 0x64e500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064e500 size=16 callers=1 calls=0
*/
void sub_64e500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64e500ULL || rel >= 0x64e510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064e510 size=1136 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e2bc0, sub_64f560
*/
void sub_64e510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64e510ULL || rel >= 0x64e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064e980 size=560 callers=1 calls=3
   calls: sub_5cf8f0, sub_5e2bc0, sub_64fc40
*/
void sub_64e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64e980ULL || rel >= 0x64ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064ebb0 size=304 callers=1 calls=1
   calls: sub_5cf8f0
*/
void sub_64ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64ebb0ULL || rel >= 0x64ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064ece0 size=32 callers=1 calls=0
*/
void sub_64ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64ece0ULL || rel >= 0x64ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064ed00 size=352 callers=0 calls=5
   calls: sub_5cf8d0, sub_64ee60, sub_64f000, sub_650260, sub_650800
*/
void sub_64ed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64ed00ULL || rel >= 0x64ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064ee60 size=416 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_64ee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64ee60ULL || rel >= 0x64f000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064f000 size=368 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_64f000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64f000ULL || rel >= 0x64f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064f170 size=16 callers=0 calls=0
*/
void sub_64f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64f170ULL || rel >= 0x64f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064f180 size=16 callers=0 calls=0
*/
void sub_64f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64f180ULL || rel >= 0x64f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064f190 size=16 callers=0 calls=0
*/
void sub_64f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64f190ULL || rel >= 0x64f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064f1a0 size=16 callers=0 calls=0
*/
void sub_64f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64f1a0ULL || rel >= 0x64f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064f1b0 size=16 callers=0 calls=0
*/
void sub_64f1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64f1b0ULL || rel >= 0x64f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064f1c0 size=560 callers=0 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_64fe10, sub_650240, sub_650250
*/
void sub_64f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64f1c0ULL || rel >= 0x64f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064f3f0 size=16 callers=0 calls=0
*/
void sub_64f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64f3f0ULL || rel >= 0x64f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064f400 size=16 callers=0 calls=0
*/
void sub_64f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64f400ULL || rel >= 0x64f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064f410 size=16 callers=0 calls=0
*/
void sub_64f410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64f410ULL || rel >= 0x64f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064f420 size=16 callers=0 calls=0
*/
void sub_64f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64f420ULL || rel >= 0x64f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064f430 size=304 callers=0 calls=0
*/
void sub_64f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64f430ULL || rel >= 0x64f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064f560 size=720 callers=1 calls=2
   calls: sub_64f830, sub_64fac0
*/
void sub_64f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64f560ULL || rel >= 0x64f830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064f830 size=656 callers=1 calls=0
*/
void sub_64f830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64f830ULL || rel >= 0x64fac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064fac0 size=384 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_64fac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64fac0ULL || rel >= 0x64fc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064fc40 size=464 callers=1 calls=0
*/
void sub_64fc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64fc40ULL || rel >= 0x64fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064fe10 size=16 callers=1 calls=0
*/
void sub_64fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64fe10ULL || rel >= 0x64fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0064fe20 size=1056 callers=0 calls=3
   calls: sub_650820, sub_650d70, sub_651170
*/
void sub_64fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64fe20ULL || rel >= 0x650240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00650240 size=16 callers=1 calls=0
*/
void sub_650240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x650240ULL || rel >= 0x650250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00650250 size=16 callers=1 calls=0
*/
void sub_650250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x650250ULL || rel >= 0x650260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00650260 size=16 callers=3 calls=0
*/
void sub_650260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x650260ULL || rel >= 0x650270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00650270 size=1424 callers=0 calls=9
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e6280, sub_5fc600, sub_61bfe0, sub_6515d0, sub_682dd0, sub_ec20
*/
void sub_650270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x650270ULL || rel >= 0x650800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00650800 size=32 callers=3 calls=0
*/
void sub_650800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x650800ULL || rel >= 0x650820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00650820 size=1360 callers=2 calls=0
*/
void sub_650820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x650820ULL || rel >= 0x650d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00650d70 size=1024 callers=2 calls=0
*/
void sub_650d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x650d70ULL || rel >= 0x651170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00651170 size=1120 callers=2 calls=0
*/
void sub_651170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x651170ULL || rel >= 0x6515d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006515d0 size=528 callers=1 calls=3
   calls: sub_5e6180, sub_62b4b0, sub_d0c0
*/
void sub_6515d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6515d0ULL || rel >= 0x6517e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006517e0 size=80 callers=2 calls=1
   calls: sub_5e2180
*/
void sub_6517e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6517e0ULL || rel >= 0x651830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00651830 size=64 callers=0 calls=2
   calls: sub_5e2750, sub_5e2830
*/
void sub_651830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x651830ULL || rel >= 0x651870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00651870 size=256 callers=3 calls=0
*/
void sub_651870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x651870ULL || rel >= 0x651970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00651970 size=96 callers=0 calls=0
*/
void sub_651970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x651970ULL || rel >= 0x6519d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006519d0 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_6519d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6519d0ULL || rel >= 0x651a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00651a40 size=96 callers=0 calls=0
*/
void sub_651a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x651a40ULL || rel >= 0x651aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00651aa0 size=96 callers=0 calls=0
*/
void sub_651aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x651aa0ULL || rel >= 0x651b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00651b00 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_651b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x651b00ULL || rel >= 0x651b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00651b70 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_651b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x651b70ULL || rel >= 0x651be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00651be0 size=96 callers=0 calls=0
*/
void sub_651be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x651be0ULL || rel >= 0x651c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00651c40 size=96 callers=0 calls=0
*/
void sub_651c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x651c40ULL || rel >= 0x651ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00651ca0 size=288 callers=1 calls=2
   calls: sub_5cf8c0, sub_5db8e0
*/
void sub_651ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x651ca0ULL || rel >= 0x651dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00651dc0 size=1888 callers=0 calls=14
   calls: sub_5a1d00, sub_5cf8e0, sub_5cf8f0, sub_5e2bc0, sub_618410, sub_6184f0, sub_618570, sub_652520, sub_652640, sub_653590, sub_653780, sub_653890
   ... +2 more
*/
void sub_651dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x651dc0ULL || rel >= 0x652520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652520 size=288 callers=1 calls=2
   calls: sub_652f70, sub_653080
*/
void sub_652520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652520ULL || rel >= 0x652640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652640 size=400 callers=2 calls=0
*/
void sub_652640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652640ULL || rel >= 0x6527d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006527d0 size=48 callers=10 calls=0
*/
void sub_6527d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6527d0ULL || rel >= 0x652800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652800 size=48 callers=1 calls=0
*/
void sub_652800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652800ULL || rel >= 0x652830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652830 size=224 callers=2 calls=2
   calls: sub_619060, sub_c784d0
*/
void sub_652830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652830ULL || rel >= 0x652910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652910 size=96 callers=1 calls=2
   calls: sub_619060, sub_c784d0
*/
void sub_652910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652910ULL || rel >= 0x652970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652970 size=336 callers=0 calls=1
   calls: sub_5db450
*/
void sub_652970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652970ULL || rel >= 0x652ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652ac0 size=336 callers=0 calls=1
   calls: sub_5db450
*/
void sub_652ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652ac0ULL || rel >= 0x652c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652c10 size=432 callers=0 calls=3
   calls: sub_5cf8d0, sub_5e2bc0, sub_652f70
*/
void sub_652c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652c10ULL || rel >= 0x652dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652dc0 size=16 callers=0 calls=0
*/
void sub_652dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652dc0ULL || rel >= 0x652dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652dd0 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_652dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652dd0ULL || rel >= 0x652e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652e40 size=16 callers=0 calls=0
*/
void sub_652e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652e40ULL || rel >= 0x652e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652e50 size=16 callers=0 calls=0
*/
void sub_652e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652e50ULL || rel >= 0x652e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652e60 size=16 callers=0 calls=0
*/
void sub_652e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652e60ULL || rel >= 0x652e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652e70 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_652e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652e70ULL || rel >= 0x652ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652ee0 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_652ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652ee0ULL || rel >= 0x652f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652f50 size=16 callers=0 calls=0
*/
void sub_652f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652f50ULL || rel >= 0x652f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652f60 size=16 callers=0 calls=0
*/
void sub_652f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652f60ULL || rel >= 0x652f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00652f70 size=272 callers=3 calls=0
*/
void sub_652f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652f70ULL || rel >= 0x653080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00653080 size=336 callers=2 calls=1
   calls: sub_6531d0
*/
void sub_653080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x653080ULL || rel >= 0x6531d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006531d0 size=320 callers=1 calls=1
   calls: sub_653310
*/
void sub_6531d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6531d0ULL || rel >= 0x653310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00653310 size=320 callers=2 calls=2
   calls: sub_614c50, sub_653450
*/
void sub_653310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x653310ULL || rel >= 0x653450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00653450 size=320 callers=5 calls=0
*/
void sub_653450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x653450ULL || rel >= 0x653590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00653590 size=496 callers=1 calls=2
   calls: sub_652f70, sub_653080
*/
void sub_653590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x653590ULL || rel >= 0x653780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00653780 size=272 callers=1 calls=2
   calls: sub_5d99d0, sub_6160e0
*/
void sub_653780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x653780ULL || rel >= 0x653890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00653890 size=624 callers=1 calls=2
   calls: sub_653310, sub_653b00
*/
void sub_653890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x653890ULL || rel >= 0x653b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00653b00 size=240 callers=1 calls=0
*/
void sub_653b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x653b00ULL || rel >= 0x653bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00653bf0 size=528 callers=1 calls=0
*/
void sub_653bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x653bf0ULL || rel >= 0x653e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00653e00 size=336 callers=2 calls=1
   calls: sub_5e2180
*/
void sub_653e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x653e00ULL || rel >= 0x653f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00653f50 size=4544 callers=0 calls=17
   calls: sub_5e25c0, sub_5e26a0, sub_5e2750, sub_5e2830, sub_5e2930, sub_5e2bc0, sub_652640, sub_653450, sub_655110, sub_655230, sub_655850, sub_655950
   ... +5 more
   ref: .gfbmdl
*/
void gfbmdl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x653f50ULL || rel >= 0x655110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00655110 size=288 callers=1 calls=2
   calls: sub_655850, sub_655d40
*/
void sub_655110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x655110ULL || rel >= 0x655230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00655230 size=528 callers=1 calls=3
   calls: sub_5e6180, sub_656220, sub_d0c0
*/
void sub_655230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x655230ULL || rel >= 0x655440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00655440 size=432 callers=0 calls=1
   calls: sub_655850
*/
void sub_655440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x655440ULL || rel >= 0x6555f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006555f0 size=16 callers=0 calls=0
*/
void sub_6555f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6555f0ULL || rel >= 0x655600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00655600 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_655600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x655600ULL || rel >= 0x6556b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006556b0 size=16 callers=0 calls=0
*/
void sub_6556b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6556b0ULL || rel >= 0x6556c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006556c0 size=16 callers=0 calls=0
*/
void sub_6556c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6556c0ULL || rel >= 0x6556d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006556d0 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_6556d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6556d0ULL || rel >= 0x655780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00655780 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_655780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x655780ULL || rel >= 0x655830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00655830 size=16 callers=0 calls=0
*/
void sub_655830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x655830ULL || rel >= 0x655840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00655840 size=16 callers=0 calls=0
*/
void sub_655840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x655840ULL || rel >= 0x655850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00655850 size=256 callers=6 calls=1
   calls: sub_5e2bc0
*/
void sub_655850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x655850ULL || rel >= 0x655950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00655950 size=480 callers=2 calls=1
   calls: sub_655b30
*/
void sub_655950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x655950ULL || rel >= 0x655b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00655b30 size=528 callers=3 calls=1
   calls: sub_653450
*/
void sub_655b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x655b30ULL || rel >= 0x655d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00655d40 size=720 callers=2 calls=1
   calls: sub_653450
*/
void sub_655d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x655d40ULL || rel >= 0x656010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00656010 size=528 callers=1 calls=0
*/
void sub_656010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x656010ULL || rel >= 0x656220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00656220 size=672 callers=1 calls=4
   calls: sub_5e6180, sub_6564c0, sub_656570, sub_656620
*/
void sub_656220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x656220ULL || rel >= 0x6564c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006564c0 size=176 callers=3 calls=1
   calls: sub_d0c0
*/
void sub_6564c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6564c0ULL || rel >= 0x656570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00656570 size=176 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_656570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x656570ULL || rel >= 0x656620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00656620 size=144 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_656620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x656620ULL || rel >= 0x6566b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006566b0 size=864 callers=1 calls=3
   calls: sub_653450, sub_655850, sub_655d40
*/
void sub_6566b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6566b0ULL || rel >= 0x656a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00656a10 size=848 callers=1 calls=3
   calls: sub_655850, sub_655950, sub_655b30
*/
void sub_656a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x656a10ULL || rel >= 0x656d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00656d60 size=176 callers=2 calls=1
   calls: sub_5e2180
*/
void sub_656d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x656d60ULL || rel >= 0x656e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00656e10 size=1696 callers=0 calls=9
   calls: sub_5e25c0, sub_5e26a0, sub_5e2750, sub_5e2830, sub_5e2930, sub_6284d0, sub_657800, sub_657950, sub_ec20
*/
void sub_656e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x656e10ULL || rel >= 0x6574b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006574b0 size=240 callers=0 calls=1
   calls: sub_657800
*/
void sub_6574b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6574b0ULL || rel >= 0x6575a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006575a0 size=16 callers=0 calls=0
*/
void sub_6575a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6575a0ULL || rel >= 0x6575b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006575b0 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_6575b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6575b0ULL || rel >= 0x657660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00657660 size=16 callers=0 calls=0
*/
void sub_657660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x657660ULL || rel >= 0x657670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00657670 size=16 callers=0 calls=0
*/
void sub_657670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x657670ULL || rel >= 0x657680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00657680 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_657680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x657680ULL || rel >= 0x657730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00657730 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_657730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x657730ULL || rel >= 0x6577e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006577e0 size=16 callers=0 calls=0
*/
void sub_6577e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6577e0ULL || rel >= 0x6577f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006577f0 size=16 callers=0 calls=0
*/
void sub_6577f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6577f0ULL || rel >= 0x657800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00657800 size=336 callers=3 calls=1
   calls: sub_5e2bc0
*/
void sub_657800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x657800ULL || rel >= 0x657950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00657950 size=816 callers=1 calls=2
   calls: sub_657800, sub_657c80
*/
void sub_657950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x657950ULL || rel >= 0x657c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00657c80 size=768 callers=1 calls=0
*/
void sub_657c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x657c80ULL || rel >= 0x657f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00657f80 size=176 callers=1 calls=2
   calls: sub_5fc550, sub_608fa0
*/
void sub_657f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x657f80ULL || rel >= 0x658030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658030 size=144 callers=1 calls=2
   calls: sub_60e2c0, sub_699f60
   ref: u_ColorBuffer
*/
void u_ColorBuffer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658030ULL || rel >= 0x6580c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006580c0 size=48 callers=1 calls=0
*/
void sub_6580c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6580c0ULL || rel >= 0x6580f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006580f0 size=32 callers=1 calls=0
*/
void sub_6580f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6580f0ULL || rel >= 0x658110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658110 size=1632 callers=1 calls=16
   calls: sub_1787500, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5f7110, sub_5f7120, sub_602710, sub_602930, sub_60ccb0, sub_60de70, sub_60e390, sub_612020
   ... +4 more
   ref: shader/copy.bnsh
*/
void copy(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658110ULL || rel >= 0x658770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658770 size=368 callers=0 calls=7
   calls: sub_5cfad0, sub_5f7110, sub_5f7120, sub_5f7320, sub_5fcf30, sub_609420, sub_60f390
   ref: copyImageConstant
*/
void copyImageConstant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658770ULL || rel >= 0x6588e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006588e0 size=272 callers=0 calls=2
   calls: sub_5cf8d0, sub_682dd0
*/
void sub_6588e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6588e0ULL || rel >= 0x6589f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006589f0 size=16 callers=0 calls=0
*/
void sub_6589f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6589f0ULL || rel >= 0x658a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658a00 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_658a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658a00ULL || rel >= 0x658ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658ab0 size=16 callers=0 calls=0
*/
void sub_658ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658ab0ULL || rel >= 0x658ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658ac0 size=16 callers=0 calls=0
*/
void sub_658ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658ac0ULL || rel >= 0x658ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658ad0 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_658ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658ad0ULL || rel >= 0x658b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658b80 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_658b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658b80ULL || rel >= 0x658c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658c30 size=16 callers=0 calls=0
*/
void sub_658c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658c30ULL || rel >= 0x658c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658c40 size=16 callers=0 calls=0
*/
void sub_658c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658c40ULL || rel >= 0x658c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658c50 size=16 callers=0 calls=0
*/
void sub_658c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658c50ULL || rel >= 0x658c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658c60 size=192 callers=0 calls=1
   calls: sub_68ca30
*/
void sub_658c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658c60ULL || rel >= 0x658d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658d20 size=208 callers=1 calls=2
   calls: sub_5e2350, sub_659420
*/
void sub_658d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658d20ULL || rel >= 0x658df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

