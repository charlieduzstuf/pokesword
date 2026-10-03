/* main functions 01514680..015322b0 (180 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01514680 size=16 callers=0 calls=0
*/
void sub_1514680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514680ULL || rel >= 0x1514690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514690 size=16 callers=0 calls=0
*/
void sub_1514690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514690ULL || rel >= 0x15146a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015146a0 size=16 callers=0 calls=0
*/
void sub_15146a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15146a0ULL || rel >= 0x15146b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015146b0 size=16 callers=0 calls=0
*/
void sub_15146b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15146b0ULL || rel >= 0x15146c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015146c0 size=16 callers=0 calls=0
*/
void sub_15146c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15146c0ULL || rel >= 0x15146d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015146d0 size=304 callers=0 calls=0
*/
void sub_15146d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15146d0ULL || rel >= 0x1514800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514800 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/xmenu_net/bin/uikit_xmenu_net_top_00.bin
   ref: bin/appli/xmenu_net/bin/xmenu_net_top_00_lyt.bin
*/
void xmenu_net_top_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514800ULL || rel >= 0x15149e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015149e0 size=400 callers=0 calls=6
   calls: sub_14ab040, sub_14e1a30, sub_1514b70, sub_1515020, sub_e83930, sub_e84310
*/
void sub_15149e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15149e0ULL || rel >= 0x1514b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514b70 size=432 callers=1 calls=1
   calls: sub_67b990
*/
void sub_1514b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514b70ULL || rel >= 0x1514d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514d20 size=80 callers=0 calls=0
*/
void sub_1514d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514d20ULL || rel >= 0x1514d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514d70 size=224 callers=0 calls=5
   calls: sub_1502120, sub_1516330, sub_5cfad0, sub_e807d0, sub_ea4760
*/
void sub_1514d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514d70ULL || rel >= 0x1514e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514e50 size=208 callers=1 calls=7
   calls: sub_14e1a30, sub_14e6550, sub_e80580, sub_e807f0, sub_e83430, sub_e840a0, sub_e84310
   ref: top_panel
*/
void top_panel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514e50ULL || rel >= 0x1514f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514f20 size=96 callers=3 calls=3
   calls: sub_14e1a30, sub_e80580, sub_e84310
*/
void sub_1514f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514f20ULL || rel >= 0x1514f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514f80 size=48 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_1514f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514f80ULL || rel >= 0x1514fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514fb0 size=48 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_1514fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514fb0ULL || rel >= 0x1514fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514fe0 size=32 callers=2 calls=1
   calls: sub_eb6530
*/
void sub_1514fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514fe0ULL || rel >= 0x1515000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01515000 size=16 callers=3 calls=0
*/
void sub_1515000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1515000ULL || rel >= 0x1515010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01515010 size=16 callers=3 calls=0
*/
void sub_1515010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1515010ULL || rel >= 0x1515020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01515020 size=288 callers=8 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_1515020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1515020ULL || rel >= 0x1515140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01515140 size=608 callers=1 calls=5
   calls: sub_14e1a00, sub_14ea4f0, sub_67d450, sub_e7eb10, sub_eb7b00
*/
void sub_1515140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1515140ULL || rel >= 0x15153a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015153a0 size=256 callers=2 calls=2
   calls: sub_14ea9a0, sub_eb7b00
*/
void sub_15153a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15153a0ULL || rel >= 0x15154a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015154a0 size=128 callers=1 calls=2
   calls: sub_1515020, sub_e83430
*/
void sub_15154a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15154a0ULL || rel >= 0x1515520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01515520 size=64 callers=1 calls=1
   calls: sub_e83430
*/
void sub_1515520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1515520ULL || rel >= 0x1515560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01515560 size=160 callers=3 calls=1
   calls: sub_14ab2b0
*/
void sub_1515560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1515560ULL || rel >= 0x1515600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01515600 size=304 callers=1 calls=2
   calls: sub_1315b90, sub_1515020
*/
void sub_1515600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1515600ULL || rel >= 0x1515730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01515730 size=432 callers=1 calls=2
   calls: sub_1515020, sub_e83930
   ref: xmenu_net_cap_02_%02d
*/
void xmenu_net_cap_02__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1515730ULL || rel >= 0x15158e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015158e0 size=992 callers=2 calls=7
   calls: sub_14ab2b0, sub_1502120, sub_1515cc0, sub_5cfad0, sub_e83430, sub_e83850, sub_e83930
*/
void sub_15158e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15158e0ULL || rel >= 0x1515cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01515cc0 size=272 callers=2 calls=2
   calls: sub_1315b90, sub_1515020
*/
void sub_1515cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1515cc0ULL || rel >= 0x1515dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01515dd0 size=352 callers=2 calls=5
   calls: sub_14ab040, sub_e83430, sub_e83850, sub_e83930, sub_e83a20
*/
void sub_1515dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1515dd0ULL || rel >= 0x1515f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01515f30 size=112 callers=0 calls=0
*/
void sub_1515f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1515f30ULL || rel >= 0x1515fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01515fa0 size=112 callers=0 calls=0
*/
void sub_1515fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1515fa0ULL || rel >= 0x1516010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516010 size=16 callers=0 calls=0
*/
void sub_1516010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516010ULL || rel >= 0x1516020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516020 size=112 callers=0 calls=0
*/
void sub_1516020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516020ULL || rel >= 0x1516090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516090 size=112 callers=0 calls=0
*/
void sub_1516090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516090ULL || rel >= 0x1516100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516100 size=16 callers=0 calls=0
*/
void sub_1516100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516100ULL || rel >= 0x1516110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516110 size=16 callers=0 calls=0
*/
void sub_1516110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516110ULL || rel >= 0x1516120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516120 size=112 callers=0 calls=0
*/
void sub_1516120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516120ULL || rel >= 0x1516190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516190 size=112 callers=0 calls=0
*/
void sub_1516190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516190ULL || rel >= 0x1516200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516200 size=304 callers=0 calls=0
*/
void sub_1516200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516200ULL || rel >= 0x1516330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516330 size=400 callers=4 calls=2
   calls: sub_1516330, sub_e86260
*/
void sub_1516330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516330ULL || rel >= 0x15164c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015164c0 size=928 callers=0 calls=8
   calls: sub_1513b00, sub_15153a0, sub_1516da0, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e7eb10
   ref: ViewTop
   ref: cut_net
