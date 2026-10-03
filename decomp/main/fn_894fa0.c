/* main functions 00894fa0..008a7eb0 (66 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00894fa0 size=48 callers=5 calls=0
*/
void sub_894fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x894fa0ULL || rel >= 0x894fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00894fd0 size=32 callers=1 calls=0
*/
void sub_894fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x894fd0ULL || rel >= 0x894ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00894ff0 size=416 callers=1 calls=6
   calls: sub_6d1070, sub_895190, sub_8952c0, sub_89b390, sub_89ebe0, sub_89ec30
*/
void sub_894ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x894ff0ULL || rel >= 0x895190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00895190 size=304 callers=1 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_895190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x895190ULL || rel >= 0x8952c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008952c0 size=480 callers=2 calls=4
   calls: sub_65da00, sub_65daf0, sub_89a1c0, sub_89d210
*/
void sub_8952c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8952c0ULL || rel >= 0x8954a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008954a0 size=16 callers=7 calls=0
*/
void sub_8954a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8954a0ULL || rel >= 0x8954b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008954b0 size=16 callers=0 calls=0
*/
void sub_8954b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8954b0ULL || rel >= 0x8954c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008954c0 size=16 callers=1 calls=0
*/
void sub_8954c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8954c0ULL || rel >= 0x8954d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008954d0 size=112 callers=1 calls=4
   calls: sub_6d1070, sub_8952c0, sub_89ebe0, sub_89ec30
*/
void sub_8954d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8954d0ULL || rel >= 0x895540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00895540 size=16 callers=1 calls=0
*/
void sub_895540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x895540ULL || rel >= 0x895550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00895550 size=16 callers=1 calls=0
*/
void sub_895550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x895550ULL || rel >= 0x895560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00895560 size=960 callers=1 calls=10
   calls: sub_65da00, sub_65daf0, sub_6f6640, sub_895920, sub_895a30, sub_899000, sub_89f640, sub_8a0130, sub_c70, sub_ce0
*/
void sub_895560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x895560ULL || rel >= 0x895920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00895920 size=272 callers=2 calls=1
   calls: sub_89f640
*/
void sub_895920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x895920ULL || rel >= 0x895a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00895a30 size=224 callers=4 calls=4
   calls: sub_65da00, sub_65daf0, sub_89d340, sub_89d830
*/
void sub_895a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x895a30ULL || rel >= 0x895b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00895b10 size=1152 callers=1 calls=2
   calls: sub_8a7000, sub_8a7050
*/
void sub_895b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x895b10ULL || rel >= 0x895f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00895f90 size=480 callers=1 calls=0
*/
void sub_895f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x895f90ULL || rel >= 0x896170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00896170 size=32 callers=1 calls=0
*/
void sub_896170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x896170ULL || rel >= 0x896190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00896190 size=64 callers=1 calls=0
*/
void sub_896190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x896190ULL || rel >= 0x8961d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008961d0 size=80 callers=2 calls=0
*/
void sub_8961d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8961d0ULL || rel >= 0x896220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00896220 size=976 callers=0 calls=10
   calls: sub_65da00, sub_65daf0, sub_6f6640, sub_895920, sub_895a30, sub_899000, sub_89f640, sub_8a0130, sub_c70, sub_ce0
*/
void sub_896220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x896220ULL || rel >= 0x8965f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008965f0 size=304 callers=0 calls=0
*/
void sub_8965f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8965f0ULL || rel >= 0x896720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00896720 size=368 callers=0 calls=4
   calls: sub_65da00, sub_65daf0, sub_896890, sub_89ded0
*/
void sub_896720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x896720ULL || rel >= 0x896890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00896890 size=288 callers=1 calls=5
   calls: sub_65da00, sub_65daf0, sub_6d7ab0, sub_89d340, sub_89d460
*/
void sub_896890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x896890ULL || rel >= 0x8969b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008969b0 size=32 callers=0 calls=0
*/
void sub_8969b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8969b0ULL || rel >= 0x8969d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008969d0 size=320 callers=0 calls=4
   calls: sub_65da00, sub_65daf0, sub_896b10, sub_8a35f0
*/
void sub_8969d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8969d0ULL || rel >= 0x896b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00896b10 size=288 callers=1 calls=5
   calls: sub_65da00, sub_65daf0, sub_6d7ab0, sub_89d340, sub_89d700
*/
void sub_896b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x896b10ULL || rel >= 0x896c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00896c30 size=48 callers=0 calls=0
*/
void sub_896c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x896c30ULL || rel >= 0x896c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00896c60 size=16 callers=0 calls=0
*/
void sub_896c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x896c60ULL || rel >= 0x896c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00896c70 size=1600 callers=0 calls=5
   calls: sub_6b9030, sub_6b90e0, sub_6b92c0, sub_6bb230, sub_8a6fd0
*/
void sub_896c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x896c70ULL || rel >= 0x8972b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008972b0 size=16 callers=0 calls=0
*/
void sub_8972b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8972b0ULL || rel >= 0x8972c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008972c0 size=16 callers=0 calls=0
*/
void sub_8972c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8972c0ULL || rel >= 0x8972d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008972d0 size=16 callers=0 calls=0
*/
void sub_8972d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8972d0ULL || rel >= 0x8972e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008972e0 size=112 callers=0 calls=2
   calls: sub_6b90e0, sub_6b9260
*/
void sub_8972e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8972e0ULL || rel >= 0x897350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897350 size=112 callers=0 calls=2
   calls: sub_6b90e0, sub_6b9260
*/
void sub_897350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897350ULL || rel >= 0x8973c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008973c0 size=224 callers=0 calls=2
   calls: sub_895a30, sub_8984b0
*/
void sub_8973c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8973c0ULL || rel >= 0x8974a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008974a0 size=224 callers=0 calls=2
   calls: sub_895a30, sub_8984b0
*/
void sub_8974a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8974a0ULL || rel >= 0x897580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897580 size=192 callers=0 calls=0
*/
void sub_897580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897580ULL || rel >= 0x897640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897640 size=272 callers=0 calls=0
*/
void sub_897640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897640ULL || rel >= 0x897750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897750 size=192 callers=0 calls=0
*/
void sub_897750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897750ULL || rel >= 0x897810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897810 size=112 callers=0 calls=2
   calls: sub_6b90e0, sub_6b9260
*/
void sub_897810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897810ULL || rel >= 0x897880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897880 size=112 callers=0 calls=2
   calls: sub_6b90e0, sub_6b9260
*/
void sub_897880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897880ULL || rel >= 0x8978f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008978f0 size=112 callers=0 calls=0
*/
void sub_8978f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8978f0ULL || rel >= 0x897960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897960 size=112 callers=0 calls=0
*/
void sub_897960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897960ULL || rel >= 0x8979d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008979d0 size=64 callers=0 calls=0
*/
void sub_8979d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8979d0ULL || rel >= 0x897a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897a10 size=64 callers=0 calls=0
*/
void sub_897a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897a10ULL || rel >= 0x897a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897a50 size=416 callers=0 calls=4
   calls: sub_6ae9d0, sub_6d7ac0, sub_897bf0, sub_89b390
*/
void sub_897a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897a50ULL || rel >= 0x897bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897bf0 size=288 callers=1 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_897bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897bf0ULL || rel >= 0x897d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897d10 size=16 callers=0 calls=0
*/
void sub_897d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897d10ULL || rel >= 0x897d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897d20 size=80 callers=0 calls=1
   calls: sub_6ae9d0
*/
void sub_897d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897d20ULL || rel >= 0x897d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897d70 size=80 callers=0 calls=1
   calls: sub_6ae9d0
*/
void sub_897d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897d70ULL || rel >= 0x897dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897dc0 size=256 callers=0 calls=2
   calls: sub_6ae9d0, sub_8a7000
*/
void sub_897dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897dc0ULL || rel >= 0x897ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897ec0 size=16 callers=0 calls=0
*/
void sub_897ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897ec0ULL || rel >= 0x897ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897ed0 size=32 callers=0 calls=0
*/
void sub_897ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897ed0ULL || rel >= 0x897ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897ef0 size=32 callers=0 calls=0
*/
void sub_897ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897ef0ULL || rel >= 0x897f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897f10 size=32 callers=0 calls=0
*/
void sub_897f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897f10ULL || rel >= 0x897f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897f30 size=32 callers=0 calls=0
*/
void sub_897f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897f30ULL || rel >= 0x897f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897f50 size=32 callers=0 calls=0
*/
void sub_897f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897f50ULL || rel >= 0x897f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00897f70 size=400 callers=0 calls=2
   calls: sub_898380, sub_89b390
