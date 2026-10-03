/* main functions 0145cef0..01477090 (173 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0145cef0 size=304 callers=1 calls=0
*/
void sub_145cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145cef0ULL || rel >= 0x145d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145d020 size=48 callers=0 calls=1
   calls: sub_145cd90
*/
void sub_145d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145d020ULL || rel >= 0x145d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145d050 size=896 callers=1 calls=1
   calls: sub_145d3d0
*/
void sub_145d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145d050ULL || rel >= 0x145d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145d3d0 size=496 callers=11 calls=1
   calls: sub_5e2350
*/
void sub_145d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145d3d0ULL || rel >= 0x145d5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145d5c0 size=240 callers=0 calls=0
*/
void sub_145d5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145d5c0ULL || rel >= 0x145d6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145d6b0 size=240 callers=0 calls=0
*/
void sub_145d6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145d6b0ULL || rel >= 0x145d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145d7a0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_145d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145d7a0ULL || rel >= 0x145d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145d810 size=32 callers=0 calls=0
*/
void sub_145d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145d810ULL || rel >= 0x145d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145d830 size=80 callers=0 calls=0
*/
void sub_145d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145d830ULL || rel >= 0x145d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145d880 size=240 callers=0 calls=0
*/
void sub_145d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145d880ULL || rel >= 0x145d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145d970 size=240 callers=0 calls=0
*/
void sub_145d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145d970ULL || rel >= 0x145da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145da60 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_145da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145da60ULL || rel >= 0x145dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145dad0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_145dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145dad0ULL || rel >= 0x145db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145db40 size=240 callers=0 calls=0
*/
void sub_145db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145db40ULL || rel >= 0x145dc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145dc30 size=240 callers=0 calls=0
*/
void sub_145dc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145dc30ULL || rel >= 0x145dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145dd20 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/trlicense_album/bin/uikit_trlicense_camp_00.bin
   ref: bin/appli/trlicense_album/bin/trlicence_camp_00_lyt.bin
*/
void uikit_trlicense_camp_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145dd20ULL || rel >= 0x145df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145df00 size=3264 callers=0 calls=13
   calls: sub_13149a0, sub_14ac370, sub_14e1a00, sub_14e1a30, sub_5cfad0, sub_67d450, sub_7a3c20, sub_8f19b0, sub_e7eb10, sub_e7f7c0, sub_e83e60, sub_e84190
   ... +1 more
   ref: Play_UI_common_card_turn
   ref: pane_%s
   ref: pane_%s_%s
   ref: L_button_%02d
*/
void Play_UI_common_card_turn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145df00ULL || rel >= 0x145ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ebc0 size=112 callers=1 calls=3
   calls: sub_14e1a00, sub_14e1a30, sub_e80580
*/
void sub_145ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ebc0ULL || rel >= 0x145ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ec30 size=16 callers=0 calls=0
*/
void sub_145ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ec30ULL || rel >= 0x145ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ec40 size=144 callers=1 calls=2
   calls: sub_14e1a00, sub_f0cc60
*/
void sub_145ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ec40ULL || rel >= 0x145ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ecd0 size=320 callers=1 calls=4
   calls: sub_14aad40, sub_14e1a30, sub_8f19b0, sub_e7eb10
*/
void sub_145ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ecd0ULL || rel >= 0x145ee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ee10 size=240 callers=0 calls=0
*/
void sub_145ee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ee10ULL || rel >= 0x145ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ef00 size=16 callers=0 calls=0
*/
void sub_145ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ef00ULL || rel >= 0x145ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ef10 size=16 callers=0 calls=0
*/
void sub_145ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ef10ULL || rel >= 0x145ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ef20 size=16 callers=0 calls=0
*/
void sub_145ef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ef20ULL || rel >= 0x145ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ef30 size=16 callers=0 calls=0
*/
void sub_145ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ef30ULL || rel >= 0x145ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ef40 size=16 callers=0 calls=0
*/
void sub_145ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ef40ULL || rel >= 0x145ef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ef50 size=16 callers=0 calls=0
*/
void sub_145ef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ef50ULL || rel >= 0x145ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ef60 size=16 callers=0 calls=0
*/
void sub_145ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ef60ULL || rel >= 0x145ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ef70 size=16 callers=0 calls=0
*/
void sub_145ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ef70ULL || rel >= 0x145ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ef80 size=304 callers=0 calls=0
*/
void sub_145ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ef80ULL || rel >= 0x145f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f0b0 size=32 callers=0 calls=0
*/
void sub_145f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f0b0ULL || rel >= 0x145f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f0d0 size=16 callers=0 calls=0
*/
void sub_145f0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f0d0ULL || rel >= 0x145f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f0e0 size=16 callers=0 calls=0
*/
void sub_145f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f0e0ULL || rel >= 0x145f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f0f0 size=16 callers=0 calls=0
*/
void sub_145f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f0f0ULL || rel >= 0x145f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f100 size=32 callers=0 calls=0
*/
void sub_145f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f100ULL || rel >= 0x145f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f120 size=16 callers=0 calls=0
*/
void sub_145f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f120ULL || rel >= 0x145f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f130 size=16 callers=0 calls=0
*/
void sub_145f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f130ULL || rel >= 0x145f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f140 size=16 callers=0 calls=0
*/
void sub_145f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f140ULL || rel >= 0x145f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f150 size=64 callers=0 calls=0
*/
void sub_145f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f150ULL || rel >= 0x145f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f190 size=16 callers=0 calls=0
*/
void sub_145f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f190ULL || rel >= 0x145f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f1a0 size=16 callers=0 calls=0
*/
void sub_145f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f1a0ULL || rel >= 0x145f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f1b0 size=16 callers=0 calls=0
*/
void sub_145f1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f1b0ULL || rel >= 0x145f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f1c0 size=16 callers=0 calls=0
*/
void sub_145f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f1c0ULL || rel >= 0x145f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f1d0 size=16 callers=0 calls=0
*/
void sub_145f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f1d0ULL || rel >= 0x145f1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f1e0 size=16 callers=0 calls=0
*/
void sub_145f1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f1e0ULL || rel >= 0x145f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f1f0 size=16 callers=0 calls=0
*/
void sub_145f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f1f0ULL || rel >= 0x145f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f200 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/trlicense_album/bin/trlicence_card_00_lyt.bin
*/
void trlicence_card_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f200ULL || rel >= 0x145f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f310 size=176 callers=3 calls=1
   calls: sub_14cb040
   ref: L_card_00
*/
void L_card_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f310ULL || rel >= 0x145f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f3c0 size=16 callers=0 calls=0
*/
void sub_145f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f3c0ULL || rel >= 0x145f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f3d0 size=16 callers=0 calls=0
*/
void sub_145f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f3d0ULL || rel >= 0x145f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f3e0 size=16 callers=0 calls=0
*/
void sub_145f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f3e0ULL || rel >= 0x145f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f3f0 size=16 callers=0 calls=0
*/
void sub_145f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f3f0ULL || rel >= 0x145f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f400 size=16 callers=0 calls=0
*/
void sub_145f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f400ULL || rel >= 0x145f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f410 size=16 callers=0 calls=0
*/
void sub_145f410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f410ULL || rel >= 0x145f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f420 size=16 callers=0 calls=0
*/
void sub_145f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f420ULL || rel >= 0x145f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f430 size=16 callers=0 calls=0
*/
void sub_145f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f430ULL || rel >= 0x145f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f440 size=304 callers=0 calls=0
*/
void sub_145f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f440ULL || rel >= 0x145f570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f570 size=640 callers=0 calls=9
   calls: sub_1457720, sub_1457870, sub_145fa60, sub_145fcc0, sub_795bc0, sub_c39c40, sub_d0c0, sub_eb6230, sub_eb77f0
   ref: CommonOptionBar
   ref: ViewBg
   ref: StateCampEnd
   ref: ViewCamp
   ref: ViewCard
*/
void StateCampEnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f570ULL || rel >= 0x145f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f7f0 size=96 callers=0 calls=3
   calls: sub_145fd00, sub_eb6530, sub_eb7830
*/
void sub_145f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f7f0ULL || rel >= 0x145f850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f850 size=96 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_145f850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f850ULL || rel >= 0x145f8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f8b0 size=16 callers=0 calls=0
*/
void sub_145f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f8b0ULL || rel >= 0x145f8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f8c0 size=16 callers=0 calls=0
*/
void sub_145f8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f8c0ULL || rel >= 0x145f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f8d0 size=16 callers=0 calls=0
*/
void sub_145f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f8d0ULL || rel >= 0x145f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f8e0 size=16 callers=0 calls=0
*/
void sub_145f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f8e0ULL || rel >= 0x145f8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f8f0 size=16 callers=0 calls=0
*/
void sub_145f8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f8f0ULL || rel >= 0x145f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f900 size=16 callers=0 calls=0
*/
void sub_145f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f900ULL || rel >= 0x145f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f910 size=16 callers=0 calls=0
*/
void sub_145f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f910ULL || rel >= 0x145f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f920 size=16 callers=0 calls=0
*/
void sub_145f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f920ULL || rel >= 0x145f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145f930 size=304 callers=0 calls=0
*/
void sub_145f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145f930ULL || rel >= 0x145fa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145fa60 size=336 callers=10 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_145fa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145fa60ULL || rel >= 0x145fbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145fbb0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/trlicense_album/bin/trlicense_bg_00_lyt.bin
*/
void trlicense_bg_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145fbb0ULL || rel >= 0x145fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145fcc0 size=64 callers=8 calls=1
   calls: sub_e83430