*/
void cut_net(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15164c0ULL || rel >= 0x1516860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516860 size=400 callers=0 calls=5
   calls: Play_UI_common_report_3, sub_15106d0, sub_15106e0, sub_1513650, sub_ff7520
*/
void sub_1516860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516860ULL || rel >= 0x15169f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015169f0 size=16 callers=0 calls=0
*/
void sub_15169f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15169f0ULL || rel >= 0x1516a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516a00 size=96 callers=0 calls=0
*/
void sub_1516a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516a00ULL || rel >= 0x1516a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516a60 size=96 callers=0 calls=0
*/
void sub_1516a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516a60ULL || rel >= 0x1516ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516ac0 size=16 callers=0 calls=0
*/
void sub_1516ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516ac0ULL || rel >= 0x1516ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516ad0 size=96 callers=0 calls=0
*/
void sub_1516ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516ad0ULL || rel >= 0x1516b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516b30 size=96 callers=0 calls=0
*/
void sub_1516b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516b30ULL || rel >= 0x1516b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516b90 size=16 callers=0 calls=0
*/
void sub_1516b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516b90ULL || rel >= 0x1516ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516ba0 size=16 callers=0 calls=0
*/
void sub_1516ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516ba0ULL || rel >= 0x1516bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516bb0 size=96 callers=0 calls=0
*/
void sub_1516bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516bb0ULL || rel >= 0x1516c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516c10 size=96 callers=0 calls=0
*/
void sub_1516c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516c10ULL || rel >= 0x1516c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516c70 size=304 callers=0 calls=0
*/
void sub_1516c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516c70ULL || rel >= 0x1516da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516da0 size=272 callers=1 calls=1
   calls: sub_ff73e0
*/
void sub_1516da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516da0ULL || rel >= 0x1516eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516eb0 size=48 callers=0 calls=0
*/
void sub_1516eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516eb0ULL || rel >= 0x1516ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516ee0 size=16 callers=0 calls=0
*/
void sub_1516ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516ee0ULL || rel >= 0x1516ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516ef0 size=16 callers=0 calls=0
*/
void sub_1516ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516ef0ULL || rel >= 0x1516f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516f00 size=16 callers=0 calls=0
*/
void sub_1516f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516f00ULL || rel >= 0x1516f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01516f10 size=368 callers=0 calls=5
   calls: sub_1513b00, sub_1515140, sub_c39c40, sub_d0c0, top_panel
   ref: ViewTop
   ref: execute
*/
void execute_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1516f10ULL || rel >= 0x1517080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517080 size=640 callers=0 calls=9
   calls: sub_15106d0, sub_15106e0, sub_15106f0, sub_1513650, sub_1514f20, sub_1515000, sub_1515010, sub_1515dd0, sub_1517300
*/
void sub_1517080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517080ULL || rel >= 0x1517300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517300 size=512 callers=1 calls=13
   calls: sub_15106f0, sub_1510720, sub_1510820, sub_1510de0, sub_1510e20, sub_1510e70, sub_1513650, sub_15154a0, sub_1515520, sub_1515560, sub_1515600, sub_15158e0
   ... +1 more
*/
void sub_1517300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517300ULL || rel >= 0x1517500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517500 size=16 callers=0 calls=0
*/
void sub_1517500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517500ULL || rel >= 0x1517510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517510 size=16 callers=0 calls=0
*/
void sub_1517510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517510ULL || rel >= 0x1517520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517520 size=16 callers=0 calls=0
*/
void sub_1517520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517520ULL || rel >= 0x1517530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517530 size=16 callers=0 calls=0
*/
void sub_1517530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517530ULL || rel >= 0x1517540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517540 size=16 callers=0 calls=0
*/
void sub_1517540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517540ULL || rel >= 0x1517550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517550 size=16 callers=0 calls=0
*/
void sub_1517550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517550ULL || rel >= 0x1517560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517560 size=16 callers=0 calls=0
*/
void sub_1517560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517560ULL || rel >= 0x1517570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517570 size=16 callers=0 calls=0
*/
void sub_1517570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517570ULL || rel >= 0x1517580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517580 size=16 callers=0 calls=0
*/
void sub_1517580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517580ULL || rel >= 0x1517590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517590 size=304 callers=0 calls=0
*/
void sub_1517590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517590ULL || rel >= 0x15176c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015176c0 size=928 callers=0 calls=8
   calls: sub_1513b00, sub_15153a0, sub_1517f90, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e7eb10
   ref: ViewTop
   ref: connect_net
*/
void connect_net(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15176c0ULL || rel >= 0x1517a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517a60 size=384 callers=0 calls=5
   calls: Play_UI_common_report_2, sub_15106d0, sub_15106e0, sub_1513650, sub_ff45c0
*/
void sub_1517a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517a60ULL || rel >= 0x1517be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517be0 size=16 callers=0 calls=0
*/
void sub_1517be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517be0ULL || rel >= 0x1517bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517bf0 size=96 callers=0 calls=0
*/
void sub_1517bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517bf0ULL || rel >= 0x1517c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517c50 size=96 callers=0 calls=0
*/
void sub_1517c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517c50ULL || rel >= 0x1517cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517cb0 size=16 callers=0 calls=0
*/
void sub_1517cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517cb0ULL || rel >= 0x1517cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517cc0 size=96 callers=0 calls=0
*/
void sub_1517cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517cc0ULL || rel >= 0x1517d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517d20 size=96 callers=0 calls=0
*/
void sub_1517d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517d20ULL || rel >= 0x1517d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517d80 size=16 callers=0 calls=0
*/
void sub_1517d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517d80ULL || rel >= 0x1517d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517d90 size=16 callers=0 calls=0
*/
void sub_1517d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517d90ULL || rel >= 0x1517da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517da0 size=96 callers=0 calls=0
*/
void sub_1517da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517da0ULL || rel >= 0x1517e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517e00 size=96 callers=0 calls=0
*/
void sub_1517e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517e00ULL || rel >= 0x1517e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517e60 size=304 callers=0 calls=0
*/
void sub_1517e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517e60ULL || rel >= 0x1517f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01517f90 size=288 callers=1 calls=1
   calls: sub_ff42a0
*/
void sub_1517f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1517f90ULL || rel >= 0x15180b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015180b0 size=48 callers=0 calls=0
*/
void sub_15180b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15180b0ULL || rel >= 0x15180e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015180e0 size=16 callers=0 calls=0
*/
void sub_15180e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15180e0ULL || rel >= 0x15180f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015180f0 size=16 callers=0 calls=0
*/
void sub_15180f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15180f0ULL || rel >= 0x1518100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01518100 size=16 callers=0 calls=0
*/
void sub_1518100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1518100ULL || rel >= 0x1518110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01518110 size=624 callers=0 calls=8
   calls: sub_1502120, sub_1513b00, sub_1514fb0, sub_5cfad0, sub_795bc0, sub_c39c40, sub_d0c0, sub_eb77f0
   ref: OptionBar
   ref: ViewTop
*/
void OptionBar_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1518110ULL || rel >= 0x1518380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01518380 size=176 callers=0 calls=4
   calls: sub_15106e0, sub_1513650, sub_1514fe0, sub_eb7830
*/
void sub_1518380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1518380ULL || rel >= 0x1518430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01518430 size=320 callers=0 calls=4
   calls: sub_1513b00, sub_c39c40, sub_e80580, sub_e806b0
   ref: ViewTop
*/
void ViewTop_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1518430ULL || rel >= 0x1518570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01518570 size=16 callers=0 calls=0
*/
void sub_1518570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1518570ULL || rel >= 0x1518580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01518580 size=16 callers=0 calls=0
*/
void sub_1518580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1518580ULL || rel >= 0x1518590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01518590 size=16 callers=0 calls=0
*/
void sub_1518590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1518590ULL || rel >= 0x15185a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015185a0 size=16 callers=0 calls=0
*/
void sub_15185a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15185a0ULL || rel >= 0x15185b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015185b0 size=16 callers=0 calls=0
*/
void sub_15185b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15185b0ULL || rel >= 0x15185c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015185c0 size=16 callers=0 calls=0
*/
void sub_15185c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15185c0ULL || rel >= 0x15185d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015185d0 size=16 callers=0 calls=0
*/
void sub_15185d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15185d0ULL || rel >= 0x15185e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015185e0 size=16 callers=0 calls=0
*/
void sub_15185e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15185e0ULL || rel >= 0x15185f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015185f0 size=304 callers=0 calls=0
*/
void sub_15185f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15185f0ULL || rel >= 0x1518720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01518720 size=1040 callers=2 calls=0
*/
void sub_1518720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1518720ULL || rel >= 0x1518b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01518b30 size=336 callers=2 calls=3
   calls: sub_1306f20, sub_5dd790, sub_5e2930
   ref: bin/appli/pokedex/bin/encount_priority.prmb
*/
void encount_priority(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1518b30ULL || rel >= 0x1518c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01518c80 size=384 callers=2 calls=5
   calls: sub_1106320, sub_11063e0, sub_11065b0, sub_1106cd0, sub_1106f30
   ref: ZoneData
   ref: ZoneMax
*/
void ZoneData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1518c80ULL || rel >= 0x1518e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01518e00 size=3104 callers=1 calls=16
   calls: sub_1106320, sub_11063e0, sub_11065b0, sub_1106cd0, sub_1106f30, sub_1362080, sub_1378bd0, sub_1379d60, sub_137a050, sub_137a170, sub_137a1a0, sub_137a280
   ... +4 more
   ref: ZoneData
   ref: ZoneMax
   ref: around%02d
   ref: AroundMax
*/
void AroundMax(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1518e00ULL || rel >= 0x1519a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01519a20 size=960 callers=4 calls=5
   calls: sub_12fa520, sub_137a290, sub_cb3fe0, sub_cb4bc0, sub_d62e30
*/
void sub_1519a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1519a20ULL || rel >= 0x1519de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01519de0 size=1584 callers=3 calls=3
   calls: sub_12f9ef0, sub_137a0b0, sub_7624c0
*/
void sub_1519de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1519de0ULL || rel >= 0x151a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151a410 size=16 callers=0 calls=0
*/
void sub_151a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151a410ULL || rel >= 0x151a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151a420 size=16 callers=0 calls=0
*/
void sub_151a420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151a420ULL || rel >= 0x151a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151a430 size=96 callers=1 calls=0
*/
void sub_151a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151a430ULL || rel >= 0x151a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151a490 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_151a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151a490ULL || rel >= 0x151a560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151a560 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_151a560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151a560ULL || rel >= 0x151a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151a630 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_151a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151a630ULL || rel >= 0x151a700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151a700 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_151a700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151a700ULL || rel >= 0x151a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151a7d0 size=368 callers=1 calls=3
   calls: sub_137a330, sub_151a940, sub_151b530
*/
void sub_151a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151a7d0ULL || rel >= 0x151a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151a940 size=448 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_151a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151a940ULL || rel >= 0x151ab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151ab00 size=96 callers=0 calls=0
*/
void sub_151ab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ab00ULL || rel >= 0x151ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151ab60 size=96 callers=0 calls=0
*/
void sub_151ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ab60ULL || rel >= 0x151abc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151abc0 size=96 callers=0 calls=0
*/
void sub_151abc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151abc0ULL || rel >= 0x151ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151ac20 size=96 callers=0 calls=0
*/
void sub_151ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ac20ULL || rel >= 0x151ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151ac80 size=96 callers=0 calls=0
*/
void sub_151ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ac80ULL || rel >= 0x151ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151ace0 size=96 callers=0 calls=0
*/
void sub_151ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ace0ULL || rel >= 0x151ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151ad40 size=16 callers=0 calls=0
*/
void sub_151ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ad40ULL || rel >= 0x151ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151ad50 size=16 callers=0 calls=0
*/
void sub_151ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ad50ULL || rel >= 0x151ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151ad60 size=144 callers=0 calls=0
*/
void sub_151ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ad60ULL || rel >= 0x151adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151adf0 size=1152 callers=0 calls=11
   calls: sub_14e0350, sub_14e0550, sub_1502120, sub_151b270, sub_151b380, sub_151e0d0, sub_5cfad0, sub_c39c40, sub_c44410, sub_c60e50, sub_d7eea0
   ref: Play_UI_picturebook_open
*/
void Play_UI_picturebook_open(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151adf0ULL || rel >= 0x151b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151b270 size=272 callers=1 calls=3
   calls: sub_151b660, sub_672c10, sub_c386f0
*/
void sub_151b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151b270ULL || rel >= 0x151b380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151b380 size=384 callers=2 calls=1
   calls: sub_c443f0
*/
void sub_151b380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151b380ULL || rel >= 0x151b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151b500 size=16 callers=0 calls=0
*/
void sub_151b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151b500ULL || rel >= 0x151b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151b510 size=16 callers=0 calls=0
*/
void sub_151b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151b510ULL || rel >= 0x151b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151b520 size=16 callers=0 calls=0
*/
void sub_151b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151b520ULL || rel >= 0x151b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151b530 size=304 callers=2 calls=0
*/
void sub_151b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151b530ULL || rel >= 0x151b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151b660 size=240 callers=1 calls=2
   calls: sub_151b750, sub_e7b660
*/
void sub_151b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151b660ULL || rel >= 0x151b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151b750 size=224 callers=1 calls=3
   calls: sub_151b830, sub_7c2da0, sub_e7b5e0
*/
void sub_151b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151b750ULL || rel >= 0x151b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151b830 size=272 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_151b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151b830ULL || rel >= 0x151b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151b940 size=224 callers=6 calls=1
   calls: sub_3340
*/
void sub_151b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151b940ULL || rel >= 0x151ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151ba20 size=464 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_151ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ba20ULL || rel >= 0x151bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151bbf0 size=96 callers=0 calls=1
   calls: sub_151be30
*/
void sub_151bbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151bbf0ULL || rel >= 0x151bc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151bc50 size=16 callers=0 calls=0
*/
void sub_151bc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151bc50ULL || rel >= 0x151bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151bc60 size=176 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_151bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151bc60ULL || rel >= 0x151bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151bd10 size=208 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_151bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151bd10ULL || rel >= 0x151bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151bde0 size=16 callers=0 calls=0
*/
void sub_151bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151bde0ULL || rel >= 0x151bdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151bdf0 size=16 callers=0 calls=0
*/
void sub_151bdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151bdf0ULL || rel >= 0x151be00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151be00 size=16 callers=0 calls=0
*/
void sub_151be00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151be00ULL || rel >= 0x151be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151be10 size=32 callers=0 calls=0
*/
void sub_151be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151be10ULL || rel >= 0x151be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151be30 size=256 callers=5 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_151be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151be30ULL || rel >= 0x151bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151bf30 size=128 callers=0 calls=0
*/
void sub_151bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151bf30ULL || rel >= 0x151bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151bfb0 size=800 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_151bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151bfb0ULL || rel >= 0x151c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151c2d0 size=16 callers=6 calls=0
*/
void sub_151c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151c2d0ULL || rel >= 0x151c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151c2e0 size=16 callers=1 calls=0
*/
void sub_151c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151c2e0ULL || rel >= 0x151c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151c2f0 size=16 callers=24 calls=0
*/
void sub_151c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151c2f0ULL || rel >= 0x151c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151c300 size=16 callers=1 calls=0
*/
void sub_151c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151c300ULL || rel >= 0x151c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151c310 size=16 callers=13 calls=0
*/
void sub_151c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151c310ULL || rel >= 0x151c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151c320 size=16 callers=2 calls=0
*/
void sub_151c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151c320ULL || rel >= 0x151c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151c330 size=16 callers=12 calls=0
*/
void sub_151c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151c330ULL || rel >= 0x151c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151c340 size=16 callers=8 calls=0
*/
void sub_151c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151c340ULL || rel >= 0x151c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151c350 size=16 callers=4 calls=0
*/
void sub_151c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151c350ULL || rel >= 0x151c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151c360 size=448 callers=1 calls=4
   calls: monsname_sort_table, sub_12a0ed0, sub_14db790, sub_a7a830
*/
void sub_151c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151c360ULL || rel >= 0x151c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151c520 size=336 callers=1 calls=2
   calls: sub_14b95d0, sub_14dbb00
*/
void sub_151c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151c520ULL || rel >= 0x151c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151c670 size=368 callers=3 calls=4
   calls: sub_12fa520, sub_12fa530, sub_1379eb0, sub_151c900
*/
void sub_151c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151c670ULL || rel >= 0x151c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151c7e0 size=288 callers=0 calls=4
   calls: sub_12fa530, sub_1379b90, sub_14b9600, sub_14b9630
*/
void sub_151c7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151c7e0ULL || rel >= 0x151c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151c900 size=320 callers=2 calls=6
   calls: sub_12fa520, sub_13794f0, sub_1379a10, sub_1379f90, sub_14dbb10, sub_14dbb60
*/
void sub_151c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151c900ULL || rel >= 0x151ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151ca40 size=16 callers=4 calls=0
*/
void sub_151ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ca40ULL || rel >= 0x151ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151ca50 size=272 callers=1 calls=2
   calls: fel_999_2, sub_15030e0
*/
void sub_151ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ca50ULL || rel >= 0x151cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151cb60 size=352 callers=1 calls=7
   calls: sub_1503280, sub_15032c0, sub_1505a20, sub_1505fc0, sub_1505fd0, sub_1506100, sub_151cf80
*/
void sub_151cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151cb60ULL || rel >= 0x151ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151ccc0 size=80 callers=1 calls=4
   calls: sub_1505a20, sub_1505fc0, sub_1505fd0, sub_1506100
*/
void sub_151ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ccc0ULL || rel >= 0x151cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151cd10 size=16 callers=4 calls=0
*/
void sub_151cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151cd10ULL || rel >= 0x151cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151cd20 size=512 callers=7 calls=6
   calls: sub_13794f0, sub_1379b90, sub_1504d70, sub_1504f90, sub_1505130, sub_1505a20
*/
void sub_151cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151cd20ULL || rel >= 0x151cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151cf20 size=80 callers=1 calls=4
   calls: sub_15030f0, sub_1505a20, sub_1505fc0, sub_1506100
*/
void sub_151cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151cf20ULL || rel >= 0x151cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151cf70 size=16 callers=11 calls=0
*/
void sub_151cf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151cf70ULL || rel >= 0x151cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151cf80 size=192 callers=2 calls=5
   calls: sub_1504d70, sub_1504f90, sub_1505130, sub_1505660, sub_1505a20
*/
void sub_151cf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151cf80ULL || rel >= 0x151d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151d040 size=96 callers=1 calls=2
   calls: sub_1505130, sub_1505a20
*/
void sub_151d040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151d040ULL || rel >= 0x151d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151d0a0 size=640 callers=2 calls=2
   calls: sub_cb3490, sub_cb3be0
*/
void sub_151d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151d0a0ULL || rel >= 0x151d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151d320 size=272 callers=2 calls=1
   calls: sub_e90870
*/
void sub_151d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151d320ULL || rel >= 0x151d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151d430 size=304 callers=3 calls=1
   calls: sub_e90870
*/
void sub_151d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151d430ULL || rel >= 0x151d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151d560 size=16 callers=1 calls=0
*/
void sub_151d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151d560ULL || rel >= 0x151d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151d570 size=16 callers=1 calls=0
*/
void sub_151d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151d570ULL || rel >= 0x151d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151d580 size=16 callers=1 calls=0
*/
void sub_151d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151d580ULL || rel >= 0x151d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151d590 size=16 callers=1 calls=0
*/
void sub_151d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151d590ULL || rel >= 0x151d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151d5a0 size=16 callers=2 calls=0
*/
void sub_151d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151d5a0ULL || rel >= 0x151d5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151d5b0 size=16 callers=4 calls=0
*/
void sub_151d5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151d5b0ULL || rel >= 0x151d5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151d5c0 size=16 callers=3 calls=0
*/
void sub_151d5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151d5c0ULL || rel >= 0x151d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151d5d0 size=1472 callers=3 calls=7
   calls: sub_1307de0, sub_1308340, sub_14d6130, sub_14d6820, sub_14d68a0, sub_c4ac70, type_dummy_2
   ref: common/zkn_height.dat
   ref: common/zkn_form.dat
   ref: common/zkn_weight.dat
   ref: common/zkn_type.dat
   ref: common/pokedex.dat
*/
void zkn_weight(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151d5d0ULL || rel >= 0x151db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151db90 size=1344 callers=1 calls=4
   calls: sub_13083a0, sub_14d6820, sub_14d6840, sub_14d6890
*/
void sub_151db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151db90ULL || rel >= 0x151e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151e0d0 size=16 callers=2 calls=0
*/
void sub_151e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151e0d0ULL || rel >= 0x151e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151e0e0 size=4640 callers=0 calls=28
   calls: encount_priority, sub_130b1d0, sub_1379f10, sub_1379f20, sub_137a050, sub_151be30, sub_151c360, sub_151ca50, sub_151f300, sub_1520be0, sub_1520d10, sub_1521060
   ... +16 more
   ref: ViewDetails
   ref: common/zkn_height.dat
   ref: TownmapView
   ref: OptionBar
   ref: ViewTop
   ref: common/zkn_form.dat
   ref: SystemMessageView
   ref: ViewBg
*/
void SystemMessageView_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151e0e0ULL || rel >= 0x151f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151f300 size=400 callers=1 calls=3
   calls: sub_151bfb0, sub_1520be0, sub_e7c160
*/
void sub_151f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151f300ULL || rel >= 0x151f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151f490 size=448 callers=0 calls=8
   calls: ZoneData, sub_137a050, sub_14b9450, sub_14dba00, sub_15030d0, sub_1520be0, sub_e7ea20, zkn_weight
*/
void sub_151f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151f490ULL || rel >= 0x151f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151f650 size=1120 callers=0 calls=13
   calls: AroundMax, sub_1379ef0, sub_1449270, sub_1500ea0, sub_151a430, sub_151c670, sub_1520be0, sub_1521e30, sub_1521f80, sub_15295a0, sub_1545480, sub_795bc0
   ... +1 more
   ref: TownmapView
   ref: OptionBar
   ref: ViewTop
   ref: ViewList
*/
void TownmapView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151f650ULL || rel >= 0x151fab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151fab0 size=320 callers=0 calls=3
   calls: sub_151cb60, sub_1520be0, zkn_weight
*/
void sub_151fab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151fab0ULL || rel >= 0x151fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0151fbf0 size=2064 callers=0 calls=21
   calls: sub_1520be0, sub_15220d0, sub_1522210, sub_1522360, sub_15224a0, sub_15225e0, sub_1522720, sub_1522860, sub_15229a0, sub_1522ae0, sub_1522c20, sub_1522d60
   ... +9 more
*/
void sub_151fbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151fbf0ULL || rel >= 0x1520400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520400 size=464 callers=0 calls=11
   calls: sub_14b9510, sub_14dbab0, sub_15030d0, sub_15032c0, sub_1505a10, sub_1505a20, sub_1505a30, sub_1505cf0, sub_151c520, sub_151db90, sub_1520be0
*/
void sub_1520400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520400ULL || rel >= 0x15205d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015205d0 size=80 callers=0 calls=1
   calls: sub_151b940
*/
void sub_15205d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15205d0ULL || rel >= 0x1520620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520620 size=80 callers=0 calls=1
   calls: sub_151b940
*/
void sub_1520620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520620ULL || rel >= 0x1520670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520670 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1520670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520670ULL || rel >= 0x1520720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520720 size=80 callers=0 calls=1
   calls: sub_151b940
*/
void sub_1520720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520720ULL || rel >= 0x1520770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520770 size=80 callers=0 calls=1
   calls: sub_151b940
*/
void sub_1520770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520770ULL || rel >= 0x15207c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015207c0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_15207c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15207c0ULL || rel >= 0x1520870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520870 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1520870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520870ULL || rel >= 0x1520920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520920 size=80 callers=0 calls=1
   calls: sub_151b940
*/
void sub_1520920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520920ULL || rel >= 0x1520970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520970 size=80 callers=0 calls=1
   calls: sub_151b940
*/
void sub_1520970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520970ULL || rel >= 0x15209c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015209c0 size=416 callers=0 calls=0
*/
void sub_15209c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15209c0ULL || rel >= 0x1520b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520b60 size=16 callers=0 calls=0
*/
void sub_1520b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520b60ULL || rel >= 0x1520b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520b70 size=16 callers=0 calls=0
*/
void sub_1520b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520b70ULL || rel >= 0x1520b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520b80 size=16 callers=0 calls=0
*/
void sub_1520b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520b80ULL || rel >= 0x1520b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520b90 size=16 callers=0 calls=0
*/
void sub_1520b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520b90ULL || rel >= 0x1520ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520ba0 size=16 callers=0 calls=0
*/
void sub_1520ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520ba0ULL || rel >= 0x1520bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520bb0 size=16 callers=0 calls=0
*/
void sub_1520bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520bb0ULL || rel >= 0x1520bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520bc0 size=16 callers=0 calls=0
*/
void sub_1520bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520bc0ULL || rel >= 0x1520bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520bd0 size=16 callers=0 calls=0
*/
void sub_1520bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520bd0ULL || rel >= 0x1520be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520be0 size=304 callers=77 calls=0
*/
void sub_1520be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520be0ULL || rel >= 0x1520d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520d10 size=288 callers=1 calls=2
   calls: sub_1520e30, sub_e809c0
*/
void sub_1520d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520d10ULL || rel >= 0x1520e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01520e30 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1520e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520e30ULL || rel >= 0x1521060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01521060 size=288 callers=1 calls=2
   calls: sub_1521180, sub_e809c0
*/
void sub_1521060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1521060ULL || rel >= 0x1521180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01521180 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1521180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1521180ULL || rel >= 0x15213c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015213c0 size=288 callers=1 calls=2
   calls: sub_15214e0, sub_e809c0
*/
void sub_15213c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15213c0ULL || rel >= 0x15214e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015214e0 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_15214e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15214e0ULL || rel >= 0x1521730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01521730 size=288 callers=1 calls=2
   calls: sub_1521850, sub_e809c0
*/
void sub_1521730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1521730ULL || rel >= 0x1521850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01521850 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1521850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1521850ULL || rel >= 0x1521ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01521ac0 size=288 callers=1 calls=2
   calls: sub_1521be0, sub_e809c0
*/
void sub_1521ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1521ac0ULL || rel >= 0x1521be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01521be0 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1521be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1521be0ULL || rel >= 0x1521e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01521e30 size=336 callers=11 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1521e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1521e30ULL || rel >= 0x1521f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01521f80 size=336 callers=7 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1521f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1521f80ULL || rel >= 0x15220d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015220d0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_15220d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15220d0ULL || rel >= 0x1522210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01522210 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_1522210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522210ULL || rel >= 0x1522360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01522360 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1522360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522360ULL || rel >= 0x15224a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015224a0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_15224a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15224a0ULL || rel >= 0x15225e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015225e0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_15225e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15225e0ULL || rel >= 0x1522720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01522720 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1522720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522720ULL || rel >= 0x1522860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01522860 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1522860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522860ULL || rel >= 0x15229a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015229a0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_15229a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15229a0ULL || rel >= 0x1522ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01522ae0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1522ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522ae0ULL || rel >= 0x1522c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01522c20 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1522c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522c20ULL || rel >= 0x1522d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01522d60 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1522d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522d60ULL || rel >= 0x1522ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01522ea0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1522ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522ea0ULL || rel >= 0x1522fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01522fe0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_1522fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522fe0ULL || rel >= 0x1523130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01523130 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1523130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1523130ULL || rel >= 0x1523270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01523270 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1523270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1523270ULL || rel >= 0x15233b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015233b0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_15233b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15233b0ULL || rel >= 0x15234f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015234f0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_15234f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15234f0ULL || rel >= 0x1523630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01523630 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1523630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1523630ULL || rel >= 0x1523770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01523770 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1523770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1523770ULL || rel >= 0x15238b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015238b0 size=288 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokedex/bin/pokedex_details_lyt.bin
*/
void pokedex_details_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15238b0ULL || rel >= 0x15239d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015239d0 size=208 callers=0 calls=3
   calls: sub_14ba7b0, sub_8f3180, sub_e83930
*/
void sub_15239d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15239d0ULL || rel >= 0x1523aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01523aa0 size=16 callers=0 calls=0
*/
void sub_1523aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1523aa0ULL || rel >= 0x1523ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01523ab0 size=2096 callers=0 calls=12
   calls: sub_1379a10, sub_1379b90, sub_1379f20, sub_1502120, sub_15242e0, sub_1524420, sub_1524620, sub_1526420, sub_5cfad0, sub_ea4740, sub_ea4760, sub_ea47a0
*/
void sub_1523ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1523ab0ULL || rel >= 0x15242e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015242e0 size=320 callers=2 calls=14
   calls: ZKN_COMMENT_A__03d_999, ZKN_HEIGHT__03d_999, ZKN_WEIGHT__03d_999, sub_1379600, sub_1379f10, sub_1379f20, sub_1525340, sub_1526420, sub_1526a80, sub_1526ba0, sub_1526de0, sub_1526f10
   ... +2 more
*/
void sub_15242e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15242e0ULL || rel >= 0x1524420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01524420 size=512 callers=2 calls=6
   calls: sub_1379150, sub_1379b90, sub_1524940, sub_1524fd0, sub_e83430, sub_e83850
*/
void sub_1524420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1524420ULL || rel >= 0x1524620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01524620 size=368 callers=2 calls=4
   calls: sub_1379170, sub_1525bb0, sub_e83430, sub_e83850
*/
void sub_1524620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1524620ULL || rel >= 0x1524790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01524790 size=64 callers=1 calls=2
   calls: sub_e80580, sub_e807f0
*/
void sub_1524790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1524790ULL || rel >= 0x15247d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015247d0 size=16 callers=3 calls=0
*/
void sub_15247d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15247d0ULL || rel >= 0x15247e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015247e0 size=48 callers=5 calls=1
   calls: sub_e80580
*/
void sub_15247e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15247e0ULL || rel >= 0x1524810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01524810 size=48 callers=3 calls=1
   calls: sub_e80580
*/
void sub_1524810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1524810ULL || rel >= 0x1524840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01524840 size=48 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_1524840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1524840ULL || rel >= 0x1524870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01524870 size=80 callers=1 calls=2
   calls: sub_e83430, sub_eb6230
*/
void sub_1524870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1524870ULL || rel >= 0x15248c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015248c0 size=16 callers=1 calls=0
*/
void sub_15248c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15248c0ULL || rel >= 0x15248d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015248d0 size=32 callers=3 calls=1
   calls: sub_eb6530
*/
void sub_15248d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15248d0ULL || rel >= 0x15248f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015248f0 size=16 callers=1 calls=0
*/
void sub_15248f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15248f0ULL || rel >= 0x1524900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01524900 size=16 callers=1 calls=0
*/
void sub_1524900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1524900ULL || rel >= 0x1524910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01524910 size=48 callers=2 calls=1
   calls: sub_1524940
*/
void sub_1524910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1524910ULL || rel >= 0x1524940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01524940 size=1680 callers=2 calls=9
   calls: sub_12f86e0, sub_13794f0, sub_1379600, sub_1379c60, sub_137a3e0, sub_1525950, sub_1525a90, sub_76bc60, sub_76bc80
*/
void sub_1524940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1524940ULL || rel >= 0x1524fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01524fd0 size=352 callers=1 calls=14
   calls: pane_P_icon_lang__02d, sub_13794f0, sub_1379a10, sub_1379df0, sub_1379f10, sub_1379f20, sub_1525340, sub_1525bb0, sub_1526010, sub_1526a80, sub_1526ba0, sub_1527620
   ... +2 more
*/
void sub_1524fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1524fd0ULL || rel >= 0x1525130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01525130 size=16 callers=1 calls=0
*/
void sub_1525130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1525130ULL || rel >= 0x1525140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01525140 size=512 callers=16 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_1525140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1525140ULL || rel >= 0x1525340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01525340 size=304 callers=2 calls=3
   calls: sub_1379f20, sub_1525140, sub_7c2af0
*/
void sub_1525340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1525340ULL || rel >= 0x1525470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01525470 size=672 callers=2 calls=5
   calls: sub_67d450, sub_e7eb10, sub_e80580, sub_eb7570, sub_eb75e0
*/
void sub_1525470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1525470ULL || rel >= 0x1525710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01525710 size=560 callers=1 calls=5
   calls: sub_67d450, sub_e7eb10, sub_e80580, sub_eb7570, sub_eb75e0
*/
void sub_1525710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1525710ULL || rel >= 0x1525940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01525940 size=16 callers=4 calls=0
*/
void sub_1525940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1525940ULL || rel >= 0x1525950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01525950 size=320 callers=2 calls=3
   calls: sub_1379c60, sub_76bc60, sub_76bc80
*/
void sub_1525950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1525950ULL || rel >= 0x1525a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01525a90 size=288 callers=1 calls=2
   calls: sub_1379a10, sub_14ab040
*/
void sub_1525a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1525a90ULL || rel >= 0x1525bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01525bb0 size=1120 callers=2 calls=17
   calls: ZKN_COMMENT_A__03d_999, ZKN_HEIGHT__03d_999, ZKN_WEIGHT__03d_999, sub_1379600, sub_1379a10, sub_1379f20, sub_1379f90, sub_14ab040, sub_1525140, sub_1526de0, sub_1526f10, sub_1527130
   ... +5 more
*/
void sub_1525bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1525bb0ULL || rel >= 0x1526010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01526010 size=608 callers=1 calls=3
   calls: sub_1379a10, sub_1379df0, sub_7c2b60
*/
void sub_1526010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1526010ULL || rel >= 0x1526270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01526270 size=432 callers=1 calls=3
   calls: sub_14a9cf0, sub_14ab040, sub_8f3180
   ref: pane_P_icon_lang_%02d
*/
void pane_P_icon_lang__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1526270ULL || rel >= 0x1526420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01526420 size=752 callers=3 calls=1
   calls: sub_1379f20
*/
void sub_1526420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1526420ULL || rel >= 0x1526710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01526710 size=880 callers=2 calls=4
   calls: sub_1379f20, sub_1525140, sub_7c2280, sub_e83930
   ref: ZKN_COMMENT_A_%03d_%03d
   ref: ZKN_COMMENT_A_%03d_999
*/
void ZKN_COMMENT_A__03d_999(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1526710ULL || rel >= 0x1526a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01526a80 size=288 callers=2 calls=5
   calls: sub_12fa520, sub_1315b90, sub_1379f20, sub_1525140, sub_7c2af0
*/
void sub_1526a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1526a80ULL || rel >= 0x1526ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01526ba0 size=576 callers=2 calls=7
   calls: sub_13133a0, sub_1313c10, sub_1379f20, sub_1525140, sub_67be60, sub_76ba80, sub_7c2af0
*/
void sub_1526ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1526ba0ULL || rel >= 0x1526de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01526de0 size=304 callers=2 calls=5
   calls: sub_1315b90, sub_1379660, sub_1379f20, sub_1525140, sub_7c2af0
*/
void sub_1526de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1526de0ULL || rel >= 0x1526f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01526f10 size=544 callers=2 calls=6
   calls: sub_1379f20, sub_14ab040, sub_14d6920, sub_76bc80, sub_7c2af0, sub_8f3180
*/
void sub_1526f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1526f10ULL || rel >= 0x1527130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527130 size=432 callers=2 calls=6
   calls: ZKN_FORM__03d_999, sub_1379f20, sub_1525140, sub_67bdc0, sub_7c2af0, sub_e83930
*/
void sub_1527130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527130ULL || rel >= 0x15272e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015272e0 size=288 callers=2 calls=3
   calls: sub_1379f20, sub_1525140, sub_7c2af0
   ref: ZKN_WEIGHT_%03d_999
   ref: ZKN_WEIGHT_%03d_%03d
*/
void ZKN_WEIGHT__03d_999(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15272e0ULL || rel >= 0x1527400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527400 size=288 callers=2 calls=3
   calls: sub_1379f20, sub_1525140, sub_7c2af0
   ref: ZKN_HEIGHT_%03d_%03d
   ref: ZKN_HEIGHT_%03d_999
*/
void ZKN_HEIGHT__03d_999(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527400ULL || rel >= 0x1527520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527520 size=256 callers=2 calls=4
   calls: ZKN_TYPE__03d, sub_1379f20, sub_1525140, sub_7c2af0
*/
void sub_1527520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527520ULL || rel >= 0x1527620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527620 size=448 callers=1 calls=2
   calls: sub_1379b90, sub_14ab040
*/
void sub_1527620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527620ULL || rel >= 0x15277e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015277e0 size=368 callers=1 calls=4
   calls: sub_1379600, sub_14bc060, sub_e83430, sub_e83850
*/
void sub_15277e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15277e0ULL || rel >= 0x1527950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527950 size=240 callers=3 calls=1
   calls: sub_14aad40
*/
void sub_1527950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527950ULL || rel >= 0x1527a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527a40 size=176 callers=2 calls=2
   calls: sub_e83430, sub_e83850
*/
void sub_1527a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527a40ULL || rel >= 0x1527af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527af0 size=208 callers=2 calls=2
   calls: sub_14ab2b0, sub_e83430
*/
void sub_1527af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527af0ULL || rel >= 0x1527bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527bc0 size=16 callers=1 calls=0
*/
void sub_1527bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527bc0ULL || rel >= 0x1527bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527bd0 size=16 callers=1 calls=0
*/
void sub_1527bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527bd0ULL || rel >= 0x1527be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527be0 size=16 callers=3 calls=0
*/
void sub_1527be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527be0ULL || rel >= 0x1527bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527bf0 size=16 callers=0 calls=0
*/
void sub_1527bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527bf0ULL || rel >= 0x1527c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527c00 size=16 callers=0 calls=0
*/
void sub_1527c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527c00ULL || rel >= 0x1527c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527c10 size=16 callers=0 calls=0
*/
void sub_1527c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527c10ULL || rel >= 0x1527c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527c20 size=16 callers=0 calls=0
*/
void sub_1527c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527c20ULL || rel >= 0x1527c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527c30 size=16 callers=0 calls=0
*/
void sub_1527c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527c30ULL || rel >= 0x1527c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527c40 size=16 callers=0 calls=0
*/
void sub_1527c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527c40ULL || rel >= 0x1527c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527c50 size=16 callers=0 calls=0
*/
void sub_1527c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527c50ULL || rel >= 0x1527c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527c60 size=16 callers=0 calls=0
*/
void sub_1527c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527c60ULL || rel >= 0x1527c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527c70 size=304 callers=0 calls=0
*/
void sub_1527c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527c70ULL || rel >= 0x1527da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527da0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokedex/bin/pokedex_top_lyt.bin
   ref: bin/appli/pokedex/bin/uikit_pokedex_top.bin
*/
void uikit_pokedex_top(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527da0ULL || rel >= 0x1527f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527f80 size=96 callers=0 calls=6
   calls: pane_L_btn_near_poke__02d_L_pokeIcon_00_P_pokeIcon_00, sub_14e1a30, sub_1528230, sub_1528430, sub_e84310, top_panel_2
*/
void sub_1527f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527f80ULL || rel >= 0x1527fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01527fe0 size=592 callers=1 calls=2
   calls: sub_14ba7b0, sub_8f3180
   ref: pane_L_btn_near_poke_%02d_L_pokeIcon_00_P_pokeIcon_00
*/
void pane_L_btn_near_poke__02d_L_pokeIcon_00_P_pokeIcon_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1527fe0ULL || rel >= 0x1528230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01528230 size=512 callers=1 calls=4
   calls: sub_1315b90, sub_1379a60, sub_1379c20, sub_15288e0
*/
void sub_1528230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1528230ULL || rel >= 0x1528430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01528430 size=224 callers=1 calls=3
   calls: sub_1379d60, sub_1379da0, sub_e83930
*/
void sub_1528430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1528430ULL || rel >= 0x1528510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01528510 size=176 callers=1 calls=5
   calls: sub_1379c20, sub_14e1a00, sub_14e6510, sub_e83e60, sub_e840a0
   ref: top_panel
*/
void top_panel_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1528510ULL || rel >= 0x15285c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015285c0 size=192 callers=0 calls=0
*/
void sub_15285c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15285c0ULL || rel >= 0x1528680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01528680 size=176 callers=0 calls=3
   calls: sub_15298a0, sub_e807d0, sub_ea4760
*/
void sub_1528680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1528680ULL || rel >= 0x1528730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01528730 size=160 callers=1 calls=6
   calls: sub_14e1a00, sub_14e1a30, sub_e80580, sub_e807f0, sub_e840a0, sub_e84310
   ref: top_panel
*/
void top_panel_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1528730ULL || rel >= 0x15287d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015287d0 size=96 callers=3 calls=3
   calls: sub_14e1a30, sub_e80580, sub_e84310
*/
void sub_15287d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15287d0ULL || rel >= 0x1528830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01528830 size=48 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_1528830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1528830ULL || rel >= 0x1528860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01528860 size=48 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_1528860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1528860ULL || rel >= 0x1528890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01528890 size=16 callers=1 calls=0
*/
void sub_1528890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1528890ULL || rel >= 0x15288a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015288a0 size=16 callers=1 calls=0
*/
void sub_15288a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15288a0ULL || rel >= 0x15288b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015288b0 size=32 callers=4 calls=1
   calls: sub_eb6530
*/
void sub_15288b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15288b0ULL || rel >= 0x15288d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015288d0 size=16 callers=1 calls=0
*/
void sub_15288d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15288d0ULL || rel >= 0x15288e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015288e0 size=288 callers=9 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_15288e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15288e0ULL || rel >= 0x1528a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01528a00 size=672 callers=2 calls=6
   calls: sub_14e1a00, sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10, sub_eb7b00
*/
void sub_1528a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1528a00ULL || rel >= 0x1528ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01528ca0 size=512 callers=1 calls=3
   calls: sub_14bc060, sub_e83430, sub_e83850
   ref: anime_L_btn_near_poke_%02d_L_pokeIcon_00_color_inactive
   ref: anime_L_btn_near_poke_%02d_L_pokeIcon_00_color_normal
*/
void anime_L_btn_near_poke__02d_L_pokeIcon_00_color_normal(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1528ca0ULL || rel >= 0x1528ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01528ea0 size=1232 callers=1 calls=15
   calls: anime_L_btn_near_poke__02d_L_pokeIcon_00_color_normal, sub_12fa520, sub_1313c10, sub_1315b90, sub_1379a10, sub_137a070, sub_137a090, sub_14ab040, sub_14e1a30, sub_14e6510, sub_14e6d90, sub_15288e0
   ... +3 more
   ref: pane_L_btn_near_poke_%02d_T_pokeName_00
   ref: pane_L_btn_near_poke_%02d_T_value_dexnum_00
   ref: anime_L_btn_near_poke_%02d_switch_find_get
   ref: top_panel
   ref: anime_L_btn_near_poke_%02d_L_icon_weather_switch
   ref: anime_L_btn_near_poke_%02d_L_icon_weather_active
*/
void top_panel_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1528ea0ULL || rel >= 0x1529370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529370 size=176 callers=1 calls=4
   calls: sub_137a050, sub_137a160, sub_d62e30, sub_e83930
*/
void sub_1529370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529370ULL || rel >= 0x1529420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529420 size=384 callers=1 calls=5
   calls: place_name_6, sub_137a050, sub_137a160, sub_15288e0, sub_e90930
*/
void sub_1529420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529420ULL || rel >= 0x15295a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015295a0 size=208 callers=1 calls=2
   calls: sub_137a050, sub_137a070
*/
void sub_15295a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15295a0ULL || rel >= 0x1529670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529670 size=16 callers=1 calls=0
*/
void sub_1529670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529670ULL || rel >= 0x1529680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529680 size=112 callers=3 calls=2
   calls: sub_14e6550, sub_e840a0
   ref: top_panel
*/
void top_panel_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529680ULL || rel >= 0x15296f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015296f0 size=16 callers=0 calls=0
*/
void sub_15296f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15296f0ULL || rel >= 0x1529700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529700 size=16 callers=0 calls=0
*/
void sub_1529700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529700ULL || rel >= 0x1529710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529710 size=16 callers=0 calls=0
*/
void sub_1529710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529710ULL || rel >= 0x1529720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529720 size=16 callers=0 calls=0
*/
void sub_1529720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529720ULL || rel >= 0x1529730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529730 size=16 callers=0 calls=0
*/
void sub_1529730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529730ULL || rel >= 0x1529740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529740 size=16 callers=0 calls=0
*/
void sub_1529740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529740ULL || rel >= 0x1529750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529750 size=16 callers=0 calls=0
*/
void sub_1529750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529750ULL || rel >= 0x1529760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529760 size=16 callers=0 calls=0
*/
void sub_1529760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529760ULL || rel >= 0x1529770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529770 size=304 callers=0 calls=0
*/
void sub_1529770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529770ULL || rel >= 0x15298a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015298a0 size=400 callers=4 calls=2
   calls: sub_15298a0, sub_e86260
*/
void sub_15298a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15298a0ULL || rel >= 0x1529a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529a30 size=1136 callers=0 calls=12
   calls: sub_1449290, sub_151c2d0, sub_1520be0, sub_1521e30, sub_1529ea0, sub_152a450, sub_1545480, sub_795bc0, sub_c39c40, sub_c43ed0, sub_c44310, sub_d0c0
   ref: TownmapView
   ref: OptionBar
   ref: ViewTop
   ref: ViewBg
*/
void TownmapView_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529a30ULL || rel >= 0x1529ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529ea0 size=256 callers=3 calls=12
   calls: sub_151d560, sub_151d570, sub_1520be0, sub_1528830, sub_1528a00, sub_1529370, sub_1529420, sub_152a6e0, sub_152a7c0, sub_e806b0, sub_eb7730, top_panel_4
*/
void sub_1529ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529ea0ULL || rel >= 0x1529fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01529fa0 size=400 callers=0 calls=9
   calls: sub_151c2f0, sub_1520be0, sub_15288b0, sub_1529ea0, sub_152a7a0, sub_c43ed0, sub_c44310, sub_eb6530, sub_eb7790
*/
void sub_1529fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1529fa0ULL || rel >= 0x152a130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a130 size=16 callers=0 calls=0
*/
void sub_152a130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a130ULL || rel >= 0x152a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a140 size=352 callers=0 calls=10
   calls: pane__s_10, pane__s_8, sub_137a050, sub_137a070, sub_137a160, sub_1446ab0, sub_14486e0, sub_1448ae0, sub_1448ba0, sub_eb6230
*/
void sub_152a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a140ULL || rel >= 0x152a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a2a0 size=16 callers=0 calls=0
*/
void sub_152a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a2a0ULL || rel >= 0x152a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a2b0 size=16 callers=0 calls=0
*/
void sub_152a2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a2b0ULL || rel >= 0x152a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a2c0 size=16 callers=0 calls=0
*/
void sub_152a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a2c0ULL || rel >= 0x152a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a2d0 size=16 callers=0 calls=0
*/
void sub_152a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a2d0ULL || rel >= 0x152a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a2e0 size=16 callers=0 calls=0
*/
void sub_152a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a2e0ULL || rel >= 0x152a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a2f0 size=16 callers=0 calls=0
*/
void sub_152a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a2f0ULL || rel >= 0x152a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a300 size=16 callers=0 calls=0
*/
void sub_152a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a300ULL || rel >= 0x152a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a310 size=16 callers=0 calls=0
*/
void sub_152a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a310ULL || rel >= 0x152a320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a320 size=304 callers=0 calls=0
*/
void sub_152a320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a320ULL || rel >= 0x152a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a450 size=336 callers=10 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_152a450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a450ULL || rel >= 0x152a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a5a0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokedex/bin/pokedex_bg_lyt.bin
*/
void pokedex_bg_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a5a0ULL || rel >= 0x152a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a6b0 size=16 callers=0 calls=0
*/
void sub_152a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a6b0ULL || rel >= 0x152a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a6c0 size=16 callers=0 calls=0
*/
void sub_152a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a6c0ULL || rel >= 0x152a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a6d0 size=16 callers=0 calls=0
*/
void sub_152a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a6d0ULL || rel >= 0x152a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a6e0 size=48 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_152a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a6e0ULL || rel >= 0x152a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a710 size=48 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_152a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a710ULL || rel >= 0x152a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a740 size=80 callers=3 calls=2
   calls: sub_e83430, sub_eb6230
*/
void sub_152a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a740ULL || rel >= 0x152a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a790 size=16 callers=3 calls=0
*/
void sub_152a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a790ULL || rel >= 0x152a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a7a0 size=32 callers=8 calls=1
   calls: sub_eb6530
*/
void sub_152a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a7a0ULL || rel >= 0x152a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a7c0 size=64 callers=5 calls=1
   calls: sub_e83930
*/
void sub_152a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a7c0ULL || rel >= 0x152a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a800 size=16 callers=0 calls=0
*/
void sub_152a800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a800ULL || rel >= 0x152a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a810 size=16 callers=0 calls=0
*/
void sub_152a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a810ULL || rel >= 0x152a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a820 size=16 callers=0 calls=0
*/
void sub_152a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a820ULL || rel >= 0x152a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a830 size=16 callers=0 calls=0
*/
void sub_152a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a830ULL || rel >= 0x152a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a840 size=16 callers=0 calls=0
*/
void sub_152a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a840ULL || rel >= 0x152a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a850 size=16 callers=0 calls=0
*/
void sub_152a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a850ULL || rel >= 0x152a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a860 size=16 callers=0 calls=0
*/
void sub_152a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a860ULL || rel >= 0x152a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a870 size=16 callers=0 calls=0
*/
void sub_152a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a870ULL || rel >= 0x152a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a880 size=304 callers=0 calls=0
*/
void sub_152a880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a880ULL || rel >= 0x152a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152a9b0 size=896 callers=0 calls=13
   calls: sub_151c350, sub_1520be0, sub_1521e30, sub_1528890, sub_1528a00, sub_152a450, sub_152a740, sub_152a7c0, sub_152ad30, sub_1545480, sub_c39c40, sub_d0c0
   ... +1 more
   ref: TownmapView
   ref: ViewTop
   ref: top_in
   ref: ViewBg
*/
void TownmapView_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152a9b0ULL || rel >= 0x152ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152ad30 size=384 callers=1 calls=13
   calls: pane__s_10, pane__s_8, pane__s_9, sub_137a050, sub_137a070, sub_137a160, sub_1446ab0, sub_14486e0, sub_1448ae0, sub_1448ba0, sub_e806b0, sub_e83430
   ... +1 more
*/
void sub_152ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152ad30ULL || rel >= 0x152aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152aeb0 size=208 callers=0 calls=5
   calls: sub_151c2f0, sub_1520be0, sub_15288b0, sub_152a7a0, sub_eb6530
*/
void sub_152aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152aeb0ULL || rel >= 0x152af80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152af80 size=16 callers=0 calls=0
*/
void sub_152af80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152af80ULL || rel >= 0x152af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152af90 size=16 callers=0 calls=0
*/
void sub_152af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152af90ULL || rel >= 0x152afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152afa0 size=16 callers=0 calls=0
*/
void sub_152afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152afa0ULL || rel >= 0x152afb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152afb0 size=16 callers=0 calls=0
*/
void sub_152afb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152afb0ULL || rel >= 0x152afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152afc0 size=16 callers=0 calls=0
*/
void sub_152afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152afc0ULL || rel >= 0x152afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152afd0 size=16 callers=0 calls=0
*/
void sub_152afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152afd0ULL || rel >= 0x152afe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152afe0 size=16 callers=0 calls=0
*/
void sub_152afe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152afe0ULL || rel >= 0x152aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152aff0 size=16 callers=0 calls=0
*/
void sub_152aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152aff0ULL || rel >= 0x152b000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b000 size=16 callers=0 calls=0
*/
void sub_152b000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b000ULL || rel >= 0x152b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b010 size=304 callers=0 calls=0
*/
void sub_152b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b010ULL || rel >= 0x152b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b140 size=704 callers=0 calls=12
   calls: sub_151c350, sub_151ca40, sub_1520be0, sub_1521f80, sub_152a450, sub_152a740, sub_152a7c0, sub_152c250, sub_152c2e0, sub_c39c40, sub_d0c0, sub_e806b0
   ref: list_in
   ref: ViewBg
   ref: ViewList
*/
void ViewList(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b140ULL || rel >= 0x152b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b400 size=176 callers=0 calls=4
   calls: sub_151c2f0, sub_1520be0, sub_152a7a0, sub_152c2b0
*/
void sub_152b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b400ULL || rel >= 0x152b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b4b0 size=16 callers=0 calls=0
*/
void sub_152b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b4b0ULL || rel >= 0x152b4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b4c0 size=16 callers=0 calls=0
*/
void sub_152b4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b4c0ULL || rel >= 0x152b4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b4d0 size=16 callers=0 calls=0
*/
void sub_152b4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b4d0ULL || rel >= 0x152b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b4e0 size=16 callers=0 calls=0
*/
void sub_152b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b4e0ULL || rel >= 0x152b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b4f0 size=16 callers=0 calls=0
*/
void sub_152b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b4f0ULL || rel >= 0x152b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b500 size=16 callers=0 calls=0
*/
void sub_152b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b500ULL || rel >= 0x152b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b510 size=16 callers=0 calls=0
*/
void sub_152b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b510ULL || rel >= 0x152b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b520 size=16 callers=0 calls=0
*/
void sub_152b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b520ULL || rel >= 0x152b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b530 size=16 callers=0 calls=0
*/
void sub_152b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b530ULL || rel >= 0x152b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b540 size=304 callers=0 calls=0
*/
void sub_152b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b540ULL || rel >= 0x152b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b670 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokedex/bin/uikit_pokedex_list.bin
   ref: bin/appli/pokedex/bin/pokedex_list_lyt.bin
*/
void uikit_pokedex_list(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b670ULL || rel >= 0x152b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b850 size=240 callers=0 calls=8
   calls: anime_L_list_pokedex__02d_L_pokeIcon_00_keep, sub_14e1a30, sub_152bad0, sub_152bc60, sub_152bde0, sub_152f130, sub_e83930, sub_e84310
*/
void sub_152b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b850ULL || rel >= 0x152b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152b940 size=400 callers=1 calls=3
   calls: sub_14ba7b0, sub_8f3180, sub_e83430
   ref: pane_L_list_pokedex_%02d_L_pokeIcon_00_P_pokeIcon_00
   ref: anime_L_list_pokedex_%02d_L_pokeIcon_00_keep
*/
void anime_L_list_pokedex__02d_L_pokeIcon_00_keep(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152b940ULL || rel >= 0x152bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152bad0 size=400 callers=1 calls=4
   calls: sub_1315b90, sub_1379a60, sub_1379c20, sub_152c750
*/
void sub_152bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152bad0ULL || rel >= 0x152bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152bc60 size=224 callers=1 calls=3
   calls: sub_1379d60, sub_1379da0, sub_e83930
*/
void sub_152bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152bc60ULL || rel >= 0x152bd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152bd40 size=80 callers=1 calls=1
   calls: sub_e83930
*/
void sub_152bd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152bd40ULL || rel >= 0x152bd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152bd90 size=80 callers=1 calls=2
   calls: sub_14e1a30, sub_e84310
*/
void sub_152bd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152bd90ULL || rel >= 0x152bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152bde0 size=384 callers=1 calls=1
   calls: sub_93c570
*/
void sub_152bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152bde0ULL || rel >= 0x152bf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152bf60 size=16 callers=0 calls=0
*/
void sub_152bf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152bf60ULL || rel >= 0x152bf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152bf70 size=416 callers=0 calls=5
   calls: sub_1502120, sub_152efa0, sub_5cfad0, sub_e807d0, sub_ea4760
*/
void sub_152bf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152bf70ULL || rel >= 0x152c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152c110 size=160 callers=2 calls=6
   calls: sub_14e1a00, sub_14e1a30, sub_e80580, sub_e807f0, sub_e84250, sub_e84310
*/
void sub_152c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152c110ULL || rel >= 0x152c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152c1b0 size=16 callers=1 calls=0
*/
void sub_152c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152c1b0ULL || rel >= 0x152c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152c1c0 size=96 callers=5 calls=3
   calls: sub_14e1a30, sub_e80580, sub_e84310
*/
void sub_152c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152c1c0ULL || rel >= 0x152c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152c220 size=48 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_152c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152c220ULL || rel >= 0x152c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152c250 size=80 callers=1 calls=2
   calls: sub_e83430, sub_eb6230
*/
void sub_152c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152c250ULL || rel >= 0x152c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152c2a0 size=16 callers=1 calls=0
*/
void sub_152c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152c2a0ULL || rel >= 0x152c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152c2b0 size=32 callers=3 calls=1
   calls: sub_eb6530
*/
void sub_152c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152c2b0ULL || rel >= 0x152c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152c2d0 size=16 callers=1 calls=0
*/
void sub_152c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152c2d0ULL || rel >= 0x152c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152c2e0 size=16 callers=1 calls=0
*/
void sub_152c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152c2e0ULL || rel >= 0x152c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152c2f0 size=1120 callers=0 calls=9
   calls: sub_1379160, sub_1379ef0, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870, sub_152c750, sub_152cd20, sub_e84250
*/
void sub_152c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152c2f0ULL || rel >= 0x152c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152c750 size=288 callers=21 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_152c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152c750ULL || rel >= 0x152c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152c870 size=256 callers=1 calls=2
   calls: sub_14ea9a0, sub_eb7b00
*/
void sub_152c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152c870ULL || rel >= 0x152c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152c970 size=944 callers=1 calls=6
   calls: sub_14e1a00, sub_14ea4f0, sub_152c870, sub_67d450, sub_e7eb10, sub_eb7b00
*/
void sub_152c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152c970ULL || rel >= 0x152cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152cd20 size=288 callers=1 calls=1
   calls: sub_152fb70
*/
void sub_152cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152cd20ULL || rel >= 0x152ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152ce40 size=128 callers=0 calls=2
   calls: sub_1379160, sub_1379b90
*/
void sub_152ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152ce40ULL || rel >= 0x152cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152cec0 size=256 callers=0 calls=1
   calls: sub_1379ef0
*/
void sub_152cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152cec0ULL || rel >= 0x152cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152cfc0 size=176 callers=0 calls=3
   calls: sub_1379150, sub_1379b90, sub_152c970
*/
void sub_152cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152cfc0ULL || rel >= 0x152d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152d070 size=1248 callers=0 calls=11
   calls: anime_L_list_pokedex__02d_L_pokeIcon_00_color_normal, sub_12fa520, sub_1313c10, sub_1315b90, sub_13794f0, sub_1379a10, sub_1379b90, sub_14e1a00, sub_152c750, sub_e83930, sub_e83e60
   ref: pane_L_list_pokedex_%02d_T_pokeName_00
   ref: pane_L_list_pokedex_%02d_T_value_dexnum_00
   ref: anime_L_list_pokedex_%02d_switch_weight_height
   ref: anime_L_list_pokedex_%02d_switch
*/
void anime_L_list_pokedex__02d_switch(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152d070ULL || rel >= 0x152d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152d550 size=1264 callers=0 calls=9
   calls: anime_L_list_pokedex__02d_L_pokeIcon_00_color_normal, sub_1313c10, sub_13794f0, sub_1379a10, sub_1379b90, sub_14e1a00, sub_152c750, sub_e83930, sub_e83e60
   ref: pane_L_list_pokedex_%02d_T_pokeName_00
   ref: ZKN_WEIGHT_%03d_999
   ref: pane_L_list_pokedex_%02d_T_value_w_h_00
   ref: anime_L_list_pokedex_%02d_switch_weight_height
   ref: ZKN_WEIGHT_%03d_%03d
   ref: anime_L_list_pokedex_%02d_switch
*/
void ZKN_WEIGHT__03d_999_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152d550ULL || rel >= 0x152da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152da40 size=1264 callers=0 calls=9
   calls: anime_L_list_pokedex__02d_L_pokeIcon_00_color_normal, sub_1313c10, sub_13794f0, sub_1379a10, sub_1379b90, sub_14e1a00, sub_152c750, sub_e83930, sub_e83e60
   ref: ZKN_HEIGHT_%03d_%03d
   ref: pane_L_list_pokedex_%02d_T_pokeName_00
   ref: ZKN_HEIGHT_%03d_999
   ref: pane_L_list_pokedex_%02d_T_value_w_h_00
   ref: anime_L_list_pokedex_%02d_switch_weight_height
   ref: anime_L_list_pokedex_%02d_switch
*/
void ZKN_HEIGHT__03d_999_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152da40ULL || rel >= 0x152df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152df30 size=512 callers=6 calls=3
   calls: sub_14bc060, sub_e83430, sub_e83850
   ref: anime_L_list_pokedex_%02d_L_pokeIcon_00_color_inactive
   ref: anime_L_list_pokedex_%02d_L_pokeIcon_00_color_normal
*/
void anime_L_list_pokedex__02d_L_pokeIcon_00_color_normal(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152df30ULL || rel >= 0x152e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152e130 size=176 callers=1 calls=2
   calls: sub_1379ef0, sub_1379f00
*/
void sub_152e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152e130ULL || rel >= 0x152e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152e1e0 size=240 callers=1 calls=1
   calls: sub_14aad40
*/
void sub_152e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152e1e0ULL || rel >= 0x152e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152e2d0 size=544 callers=1 calls=5
   calls: sub_1311c60, sub_13149a0, sub_137a340, sub_67d450, sub_e7eb10
*/
void sub_152e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152e2d0ULL || rel >= 0x152e4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152e4f0 size=320 callers=1 calls=3
   calls: sub_137a340, sub_1502120, sub_5cfad0
   ref: Play_me_or_st_rating_lv1
   ref: Play_me_or_st_rating_lv3
   ref: Play_me_or_st_rating_lv2
*/
void Play_me_or_st_rating_lv3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152e4f0ULL || rel >= 0x152e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152e630 size=32 callers=0 calls=0
*/
void sub_152e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152e630ULL || rel >= 0x152e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152e650 size=1456 callers=1 calls=9
   calls: Play_UI_common_decide_5, sub_14e1a30, sub_14e3670, sub_14e3680, sub_14e4040, sub_67d450, sub_93c570, sub_e7eb10, sub_e84310
*/
void sub_152e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152e650ULL || rel >= 0x152ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152ec00 size=96 callers=0 calls=0
*/
void sub_152ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152ec00ULL || rel >= 0x152ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152ec60 size=96 callers=0 calls=0
*/
void sub_152ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152ec60ULL || rel >= 0x152ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152ecc0 size=16 callers=0 calls=0
*/
void sub_152ecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152ecc0ULL || rel >= 0x152ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152ecd0 size=96 callers=0 calls=0
*/
void sub_152ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152ecd0ULL || rel >= 0x152ed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152ed30 size=96 callers=0 calls=0
*/
void sub_152ed30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152ed30ULL || rel >= 0x152ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152ed90 size=16 callers=0 calls=0
*/
void sub_152ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152ed90ULL || rel >= 0x152eda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152eda0 size=16 callers=0 calls=0
*/
void sub_152eda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152eda0ULL || rel >= 0x152edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152edb0 size=96 callers=0 calls=0
*/
void sub_152edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152edb0ULL || rel >= 0x152ee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152ee10 size=96 callers=0 calls=0
*/
void sub_152ee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152ee10ULL || rel >= 0x152ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152ee70 size=304 callers=0 calls=0
*/
void sub_152ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152ee70ULL || rel >= 0x152efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152efa0 size=400 callers=4 calls=2
   calls: sub_152efa0, sub_e86260
*/
void sub_152efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152efa0ULL || rel >= 0x152f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152f130 size=464 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_152f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152f130ULL || rel >= 0x152f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152f300 size=240 callers=0 calls=0
*/
void sub_152f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152f300ULL || rel >= 0x152f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152f3f0 size=240 callers=0 calls=0
*/
void sub_152f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152f3f0ULL || rel >= 0x152f4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152f4e0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_152f4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152f4e0ULL || rel >= 0x152f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152f550 size=16 callers=0 calls=0
*/
void sub_152f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152f550ULL || rel >= 0x152f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152f560 size=48 callers=0 calls=0
*/
void sub_152f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152f560ULL || rel >= 0x152f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152f590 size=304 callers=0 calls=0
*/
void sub_152f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152f590ULL || rel >= 0x152f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152f6c0 size=16 callers=0 calls=0
*/
void sub_152f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152f6c0ULL || rel >= 0x152f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152f6d0 size=240 callers=0 calls=0
*/
void sub_152f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152f6d0ULL || rel >= 0x152f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152f7c0 size=240 callers=0 calls=0
*/
void sub_152f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152f7c0ULL || rel >= 0x152f8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152f8b0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_152f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152f8b0ULL || rel >= 0x152f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152f920 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_152f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152f920ULL || rel >= 0x152f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152f990 size=240 callers=0 calls=0
*/
void sub_152f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152f990ULL || rel >= 0x152fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152fa80 size=240 callers=0 calls=0
*/
void sub_152fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152fa80ULL || rel >= 0x152fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152fb70 size=480 callers=1 calls=0
*/
void sub_152fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152fb70ULL || rel >= 0x152fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152fd50 size=48 callers=0 calls=0
*/
void sub_152fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152fd50ULL || rel >= 0x152fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152fd80 size=16 callers=0 calls=0
*/
void sub_152fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152fd80ULL || rel >= 0x152fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152fd90 size=32 callers=0 calls=0
*/
void sub_152fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152fd90ULL || rel >= 0x152fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152fdb0 size=32 callers=0 calls=0
*/
void sub_152fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152fdb0ULL || rel >= 0x152fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152fdd0 size=32 callers=0 calls=0
*/
void sub_152fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152fdd0ULL || rel >= 0x152fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152fdf0 size=16 callers=0 calls=0
*/
void sub_152fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152fdf0ULL || rel >= 0x152fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152fe00 size=32 callers=0 calls=0
*/
void sub_152fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152fe00ULL || rel >= 0x152fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152fe20 size=32 callers=0 calls=0
*/
void sub_152fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152fe20ULL || rel >= 0x152fe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0152fe40 size=784 callers=0 calls=8
   calls: sub_1521e30, sub_15288a0, sub_152a450, sub_152a790, sub_1545480, sub_c39c40, sub_d0c0, sub_eb6230
   ref: TownmapView
   ref: ViewTop
   ref: top_out
   ref: ViewBg
*/
void TownmapView_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152fe40ULL || rel >= 0x1530150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530150 size=288 callers=0 calls=7
   calls: sub_151c2f0, sub_151c330, sub_1520be0, sub_15288b0, sub_152a7a0, sub_e806b0, sub_eb6530
*/
void sub_1530150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530150ULL || rel >= 0x1530270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530270 size=16 callers=0 calls=0
*/
void sub_1530270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530270ULL || rel >= 0x1530280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530280 size=16 callers=0 calls=0
*/
void sub_1530280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530280ULL || rel >= 0x1530290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530290 size=16 callers=0 calls=0
*/
void sub_1530290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530290ULL || rel >= 0x15302a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015302a0 size=16 callers=0 calls=0
*/
void sub_15302a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15302a0ULL || rel >= 0x15302b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015302b0 size=16 callers=0 calls=0
*/
void sub_15302b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15302b0ULL || rel >= 0x15302c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015302c0 size=16 callers=0 calls=0
*/
void sub_15302c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15302c0ULL || rel >= 0x15302d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015302d0 size=16 callers=0 calls=0
*/
void sub_15302d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15302d0ULL || rel >= 0x15302e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015302e0 size=16 callers=0 calls=0
*/
void sub_15302e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15302e0ULL || rel >= 0x15302f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015302f0 size=16 callers=0 calls=0
*/
void sub_15302f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15302f0ULL || rel >= 0x1530300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530300 size=304 callers=0 calls=0
*/
void sub_1530300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530300ULL || rel >= 0x1530430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530430 size=1728 callers=0 calls=33
   calls: L_weather_00_weather_ptn, pane__s_9, sub_1379160, sub_1446ab0, sub_1446b50, sub_14486e0, sub_1448b70, sub_1449290, sub_151c310, sub_151c350, sub_151ca40, sub_151d0a0
   ... +21 more
   ref: ViewDetails
   ref: TownmapView
   ref: OptionBar
   ref: ViewBg
   ref: ViewBunpu
   ref: bunpu_in
*/
void ViewDetails(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530430ULL || rel >= 0x1530af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530af0 size=176 callers=0 calls=4
   calls: sub_151c2f0, sub_1520be0, sub_15318e0, sub_eb6530
*/
void sub_1530af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530af0ULL || rel >= 0x1530ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530ba0 size=16 callers=0 calls=0
*/
void sub_1530ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530ba0ULL || rel >= 0x1530bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530bb0 size=16 callers=0 calls=0
*/
void sub_1530bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530bb0ULL || rel >= 0x1530bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530bc0 size=16 callers=0 calls=0
*/
void sub_1530bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530bc0ULL || rel >= 0x1530bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530bd0 size=16 callers=0 calls=0
*/
void sub_1530bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530bd0ULL || rel >= 0x1530be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530be0 size=16 callers=0 calls=0
*/
void sub_1530be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530be0ULL || rel >= 0x1530bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530bf0 size=16 callers=0 calls=0
*/
void sub_1530bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530bf0ULL || rel >= 0x1530c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530c00 size=16 callers=0 calls=0
*/
void sub_1530c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530c00ULL || rel >= 0x1530c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530c10 size=16 callers=0 calls=0
*/
void sub_1530c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530c10ULL || rel >= 0x1530c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530c20 size=16 callers=0 calls=0
*/
void sub_1530c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530c20ULL || rel >= 0x1530c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530c30 size=304 callers=0 calls=0
*/
void sub_1530c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530c30ULL || rel >= 0x1530d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530d60 size=336 callers=8 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1530d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530d60ULL || rel >= 0x1530eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01530eb0 size=336 callers=8 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1530eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530eb0ULL || rel >= 0x1531000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01531000 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokedex/bin/pokedex_distribution_lyt.bin
*/
void pokedex_distribution_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1531000ULL || rel >= 0x1531110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01531110 size=80 callers=0 calls=1
   calls: sub_1531160
*/
void sub_1531110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1531110ULL || rel >= 0x1531160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01531160 size=560 callers=1 calls=3
   calls: sub_67b990, sub_67d450, sub_e7eb10
*/
void sub_1531160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1531160ULL || rel >= 0x1531390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01531390 size=16 callers=0 calls=0
*/
void sub_1531390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1531390ULL || rel >= 0x15313a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015313a0 size=1024 callers=0 calls=4
   calls: sub_1379b90, sub_1502120, sub_5cfad0, sub_ea4760
*/
void sub_15313a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15313a0ULL || rel >= 0x15317a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015317a0 size=64 callers=1 calls=2
   calls: sub_e80580, sub_e807f0
*/
void sub_15317a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15317a0ULL || rel >= 0x15317e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015317e0 size=16 callers=4 calls=0
*/
void sub_15317e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15317e0ULL || rel >= 0x15317f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015317f0 size=48 callers=1 calls=1
   calls: sub_e80580
*/
void sub_15317f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15317f0ULL || rel >= 0x1531820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01531820 size=48 callers=3 calls=1
   calls: sub_e80580
*/
void sub_1531820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1531820ULL || rel >= 0x1531850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01531850 size=48 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_1531850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1531850ULL || rel >= 0x1531880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01531880 size=80 callers=1 calls=2
   calls: sub_e83430, sub_eb6230
*/
void sub_1531880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1531880ULL || rel >= 0x15318d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015318d0 size=16 callers=1 calls=0
*/
void sub_15318d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15318d0ULL || rel >= 0x15318e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015318e0 size=32 callers=3 calls=1
   calls: sub_eb6530
*/
void sub_15318e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15318e0ULL || rel >= 0x1531900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01531900 size=16 callers=1 calls=0
*/
void sub_1531900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1531900ULL || rel >= 0x1531910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01531910 size=16 callers=1 calls=0
*/
void sub_1531910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1531910ULL || rel >= 0x1531920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01531920 size=288 callers=1 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_1531920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1531920ULL || rel >= 0x1531a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01531a40 size=704 callers=3 calls=5
   calls: sub_67d450, sub_e7eb10, sub_e80580, sub_eb7570, sub_eb75e0
*/
void sub_1531a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1531a40ULL || rel >= 0x1531d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01531d00 size=384 callers=2 calls=3
   calls: sub_1313c10, sub_13794f0, sub_1531920
*/
void sub_1531d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1531d00ULL || rel >= 0x1531e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01531e80 size=720 callers=2 calls=1
   calls: sub_e83930
*/
void sub_1531e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1531e80ULL || rel >= 0x1532150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532150 size=352 callers=1 calls=1
   calls: sub_1379b90
*/
void sub_1532150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532150ULL || rel >= 0x15322b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015322b0 size=96 callers=1 calls=0
*/
void sub_15322b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15322b0ULL || rel >= 0x1532310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