*/
void sub_897f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x897f70ULL || rel >= 0x898100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898100 size=336 callers=0 calls=1
   calls: sub_89b390
*/
void sub_898100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898100ULL || rel >= 0x898250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898250 size=48 callers=0 calls=0
*/
void sub_898250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898250ULL || rel >= 0x898280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898280 size=80 callers=0 calls=1
   calls: sub_6ae9d0
*/
void sub_898280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898280ULL || rel >= 0x8982d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008982d0 size=80 callers=0 calls=1
   calls: sub_6ae9d0
*/
void sub_8982d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8982d0ULL || rel >= 0x898320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898320 size=16 callers=0 calls=0
*/
void sub_898320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898320ULL || rel >= 0x898330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898330 size=16 callers=0 calls=0
*/
void sub_898330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898330ULL || rel >= 0x898340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898340 size=16 callers=0 calls=0
*/
void sub_898340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898340ULL || rel >= 0x898350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898350 size=16 callers=0 calls=0
*/
void sub_898350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898350ULL || rel >= 0x898360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898360 size=16 callers=0 calls=0
*/
void sub_898360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898360ULL || rel >= 0x898370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898370 size=16 callers=0 calls=0
*/
void sub_898370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898370ULL || rel >= 0x898380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898380 size=304 callers=1 calls=1
   calls: sub_898e30
*/
void sub_898380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898380ULL || rel >= 0x8984b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008984b0 size=288 callers=2 calls=5
   calls: sub_65da00, sub_65daf0, sub_6d7ab0, sub_89d340, sub_89d830
*/
void sub_8984b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8984b0ULL || rel >= 0x8985d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008985d0 size=368 callers=3 calls=4
   calls: sub_65da00, sub_65daf0, sub_898740, sub_8a5690
*/
void sub_8985d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8985d0ULL || rel >= 0x898740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898740 size=288 callers=1 calls=5
   calls: sub_65da00, sub_65daf0, sub_6d7ab0, sub_89d340, sub_89d960
*/
void sub_898740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898740ULL || rel >= 0x898860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898860 size=592 callers=0 calls=4
   calls: sub_8985d0, sub_ea3d10, sub_ea4740, sub_ea4760
*/
void sub_898860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898860ULL || rel >= 0x898ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898ab0 size=16 callers=1 calls=0
*/
void sub_898ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898ab0ULL || rel >= 0x898ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898ac0 size=128 callers=1 calls=1
   calls: sub_8a6bc0
*/
void sub_898ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898ac0ULL || rel >= 0x898b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898b40 size=16 callers=1 calls=0
*/
void sub_898b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898b40ULL || rel >= 0x898b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898b50 size=192 callers=1 calls=0
*/
void sub_898b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898b50ULL || rel >= 0x898c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898c10 size=240 callers=0 calls=0
*/
void sub_898c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898c10ULL || rel >= 0x898d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898d00 size=16 callers=0 calls=0
*/
void sub_898d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898d00ULL || rel >= 0x898d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898d10 size=16 callers=0 calls=0
*/
void sub_898d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898d10ULL || rel >= 0x898d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898d20 size=16 callers=0 calls=0
*/
void sub_898d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898d20ULL || rel >= 0x898d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898d30 size=16 callers=0 calls=0
*/
void sub_898d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898d30ULL || rel >= 0x898d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898d40 size=16 callers=0 calls=0
*/
void sub_898d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898d40ULL || rel >= 0x898d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898d50 size=16 callers=0 calls=0
*/
void sub_898d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898d50ULL || rel >= 0x898d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898d60 size=16 callers=0 calls=0
*/
void sub_898d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898d60ULL || rel >= 0x898d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898d70 size=16 callers=0 calls=0
*/
void sub_898d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898d70ULL || rel >= 0x898d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898d80 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_898d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898d80ULL || rel >= 0x898dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898dd0 size=96 callers=0 calls=0
*/
void sub_898dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898dd0ULL || rel >= 0x898e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00898e30 size=464 callers=1 calls=0
*/
void sub_898e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x898e30ULL || rel >= 0x899000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899000 size=208 callers=6 calls=2
   calls: sub_65da00, sub_65daf0
*/
void sub_899000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899000ULL || rel >= 0x8990d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008990d0 size=480 callers=1 calls=4
   calls: sub_5e2350, sub_6d04c0, sub_6d70e0, sub_899e80
*/
void sub_8990d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8990d0ULL || rel >= 0x8992b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008992b0 size=496 callers=0 calls=3
   calls: sub_6d0670, sub_89a0f0, sub_89a1c0
*/
void sub_8992b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8992b0ULL || rel >= 0x8994a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008994a0 size=16 callers=0 calls=0
*/
void sub_8994a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8994a0ULL || rel >= 0x8994b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008994b0 size=240 callers=0 calls=0
*/
void sub_8994b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8994b0ULL || rel >= 0x8995a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008995a0 size=32 callers=0 calls=0
*/
void sub_8995a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8995a0ULL || rel >= 0x8995c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008995c0 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_8995c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8995c0ULL || rel >= 0x899620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899620 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_899620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899620ULL || rel >= 0x8996b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008996b0 size=368 callers=0 calls=2
   calls: sub_6ae9d0, sub_89a310
*/
void sub_8996b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8996b0ULL || rel >= 0x899820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899820 size=384 callers=0 calls=3
   calls: sub_6ae9d0, sub_6d7e60, sub_89a310
*/
void sub_899820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899820ULL || rel >= 0x8999a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008999a0 size=464 callers=0 calls=4
   calls: sub_6ae9d0, sub_6d7aa0, sub_6d7e60, sub_89a310
*/
void sub_8999a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8999a0ULL || rel >= 0x899b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899b70 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_899b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899b70ULL || rel >= 0x899c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899c20 size=16 callers=0 calls=0
*/
void sub_899c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899c20ULL || rel >= 0x899c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899c30 size=16 callers=0 calls=0
*/
void sub_899c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899c30ULL || rel >= 0x899c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899c40 size=16 callers=0 calls=0
*/
void sub_899c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899c40ULL || rel >= 0x899c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899c50 size=16 callers=0 calls=0
*/
void sub_899c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899c50ULL || rel >= 0x899c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899c60 size=16 callers=0 calls=0
*/
void sub_899c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899c60ULL || rel >= 0x899c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899c70 size=16 callers=0 calls=0
*/
void sub_899c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899c70ULL || rel >= 0x899c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899c80 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_899c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899c80ULL || rel >= 0x899ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899ce0 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_899ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899ce0ULL || rel >= 0x899d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899d70 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_899d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899d70ULL || rel >= 0x899e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899e20 size=16 callers=0 calls=0
*/
void sub_899e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899e20ULL || rel >= 0x899e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899e30 size=16 callers=0 calls=0
*/
void sub_899e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899e30ULL || rel >= 0x899e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899e40 size=16 callers=0 calls=0
*/
void sub_899e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899e40ULL || rel >= 0x899e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899e50 size=16 callers=0 calls=0
*/
void sub_899e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899e50ULL || rel >= 0x899e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899e60 size=32 callers=0 calls=0
*/
void sub_899e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899e60ULL || rel >= 0x899e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00899e80 size=624 callers=10 calls=0
*/
void sub_899e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x899e80ULL || rel >= 0x89a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089a0f0 size=208 callers=30 calls=2
   calls: sub_65da00, sub_65daf0
*/
void sub_89a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89a0f0ULL || rel >= 0x89a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089a1c0 size=208 callers=7 calls=2
   calls: sub_65da00, sub_65daf0
*/
void sub_89a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89a1c0ULL || rel >= 0x89a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089a290 size=80 callers=0 calls=1
   calls: sub_6d12e0
*/
void sub_89a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89a290ULL || rel >= 0x89a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089a2e0 size=16 callers=0 calls=0
*/
void sub_89a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89a2e0ULL || rel >= 0x89a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089a2f0 size=16 callers=0 calls=0
*/
void sub_89a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89a2f0ULL || rel >= 0x89a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089a300 size=16 callers=0 calls=0
*/
void sub_89a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89a300ULL || rel >= 0x89a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089a310 size=336 callers=30 calls=0
*/
void sub_89a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89a310ULL || rel >= 0x89a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089a460 size=576 callers=0 calls=0
*/
void sub_89a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89a460ULL || rel >= 0x89a6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089a6a0 size=128 callers=0 calls=4
   calls: sub_6d7ac0, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_89a6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89a6a0ULL || rel >= 0x89a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089a720 size=16 callers=0 calls=0