*/
void sub_145fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145fcc0ULL || rel >= 0x145fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145fd00 size=80 callers=8 calls=1
   calls: sub_14ab2b0
*/
void sub_145fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145fd00ULL || rel >= 0x145fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145fd50 size=16 callers=0 calls=0
*/
void sub_145fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145fd50ULL || rel >= 0x145fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145fd60 size=16 callers=0 calls=0
*/
void sub_145fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145fd60ULL || rel >= 0x145fd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145fd70 size=16 callers=0 calls=0
*/
void sub_145fd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145fd70ULL || rel >= 0x145fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145fd80 size=16 callers=0 calls=0
*/
void sub_145fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145fd80ULL || rel >= 0x145fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145fd90 size=16 callers=0 calls=0
*/
void sub_145fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145fd90ULL || rel >= 0x145fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145fda0 size=16 callers=0 calls=0
*/
void sub_145fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145fda0ULL || rel >= 0x145fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145fdb0 size=16 callers=0 calls=0
*/
void sub_145fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145fdb0ULL || rel >= 0x145fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145fdc0 size=16 callers=0 calls=0
*/
void sub_145fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145fdc0ULL || rel >= 0x145fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145fdd0 size=304 callers=0 calls=0
*/
void sub_145fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145fdd0ULL || rel >= 0x145ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ff00 size=1056 callers=0 calls=8
   calls: sub_1456b90, sub_1457870, sub_1458310, sub_145ebc0, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0
   ref: StateCampMain
   ref: ViewCamp
