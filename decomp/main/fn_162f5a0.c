/* main functions 0162f5a0..0164b6d0 (189 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0162f5a0 size=224 callers=1 calls=2
   calls: Result_2, sub_15bbd10
*/
void sub_162f5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162f5a0ULL || rel >= 0x162f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0162f680 size=224 callers=1 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_358(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162f680ULL || rel >= 0x162f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0162f760 size=320 callers=1 calls=0
*/
void sub_162f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162f760ULL || rel >= 0x162f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0162f8a0 size=416 callers=1 calls=1
   calls: sub_162d5a0
*/
void sub_162f8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162f8a0ULL || rel >= 0x162fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0162fa40 size=32 callers=13 calls=0
*/
void sub_162fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162fa40ULL || rel >= 0x162fa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0162fa60 size=16 callers=0 calls=0
*/
void sub_162fa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162fa60ULL || rel >= 0x162fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0162fa70 size=32 callers=0 calls=0
*/
void sub_162fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162fa70ULL || rel >= 0x162fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0162fa90 size=320 callers=1 calls=1
   calls: sub_15bca70
*/
void sub_162fa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162fa90ULL || rel >= 0x162fbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0162fbd0 size=288 callers=1 calls=1
   calls: sub_15bca70
*/
void sub_162fbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162fbd0ULL || rel >= 0x162fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0162fcf0 size=304 callers=1 calls=1
   calls: sub_15bca70
   ref: 0123456789BCDFGHJKLMNPRTVWXY0123456789BCDFGHJKLMNPRTVWXY
*/
void f_0123456789BCDFGHJKLMNPRTVWXY0123456789BCDFGHJKLMNPRTVW(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162fcf0ULL || rel >= 0x162fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0162fe20 size=64 callers=0 calls=1
   calls: sub_162fa90
*/
void sub_162fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162fe20ULL || rel >= 0x162fe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0162fe60 size=144 callers=0 calls=2
   calls: f_0123456789BCDFGHJKLMNPRTVWXY0123456789BCDFGHJKLMNPRTVW, sub_162fbd0
*/
void sub_162fe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162fe60ULL || rel >= 0x162fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0162fef0 size=16 callers=2 calls=0
*/
void sub_162fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162fef0ULL || rel >= 0x162ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0162ff00 size=160 callers=1 calls=0
*/
void sub_162ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162ff00ULL || rel >= 0x162ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0162ffa0 size=416 callers=1 calls=1
   calls: sub_15bc1e0
   ref: 0123456789BCDFGHJKLMNPRTVWXY0123456789BCDFGHJKLMNPRTVWXY
*/
void f_0123456789BCDFGHJKLMNPRTVWXY0123456789BCDFGHJKLMNPRTVW_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162ffa0ULL || rel >= 0x1630140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630140 size=304 callers=1 calls=1
   calls: sub_15bca70
*/
void sub_1630140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630140ULL || rel >= 0x1630270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630270 size=32 callers=0 calls=0
*/
void sub_1630270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630270ULL || rel >= 0x1630290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630290 size=272 callers=0 calls=1
   calls: sub_15bca70
*/
void sub_1630290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630290ULL || rel >= 0x16303a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016303a0 size=288 callers=0 calls=2
   calls: sub_15bca70, sub_1630140
*/
void sub_16303a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16303a0ULL || rel >= 0x16304c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016304c0 size=240 callers=0 calls=1
   calls: sub_15bca70
*/
void sub_16304c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16304c0ULL || rel >= 0x16305b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016305b0 size=16 callers=3 calls=0
*/
void sub_16305b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16305b0ULL || rel >= 0x16305c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016305c0 size=48 callers=4 calls=0
*/
void sub_16305c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16305c0ULL || rel >= 0x16305f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016305f0 size=352 callers=3 calls=1
   calls: sub_15bc1e0
*/
void sub_16305f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16305f0ULL || rel >= 0x1630750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630750 size=16 callers=4 calls=0
*/
void sub_1630750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630750ULL || rel >= 0x1630760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630760 size=112 callers=3 calls=1
   calls: sub_15c8ad0
*/
void sub_1630760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630760ULL || rel >= 0x16307d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016307d0 size=144 callers=3 calls=0
*/
void sub_16307d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16307d0ULL || rel >= 0x1630860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630860 size=48 callers=0 calls=1
   calls: sub_15b6dc0
*/
void sub_1630860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630860ULL || rel >= 0x1630890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630890 size=64 callers=0 calls=0
*/
void sub_1630890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630890ULL || rel >= 0x16308d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016308d0 size=32 callers=0 calls=0
*/
void sub_16308d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16308d0ULL || rel >= 0x16308f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016308f0 size=112 callers=0 calls=1
   calls: sub_15c8ad0
*/
void sub_16308f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16308f0ULL || rel >= 0x1630960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630960 size=144 callers=0 calls=0
*/
void sub_1630960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630960ULL || rel >= 0x16309f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016309f0 size=32 callers=0 calls=0
*/
void sub_16309f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16309f0ULL || rel >= 0x1630a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630a10 size=16 callers=11 calls=0
*/
void sub_1630a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630a10ULL || rel >= 0x1630a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630a20 size=112 callers=110 calls=2
   calls: InstanceTable_201, sub_15c8ad0
*/
void sub_1630a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630a20ULL || rel >= 0x1630a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630a90 size=48 callers=118 calls=1
   calls: sub_15c8ad0
*/
void sub_1630a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630a90ULL || rel >= 0x1630ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630ac0 size=80 callers=93 calls=1
   calls: sub_162a940
*/
void sub_1630ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630ac0ULL || rel >= 0x1630b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630b10 size=128 callers=111 calls=1
   calls: sub_15c8ad0
*/
void sub_1630b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630b10ULL || rel >= 0x1630b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630b90 size=16 callers=110 calls=0
*/
void sub_1630b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630b90ULL || rel >= 0x1630ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630ba0 size=80 callers=11 calls=0
*/
void sub_1630ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630ba0ULL || rel >= 0x1630bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630bf0 size=80 callers=2 calls=2
   calls: sub_15bbd10, sub_15ce860
*/
void sub_1630bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630bf0ULL || rel >= 0x1630c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630c40 size=112 callers=0 calls=2
   calls: sub_15ceec0, sub_162d880
*/
void sub_1630c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630c40ULL || rel >= 0x1630cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630cb0 size=16 callers=0 calls=0
*/
void sub_1630cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630cb0ULL || rel >= 0x1630cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630cc0 size=96 callers=0 calls=1
   calls: sub_15d78a0
*/
void sub_1630cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630cc0ULL || rel >= 0x1630d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630d20 size=16 callers=0 calls=0
*/
void sub_1630d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630d20ULL || rel >= 0x1630d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630d30 size=336 callers=1 calls=5
   calls: Result, sub_15b8f50, sub_15c5880, sub_15ce690, sub_15d90b0
*/
void sub_1630d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630d30ULL || rel >= 0x1630e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630e80 size=256 callers=0 calls=1
   calls: sub_15d78a0
*/
void sub_1630e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630e80ULL || rel >= 0x1630f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01630f80 size=256 callers=0 calls=2
   calls: sub_15d46a0, sub_15d78a0
*/
void sub_1630f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630f80ULL || rel >= 0x1631080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01631080 size=112 callers=0 calls=1
   calls: sub_15ce0f0
*/
void sub_1631080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1631080ULL || rel >= 0x16310f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016310f0 size=48 callers=1 calls=2
   calls: sub_15c3fe0, sub_15c6e50
*/
void sub_16310f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16310f0ULL || rel >= 0x1631120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01631120 size=48 callers=1 calls=2
   calls: sub_15c40b0, sub_15ce560
*/
void sub_1631120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1631120ULL || rel >= 0x1631150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01631150 size=64 callers=1 calls=2
   calls: sub_15c63b0, sub_15c6bc0
*/
void sub_1631150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1631150ULL || rel >= 0x1631190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01631190 size=112 callers=1 calls=4
   calls: sub_15c47c0, sub_15c7370, sub_15c7ff0, sub_15c8140
*/
void sub_1631190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1631190ULL || rel >= 0x1631200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01631200 size=176 callers=1 calls=8
   calls: sub_15c3fe0, sub_15c40b0, sub_15c4620, sub_15c63b0, sub_15c6bc0, sub_15c6e50, sub_15c6f50, sub_15c7210
*/
void sub_1631200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1631200ULL || rel >= 0x16312b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016312b0 size=208 callers=2 calls=10
   calls: sub_15c3fe0, sub_15c40b0, sub_15c47c0, sub_15c63b0, sub_15c6bc0, sub_15c6e50, sub_15c6f50, sub_15c7370, sub_15c7ff0, sub_15c8140
*/
void sub_16312b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16312b0ULL || rel >= 0x1631380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01631380 size=48 callers=1 calls=0
*/
void sub_1631380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1631380ULL || rel >= 0x16313b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016313b0 size=272 callers=1 calls=5
   calls: sub_15c5ea0, sub_15c5f00, sub_15c6100, sub_15ce120, sub_15ce560
*/
void sub_16313b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16313b0ULL || rel >= 0x16314c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016314c0 size=272 callers=1 calls=12
   calls: sub_15c3ed0, sub_15c42b0, sub_15c6480, sub_15c64b0, sub_15c7400, sub_15c7580, sub_15c77d0, sub_15c7dc0, sub_15c7dd0, sub_15c8140, sub_15ce160, sub_15ce600
*/
void sub_16314c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16314c0ULL || rel >= 0x16315d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016315d0 size=224 callers=1 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_359(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16315d0ULL || rel >= 0x16316b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016316b0 size=256 callers=1 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16316b0ULL || rel >= 0x16317b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016317b0 size=16 callers=0 calls=0
*/
void sub_16317b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16317b0ULL || rel >= 0x16317c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016317c0 size=16 callers=0 calls=0
*/
void sub_16317c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16317c0ULL || rel >= 0x16317d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016317d0 size=112 callers=0 calls=1
   calls: sub_15ce560
*/
void sub_16317d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16317d0ULL || rel >= 0x1631840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01631840 size=96 callers=0 calls=3
   calls: sub_15c3ed0, sub_15c4f10, sub_15c6480
*/
void sub_1631840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1631840ULL || rel >= 0x16318a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016318a0 size=320 callers=0 calls=9
   calls: sub_15c3ed0, sub_15c3ee0, sub_15c42b0, sub_15c4b80, sub_15c6480, sub_15c7dc0, sub_15c7dd0, sub_15c8140, sub_15ce600
*/
void sub_16318a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16318a0ULL || rel >= 0x16319e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016319e0 size=128 callers=0 calls=2
   calls: sub_15b6dc0, sub_15c6480
*/
void sub_16319e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16319e0ULL || rel >= 0x1631a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01631a60 size=112 callers=0 calls=2
   calls: sub_15b6dc0, sub_15c6480
*/
void sub_1631a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1631a60ULL || rel >= 0x1631ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01631ad0 size=416 callers=0 calls=9
   calls: InstanceTable_200, sub_15b6dc0, sub_15c3ee0, sub_15c42b0, sub_15c6480, sub_15c7dc0, sub_15c7dd0, sub_15c8140, sub_15ce600
*/
void sub_1631ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1631ad0ULL || rel >= 0x1631c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01631c70 size=48 callers=1 calls=0
*/
void sub_1631c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1631c70ULL || rel >= 0x1631ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01631ca0 size=48 callers=1 calls=0
*/
void sub_1631ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1631ca0ULL || rel >= 0x1631cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01631cd0 size=1008 callers=0 calls=10
   calls: sub_15b9390, sub_15ba6a0, sub_15ba780, sub_15bb910, sub_15bb950, sub_15bbaa0, sub_15bc1e0, sub_15bc310, sub_15bca70, sub_ce0
*/
void sub_1631cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1631cd0ULL || rel >= 0x16320c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016320c0 size=528 callers=1 calls=0
*/
void sub_16320c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16320c0ULL || rel >= 0x16322d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016322d0 size=272 callers=1 calls=4
   calls: sub_15bc1e0, sub_15bc310, sub_15caa60, sub_15d3020
   ref: <unknown>
   ref: NintendoNotificationEventManager
*/
void NintendoNotificationEventManager(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16322d0ULL || rel >= 0x16323e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016323e0 size=16 callers=4 calls=0
*/
void sub_16323e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16323e0ULL || rel >= 0x16323f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016323f0 size=112 callers=0 calls=1
   calls: sub_16386b0
*/
void sub_16323f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16323f0ULL || rel >= 0x1632460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01632460 size=80 callers=0 calls=2
   calls: sub_15cac40, sub_16386b0
*/
void sub_1632460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1632460ULL || rel >= 0x16324b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016324b0 size=288 callers=0 calls=5
   calls: sub_15b6dc0, sub_15bc1e0, sub_15bc310, sub_15caa60, sub_15d3020
   ref: <unknown>
   ref: NintendoNotificationEventManager
*/
void NintendoNotificationEventManager_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16324b0ULL || rel >= 0x16325d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016325d0 size=192 callers=0 calls=0
*/
void sub_16325d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16325d0ULL || rel >= 0x1632690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01632690 size=352 callers=0 calls=5
   calls: Result_2, sub_15bbd10, sub_15c8ad0, sub_15ce860, sub_16320c0
*/
void sub_1632690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1632690ULL || rel >= 0x16327f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016327f0 size=112 callers=0 calls=2
   calls: sub_15ceec0, sub_162d880
*/
void sub_16327f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16327f0ULL || rel >= 0x1632860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01632860 size=16 callers=0 calls=0
*/
void sub_1632860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1632860ULL || rel >= 0x1632870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01632870 size=704 callers=2 calls=2
   calls: sub_15a5230, sub_162d000
*/
void sub_1632870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1632870ULL || rel >= 0x1632b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01632b30 size=288 callers=2 calls=4
   calls: sub_15bc1e0, sub_15bc310, sub_15caa60, sub_15d3020
   ref: <unknown>
   ref: NotificationEventManager
*/
void NotificationEventManager(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1632b30ULL || rel >= 0x1632c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01632c50 size=208 callers=1 calls=2
   calls: sub_15b9390, sub_1638820
*/
void sub_1632c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1632c50ULL || rel >= 0x1632d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01632d20 size=224 callers=0 calls=3
   calls: sub_15b9390, sub_15cac40, sub_1638820
*/
void sub_1632d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1632d20ULL || rel >= 0x1632e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01632e00 size=304 callers=0 calls=5
   calls: sub_15b6dc0, sub_15bc1e0, sub_15bc310, sub_15caa60, sub_15d3020
   ref: <unknown>
   ref: NotificationEventManager
*/
void NotificationEventManager_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1632e00ULL || rel >= 0x1632f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01632f30 size=496 callers=0 calls=4
   calls: sub_15b8dc0, sub_15b9340, sub_6a5230, sub_6a54a0
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_361(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1632f30ULL || rel >= 0x1633120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633120 size=400 callers=0 calls=4
   calls: sub_15b8dc0, sub_15b9390, sub_6a5230, sub_6f9720
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_362(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633120ULL || rel >= 0x16332b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016332b0 size=256 callers=0 calls=1
   calls: sub_16333b0
*/
void sub_16332b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16332b0ULL || rel >= 0x16333b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016333b0 size=352 callers=1 calls=5
   calls: sub_10fee40, sub_15b9340, sub_15b9390, sub_15bc5d0, sub_15bd290
*/
void sub_16333b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16333b0ULL || rel >= 0x1633510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633510 size=208 callers=0 calls=4
   calls: Result_2, sub_15bbd10, sub_15ce860, sub_16335e0
*/
void sub_1633510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633510ULL || rel >= 0x16335e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016335e0 size=256 callers=1 calls=4
   calls: sub_10ff360, sub_15bc310, sub_15c8ad0, sub_1632870
*/
void sub_16335e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16335e0ULL || rel >= 0x16336e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016336e0 size=192 callers=0 calls=1
   calls: sub_15c8ad0
*/
void sub_16336e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16336e0ULL || rel >= 0x16337a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016337a0 size=304 callers=0 calls=0
*/
void sub_16337a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16337a0ULL || rel >= 0x16338d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016338d0 size=64 callers=0 calls=1
   calls: sub_15b6dc0
*/
void sub_16338d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16338d0ULL || rel >= 0x1633910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633910 size=64 callers=0 calls=0
   ref: NullData
*/
void NullData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633910ULL || rel >= 0x1633950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633950 size=32 callers=0 calls=0
   ref: NullData
*/
void NullData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633950ULL || rel >= 0x1633970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633970 size=16 callers=0 calls=0
*/
void sub_1633970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633970ULL || rel >= 0x1633980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633980 size=16 callers=0 calls=0
*/
void sub_1633980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633980ULL || rel >= 0x1633990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633990 size=80 callers=0 calls=1
   calls: sub_15bc5d0
   ref: NullData
*/
void NullData_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633990ULL || rel >= 0x16339e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016339e0 size=48 callers=0 calls=0
*/
void sub_16339e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16339e0ULL || rel >= 0x1633a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633a10 size=48 callers=0 calls=0
*/
void sub_1633a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633a10ULL || rel >= 0x1633a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633a40 size=80 callers=1 calls=0
*/
void sub_1633a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633a40ULL || rel >= 0x1633a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633a90 size=192 callers=1 calls=2
   calls: sub_15c8ad0, sub_15de3f0
*/
void sub_1633a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633a90ULL || rel >= 0x1633b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633b50 size=128 callers=1 calls=1
   calls: sub_15c8ad0
*/
void sub_1633b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633b50ULL || rel >= 0x1633bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633bd0 size=16 callers=1 calls=0
*/
void sub_1633bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633bd0ULL || rel >= 0x1633be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633be0 size=304 callers=31 calls=1
   calls: Result_2
*/
void sub_1633be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633be0ULL || rel >= 0x1633d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633d10 size=320 callers=12 calls=0
*/
void sub_1633d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633d10ULL || rel >= 0x1633e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01633e50 size=448 callers=27 calls=4
   calls: InstanceTable_206, sub_15b8dc0, sub_15b9390, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_363(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1633e50ULL || rel >= 0x1634010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634010 size=48 callers=0 calls=1
   calls: InstanceTable_363
*/
void sub_1634010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634010ULL || rel >= 0x1634040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634040 size=112 callers=0 calls=1
   calls: sub_15bbd10
*/
void sub_1634040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634040ULL || rel >= 0x16340b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016340b0 size=16 callers=93 calls=0
*/
void sub_16340b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16340b0ULL || rel >= 0x16340c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016340c0 size=112 callers=0 calls=2
   calls: sub_15ceec0, sub_162d880
*/
void sub_16340c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16340c0ULL || rel >= 0x1634130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634130 size=16 callers=0 calls=0
*/
void sub_1634130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634130ULL || rel >= 0x1634140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634140 size=224 callers=1 calls=4
   calls: sub_15b70a0, sub_15bc1e0, sub_15bc310, sub_15ce6b0
   ref: Protocol
*/
void Protocol(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634140ULL || rel >= 0x1634220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634220 size=64 callers=1 calls=1
   calls: sub_15ce6e0
*/
void sub_1634220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634220ULL || rel >= 0x1634260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634260 size=800 callers=1 calls=10
   calls: InstanceTable_221, sub_15b8dc0, sub_15d2410, sub_15d2720, sub_15d2c30, sub_15d2c80, sub_15d7230, sub_1618110, sub_1618500, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_364(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634260ULL || rel >= 0x1634580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634580 size=16 callers=0 calls=0
*/
void sub_1634580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634580ULL || rel >= 0x1634590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634590 size=32 callers=6 calls=0
*/
void sub_1634590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634590ULL || rel >= 0x16345b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016345b0 size=240 callers=8 calls=2
   calls: sub_15c8aa0, sub_15c8ad0
*/
void sub_16345b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16345b0ULL || rel >= 0x16346a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016346a0 size=352 callers=1 calls=6
   calls: sub_15b8dc0, sub_15bc1e0, sub_15bc310, sub_15caa60, sub_1647560, sub_6a5230
   ref: <unknown>
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_365(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16346a0ULL || rel >= 0x1634800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634800 size=336 callers=0 calls=5
   calls: Result, sub_15e9650, sub_15e9a40, sub_162d130, sub_162d5a0
*/
void sub_1634800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634800ULL || rel >= 0x1634950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634950 size=240 callers=0 calls=3
   calls: sub_15b9390, sub_15c8ce0, sub_16388b0
*/
void sub_1634950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634950ULL || rel >= 0x1634a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634a40 size=336 callers=0 calls=5
   calls: Result, sub_15e9650, sub_15e9a40, sub_162d130, sub_162d5a0
*/
void sub_1634a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634a40ULL || rel >= 0x1634b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634b90 size=16 callers=0 calls=0
*/
void sub_1634b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634b90ULL || rel >= 0x1634ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634ba0 size=16 callers=0 calls=0
*/
void sub_1634ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634ba0ULL || rel >= 0x1634bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634bb0 size=16 callers=0 calls=0
*/
void sub_1634bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634bb0ULL || rel >= 0x1634bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634bc0 size=816 callers=1 calls=11
   calls: InstanceTable_201, InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_162a940, sub_162d520, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_366(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634bc0ULL || rel >= 0x1634ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01634ef0 size=768 callers=1 calls=10
   calls: InstanceTable_201, InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_162a940, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_367(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1634ef0ULL || rel >= 0x16351f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016351f0 size=912 callers=1 calls=11
   calls: InstanceTable_201, InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_162a940, sub_162d520, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_368(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16351f0ULL || rel >= 0x1635580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01635580 size=496 callers=0 calls=7
   calls: InstanceTable_201, InstanceTable_357, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_369(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1635580ULL || rel >= 0x1635770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01635770 size=624 callers=0 calls=10
   calls: InstanceTable_201, InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_162d520, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1635770ULL || rel >= 0x16359e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016359e0 size=640 callers=1 calls=10
   calls: InstanceTable_201, InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_162d630, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_371(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16359e0ULL || rel >= 0x1635c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01635c60 size=176 callers=0 calls=2
   calls: Result_2, sub_15bb240
*/
void sub_1635c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1635c60ULL || rel >= 0x1635d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01635d10 size=112 callers=0 calls=2
   calls: sub_15ceec0, sub_162d880
*/
void sub_1635d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1635d10ULL || rel >= 0x1635d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01635d80 size=16 callers=0 calls=0
*/
void sub_1635d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1635d80ULL || rel >= 0x1635d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01635d90 size=176 callers=2 calls=3
   calls: sub_15bc1e0, sub_15bc310, sub_15caa60
   ref: <unknown>
*/
void unknown_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1635d90ULL || rel >= 0x1635e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01635e40 size=16 callers=0 calls=0
*/
void sub_1635e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1635e40ULL || rel >= 0x1635e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01635e50 size=48 callers=2 calls=0
*/
void sub_1635e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1635e50ULL || rel >= 0x1635e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01635e80 size=192 callers=1 calls=2
   calls: InstanceTable_230, sub_1635f40
*/
void sub_1635e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1635e80ULL || rel >= 0x1635f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01635f40 size=416 callers=1 calls=5
   calls: sub_15b74e0, sub_15bc1e0, sub_15bc310, sub_15ebc20, sub_6a5230
*/
void sub_1635f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1635f40ULL || rel >= 0x16360e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016360e0 size=112 callers=1 calls=3
   calls: InstanceTable_231, sub_15b9390, sub_1636150
*/
void sub_16360e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16360e0ULL || rel >= 0x1636150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01636150 size=480 callers=3 calls=2
   calls: sub_15d7270, sub_6a5230
*/
void sub_1636150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1636150ULL || rel >= 0x1636330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01636330 size=16 callers=0 calls=0
*/
void sub_1636330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1636330ULL || rel >= 0x1636340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01636340 size=64 callers=1 calls=2
   calls: sub_1636150, sub_1636380
*/
void sub_1636340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1636340ULL || rel >= 0x1636380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01636380 size=2304 callers=1 calls=10
   calls: ConnectionManager, InstanceTable_321, sub_15b6dc0, sub_15b9340, sub_15d7290, sub_15ebde0, sub_15ebe10, sub_1636150, sub_6a5230, sub_6a54a0
*/
void sub_1636380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1636380ULL || rel >= 0x1636c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01636c80 size=16 callers=4 calls=0
*/
void sub_1636c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1636c80ULL || rel >= 0x1636c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01636c90 size=32 callers=3 calls=0
*/
void sub_1636c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1636c90ULL || rel >= 0x1636cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01636cb0 size=80 callers=1 calls=2
   calls: sub_15d7290, sub_15d7310
*/
void sub_1636cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1636cb0ULL || rel >= 0x1636d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01636d00 size=32 callers=0 calls=0
*/
void sub_1636d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1636d00ULL || rel >= 0x1636d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01636d20 size=64 callers=0 calls=0
*/
void sub_1636d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1636d20ULL || rel >= 0x1636d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01636d60 size=112 callers=1 calls=3
   calls: sub_15b7a70, sub_15c7ff0, sub_15ce120
*/
void sub_1636d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1636d60ULL || rel >= 0x1636dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01636dd0 size=192 callers=1 calls=4
   calls: sub_15b7a80, sub_15bc1e0, sub_15c7ff0, sub_15ce3b0
*/
void sub_1636dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1636dd0ULL || rel >= 0x1636e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01636e90 size=80 callers=0 calls=2
   calls: sub_15bc310, sub_15ce560
*/
void sub_1636e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1636e90ULL || rel >= 0x1636ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01636ee0 size=96 callers=0 calls=3
   calls: sub_15bc310, sub_15c8140, sub_15ce560
*/
void sub_1636ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1636ee0ULL || rel >= 0x1636f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01636f40 size=816 callers=1 calls=17
   calls: Buffer, sub_15b7b20, sub_15bb6c0, sub_15bc1e0, sub_15bc310, sub_15c7400, sub_15c7560, sub_15c7580, sub_15c7bd0, sub_15c7c40, sub_15c7dc0, sub_15c7dd0
   ... +5 more
*/
void sub_1636f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1636f40ULL || rel >= 0x1637270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01637270 size=16 callers=1 calls=0
*/
void sub_1637270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1637270ULL || rel >= 0x1637280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01637280 size=352 callers=1 calls=6
   calls: sub_15b8dc0, sub_15bc1e0, sub_15bc310, sub_15caa60, sub_1647560, sub_6a5230
   ref: <unknown>
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_372(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1637280ULL || rel >= 0x16373e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016373e0 size=576 callers=1 calls=5
   calls: InstanceTable_201, sub_15b8dc0, sub_15c8ad0, sub_162a940, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_373(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16373e0ULL || rel >= 0x1637620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01637620 size=656 callers=0 calls=9
   calls: Result, sub_15bc310, sub_15c3ee0, sub_15c7dc0, sub_15c7dd0, sub_15c8140, sub_15de370, sub_162d000, sub_162d130
*/
void sub_1637620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1637620ULL || rel >= 0x16378b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016378b0 size=368 callers=0 calls=8
   calls: sub_15b7a70, sub_15bc310, sub_15c7dc0, sub_15c7dd0, sub_15c8140, sub_15e9650, sub_15e9a40, sub_1637e70
*/
void sub_16378b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16378b0ULL || rel >= 0x1637a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01637a20 size=624 callers=1 calls=11
   calls: InstanceTable_201, InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_162a940, sub_1637d40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_374(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1637a20ULL || rel >= 0x1637c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01637c90 size=176 callers=0 calls=2
   calls: Result_2, sub_15bb240
*/
void sub_1637c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1637c90ULL || rel >= 0x1637d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01637d40 size=304 callers=1 calls=4
   calls: sub_15c8aa0, sub_15c8ad0, sub_15c8ca0, sub_162cec0
*/
void sub_1637d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1637d40ULL || rel >= 0x1637e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01637e70 size=704 callers=1 calls=5
   calls: sub_15b7b20, sub_15c3ee0, sub_15de370, sub_162d000, sub_162d5a0
*/
void sub_1637e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1637e70ULL || rel >= 0x1638130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638130 size=48 callers=0 calls=1
   calls: sub_162d880
*/
void sub_1638130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638130ULL || rel >= 0x1638160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638160 size=48 callers=0 calls=1
   calls: sub_162d880
*/
void sub_1638160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638160ULL || rel >= 0x1638190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638190 size=16 callers=0 calls=0
*/
void sub_1638190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638190ULL || rel >= 0x16381a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016381a0 size=16 callers=0 calls=0
   ref: CallProtocolMethod
*/
void CallProtocolMethod(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16381a0ULL || rel >= 0x16381b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016381b0 size=16 callers=0 calls=0
*/
void sub_16381b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16381b0ULL || rel >= 0x16381c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016381c0 size=48 callers=0 calls=1
   calls: sub_162d880
*/
void sub_16381c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16381c0ULL || rel >= 0x16381f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016381f0 size=16 callers=0 calls=0
*/
void sub_16381f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16381f0ULL || rel >= 0x1638200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638200 size=16 callers=0 calls=0
*/
void sub_1638200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638200ULL || rel >= 0x1638210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638210 size=16 callers=18 calls=0
*/
void sub_1638210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638210ULL || rel >= 0x1638220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638220 size=208 callers=36 calls=0
*/
void sub_1638220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638220ULL || rel >= 0x16382f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016382f0 size=48 callers=0 calls=1
   calls: sub_162d880
*/
void sub_16382f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16382f0ULL || rel >= 0x1638320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638320 size=16 callers=0 calls=0
*/
void sub_1638320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638320ULL || rel >= 0x1638330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638330 size=224 callers=0 calls=1
   calls: sub_15cac40
*/
void sub_1638330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638330ULL || rel >= 0x1638410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638410 size=192 callers=0 calls=4
   calls: sub_15b6dc0, sub_15bc1e0, sub_15bc310, sub_15caa60
   ref: <unknown>
*/
void unknown_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638410ULL || rel >= 0x16384d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016384d0 size=48 callers=0 calls=1
   calls: sub_162d880
*/
void sub_16384d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16384d0ULL || rel >= 0x1638500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638500 size=16 callers=0 calls=0
*/
void sub_1638500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638500ULL || rel >= 0x1638510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638510 size=224 callers=0 calls=1
   calls: sub_15cac40
*/
void sub_1638510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638510ULL || rel >= 0x16385f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016385f0 size=192 callers=0 calls=4
   calls: sub_15b6dc0, sub_15bc1e0, sub_15bc310, sub_15caa60
   ref: <unknown>
*/
void unknown_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16385f0ULL || rel >= 0x16386b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016386b0 size=64 callers=5 calls=1
   calls: sub_16386b0
*/
void sub_16386b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16386b0ULL || rel >= 0x16386f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016386f0 size=48 callers=0 calls=0
*/
void sub_16386f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16386f0ULL || rel >= 0x1638720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638720 size=80 callers=0 calls=0
*/
void sub_1638720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638720ULL || rel >= 0x1638770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638770 size=80 callers=0 calls=0
*/
void sub_1638770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638770ULL || rel >= 0x16387c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016387c0 size=32 callers=0 calls=0
*/
void sub_16387c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16387c0ULL || rel >= 0x16387e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016387e0 size=64 callers=0 calls=0
*/
void sub_16387e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16387e0ULL || rel >= 0x1638820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638820 size=64 callers=6 calls=1
   calls: sub_1638820
*/
void sub_1638820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638820ULL || rel >= 0x1638860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638860 size=16 callers=0 calls=0
*/
void sub_1638860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638860ULL || rel >= 0x1638870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638870 size=64 callers=3 calls=1
   calls: sub_1638870
*/
void sub_1638870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638870ULL || rel >= 0x16388b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016388b0 size=432 callers=2 calls=6
   calls: sub_15b9340, sub_15b9390, sub_15e9650, sub_15e9870, sub_15e9a40, sub_162f8a0
*/
void sub_16388b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16388b0ULL || rel >= 0x1638a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638a60 size=32 callers=0 calls=0
*/
void sub_1638a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638a60ULL || rel >= 0x1638a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638a80 size=64 callers=0 calls=1
   calls: sub_15e9a40
*/
void sub_1638a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638a80ULL || rel >= 0x1638ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638ac0 size=64 callers=0 calls=1
   calls: sub_15e9a40
*/
void sub_1638ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638ac0ULL || rel >= 0x1638b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638b00 size=128 callers=0 calls=2
   calls: sub_15b9390, sub_15e9a40
*/
void sub_1638b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638b00ULL || rel >= 0x1638b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638b80 size=144 callers=0 calls=2
   calls: sub_15b9390, sub_15e9a40
*/
void sub_1638b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638b80ULL || rel >= 0x1638c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638c10 size=144 callers=0 calls=2
   calls: sub_15b9390, sub_15e9a40
*/
void sub_1638c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638c10ULL || rel >= 0x1638ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638ca0 size=96 callers=0 calls=2
   calls: sub_15bc310, sub_15e9a40
*/
void sub_1638ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638ca0ULL || rel >= 0x1638d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638d00 size=112 callers=0 calls=3
   calls: sub_15bc310, sub_15c8140, sub_15e9a40
*/
void sub_1638d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638d00ULL || rel >= 0x1638d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638d70 size=112 callers=0 calls=3
   calls: sub_15bc310, sub_15c8140, sub_15e9a40
*/
void sub_1638d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638d70ULL || rel >= 0x1638de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638de0 size=96 callers=0 calls=0
*/
void sub_1638de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638de0ULL || rel >= 0x1638e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638e40 size=96 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_1638e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638e40ULL || rel >= 0x1638ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638ea0 size=96 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_1638ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638ea0ULL || rel >= 0x1638f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638f00 size=128 callers=0 calls=3
   calls: sub_15ceec0, sub_15cefa0, sub_162d880
*/
void sub_1638f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638f00ULL || rel >= 0x1638f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01638f80 size=272 callers=0 calls=3
   calls: sub_15b9340, sub_15bbf10, sub_162ce30
*/
void sub_1638f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1638f80ULL || rel >= 0x1639090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639090 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1639090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639090ULL || rel >= 0x1639120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639120 size=32 callers=0 calls=0
*/
void sub_1639120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639120ULL || rel >= 0x1639140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639140 size=16 callers=0 calls=0
*/
void sub_1639140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639140ULL || rel >= 0x1639150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639150 size=16 callers=0 calls=0
*/
void sub_1639150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639150ULL || rel >= 0x1639160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639160 size=144 callers=0 calls=0
*/
void sub_1639160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639160ULL || rel >= 0x16391f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016391f0 size=128 callers=0 calls=3
   calls: sub_15ceec0, sub_15cefa0, sub_162d880
*/
void sub_16391f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16391f0ULL || rel >= 0x1639270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639270 size=272 callers=0 calls=3
   calls: sub_15b9340, sub_15bbf10, sub_162ce30
*/
void sub_1639270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639270ULL || rel >= 0x1639380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639380 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1639380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639380ULL || rel >= 0x1639410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639410 size=32 callers=0 calls=0
*/
void sub_1639410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639410ULL || rel >= 0x1639430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639430 size=16 callers=0 calls=0
*/
void sub_1639430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639430ULL || rel >= 0x1639440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639440 size=16 callers=0 calls=0
*/
void sub_1639440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639440ULL || rel >= 0x1639450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639450 size=144 callers=0 calls=0
*/
void sub_1639450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639450ULL || rel >= 0x16394e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016394e0 size=128 callers=0 calls=3
   calls: sub_15ceec0, sub_15cefa0, sub_162d880
*/
void sub_16394e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16394e0ULL || rel >= 0x1639560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639560 size=272 callers=0 calls=3
   calls: sub_15b9340, sub_15bbf10, sub_162ce30
*/
void sub_1639560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639560ULL || rel >= 0x1639670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639670 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1639670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639670ULL || rel >= 0x1639700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639700 size=32 callers=0 calls=0
*/
void sub_1639700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639700ULL || rel >= 0x1639720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639720 size=16 callers=0 calls=0
*/
void sub_1639720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639720ULL || rel >= 0x1639730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639730 size=16 callers=0 calls=0
*/
void sub_1639730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639730ULL || rel >= 0x1639740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639740 size=144 callers=0 calls=0
*/
void sub_1639740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639740ULL || rel >= 0x16397d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016397d0 size=128 callers=0 calls=3
   calls: sub_15ceec0, sub_15cefa0, sub_162d880
*/
void sub_16397d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16397d0ULL || rel >= 0x1639850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639850 size=272 callers=0 calls=3
   calls: sub_15b9340, sub_15bbf10, sub_162ce30
*/
void sub_1639850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639850ULL || rel >= 0x1639960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639960 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1639960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639960ULL || rel >= 0x16399f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016399f0 size=32 callers=0 calls=0
*/
void sub_16399f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16399f0ULL || rel >= 0x1639a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639a10 size=16 callers=0 calls=0
*/
void sub_1639a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639a10ULL || rel >= 0x1639a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639a20 size=16 callers=0 calls=0
*/
void sub_1639a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639a20ULL || rel >= 0x1639a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639a30 size=144 callers=0 calls=0
*/
void sub_1639a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639a30ULL || rel >= 0x1639ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639ac0 size=128 callers=0 calls=3
   calls: sub_15ceec0, sub_15cefa0, sub_162d880
*/
void sub_1639ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639ac0ULL || rel >= 0x1639b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639b40 size=272 callers=0 calls=3
   calls: sub_15b9340, sub_15bbf10, sub_162ce30
*/
void sub_1639b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639b40ULL || rel >= 0x1639c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639c50 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1639c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639c50ULL || rel >= 0x1639ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639ce0 size=32 callers=0 calls=0
*/
void sub_1639ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639ce0ULL || rel >= 0x1639d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639d00 size=16 callers=0 calls=0
*/
void sub_1639d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639d00ULL || rel >= 0x1639d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639d10 size=16 callers=0 calls=0
*/
void sub_1639d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639d10ULL || rel >= 0x1639d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639d20 size=144 callers=0 calls=0
*/
void sub_1639d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639d20ULL || rel >= 0x1639db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01639db0 size=1024 callers=0 calls=5
   calls: sub_15b78f0, sub_15cee20, sub_15cef80, sub_162ce30, sub_1c0
*/
void sub_1639db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1639db0ULL || rel >= 0x163a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163a1b0 size=432 callers=8 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_375(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163a1b0ULL || rel >= 0x163a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163a360 size=512 callers=11 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_376(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163a360ULL || rel >= 0x163a560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163a560 size=112 callers=0 calls=2
   calls: sub_15ceec0, sub_162d880
*/
void sub_163a560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163a560ULL || rel >= 0x163a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163a5d0 size=16 callers=0 calls=0
*/
void sub_163a5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163a5d0ULL || rel >= 0x163a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163a5e0 size=192 callers=1 calls=6
   calls: InstanceTable_372, InstanceTable_375, sub_15b6dc0, sub_15bead0, sub_162e840, sub_16310f0
*/
void sub_163a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163a5e0ULL || rel >= 0x163a6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163a6a0 size=128 callers=1 calls=4
   calls: sub_15b6e10, sub_162e8c0, sub_1631120, sub_164b7b0
*/
void sub_163a6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163a6a0ULL || rel >= 0x163a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163a720 size=48 callers=0 calls=1
   calls: sub_163a6a0
*/
void sub_163a720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163a720ULL || rel >= 0x163a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163a750 size=16 callers=0 calls=0
*/
void sub_163a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163a750ULL || rel >= 0x163a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163a760 size=544 callers=1 calls=6
   calls: InstanceTable_201, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_163bf70, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_377(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163a760ULL || rel >= 0x163a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163a980 size=544 callers=1 calls=6
   calls: Result, sub_15c7dc0, sub_15c7dd0, sub_15cbfc0, sub_15cc060, sub_1633be0
*/
void sub_163a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163a980ULL || rel >= 0x163aba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163aba0 size=320 callers=0 calls=0
*/
void sub_163aba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163aba0ULL || rel >= 0x163ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163ace0 size=528 callers=0 calls=11
   calls: InstanceTable_373, sub_15b8dc0, sub_15c9350, sub_15ca030, sub_15cc060, sub_15ce0f0, sub_15de0e0, sub_15de2d0, sub_15de370, sub_1630b10, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_378(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163ace0ULL || rel >= 0x163aef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163aef0 size=80 callers=0 calls=2
   calls: InstanceTable_363, sub_15c8140
*/
void sub_163aef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163aef0ULL || rel >= 0x163af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163af40 size=80 callers=0 calls=3
   calls: InstanceTable_363, sub_15c8140, sub_15cc040
*/
void sub_163af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163af40ULL || rel >= 0x163af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163af90 size=224 callers=1 calls=6
   calls: InstanceTable_208, Result_2, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_379(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163af90ULL || rel >= 0x163b070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163b070 size=16 callers=0 calls=0
*/
void sub_163b070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163b070ULL || rel >= 0x163b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163b080 size=48 callers=2 calls=0
*/
void sub_163b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163b080ULL || rel >= 0x163b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163b0b0 size=1632 callers=0 calls=3
   calls: InstanceTable_379, sub_163b710, sub_163bcc0
*/
void sub_163b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163b0b0ULL || rel >= 0x163b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163b710 size=1456 callers=2 calls=19
   calls: Buffer, sub_15b6dc0, sub_15b7a70, sub_15b7a80, sub_15b83e0, sub_15bc1e0, sub_15bc310, sub_15c74b0, sub_15c7580, sub_15c7bd0, sub_15c7c40, sub_15c7dc0
   ... +7 more
*/
void sub_163b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163b710ULL || rel >= 0x163bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163bcc0 size=688 callers=4 calls=2
   calls: sub_15b9340, sub_6a54a0
*/
void sub_163bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163bcc0ULL || rel >= 0x163bf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163bf70 size=832 callers=1 calls=14
   calls: Result_2, sub_15b6dc0, sub_15b7a70, sub_15b9340, sub_15bab00, sub_15c7dc0, sub_15c7dd0, sub_15cbfc0, sub_15cc060, sub_15ce120, sub_15e9650, sub_15eaa80
   ... +2 more
*/
void sub_163bf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163bf70ULL || rel >= 0x163c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163c2b0 size=288 callers=0 calls=6
   calls: InstanceTable_374, InstanceTable_380, Result_2, sub_15b6dc0, sub_15cc060, sub_15ce0f0
*/
void sub_163c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163c2b0ULL || rel >= 0x163c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163c3d0 size=224 callers=1 calls=7
   calls: InstanceTable_205, InstanceTable_363, sub_15b9390, sub_15bc310, sub_15c8140, sub_15ce560, sub_15e9a40
*/
void sub_163c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163c3d0ULL || rel >= 0x163c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163c4b0 size=48 callers=0 calls=1
   calls: sub_163c3d0
*/
void sub_163c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163c4b0ULL || rel >= 0x163c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163c4e0 size=320 callers=6 calls=8
   calls: InstanceTable_208, sub_15b7b20, sub_15b8dc0, sub_15bab00, sub_15c5e40, sub_15c5ee0, sub_15e47e0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163c4e0ULL || rel >= 0x163c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163c620 size=256 callers=0 calls=6
   calls: InstanceTable_380, Result_2, Result_5, sub_15bbc70, sub_15bbd10, sub_15cc060
*/
void sub_163c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163c620ULL || rel >= 0x163c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163c720 size=448 callers=0 calls=13
   calls: InstanceTable_380, Result_2, sub_15b6dc0, sub_15bca70, sub_15c5ea0, sub_15c5f00, sub_15cc060, sub_15cc0b0, sub_15ce0f0, sub_15ce460, sub_15ce560, sub_1631380
   ... +1 more
*/
void sub_163c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163c720ULL || rel >= 0x163c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163c8e0 size=1168 callers=0 calls=8
   calls: InstanceTable_380, Result_2, sub_15bbd10, sub_15bca70, sub_15c6100, sub_1631150, sub_163b710, sub_163bcc0
*/
void sub_163c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163c8e0ULL || rel >= 0x163cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163cd70 size=320 callers=1 calls=9
   calls: sub_15baeb0, sub_15c7400, sub_15c7580, sub_15c7bc0, sub_15c7be0, sub_15c7dc0, sub_15c7dd0, sub_15c8140, sub_1631200
*/
void sub_163cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163cd70ULL || rel >= 0x163ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163ceb0 size=992 callers=1 calls=21
   calls: sub_15b6dc0, sub_15b7a70, sub_15b7a80, sub_15b7d90, sub_15b83e0, sub_15c7400, sub_15c74b0, sub_15c7580, sub_15c7bc0, sub_15c7bd0, sub_15c7be0, sub_15c7c40
   ... +9 more
*/
void sub_163ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163ceb0ULL || rel >= 0x163d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163d290 size=480 callers=1 calls=6
   calls: InstanceTable_201, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_163a980, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_381(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163d290ULL || rel >= 0x163d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163d470 size=384 callers=1 calls=12
   calls: InstanceTable_216, InstanceTable_230, InstanceTable_382, InstanceTable_383, NintendoNotificationEventManager, NotificationEventManager, Result_2, sub_15b6dc0, sub_15e9650, sub_1630a10, sub_1631c70, sub_16323e0
*/
void sub_163d470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163d470ULL || rel >= 0x163d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163d5f0 size=448 callers=1 calls=5
   calls: InstanceTable_216, sub_15b6dc0, sub_15b8dc0, sub_16477c0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_382(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163d5f0ULL || rel >= 0x163d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163d7b0 size=608 callers=1 calls=7
   calls: sub_15b6dc0, sub_15b78f0, sub_15b8dc0, sub_15cc990, sub_15cefc0, sub_164b920, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_383(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163d7b0ULL || rel >= 0x163da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163da10 size=912 callers=3 calls=12
   calls: CallContext, CallContext_2, InstanceTable_201, InstanceTable_205, InstanceTable_217, InstanceTable_231, InstanceTable_384, InstanceTable_385, InstanceTable_392, Result_2, sub_15ca030, sub_15e9a40
*/
void sub_163da10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163da10ULL || rel >= 0x163dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163dda0 size=160 callers=1 calls=3
   calls: CallContext, InstanceTable_201, sub_15ca030
*/
void sub_163dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163dda0ULL || rel >= 0x163de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163de40 size=320 callers=1 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_384(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163de40ULL || rel >= 0x163df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163df80 size=368 callers=1 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_385(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163df80ULL || rel >= 0x163e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163e0f0 size=48 callers=0 calls=1
   calls: sub_163da10
*/
void sub_163e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163e0f0ULL || rel >= 0x163e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163e120 size=16 callers=1 calls=0
*/
void sub_163e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163e120ULL || rel >= 0x163e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163e130 size=768 callers=4 calls=4
   calls: Result_2, sub_15b8dc0, sub_15d91f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_386(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163e130ULL || rel >= 0x163e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163e430 size=416 callers=5 calls=0
*/
void sub_163e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163e430ULL || rel >= 0x163e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163e5d0 size=1808 callers=2 calls=9
   calls: InstanceTable_201, sub_15b6dc0, sub_15b8dc0, sub_15bc1e0, sub_15bc310, sub_15c5460, sub_15cdab0, sub_1641ea0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_387(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163e5d0ULL || rel >= 0x163ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163ece0 size=16 callers=1 calls=0
*/
void sub_163ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163ece0ULL || rel >= 0x163ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163ecf0 size=16 callers=1 calls=0
*/
void sub_163ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163ecf0ULL || rel >= 0x163ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163ed00 size=400 callers=0 calls=3
   calls: sub_15b8dc0, sub_164b920, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_388(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163ed00ULL || rel >= 0x163ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163ee90 size=288 callers=1 calls=4
   calls: sub_15b6dc0, sub_15b8dc0, sub_15ce690, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_389(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163ee90ULL || rel >= 0x163efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163efb0 size=624 callers=0 calls=3
   calls: InstanceTable_391, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163efb0ULL || rel >= 0x163f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163f220 size=640 callers=3 calls=8
   calls: InstanceTable_201, InstanceTable_208, InstanceTable_418, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_391(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163f220ULL || rel >= 0x163f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163f4a0 size=32 callers=1 calls=0
*/
void sub_163f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163f4a0ULL || rel >= 0x163f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163f4c0 size=16 callers=0 calls=0
*/
void sub_163f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163f4c0ULL || rel >= 0x163f4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163f4d0 size=912 callers=1 calls=7
   calls: Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_15cbfc0, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_392(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163f4d0ULL || rel >= 0x163f860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163f860 size=32 callers=1 calls=0
*/
void sub_163f860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163f860ULL || rel >= 0x163f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163f880 size=32 callers=1 calls=0
*/
void sub_163f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163f880ULL || rel >= 0x163f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163f8a0 size=288 callers=2 calls=4
   calls: sub_15b6dc0, sub_15b8dc0, sub_15ce690, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_393(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163f8a0ULL || rel >= 0x163f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163f9c0 size=240 callers=0 calls=3
   calls: sub_15b8dc0, sub_15ca030, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_394(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163f9c0ULL || rel >= 0x163fab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163fab0 size=192 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_395(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163fab0ULL || rel >= 0x163fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163fb70 size=224 callers=0 calls=3
   calls: InstanceTable_411, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_396(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163fb70ULL || rel >= 0x163fc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163fc50 size=192 callers=0 calls=3
   calls: InstanceTable_412, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_397(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163fc50ULL || rel >= 0x163fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163fd10 size=64 callers=0 calls=1
   calls: sub_164bcd0
*/
void sub_163fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163fd10ULL || rel >= 0x163fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163fd50 size=64 callers=0 calls=2
   calls: sub_1634220, sub_164bcd0
*/
void sub_163fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163fd50ULL || rel >= 0x163fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163fd90 size=48 callers=0 calls=1
   calls: InstanceTable_398
*/
void sub_163fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163fd90ULL || rel >= 0x163fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0163fdc0 size=944 callers=1 calls=22
   calls: InstanceTable_359, InstanceTable_360, f_016llx, f_016zx, null_2, sub_15b7050, sub_15b72b0, sub_15b8dc0, sub_15bd810, sub_15bd850, sub_15bdab0, sub_15bdc00
   ... +10 more
   ref:   <EndPoint is NULL>
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref:  Protocol ID=
   ref: ClientProtocolRequestBroker: Error processing message. pBuffer=
   ref:  Size=
   ref:  CntSize=
   ref:   EndPoint: CID=
*/
void InstanceTable_398(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163fdc0ULL || rel >= 0x1640170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01640170 size=576 callers=0 calls=13
   calls: InstanceTable_364, InstanceTable_400, Result_2, sub_15b8dc0, sub_15bbd10, sub_15ce860, sub_15de0e0, sub_15de2d0, sub_162eec0, sub_1633a40, sub_1633a90, sub_1633b50
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_399(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1640170ULL || rel >= 0x16403b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016403b0 size=288 callers=3 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16403b0ULL || rel >= 0x16404d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016404d0 size=224 callers=0 calls=3
   calls: InstanceTable_402, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_401(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16404d0ULL || rel >= 0x16405b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016405b0 size=320 callers=1 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_402(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16405b0ULL || rel >= 0x16406f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016406f0 size=368 callers=0 calls=4
   calls: InstanceTable_215, Result_2, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_403(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16406f0ULL || rel >= 0x1640860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01640860 size=368 callers=0 calls=4
   calls: InstanceTable_215, sub_15b8dc0, sub_15d91f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_404(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1640860ULL || rel >= 0x16409d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016409d0 size=528 callers=0 calls=4
   calls: sub_15b8dc0, sub_15b9340, sub_6a5230, sub_6a54a0
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_405(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16409d0ULL || rel >= 0x1640be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01640be0 size=400 callers=0 calls=4
   calls: sub_15b8dc0, sub_15b9390, sub_6a5230, sub_6f9720
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_406(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1640be0ULL || rel >= 0x1640d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01640d70 size=288 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_407(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1640d70ULL || rel >= 0x1640e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01640e90 size=16 callers=0 calls=0
*/
void sub_1640e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1640e90ULL || rel >= 0x1640ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01640ea0 size=16 callers=0 calls=0
*/
void sub_1640ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1640ea0ULL || rel >= 0x1640eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01640eb0 size=16 callers=0 calls=0
*/
void sub_1640eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1640eb0ULL || rel >= 0x1640ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01640ec0 size=16 callers=0 calls=0
*/
void sub_1640ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1640ec0ULL || rel >= 0x1640ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01640ed0 size=16 callers=0 calls=0
*/
void sub_1640ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1640ed0ULL || rel >= 0x1640ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01640ee0 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_1640ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1640ee0ULL || rel >= 0x1640f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01640f10 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_1640f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1640f10ULL || rel >= 0x1640f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01640f40 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_1640f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1640f40ULL || rel >= 0x1640f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01640f70 size=336 callers=1 calls=6
   calls: Protocol, sub_15b6dc0, sub_15b8dc0, sub_15d2cd0, sub_1635e80, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_408(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1640f70ULL || rel >= 0x16410c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016410c0 size=208 callers=0 calls=0
*/
void sub_16410c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16410c0ULL || rel >= 0x1641190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01641190 size=224 callers=0 calls=1
   calls: sub_16360e0
*/
void sub_1641190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1641190ULL || rel >= 0x1641270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01641270 size=256 callers=0 calls=4
   calls: sub_15b6dc0, sub_15b8dc0, sub_1630d30, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_409(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1641270ULL || rel >= 0x1641370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01641370 size=16 callers=0 calls=0
*/
void sub_1641370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1641370ULL || rel >= 0x1641380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01641380 size=64 callers=0 calls=0
*/
void sub_1641380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1641380ULL || rel >= 0x16413c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016413c0 size=320 callers=0 calls=0
*/
void sub_16413c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16413c0ULL || rel >= 0x1641500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01641500 size=176 callers=0 calls=2
   calls: sub_15bb6c0, sub_15bc310
*/
void sub_1641500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1641500ULL || rel >= 0x16415b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016415b0 size=176 callers=0 calls=2
   calls: sub_15bb6c0, sub_15bc310
*/
void sub_16415b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16415b0ULL || rel >= 0x1641660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01641660 size=32 callers=6 calls=0
*/
void sub_1641660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1641660ULL || rel >= 0x1641680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01641680 size=16 callers=0 calls=0
*/
void sub_1641680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1641680ULL || rel >= 0x1641690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01641690 size=16 callers=0 calls=0
*/
void sub_1641690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1641690ULL || rel >= 0x16416a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016416a0 size=560 callers=0 calls=7
   calls: InstanceTable_201, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15c5460, sub_1646420, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16416a0ULL || rel >= 0x16418d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016418d0 size=16 callers=3 calls=0
*/
void sub_16418d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16418d0ULL || rel >= 0x16418e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016418e0 size=16 callers=3 calls=0
*/
void sub_16418e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16418e0ULL || rel >= 0x16418f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016418f0 size=192 callers=0 calls=0
*/
void sub_16418f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16418f0ULL || rel >= 0x16419b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016419b0 size=368 callers=0 calls=7
   calls: Result_2, sub_10ff360, sub_15bc310, sub_1630a90, sub_1630ba0, sub_1630bf0, sub_1632870
*/
void sub_16419b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16419b0ULL || rel >= 0x1641b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01641b20 size=496 callers=1 calls=4
   calls: sub_15b8dc0, sub_15b9340, sub_6a5230, sub_6a54a0
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_411(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1641b20ULL || rel >= 0x1641d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01641d10 size=400 callers=1 calls=4
   calls: sub_15b8dc0, sub_15b9390, sub_6a5230, sub_6f9720
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_412(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1641d10ULL || rel >= 0x1641ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01641ea0 size=912 callers=1 calls=15
   calls: Result, Result_2, sub_15b6dc0, sub_15b7a70, sub_15b9340, sub_15bc1e0, sub_15bead0, sub_15c7dc0, sub_15c7dd0, sub_15cbfc0, sub_15cc060, sub_15d8af0
   ... +3 more
*/
void sub_1641ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1641ea0ULL || rel >= 0x1642230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01642230 size=1360 callers=0 calls=20
   calls: CallContext, InstanceTable_235, InstanceTable_414, Result_2, localhost, sub_15b6dc0, sub_15b8dc0, sub_15bab00, sub_15bc1e0, sub_15bc310, sub_15bc5d0, sub_15bca70
   ... +8 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_413(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1642230ULL || rel >= 0x1642780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01642780 size=720 callers=1 calls=7
   calls: InstanceTable_205, InstanceTable_363, sub_15b9390, sub_15bc310, sub_15c8140, sub_15d8b20, sub_15e9a40
*/
void sub_1642780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1642780ULL || rel >= 0x1642a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01642a50 size=320 callers=0 calls=0
*/
void sub_1642a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1642a50ULL || rel >= 0x1642b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01642b90 size=48 callers=0 calls=1
   calls: sub_1642780
*/
void sub_1642b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1642b90ULL || rel >= 0x1642bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01642bc0 size=512 callers=15 calls=10
   calls: CallContext, InstanceTable_208, InstanceTable_391, sub_15b6dc0, sub_15b8dc0, sub_15bbd10, sub_15c5e40, sub_15c5ee0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_414(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1642bc0ULL || rel >= 0x1642dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01642dc0 size=1584 callers=0 calls=24
   calls: CallContext, InstanceTable_414, InstanceTable_415, Result_2, null_2, sub_15b6dc0, sub_15b8dc0, sub_15bab00, sub_15bc1e0, sub_15bc310, sub_15bc5d0, sub_15bca70
   ... +12 more
   ref: ;type=
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: prudp:/address=
   ref: ;stream=
   ref: ;port=
*/
void address_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1642dc0ULL || rel >= 0x16433f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016433f0 size=128 callers=0 calls=2
   calls: InstanceTable_414, sub_15cc060
*/
void sub_16433f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16433f0ULL || rel >= 0x1643470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01643470 size=960 callers=2 calls=8
   calls: InstanceTable_408, sub_15b6dc0, sub_15b8dc0, sub_1636340, sub_1636c80, sub_1636cb0, sub_164a830, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_415(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1643470ULL || rel >= 0x1643830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01643830 size=288 callers=2 calls=4
   calls: InstanceTable_227, sub_15b9340, sub_15b9390, sub_15e9870
*/
void sub_1643830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1643830ULL || rel >= 0x1643950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01643950 size=640 callers=0 calls=3
   calls: InstanceTable_414, sub_15cc060, sub_15d78a0
*/
void sub_1643950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1643950ULL || rel >= 0x1643bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01643bd0 size=272 callers=0 calls=5
   calls: InstanceTable_377, InstanceTable_414, Result_2, sub_15b6dc0, sub_15ce0f0
*/
void sub_1643bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1643bd0ULL || rel >= 0x1643ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01643ce0 size=416 callers=0 calls=7
   calls: InstanceTable_414, Result_2, sub_15b7f90, sub_15b8d60, sub_15b8dc0, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_416(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1643ce0ULL || rel >= 0x1643e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01643e80 size=960 callers=0 calls=27
   calls: CallContext, InstanceTable_414, InstanceTable_415, Result_2, localhost, sub_15b6dc0, sub_15bc310, sub_15bc5d0, sub_15bca70, sub_15beb70, sub_15cc060, sub_15cc0b0
   ... +15 more
*/
void sub_1643e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1643e80ULL || rel >= 0x1644240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01644240 size=656 callers=1 calls=0
*/
void sub_1644240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1644240ULL || rel >= 0x16444d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016444d0 size=1536 callers=0 calls=21
   calls: InstanceTable_414, sub_15b8dc0, sub_15bc310, sub_15bc5d0, sub_15cc060, sub_15dacb0, sub_15dd3a0, sub_15dd720, sub_15dfb20, sub_15e47e0, sub_15e6fc0, sub_15e6fd0
   ... +9 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_417(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16444d0ULL || rel >= 0x1644ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01644ad0 size=736 callers=0 calls=3
   calls: InstanceTable_414, sub_15cc060, sub_15d78a0
*/
void sub_1644ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1644ad0ULL || rel >= 0x1644db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01644db0 size=576 callers=0 calls=7
   calls: CallContext, InstanceTable_414, Result_2, sub_15b6dc0, sub_15cc0b0, sub_15ce0f0, sub_1644ff0
*/
void sub_1644db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1644db0ULL || rel >= 0x1644ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01644ff0 size=256 callers=1 calls=4
   calls: InstanceTable_366, InstanceTable_368, InstanceTable_432, sub_15b9390
*/
void sub_1644ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1644ff0ULL || rel >= 0x16450f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016450f0 size=544 callers=0 calls=7
   calls: CallContext, InstanceTable_228, InstanceTable_414, Result_2, sub_15b6dc0, sub_15cc0b0, sub_15ce0f0
*/
void sub_16450f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16450f0ULL || rel >= 0x1645310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01645310 size=112 callers=0 calls=2
   calls: sub_15cc060, sub_1636c80
*/
void sub_1645310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645310ULL || rel >= 0x1645380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01645380 size=144 callers=0 calls=4
   calls: InstanceTable_414, Result_2, sub_15ce0f0, sub_1636c90
*/
void sub_1645380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645380ULL || rel >= 0x1645410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01645410 size=64 callers=0 calls=1
   calls: InstanceTable_414
*/
void sub_1645410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645410ULL || rel >= 0x1645450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01645450 size=272 callers=0 calls=0
*/
void sub_1645450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645450ULL || rel >= 0x1645560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01645560 size=16 callers=0 calls=0
*/
void sub_1645560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645560ULL || rel >= 0x1645570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01645570 size=448 callers=1 calls=6
   calls: InstanceTable_215, Result_2, sub_15b8dc0, sub_15cbfc0, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_418(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645570ULL || rel >= 0x1645730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01645730 size=240 callers=0 calls=4
   calls: InstanceTable_228, sub_15b6dc0, sub_15cc060, sub_15ce0f0
*/
void sub_1645730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645730ULL || rel >= 0x1645820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01645820 size=64 callers=0 calls=1
   calls: InstanceTable_205
*/
void sub_1645820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645820ULL || rel >= 0x1645860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01645860 size=64 callers=0 calls=2
   calls: InstanceTable_205, sub_15cc040
*/
void sub_1645860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645860ULL || rel >= 0x16458a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016458a0 size=832 callers=0 calls=7
   calls: InstanceTable_291, sub_15b8dc0, sub_15b9390, sub_15cc060, sub_15dacb0, sub_15e6fc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_419(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16458a0ULL || rel >= 0x1645be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01645be0 size=544 callers=0 calls=4
   calls: sub_15cc060, sub_15e47e0, sub_15e9650, sub_15e9a40
*/
void sub_1645be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645be0ULL || rel >= 0x1645e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01645e00 size=112 callers=0 calls=2
   calls: sub_15cc060, sub_1636c80
*/
void sub_1645e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645e00ULL || rel >= 0x1645e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01645e70 size=256 callers=0 calls=6
   calls: InstanceTable_208, Result_2, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645e70ULL || rel >= 0x1645f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01645f70 size=208 callers=0 calls=3
   calls: sub_15cc060, sub_15ce0f0, sub_1636c90
*/
void sub_1645f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645f70ULL || rel >= 0x1646040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646040 size=208 callers=0 calls=2
   calls: sub_15cc060, sub_15ce0f0
*/
void sub_1646040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646040ULL || rel >= 0x1646110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646110 size=64 callers=0 calls=1
   calls: InstanceTable_205
*/
void sub_1646110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646110ULL || rel >= 0x1646150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646150 size=64 callers=0 calls=2
   calls: InstanceTable_205, sub_15cc040
*/
void sub_1646150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646150ULL || rel >= 0x1646190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646190 size=144 callers=0 calls=2
   calls: sub_15cc060, sub_15ce0f0
*/
void sub_1646190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646190ULL || rel >= 0x1646220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646220 size=192 callers=0 calls=5
   calls: InstanceTable_391, InstanceTable_421, Result_2, sub_15b6dc0, sub_15ce0f0
*/
void sub_1646220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646220ULL || rel >= 0x16462e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016462e0 size=64 callers=0 calls=1
   calls: InstanceTable_421
*/
void sub_16462e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16462e0ULL || rel >= 0x1646320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646320 size=256 callers=2 calls=5
   calls: InstanceTable_208, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_421(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646320ULL || rel >= 0x1646420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646420 size=320 callers=1 calls=4
   calls: Result_2, sub_15bc1e0, sub_15cbfc0, sub_1626e60
*/
void sub_1646420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646420ULL || rel >= 0x1646560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646560 size=128 callers=0 calls=4
   calls: InstanceTable_205, sub_15b9390, sub_15bc310, sub_1626e80
*/
void sub_1646560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646560ULL || rel >= 0x16465e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016465e0 size=144 callers=0 calls=4
   calls: InstanceTable_205, sub_15b9390, sub_15bc310, sub_1626e80
*/
void sub_16465e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16465e0ULL || rel >= 0x1646670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646670 size=144 callers=0 calls=5
   calls: InstanceTable_205, sub_15b9390, sub_15bc310, sub_15cc040, sub_1626e80
*/
void sub_1646670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646670ULL || rel >= 0x1646700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646700 size=16 callers=0 calls=0
*/
void sub_1646700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646700ULL || rel >= 0x1646710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646710 size=256 callers=0 calls=5
   calls: InstanceTable_423, Result_2, sub_15b8dc0, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_422(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646710ULL || rel >= 0x1646810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646810 size=320 callers=6 calls=6
   calls: InstanceTable_206, InstanceTable_208, sub_15b8dc0, sub_15c5e40, sub_15c5ee0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_423(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646810ULL || rel >= 0x1646950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646950 size=16 callers=0 calls=0
*/
void sub_1646950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646950ULL || rel >= 0x1646960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646960 size=304 callers=0 calls=5
   calls: InstanceTable_423, Result_2, sub_15b8dc0, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_424(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646960ULL || rel >= 0x1646a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646a90 size=16 callers=0 calls=0
*/
void sub_1646a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646a90ULL || rel >= 0x1646aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646aa0 size=336 callers=0 calls=5
   calls: InstanceTable_423, Result_2, sub_15b8dc0, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: Location
*/
void Location_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646aa0ULL || rel >= 0x1646bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646bf0 size=16 callers=0 calls=0
*/
void sub_1646bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646bf0ULL || rel >= 0x1646c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646c00 size=384 callers=0 calls=7
   calls: InstanceTable_206, InstanceTable_423, Result_2, sub_10fb680, sub_15b8dc0, sub_15c5e40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_425(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646c00ULL || rel >= 0x1646d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646d80 size=16 callers=0 calls=0
*/
void sub_1646d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646d80ULL || rel >= 0x1646d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646d90 size=368 callers=0 calls=5
   calls: Result_3, sub_15b8dc0, sub_15bab00, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_426(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646d90ULL || rel >= 0x1646f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01646f00 size=528 callers=0 calls=12
   calls: CallContext, InstanceTable_350, InstanceTable_423, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15bb6c0, sub_15c5e40, sub_15cbf00, sub_15cc0b0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_427(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1646f00ULL || rel >= 0x1647110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647110 size=736 callers=0 calls=10
   calls: InstanceTable_423, Result_2, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15bab00, sub_15bc5d0, sub_15c5e40, sub_15cc060, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_428(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647110ULL || rel >= 0x16473f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016473f0 size=320 callers=1 calls=1
   calls: sub_1638870
*/
void sub_16473f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16473f0ULL || rel >= 0x1647530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647530 size=48 callers=0 calls=1
   calls: sub_16473f0
*/
void sub_1647530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647530ULL || rel >= 0x1647560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647560 size=48 callers=4 calls=1
   calls: sub_1630a10
*/
void sub_1647560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647560ULL || rel >= 0x1647590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647590 size=560 callers=0 calls=4
   calls: sub_15b8dc0, sub_15b9340, sub_6a5230, sub_6a54a0
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_429(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647590ULL || rel >= 0x16477c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016477c0 size=352 callers=1 calls=6
   calls: InstanceTable_216, NotificationEventManager, sub_15b6dc0, sub_15cc990, sub_15cefc0, sub_16323e0
*/
void sub_16477c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16477c0ULL || rel >= 0x1647920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647920 size=528 callers=0 calls=4
   calls: sub_15b8dc0, sub_15b9340, sub_6a5230, sub_6a54a0
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647920ULL || rel >= 0x1647b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647b30 size=128 callers=0 calls=3
   calls: InstanceTable_217, InstantiationContext_3, sub_164bcd0
*/
void sub_1647b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647b30ULL || rel >= 0x1647bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647bb0 size=128 callers=0 calls=3
   calls: InstanceTable_217, InstantiationContext_3, sub_164bcd0
*/
void sub_1647bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647bb0ULL || rel >= 0x1647c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647c30 size=48 callers=1 calls=1
   calls: sub_163d470
*/
void sub_1647c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647c30ULL || rel >= 0x1647c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647c60 size=48 callers=0 calls=1
   calls: sub_163da10
*/
void sub_1647c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647c60ULL || rel >= 0x1647c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647c90 size=160 callers=2 calls=2
   calls: InstanceTable_387, InstanceTable_393
*/
void sub_1647c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647c90ULL || rel >= 0x1647d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647d30 size=144 callers=1 calls=2
   calls: InstanceTable_387, InstanceTable_393
*/
void sub_1647d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647d30ULL || rel >= 0x1647dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647dc0 size=64 callers=1 calls=1
   calls: InstanceTable_389
*/
void sub_1647dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647dc0ULL || rel >= 0x1647e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647e00 size=352 callers=12 calls=6
   calls: sub_15b7b20, sub_15b85e0, sub_15b8dc0, sub_15bde80, sub_15be030, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_431(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647e00ULL || rel >= 0x1647f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647f60 size=16 callers=0 calls=0
*/
void sub_1647f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647f60ULL || rel >= 0x1647f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647f70 size=16 callers=0 calls=0
*/
void sub_1647f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647f70ULL || rel >= 0x1647f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647f80 size=16 callers=0 calls=0
*/
void sub_1647f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647f80ULL || rel >= 0x1647f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647f90 size=16 callers=0 calls=0
*/
void sub_1647f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647f90ULL || rel >= 0x1647fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647fa0 size=64 callers=0 calls=2
   calls: sub_162e8c0, sub_1638220
*/
void sub_1647fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647fa0ULL || rel >= 0x1647fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01647fe0 size=80 callers=0 calls=3
   calls: InstanceTable_376, sub_162e8c0, sub_1638220
*/
void sub_1647fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647fe0ULL || rel >= 0x1648030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01648030 size=16 callers=0 calls=0
*/
void sub_1648030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1648030ULL || rel >= 0x1648040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01648040 size=16 callers=0 calls=0
*/
void sub_1648040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1648040ULL || rel >= 0x1648050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01648050 size=672 callers=1 calls=14
   calls: sub_15b4510, sub_15b8dc0, sub_15b9390, sub_15d89d0, sub_15dacb0, sub_15e63c0, sub_15e72d0, sub_15ea720, sub_15ea770, sub_15ea7c0, sub_15ea7f0, sub_15eaa50
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_432(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1648050ULL || rel >= 0x16482f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016482f0 size=352 callers=0 calls=6
   calls: sub_15b8dc0, sub_15dacb0, sub_15dd720, sub_15e73c0, sub_15eae80, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_433(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16482f0ULL || rel >= 0x1648450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01648450 size=272 callers=0 calls=12
   calls: InstanceTable_363, InstanceTable_371, sub_15bacf0, sub_15bad00, sub_15bd810, sub_15bd850, sub_15bd900, sub_15bd960, sub_15cf190, sub_15cf3c0, sub_15cf570, sub_1633be0
*/
void sub_1648450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1648450ULL || rel >= 0x1648560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01648560 size=720 callers=1 calls=8
   calls: Result, Result_2, sub_15bbd10, sub_15bead0, sub_15c5880, sub_15e9650, sub_15e9870, sub_1633be0
*/
void sub_1648560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1648560ULL || rel >= 0x1648830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01648830 size=896 callers=1 calls=6
   calls: InstanceTable_205, InstanceTable_363, sub_15b8dc0, sub_15b9390, sub_15e9a40, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_434(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1648830ULL || rel >= 0x1648bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01648bb0 size=48 callers=0 calls=1
   calls: InstanceTable_434
*/
void sub_1648bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1648bb0ULL || rel >= 0x1648be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01648be0 size=32 callers=0 calls=0
*/
void sub_1648be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1648be0ULL || rel >= 0x1648c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01648c00 size=112 callers=0 calls=1
   calls: sub_1648c70
*/
void sub_1648c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1648c00ULL || rel >= 0x1648c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01648c70 size=160 callers=1 calls=0
*/
void sub_1648c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1648c70ULL || rel >= 0x1648d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01648d10 size=544 callers=0 calls=20
   calls: Result_2, sub_15b9340, sub_15bbd10, sub_15bc310, sub_15bca70, sub_15c5ee0, sub_15d7230, sub_15d7a30, sub_15dd720, sub_15dd850, sub_15e47e0, sub_15e63c0
   ... +8 more
*/
void sub_1648d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1648d10ULL || rel >= 0x1648f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01648f30 size=1488 callers=0 calls=7
   calls: InstanceTable_367, InstanceTable_381, Result_2, sub_15bbd10, sub_15c5ee0, sub_15ca030, sub_15ce0f0
*/
void sub_1648f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1648f30ULL || rel >= 0x1649500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01649500 size=832 callers=0 calls=15
   calls: InstanceTable_227, Result_2, sub_15b6dc0, sub_15b9340, sub_15b9390, sub_15bbd10, sub_15beb70, sub_15c5ee0, sub_15c7400, sub_15ca030, sub_15ce0f0, sub_15e9870
   ... +3 more
*/
void sub_1649500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1649500ULL || rel >= 0x1649840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01649840 size=432 callers=0 calls=9
   calls: Result_2, sub_15bbc90, sub_15bbd10, sub_15c5ee0, sub_15c7400, sub_15c7560, sub_15c7580, sub_15c7bd0, sub_15c7cf0
*/
void sub_1649840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1649840ULL || rel >= 0x16499f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016499f0 size=224 callers=0 calls=3
   calls: sub_15b8dc0, sub_15ce0f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_435(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16499f0ULL || rel >= 0x1649ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01649ad0 size=16 callers=0 calls=0
*/
void sub_1649ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1649ad0ULL || rel >= 0x1649ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01649ae0 size=368 callers=0 calls=7
   calls: Result_2, sub_15b8dc0, sub_15bbd10, sub_15ce0f0, sub_15d8fe0, sub_15d9040, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_436(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1649ae0ULL || rel >= 0x1649c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01649c50 size=32 callers=0 calls=0
*/
void sub_1649c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1649c50ULL || rel >= 0x1649c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01649c70 size=64 callers=0 calls=1
   calls: sub_15d8ed0
*/
void sub_1649c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1649c70ULL || rel >= 0x1649cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01649cb0 size=128 callers=0 calls=3
   calls: sub_15bbc90, sub_15bbd10, sub_15d90d0
*/
void sub_1649cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1649cb0ULL || rel >= 0x1649d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01649d30 size=880 callers=0 calls=8
   calls: Result_2, sub_15b6dc0, sub_15b8dc0, sub_15bbd10, sub_15c5460, sub_1648560, sub_6a5230, unnamed_69
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_437(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1649d30ULL || rel >= 0x164a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a0a0 size=272 callers=0 calls=5
   calls: Result_2, sub_15bbd10, sub_15d78a0, sub_15d8fe0, sub_15d9040
*/
void sub_164a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a0a0ULL || rel >= 0x164a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a1b0 size=336 callers=0 calls=5
   calls: sub_15b8dc0, sub_15d78a0, sub_15d8fe0, sub_15d9040, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_438(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a1b0ULL || rel >= 0x164a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a300 size=288 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_439(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a300ULL || rel >= 0x164a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a420 size=32 callers=0 calls=0
*/
void sub_164a420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a420ULL || rel >= 0x164a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a440 size=32 callers=0 calls=0
*/
void sub_164a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a440ULL || rel >= 0x164a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a460 size=32 callers=0 calls=0
*/
void sub_164a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a460ULL || rel >= 0x164a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a480 size=32 callers=0 calls=0
*/
void sub_164a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a480ULL || rel >= 0x164a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a4a0 size=32 callers=0 calls=0
*/
void sub_164a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a4a0ULL || rel >= 0x164a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a4c0 size=32 callers=0 calls=0
*/
void sub_164a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a4c0ULL || rel >= 0x164a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a4e0 size=32 callers=0 calls=0
*/
void sub_164a4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a4e0ULL || rel >= 0x164a500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a500 size=32 callers=0 calls=0
*/
void sub_164a500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a500ULL || rel >= 0x164a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a520 size=32 callers=0 calls=0
*/
void sub_164a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a520ULL || rel >= 0x164a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a540 size=32 callers=0 calls=0
*/
void sub_164a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a540ULL || rel >= 0x164a560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a560 size=32 callers=0 calls=0
*/
void sub_164a560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a560ULL || rel >= 0x164a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a580 size=32 callers=0 calls=0
*/
void sub_164a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a580ULL || rel >= 0x164a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a5a0 size=32 callers=0 calls=0
*/
void sub_164a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a5a0ULL || rel >= 0x164a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a5c0 size=32 callers=0 calls=0
*/
void sub_164a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a5c0ULL || rel >= 0x164a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a5e0 size=32 callers=0 calls=0
*/
void sub_164a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a5e0ULL || rel >= 0x164a600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a600 size=32 callers=0 calls=0
*/
void sub_164a600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a600ULL || rel >= 0x164a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a620 size=32 callers=0 calls=0
*/
void sub_164a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a620ULL || rel >= 0x164a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a640 size=32 callers=0 calls=0
*/
void sub_164a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a640ULL || rel >= 0x164a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a660 size=32 callers=0 calls=0
*/
void sub_164a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a660ULL || rel >= 0x164a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a680 size=32 callers=0 calls=0
*/
void sub_164a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a680ULL || rel >= 0x164a6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a6a0 size=32 callers=0 calls=0
*/
void sub_164a6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a6a0ULL || rel >= 0x164a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a6c0 size=32 callers=0 calls=0
*/
void sub_164a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a6c0ULL || rel >= 0x164a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a6e0 size=32 callers=0 calls=0
*/
void sub_164a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a6e0ULL || rel >= 0x164a700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a700 size=304 callers=0 calls=5
   calls: sub_15c74b0, sub_15c7580, sub_15d8fe0, sub_15d9040, sub_163ceb0
*/
void sub_164a700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a700ULL || rel >= 0x164a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a830 size=288 callers=2 calls=5
   calls: InstanceTable_365, InstanceTable_375, sub_15b6dc0, sub_15d7a80, sub_162e840
*/
void sub_164a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a830ULL || rel >= 0x164a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164a950 size=368 callers=0 calls=0
*/
void sub_164a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a950ULL || rel >= 0x164aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164aac0 size=384 callers=0 calls=1
   calls: sub_15d7e30
*/
void sub_164aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164aac0ULL || rel >= 0x164ac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ac40 size=32 callers=0 calls=1
   calls: sub_15ea3c0
*/
void sub_164ac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ac40ULL || rel >= 0x164ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ac60 size=16 callers=0 calls=0
   ref: prudps
*/
void prudps_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ac60ULL || rel >= 0x164ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ac70 size=112 callers=0 calls=2
   calls: sub_15b6dc0, sub_15d8e00
*/
void sub_164ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ac70ULL || rel >= 0x164ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ace0 size=112 callers=0 calls=3
   calls: sub_15d78a0, sub_15d8fe0, sub_15d9040
*/
void sub_164ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ace0ULL || rel >= 0x164ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ad50 size=16 callers=0 calls=0
*/
void sub_164ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ad50ULL || rel >= 0x164ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ad60 size=16 callers=0 calls=0
*/
void sub_164ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ad60ULL || rel >= 0x164ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ad70 size=16 callers=0 calls=0
*/
void sub_164ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ad70ULL || rel >= 0x164ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ad80 size=16 callers=0 calls=0
*/
void sub_164ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ad80ULL || rel >= 0x164ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ad90 size=16 callers=0 calls=0
*/
void sub_164ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ad90ULL || rel >= 0x164ada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ada0 size=16 callers=0 calls=0
*/
void sub_164ada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ada0ULL || rel >= 0x164adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164adb0 size=16 callers=0 calls=0
*/
void sub_164adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164adb0ULL || rel >= 0x164adc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164adc0 size=16 callers=0 calls=0
*/
void sub_164adc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164adc0ULL || rel >= 0x164add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164add0 size=16 callers=0 calls=0
*/
void sub_164add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164add0ULL || rel >= 0x164ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ade0 size=16 callers=0 calls=0
*/
void sub_164ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ade0ULL || rel >= 0x164adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164adf0 size=48 callers=0 calls=0
*/
void sub_164adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164adf0ULL || rel >= 0x164ae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ae20 size=48 callers=0 calls=0
*/
void sub_164ae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ae20ULL || rel >= 0x164ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ae50 size=32 callers=0 calls=0
*/
void sub_164ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ae50ULL || rel >= 0x164ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ae70 size=112 callers=0 calls=5
   calls: sub_15b6dc0, sub_15e47a0, sub_15e9620, sub_15e9650, sub_15ea6f0
*/
void sub_164ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ae70ULL || rel >= 0x164aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164aee0 size=16 callers=0 calls=0
*/
void sub_164aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164aee0ULL || rel >= 0x164aef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164aef0 size=144 callers=2 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164aef0ULL || rel >= 0x164af80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164af80 size=16 callers=0 calls=0
*/
void sub_164af80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164af80ULL || rel >= 0x164af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164af90 size=576 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_441(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164af90ULL || rel >= 0x164b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b1d0 size=448 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_442(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b1d0ULL || rel >= 0x164b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b390 size=80 callers=2 calls=0
*/
void sub_164b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b390ULL || rel >= 0x164b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b3e0 size=256 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_443(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b3e0ULL || rel >= 0x164b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b4e0 size=48 callers=0 calls=0
*/
void sub_164b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b4e0ULL || rel >= 0x164b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b510 size=80 callers=0 calls=1
   calls: sub_15c9350
*/
void sub_164b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b510ULL || rel >= 0x164b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b560 size=16 callers=0 calls=0
*/
void sub_164b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b560ULL || rel >= 0x164b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b570 size=48 callers=0 calls=1
   calls: sub_162d880
*/
void sub_164b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b570ULL || rel >= 0x164b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b5a0 size=64 callers=0 calls=1
   calls: sub_164bd10
*/
void sub_164b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b5a0ULL || rel >= 0x164b5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b5e0 size=64 callers=0 calls=2
   calls: sub_1632c50, sub_164bd10
*/
void sub_164b5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b5e0ULL || rel >= 0x164b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b620 size=16 callers=0 calls=0
*/
void sub_164b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b620ULL || rel >= 0x164b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b630 size=16 callers=0 calls=0
   ref: RendezVousLogin
*/
void RendezVousLogin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b630ULL || rel >= 0x164b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b640 size=16 callers=0 calls=0
*/
void sub_164b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b640ULL || rel >= 0x164b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b650 size=16 callers=0 calls=0
*/
void sub_164b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b650ULL || rel >= 0x164b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b660 size=16 callers=0 calls=0
   ref: RendezVousLogout
*/
void RendezVousLogout(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b660ULL || rel >= 0x164b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b670 size=16 callers=0 calls=0
*/
void sub_164b670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b670ULL || rel >= 0x164b680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b680 size=16 callers=0 calls=0
*/
void sub_164b680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b680ULL || rel >= 0x164b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b690 size=16 callers=0 calls=0
*/
void sub_164b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b690ULL || rel >= 0x164b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b6a0 size=16 callers=0 calls=0
*/
void sub_164b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b6a0ULL || rel >= 0x164b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b6b0 size=16 callers=0 calls=0
*/
void sub_164b6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b6b0ULL || rel >= 0x164b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b6c0 size=16 callers=0 calls=0
*/
void sub_164b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b6c0ULL || rel >= 0x164b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b6d0 size=16 callers=0 calls=0
*/
void sub_164b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b6d0ULL || rel >= 0x164b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

