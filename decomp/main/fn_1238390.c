/* main functions 01238390..01251850 (153 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01238390 size=160 callers=0 calls=0
*/
void sub_1238390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238390ULL || rel >= 0x1238430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238430 size=160 callers=0 calls=0
*/
void sub_1238430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238430ULL || rel >= 0x12384d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012384d0 size=160 callers=0 calls=0
*/
void sub_12384d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12384d0ULL || rel >= 0x1238570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238570 size=352 callers=2 calls=0
*/
void sub_1238570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238570ULL || rel >= 0x12386d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012386d0 size=816 callers=0 calls=8
   calls: sub_1127fc0, sub_12164a0, sub_12165d0, sub_1234fd0, sub_1235e20, sub_1236ff0, sub_5cf8e0, sub_5cf8f0
*/
void sub_12386d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12386d0ULL || rel >= 0x1238a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238a00 size=160 callers=0 calls=0
*/
void sub_1238a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238a00ULL || rel >= 0x1238aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238aa0 size=160 callers=0 calls=0
*/
void sub_1238aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238aa0ULL || rel >= 0x1238b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238b40 size=32 callers=0 calls=1
   calls: sub_1238570
*/
void sub_1238b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238b40ULL || rel >= 0x1238b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238b60 size=32 callers=0 calls=1
   calls: sub_1238570
*/
void sub_1238b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238b60ULL || rel >= 0x1238b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238b80 size=160 callers=0 calls=0
*/
void sub_1238b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238b80ULL || rel >= 0x1238c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238c20 size=160 callers=0 calls=0
*/
void sub_1238c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238c20ULL || rel >= 0x1238cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238cc0 size=208 callers=0 calls=0
*/
void sub_1238cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238cc0ULL || rel >= 0x1238d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01238d90 size=1008 callers=0 calls=10
   calls: sub_1127d00, sub_1158640, sub_117dca0, sub_1210230, sub_1214fa0, sub_1239180, sub_1239340, sub_1239500, sub_5cf8e0, sub_5cf8f0
*/
void sub_1238d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1238d90ULL || rel >= 0x1239180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01239180 size=448 callers=7 calls=1
   calls: sub_1216380
*/
void sub_1239180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1239180ULL || rel >= 0x1239340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01239340 size=448 callers=6 calls=1
   calls: sub_1216380
*/
void sub_1239340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1239340ULL || rel >= 0x1239500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01239500 size=432 callers=8 calls=1
   calls: sub_1216380
*/
void sub_1239500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1239500ULL || rel >= 0x12396b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012396b0 size=128 callers=0 calls=0
*/
void sub_12396b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12396b0ULL || rel >= 0x1239730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01239730 size=112 callers=0 calls=1
   calls: sub_1217300
*/
void sub_1239730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1239730ULL || rel >= 0x12397a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012397a0 size=128 callers=0 calls=0
*/
void sub_12397a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12397a0ULL || rel >= 0x1239820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01239820 size=128 callers=0 calls=0
*/
void sub_1239820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1239820ULL || rel >= 0x12398a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012398a0 size=112 callers=0 calls=1
   calls: sub_1217300
*/
void sub_12398a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12398a0ULL || rel >= 0x1239910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01239910 size=112 callers=0 calls=1
   calls: sub_1217300
*/
void sub_1239910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1239910ULL || rel >= 0x1239980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01239980 size=144 callers=0 calls=0
*/
void sub_1239980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1239980ULL || rel >= 0x1239a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01239a10 size=144 callers=0 calls=0
*/
void sub_1239a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1239a10ULL || rel >= 0x1239aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01239aa0 size=160 callers=0 calls=0
*/
void sub_1239aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1239aa0ULL || rel >= 0x1239b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01239b40 size=352 callers=2 calls=0
*/
void sub_1239b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1239b40ULL || rel >= 0x1239ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01239ca0 size=16 callers=0 calls=0
*/
void sub_1239ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1239ca0ULL || rel >= 0x1239cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01239cb0 size=624 callers=0 calls=13
   calls: sub_1127fc0, sub_120ff40, sub_1215350, sub_12164a0, sub_1216550, sub_12165b0, sub_12165d0, sub_1239340, sub_123a6b0, sub_123a7d0, sub_123a990, sub_5cf8e0
   ... +1 more
   ref: NoBerryMessage
   ref: OnQuitSelected
*/
void OnQuitSelected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1239cb0ULL || rel >= 0x1239f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01239f20 size=96 callers=0 calls=2
   calls: sub_123b880, sub_1266170
   ref: OnCookingRequestFirstReceived