*/
void sub_89a720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89a720ULL || rel >= 0x89a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089a730 size=208 callers=20 calls=4
   calls: sub_65da00, sub_65daf0, sub_89a800, sub_89a920
*/
void sub_89a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89a730ULL || rel >= 0x89a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089a800 size=288 callers=11 calls=3
   calls: sub_65da00, sub_65daf0, sub_89aa50
*/
void sub_89a800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89a800ULL || rel >= 0x89a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089a920 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_6d9c40, sub_6da400, sub_6db590, sub_6db910, sub_c70
*/
void sub_89a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89a920ULL || rel >= 0x89aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089aa50 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_89aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89aa50ULL || rel >= 0x89abc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089abc0 size=32 callers=0 calls=0
*/
void sub_89abc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89abc0ULL || rel >= 0x89abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089abe0 size=32 callers=0 calls=0
*/
void sub_89abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89abe0ULL || rel >= 0x89ac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ac00 size=224 callers=0 calls=5
   calls: sub_6d7aa0, sub_6d7d80, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_89ac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ac00ULL || rel >= 0x89ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ace0 size=16 callers=0 calls=0
*/
void sub_89ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ace0ULL || rel >= 0x89acf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089acf0 size=32 callers=0 calls=0
*/
void sub_89acf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89acf0ULL || rel >= 0x89ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ad10 size=32 callers=0 calls=0
*/
void sub_89ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ad10ULL || rel >= 0x89ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ad30 size=240 callers=1 calls=1
   calls: sub_8a6010
*/
void sub_89ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ad30ULL || rel >= 0x89ae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ae20 size=544 callers=8 calls=2
   calls: sub_5e2350, sub_89b480
*/
void sub_89ae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ae20ULL || rel >= 0x89b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b040 size=80 callers=0 calls=0
*/
void sub_89b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b040ULL || rel >= 0x89b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b090 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_89b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b090ULL || rel >= 0x89b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b100 size=16 callers=0 calls=0
*/
void sub_89b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b100ULL || rel >= 0x89b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b110 size=64 callers=0 calls=0
*/
void sub_89b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b110ULL || rel >= 0x89b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b150 size=32 callers=0 calls=0
*/
void sub_89b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b150ULL || rel >= 0x89b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b170 size=80 callers=0 calls=0
*/
void sub_89b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b170ULL || rel >= 0x89b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b1c0 size=80 callers=0 calls=0
*/
void sub_89b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b1c0ULL || rel >= 0x89b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b210 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_89b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b210ULL || rel >= 0x89b280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b280 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_89b280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b280ULL || rel >= 0x89b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b2f0 size=80 callers=0 calls=0
*/
void sub_89b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b2f0ULL || rel >= 0x89b340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b340 size=80 callers=0 calls=0
*/
void sub_89b340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b340ULL || rel >= 0x89b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b390 size=240 callers=128 calls=0
*/
void sub_89b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b390ULL || rel >= 0x89b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b480 size=528 callers=22 calls=0
*/
void sub_89b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b480ULL || rel >= 0x89b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b690 size=528 callers=1 calls=2
   calls: sub_5e2350, sub_89b480
*/
void sub_89b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b690ULL || rel >= 0x89b8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b8a0 size=80 callers=0 calls=0
*/
void sub_89b8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b8a0ULL || rel >= 0x89b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b8f0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_89b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b8f0ULL || rel >= 0x89b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b960 size=16 callers=0 calls=0
*/
void sub_89b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b960ULL || rel >= 0x89b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b970 size=64 callers=0 calls=0
*/
void sub_89b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b970ULL || rel >= 0x89b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b9b0 size=48 callers=0 calls=0
*/
void sub_89b9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b9b0ULL || rel >= 0x89b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089b9e0 size=80 callers=0 calls=0
*/
void sub_89b9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89b9e0ULL || rel >= 0x89ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ba30 size=80 callers=0 calls=0
*/
void sub_89ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ba30ULL || rel >= 0x89ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ba80 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_89ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ba80ULL || rel >= 0x89baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089baf0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_89baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89baf0ULL || rel >= 0x89bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089bb60 size=80 callers=0 calls=0
*/
void sub_89bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89bb60ULL || rel >= 0x89bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089bbb0 size=80 callers=0 calls=0
*/
void sub_89bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89bbb0ULL || rel >= 0x89bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089bc00 size=160 callers=0 calls=0
*/
void sub_89bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89bc00ULL || rel >= 0x89bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089bca0 size=528 callers=0 calls=7
   calls: battle_others_5, battle_server_version_5, gflnet3_message_lite_2, sub_65da00, sub_65daf0, sub_8a0aa0, sub_8a2ad0
*/
void sub_89bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89bca0ULL || rel >= 0x89beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089beb0 size=160 callers=0 calls=0
*/
void sub_89beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89beb0ULL || rel >= 0x89bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089bf50 size=160 callers=0 calls=0
*/
void sub_89bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89bf50ULL || rel >= 0x89bff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089bff0 size=160 callers=0 calls=0
*/
void sub_89bff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89bff0ULL || rel >= 0x89c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089c090 size=160 callers=0 calls=0
*/
void sub_89c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89c090ULL || rel >= 0x89c130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089c130 size=160 callers=0 calls=0
*/
void sub_89c130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89c130ULL || rel >= 0x89c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089c1d0 size=624 callers=0 calls=9
   calls: battle_raid_action_command_5, battle_timer_5, battle_trainer_action_command_5, gflnet3_message_lite_2, sub_65da00, sub_65daf0, sub_89f8b0, sub_8a0360, sub_8a4170
*/
void sub_89c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89c1d0ULL || rel >= 0x89c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089c440 size=160 callers=0 calls=0
*/
void sub_89c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89c440ULL || rel >= 0x89c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089c4e0 size=160 callers=0 calls=0
*/
void sub_89c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89c4e0ULL || rel >= 0x89c580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089c580 size=160 callers=0 calls=0
*/
void sub_89c580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89c580ULL || rel >= 0x89c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089c620 size=160 callers=0 calls=0
*/
void sub_89c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89c620ULL || rel >= 0x89c6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089c6c0 size=160 callers=0 calls=0
*/
void sub_89c6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89c6c0ULL || rel >= 0x89c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089c760 size=576 callers=0 calls=8
   calls: gflnet3_cancel_accepted_5, gflnet3_message_lite_2, gflnet3_request_cancel_5, gflnet3_request_cancel_all_5, gflnet3_request_forced_proceed_5, sub_65da00, sub_65daf0, sub_6db590
*/
void sub_89c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89c760ULL || rel >= 0x89c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089c9a0 size=160 callers=0 calls=0
*/
void sub_89c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89c9a0ULL || rel >= 0x89ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ca40 size=160 callers=0 calls=0
*/
void sub_89ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ca40ULL || rel >= 0x89cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089cae0 size=160 callers=0 calls=0
*/
void sub_89cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89cae0ULL || rel >= 0x89cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089cb80 size=160 callers=0 calls=0
*/
void sub_89cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89cb80ULL || rel >= 0x89cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089cc20 size=320 callers=1 calls=0
*/
void sub_89cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89cc20ULL || rel >= 0x89cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089cd60 size=288 callers=2 calls=3
   calls: sub_65da00, sub_65daf0, sub_89ce80
*/
void sub_89cd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89cd60ULL || rel >= 0x89ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ce80 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_89ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ce80ULL || rel >= 0x89cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089cff0 size=240 callers=3 calls=3
   calls: sub_6d7d80, sub_89a0f0, sub_89a1c0
*/
void sub_89cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89cff0ULL || rel >= 0x89d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089d0e0 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_8a0aa0, sub_8a0d90, sub_8a1ae0, sub_8a2390, sub_c70
*/
void sub_89d0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89d0e0ULL || rel >= 0x89d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089d210 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_89ebe0, sub_89f0e0, sub_8a0aa0, sub_8a0d90, sub_c70
*/
void sub_89d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89d210ULL || rel >= 0x89d340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089d340 size=288 callers=5 calls=3
   calls: sub_65da00, sub_65daf0, sub_89d590