*/
void StateCampMain(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ff00ULL || rel >= 0x1460320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460320 size=720 callers=0 calls=10
   calls: sub_1456b90, sub_145ec40, sub_14cca00, sub_67d450, sub_c39c40, sub_e7eb10, sub_e80580, sub_e807f0, sub_eb8930, sub_eb8e80
*/
void sub_1460320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460320ULL || rel >= 0x14605f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014605f0 size=16 callers=0 calls=0
*/
void sub_14605f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14605f0ULL || rel >= 0x1460600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460600 size=16 callers=0 calls=0
*/
void sub_1460600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460600ULL || rel >= 0x1460610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460610 size=16 callers=0 calls=0
*/
void sub_1460610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460610ULL || rel >= 0x1460620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460620 size=16 callers=0 calls=0
*/
void sub_1460620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460620ULL || rel >= 0x1460630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460630 size=16 callers=0 calls=0
*/
void sub_1460630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460630ULL || rel >= 0x1460640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460640 size=16 callers=0 calls=0
*/
void sub_1460640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460640ULL || rel >= 0x1460650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460650 size=16 callers=0 calls=0
*/
void sub_1460650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460650ULL || rel >= 0x1460660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460660 size=16 callers=0 calls=0
*/
void sub_1460660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460660ULL || rel >= 0x1460670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460670 size=16 callers=0 calls=0
*/
void sub_1460670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460670ULL || rel >= 0x1460680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460680 size=16 callers=0 calls=0
*/
void sub_1460680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460680ULL || rel >= 0x1460690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460690 size=64 callers=0 calls=0
*/
void sub_1460690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460690ULL || rel >= 0x14606d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014606d0 size=32 callers=0 calls=0
*/
void sub_14606d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14606d0ULL || rel >= 0x14606f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014606f0 size=16 callers=0 calls=0
*/
void sub_14606f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14606f0ULL || rel >= 0x1460700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460700 size=128 callers=0 calls=0
*/
void sub_1460700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460700ULL || rel >= 0x1460780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460780 size=688 callers=0 calls=10
   calls: sub_1457720, sub_1457870, sub_145fa60, sub_145fcc0, sub_795bc0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230, sub_eb7730
   ref: CommonOptionBar
   ref: StateCampStart
   ref: ViewBg
   ref: ViewCamp
   ref: ViewCard
*/
void StateCampStart(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460780ULL || rel >= 0x1460a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460a30 size=96 callers=0 calls=3
   calls: sub_145fd00, sub_eb6530, sub_eb7790
*/
void sub_1460a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460a30ULL || rel >= 0x1460a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460a90 size=16 callers=0 calls=0
*/
void sub_1460a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460a90ULL || rel >= 0x1460aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460aa0 size=16 callers=0 calls=0
*/
void sub_1460aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460aa0ULL || rel >= 0x1460ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460ab0 size=16 callers=0 calls=0
*/
void sub_1460ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460ab0ULL || rel >= 0x1460ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460ac0 size=16 callers=0 calls=0
*/
void sub_1460ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460ac0ULL || rel >= 0x1460ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460ad0 size=16 callers=0 calls=0
*/
void sub_1460ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460ad0ULL || rel >= 0x1460ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460ae0 size=16 callers=0 calls=0
*/
void sub_1460ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460ae0ULL || rel >= 0x1460af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460af0 size=16 callers=0 calls=0
*/
void sub_1460af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460af0ULL || rel >= 0x1460b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460b00 size=16 callers=0 calls=0
*/
void sub_1460b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460b00ULL || rel >= 0x1460b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460b10 size=16 callers=0 calls=0
*/
void sub_1460b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460b10ULL || rel >= 0x1460b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460b20 size=304 callers=0 calls=0
*/
void sub_1460b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460b20ULL || rel >= 0x1460c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460c50 size=144 callers=1 calls=1
   calls: sub_1460ce0
*/
void sub_1460c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460c50ULL || rel >= 0x1460ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460ce0 size=288 callers=2 calls=3
   calls: sub_14613c0, sub_c38350, sub_e9db40
*/
void sub_1460ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460ce0ULL || rel >= 0x1460e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460e00 size=16 callers=0 calls=0
*/
void sub_1460e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460e00ULL || rel >= 0x1460e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460e10 size=16 callers=0 calls=0
*/
void sub_1460e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460e10ULL || rel >= 0x1460e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460e20 size=224 callers=0 calls=1
   calls: sub_1460f10
*/
void sub_1460e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460e20ULL || rel >= 0x1460f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460f00 size=16 callers=0 calls=0
*/
void sub_1460f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460f00ULL || rel >= 0x1460f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01460f10 size=272 callers=1 calls=3
   calls: sub_1461550, sub_672c10, sub_c386f0
*/
void sub_1460f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1460f10ULL || rel >= 0x1461020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461020 size=96 callers=0 calls=0
*/
void sub_1461020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461020ULL || rel >= 0x1461080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461080 size=96 callers=0 calls=0
*/
void sub_1461080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461080ULL || rel >= 0x14610e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014610e0 size=16 callers=0 calls=0
*/
void sub_14610e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14610e0ULL || rel >= 0x14610f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014610f0 size=96 callers=0 calls=0
*/
void sub_14610f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14610f0ULL || rel >= 0x1461150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461150 size=96 callers=0 calls=0
*/
void sub_1461150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461150ULL || rel >= 0x14611b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014611b0 size=16 callers=0 calls=0
*/
void sub_14611b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14611b0ULL || rel >= 0x14611c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014611c0 size=16 callers=0 calls=0
*/
void sub_14611c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14611c0ULL || rel >= 0x14611d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014611d0 size=96 callers=0 calls=0
*/
void sub_14611d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14611d0ULL || rel >= 0x1461230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461230 size=96 callers=0 calls=0
*/
void sub_1461230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461230ULL || rel >= 0x1461290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461290 size=304 callers=0 calls=0
*/
void sub_1461290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461290ULL || rel >= 0x14613c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014613c0 size=400 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_14613c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14613c0ULL || rel >= 0x1461550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461550 size=272 callers=1 calls=2
   calls: sub_1461660, sub_e7b660
*/
void sub_1461550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461550ULL || rel >= 0x1461660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461660 size=224 callers=1 calls=3
   calls: sub_1461740, sub_7c2da0, sub_e7b5e0
*/
void sub_1461660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461660ULL || rel >= 0x1461740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461740 size=272 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1461740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461740ULL || rel >= 0x1461850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461850 size=208 callers=1 calls=1
   calls: sub_3340
*/
void sub_1461850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461850ULL || rel >= 0x1461920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461920 size=448 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1461920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461920ULL || rel >= 0x1461ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461ae0 size=96 callers=0 calls=1
   calls: sub_1461d20
*/
void sub_1461ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461ae0ULL || rel >= 0x1461b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461b40 size=16 callers=0 calls=0
*/
void sub_1461b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461b40ULL || rel >= 0x1461b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461b50 size=176 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1461b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461b50ULL || rel >= 0x1461c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461c00 size=208 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1461c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461c00ULL || rel >= 0x1461cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461cd0 size=16 callers=0 calls=0
*/
void sub_1461cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461cd0ULL || rel >= 0x1461ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461ce0 size=16 callers=0 calls=0
*/
void sub_1461ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461ce0ULL || rel >= 0x1461cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461cf0 size=16 callers=0 calls=0
*/
void sub_1461cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461cf0ULL || rel >= 0x1461d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461d00 size=32 callers=0 calls=0
*/
void sub_1461d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461d00ULL || rel >= 0x1461d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461d20 size=256 callers=4 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_1461d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461d20ULL || rel >= 0x1461e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461e20 size=128 callers=0 calls=0
*/
void sub_1461e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461e20ULL || rel >= 0x1461ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01461ea0 size=4368 callers=0 calls=27
   calls: font_fs_150_bold_00, sub_133e930, sub_1340a40, sub_1456d00, sub_1457050, sub_1457f30, sub_1459830, sub_1461d20, sub_1462fb0, sub_14630c0, sub_14671b0, sub_1467500
   ... +15 more
   ref: CommonOptionBar
   ref: ViewTop
   ref: ModelMemory
   ref: MyCardViewerMemory
   ref: ViewBg
   ref: ViewMsg
   ref: AppMemory
   ref: ViewTopMenu
*/
void ViewCardPassMenu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1461ea0ULL || rel >= 0x1462fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01462fb0 size=272 callers=1 calls=3
   calls: sub_1466ed0, sub_1467080, sub_e7c160
*/
void sub_1462fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1462fb0ULL || rel >= 0x14630c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014630c0 size=512 callers=1 calls=1
   calls: sub_5fe6a0
*/
void sub_14630c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14630c0ULL || rel >= 0x14632c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014632c0 size=80 callers=0 calls=3
   calls: sub_1340e10, sub_14bf040, sub_14cae50
*/
void sub_14632c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14632c0ULL || rel >= 0x1463310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01463310 size=1056 callers=0 calls=19
   calls: L_card_00, L_card_00_2, fi_badges_complete, sub_1340e50, sub_1341210, sub_1341250, sub_1341260, sub_1457720, sub_1458300, sub_1458350, sub_14583e0, sub_1463730
   ... +7 more
   ref: CommonOptionBar
   ref: ViewTop
   ref: ViewCard
*/
void CommonOptionBar_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1463310ULL || rel >= 0x1463730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01463730 size=256 callers=2 calls=6
   calls: sub_1345ca0, sub_14beb30, sub_14bed50, sub_14bf750, sub_14bfbb0, sub_14cc8d0
*/
void sub_1463730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1463730ULL || rel >= 0x1463830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01463830 size=224 callers=0 calls=5
   calls: sub_1458120, sub_1463910, sub_1467080, sub_14bf2f0, sub_14cae60
*/
void sub_1463830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1463830ULL || rel >= 0x1463910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01463910 size=176 callers=1 calls=4
   calls: sub_14bfb70, sub_14cc350, sub_6829a0, sub_682dd0
*/
void sub_1463910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1463910ULL || rel >= 0x14639c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014639c0 size=368 callers=0 calls=5
   calls: sub_104e040, sub_133e930, sub_1458260, sub_14bf490, sub_14caf00
*/
void sub_14639c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14639c0ULL || rel >= 0x1463b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01463b30 size=2736 callers=0 calls=11
   calls: sub_14687e0, sub_1468920, sub_1468e20, sub_14695c0, sub_146a270, sub_146a3b0, sub_146a4f0, sub_146a630, sub_146add0, sub_146af10, sub_e7c160
*/
void sub_1463b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1463b30ULL || rel >= 0x14645e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014645e0 size=576 callers=0 calls=6
   calls: sub_104e050, sub_1468a60, sub_1468ba0, sub_1468ce0, sub_79c240, sub_e7c160
*/
void sub_14645e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14645e0ULL || rel >= 0x1464820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01464820 size=672 callers=0 calls=6
   calls: sub_1468f60, sub_14690a0, sub_14691e0, sub_1469330, sub_79c240, sub_e7c160
*/
void sub_1464820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1464820ULL || rel >= 0x1464ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01464ac0 size=448 callers=0 calls=4
   calls: sub_1468e20, sub_1469470, sub_79c240, sub_e7c160
*/
void sub_1464ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1464ac0ULL || rel >= 0x1464c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01464c80 size=448 callers=0 calls=4
   calls: sub_1468e20, sub_1469330, sub_79c240, sub_e7c160
*/
void sub_1464c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1464c80ULL || rel >= 0x1464e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01464e40 size=448 callers=0 calls=4
   calls: sub_1469700, sub_1469850, sub_79c240, sub_e7c160
*/
void sub_1464e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1464e40ULL || rel >= 0x1465000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01465000 size=448 callers=0 calls=4
   calls: sub_14695c0, sub_1469850, sub_79c240, sub_e7c160
*/
void sub_1465000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1465000ULL || rel >= 0x14651c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014651c0 size=448 callers=0 calls=4
   calls: sub_1468e20, sub_1469990, sub_79c240, sub_e7c160
*/
void sub_14651c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14651c0ULL || rel >= 0x1465380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01465380 size=448 callers=0 calls=4
   calls: sub_1468e20, sub_14691e0, sub_79c240, sub_e7c160
*/
void sub_1465380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1465380ULL || rel >= 0x1465540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01465540 size=528 callers=0 calls=4
   calls: sub_1468920, sub_1469ae0, sub_79c240, sub_e7c160
*/
void sub_1465540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1465540ULL || rel >= 0x1465750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01465750 size=368 callers=0 calls=3
   calls: sub_1469c20, sub_79c240, sub_e7c160
*/
void sub_1465750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1465750ULL || rel >= 0x14658c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014658c0 size=912 callers=0 calls=8
   calls: sub_1345ca0, sub_1469c20, sub_1469d60, sub_1469ea0, sub_1469ff0, sub_146a130, sub_79c240, sub_e7c160
*/
void sub_14658c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14658c0ULL || rel >= 0x1465c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01465c50 size=240 callers=0 calls=3
   calls: sub_146a270, sub_e7c160, sub_ffa7d0
*/
void sub_1465c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1465c50ULL || rel >= 0x1465d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01465d40 size=224 callers=0 calls=3
   calls: sub_104e040, sub_1468920, sub_e7c160
*/
void sub_1465d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1465d40ULL || rel >= 0x1465e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01465e20 size=544 callers=0 calls=6
   calls: sub_146a130, sub_146a3b0, sub_146a770, sub_146b8b0, sub_79c240, sub_e7c160
   ref: ViewCardCode
*/
void ViewCardCode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1465e20ULL || rel >= 0x1466040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466040 size=560 callers=0 calls=5
   calls: sub_1469ea0, sub_146a8c0, sub_146aa00, sub_79c240, sub_e7c160
*/
void sub_1466040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466040ULL || rel >= 0x1466270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466270 size=544 callers=0 calls=6
   calls: sub_1469ea0, sub_146a4f0, sub_146a770, sub_146b8b0, sub_79c240, sub_e7c160
   ref: ViewCardCode
*/
void ViewCardCode_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466270ULL || rel >= 0x1466490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466490 size=464 callers=0 calls=4
   calls: sub_1469ea0, sub_146a8c0, sub_79c240, sub_e7c160
*/
void sub_1466490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466490ULL || rel >= 0x1466660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466660 size=464 callers=0 calls=4
   calls: sub_146a8c0, sub_146ab50, sub_79c240, sub_e7c160
*/
void sub_1466660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466660ULL || rel >= 0x1466830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466830 size=448 callers=0 calls=4
   calls: sub_146a630, sub_146ac90, sub_79c240, sub_e7c160
*/
void sub_1466830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466830ULL || rel >= 0x14669f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014669f0 size=272 callers=0 calls=2
   calls: sub_133e930, sub_1461850
*/
void sub_14669f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14669f0ULL || rel >= 0x1466b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466b00 size=16 callers=0 calls=0
*/
void sub_1466b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466b00ULL || rel >= 0x1466b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466b10 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1466b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466b10ULL || rel >= 0x1466bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466bc0 size=16 callers=0 calls=0
*/
void sub_1466bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466bc0ULL || rel >= 0x1466bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466bd0 size=16 callers=0 calls=0
*/
void sub_1466bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466bd0ULL || rel >= 0x1466be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466be0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1466be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466be0ULL || rel >= 0x1466c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466c90 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1466c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466c90ULL || rel >= 0x1466d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466d40 size=16 callers=0 calls=0
*/
void sub_1466d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466d40ULL || rel >= 0x1466d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466d50 size=16 callers=0 calls=0
*/
void sub_1466d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466d50ULL || rel >= 0x1466d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466d60 size=240 callers=0 calls=0
*/
void sub_1466d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466d60ULL || rel >= 0x1466e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466e50 size=16 callers=0 calls=0
*/
void sub_1466e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466e50ULL || rel >= 0x1466e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466e60 size=16 callers=0 calls=0
*/
void sub_1466e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466e60ULL || rel >= 0x1466e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466e70 size=16 callers=0 calls=0
*/
void sub_1466e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466e70ULL || rel >= 0x1466e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466e80 size=16 callers=0 calls=0
*/
void sub_1466e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466e80ULL || rel >= 0x1466e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466e90 size=16 callers=0 calls=0
*/
void sub_1466e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466e90ULL || rel >= 0x1466ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466ea0 size=16 callers=0 calls=0
*/
void sub_1466ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466ea0ULL || rel >= 0x1466eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466eb0 size=16 callers=0 calls=0
*/
void sub_1466eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466eb0ULL || rel >= 0x1466ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466ec0 size=16 callers=0 calls=0
*/
void sub_1466ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466ec0ULL || rel >= 0x1466ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01466ed0 size=432 callers=1 calls=2
   calls: sub_b6f8c0, sub_e7c210
*/
void sub_1466ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1466ed0ULL || rel >= 0x1467080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01467080 size=304 callers=45 calls=0
*/
void sub_1467080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1467080ULL || rel >= 0x14671b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014671b0 size=288 callers=1 calls=2
   calls: sub_14672d0, sub_e809c0
*/
void sub_14671b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14671b0ULL || rel >= 0x14672d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014672d0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_14672d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14672d0ULL || rel >= 0x1467500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01467500 size=288 callers=1 calls=2
   calls: sub_1467620, sub_e809c0
*/
void sub_1467500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1467500ULL || rel >= 0x1467620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01467620 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1467620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1467620ULL || rel >= 0x1467850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01467850 size=288 callers=1 calls=2
   calls: sub_1467970, sub_e809c0
*/
void sub_1467850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1467850ULL || rel >= 0x1467970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01467970 size=656 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1467970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1467970ULL || rel >= 0x1467c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01467c00 size=288 callers=2 calls=2
   calls: sub_1467d20, sub_e809c0
*/
void sub_1467c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1467c00ULL || rel >= 0x1467d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01467d20 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1467d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1467d20ULL || rel >= 0x1467f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01467f70 size=288 callers=1 calls=2
   calls: sub_1468090, sub_e809c0
*/
void sub_1467f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1467f70ULL || rel >= 0x1468090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01468090 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1468090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1468090ULL || rel >= 0x14682d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014682d0 size=288 callers=1 calls=2
   calls: sub_14683f0, sub_e809c0
*/
void sub_14682d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14682d0ULL || rel >= 0x14683f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014683f0 size=384 callers=1 calls=3
   calls: sub_1468570, sub_790490, sub_e7fe20
*/
void sub_14683f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14683f0ULL || rel >= 0x1468570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01468570 size=288 callers=1 calls=2
   calls: anonymous_2, sub_e76a20
*/
void sub_1468570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1468570ULL || rel >= 0x1468690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01468690 size=336 callers=7 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1468690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1468690ULL || rel >= 0x14687e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014687e0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_14687e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14687e0ULL || rel >= 0x1468920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01468920 size=320 callers=3 calls=1
   calls: anonymous
*/
void sub_1468920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1468920ULL || rel >= 0x1468a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01468a60 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1468a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1468a60ULL || rel >= 0x1468ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01468ba0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1468ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1468ba0ULL || rel >= 0x1468ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01468ce0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1468ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1468ce0ULL || rel >= 0x1468e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01468e20 size=320 callers=5 calls=1
   calls: anonymous
*/
void sub_1468e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1468e20ULL || rel >= 0x1468f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01468f60 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1468f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1468f60ULL || rel >= 0x14690a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014690a0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_14690a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14690a0ULL || rel >= 0x14691e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014691e0 size=336 callers=2 calls=1
   calls: anonymous
*/
void sub_14691e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14691e0ULL || rel >= 0x1469330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01469330 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_1469330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1469330ULL || rel >= 0x1469470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01469470 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_1469470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1469470ULL || rel >= 0x14695c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014695c0 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_14695c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14695c0ULL || rel >= 0x1469700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01469700 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_1469700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1469700ULL || rel >= 0x1469850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01469850 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_1469850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1469850ULL || rel >= 0x1469990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01469990 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_1469990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1469990ULL || rel >= 0x1469ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01469ae0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1469ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1469ae0ULL || rel >= 0x1469c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01469c20 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_1469c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1469c20ULL || rel >= 0x1469d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01469d60 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1469d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1469d60ULL || rel >= 0x1469ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01469ea0 size=336 callers=4 calls=1
   calls: anonymous
*/
void sub_1469ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1469ea0ULL || rel >= 0x1469ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01469ff0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1469ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1469ff0ULL || rel >= 0x146a130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146a130 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_146a130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146a130ULL || rel >= 0x146a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146a270 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_146a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146a270ULL || rel >= 0x146a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146a3b0 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_146a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146a3b0ULL || rel >= 0x146a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146a4f0 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_146a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146a4f0ULL || rel >= 0x146a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146a630 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_146a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146a630ULL || rel >= 0x146a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146a770 size=336 callers=13 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_146a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146a770ULL || rel >= 0x146a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146a8c0 size=320 callers=3 calls=1
   calls: anonymous
*/
void sub_146a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146a8c0ULL || rel >= 0x146aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146aa00 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_146aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146aa00ULL || rel >= 0x146ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146ab50 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_146ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146ab50ULL || rel >= 0x146ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146ac90 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_146ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146ac90ULL || rel >= 0x146add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146add0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_146add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146add0ULL || rel >= 0x146af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146af10 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_146af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146af10ULL || rel >= 0x146b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146b050 size=128 callers=0 calls=0
*/
void sub_146b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146b050ULL || rel >= 0x146b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146b0d0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/trlicense_album/bin/trlicense_code_00_lyt.bin
   ref: bin/appli/trlicense_album/bin/uikit_trlicense_code_00.bin
*/
void uikit_trlicense_code_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146b0d0ULL || rel >= 0x146b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146b2b0 size=80 callers=0 calls=2
   calls: strinput, sub_e76a20
*/
void sub_146b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146b2b0ULL || rel >= 0x146b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146b300 size=32 callers=0 calls=1
   calls: sub_e769b0
*/
void sub_146b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146b300ULL || rel >= 0x146b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146b320 size=1264 callers=0 calls=6
   calls: sub_14e1a30, sub_5cfad0, sub_67b990, sub_7a3c20, sub_e84190, sub_e84310
*/
void sub_146b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146b320ULL || rel >= 0x146b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146b810 size=160 callers=0 calls=1
   calls: sub_14e1a30
*/
void sub_146b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146b810ULL || rel >= 0x146b8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146b8b0 size=1936 callers=6 calls=20
   calls: sub_105b2c0, sub_13133a0, sub_13149a0, sub_1315b90, sub_1345ca0, sub_14ac370, sub_14e1a00, sub_14e6d90, sub_158a790, sub_15bc1e0, sub_15bc310, sub_15bccf0
   ... +8 more
*/
void sub_146b8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146b8b0ULL || rel >= 0x146c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c040 size=96 callers=4 calls=2
   calls: sub_14e1a30, sub_14e6550
*/
void sub_146c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c040ULL || rel >= 0x146c0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c0a0 size=608 callers=1 calls=10
   calls: sub_13133a0, sub_14ac370, sub_67bdb0, sub_67bdd0, sub_67bf00, sub_67bfa0, sub_67c7e0, sub_67d450, sub_e79810, sub_e7eb10
*/
void sub_146c0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c0a0ULL || rel >= 0x146c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c300 size=192 callers=0 calls=0
*/
void sub_146c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c300ULL || rel >= 0x146c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c3c0 size=192 callers=0 calls=0
*/
void sub_146c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c3c0ULL || rel >= 0x146c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c480 size=16 callers=0 calls=0
*/
void sub_146c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c480ULL || rel >= 0x146c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c490 size=192 callers=0 calls=0
*/
void sub_146c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c490ULL || rel >= 0x146c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c550 size=192 callers=0 calls=0
*/
void sub_146c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c550ULL || rel >= 0x146c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c610 size=16 callers=0 calls=0
*/
void sub_146c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c610ULL || rel >= 0x146c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c620 size=16 callers=0 calls=0
*/
void sub_146c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c620ULL || rel >= 0x146c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c630 size=192 callers=0 calls=0
*/
void sub_146c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c630ULL || rel >= 0x146c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c6f0 size=192 callers=0 calls=0
*/
void sub_146c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c6f0ULL || rel >= 0x146c7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c7b0 size=304 callers=0 calls=0
*/
void sub_146c7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c7b0ULL || rel >= 0x146c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c8e0 size=64 callers=0 calls=1
   calls: sub_14e1a30
*/
void sub_146c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c8e0ULL || rel >= 0x146c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c920 size=16 callers=0 calls=0
*/
void sub_146c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c920ULL || rel >= 0x146c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c930 size=16 callers=0 calls=0
*/
void sub_146c930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c930ULL || rel >= 0x146c940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c940 size=16 callers=0 calls=0
*/
void sub_146c940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c940ULL || rel >= 0x146c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c950 size=64 callers=0 calls=1
   calls: sub_14e1a30
*/
void sub_146c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c950ULL || rel >= 0x146c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c990 size=16 callers=0 calls=0
*/
void sub_146c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c990ULL || rel >= 0x146c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c9a0 size=16 callers=0 calls=0
*/
void sub_146c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c9a0ULL || rel >= 0x146c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c9b0 size=16 callers=0 calls=0
*/
void sub_146c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c9b0ULL || rel >= 0x146c9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146c9c0 size=128 callers=0 calls=0
*/
void sub_146c9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146c9c0ULL || rel >= 0x146ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146ca40 size=320 callers=1 calls=1
   calls: TrainerID
*/
void sub_146ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146ca40ULL || rel >= 0x146cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146cb80 size=16 callers=2 calls=0
*/
void sub_146cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146cb80ULL || rel >= 0x146cb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146cb90 size=64 callers=0 calls=0
*/
void sub_146cb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146cb90ULL || rel >= 0x146cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146cbd0 size=64 callers=0 calls=0
*/
void sub_146cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146cbd0ULL || rel >= 0x146cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146cc10 size=64 callers=0 calls=0
*/
void sub_146cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146cc10ULL || rel >= 0x146cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146cc50 size=64 callers=0 calls=0
*/
void sub_146cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146cc50ULL || rel >= 0x146cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146cc90 size=16 callers=0 calls=0
*/
void sub_146cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146cc90ULL || rel >= 0x146cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146cca0 size=752 callers=1 calls=9
   calls: sub_1106320, sub_11063e0, sub_11065b0, sub_1106f30, sub_1306f20, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0
   ref: CharaData
   ref: TrainerID
   ref: CharaMax
*/
void TrainerID(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146cca0ULL || rel >= 0x146cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146cf90 size=16 callers=0 calls=0
*/
void sub_146cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146cf90ULL || rel >= 0x146cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146cfa0 size=288 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/trlicense_album/bin/trlicence_top_00_lyt.bin
*/
void trlicence_top_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146cfa0ULL || rel >= 0x146d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146d0c0 size=2464 callers=0 calls=12
   calls: sub_12fa460, sub_1315b90, sub_1345ca0, sub_136b790, sub_137b8b0, sub_137b970, sub_137baa0, sub_14ac370, sub_67d450, sub_8f19b0, sub_e7eb10, sub_eadb10
*/
void sub_146d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146d0c0ULL || rel >= 0x146da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146da60 size=176 callers=1 calls=1
   calls: sub_14cb040
   ref: L_card_00
*/
void L_card_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146da60ULL || rel >= 0x146db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146db10 size=16 callers=0 calls=0
*/
void sub_146db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146db10ULL || rel >= 0x146db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146db20 size=16 callers=0 calls=0
*/
void sub_146db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146db20ULL || rel >= 0x146db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146db30 size=16 callers=0 calls=0
*/
void sub_146db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146db30ULL || rel >= 0x146db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146db40 size=16 callers=0 calls=0
*/
void sub_146db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146db40ULL || rel >= 0x146db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146db50 size=16 callers=0 calls=0
*/
void sub_146db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146db50ULL || rel >= 0x146db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146db60 size=16 callers=0 calls=0
*/
void sub_146db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146db60ULL || rel >= 0x146db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146db70 size=16 callers=0 calls=0
*/
void sub_146db70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146db70ULL || rel >= 0x146db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146db80 size=16 callers=0 calls=0
*/
void sub_146db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146db80ULL || rel >= 0x146db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146db90 size=304 callers=0 calls=0
*/
void sub_146db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146db90ULL || rel >= 0x146dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146dcc0 size=896 callers=0 calls=8
   calls: sub_1345d00, sub_67b990, sub_67d450, sub_b31900, sub_c39c40, sub_d0c0, sub_e7eb10, sub_eb8930
   ref: ViewMsg
   ref: StateDelete
*/
void StateDelete(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146dcc0ULL || rel >= 0x146e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e040 size=576 callers=0 calls=3
   calls: RequestDeleteTrainerLicense, sub_1345ca0, sub_eb8e80
*/
void sub_146e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e040ULL || rel >= 0x146e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e280 size=16 callers=0 calls=0
*/
void sub_146e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e280ULL || rel >= 0x146e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e290 size=96 callers=0 calls=0
*/
void sub_146e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e290ULL || rel >= 0x146e2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e2f0 size=96 callers=0 calls=0
*/
void sub_146e2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e2f0ULL || rel >= 0x146e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e350 size=16 callers=0 calls=0
*/
void sub_146e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e350ULL || rel >= 0x146e360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e360 size=96 callers=0 calls=0
*/
void sub_146e360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e360ULL || rel >= 0x146e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e3c0 size=96 callers=0 calls=0
*/
void sub_146e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e3c0ULL || rel >= 0x146e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e420 size=16 callers=0 calls=0
*/
void sub_146e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e420ULL || rel >= 0x146e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e430 size=16 callers=0 calls=0
*/
void sub_146e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e430ULL || rel >= 0x146e440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e440 size=96 callers=0 calls=0
*/
void sub_146e440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e440ULL || rel >= 0x146e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e4a0 size=96 callers=0 calls=0
*/
void sub_146e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e4a0ULL || rel >= 0x146e500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e500 size=304 callers=0 calls=0
*/
void sub_146e500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e500ULL || rel >= 0x146e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e630 size=160 callers=0 calls=1
   calls: sub_1345d00
*/
void sub_146e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e630ULL || rel >= 0x146e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e6d0 size=64 callers=0 calls=0
*/
void sub_146e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e6d0ULL || rel >= 0x146e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e710 size=48 callers=0 calls=0
*/
void sub_146e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e710ULL || rel >= 0x146e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e740 size=48 callers=0 calls=0
*/
void sub_146e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e740ULL || rel >= 0x146e770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e770 size=480 callers=0 calls=8
   calls: sub_1047680, sub_146ea30, sub_67d450, sub_c39c40, sub_e7eb10, sub_e80580, sub_e807f0, sub_eb8930
*/
void sub_146e770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e770ULL || rel >= 0x146e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e950 size=64 callers=0 calls=0
*/
void sub_146e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e950ULL || rel >= 0x146e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e990 size=48 callers=0 calls=0
*/
void sub_146e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e990ULL || rel >= 0x146e9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e9c0 size=48 callers=0 calls=0
*/
void sub_146e9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e9c0ULL || rel >= 0x146e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146e9f0 size=64 callers=1 calls=0
*/
void sub_146e9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146e9f0ULL || rel >= 0x146ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146ea30 size=64 callers=1 calls=0
*/
void sub_146ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146ea30ULL || rel >= 0x146ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146ea70 size=64 callers=1 calls=0
*/
void sub_146ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146ea70ULL || rel >= 0x146eab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146eab0 size=976 callers=0 calls=8
   calls: sub_1345d00, sub_67b990, sub_67d450, sub_b31900, sub_c39c40, sub_d0c0, sub_e7eb10, sub_eb8930
   ref: StateUpload
   ref: ViewMsg
*/
void StateUpload(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146eab0ULL || rel >= 0x146ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146ee80 size=1040 callers=0 calls=3
   calls: RequestUploadTrainerLicense, sub_1345ca0, sub_eb8e80
*/
void sub_146ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146ee80ULL || rel >= 0x146f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f290 size=16 callers=0 calls=0
*/
void sub_146f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f290ULL || rel >= 0x146f2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f2a0 size=96 callers=0 calls=0
*/
void sub_146f2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f2a0ULL || rel >= 0x146f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f300 size=96 callers=0 calls=0
*/
void sub_146f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f300ULL || rel >= 0x146f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f360 size=16 callers=0 calls=0
*/
void sub_146f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f360ULL || rel >= 0x146f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f370 size=96 callers=0 calls=0
*/
void sub_146f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f370ULL || rel >= 0x146f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f3d0 size=96 callers=0 calls=0
*/
void sub_146f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f3d0ULL || rel >= 0x146f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f430 size=16 callers=0 calls=0
*/
void sub_146f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f430ULL || rel >= 0x146f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f440 size=16 callers=0 calls=0
*/
void sub_146f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f440ULL || rel >= 0x146f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f450 size=96 callers=0 calls=0
*/
void sub_146f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f450ULL || rel >= 0x146f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f4b0 size=96 callers=0 calls=0
*/
void sub_146f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f4b0ULL || rel >= 0x146f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f510 size=304 callers=0 calls=0
*/
void sub_146f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f510ULL || rel >= 0x146f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f640 size=720 callers=0 calls=9
   calls: sub_1345d00, sub_1502120, sub_5cfad0, sub_67d450, sub_c39c40, sub_e7eb10, sub_e80580, sub_e807f0, sub_eb8930
*/
void sub_146f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f640ULL || rel >= 0x146f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f910 size=64 callers=0 calls=0
*/
void sub_146f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f910ULL || rel >= 0x146f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f950 size=48 callers=0 calls=0
*/
void sub_146f950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f950ULL || rel >= 0x146f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f980 size=48 callers=0 calls=0
*/
void sub_146f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f980ULL || rel >= 0x146f9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146f9b0 size=480 callers=0 calls=8
   calls: sub_1047680, sub_146e9f0, sub_67d450, sub_c39c40, sub_e7eb10, sub_e80580, sub_e807f0, sub_eb8930
*/
void sub_146f9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146f9b0ULL || rel >= 0x146fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146fb90 size=64 callers=0 calls=0
*/
void sub_146fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146fb90ULL || rel >= 0x146fbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146fbd0 size=48 callers=0 calls=0
*/
void sub_146fbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146fbd0ULL || rel >= 0x146fc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146fc00 size=48 callers=0 calls=0
*/
void sub_146fc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146fc00ULL || rel >= 0x146fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146fc30 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/trlicense_album/bin/uikit_trlicense_album_app_parts_00.bin
   ref: bin/appli/trlicense_album/bin/trlicense_album_app_parts_00_lyt.bin
*/
void uikit_trlicense_album_app_parts_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146fc30ULL || rel >= 0x146fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0146fe10 size=1936 callers=0 calls=10
   calls: sub_14e1a30, sub_14e6550, sub_5cfad0, sub_7a3c20, sub_8f19b0, sub_e7eb10, sub_e83930, sub_e83e60, sub_e84190, sub_e84310
   ref: Play_UI_common_card_turn
*/
void Play_UI_common_card_turn_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146fe10ULL || rel >= 0x14705a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014705a0 size=96 callers=1 calls=2
   calls: sub_14e1a30, sub_e80580
*/
void sub_14705a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14705a0ULL || rel >= 0x1470600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470600 size=64 callers=1 calls=2
   calls: sub_14e1a30, sub_14e1b40
*/
void sub_1470600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470600ULL || rel >= 0x1470640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470640 size=112 callers=0 calls=0
*/
void sub_1470640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470640ULL || rel >= 0x14706b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014706b0 size=112 callers=0 calls=0
*/
void sub_14706b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14706b0ULL || rel >= 0x1470720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470720 size=16 callers=0 calls=0
*/
void sub_1470720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470720ULL || rel >= 0x1470730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470730 size=112 callers=0 calls=0
*/
void sub_1470730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470730ULL || rel >= 0x14707a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014707a0 size=112 callers=0 calls=0
*/
void sub_14707a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14707a0ULL || rel >= 0x1470810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470810 size=16 callers=0 calls=0
*/
void sub_1470810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470810ULL || rel >= 0x1470820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470820 size=16 callers=0 calls=0
*/
void sub_1470820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470820ULL || rel >= 0x1470830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470830 size=112 callers=0 calls=0
*/
void sub_1470830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470830ULL || rel >= 0x14708a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014708a0 size=112 callers=0 calls=0
*/
void sub_14708a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14708a0ULL || rel >= 0x1470910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470910 size=304 callers=0 calls=0
*/
void sub_1470910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470910ULL || rel >= 0x1470a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470a40 size=16 callers=0 calls=0
*/
void sub_1470a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470a40ULL || rel >= 0x1470a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470a50 size=16 callers=0 calls=0
*/
void sub_1470a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470a50ULL || rel >= 0x1470a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470a60 size=16 callers=0 calls=0
*/
void sub_1470a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470a60ULL || rel >= 0x1470a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470a70 size=16 callers=0 calls=0
*/
void sub_1470a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470a70ULL || rel >= 0x1470a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470a80 size=16 callers=0 calls=0
*/
void sub_1470a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470a80ULL || rel >= 0x1470a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470a90 size=16 callers=0 calls=0
*/
void sub_1470a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470a90ULL || rel >= 0x1470aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470aa0 size=16 callers=0 calls=0
*/
void sub_1470aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470aa0ULL || rel >= 0x1470ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470ab0 size=16 callers=0 calls=0
*/
void sub_1470ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470ab0ULL || rel >= 0x1470ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470ac0 size=16 callers=0 calls=0
*/
void sub_1470ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470ac0ULL || rel >= 0x1470ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470ad0 size=16 callers=0 calls=0
*/
void sub_1470ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470ad0ULL || rel >= 0x1470ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470ae0 size=16 callers=0 calls=0
*/
void sub_1470ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470ae0ULL || rel >= 0x1470af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470af0 size=16 callers=0 calls=0
*/
void sub_1470af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470af0ULL || rel >= 0x1470b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470b00 size=32 callers=0 calls=0
*/
void sub_1470b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470b00ULL || rel >= 0x1470b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470b20 size=16 callers=0 calls=0
*/
void sub_1470b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470b20ULL || rel >= 0x1470b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470b30 size=16 callers=0 calls=0
*/
void sub_1470b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470b30ULL || rel >= 0x1470b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470b40 size=16 callers=0 calls=0
*/
void sub_1470b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470b40ULL || rel >= 0x1470b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470b50 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/trlicense_album/bin/trlicence_preview_00_lyt.bin
   ref: bin/appli/trlicense_album/bin/uikit_trlicense_preview_00.bin
*/
void uikit_trlicense_preview_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470b50ULL || rel >= 0x1470d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470d30 size=448 callers=3 calls=11
   calls: sub_1459ac0, sub_1459d20, sub_1470ef0, sub_14710b0, sub_14711d0, sub_14712e0, sub_1471400, sub_67be60, sub_67bfa0, sub_e83430, sub_e83930
*/
void sub_1470d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470d30ULL || rel >= 0x1470ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01470ef0 size=448 callers=2 calls=4
   calls: sub_1315b90, sub_14ac040, sub_14ac370, sub_67d450
*/
void sub_1470ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1470ef0ULL || rel >= 0x14710b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014710b0 size=288 callers=2 calls=3
   calls: sub_1314a80, sub_14ac370, sub_67d450
*/
void sub_14710b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14710b0ULL || rel >= 0x14711d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014711d0 size=272 callers=1 calls=3
   calls: sub_14ac040, sub_14ac370, sub_67d450
*/
void sub_14711d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14711d0ULL || rel >= 0x14712e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014712e0 size=288 callers=1 calls=2
   calls: sub_14ac040, sub_67d450
*/
void sub_14712e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14712e0ULL || rel >= 0x1471400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01471400 size=288 callers=1 calls=4
   calls: sub_146cb80, sub_14ac370, sub_67d450, trname
*/
void sub_1471400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1471400ULL || rel >= 0x1471520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01471520 size=2096 callers=0 calls=6
   calls: sub_14aad40, sub_14e1a00, sub_5cfad0, sub_67b990, sub_7a3c20, sub_e7eb10
   ref: Play_UI_common_card_turn
*/
void Play_UI_common_card_turn_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1471520ULL || rel >= 0x1471d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01471d50 size=128 callers=2 calls=2
   calls: sub_14e1a00, sub_e80580
*/
void sub_1471d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1471d50ULL || rel >= 0x1471dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01471dd0 size=48 callers=2 calls=0
*/
void sub_1471dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1471dd0ULL || rel >= 0x1471e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01471e00 size=96 callers=3 calls=2
   calls: sub_14e1a00, sub_e80580
*/
void sub_1471e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1471e00ULL || rel >= 0x1471e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01471e60 size=112 callers=1 calls=2
   calls: sub_14e1a00, sub_e80580
*/
void sub_1471e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1471e60ULL || rel >= 0x1471ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01471ed0 size=256 callers=0 calls=0
*/
void sub_1471ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1471ed0ULL || rel >= 0x1471fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01471fd0 size=16 callers=0 calls=0
*/
void sub_1471fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1471fd0ULL || rel >= 0x1471fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01471fe0 size=16 callers=0 calls=0
*/
void sub_1471fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1471fe0ULL || rel >= 0x1471ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01471ff0 size=16 callers=0 calls=0
*/
void sub_1471ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1471ff0ULL || rel >= 0x1472000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472000 size=16 callers=0 calls=0
*/
void sub_1472000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472000ULL || rel >= 0x1472010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472010 size=16 callers=0 calls=0
*/
void sub_1472010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472010ULL || rel >= 0x1472020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472020 size=16 callers=0 calls=0
*/
void sub_1472020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472020ULL || rel >= 0x1472030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472030 size=16 callers=0 calls=0
*/
void sub_1472030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472030ULL || rel >= 0x1472040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472040 size=16 callers=0 calls=0
*/
void sub_1472040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472040ULL || rel >= 0x1472050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472050 size=304 callers=1 calls=0
*/
void sub_1472050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472050ULL || rel >= 0x1472180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472180 size=16 callers=0 calls=0
*/
void sub_1472180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472180ULL || rel >= 0x1472190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472190 size=16 callers=0 calls=0
*/
void sub_1472190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472190ULL || rel >= 0x14721a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014721a0 size=16 callers=0 calls=0
*/
void sub_14721a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14721a0ULL || rel >= 0x14721b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014721b0 size=16 callers=0 calls=0
*/
void sub_14721b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14721b0ULL || rel >= 0x14721c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014721c0 size=32 callers=0 calls=0
*/
void sub_14721c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14721c0ULL || rel >= 0x14721e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014721e0 size=16 callers=0 calls=0
*/
void sub_14721e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14721e0ULL || rel >= 0x14721f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014721f0 size=16 callers=0 calls=0
*/
void sub_14721f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14721f0ULL || rel >= 0x1472200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472200 size=16 callers=0 calls=0
*/
void sub_1472200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472200ULL || rel >= 0x1472210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472210 size=16 callers=0 calls=0
*/
void sub_1472210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472210ULL || rel >= 0x1472220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472220 size=16 callers=0 calls=0
*/
void sub_1472220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472220ULL || rel >= 0x1472230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472230 size=16 callers=0 calls=0
*/
void sub_1472230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472230ULL || rel >= 0x1472240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472240 size=16 callers=0 calls=0
*/
void sub_1472240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472240ULL || rel >= 0x1472250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472250 size=48 callers=0 calls=0
*/
void sub_1472250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472250ULL || rel >= 0x1472280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472280 size=16 callers=0 calls=0
*/
void sub_1472280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472280ULL || rel >= 0x1472290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472290 size=16 callers=0 calls=0
*/
void sub_1472290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472290ULL || rel >= 0x14722a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014722a0 size=16 callers=0 calls=0
*/
void sub_14722a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14722a0ULL || rel >= 0x14722b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014722b0 size=640 callers=0 calls=8
   calls: sub_145fa60, sub_1468690, sub_1472790, sub_795bc0, sub_c39c40, sub_d0c0, sub_eb6230, sub_eb77f0
   ref: CommonOptionBar
   ref: StateAlbumEnd
   ref: ViewTop
   ref: ViewBg
   ref: ViewTopMenu
*/
void ViewTopMenu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14722b0ULL || rel >= 0x1472530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472530 size=80 callers=0 calls=2
   calls: sub_eb6530, sub_eb7830
*/
void sub_1472530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472530ULL || rel >= 0x1472580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472580 size=96 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_1472580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472580ULL || rel >= 0x14725e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014725e0 size=16 callers=0 calls=0
*/
void sub_14725e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14725e0ULL || rel >= 0x14725f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014725f0 size=16 callers=0 calls=0
*/
void sub_14725f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14725f0ULL || rel >= 0x1472600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472600 size=16 callers=0 calls=0
*/
void sub_1472600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472600ULL || rel >= 0x1472610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472610 size=16 callers=0 calls=0
*/
void sub_1472610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472610ULL || rel >= 0x1472620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472620 size=16 callers=0 calls=0
*/
void sub_1472620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472620ULL || rel >= 0x1472630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472630 size=16 callers=0 calls=0
*/
void sub_1472630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472630ULL || rel >= 0x1472640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472640 size=16 callers=0 calls=0
*/
void sub_1472640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472640ULL || rel >= 0x1472650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472650 size=16 callers=0 calls=0
*/
void sub_1472650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472650ULL || rel >= 0x1472660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472660 size=304 callers=0 calls=0
*/
void sub_1472660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472660ULL || rel >= 0x1472790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472790 size=336 callers=7 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1472790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472790ULL || rel >= 0x14728e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014728e0 size=368 callers=0 calls=0
*/
void sub_14728e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14728e0ULL || rel >= 0x1472a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472a50 size=752 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_42(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472a50ULL || rel >= 0x1472d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472d40 size=528 callers=0 calls=7
   calls: sub_1341270, sub_1458310, sub_1467080, sub_14705a0, sub_1472790, sub_c39c40, sub_d0c0
   ref: StateAlbumTop
   ref: ViewTopMenu
*/
void ViewTopMenu_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472d40ULL || rel >= 0x1472f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01472f50 size=240 callers=0 calls=3
   calls: sub_1467080, sub_1470600, sub_14cc6e0
*/
void sub_1472f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1472f50ULL || rel >= 0x1473040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473040 size=112 callers=0 calls=1
   calls: sub_1467080
*/
void sub_1473040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473040ULL || rel >= 0x14730b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014730b0 size=16 callers=0 calls=0
*/
void sub_14730b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14730b0ULL || rel >= 0x14730c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014730c0 size=16 callers=0 calls=0
*/
void sub_14730c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14730c0ULL || rel >= 0x14730d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014730d0 size=16 callers=0 calls=0
*/
void sub_14730d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14730d0ULL || rel >= 0x14730e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014730e0 size=16 callers=0 calls=0
*/
void sub_14730e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14730e0ULL || rel >= 0x14730f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014730f0 size=16 callers=0 calls=0
*/
void sub_14730f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14730f0ULL || rel >= 0x1473100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473100 size=16 callers=0 calls=0
*/
void sub_1473100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473100ULL || rel >= 0x1473110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473110 size=16 callers=0 calls=0
*/
void sub_1473110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473110ULL || rel >= 0x1473120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473120 size=16 callers=0 calls=0
*/
void sub_1473120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473120ULL || rel >= 0x1473130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473130 size=304 callers=0 calls=0
*/
void sub_1473130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473130ULL || rel >= 0x1473260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473260 size=960 callers=0 calls=9
   calls: sub_146a770, sub_5cfaf0, sub_67b990, sub_67d450, sub_79b990, sub_c39c40, sub_d0c0, sub_e7eb10, sub_eb8930
   ref: ViewCardCode
   ref: StateDownload
*/
void StateDownload(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473260ULL || rel >= 0x1473620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473620 size=768 callers=0 calls=10
   calls: RequestDownloadTrainerLicense, sub_105b2c0, sub_158a7e0, sub_15bc1e0, sub_15bc310, sub_16305c0, sub_67bdb0, sub_67bdd0, sub_67c7e0, sub_eb8e80
*/
void sub_1473620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473620ULL || rel >= 0x1473920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473920 size=16 callers=0 calls=0
*/
void sub_1473920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473920ULL || rel >= 0x1473930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473930 size=96 callers=0 calls=0
*/
void sub_1473930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473930ULL || rel >= 0x1473990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473990 size=96 callers=0 calls=0
*/
void sub_1473990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473990ULL || rel >= 0x14739f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014739f0 size=16 callers=0 calls=0
*/
void sub_14739f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14739f0ULL || rel >= 0x1473a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473a00 size=96 callers=0 calls=0
*/
void sub_1473a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473a00ULL || rel >= 0x1473a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473a60 size=96 callers=0 calls=0
*/
void sub_1473a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473a60ULL || rel >= 0x1473ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473ac0 size=16 callers=0 calls=0
*/
void sub_1473ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473ac0ULL || rel >= 0x1473ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473ad0 size=16 callers=0 calls=0
*/
void sub_1473ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473ad0ULL || rel >= 0x1473ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473ae0 size=96 callers=0 calls=0
*/
void sub_1473ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473ae0ULL || rel >= 0x1473b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473b40 size=96 callers=0 calls=0
*/
void sub_1473b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473b40ULL || rel >= 0x1473ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473ba0 size=304 callers=0 calls=0
*/
void sub_1473ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473ba0ULL || rel >= 0x1473cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01473cd0 size=864 callers=0 calls=12
   calls: sub_1345d20, sub_1345e70, sub_1345eb0, sub_1467080, sub_1502120, sub_5cfad0, sub_67d450, sub_c39c40, sub_e7eb10, sub_e80580, sub_e807f0, sub_eb8930
*/
void sub_1473cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473cd0ULL || rel >= 0x1474030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474030 size=64 callers=0 calls=0
*/
void sub_1474030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474030ULL || rel >= 0x1474070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474070 size=48 callers=0 calls=0
*/
void sub_1474070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474070ULL || rel >= 0x14740a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014740a0 size=48 callers=0 calls=0
*/
void sub_14740a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14740a0ULL || rel >= 0x14740d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014740d0 size=480 callers=0 calls=8
   calls: sub_1047680, sub_146ea70, sub_67d450, sub_c39c40, sub_e7eb10, sub_e80580, sub_e807f0, sub_eb8930
*/
void sub_14740d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14740d0ULL || rel >= 0x14742b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014742b0 size=64 callers=0 calls=0
*/
void sub_14742b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14742b0ULL || rel >= 0x14742f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014742f0 size=48 callers=0 calls=0
*/
void sub_14742f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14742f0ULL || rel >= 0x1474320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474320 size=48 callers=0 calls=0
*/
void sub_1474320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474320ULL || rel >= 0x1474350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474350 size=128 callers=0 calls=0
*/
void sub_1474350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474350ULL || rel >= 0x14743d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014743d0 size=560 callers=0 calls=7
   calls: sub_1457720, sub_1458310, sub_1467080, sub_1474b60, sub_14758f0, sub_c39c40, sub_d0c0
   ref: StateAlbumList
   ref: ViewList
   ref: ViewCard
*/
void StateAlbumList(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14743d0ULL || rel >= 0x1474600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474600 size=368 callers=0 calls=6
   calls: sub_1458310, sub_1459e00, sub_1467080, sub_1474770, sub_14759c0, sub_e806b0
*/
void sub_1474600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474600ULL || rel >= 0x1474770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474770 size=256 callers=1 calls=2
   calls: sub_1467080, sub_1474880
*/
void sub_1474770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474770ULL || rel >= 0x1474870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474870 size=16 callers=0 calls=0
*/
void sub_1474870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474870ULL || rel >= 0x1474880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474880 size=304 callers=2 calls=7
   calls: sub_1459ac0, sub_1459e00, sub_1459e50, sub_14bf750, sub_14bfbb0, sub_14cc490, sub_14cc8d0
*/
void sub_1474880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474880ULL || rel >= 0x14749b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014749b0 size=16 callers=0 calls=0
*/
void sub_14749b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14749b0ULL || rel >= 0x14749c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014749c0 size=16 callers=0 calls=0
*/
void sub_14749c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14749c0ULL || rel >= 0x14749d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014749d0 size=16 callers=0 calls=0
*/
void sub_14749d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14749d0ULL || rel >= 0x14749e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014749e0 size=16 callers=0 calls=0
*/
void sub_14749e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14749e0ULL || rel >= 0x14749f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014749f0 size=16 callers=0 calls=0
*/
void sub_14749f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14749f0ULL || rel >= 0x1474a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474a00 size=16 callers=0 calls=0
*/
void sub_1474a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474a00ULL || rel >= 0x1474a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474a10 size=16 callers=0 calls=0
*/
void sub_1474a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474a10ULL || rel >= 0x1474a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474a20 size=16 callers=0 calls=0
*/
void sub_1474a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474a20ULL || rel >= 0x1474a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474a30 size=304 callers=0 calls=0
*/
void sub_1474a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474a30ULL || rel >= 0x1474b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474b60 size=336 callers=11 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1474b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474b60ULL || rel >= 0x1474cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474cb0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/trlicense_album/bin/uikit_trlicense_list_00.bin
   ref: bin/appli/trlicense_album/bin/trlicense_list_00_lyt.bin
*/
void uikit_trlicense_list_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474cb0ULL || rel >= 0x1474e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01474e90 size=1936 callers=0 calls=12
   calls: sub_1475620, sub_1475840, sub_14aad40, sub_14e1a00, sub_14e1a30, sub_5cfad0, sub_7a3c20, sub_8f19b0, sub_e7eb10, sub_e83e60, sub_e84250, sub_e84310
   ref: button_%02d
*/
void button__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474e90ULL || rel >= 0x1475620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01475620 size=544 callers=1 calls=0
*/
void sub_1475620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1475620ULL || rel >= 0x1475840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01475840 size=176 callers=3 calls=5
   calls: sub_1459e20, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870
*/
void sub_1475840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1475840ULL || rel >= 0x14758f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014758f0 size=208 callers=1 calls=4
   calls: sub_1459e00, sub_14e1a00, sub_14e1a30, sub_e80580
*/
void sub_14758f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14758f0ULL || rel >= 0x14759c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014759c0 size=112 callers=1 calls=3
   calls: sub_14e1a00, sub_14e1a30, sub_14e1b40
*/
void sub_14759c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14759c0ULL || rel >= 0x1475a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01475a30 size=208 callers=1 calls=8
   calls: sub_14e1a00, sub_14e1a30, sub_14edac0, sub_14eebd0, sub_14eebe0, sub_14f1840, sub_14f1850, sub_e80580
*/
void sub_1475a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1475a30ULL || rel >= 0x1475b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01475b00 size=112 callers=7 calls=4
   calls: sub_14eebd0, sub_14eebe0, sub_14f1840, sub_14f1850
*/
void sub_1475b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1475b00ULL || rel >= 0x1475b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01475b70 size=112 callers=1 calls=3
   calls: sub_14e1a00, sub_14e1a30, sub_14e1b40
*/
void sub_1475b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1475b70ULL || rel >= 0x1475be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01475be0 size=16 callers=1 calls=0
*/
void sub_1475be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1475be0ULL || rel >= 0x1475bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01475bf0 size=400 callers=0 calls=3
   calls: sub_1459e50, sub_145a220, sub_14ab040
   ref: pane_%s
   ref: P_check_00
   ref: pane_%s_%s
   ref: L_cardlist_%02d
*/
void P_check_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1475bf0ULL || rel >= 0x1475d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01475d80 size=2800 callers=0 calls=15
   calls: sub_1314a80, sub_1315b90, sub_1459ac0, sub_1459d20, sub_1459e50, sub_145a220, sub_146cb80, sub_14ab040, sub_14ac370, sub_14bdcd0, sub_14e1a00, sub_67be60
   ... +3 more
   ref: P_item_favo_00
   ref: pane_%s
   ref: P_check_00
   ref: pane_%s_%s
   ref: T_player_00
   ref: L_cardlist_%02d
   ref: P_box_00
   ref: T_date_00
*/
void P_box_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1475d80ULL || rel >= 0x1476870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476870 size=16 callers=0 calls=0
*/
void sub_1476870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476870ULL || rel >= 0x1476880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476880 size=16 callers=2 calls=0
*/
void sub_1476880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476880ULL || rel >= 0x1476890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476890 size=576 callers=0 calls=0
*/
void sub_1476890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476890ULL || rel >= 0x1476ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476ad0 size=16 callers=0 calls=0
*/
void sub_1476ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476ad0ULL || rel >= 0x1476ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476ae0 size=16 callers=0 calls=0
*/
void sub_1476ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476ae0ULL || rel >= 0x1476af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476af0 size=16 callers=0 calls=0
*/
void sub_1476af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476af0ULL || rel >= 0x1476b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476b00 size=16 callers=0 calls=0
*/
void sub_1476b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476b00ULL || rel >= 0x1476b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476b10 size=16 callers=0 calls=0
*/
void sub_1476b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476b10ULL || rel >= 0x1476b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476b20 size=16 callers=0 calls=0
*/
void sub_1476b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476b20ULL || rel >= 0x1476b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476b30 size=16 callers=0 calls=0
*/
void sub_1476b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476b30ULL || rel >= 0x1476b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476b40 size=16 callers=0 calls=0
*/
void sub_1476b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476b40ULL || rel >= 0x1476b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476b50 size=304 callers=0 calls=0
*/
void sub_1476b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476b50ULL || rel >= 0x1476c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476c80 size=16 callers=0 calls=0
*/
void sub_1476c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476c80ULL || rel >= 0x1476c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476c90 size=16 callers=0 calls=0
*/
void sub_1476c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476c90ULL || rel >= 0x1476ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476ca0 size=16 callers=0 calls=0
*/
void sub_1476ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476ca0ULL || rel >= 0x1476cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476cb0 size=16 callers=0 calls=0
*/
void sub_1476cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476cb0ULL || rel >= 0x1476cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476cc0 size=16 callers=0 calls=0
*/
void sub_1476cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476cc0ULL || rel >= 0x1476cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476cd0 size=16 callers=0 calls=0
*/
void sub_1476cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476cd0ULL || rel >= 0x1476ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476ce0 size=16 callers=0 calls=0
*/
void sub_1476ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476ce0ULL || rel >= 0x1476cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476cf0 size=16 callers=0 calls=0
*/
void sub_1476cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476cf0ULL || rel >= 0x1476d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476d00 size=16 callers=0 calls=0
*/
void sub_1476d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476d00ULL || rel >= 0x1476d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476d10 size=16 callers=0 calls=0
*/
void sub_1476d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476d10ULL || rel >= 0x1476d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476d20 size=16 callers=0 calls=0
*/
void sub_1476d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476d20ULL || rel >= 0x1476d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476d30 size=16 callers=0 calls=0
*/
void sub_1476d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476d30ULL || rel >= 0x1476d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476d40 size=48 callers=0 calls=0
*/
void sub_1476d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476d40ULL || rel >= 0x1476d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476d70 size=16 callers=0 calls=0
*/
void sub_1476d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476d70ULL || rel >= 0x1476d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476d80 size=32 callers=0 calls=0
*/
void sub_1476d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476d80ULL || rel >= 0x1476da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476da0 size=32 callers=0 calls=0
*/
void sub_1476da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476da0ULL || rel >= 0x1476dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476dc0 size=528 callers=0 calls=8
   calls: sub_1458310, sub_1467080, sub_146a770, sub_146c040, sub_c39c40, sub_d0c0, sub_e80580, sub_e807f0
   ref: StateInputCode
   ref: ViewCardCode
*/
void StateInputCode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476dc0ULL || rel >= 0x1476fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01476fd0 size=128 callers=0 calls=3
   calls: sub_146c0a0, sub_14e1a30, sub_e80580
*/
void sub_1476fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1476fd0ULL || rel >= 0x1477050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477050 size=16 callers=0 calls=0
*/
void sub_1477050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477050ULL || rel >= 0x1477060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477060 size=16 callers=0 calls=0
*/
void sub_1477060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477060ULL || rel >= 0x1477070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477070 size=16 callers=0 calls=0
*/
void sub_1477070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477070ULL || rel >= 0x1477080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477080 size=16 callers=0 calls=0
*/
void sub_1477080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477080ULL || rel >= 0x1477090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477090 size=16 callers=0 calls=0
*/
void sub_1477090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477090ULL || rel >= 0x14770a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