*/
void OnCookingRequestFirstReceived(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1239f20ULL || rel >= 0x1239f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01239f80 size=128 callers=0 calls=3
   calls: sub_123b9d0, sub_123bb00, sub_1266170
   ref: OnCookingRequestClosed
*/
void OnCookingRequestClosed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1239f80ULL || rel >= 0x123a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123a000 size=128 callers=0 calls=3
   calls: sub_123c2e0, sub_123c410, sub_1266170
   ref: OnCookingRequestCanceled
*/
void OnCookingRequestCanceled(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123a000ULL || rel >= 0x123a080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123a080 size=880 callers=0 calls=9
   calls: sub_1127d00, sub_1215d70, sub_1216380, sub_1216490, sub_12164a0, sub_1239340, sub_123a7d0, sub_5cf8e0, sub_5cf8f0
*/
void sub_123a080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123a080ULL || rel >= 0x123a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123a3f0 size=160 callers=0 calls=0
*/
void sub_123a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123a3f0ULL || rel >= 0x123a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123a490 size=160 callers=0 calls=0
*/
void sub_123a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123a490ULL || rel >= 0x123a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123a530 size=32 callers=0 calls=1
   calls: sub_1239b40
*/
void sub_123a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123a530ULL || rel >= 0x123a550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123a550 size=32 callers=0 calls=1
   calls: sub_1239b40
*/
void sub_123a550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123a550ULL || rel >= 0x123a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123a570 size=160 callers=0 calls=0
*/
void sub_123a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123a570ULL || rel >= 0x123a610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123a610 size=160 callers=0 calls=0
*/
void sub_123a610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123a610ULL || rel >= 0x123a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123a6b0 size=288 callers=9 calls=4
   calls: sub_1127fc0, sub_12164a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_123a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123a6b0ULL || rel >= 0x123a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123a7d0 size=448 callers=7 calls=1
   calls: sub_1216380
*/
void sub_123a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123a7d0ULL || rel >= 0x123a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123a990 size=448 callers=3 calls=1
   calls: sub_1216380
*/
void sub_123a990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123a990ULL || rel >= 0x123ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ab50 size=160 callers=0 calls=0
*/
void sub_123ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ab50ULL || rel >= 0x123abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123abf0 size=352 callers=2 calls=0
*/
void sub_123abf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123abf0ULL || rel >= 0x123ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ad50 size=48 callers=0 calls=2
   calls: sub_12163d0, sub_12164a0
*/
void sub_123ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ad50ULL || rel >= 0x123ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ad80 size=16 callers=0 calls=0
*/
void sub_123ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ad80ULL || rel >= 0x123ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ad90 size=16 callers=0 calls=0
*/
void sub_123ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ad90ULL || rel >= 0x123ada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ada0 size=160 callers=0 calls=0
*/
void sub_123ada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ada0ULL || rel >= 0x123ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ae40 size=160 callers=0 calls=0
*/
void sub_123ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ae40ULL || rel >= 0x123aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123aee0 size=32 callers=0 calls=1
   calls: sub_123abf0
*/
void sub_123aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123aee0ULL || rel >= 0x123af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123af00 size=32 callers=0 calls=1
   calls: sub_123abf0
*/
void sub_123af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123af00ULL || rel >= 0x123af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123af20 size=160 callers=0 calls=0
*/
void sub_123af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123af20ULL || rel >= 0x123afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123afc0 size=160 callers=0 calls=0
*/
void sub_123afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123afc0ULL || rel >= 0x123b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b060 size=160 callers=0 calls=0
*/
void sub_123b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b060ULL || rel >= 0x123b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b100 size=352 callers=2 calls=0
*/
void sub_123b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b100ULL || rel >= 0x123b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b260 size=256 callers=0 calls=3
   calls: sub_1215350, sub_123a7d0, sub_123b760
   ref: OnMessageClosed
*/
void OnMessageClosed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b260ULL || rel >= 0x123b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b360 size=112 callers=0 calls=2
   calls: sub_1239340, sub_123b880
   ref: OnCookingRequestFirstReceived
*/
void OnCookingRequestFirstReceived_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b360ULL || rel >= 0x123b3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b3d0 size=96 callers=0 calls=2
   calls: sub_123b9d0, sub_123bb00
   ref: OnCookingRequestClosed
*/
void OnCookingRequestClosed_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b3d0ULL || rel >= 0x123b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b430 size=96 callers=0 calls=2
   calls: sub_123c2e0, sub_123c410
   ref: OnCookingRequestCanceled
*/
void OnCookingRequestCanceled_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b430ULL || rel >= 0x123b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b490 size=16 callers=0 calls=0
*/
void sub_123b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b490ULL || rel >= 0x123b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b4a0 size=160 callers=0 calls=0
*/
void sub_123b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b4a0ULL || rel >= 0x123b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b540 size=160 callers=0 calls=0
*/
void sub_123b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b540ULL || rel >= 0x123b5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b5e0 size=32 callers=0 calls=1
   calls: sub_123b100
*/
void sub_123b5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b5e0ULL || rel >= 0x123b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b600 size=32 callers=0 calls=1
   calls: sub_123b100
*/
void sub_123b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b600ULL || rel >= 0x123b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b620 size=160 callers=0 calls=0
*/
void sub_123b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b620ULL || rel >= 0x123b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b6c0 size=160 callers=0 calls=0
*/
void sub_123b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b6c0ULL || rel >= 0x123b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b760 size=288 callers=4 calls=4
   calls: sub_1127fc0, sub_12164a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_123b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b760ULL || rel >= 0x123b880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b880 size=336 callers=8 calls=4
   calls: sub_1127d00, sub_12164a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_123b880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b880ULL || rel >= 0x123b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123b9d0 size=304 callers=6 calls=4
   calls: sub_1127d00, sub_12164a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_123b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123b9d0ULL || rel >= 0x123bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123bb00 size=448 callers=3 calls=1
   calls: sub_1216380
*/
void sub_123bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123bb00ULL || rel >= 0x123bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123bcc0 size=160 callers=0 calls=0
*/
void sub_123bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123bcc0ULL || rel >= 0x123bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123bd60 size=352 callers=2 calls=0
*/
void sub_123bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123bd60ULL || rel >= 0x123bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123bec0 size=240 callers=0 calls=6
   calls: sub_1215350, sub_1215d60, sub_1216490, sub_1239500, sub_123a7d0, sub_123b760
   ref: OnMessageClosed
*/
void OnMessageClosed_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123bec0ULL || rel >= 0x123bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123bfb0 size=112 callers=0 calls=2
   calls: sub_1239180, sub_123b880
   ref: OnCookingRequestFirstReceived
*/
void OnCookingRequestFirstReceived_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123bfb0ULL || rel >= 0x123c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123c020 size=160 callers=0 calls=0
*/
void sub_123c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c020ULL || rel >= 0x123c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123c0c0 size=160 callers=0 calls=0
*/
void sub_123c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c0c0ULL || rel >= 0x123c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123c160 size=32 callers=0 calls=1
   calls: sub_123bd60
*/
void sub_123c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c160ULL || rel >= 0x123c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123c180 size=32 callers=0 calls=1
   calls: sub_123bd60
*/
void sub_123c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c180ULL || rel >= 0x123c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123c1a0 size=160 callers=0 calls=0
*/
void sub_123c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c1a0ULL || rel >= 0x123c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123c240 size=160 callers=0 calls=0
*/
void sub_123c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c240ULL || rel >= 0x123c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123c2e0 size=304 callers=6 calls=4
   calls: sub_1127d00, sub_12164a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_123c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c2e0ULL || rel >= 0x123c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123c410 size=432 callers=4 calls=1
   calls: sub_1216380
*/
void sub_123c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c410ULL || rel >= 0x123c5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123c5c0 size=160 callers=0 calls=0
*/
void sub_123c5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c5c0ULL || rel >= 0x123c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123c660 size=352 callers=2 calls=0
*/
void sub_123c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c660ULL || rel >= 0x123c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123c7c0 size=240 callers=0 calls=6
   calls: sub_1215350, sub_1215d60, sub_1216490, sub_1239500, sub_123a7d0, sub_123b760
   ref: OnMessageClosed
*/
void OnMessageClosed_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c7c0ULL || rel >= 0x123c8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123c8b0 size=112 callers=0 calls=2
   calls: sub_1239180, sub_123b880
   ref: OnCookingRequestFirstReceived
*/
void OnCookingRequestFirstReceived_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c8b0ULL || rel >= 0x123c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123c920 size=160 callers=0 calls=0
*/
void sub_123c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c920ULL || rel >= 0x123c9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123c9c0 size=160 callers=0 calls=0
*/
void sub_123c9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c9c0ULL || rel >= 0x123ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ca60 size=32 callers=0 calls=1
   calls: sub_123c660
*/
void sub_123ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ca60ULL || rel >= 0x123ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ca80 size=32 callers=0 calls=1
   calls: sub_123c660
*/
void sub_123ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ca80ULL || rel >= 0x123caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123caa0 size=160 callers=0 calls=0
*/
void sub_123caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123caa0ULL || rel >= 0x123cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123cb40 size=160 callers=0 calls=0
*/
void sub_123cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123cb40ULL || rel >= 0x123cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123cbe0 size=160 callers=0 calls=0
*/
void sub_123cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123cbe0ULL || rel >= 0x123cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123cc80 size=352 callers=2 calls=0
*/
void sub_123cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123cc80ULL || rel >= 0x123cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123cde0 size=176 callers=0 calls=5
   calls: sub_120ff40, sub_1215350, sub_12165b0, sub_12165d0, sub_123a6b0
   ref: OnQuitSelected
*/
void OnQuitSelected_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123cde0ULL || rel >= 0x123ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ce90 size=512 callers=0 calls=3
   calls: sub_1216380, sub_123b9d0, sub_1266170
   ref: OnCookingRequestClosed
*/
void OnCookingRequestClosed_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ce90ULL || rel >= 0x123d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d090 size=128 callers=0 calls=3
   calls: sub_123c2e0, sub_123c410, sub_1266170
   ref: OnCookingRequestCanceled
*/
void OnCookingRequestCanceled_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d090ULL || rel >= 0x123d110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d110 size=160 callers=0 calls=0
*/
void sub_123d110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d110ULL || rel >= 0x123d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d1b0 size=160 callers=0 calls=0
*/
void sub_123d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d1b0ULL || rel >= 0x123d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d250 size=32 callers=0 calls=1
   calls: sub_123cc80
*/
void sub_123d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d250ULL || rel >= 0x123d270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d270 size=32 callers=0 calls=1
   calls: sub_123cc80
*/
void sub_123d270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d270ULL || rel >= 0x123d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d290 size=160 callers=0 calls=0
*/
void sub_123d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d290ULL || rel >= 0x123d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d330 size=160 callers=0 calls=0
*/
void sub_123d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d330ULL || rel >= 0x123d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d3d0 size=160 callers=0 calls=0
*/
void sub_123d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d3d0ULL || rel >= 0x123d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d470 size=352 callers=2 calls=0
*/
void sub_123d470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d470ULL || rel >= 0x123d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d5d0 size=64 callers=0 calls=2
   calls: sub_12163d0, sub_12164a0
*/
void sub_123d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d5d0ULL || rel >= 0x123d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d610 size=288 callers=0 calls=4
   calls: sub_1127fc0, sub_12164a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_123d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d610ULL || rel >= 0x123d730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d730 size=16 callers=0 calls=0
*/
void sub_123d730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d730ULL || rel >= 0x123d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d740 size=160 callers=0 calls=0
*/
void sub_123d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d740ULL || rel >= 0x123d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d7e0 size=160 callers=0 calls=0
*/
void sub_123d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d7e0ULL || rel >= 0x123d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d880 size=32 callers=0 calls=1
   calls: sub_123d470
*/
void sub_123d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d880ULL || rel >= 0x123d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d8a0 size=32 callers=0 calls=1
   calls: sub_123d470
*/
void sub_123d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d8a0ULL || rel >= 0x123d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d8c0 size=160 callers=0 calls=0
*/
void sub_123d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d8c0ULL || rel >= 0x123d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123d960 size=160 callers=0 calls=0
*/
void sub_123d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d960ULL || rel >= 0x123da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123da00 size=192 callers=0 calls=4
   calls: sub_115b9f0, sub_115ba20, sub_117dca0, sub_123dad0
*/
void sub_123da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123da00ULL || rel >= 0x123dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123dac0 size=16 callers=0 calls=0
*/
void sub_123dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123dac0ULL || rel >= 0x123dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123dad0 size=368 callers=2 calls=3
   calls: sub_1127d00, sub_5cf8e0, sub_5cf8f0
*/
void sub_123dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123dad0ULL || rel >= 0x123dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123dc40 size=96 callers=0 calls=0
*/
void sub_123dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123dc40ULL || rel >= 0x123dca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123dca0 size=64 callers=0 calls=0
*/
void sub_123dca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123dca0ULL || rel >= 0x123dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123dce0 size=32 callers=0 calls=0
*/
void sub_123dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123dce0ULL || rel >= 0x123dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123dd00 size=32 callers=0 calls=0
*/
void sub_123dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123dd00ULL || rel >= 0x123dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123dd20 size=16 callers=0 calls=0
*/
void sub_123dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123dd20ULL || rel >= 0x123dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123dd30 size=16 callers=0 calls=0
*/
void sub_123dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123dd30ULL || rel >= 0x123dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123dd40 size=160 callers=0 calls=0
*/
void sub_123dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123dd40ULL || rel >= 0x123dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123dde0 size=352 callers=2 calls=0
*/
void sub_123dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123dde0ULL || rel >= 0x123df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123df40 size=464 callers=0 calls=8
   calls: sub_120ff40, sub_1215350, sub_1215d60, sub_1216490, sub_1216550, sub_12165b0, sub_123a6b0, sub_123a990
   ref: OnJoinSelected
   ref: NoBerryMessage
   ref: OnQuitSelected
*/
void OnQuitSelected_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123df40ULL || rel >= 0x123e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123e110 size=96 callers=0 calls=2
   calls: sub_123b9d0, sub_123bb00
   ref: OnCookingRequestClosed
*/
void OnCookingRequestClosed_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123e110ULL || rel >= 0x123e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123e170 size=96 callers=0 calls=2
   calls: sub_123c2e0, sub_123c410
   ref: OnCookingRequestCanceled
*/
void OnCookingRequestCanceled_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123e170ULL || rel >= 0x123e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123e1d0 size=160 callers=0 calls=0
*/
void sub_123e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123e1d0ULL || rel >= 0x123e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123e270 size=160 callers=0 calls=0
*/
void sub_123e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123e270ULL || rel >= 0x123e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123e310 size=32 callers=0 calls=1
   calls: sub_123dde0
*/
void sub_123e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123e310ULL || rel >= 0x123e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123e330 size=32 callers=0 calls=1
   calls: sub_123dde0
*/
void sub_123e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123e330ULL || rel >= 0x123e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123e350 size=160 callers=0 calls=0
*/
void sub_123e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123e350ULL || rel >= 0x123e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123e3f0 size=160 callers=0 calls=0
*/
void sub_123e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123e3f0ULL || rel >= 0x123e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123e490 size=160 callers=0 calls=0
*/
void sub_123e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123e490ULL || rel >= 0x123e530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123e530 size=352 callers=2 calls=0
*/
void sub_123e530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123e530ULL || rel >= 0x123e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123e690 size=1088 callers=0 calls=12
   calls: sub_1127fc0, sub_1215350, sub_1216380, sub_12164a0, sub_1216550, sub_12165d0, sub_1239500, sub_123a6b0, sub_123a7d0, sub_123a990, sub_5cf8e0, sub_5cf8f0
   ref: NoBerryMessage
   ref: OnQuitSelected
*/
void OnQuitSelected_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123e690ULL || rel >= 0x123ead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ead0 size=192 callers=0 calls=5
   calls: sub_1216550, sub_1239180, sub_1239500, sub_123b880, sub_1266170
   ref: OnCookingRequestFirstReceived
*/
void OnCookingRequestFirstReceived_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ead0ULL || rel >= 0x123eb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123eb90 size=96 callers=0 calls=2
   calls: sub_123b9d0, sub_1266170
   ref: OnCookingRequestClosed
*/
void OnCookingRequestClosed_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123eb90ULL || rel >= 0x123ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ebf0 size=96 callers=0 calls=2
   calls: sub_123c2e0, sub_1266170
   ref: OnCookingRequestCanceled
*/
void OnCookingRequestCanceled_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ebf0ULL || rel >= 0x123ec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ec50 size=160 callers=0 calls=0
*/
void sub_123ec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ec50ULL || rel >= 0x123ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ecf0 size=160 callers=0 calls=0
*/
void sub_123ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ecf0ULL || rel >= 0x123ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ed90 size=32 callers=0 calls=1
   calls: sub_123e530
*/
void sub_123ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ed90ULL || rel >= 0x123edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123edb0 size=32 callers=0 calls=1
   calls: sub_123e530
*/
void sub_123edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123edb0ULL || rel >= 0x123edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123edd0 size=160 callers=0 calls=0
*/
void sub_123edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123edd0ULL || rel >= 0x123ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ee70 size=160 callers=0 calls=0
*/
void sub_123ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ee70ULL || rel >= 0x123ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ef10 size=160 callers=0 calls=0
*/
void sub_123ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ef10ULL || rel >= 0x123efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123efb0 size=352 callers=2 calls=0
*/
void sub_123efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123efb0ULL || rel >= 0x123f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123f110 size=1040 callers=0 calls=9
   calls: sub_1127fc0, sub_12101e0, sub_1215350, sub_1216380, sub_12164a0, sub_12165b0, sub_1239500, sub_5cf8e0, sub_5cf8f0
*/
void sub_123f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123f110ULL || rel >= 0x123f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123f520 size=160 callers=0 calls=4
   calls: sub_1216550, sub_1239180, sub_1239500, sub_123b880
   ref: OnCookingRequestFirstReceived
*/
void OnCookingRequestFirstReceived_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123f520ULL || rel >= 0x123f5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123f5c0 size=160 callers=0 calls=0
*/
void sub_123f5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123f5c0ULL || rel >= 0x123f660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123f660 size=160 callers=0 calls=0
*/
void sub_123f660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123f660ULL || rel >= 0x123f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123f700 size=32 callers=0 calls=1
   calls: sub_123efb0
*/
void sub_123f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123f700ULL || rel >= 0x123f720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123f720 size=32 callers=0 calls=1
   calls: sub_123efb0
*/
void sub_123f720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123f720ULL || rel >= 0x123f740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123f740 size=160 callers=0 calls=0
*/
void sub_123f740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123f740ULL || rel >= 0x123f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123f7e0 size=160 callers=0 calls=0
*/
void sub_123f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123f7e0ULL || rel >= 0x123f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123f880 size=160 callers=0 calls=0
*/
void sub_123f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123f880ULL || rel >= 0x123f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123f920 size=352 callers=2 calls=0
*/
void sub_123f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123f920ULL || rel >= 0x123fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123fa80 size=592 callers=0 calls=4
   calls: sub_1215350, sub_1216380, sub_12165d0, sub_123b760
   ref: OnMessageClosed
*/
void OnMessageClosed_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123fa80ULL || rel >= 0x123fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123fcd0 size=160 callers=0 calls=4
   calls: sub_1216550, sub_1239180, sub_1239340, sub_123b880
   ref: OnCookingRequestFirstReceived
*/
void OnCookingRequestFirstReceived_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123fcd0ULL || rel >= 0x123fd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123fd70 size=160 callers=0 calls=0
*/
void sub_123fd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123fd70ULL || rel >= 0x123fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123fe10 size=160 callers=0 calls=0
*/
void sub_123fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123fe10ULL || rel >= 0x123feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123feb0 size=32 callers=0 calls=1
   calls: sub_123f920
*/
void sub_123feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123feb0ULL || rel >= 0x123fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123fed0 size=32 callers=0 calls=1
   calls: sub_123f920
*/
void sub_123fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123fed0ULL || rel >= 0x123fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123fef0 size=160 callers=0 calls=0
*/
void sub_123fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123fef0ULL || rel >= 0x123ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0123ff90 size=160 callers=0 calls=0
*/
void sub_123ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123ff90ULL || rel >= 0x1240030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01240030 size=160 callers=0 calls=0
*/
void sub_1240030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1240030ULL || rel >= 0x12400d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012400d0 size=352 callers=2 calls=0
*/
void sub_12400d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12400d0ULL || rel >= 0x1240230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01240230 size=208 callers=0 calls=4
   calls: sub_1215350, sub_12165d0, sub_123a6b0, sub_123a7d0
   ref: OnQuitSelected
*/
void OnQuitSelected_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1240230ULL || rel >= 0x1240300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01240300 size=192 callers=0 calls=5
   calls: sub_1216550, sub_1239180, sub_1239340, sub_123b880, sub_1266170
   ref: OnCookingRequestFirstReceived
*/
void OnCookingRequestFirstReceived_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1240300ULL || rel >= 0x12403c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012403c0 size=96 callers=0 calls=2
   calls: sub_123b9d0, sub_1266170
   ref: OnCookingRequestClosed
*/
void OnCookingRequestClosed_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12403c0ULL || rel >= 0x1240420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01240420 size=96 callers=0 calls=2
   calls: sub_123c2e0, sub_1266170
   ref: OnCookingRequestCanceled
*/
void OnCookingRequestCanceled_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1240420ULL || rel >= 0x1240480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01240480 size=160 callers=0 calls=0
*/
void sub_1240480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1240480ULL || rel >= 0x1240520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01240520 size=160 callers=0 calls=0
*/
void sub_1240520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1240520ULL || rel >= 0x12405c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012405c0 size=32 callers=0 calls=1
   calls: sub_12400d0
*/
void sub_12405c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12405c0ULL || rel >= 0x12405e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012405e0 size=32 callers=0 calls=1
   calls: sub_12400d0
*/
void sub_12405e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12405e0ULL || rel >= 0x1240600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01240600 size=160 callers=0 calls=0
*/
void sub_1240600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1240600ULL || rel >= 0x12406a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012406a0 size=160 callers=0 calls=0
*/
void sub_12406a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12406a0ULL || rel >= 0x1240740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01240740 size=240 callers=0 calls=0
*/
void sub_1240740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1240740ULL || rel >= 0x1240830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01240830 size=96 callers=0 calls=2
   calls: sub_1214fa0, sub_1240890
*/
void sub_1240830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1240830ULL || rel >= 0x1240890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01240890 size=416 callers=2 calls=1
   calls: sub_1216380
*/
void sub_1240890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1240890ULL || rel >= 0x1240a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01240a30 size=1408 callers=0 calls=2
   calls: sub_1157ef0, sub_117dca0
*/
void sub_1240a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1240a30ULL || rel >= 0x1240fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01240fb0 size=128 callers=0 calls=0
*/
void sub_1240fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1240fb0ULL || rel >= 0x1241030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241030 size=112 callers=0 calls=1
   calls: sub_1217300
*/
void sub_1241030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241030ULL || rel >= 0x12410a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012410a0 size=128 callers=0 calls=0
*/
void sub_12410a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12410a0ULL || rel >= 0x1241120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241120 size=128 callers=0 calls=0
*/
void sub_1241120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241120ULL || rel >= 0x12411a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012411a0 size=112 callers=0 calls=1
   calls: sub_1217300
*/
void sub_12411a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12411a0ULL || rel >= 0x1241210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241210 size=112 callers=0 calls=1
   calls: sub_1217300
*/
void sub_1241210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241210ULL || rel >= 0x1241280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241280 size=144 callers=0 calls=0
*/
void sub_1241280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241280ULL || rel >= 0x1241310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241310 size=144 callers=0 calls=0
*/
void sub_1241310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241310ULL || rel >= 0x12413a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012413a0 size=160 callers=0 calls=0
*/
void sub_12413a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12413a0ULL || rel >= 0x1241440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241440 size=352 callers=2 calls=0
*/
void sub_1241440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241440ULL || rel >= 0x12415a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012415a0 size=16 callers=0 calls=0
*/
void sub_12415a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12415a0ULL || rel >= 0x12415b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012415b0 size=1136 callers=0 calls=6
   calls: sub_1127fc0, sub_1158640, sub_1216380, sub_12164a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_12415b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12415b0ULL || rel >= 0x1241a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241a20 size=160 callers=0 calls=0
*/
void sub_1241a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241a20ULL || rel >= 0x1241ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241ac0 size=160 callers=0 calls=0
*/
void sub_1241ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241ac0ULL || rel >= 0x1241b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241b60 size=32 callers=0 calls=1
   calls: sub_1241440
*/
void sub_1241b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241b60ULL || rel >= 0x1241b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241b80 size=32 callers=0 calls=1
   calls: sub_1241440
*/
void sub_1241b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241b80ULL || rel >= 0x1241ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241ba0 size=160 callers=0 calls=0
*/
void sub_1241ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241ba0ULL || rel >= 0x1241c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241c40 size=160 callers=0 calls=0
*/
void sub_1241c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241c40ULL || rel >= 0x1241ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241ce0 size=592 callers=0 calls=7
   calls: sub_115b9f0, sub_115ba20, sub_1216380, sub_12164a0, sub_1216550, sub_123dad0, sub_1240890
*/
void sub_1241ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241ce0ULL || rel >= 0x1241f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241f30 size=16 callers=0 calls=0
*/
void sub_1241f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241f30ULL || rel >= 0x1241f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241f40 size=160 callers=0 calls=0
*/
void sub_1241f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241f40ULL || rel >= 0x1241fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01241fe0 size=352 callers=2 calls=0
*/
void sub_1241fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1241fe0ULL || rel >= 0x1242140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242140 size=944 callers=0 calls=5
   calls: sub_1127fc0, sub_1216380, sub_12164a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1242140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242140ULL || rel >= 0x12424f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012424f0 size=160 callers=0 calls=0
*/
void sub_12424f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12424f0ULL || rel >= 0x1242590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242590 size=160 callers=0 calls=0
*/
void sub_1242590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242590ULL || rel >= 0x1242630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242630 size=32 callers=0 calls=1
   calls: sub_1241fe0
*/
void sub_1242630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242630ULL || rel >= 0x1242650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242650 size=32 callers=0 calls=1
   calls: sub_1241fe0
*/
void sub_1242650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242650ULL || rel >= 0x1242670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242670 size=160 callers=0 calls=0
*/
void sub_1242670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242670ULL || rel >= 0x1242710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242710 size=160 callers=0 calls=0
*/
void sub_1242710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242710ULL || rel >= 0x12427b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012427b0 size=160 callers=0 calls=0
*/
void sub_12427b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12427b0ULL || rel >= 0x1242850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242850 size=352 callers=2 calls=0
*/
void sub_1242850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242850ULL || rel >= 0x12429b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012429b0 size=48 callers=0 calls=2
   calls: sub_12163d0, sub_12164a0
*/
void sub_12429b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12429b0ULL || rel >= 0x12429e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012429e0 size=288 callers=0 calls=4
   calls: sub_1127fc0, sub_12164a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_12429e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12429e0ULL || rel >= 0x1242b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242b00 size=48 callers=0 calls=1
   calls: sub_1216430
*/
void sub_1242b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242b00ULL || rel >= 0x1242b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242b30 size=160 callers=0 calls=0
*/
void sub_1242b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242b30ULL || rel >= 0x1242bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242bd0 size=160 callers=0 calls=0
*/
void sub_1242bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242bd0ULL || rel >= 0x1242c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242c70 size=32 callers=0 calls=1
   calls: sub_1242850
*/
void sub_1242c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242c70ULL || rel >= 0x1242c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242c90 size=32 callers=0 calls=1
   calls: sub_1242850
*/
void sub_1242c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242c90ULL || rel >= 0x1242cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242cb0 size=160 callers=0 calls=0
*/
void sub_1242cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242cb0ULL || rel >= 0x1242d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242d50 size=160 callers=0 calls=0
*/
void sub_1242d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242d50ULL || rel >= 0x1242df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242df0 size=16 callers=0 calls=0
*/
void sub_1242df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242df0ULL || rel >= 0x1242e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242e00 size=16 callers=0 calls=0
*/
void sub_1242e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242e00ULL || rel >= 0x1242e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242e10 size=160 callers=0 calls=0
*/
void sub_1242e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242e10ULL || rel >= 0x1242eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01242eb0 size=352 callers=2 calls=0
*/
void sub_1242eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1242eb0ULL || rel >= 0x1243010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243010 size=48 callers=0 calls=2
   calls: sub_12163d0, sub_12164a0
*/
void sub_1243010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243010ULL || rel >= 0x1243040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243040 size=16 callers=0 calls=0
*/
void sub_1243040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243040ULL || rel >= 0x1243050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243050 size=160 callers=0 calls=0
*/
void sub_1243050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243050ULL || rel >= 0x12430f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012430f0 size=160 callers=0 calls=0
*/
void sub_12430f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12430f0ULL || rel >= 0x1243190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243190 size=32 callers=0 calls=1
   calls: sub_1242eb0
*/
void sub_1243190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243190ULL || rel >= 0x12431b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012431b0 size=32 callers=0 calls=1
   calls: sub_1242eb0
*/
void sub_12431b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12431b0ULL || rel >= 0x12431d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012431d0 size=160 callers=0 calls=0
*/
void sub_12431d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12431d0ULL || rel >= 0x1243270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243270 size=160 callers=0 calls=0
*/
void sub_1243270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243270ULL || rel >= 0x1243310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243310 size=96 callers=0 calls=2
   calls: sub_115a6e0, sub_115a6f0
*/
void sub_1243310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243310ULL || rel >= 0x1243370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243370 size=16 callers=0 calls=0
*/
void sub_1243370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243370ULL || rel >= 0x1243380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243380 size=16 callers=0 calls=0
*/
void sub_1243380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243380ULL || rel >= 0x1243390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243390 size=16 callers=0 calls=0
*/
void sub_1243390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243390ULL || rel >= 0x12433a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012433a0 size=208 callers=0 calls=0
*/
void sub_12433a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12433a0ULL || rel >= 0x1243470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243470 size=736 callers=0 calls=4
   calls: sub_762930, sub_762940, sub_7670a0, sub_9fccc0
   ref: bin/pokemon_data/pokecamp/face/
   ref: poke_face_%04d_%02d_0.bin
   ref: poke_face_%04d_00_%01d.bin
   ref: poke_face_%04d_%02d_%01d.bin
   ref: poke_face_%04d_00_0.bin
*/
void unnamed_40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243470ULL || rel >= 0x1243750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243750 size=480 callers=0 calls=1
   calls: sub_9fccc0
   ref: bin/pokemon_data/pokecamp/face/
   ref: poke_face_%04d_%02d_0.bin
   ref: poke_face_%04d_00_%01d.bin
   ref: poke_face_%04d_%02d_%01d.bin
   ref: poke_face_%04d_00_0.bin
*/
void unnamed_41(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243750ULL || rel >= 0x1243930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243930 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1243930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243930ULL || rel >= 0x12439f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012439f0 size=32 callers=0 calls=0
*/
void sub_12439f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12439f0ULL || rel >= 0x1243a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243a10 size=864 callers=0 calls=4
   calls: sub_762930, sub_762940, sub_7670a0, sub_9fccc0
   ref: poke_motion_%04d_00_%01d.bin
   ref: poke_motion_%04d_%02d_0.bin
   ref: poke_motion_%04d_%02d_%01d.bin
   ref: bin/pokemon_data/pokecamp/motion/
   ref: poke_motion_%04d_00_0.bin
*/
void unnamed_42(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243a10ULL || rel >= 0x1243d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243d70 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1243d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243d70ULL || rel >= 0x1243e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243e30 size=32 callers=0 calls=0
*/
void sub_1243e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243e30ULL || rel >= 0x1243e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243e50 size=224 callers=0 calls=2
   calls: sub_7670b0, sub_9569e0
   ref: poke_seikaku_%03d.bin
   ref: bin/pokemon_data/pokecamp/seikaku/XXXX_XXXXXXX_XXX.bin
*/
void XXXX_XXXXXXX_XXX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243e50ULL || rel >= 0x1243f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243f30 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1243f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243f30ULL || rel >= 0x1243ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01243ff0 size=32 callers=0 calls=0
*/
void sub_1243ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1243ff0ULL || rel >= 0x1244010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244010 size=880 callers=0 calls=4
   calls: sub_762930, sub_762940, sub_7670a0, sub_9fccc0
   ref: bin/pokemon_data/pokecamp/turning/
   ref: poke_turning_%04d_00_0.bin
   ref: poke_turning_%04d_%02d_%01d.bin
   ref: poke_turning_%04d_%02d_0.bin
   ref: poke_turning_%04d_00_%01d.bin
*/
void unnamed_43(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244010ULL || rel >= 0x1244380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244380 size=624 callers=0 calls=1
   calls: sub_9fccc0
   ref: bin/pokemon_data/pokecamp/turning/
   ref: poke_turning_%04d_00_0.bin
   ref: poke_turning_%04d_%02d_%01d.bin
   ref: poke_turning_%04d_%02d_0.bin
   ref: poke_turning_%04d_00_%01d.bin
*/
void unnamed_44(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244380ULL || rel >= 0x12445f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012445f0 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_12445f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12445f0ULL || rel >= 0x12446b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012446b0 size=32 callers=0 calls=0
*/
void sub_12446b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12446b0ULL || rel >= 0x12446d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012446d0 size=224 callers=2 calls=2
   calls: sub_12447b0, sub_1244f60
*/
void sub_12446d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12446d0ULL || rel >= 0x12447b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012447b0 size=288 callers=2 calls=3
   calls: sub_1245090, sub_c38350, sub_e9db40
*/
void sub_12447b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12447b0ULL || rel >= 0x12448d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012448d0 size=16 callers=0 calls=0
*/
void sub_12448d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12448d0ULL || rel >= 0x12448e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012448e0 size=112 callers=0 calls=1
   calls: sub_14e0350
*/
void sub_12448e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12448e0ULL || rel >= 0x1244950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244950 size=624 callers=0 calls=2
   calls: sub_1244bc0, sub_c39c40
*/
void sub_1244950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244950ULL || rel >= 0x1244bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244bc0 size=272 callers=1 calls=3
   calls: sub_1245170, sub_672c10, sub_c386f0
*/
void sub_1244bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244bc0ULL || rel >= 0x1244cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244cd0 size=32 callers=0 calls=0
*/
void sub_1244cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244cd0ULL || rel >= 0x1244cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244cf0 size=96 callers=0 calls=0
*/
void sub_1244cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244cf0ULL || rel >= 0x1244d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244d50 size=96 callers=0 calls=0
*/
void sub_1244d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244d50ULL || rel >= 0x1244db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244db0 size=16 callers=0 calls=0
*/
void sub_1244db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244db0ULL || rel >= 0x1244dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244dc0 size=96 callers=0 calls=0
*/
void sub_1244dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244dc0ULL || rel >= 0x1244e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244e20 size=96 callers=0 calls=0
*/
void sub_1244e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244e20ULL || rel >= 0x1244e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244e80 size=16 callers=0 calls=0
*/
void sub_1244e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244e80ULL || rel >= 0x1244e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244e90 size=16 callers=0 calls=0
*/
void sub_1244e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244e90ULL || rel >= 0x1244ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244ea0 size=96 callers=0 calls=0
*/
void sub_1244ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244ea0ULL || rel >= 0x1244f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244f00 size=96 callers=0 calls=0
*/
void sub_1244f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244f00ULL || rel >= 0x1244f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01244f60 size=304 callers=1 calls=0
*/
void sub_1244f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1244f60ULL || rel >= 0x1245090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01245090 size=224 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_1245090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1245090ULL || rel >= 0x1245170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01245170 size=240 callers=1 calls=2
   calls: sub_1245260, sub_e7b660
*/
void sub_1245170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1245170ULL || rel >= 0x1245260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01245260 size=224 callers=1 calls=3
   calls: sub_1245340, sub_7c2da0, sub_e7b5e0
*/
void sub_1245260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1245260ULL || rel >= 0x1245340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01245340 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1245340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1245340ULL || rel >= 0x1245430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01245430 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_1245430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1245430ULL || rel >= 0x12454b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012454b0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_12454b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12454b0ULL || rel >= 0x1245620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01245620 size=96 callers=0 calls=1
   calls: sub_1245840
*/
void sub_1245620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1245620ULL || rel >= 0x1245680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01245680 size=16 callers=0 calls=0
*/
void sub_1245680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1245680ULL || rel >= 0x1245690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01245690 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1245690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1245690ULL || rel >= 0x1245730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01245730 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1245730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1245730ULL || rel >= 0x12457f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012457f0 size=16 callers=0 calls=0
*/
void sub_12457f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12457f0ULL || rel >= 0x1245800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01245800 size=16 callers=0 calls=0
*/
void sub_1245800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1245800ULL || rel >= 0x1245810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01245810 size=16 callers=0 calls=0
*/
void sub_1245810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1245810ULL || rel >= 0x1245820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01245820 size=32 callers=0 calls=0
*/
void sub_1245820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1245820ULL || rel >= 0x1245840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01245840 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_1245840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1245840ULL || rel >= 0x1245920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01245920 size=160 callers=0 calls=0
*/
void sub_1245920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1245920ULL || rel >= 0x12459c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012459c0 size=1984 callers=0 calls=20
   calls: sub_1128e40, sub_1246180, sub_12470e0, sub_1247210, sub_1247660, sub_1248000, sub_1248130, sub_78f150, sub_78f240, sub_794e80, sub_7950c0, sub_799f80
   ... +8 more
   ref: font_fs_42_00.bffnt
   ref: BagViewShop
   ref: CommonOptionBar
   ref: Play_UI_Camp_Cooking_Transition
   ref: common/iteminfo.dat
   ref: MsgWindowView
   ref: font_fs_32_00.bffnt
   ref: BagViewTop
*/
void Play_UI_Camp_Cooking_Transition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12459c0ULL || rel >= 0x1246180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246180 size=464 callers=1 calls=3
   calls: sub_12470e0, sub_e7c160, sub_e7c210
*/
void sub_1246180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246180ULL || rel >= 0x1246350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246350 size=1296 callers=0 calls=15
   calls: sub_12470e0, sub_1248230, sub_1248240, sub_1248270, sub_14b2b20, sub_1500ea0, sub_5cfad0, sub_5cfaf0, sub_795ac0, sub_795bc0, sub_79b6f0, sub_79b840
   ... +3 more
   ref: BagViewShop
   ref: BagViewTop
*/
void BagViewShop_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246350ULL || rel >= 0x1246860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246860 size=16 callers=0 calls=0
*/
void sub_1246860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246860ULL || rel >= 0x1246870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246870 size=672 callers=0 calls=5
   calls: sub_1247a20, sub_1247b60, sub_1247cb0, sub_1247eb0, sub_e7c160
*/
void sub_1246870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246870ULL || rel >= 0x1246b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246b10 size=16 callers=0 calls=0
*/
void sub_1246b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246b10ULL || rel >= 0x1246b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246b20 size=448 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1246b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246b20ULL || rel >= 0x1246ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246ce0 size=16 callers=0 calls=0
*/
void sub_1246ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246ce0ULL || rel >= 0x1246cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246cf0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1246cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246cf0ULL || rel >= 0x1246da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246da0 size=16 callers=0 calls=0
*/
void sub_1246da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246da0ULL || rel >= 0x1246db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246db0 size=16 callers=0 calls=0
*/
void sub_1246db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246db0ULL || rel >= 0x1246dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246dc0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1246dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246dc0ULL || rel >= 0x1246e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246e70 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1246e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246e70ULL || rel >= 0x1246f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246f20 size=16 callers=0 calls=0
*/
void sub_1246f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246f20ULL || rel >= 0x1246f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246f30 size=16 callers=0 calls=0
*/
void sub_1246f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246f30ULL || rel >= 0x1246f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01246f40 size=288 callers=0 calls=0
*/
void sub_1246f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1246f40ULL || rel >= 0x1247060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01247060 size=16 callers=0 calls=0
*/
void sub_1247060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1247060ULL || rel >= 0x1247070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01247070 size=16 callers=0 calls=0
*/
void sub_1247070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1247070ULL || rel >= 0x1247080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01247080 size=16 callers=0 calls=0
*/
void sub_1247080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1247080ULL || rel >= 0x1247090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01247090 size=16 callers=0 calls=0
*/
void sub_1247090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1247090ULL || rel >= 0x12470a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012470a0 size=16 callers=0 calls=0
*/
void sub_12470a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12470a0ULL || rel >= 0x12470b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012470b0 size=16 callers=0 calls=0
*/
void sub_12470b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12470b0ULL || rel >= 0x12470c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012470c0 size=16 callers=0 calls=0
*/
void sub_12470c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12470c0ULL || rel >= 0x12470d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012470d0 size=16 callers=0 calls=0
*/
void sub_12470d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12470d0ULL || rel >= 0x12470e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012470e0 size=304 callers=52 calls=0
*/
void sub_12470e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12470e0ULL || rel >= 0x1247210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01247210 size=288 callers=1 calls=2
   calls: sub_1247330, sub_e809c0
*/
void sub_1247210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1247210ULL || rel >= 0x1247330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01247330 size=384 callers=1 calls=3
   calls: sub_12474b0, sub_790490, sub_e7fe20
*/
void sub_1247330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1247330ULL || rel >= 0x12474b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012474b0 size=432 callers=1 calls=2
   calls: anonymous_2, sub_14ba3b0
*/
void sub_12474b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12474b0ULL || rel >= 0x1247660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01247660 size=288 callers=1 calls=2
   calls: sub_1247780, sub_e809c0
*/
void sub_1247660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1247660ULL || rel >= 0x1247780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01247780 size=384 callers=1 calls=3
   calls: sub_1247900, sub_790490, sub_e7fe20
*/
void sub_1247780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1247780ULL || rel >= 0x1247900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01247900 size=288 callers=1 calls=2
   calls: anonymous_2, sub_14ba3b0
*/
void sub_1247900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1247900ULL || rel >= 0x1247a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01247a20 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1247a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1247a20ULL || rel >= 0x1247b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01247b60 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_1247b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1247b60ULL || rel >= 0x1247cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01247cb0 size=512 callers=1 calls=1
   calls: anonymous
*/
void sub_1247cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1247cb0ULL || rel >= 0x1247eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01247eb0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_1247eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1247eb0ULL || rel >= 0x1248000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248000 size=304 callers=1 calls=1
   calls: sub_799930
*/
void sub_1248000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248000ULL || rel >= 0x1248130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248130 size=256 callers=1 calls=1
   calls: sub_14b9710
*/
void sub_1248130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248130ULL || rel >= 0x1248230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248230 size=16 callers=2 calls=0
*/
void sub_1248230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248230ULL || rel >= 0x1248240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248240 size=16 callers=1 calls=0
*/
void sub_1248240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248240ULL || rel >= 0x1248250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248250 size=16 callers=1 calls=0
*/
void sub_1248250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248250ULL || rel >= 0x1248260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248260 size=16 callers=1 calls=0
*/
void sub_1248260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248260ULL || rel >= 0x1248270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248270 size=272 callers=1 calls=0
*/
void sub_1248270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248270ULL || rel >= 0x1248380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248380 size=368 callers=14 calls=4
   calls: sub_1311c60, sub_5e7b30, sub_67d450, sub_eb8930
*/
void sub_1248380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248380ULL || rel >= 0x12484f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012484f0 size=224 callers=0 calls=2
   calls: sub_c44410, sub_d0c0
   ref: BagStateEnd
*/
void BagStateEnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12484f0ULL || rel >= 0x12485d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012485d0 size=32 callers=0 calls=0
*/
void sub_12485d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12485d0ULL || rel >= 0x12485f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012485f0 size=16 callers=0 calls=0
*/
void sub_12485f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12485f0ULL || rel >= 0x1248600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248600 size=1776 callers=1 calls=15
   calls: sub_12470e0, sub_1248250, sub_1366cd0, sub_14e0450, sub_5cfad0, sub_5cfaf0, sub_795bc0, sub_79b6f0, sub_79b990, sub_7a89b0, sub_c39c40, sub_eb6230
   ... +3 more
   ref: BagViewTop
   ref: BagViewFade
*/
void BagViewFade(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248600ULL || rel >= 0x1248cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248cf0 size=160 callers=0 calls=4
   calls: sub_12470e0, sub_1248260, sub_eb6530, sub_eb7830
*/
void sub_1248cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248cf0ULL || rel >= 0x1248d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248d90 size=96 callers=0 calls=0
*/
void sub_1248d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248d90ULL || rel >= 0x1248df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248df0 size=96 callers=0 calls=0
*/
void sub_1248df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248df0ULL || rel >= 0x1248e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248e50 size=16 callers=0 calls=0
*/
void sub_1248e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248e50ULL || rel >= 0x1248e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248e60 size=96 callers=0 calls=0
*/
void sub_1248e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248e60ULL || rel >= 0x1248ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248ec0 size=96 callers=0 calls=0
*/
void sub_1248ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248ec0ULL || rel >= 0x1248f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248f20 size=16 callers=0 calls=0
*/
void sub_1248f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248f20ULL || rel >= 0x1248f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248f30 size=16 callers=0 calls=0
*/
void sub_1248f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248f30ULL || rel >= 0x1248f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248f40 size=96 callers=0 calls=0
*/
void sub_1248f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248f40ULL || rel >= 0x1248fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01248fa0 size=96 callers=0 calls=0
*/
void sub_1248fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1248fa0ULL || rel >= 0x1249000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249000 size=304 callers=0 calls=0
*/
void sub_1249000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249000ULL || rel >= 0x1249130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249130 size=64 callers=0 calls=2
   calls: BagViewFade, sub_c44310
*/
void sub_1249130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249130ULL || rel >= 0x1249170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249170 size=16 callers=0 calls=0
*/
void sub_1249170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249170ULL || rel >= 0x1249180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249180 size=16 callers=0 calls=0
*/
void sub_1249180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249180ULL || rel >= 0x1249190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249190 size=16 callers=0 calls=0
*/
void sub_1249190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249190ULL || rel >= 0x12491a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012491a0 size=16 callers=0 calls=0
*/
void sub_12491a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12491a0ULL || rel >= 0x12491b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012491b0 size=16 callers=0 calls=0
*/
void sub_12491b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12491b0ULL || rel >= 0x12491c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012491c0 size=16 callers=0 calls=0
*/
void sub_12491c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12491c0ULL || rel >= 0x12491d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012491d0 size=16 callers=0 calls=0
*/
void sub_12491d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12491d0ULL || rel >= 0x12491e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012491e0 size=160 callers=0 calls=0
*/
void sub_12491e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12491e0ULL || rel >= 0x1249280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249280 size=1520 callers=0 calls=21
   calls: sub_12470e0, sub_14aad40, sub_5cfad0, sub_795bc0, sub_79b6f0, sub_79b840, sub_79f3d0, sub_79f8d0, sub_7a0060, sub_7a0e50, sub_7a0ff0, sub_7a17f0
   ... +9 more
   ref: BagViewShop
   ref: BagStateStart
   ref: BagViewTop
   ref: BagViewFade
*/
void BagViewShop_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249280ULL || rel >= 0x1249870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249870 size=80 callers=0 calls=2
   calls: sub_eb6530, sub_eb7790
*/
void sub_1249870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249870ULL || rel >= 0x12498c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012498c0 size=32 callers=0 calls=0
*/
void sub_12498c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12498c0ULL || rel >= 0x12498e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012498e0 size=16 callers=0 calls=0
*/
void sub_12498e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12498e0ULL || rel >= 0x12498f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012498f0 size=16 callers=0 calls=0
*/
void sub_12498f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12498f0ULL || rel >= 0x1249900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249900 size=16 callers=0 calls=0
*/
void sub_1249900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249900ULL || rel >= 0x1249910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249910 size=16 callers=0 calls=0
*/
void sub_1249910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249910ULL || rel >= 0x1249920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249920 size=16 callers=0 calls=0
*/
void sub_1249920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249920ULL || rel >= 0x1249930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249930 size=16 callers=0 calls=0
*/
void sub_1249930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249930ULL || rel >= 0x1249940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249940 size=16 callers=0 calls=0
*/
void sub_1249940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249940ULL || rel >= 0x1249950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249950 size=16 callers=0 calls=0
*/
void sub_1249950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249950ULL || rel >= 0x1249960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249960 size=304 callers=0 calls=0
*/
void sub_1249960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249960ULL || rel >= 0x1249a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249a90 size=160 callers=0 calls=0
*/
void sub_1249a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249a90ULL || rel >= 0x1249b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249b30 size=320 callers=0 calls=4
   calls: sub_14aad40, sub_14ba7b0, sub_8f3180, sub_e806b0
*/
void sub_1249b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249b30ULL || rel >= 0x1249c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249c70 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokecamp_cooking/bin/pokecamp_cooking_foodlist_00_lyt.bin
*/
void pokecamp_cooking_foodlist_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249c70ULL || rel >= 0x1249d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249d80 size=64 callers=1 calls=1
   calls: sub_e806b0
   ref: anime_in
*/
void anime_in_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249d80ULL || rel >= 0x1249dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249dc0 size=16 callers=1 calls=0
   ref: anime_out
*/
void anime_out_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249dc0ULL || rel >= 0x1249dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249dd0 size=48 callers=1 calls=1
   calls: sub_14bacd0
*/
void sub_1249dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249dd0ULL || rel >= 0x1249e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249e00 size=48 callers=2 calls=0
   ref: anime_to_food
   ref: anime_to_kinomi_single
*/
void anime_to_kinomi_single(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249e00ULL || rel >= 0x1249e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249e30 size=64 callers=2 calls=1
   calls: sub_1268b10
*/
void sub_1249e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249e30ULL || rel >= 0x1249e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249e70 size=64 callers=2 calls=1
   calls: sub_1268750
*/
void sub_1249e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249e70ULL || rel >= 0x1249eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249eb0 size=32 callers=1 calls=0
*/
void sub_1249eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249eb0ULL || rel >= 0x1249ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249ed0 size=32 callers=1 calls=0
*/
void sub_1249ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249ed0ULL || rel >= 0x1249ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249ef0 size=80 callers=0 calls=2
   calls: sub_1268710, sub_1268ad0
*/
void sub_1249ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249ef0ULL || rel >= 0x1249f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249f40 size=80 callers=0 calls=2
   calls: sub_1268710, sub_1268ad0
*/
void sub_1249f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249f40ULL || rel >= 0x1249f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249f90 size=16 callers=0 calls=0
*/
void sub_1249f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249f90ULL || rel >= 0x1249fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249fa0 size=80 callers=0 calls=2
   calls: sub_1268710, sub_1268ad0
*/
void sub_1249fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249fa0ULL || rel >= 0x1249ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01249ff0 size=80 callers=0 calls=2
   calls: sub_1268710, sub_1268ad0
*/
void sub_1249ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1249ff0ULL || rel >= 0x124a040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a040 size=16 callers=0 calls=0
*/
void sub_124a040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a040ULL || rel >= 0x124a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a050 size=16 callers=0 calls=0
*/
void sub_124a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a050ULL || rel >= 0x124a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a060 size=80 callers=0 calls=2
   calls: sub_1268710, sub_1268ad0
*/
void sub_124a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a060ULL || rel >= 0x124a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a0b0 size=80 callers=0 calls=2
   calls: sub_1268710, sub_1268ad0
*/
void sub_124a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a0b0ULL || rel >= 0x124a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a100 size=304 callers=0 calls=0
*/
void sub_124a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a100ULL || rel >= 0x124a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a230 size=384 callers=0 calls=5
   calls: sub_14aad40, sub_14ba7b0, sub_8f3180, sub_e806b0, sub_e83870
   ref: P_kinomi_00
*/
void P_kinomi_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a230ULL || rel >= 0x124a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a3b0 size=32 callers=3 calls=0
   ref: anime_to_food
   ref: anime_to_kinomi
*/
void anime_to_kinomi(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a3b0ULL || rel >= 0x124a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a3d0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokecamp_cooking/bin/pokecamp_cooking_foodlist_00_lyt.bin
*/
void pokecamp_cooking_foodlist_00_lyt_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a3d0ULL || rel >= 0x124a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a4e0 size=368 callers=1 calls=4
   calls: sub_1128e40, sub_1268b10, sub_14aad40, sub_e83450
   ref: Play_UI_Camp_Cooking_NutsOnBoard
*/
void Play_UI_Camp_Cooking_NutsOnBoard(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a4e0ULL || rel >= 0x124a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a650 size=224 callers=2 calls=2
   calls: sub_1128e40, sub_e83450
   ref: Play_UI_Camp_Cooking_NutsOut
*/
void Play_UI_Camp_Cooking_NutsOut(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a650ULL || rel >= 0x124a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a730 size=112 callers=1 calls=2
   calls: sub_1268750, sub_14aad40
*/
void sub_124a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a730ULL || rel >= 0x124a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a7a0 size=64 callers=1 calls=1
   calls: sub_e806b0
   ref: anime_in
*/
void anime_in_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a7a0ULL || rel >= 0x124a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a7e0 size=16 callers=3 calls=0
   ref: anime_out
*/
void anime_out_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a7e0ULL || rel >= 0x124a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a7f0 size=128 callers=1 calls=1
   calls: sub_14aad40
*/
void sub_124a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a7f0ULL || rel >= 0x124a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a870 size=144 callers=1 calls=1
   calls: sub_14bacd0
*/
void sub_124a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a870ULL || rel >= 0x124a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124a900 size=768 callers=1 calls=7
   calls: sub_1311c60, sub_1312f50, sub_1315b90, sub_67bdb0, sub_67d450, sub_e7eb10, sub_e83ac0
*/
void sub_124a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124a900ULL || rel >= 0x124ac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124ac00 size=128 callers=3 calls=1
   calls: sub_14aad40
*/
void sub_124ac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124ac00ULL || rel >= 0x124ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124ac80 size=336 callers=2 calls=3
   calls: sub_14aad40, sub_8f19b0, sub_e83c60
*/
void sub_124ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124ac80ULL || rel >= 0x124add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124add0 size=192 callers=0 calls=2
   calls: sub_1268710, sub_1268ad0
*/
void sub_124add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124add0ULL || rel >= 0x124ae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124ae90 size=16 callers=0 calls=0
*/
void sub_124ae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124ae90ULL || rel >= 0x124aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124aea0 size=16 callers=0 calls=0
*/
void sub_124aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124aea0ULL || rel >= 0x124aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124aeb0 size=16 callers=0 calls=0
*/
void sub_124aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124aeb0ULL || rel >= 0x124aec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124aec0 size=16 callers=0 calls=0
*/
void sub_124aec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124aec0ULL || rel >= 0x124aed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124aed0 size=16 callers=0 calls=0
*/
void sub_124aed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124aed0ULL || rel >= 0x124aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124aee0 size=16 callers=0 calls=0
*/
void sub_124aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124aee0ULL || rel >= 0x124aef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124aef0 size=16 callers=0 calls=0
*/
void sub_124aef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124aef0ULL || rel >= 0x124af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124af00 size=16 callers=0 calls=0
*/
void sub_124af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124af00ULL || rel >= 0x124af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124af10 size=304 callers=0 calls=0
*/
void sub_124af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124af10ULL || rel >= 0x124b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124b040 size=160 callers=0 calls=1
   calls: sub_14ab2b0
*/
void sub_124b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124b040ULL || rel >= 0x124b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124b0e0 size=16 callers=0 calls=0
*/
void sub_124b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124b0e0ULL || rel >= 0x124b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124b0f0 size=16 callers=0 calls=0
*/
void sub_124b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124b0f0ULL || rel >= 0x124b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124b100 size=16 callers=0 calls=0
*/
void sub_124b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124b100ULL || rel >= 0x124b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124b110 size=256 callers=0 calls=2
   calls: sub_14aad40, sub_14ab2b0
*/
void sub_124b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124b110ULL || rel >= 0x124b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124b210 size=16 callers=0 calls=0
*/
void sub_124b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124b210ULL || rel >= 0x124b220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124b220 size=16 callers=0 calls=0
*/
void sub_124b220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124b220ULL || rel >= 0x124b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124b230 size=16 callers=0 calls=0
*/
void sub_124b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124b230ULL || rel >= 0x124b240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124b240 size=1264 callers=0 calls=19
   calls: anime_in_2, anime_to_kinomi_single, sub_12470e0, sub_1249e30, sub_1249e70, sub_1249eb0, sub_1249ed0, sub_124c540, sub_5cfaf0, sub_79b6f0, sub_79b990, sub_7a0060
   ... +7 more
   ref: BagStateCheckIngredients
   ref: BagViewTop
   ref: BagViewIngredientsCheck
*/
void BagViewIngredientsCheck(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124b240ULL || rel >= 0x124b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124b730 size=16 callers=0 calls=0
*/
void sub_124b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124b730ULL || rel >= 0x124b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124b740 size=464 callers=0 calls=12
   calls: sub_1249dd0, sub_124b910, sub_124b9c0, sub_124bb40, sub_124bf80, sub_124c030, sub_14aad40, sub_79eb80, sub_7a1e20, sub_eb6530, sub_eb8a30, sub_eb8c60
*/
void sub_124b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124b740ULL || rel >= 0x124b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124b910 size=176 callers=1 calls=4
   calls: sub_12470e0, sub_14e1a00, sub_79eb80, sub_7a2140
*/
void sub_124b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124b910ULL || rel >= 0x124b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124b9c0 size=384 callers=1 calls=12
   calls: anime_out_4, sub_12470e0, sub_1248380, sub_124c100, sub_124c220, sub_14aad40, sub_79eb80, sub_7a0060, sub_7a1ba0, sub_7a2140, sub_7a22e0, sub_7a23b0
*/
void sub_124b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124b9c0ULL || rel >= 0x124bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124bb40 size=1088 callers=1 calls=16
   calls: sub_12470e0, sub_1248380, sub_1367de0, sub_13682d0, sub_13687b0, sub_1368850, sub_13688f0, sub_14e1a00, sub_14eea30, sub_79eb80, sub_7a0060, sub_7a0ff0
   ... +4 more
*/
void sub_124bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124bb40ULL || rel >= 0x124bf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124bf80 size=176 callers=1 calls=8
   calls: sub_14e1a00, sub_79eb80, sub_7a0060, sub_7a0ff0, sub_7a2010, sub_7a2140, sub_e80580, sub_eb8e80
*/
void sub_124bf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124bf80ULL || rel >= 0x124c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c030 size=192 callers=1 calls=4
   calls: sub_12470e0, sub_14e1a00, sub_79eb80, sub_e80580
*/
void sub_124c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c030ULL || rel >= 0x124c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c0f0 size=16 callers=0 calls=0
*/
void sub_124c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c0f0ULL || rel >= 0x124c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c100 size=288 callers=1 calls=5
   calls: sub_7a1ae0, sub_7a1af0, sub_7a2550, sub_7a27c0, sub_7a28c0
*/
void sub_124c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c100ULL || rel >= 0x124c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c220 size=256 callers=1 calls=4
   calls: anime_to_kinomi_single, sub_1249e30, sub_1249e70, sub_7a21c0
*/
void sub_124c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c220ULL || rel >= 0x124c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c320 size=16 callers=0 calls=0
*/
void sub_124c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c320ULL || rel >= 0x124c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c330 size=16 callers=0 calls=0
*/
void sub_124c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c330ULL || rel >= 0x124c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c340 size=16 callers=0 calls=0
*/
void sub_124c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c340ULL || rel >= 0x124c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c350 size=16 callers=0 calls=0
*/
void sub_124c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c350ULL || rel >= 0x124c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c360 size=16 callers=0 calls=0
*/
void sub_124c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c360ULL || rel >= 0x124c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c370 size=16 callers=0 calls=0
*/
void sub_124c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c370ULL || rel >= 0x124c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c380 size=16 callers=0 calls=0
*/
void sub_124c380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c380ULL || rel >= 0x124c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c390 size=16 callers=0 calls=0
*/
void sub_124c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c390ULL || rel >= 0x124c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c3a0 size=304 callers=0 calls=0
*/
void sub_124c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c3a0ULL || rel >= 0x124c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c4d0 size=32 callers=0 calls=0
*/
void sub_124c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c4d0ULL || rel >= 0x124c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c4f0 size=16 callers=0 calls=0
*/
void sub_124c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c4f0ULL || rel >= 0x124c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c500 size=32 callers=0 calls=0
*/
void sub_124c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c500ULL || rel >= 0x124c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c520 size=32 callers=0 calls=0
*/
void sub_124c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c520ULL || rel >= 0x124c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c540 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_124c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c540ULL || rel >= 0x124c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124c690 size=1744 callers=0 calls=21
   calls: anime_in_3, msg_ui_pokecamp_cooking_31_02, sub_117a6c0, sub_12470e0, sub_124a7f0, sub_1251030, sub_5cfaf0, sub_79b6f0, sub_79b840, sub_79b990, sub_79f3d0, sub_7a0060
   ... +9 more
   ref: BagViewShop
   ref: BagViewTop
   ref: BagViewIngredientsEffect
   ref: BagStateSelectIngredients
*/
void BagViewIngredientsEffect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124c690ULL || rel >= 0x124cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124cd60 size=1600 callers=12 calls=9
   calls: sub_117a6c0, sub_12470e0, sub_124ac00, sub_124ac80, sub_1366cd0, sub_786a40, sub_7a2e30, sub_c39c40, sub_e7eb10
   ref: msg_ui_pokecamp_cooking_31_02
   ref: msg_ui_pokecamp_cooking_31_01
*/
void msg_ui_pokecamp_cooking_31_02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124cd60ULL || rel >= 0x124d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124d3a0 size=416 callers=0 calls=7
   calls: sub_1128e40, sub_12470e0, sub_124a870, sub_124a900, sub_7a1e20, sub_7aa9d0, sub_7aaa50
   ref: Play_UI_Camp_Cooking_Last10Sec
   ref: Play_UI_Camp_Cooking_Last3Sec
*/
void Play_UI_Camp_Cooking_Last3Sec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124d3a0ULL || rel >= 0x124d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124d540 size=16 callers=0 calls=0
*/
void sub_124d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124d540ULL || rel >= 0x124d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124d550 size=336 callers=0 calls=3
   calls: sub_ea3d10, sub_ea4760, sub_eb8c60
*/
void sub_124d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124d550ULL || rel >= 0x124d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124d6a0 size=96 callers=0 calls=1
   calls: sub_eb8c60
*/
void sub_124d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124d6a0ULL || rel >= 0x124d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124d700 size=96 callers=0 calls=1
   calls: sub_eb8e80
*/
void sub_124d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124d700ULL || rel >= 0x124d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124d760 size=304 callers=1 calls=6
   calls: sub_7a1ae0, sub_7a1af0, sub_7a2550, sub_7a27c0, sub_7a28c0, sub_e807f0
*/
void sub_124d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124d760ULL || rel >= 0x124d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124d890 size=1168 callers=0 calls=11
   calls: sub_12470e0, sub_1248380, sub_124dd20, sub_1367de0, sub_13682d0, sub_13687b0, sub_1368850, sub_13688f0, sub_14eea30, sub_e807f0, sub_eb8a30
*/
void sub_124d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124d890ULL || rel >= 0x124dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124dd20 size=304 callers=1 calls=10
   calls: msg_ui_pokecamp_cooking_31_02, sub_14e1a00, sub_79eb80, sub_7a0060, sub_7a2010, sub_7a2140, sub_7a2bd0, sub_7a3810, sub_e80580, sub_e807f0
*/
void sub_124dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124dd20ULL || rel >= 0x124de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124de50 size=656 callers=0 calls=8
   calls: sub_12470e0, sub_1248380, sub_14e1a00, sub_79eb80, sub_7a0940, sub_7a2140, sub_7a3810, sub_e807f0
*/
void sub_124de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124de50ULL || rel >= 0x124e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124e0e0 size=688 callers=0 calls=13
   calls: msg_ui_pokecamp_cooking_31_02, sub_12470e0, sub_1248380, sub_1367100, sub_14e1a00, sub_14eea30, sub_79eb80, sub_7a0060, sub_7a0940, sub_7a2140, sub_7a2250, sub_7a3810
   ... +1 more
*/
void sub_124e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124e0e0ULL || rel >= 0x124e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124e390 size=384 callers=0 calls=8
   calls: sub_124a730, sub_124e510, sub_124e5c0, sub_124e750, sub_124e7f0, sub_124ea20, sub_7a21c0, sub_7a22e0
*/
void sub_124e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124e390ULL || rel >= 0x124e510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124e510 size=176 callers=1 calls=5
   calls: anime_to_kinomi, msg_ui_pokecamp_cooking_31_02, sub_7a0060, sub_7a1ba0, sub_7a2da0
*/
void sub_124e510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124e510ULL || rel >= 0x124e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124e5c0 size=400 callers=1 calls=7
   calls: sub_12470e0, sub_1248380, sub_14e1a00, sub_79eb80, sub_7a0940, sub_7a2140, sub_e807f0
*/
void sub_124e5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124e5c0ULL || rel >= 0x124e750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124e750 size=160 callers=1 calls=5
   calls: anime_to_kinomi, msg_ui_pokecamp_cooking_31_02, sub_7a0060, sub_7a1ba0, sub_7a2da0
*/
void sub_124e750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124e750ULL || rel >= 0x124e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124e7f0 size=560 callers=1 calls=12
   calls: sub_12470e0, sub_1248380, sub_1315270, sub_14e1a00, sub_79eb80, sub_7a0940, sub_7a2140, sub_7a21c0, sub_7a3810, sub_7aa720, sub_7aaa60, sub_e807f0
*/
void sub_124e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124e7f0ULL || rel >= 0x124ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124ea20 size=448 callers=1 calls=10
   calls: sub_12470e0, sub_1248380, sub_1315270, sub_14e1a00, sub_79eb80, sub_7a0940, sub_7a2140, sub_7a21c0, sub_7a3810, sub_e807f0
*/
void sub_124ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124ea20ULL || rel >= 0x124ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124ebe0 size=416 callers=0 calls=8
   calls: sub_12470e0, sub_1248380, sub_14e1a00, sub_79eb80, sub_7a0940, sub_7a2140, sub_7a3810, sub_e807f0
*/
void sub_124ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124ebe0ULL || rel >= 0x124ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124ed80 size=416 callers=0 calls=8
   calls: sub_12470e0, sub_1248380, sub_14e1a00, sub_79eb80, sub_7a0940, sub_7a2140, sub_7a3810, sub_e807f0
*/
void sub_124ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124ed80ULL || rel >= 0x124ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124ef20 size=416 callers=0 calls=8
   calls: sub_12470e0, sub_1248380, sub_14e1a00, sub_79eb80, sub_7a0940, sub_7a2140, sub_7a3810, sub_e807f0
*/
void sub_124ef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124ef20ULL || rel >= 0x124f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124f0c0 size=688 callers=0 calls=5
   calls: sub_117a6c0, sub_12470e0, sub_1248380, sub_7a3810, sub_e807f0
*/
void sub_124f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124f0c0ULL || rel >= 0x124f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124f370 size=304 callers=1 calls=5
   calls: sub_1367510, sub_7a21c0, sub_7a3810, sub_7a9f80, sub_eb8a30
*/
void sub_124f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124f370ULL || rel >= 0x124f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124f4a0 size=304 callers=1 calls=10
   calls: msg_ui_pokecamp_cooking_31_02, sub_14e1a00, sub_79eb80, sub_7a0940, sub_7a2010, sub_7a2140, sub_7a2bd0, sub_7a3810, sub_e80580, sub_e807f0
*/
void sub_124f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124f4a0ULL || rel >= 0x124f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124f5d0 size=704 callers=0 calls=7
   calls: Play_UI_Camp_Cooking_NutsOnBoard, msg_ui_pokecamp_cooking_31_02, sub_1366cd0, sub_14eea30, sub_786a40, sub_7a0060, sub_7a2250
*/
void sub_124f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124f5d0ULL || rel >= 0x124f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124f890 size=416 callers=0 calls=8
   calls: sub_12470e0, sub_1248380, sub_14e1a00, sub_79eb80, sub_7a0940, sub_7a2140, sub_7a3810, sub_e807f0
*/
void sub_124f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124f890ULL || rel >= 0x124fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124fa30 size=1296 callers=0 calls=3
   calls: sub_1367100, sub_7a3810, sub_eb8a30
*/
void sub_124fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124fa30ULL || rel >= 0x124ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0124ff40 size=512 callers=0 calls=5
   calls: Play_UI_Camp_Cooking_NutsOut, msg_ui_pokecamp_cooking_31_02, sub_14eea30, sub_7a0060, sub_7a2250
*/
void sub_124ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x124ff40ULL || rel >= 0x1250140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250140 size=448 callers=0 calls=5
   calls: Play_UI_Camp_Cooking_NutsOut, msg_ui_pokecamp_cooking_31_02, sub_14eea30, sub_7a0060, sub_7a2250
*/
void sub_1250140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250140ULL || rel >= 0x1250300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250300 size=272 callers=0 calls=9
   calls: anime_to_kinomi, msg_ui_pokecamp_cooking_31_02, sub_1367510, sub_14eea30, sub_7a0060, sub_7a1ba0, sub_7a21c0, sub_7a2250, sub_7a2da0
*/
void sub_1250300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250300ULL || rel >= 0x1250410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250410 size=48 callers=0 calls=1
   calls: sub_eb8a30
*/
void sub_1250410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250410ULL || rel >= 0x1250440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250440 size=416 callers=3 calls=5
   calls: sub_14e4110, sub_14e4120, sub_7aab50, sub_93c570, sub_e80810
*/
void sub_1250440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250440ULL || rel >= 0x12505e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012505e0 size=1472 callers=2 calls=9
   calls: kinomiDataTable, sub_11063e0, sub_11065b0, sub_12470e0, sub_12529e0, sub_1366a40, sub_1366cd0, sub_1367510, sub_786a40
   ref: rare_grade
*/
void rare_grade_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12505e0ULL || rel >= 0x1250ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250ba0 size=400 callers=0 calls=7
   calls: sub_12470e0, sub_1248380, sub_14e1a00, sub_79eb80, sub_7a0940, sub_7a2140, sub_e807f0
*/
void sub_1250ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250ba0ULL || rel >= 0x1250d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250d30 size=336 callers=0 calls=0
*/
void sub_1250d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250d30ULL || rel >= 0x1250e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250e80 size=16 callers=0 calls=0
*/
void sub_1250e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250e80ULL || rel >= 0x1250e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250e90 size=16 callers=0 calls=0
*/
void sub_1250e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250e90ULL || rel >= 0x1250ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250ea0 size=16 callers=0 calls=0
*/
void sub_1250ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250ea0ULL || rel >= 0x1250eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250eb0 size=16 callers=0 calls=0
*/
void sub_1250eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250eb0ULL || rel >= 0x1250ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250ec0 size=16 callers=0 calls=0
*/
void sub_1250ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250ec0ULL || rel >= 0x1250ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250ed0 size=16 callers=0 calls=0
*/
void sub_1250ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250ed0ULL || rel >= 0x1250ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250ee0 size=16 callers=0 calls=0
*/
void sub_1250ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250ee0ULL || rel >= 0x1250ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250ef0 size=16 callers=0 calls=0
*/
void sub_1250ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250ef0ULL || rel >= 0x1250f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01250f00 size=304 callers=0 calls=0
*/
void sub_1250f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250f00ULL || rel >= 0x1251030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251030 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1251030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251030ULL || rel >= 0x1251180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251180 size=160 callers=0 calls=0
*/
void sub_1251180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251180ULL || rel >= 0x1251220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251220 size=16 callers=0 calls=0
*/
void sub_1251220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251220ULL || rel >= 0x1251230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251230 size=16 callers=0 calls=0
*/
void sub_1251230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251230ULL || rel >= 0x1251240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251240 size=16 callers=0 calls=0
*/
void sub_1251240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251240ULL || rel >= 0x1251250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251250 size=160 callers=0 calls=3
   calls: anime_out_5, sub_12470e0, sub_7a3810
*/
void sub_1251250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251250ULL || rel >= 0x12512f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012512f0 size=16 callers=0 calls=0
*/
void sub_12512f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12512f0ULL || rel >= 0x1251300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251300 size=16 callers=0 calls=0
*/
void sub_1251300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251300ULL || rel >= 0x1251310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251310 size=16 callers=0 calls=0
*/
void sub_1251310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251310ULL || rel >= 0x1251320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251320 size=288 callers=0 calls=1
   calls: sub_7a3810
*/
void sub_1251320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251320ULL || rel >= 0x1251440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251440 size=16 callers=0 calls=0
*/
void sub_1251440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251440ULL || rel >= 0x1251450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251450 size=16 callers=0 calls=0
*/
void sub_1251450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251450ULL || rel >= 0x1251460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251460 size=16 callers=0 calls=0
*/
void sub_1251460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251460ULL || rel >= 0x1251470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251470 size=304 callers=0 calls=2
   calls: sub_1250440, sub_7a3810
*/
void sub_1251470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251470ULL || rel >= 0x12515a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012515a0 size=16 callers=0 calls=0
*/
void sub_12515a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12515a0ULL || rel >= 0x12515b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012515b0 size=16 callers=0 calls=0
*/
void sub_12515b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12515b0ULL || rel >= 0x12515c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012515c0 size=16 callers=0 calls=0
*/
void sub_12515c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12515c0ULL || rel >= 0x12515d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012515d0 size=32 callers=0 calls=0
*/
void sub_12515d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12515d0ULL || rel >= 0x12515f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012515f0 size=16 callers=0 calls=0
*/
void sub_12515f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12515f0ULL || rel >= 0x1251600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251600 size=32 callers=0 calls=0
*/
void sub_1251600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251600ULL || rel >= 0x1251620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251620 size=32 callers=0 calls=0
*/
void sub_1251620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251620ULL || rel >= 0x1251640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251640 size=224 callers=0 calls=1
   calls: sub_eb8a30
*/
void sub_1251640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251640ULL || rel >= 0x1251720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251720 size=16 callers=0 calls=0
*/
void sub_1251720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251720ULL || rel >= 0x1251730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251730 size=16 callers=0 calls=0
*/
void sub_1251730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251730ULL || rel >= 0x1251740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251740 size=16 callers=0 calls=0
*/
void sub_1251740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251740ULL || rel >= 0x1251750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251750 size=256 callers=0 calls=2
   calls: sub_7a3810, sub_eb8a30
*/
void sub_1251750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251750ULL || rel >= 0x1251850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251850 size=16 callers=0 calls=0
*/
void sub_1251850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251850ULL || rel >= 0x1251860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