*/
void sub_89d340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89d340ULL || rel >= 0x89d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089d460 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_89ded0, sub_89e680, sub_8a4170, sub_8a4570, sub_c70
*/
void sub_89d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89d460ULL || rel >= 0x89d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089d590 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_89d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89d590ULL || rel >= 0x89d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089d700 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_8a35f0, sub_8a3c40, sub_8a4170, sub_8a4570, sub_c70
*/
void sub_89d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89d700ULL || rel >= 0x89d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089d830 size=304 callers=2 calls=7
   calls: sub_65da00, sub_65daf0, sub_89f640, sub_8a0130, sub_8a4170, sub_8a4570, sub_c70
*/
void sub_89d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89d830ULL || rel >= 0x89d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089d960 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_8a4170, sub_8a4570, sub_8a5690, sub_8a5e40, sub_c70
*/
void sub_89d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89d960ULL || rel >= 0x89da90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089da90 size=128 callers=0 calls=0
*/
void sub_89da90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89da90ULL || rel >= 0x89db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089db10 size=416 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: raid_action_command.proto
*/
void battle_raid_action_command(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89db10ULL || rel >= 0x89dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089dcb0 size=176 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: raid_action_command.proto
*/
void battle_raid_action_command_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89dcb0ULL || rel >= 0x89dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089dd60 size=80 callers=0 calls=0
*/
void sub_89dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89dd60ULL || rel >= 0x89ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ddb0 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: raid_action_command.proto
*/
void battle_raid_action_command_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ddb0ULL || rel >= 0x89ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ded0 size=32 callers=4 calls=0
*/
void sub_89ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ded0ULL || rel >= 0x89def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089def0 size=64 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_raid_action_command_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89def0ULL || rel >= 0x89df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089df30 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_89df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89df30ULL || rel >= 0x89df90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089df90 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_89df90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89df90ULL || rel >= 0x89dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089dff0 size=16 callers=0 calls=0
*/
void sub_89dff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89dff0ULL || rel >= 0x89e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e000 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: raid_action_command.proto
*/
void battle_raid_action_command_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e000ULL || rel >= 0x89e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e0d0 size=96 callers=0 calls=2
   calls: sub_89e130, sub_c70
*/
void sub_89e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e0d0ULL || rel >= 0x89e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e130 size=32 callers=1 calls=0
*/
void sub_89e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e130ULL || rel >= 0x89e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e150 size=16 callers=0 calls=0
*/
void sub_89e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e150ULL || rel >= 0x89e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e160 size=512 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_89e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e160ULL || rel >= 0x89e360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e360 size=80 callers=0 calls=1
   calls: sub_713860
*/
void sub_89e360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e360ULL || rel >= 0x89e3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e3b0 size=128 callers=0 calls=0
*/
void sub_89e3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e3b0ULL || rel >= 0x89e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e430 size=128 callers=1 calls=1
   calls: sub_70d000
*/
void sub_89e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e430ULL || rel >= 0x89e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e4b0 size=384 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: raid_action_command.proto
*/
void battle_raid_action_command_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e4b0ULL || rel >= 0x89e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e630 size=80 callers=0 calls=0
*/
void sub_89e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e630ULL || rel >= 0x89e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e680 size=80 callers=1 calls=0
*/
void sub_89e680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e680ULL || rel >= 0x89e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e6d0 size=16 callers=0 calls=0
*/
void sub_89e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e6d0ULL || rel >= 0x89e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e6e0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_89e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e6e0ULL || rel >= 0x89e750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e750 size=16 callers=0 calls=0
*/
void sub_89e750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e750ULL || rel >= 0x89e760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e760 size=32 callers=0 calls=0
*/
void sub_89e760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e760ULL || rel >= 0x89e780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e780 size=16 callers=0 calls=0
*/
void sub_89e780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e780ULL || rel >= 0x89e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e790 size=16 callers=0 calls=0
*/
void sub_89e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e790ULL || rel >= 0x89e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e7a0 size=176 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: raid_action_command.proto
*/
void battle_raid_action_command_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e7a0ULL || rel >= 0x89e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e850 size=384 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
   ref: others.proto
*/
void battle_others(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e850ULL || rel >= 0x89e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089e9d0 size=160 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
   ref: others.proto
*/
void battle_others_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89e9d0ULL || rel >= 0x89ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ea70 size=80 callers=0 calls=0
*/
void sub_89ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ea70ULL || rel >= 0x89eac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089eac0 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
   ref: others.proto
*/
void battle_others_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89eac0ULL || rel >= 0x89ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ebe0 size=32 callers=5 calls=0
*/
void sub_89ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ebe0ULL || rel >= 0x89ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ec00 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_others_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ec00ULL || rel >= 0x89ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ec30 size=96 callers=2 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_89ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ec30ULL || rel >= 0x89ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ec90 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_89ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ec90ULL || rel >= 0x89ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ecf0 size=16 callers=0 calls=0
*/
void sub_89ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ecf0ULL || rel >= 0x89ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ed00 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
   ref: others.proto
*/
void battle_others_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ed00ULL || rel >= 0x89edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089edd0 size=96 callers=0 calls=2
   calls: sub_89ee30, sub_c70
*/
void sub_89edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89edd0ULL || rel >= 0x89ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ee30 size=32 callers=1 calls=0
*/
void sub_89ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ee30ULL || rel >= 0x89ee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ee50 size=16 callers=0 calls=0
*/
void sub_89ee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ee50ULL || rel >= 0x89ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ee60 size=160 callers=1 calls=2
   calls: sub_70c480, sub_713480
*/
void sub_89ee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ee60ULL || rel >= 0x89ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ef00 size=16 callers=0 calls=0
*/
void sub_89ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ef00ULL || rel >= 0x89ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ef10 size=16 callers=0 calls=0
*/
void sub_89ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ef10ULL || rel >= 0x89ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ef20 size=16 callers=1 calls=0
*/
void sub_89ef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ef20ULL || rel >= 0x89ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ef30 size=352 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
   ref: others.proto
*/
void battle_others_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ef30ULL || rel >= 0x89f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f090 size=80 callers=0 calls=0
*/
void sub_89f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f090ULL || rel >= 0x89f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f0e0 size=32 callers=1 calls=0
*/
void sub_89f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f0e0ULL || rel >= 0x89f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f100 size=16 callers=0 calls=0
*/
void sub_89f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f100ULL || rel >= 0x89f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f110 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_89f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f110ULL || rel >= 0x89f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f180 size=16 callers=0 calls=0
*/
void sub_89f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f180ULL || rel >= 0x89f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f190 size=32 callers=0 calls=0
*/
void sub_89f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f190ULL || rel >= 0x89f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f1b0 size=16 callers=0 calls=0
*/
void sub_89f1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f1b0ULL || rel >= 0x89f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f1c0 size=16 callers=0 calls=0
*/
void sub_89f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f1c0ULL || rel >= 0x89f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f1d0 size=160 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
   ref: others.proto
*/
void battle_others_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f1d0ULL || rel >= 0x89f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f270 size=336 callers=0 calls=9
   calls: battle_battle_command_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: CHECK failed: file != NULL: 
   ref: battle_command.proto
*/
void battle_battle_command(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f270ULL || rel >= 0x89f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f3c0 size=320 callers=8 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: battle_command.proto
*/
void battle_battle_command_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f3c0ULL || rel >= 0x89f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f500 size=128 callers=0 calls=0
*/
void sub_89f500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f500ULL || rel >= 0x89f580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f580 size=192 callers=0 calls=4
   calls: battle_battle_command_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_89f580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f580ULL || rel >= 0x89f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f640 size=160 callers=6 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_89f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f640ULL || rel >= 0x89f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f6e0 size=128 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_battle_command_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f6e0ULL || rel >= 0x89f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f760 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_89f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f760ULL || rel >= 0x89f800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f800 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_89f800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f800ULL || rel >= 0x89f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f8a0 size=16 callers=0 calls=0
*/
void sub_89f8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f8a0ULL || rel >= 0x89f8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f8b0 size=64 callers=3 calls=1
   calls: battle_battle_command_2
*/
void sub_89f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f8b0ULL || rel >= 0x89f8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f8f0 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_89f9b0, sub_c70
*/
void sub_89f8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f8f0ULL || rel >= 0x89f9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f9b0 size=32 callers=1 calls=0
*/
void sub_89f9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f9b0ULL || rel >= 0x89f9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089f9d0 size=64 callers=0 calls=0
*/
void sub_89f9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89f9d0ULL || rel >= 0x89fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089fa10 size=752 callers=1 calls=5
   calls: sub_6f6640, sub_70c190, sub_70c480, sub_713480, sub_714c90
*/
void sub_89fa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89fa10ULL || rel >= 0x89fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089fd00 size=144 callers=0 calls=1
   calls: sub_713860
*/
void sub_89fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89fd00ULL || rel >= 0x89fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089fd90 size=240 callers=0 calls=0
*/
void sub_89fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89fd90ULL || rel >= 0x89fe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089fe80 size=288 callers=1 calls=1
   calls: sub_70d000
*/
void sub_89fe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89fe80ULL || rel >= 0x89ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0089ffa0 size=320 callers=0 calls=2
   calls: battle_battle_command_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_battle_command_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x89ffa0ULL || rel >= 0x8a00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a00e0 size=80 callers=0 calls=0
*/
void sub_8a00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a00e0ULL || rel >= 0x8a0130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0130 size=144 callers=3 calls=0
*/
void sub_8a0130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0130ULL || rel >= 0x8a01c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a01c0 size=16 callers=0 calls=0
*/
void sub_8a01c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a01c0ULL || rel >= 0x8a01d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a01d0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8a01d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a01d0ULL || rel >= 0x8a0240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0240 size=32 callers=2 calls=0
*/
void sub_8a0240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0240ULL || rel >= 0x8a0260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0260 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_battle_command_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0260ULL || rel >= 0x8a0290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0290 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8a0290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0290ULL || rel >= 0x8a02f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a02f0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8a02f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a02f0ULL || rel >= 0x8a0350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0350 size=16 callers=0 calls=0
*/
void sub_8a0350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0350ULL || rel >= 0x8a0360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0360 size=64 callers=3 calls=1
   calls: battle_battle_command_2
*/
void sub_8a0360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0360ULL || rel >= 0x8a03a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a03a0 size=96 callers=0 calls=2
   calls: sub_8a0400, sub_c70
*/
void sub_8a03a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a03a0ULL || rel >= 0x8a0400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0400 size=32 callers=1 calls=0
*/
void sub_8a0400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0400ULL || rel >= 0x8a0420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0420 size=16 callers=0 calls=0
*/
void sub_8a0420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0420ULL || rel >= 0x8a0430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0430 size=160 callers=1 calls=2
   calls: sub_70c480, sub_713480
*/
void sub_8a0430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0430ULL || rel >= 0x8a04d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a04d0 size=16 callers=0 calls=0
*/
void sub_8a04d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a04d0ULL || rel >= 0x8a04e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a04e0 size=16 callers=0 calls=0
*/
void sub_8a04e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a04e0ULL || rel >= 0x8a04f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a04f0 size=16 callers=1 calls=0
*/
void sub_8a04f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a04f0ULL || rel >= 0x8a0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0500 size=224 callers=0 calls=2
   calls: battle_battle_command_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_battle_command_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0500ULL || rel >= 0x8a05e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a05e0 size=80 callers=0 calls=0
*/
void sub_8a05e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a05e0ULL || rel >= 0x8a0630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0630 size=16 callers=0 calls=0
*/
void sub_8a0630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0630ULL || rel >= 0x8a0640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0640 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8a0640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0640ULL || rel >= 0x8a06b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a06b0 size=16 callers=0 calls=0
*/
void sub_8a06b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a06b0ULL || rel >= 0x8a06c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a06c0 size=32 callers=0 calls=0
*/
void sub_8a06c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a06c0ULL || rel >= 0x8a06e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a06e0 size=16 callers=0 calls=0
*/
void sub_8a06e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a06e0ULL || rel >= 0x8a06f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a06f0 size=16 callers=0 calls=0
*/
void sub_8a06f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a06f0ULL || rel >= 0x8a0700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0700 size=16 callers=0 calls=0
*/
void sub_8a0700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0700ULL || rel >= 0x8a0710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0710 size=32 callers=0 calls=0
*/
void sub_8a0710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0710ULL || rel >= 0x8a0730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0730 size=16 callers=0 calls=0
*/
void sub_8a0730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0730ULL || rel >= 0x8a0740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0740 size=16 callers=0 calls=0
*/
void sub_8a0740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0740ULL || rel >= 0x8a0750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0750 size=16 callers=0 calls=0
*/
void sub_8a0750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0750ULL || rel >= 0x8a0760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0760 size=336 callers=0 calls=9
   calls: battle_btl_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_ce0
   ref: btl_data_holder.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_btl_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0760ULL || rel >= 0x8a08b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a08b0 size=256 callers=3 calls=10
   calls: battle_others_2, battle_others_5, battle_poke_party_2, battle_server_version_2, battle_server_version_5, gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_8a2ad0, sub_c70
   ref: btl_data_holder.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_btl_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a08b0ULL || rel >= 0x8a09b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a09b0 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_8a09b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a09b0ULL || rel >= 0x8a0a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0a10 size=144 callers=0 calls=4
   calls: battle_btl_data_holder_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_8a0a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0a10ULL || rel >= 0x8a0aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0aa0 size=32 callers=3 calls=0
*/
void sub_8a0aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0aa0ULL || rel >= 0x8a0ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0ac0 size=512 callers=0 calls=8
   calls: battle_others_5, battle_server_version_5, gflnet3_generated_message_util, sub_89ebe0, sub_8a1ae0, sub_8a2860, sub_8a2ad0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_btl_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0ac0ULL || rel >= 0x8a0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0cc0 size=160 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8a0cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0cc0ULL || rel >= 0x8a0d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0d60 size=48 callers=0 calls=1
   calls: sub_8a0cc0
*/
void sub_8a0d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0d60ULL || rel >= 0x8a0d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0d90 size=80 callers=2 calls=0
*/
void sub_8a0d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0d90ULL || rel >= 0x8a0de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0de0 size=16 callers=0 calls=0
*/
void sub_8a0de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0de0ULL || rel >= 0x8a0df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0df0 size=96 callers=0 calls=2
   calls: sub_8a0e50, sub_c70
*/
void sub_8a0df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0df0ULL || rel >= 0x8a0e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0e50 size=32 callers=1 calls=0
*/
void sub_8a0e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0e50ULL || rel >= 0x8a0e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0e70 size=80 callers=0 calls=0
*/
void sub_8a0e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0e70ULL || rel >= 0x8a0ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a0ec0 size=1008 callers=0 calls=12
   calls: sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_89ebe0, sub_89ee60, sub_8a1ae0, sub_8a1d80, sub_8a2860, sub_8a2c30, sub_c70
*/
void sub_8a0ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a0ec0ULL || rel >= 0x8a12b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a12b0 size=144 callers=0 calls=1
   calls: sub_714af0
*/
void sub_8a12b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a12b0ULL || rel >= 0x8a1340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1340 size=320 callers=0 calls=0
*/
void sub_8a1340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1340ULL || rel >= 0x8a1480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1480 size=176 callers=0 calls=4
   calls: sub_70d000, sub_89ef20, sub_8a2130, sub_8a2f30
*/
void sub_8a1480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1480ULL || rel >= 0x8a1530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1530 size=208 callers=0 calls=2
   calls: battle_btl_data_holder_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_btl_data_holder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1530ULL || rel >= 0x8a1600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1600 size=80 callers=0 calls=0
*/
void sub_8a1600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1600ULL || rel >= 0x8a1650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1650 size=16 callers=0 calls=0
*/
void sub_8a1650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1650ULL || rel >= 0x8a1660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1660 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8a1660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1660ULL || rel >= 0x8a16d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a16d0 size=16 callers=0 calls=0
*/
void sub_8a16d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a16d0ULL || rel >= 0x8a16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a16e0 size=32 callers=0 calls=0
*/
void sub_8a16e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a16e0ULL || rel >= 0x8a1700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1700 size=16 callers=0 calls=0
*/
void sub_8a1700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1700ULL || rel >= 0x8a1710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1710 size=16 callers=0 calls=0
*/
void sub_8a1710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1710ULL || rel >= 0x8a1720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1720 size=16 callers=0 calls=0
*/
void sub_8a1720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1720ULL || rel >= 0x8a1730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1730 size=400 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: CHECK failed: file != NULL: 
   ref: server_version.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_server_version(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1730ULL || rel >= 0x8a18c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a18c0 size=176 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: server_version.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_server_version_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a18c0ULL || rel >= 0x8a1970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1970 size=80 callers=0 calls=0
*/
void sub_8a1970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1970ULL || rel >= 0x8a19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a19c0 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: server_version.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_server_version_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a19c0ULL || rel >= 0x8a1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1ae0 size=32 callers=4 calls=0
*/
void sub_8a1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1ae0ULL || rel >= 0x8a1b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1b00 size=80 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_server_version_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1b00ULL || rel >= 0x8a1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1b50 size=96 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8a1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1b50ULL || rel >= 0x8a1bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1bb0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8a1bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1bb0ULL || rel >= 0x8a1c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1c10 size=16 callers=0 calls=0
*/
void sub_8a1c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1c10ULL || rel >= 0x8a1c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1c20 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: server_version.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_server_version_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1c20ULL || rel >= 0x8a1cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1cf0 size=96 callers=0 calls=2
   calls: sub_8a1d50, sub_c70
*/
void sub_8a1cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1cf0ULL || rel >= 0x8a1d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1d50 size=32 callers=1 calls=0
*/
void sub_8a1d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1d50ULL || rel >= 0x8a1d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1d70 size=16 callers=0 calls=0
*/
void sub_8a1d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1d70ULL || rel >= 0x8a1d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a1d80 size=640 callers=1 calls=4
   calls: sub_70bfa0, sub_70c190, sub_70c480, sub_713480
*/
void sub_8a1d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a1d80ULL || rel >= 0x8a2000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2000 size=112 callers=0 calls=2
   calls: sub_713860, sub_713970
*/
void sub_8a2000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2000ULL || rel >= 0x8a2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2070 size=192 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_8a2070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2070ULL || rel >= 0x8a2130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2130 size=144 callers=1 calls=2
   calls: sub_70d000, sub_70d040
*/
void sub_8a2130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2130ULL || rel >= 0x8a21c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a21c0 size=384 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: server_version.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_server_version_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a21c0ULL || rel >= 0x8a2340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2340 size=80 callers=0 calls=0
*/
void sub_8a2340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2340ULL || rel >= 0x8a2390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2390 size=96 callers=1 calls=0
*/
void sub_8a2390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2390ULL || rel >= 0x8a23f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a23f0 size=16 callers=0 calls=0
*/
void sub_8a23f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a23f0ULL || rel >= 0x8a2400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2400 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8a2400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2400ULL || rel >= 0x8a2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2470 size=16 callers=0 calls=0
*/
void sub_8a2470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2470ULL || rel >= 0x8a2480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2480 size=32 callers=0 calls=0
*/
void sub_8a2480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2480ULL || rel >= 0x8a24a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a24a0 size=16 callers=0 calls=0
*/
void sub_8a24a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a24a0ULL || rel >= 0x8a24b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a24b0 size=16 callers=0 calls=0
*/
void sub_8a24b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a24b0ULL || rel >= 0x8a24c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a24c0 size=176 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: server_version.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_server_version_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a24c0ULL || rel >= 0x8a2570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2570 size=256 callers=0 calls=9
   calls: battle_poke_party_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: poke_party.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
   ref: CHECK failed: file != NULL: 
*/
void battle_poke_party(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2570ULL || rel >= 0x8a2670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2670 size=272 callers=5 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: poke_party.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_poke_party_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2670ULL || rel >= 0x8a2780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2780 size=80 callers=0 calls=0
*/
void sub_8a2780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2780ULL || rel >= 0x8a27d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a27d0 size=144 callers=0 calls=4
   calls: battle_poke_party_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_8a27d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a27d0ULL || rel >= 0x8a2860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2860 size=160 callers=2 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8a2860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2860ULL || rel >= 0x8a2900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2900 size=128 callers=0 calls=2
   calls: gflnet3_generated_message_util, sub_75fa00
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_poke_party_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2900ULL || rel >= 0x8a2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2980 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8a2980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2980ULL || rel >= 0x8a2a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2a20 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8a2a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2a20ULL || rel >= 0x8a2ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2ac0 size=16 callers=0 calls=0
*/
void sub_8a2ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2ac0ULL || rel >= 0x8a2ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2ad0 size=64 callers=3 calls=1
   calls: battle_poke_party_2
*/
void sub_8a2ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2ad0ULL || rel >= 0x8a2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2b10 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_8a2bd0, sub_c70
*/
void sub_8a2b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2b10ULL || rel >= 0x8a2bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2bd0 size=32 callers=1 calls=0
*/
void sub_8a2bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2bd0ULL || rel >= 0x8a2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2bf0 size=64 callers=0 calls=0
*/
void sub_8a2bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2bf0ULL || rel >= 0x8a2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2c30 size=512 callers=1 calls=5
   calls: sub_6f6640, sub_70c190, sub_70c480, sub_713480, sub_714c90
*/
void sub_8a2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2c30ULL || rel >= 0x8a2e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2e30 size=112 callers=0 calls=1
   calls: gflnet3_wire_format_lite_4
*/
void sub_8a2e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2e30ULL || rel >= 0x8a2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2ea0 size=144 callers=0 calls=1
   calls: sub_70d0d0
*/
void sub_8a2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2ea0ULL || rel >= 0x8a2f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2f30 size=192 callers=1 calls=1
   calls: sub_70d000
*/
void sub_8a2f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2f30ULL || rel >= 0x8a2ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a2ff0 size=288 callers=0 calls=3
   calls: battle_poke_party_2, gflnet3_generated_message_util, sub_75fa00
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out
*/
void battle_poke_party_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a2ff0ULL || rel >= 0x8a3110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3110 size=80 callers=0 calls=0
*/
void sub_8a3110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3110ULL || rel >= 0x8a3160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3160 size=16 callers=0 calls=0
*/
void sub_8a3160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3160ULL || rel >= 0x8a3170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3170 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8a3170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3170ULL || rel >= 0x8a31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a31e0 size=16 callers=0 calls=0
*/
void sub_8a31e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a31e0ULL || rel >= 0x8a31f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a31f0 size=32 callers=0 calls=0
*/
void sub_8a31f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a31f0ULL || rel >= 0x8a3210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3210 size=16 callers=0 calls=0
*/
void sub_8a3210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3210ULL || rel >= 0x8a3220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3220 size=16 callers=0 calls=0
*/
void sub_8a3220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3220ULL || rel >= 0x8a3230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3230 size=16 callers=0 calls=0
*/
void sub_8a3230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3230ULL || rel >= 0x8a3240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3240 size=416 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: trainer_action_command.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_trainer_action_command(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3240ULL || rel >= 0x8a33e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a33e0 size=160 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: trainer_action_command.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_trainer_action_command_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a33e0ULL || rel >= 0x8a3480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3480 size=80 callers=0 calls=0
*/
void sub_8a3480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3480ULL || rel >= 0x8a34d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a34d0 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: trainer_action_command.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_trainer_action_command_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a34d0ULL || rel >= 0x8a35f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a35f0 size=32 callers=4 calls=0
*/
void sub_8a35f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a35f0ULL || rel >= 0x8a3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3610 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_trainer_action_command_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3610ULL || rel >= 0x8a3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3640 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8a3640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3640ULL || rel >= 0x8a36a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a36a0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8a36a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a36a0ULL || rel >= 0x8a3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3700 size=16 callers=0 calls=0
*/
void sub_8a3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3700ULL || rel >= 0x8a3710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3710 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: trainer_action_command.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_trainer_action_command_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3710ULL || rel >= 0x8a37e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a37e0 size=96 callers=0 calls=2
   calls: sub_8a3840, sub_c70
*/
void sub_8a37e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a37e0ULL || rel >= 0x8a3840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3840 size=32 callers=1 calls=0
*/
void sub_8a3840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3840ULL || rel >= 0x8a3860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3860 size=16 callers=0 calls=0
*/
void sub_8a3860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3860ULL || rel >= 0x8a3870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3870 size=336 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_8a3870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3870ULL || rel >= 0x8a39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a39c0 size=32 callers=0 calls=0
*/
void sub_8a39c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a39c0ULL || rel >= 0x8a39e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a39e0 size=80 callers=0 calls=0
*/
void sub_8a39e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a39e0ULL || rel >= 0x8a3a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3a30 size=80 callers=1 calls=1
   calls: sub_70d000
*/
void sub_8a3a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3a30ULL || rel >= 0x8a3a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3a80 size=368 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: trainer_action_command.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_trainer_action_command_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3a80ULL || rel >= 0x8a3bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3bf0 size=80 callers=0 calls=0
*/
void sub_8a3bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3bf0ULL || rel >= 0x8a3c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3c40 size=64 callers=1 calls=0
*/
void sub_8a3c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3c40ULL || rel >= 0x8a3c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3c80 size=16 callers=0 calls=0
*/
void sub_8a3c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3c80ULL || rel >= 0x8a3c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3c90 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8a3c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3c90ULL || rel >= 0x8a3d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3d00 size=16 callers=0 calls=0
*/
void sub_8a3d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3d00ULL || rel >= 0x8a3d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3d10 size=32 callers=0 calls=0
*/
void sub_8a3d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3d10ULL || rel >= 0x8a3d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3d30 size=16 callers=0 calls=0
*/
void sub_8a3d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3d30ULL || rel >= 0x8a3d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3d40 size=16 callers=0 calls=0
*/
void sub_8a3d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3d40ULL || rel >= 0x8a3d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3d50 size=160 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: trainer_action_command.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_trainer_action_command_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3d50ULL || rel >= 0x8a3df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3df0 size=368 callers=0 calls=10
   calls: battle_btl_cmd_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: CHECK failed: file != NULL: 
   ref: btl_cmd_data_holder.proto
*/
void battle_btl_cmd_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3df0ULL || rel >= 0x8a3f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a3f60 size=288 callers=3 calls=13
   calls: battle_battle_command_2, battle_raid_action_command_2, battle_raid_action_command_5, battle_timer_2, battle_timer_5, battle_trainer_action_command_2, battle_trainer_action_command_5, gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_89f8b0, sub_8a0360
   ... +1 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: btl_cmd_data_holder.proto
*/
void battle_btl_cmd_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a3f60ULL || rel >= 0x8a4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a4080 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_8a4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a4080ULL || rel >= 0x8a40e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a40e0 size=144 callers=0 calls=4
   calls: battle_btl_cmd_data_holder_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_8a40e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a40e0ULL || rel >= 0x8a4170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a4170 size=32 callers=5 calls=0
*/
void sub_8a4170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a4170ULL || rel >= 0x8a4190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a4190 size=784 callers=0 calls=12
   calls: battle_raid_action_command_5, battle_timer_5, battle_trainer_action_command_5, gflnet3_generated_message_util, sub_89ded0, sub_89f640, sub_89f8b0, sub_8a0240, sub_8a0360, sub_8a35f0, sub_8a5690, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_btl_cmd_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a4190ULL || rel >= 0x8a44a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a44a0 size=160 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8a44a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a44a0ULL || rel >= 0x8a4540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a4540 size=48 callers=0 calls=1
   calls: sub_8a44a0
*/
void sub_8a4540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a4540ULL || rel >= 0x8a4570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a4570 size=96 callers=4 calls=0
*/
void sub_8a4570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a4570ULL || rel >= 0x8a45d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a45d0 size=16 callers=0 calls=0
*/
void sub_8a45d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a45d0ULL || rel >= 0x8a45e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a45e0 size=96 callers=0 calls=2
   calls: sub_8a4640, sub_c70
*/
void sub_8a45e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a45e0ULL || rel >= 0x8a4640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a4640 size=32 callers=1 calls=0
*/
void sub_8a4640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a4640ULL || rel >= 0x8a4660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a4660 size=96 callers=0 calls=0
*/
void sub_8a4660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a4660ULL || rel >= 0x8a46c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a46c0 size=1648 callers=0 calls=16
   calls: sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_89ded0, sub_89e160, sub_89f640, sub_89fa10, sub_8a0240, sub_8a0430, sub_8a35f0
   ... +4 more
*/
void sub_8a46c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a46c0ULL || rel >= 0x8a4d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a4d30 size=224 callers=0 calls=1
   calls: sub_714af0
*/
void sub_8a4d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a4d30ULL || rel >= 0x8a4e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a4e10 size=512 callers=0 calls=0
*/
void sub_8a4e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a4e10ULL || rel >= 0x8a5010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5010 size=224 callers=0 calls=6
   calls: sub_70d000, sub_89e430, sub_89fe80, sub_8a04f0, sub_8a3a30, sub_8a5bf0
*/
void sub_8a5010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5010ULL || rel >= 0x8a50f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a50f0 size=208 callers=0 calls=2
   calls: battle_btl_cmd_data_holder_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_btl_cmd_data_holder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a50f0ULL || rel >= 0x8a51c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a51c0 size=80 callers=0 calls=0
*/
void sub_8a51c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a51c0ULL || rel >= 0x8a5210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5210 size=16 callers=0 calls=0
*/
void sub_8a5210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5210ULL || rel >= 0x8a5220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5220 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8a5220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5220ULL || rel >= 0x8a5290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5290 size=16 callers=0 calls=0
*/
void sub_8a5290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5290ULL || rel >= 0x8a52a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a52a0 size=32 callers=0 calls=0
*/
void sub_8a52a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a52a0ULL || rel >= 0x8a52c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a52c0 size=16 callers=0 calls=0
*/
void sub_8a52c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a52c0ULL || rel >= 0x8a52d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a52d0 size=16 callers=0 calls=0
*/
void sub_8a52d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a52d0ULL || rel >= 0x8a52e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a52e0 size=16 callers=0 calls=0
*/
void sub_8a52e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a52e0ULL || rel >= 0x8a52f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a52f0 size=384 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: CHECK failed: file != NULL: 
   ref: timer.proto
*/
void battle_timer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a52f0ULL || rel >= 0x8a5470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5470 size=176 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: timer.proto
*/
void battle_timer_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5470ULL || rel >= 0x8a5520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5520 size=80 callers=0 calls=0
*/
void sub_8a5520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5520ULL || rel >= 0x8a5570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5570 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: timer.proto
*/
void battle_timer_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5570ULL || rel >= 0x8a5690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5690 size=32 callers=4 calls=0
*/
void sub_8a5690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5690ULL || rel >= 0x8a56b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a56b0 size=64 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
*/
void battle_timer_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a56b0ULL || rel >= 0x8a56f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a56f0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8a56f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a56f0ULL || rel >= 0x8a5750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5750 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_8a5750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5750ULL || rel >= 0x8a57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a57b0 size=16 callers=0 calls=0
*/
void sub_8a57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a57b0ULL || rel >= 0x8a57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a57c0 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: timer.proto
*/
void battle_timer_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a57c0ULL || rel >= 0x8a5890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5890 size=96 callers=0 calls=2
   calls: sub_8a58f0, sub_c70
*/
void sub_8a5890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5890ULL || rel >= 0x8a58f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a58f0 size=32 callers=1 calls=0
*/
void sub_8a58f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a58f0ULL || rel >= 0x8a5910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5910 size=16 callers=0 calls=0
*/
void sub_8a5910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5910ULL || rel >= 0x8a5920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5920 size=512 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_8a5920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5920ULL || rel >= 0x8a5b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5b20 size=80 callers=0 calls=1
   calls: sub_713860
*/
void sub_8a5b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5b20ULL || rel >= 0x8a5b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5b70 size=128 callers=0 calls=0
*/
void sub_8a5b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5b70ULL || rel >= 0x8a5bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5bf0 size=128 callers=1 calls=1
   calls: sub_70d000
*/
void sub_8a5bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5bf0ULL || rel >= 0x8a5c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5c70 size=384 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: timer.proto
*/
void battle_timer_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5c70ULL || rel >= 0x8a5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5df0 size=80 callers=0 calls=0
*/
void sub_8a5df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5df0ULL || rel >= 0x8a5e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5e40 size=80 callers=1 calls=0
*/
void sub_8a5e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5e40ULL || rel >= 0x8a5e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5e90 size=16 callers=0 calls=0
*/
void sub_8a5e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5e90ULL || rel >= 0x8a5ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5ea0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_8a5ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5ea0ULL || rel >= 0x8a5f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5f10 size=16 callers=0 calls=0
*/
void sub_8a5f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5f10ULL || rel >= 0x8a5f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5f20 size=32 callers=0 calls=0
*/
void sub_8a5f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5f20ULL || rel >= 0x8a5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5f40 size=16 callers=0 calls=0
*/
void sub_8a5f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5f40ULL || rel >= 0x8a5f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5f50 size=16 callers=0 calls=0
*/
void sub_8a5f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5f50ULL || rel >= 0x8a5f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a5f60 size=176 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl
   ref: timer.proto
*/
void battle_timer_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a5f60ULL || rel >= 0x8a6010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6010 size=144 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_8a6010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6010ULL || rel >= 0x8a60a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a60a0 size=144 callers=0 calls=0
*/
void sub_8a60a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a60a0ULL || rel >= 0x8a6130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6130 size=144 callers=0 calls=0
*/
void sub_8a6130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6130ULL || rel >= 0x8a61c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a61c0 size=144 callers=0 calls=0
*/
void sub_8a61c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a61c0ULL || rel >= 0x8a6250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6250 size=144 callers=0 calls=0
*/
void sub_8a6250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6250ULL || rel >= 0x8a62e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a62e0 size=144 callers=0 calls=0
*/
void sub_8a62e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a62e0ULL || rel >= 0x8a6370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6370 size=144 callers=0 calls=0
*/
void sub_8a6370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6370ULL || rel >= 0x8a6400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6400 size=144 callers=0 calls=0
*/
void sub_8a6400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6400ULL || rel >= 0x8a6490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6490 size=144 callers=0 calls=0
*/
void sub_8a6490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6490ULL || rel >= 0x8a6520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6520 size=1392 callers=1 calls=5
   calls: RequestReconnect, sub_104bf60, sub_6aedf0, sub_6aee00, sub_8a6a90
*/
void sub_8a6520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6520ULL || rel >= 0x8a6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6a90 size=304 callers=2 calls=0
*/
void sub_8a6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6a90ULL || rel >= 0x8a6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6bc0 size=32 callers=1 calls=0
*/
void sub_8a6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6bc0ULL || rel >= 0x8a6be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6be0 size=96 callers=1 calls=2
   calls: sub_104e020, sub_104e030
*/
void sub_8a6be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6be0ULL || rel >= 0x8a6c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6c40 size=128 callers=0 calls=2
   calls: sub_104e020, sub_6aedf0
*/
void sub_8a6c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6c40ULL || rel >= 0x8a6cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6cc0 size=64 callers=0 calls=1
   calls: sub_104e020
*/
void sub_8a6cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6cc0ULL || rel >= 0x8a6d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6d00 size=16 callers=1 calls=0
*/
void sub_8a6d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6d00ULL || rel >= 0x8a6d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6d10 size=400 callers=1 calls=2
   calls: sub_104dfb0, sub_6aea40
*/
void sub_8a6d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6d10ULL || rel >= 0x8a6ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6ea0 size=208 callers=1 calls=2
   calls: sub_104dfd0, sub_6aeb70
*/
void sub_8a6ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6ea0ULL || rel >= 0x8a6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6f70 size=96 callers=1 calls=1
   calls: sub_104e030
*/
void sub_8a6f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6f70ULL || rel >= 0x8a6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a6fd0 size=48 callers=15 calls=0
*/
void sub_8a6fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a6fd0ULL || rel >= 0x8a7000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7000 size=80 callers=9 calls=0
*/
void sub_8a7000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7000ULL || rel >= 0x8a7050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7050 size=64 callers=1 calls=0
*/
void sub_8a7050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7050ULL || rel >= 0x8a7090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7090 size=816 callers=0 calls=6
   calls: sub_1061800, sub_16b0030, sub_174de50, sub_6ae870, sub_6aedf0, sub_8a6a90
*/
void sub_8a7090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7090ULL || rel >= 0x8a73c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a73c0 size=32 callers=0 calls=0
*/
void sub_8a73c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a73c0ULL || rel >= 0x8a73e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a73e0 size=32 callers=0 calls=0
*/
void sub_8a73e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a73e0ULL || rel >= 0x8a7400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7400 size=240 callers=0 calls=0
*/
void sub_8a7400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7400ULL || rel >= 0x8a74f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a74f0 size=16 callers=0 calls=0
*/
void sub_8a74f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a74f0ULL || rel >= 0x8a7500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7500 size=16 callers=0 calls=0
*/
void sub_8a7500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7500ULL || rel >= 0x8a7510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7510 size=448 callers=0 calls=1
   calls: sub_6aedf0
*/
void sub_8a7510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7510ULL || rel >= 0x8a76d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a76d0 size=64 callers=0 calls=0
*/
void sub_8a76d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a76d0ULL || rel >= 0x8a7710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7710 size=48 callers=0 calls=0
*/
void sub_8a7710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7710ULL || rel >= 0x8a7740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7740 size=48 callers=0 calls=0
*/
void sub_8a7740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7740ULL || rel >= 0x8a7770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7770 size=128 callers=0 calls=1
   calls: sub_6aedf0
*/
void sub_8a7770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7770ULL || rel >= 0x8a77f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a77f0 size=64 callers=0 calls=0
*/
void sub_8a77f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a77f0ULL || rel >= 0x8a7830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7830 size=48 callers=0 calls=0
*/
void sub_8a7830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7830ULL || rel >= 0x8a7860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7860 size=48 callers=0 calls=0
*/
void sub_8a7860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7860ULL || rel >= 0x8a7890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7890 size=128 callers=0 calls=0
*/
void sub_8a7890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7890ULL || rel >= 0x8a7910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7910 size=144 callers=1 calls=1
   calls: sub_892360
*/
void sub_8a7910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7910ULL || rel >= 0x8a79a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a79a0 size=80 callers=11 calls=1
   calls: sub_8923e0
*/
void sub_8a79a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a79a0ULL || rel >= 0x8a79f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a79f0 size=32 callers=5 calls=0
*/
void sub_8a79f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a79f0ULL || rel >= 0x8a7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7a10 size=16 callers=7 calls=0
*/
void sub_8a7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7a10ULL || rel >= 0x8a7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7a20 size=32 callers=5 calls=0
*/
void sub_8a7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7a20ULL || rel >= 0x8a7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7a40 size=112 callers=5 calls=2
   calls: sub_892380, sub_892430
*/
void sub_8a7a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7a40ULL || rel >= 0x8a7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7ab0 size=288 callers=5 calls=6
   calls: sub_8923d0, sub_892460, sub_8924e0, sub_895560, sub_895b10, sub_895f90
*/
void sub_8a7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7ab0ULL || rel >= 0x8a7bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7bd0 size=16 callers=22 calls=0
*/
void sub_8a7bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7bd0ULL || rel >= 0x8a7be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7be0 size=32 callers=215 calls=0
*/
void sub_8a7be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7be0ULL || rel >= 0x8a7c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7c00 size=16 callers=1 calls=0
*/
void sub_8a7c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7c00ULL || rel >= 0x8a7c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7c10 size=208 callers=2 calls=8
   calls: sub_892310, sub_892320, sub_892330, sub_892490, sub_8924a0, sub_8924b0, sub_896190, sub_8961d0
*/
void sub_8a7c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7c10ULL || rel >= 0x8a7ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7ce0 size=128 callers=14 calls=4
   calls: sub_892340, sub_892350, sub_8924c0, sub_8961d0
*/
void sub_8a7ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7ce0ULL || rel >= 0x8a7d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7d60 size=144 callers=1 calls=3
   calls: sub_8923d0, sub_892400, sub_8924e0
*/
void sub_8a7d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7d60ULL || rel >= 0x8a7df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7df0 size=32 callers=0 calls=0
*/
void sub_8a7df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7df0ULL || rel >= 0x8a7e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7e10 size=48 callers=0 calls=0
*/
void sub_8a7e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7e10ULL || rel >= 0x8a7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7e40 size=48 callers=2 calls=1
   calls: sub_8944f0
*/
void sub_8a7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7e40ULL || rel >= 0x8a7e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7e70 size=16 callers=0 calls=0
*/
void sub_8a7e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7e70ULL || rel >= 0x8a7e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7e80 size=32 callers=0 calls=0
*/
void sub_8a7e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7e80ULL || rel >= 0x8a7ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7ea0 size=16 callers=1 calls=0
*/
void sub_8a7ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7ea0ULL || rel >= 0x8a7eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7eb0 size=128 callers=0 calls=0
*/
void sub_8a7eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7eb0ULL || rel >= 0x8a7f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

