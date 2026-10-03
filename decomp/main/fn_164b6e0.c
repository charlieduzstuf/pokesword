/* main functions 0164b6e0..01661d60 (190 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0164b6e0 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_164b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b6e0ULL || rel >= 0x164b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b710 size=16 callers=0 calls=0
*/
void sub_164b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b710ULL || rel >= 0x164b720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b720 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_164b720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b720ULL || rel >= 0x164b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b750 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_164b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b750ULL || rel >= 0x164b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b780 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_164b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b780ULL || rel >= 0x164b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b7b0 size=368 callers=3 calls=1
   calls: sub_164b7b0
*/
void sub_164b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b7b0ULL || rel >= 0x164b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164b920 size=688 callers=2 calls=2
   calls: sub_15bc310, sub_15d8620
*/
void sub_164b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164b920ULL || rel >= 0x164bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164bbd0 size=128 callers=0 calls=3
   calls: InstantiationContext_3, sub_15b9300, sub_15bc310
*/
void sub_164bbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164bbd0ULL || rel >= 0x164bc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164bc50 size=128 callers=0 calls=3
   calls: InstantiationContext_3, sub_15b9300, sub_15bc310
*/
void sub_164bc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164bc50ULL || rel >= 0x164bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164bcd0 size=64 callers=6 calls=1
   calls: sub_164bcd0
*/
void sub_164bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164bcd0ULL || rel >= 0x164bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164bd10 size=64 callers=4 calls=1
   calls: sub_164bd10
*/
void sub_164bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164bd10ULL || rel >= 0x164bd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164bd50 size=128 callers=0 calls=3
   calls: sub_15ceec0, sub_15cefa0, sub_162d880
*/
void sub_164bd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164bd50ULL || rel >= 0x164bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164bdd0 size=272 callers=0 calls=3
   calls: sub_15b9340, sub_15bbf10, sub_162ce30
*/
void sub_164bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164bdd0ULL || rel >= 0x164bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164bee0 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_164bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164bee0ULL || rel >= 0x164bf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164bf70 size=32 callers=0 calls=0
*/
void sub_164bf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164bf70ULL || rel >= 0x164bf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164bf90 size=16 callers=0 calls=0
*/
void sub_164bf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164bf90ULL || rel >= 0x164bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164bfa0 size=16 callers=0 calls=0
*/
void sub_164bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164bfa0ULL || rel >= 0x164bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164bfb0 size=144 callers=0 calls=0
*/
void sub_164bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164bfb0ULL || rel >= 0x164c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c040 size=336 callers=0 calls=0
*/
void sub_164c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c040ULL || rel >= 0x164c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c190 size=16 callers=0 calls=0
*/
void sub_164c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c190ULL || rel >= 0x164c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c1a0 size=16 callers=0 calls=0
*/
void sub_164c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c1a0ULL || rel >= 0x164c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c1b0 size=16 callers=0 calls=0
*/
void sub_164c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c1b0ULL || rel >= 0x164c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c1c0 size=32 callers=0 calls=0
*/
void sub_164c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c1c0ULL || rel >= 0x164c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c1e0 size=336 callers=0 calls=0
*/
void sub_164c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c1e0ULL || rel >= 0x164c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c330 size=16 callers=0 calls=0
*/
void sub_164c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c330ULL || rel >= 0x164c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c340 size=16 callers=0 calls=0
*/
void sub_164c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c340ULL || rel >= 0x164c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c350 size=32 callers=0 calls=0
*/
void sub_164c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c350ULL || rel >= 0x164c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c370 size=240 callers=0 calls=4
   calls: sub_15cee20, sub_15cef80, sub_162ce30, sub_1c0
*/
void sub_164c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c370ULL || rel >= 0x164c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c460 size=64 callers=1 calls=1
   calls: InstanceTable_375
*/
void sub_164c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c460ULL || rel >= 0x164c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c4a0 size=64 callers=0 calls=1
   calls: sub_1638220
*/
void sub_164c4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c4a0ULL || rel >= 0x164c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c4e0 size=64 callers=0 calls=2
   calls: InstanceTable_376, sub_1638220
*/
void sub_164c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c4e0ULL || rel >= 0x164c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c520 size=16 callers=0 calls=0
*/
void sub_164c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c520ULL || rel >= 0x164c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c530 size=592 callers=1 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_444(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c530ULL || rel >= 0x164c780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c780 size=64 callers=0 calls=1
   calls: InstanceTable_444
*/
void sub_164c780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c780ULL || rel >= 0x164c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c7c0 size=528 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_164da60
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_445(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c7c0ULL || rel >= 0x164c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164c9d0 size=528 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_164da60
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_446(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164c9d0ULL || rel >= 0x164cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164cbe0 size=48 callers=0 calls=1
   calls: InstanceTable_446
*/
void sub_164cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164cbe0ULL || rel >= 0x164cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164cc10 size=48 callers=0 calls=1
   calls: InstanceTable_445
*/
void sub_164cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164cc10ULL || rel >= 0x164cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164cc40 size=16 callers=0 calls=0
*/
void sub_164cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164cc40ULL || rel >= 0x164cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164cc50 size=416 callers=0 calls=10
   calls: InstanceTable_357, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_447(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164cc50ULL || rel >= 0x164cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164cdf0 size=64 callers=0 calls=1
   calls: InstanceTable_448
*/
void sub_164cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164cdf0ULL || rel >= 0x164ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ce30 size=640 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_448(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ce30ULL || rel >= 0x164d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164d0b0 size=16 callers=0 calls=0
*/
void sub_164d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164d0b0ULL || rel >= 0x164d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164d0c0 size=560 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_449(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164d0c0ULL || rel >= 0x164d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164d2f0 size=16 callers=0 calls=0
*/
void sub_164d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164d2f0ULL || rel >= 0x164d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164d300 size=480 callers=0 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_164e020, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164d300ULL || rel >= 0x164d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164d4e0 size=48 callers=0 calls=1
   calls: InstanceTable_451
*/
void sub_164d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164d4e0ULL || rel >= 0x164d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164d510 size=560 callers=1 calls=14
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_451(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164d510ULL || rel >= 0x164d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164d740 size=16 callers=0 calls=0
*/
void sub_164d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164d740ULL || rel >= 0x164d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164d750 size=560 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_452(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164d750ULL || rel >= 0x164d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164d980 size=224 callers=0 calls=4
   calls: sub_15c8aa0, sub_15c8ad0, sub_15c8ca0, sub_164da60
*/
void sub_164d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164d980ULL || rel >= 0x164da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164da60 size=240 callers=4 calls=4
   calls: sub_15c8aa0, sub_15c8ad0, sub_162d630, sub_1630760
*/
void sub_164da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164da60ULL || rel >= 0x164db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164db50 size=320 callers=1 calls=2
   calls: sub_15c8ce0, sub_164dc90
*/
void sub_164db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164db50ULL || rel >= 0x164dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164dc90 size=432 callers=2 calls=2
   calls: sub_162d6a0, sub_16307d0
*/
void sub_164dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164dc90ULL || rel >= 0x164de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164de40 size=176 callers=0 calls=5
   calls: sub_15b6dc0, sub_15cf190, sub_15cf360, sub_162fa40, sub_1630750
*/
void sub_164de40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164de40ULL || rel >= 0x164def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164def0 size=64 callers=0 calls=0
   ref: ActivePlayerSubscriptionData
*/
void ActivePlayerSubscriptionData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164def0ULL || rel >= 0x164df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164df30 size=32 callers=0 calls=0
   ref: ActivePlayerSubscriptionData
*/
void ActivePlayerSubscriptionData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164df30ULL || rel >= 0x164df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164df50 size=16 callers=0 calls=0
*/
void sub_164df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164df50ULL || rel >= 0x164df60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164df60 size=16 callers=0 calls=0
*/
void sub_164df60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164df60ULL || rel >= 0x164df70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164df70 size=96 callers=0 calls=1
   calls: sub_15bc5d0
   ref: ActivePlayerSubscriptionData
   ref: SubscriptionData
*/
void ActivePlayerSubscriptionData_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164df70ULL || rel >= 0x164dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164dfd0 size=80 callers=0 calls=1
   calls: sub_15bc5d0
   ref: SubscriptionData
*/
void SubscriptionData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164dfd0ULL || rel >= 0x164e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e020 size=304 callers=2 calls=4
   calls: sub_15c8aa0, sub_15c8ad0, sub_162d630, sub_1630760
*/
void sub_164e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e020ULL || rel >= 0x164e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e150 size=656 callers=1 calls=2
   calls: sub_162d6a0, sub_16307d0
*/
void sub_164e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e150ULL || rel >= 0x164e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e3e0 size=208 callers=0 calls=6
   calls: sub_15b6dc0, sub_15cf190, sub_15cf360, sub_15cf460, sub_162fa40, sub_1630750
*/
void sub_164e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e3e0ULL || rel >= 0x164e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e4b0 size=64 callers=0 calls=0
   ref: LocationData
*/
void LocationData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e4b0ULL || rel >= 0x164e4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e4f0 size=32 callers=0 calls=0
   ref: LocationData
*/
void LocationData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e4f0ULL || rel >= 0x164e510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e510 size=16 callers=0 calls=0
*/
void sub_164e510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e510ULL || rel >= 0x164e520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e520 size=16 callers=0 calls=0
*/
void sub_164e520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e520ULL || rel >= 0x164e530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e530 size=80 callers=0 calls=1
   calls: sub_15bc5d0
   ref: LocationData
*/
void LocationData_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e530ULL || rel >= 0x164e580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e580 size=112 callers=0 calls=2
   calls: sub_15ceec0, sub_162d880
*/
void sub_164e580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e580ULL || rel >= 0x164e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e5f0 size=16 callers=0 calls=0
*/
void sub_164e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e5f0ULL || rel >= 0x164e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e600 size=160 callers=0 calls=5
   calls: sub_15b6dc0, sub_15cf190, sub_15cf360, sub_162fa40, sub_1630750
*/
void sub_164e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e600ULL || rel >= 0x164e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e6a0 size=64 callers=0 calls=0
   ref: SubscriptionData
*/
void SubscriptionData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e6a0ULL || rel >= 0x164e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e6e0 size=32 callers=0 calls=0
   ref: SubscriptionData
*/
void SubscriptionData_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e6e0ULL || rel >= 0x164e700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e700 size=16 callers=0 calls=0
*/
void sub_164e700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e700ULL || rel >= 0x164e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e710 size=16 callers=0 calls=0
*/
void sub_164e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e710ULL || rel >= 0x164e720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e720 size=256 callers=0 calls=4
   calls: sub_15b8dc0, sub_1630a10, sub_6a5230, unknown_5
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_453(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e720ULL || rel >= 0x164e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e820 size=16 callers=0 calls=0
*/
void sub_164e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e820ULL || rel >= 0x164e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e830 size=16 callers=0 calls=0
*/
void sub_164e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e830ULL || rel >= 0x164e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e840 size=16 callers=0 calls=0
*/
void sub_164e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e840ULL || rel >= 0x164e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e850 size=160 callers=0 calls=3
   calls: sub_15b9390, sub_16340b0, sub_164ed80
*/
void sub_164e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e850ULL || rel >= 0x164e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e8f0 size=160 callers=0 calls=3
   calls: sub_15b9390, sub_16340b0, sub_164f2e0
*/
void sub_164e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e8f0ULL || rel >= 0x164e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164e990 size=160 callers=0 calls=3
   calls: sub_15b9390, sub_16340b0, sub_164ed80
*/
void sub_164e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164e990ULL || rel >= 0x164ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ea30 size=16 callers=0 calls=0
*/
void sub_164ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ea30ULL || rel >= 0x164ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ea40 size=160 callers=0 calls=3
   calls: sub_15b9390, sub_16340b0, sub_164f8d0
*/
void sub_164ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ea40ULL || rel >= 0x164eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164eae0 size=160 callers=0 calls=3
   calls: sub_15b9390, sub_16340b0, sub_164f8d0
*/
void sub_164eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164eae0ULL || rel >= 0x164eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164eb80 size=144 callers=0 calls=3
   calls: Result_2, sub_162efb0, sub_1630ba0
*/
void sub_164eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164eb80ULL || rel >= 0x164ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ec10 size=48 callers=0 calls=1
   calls: sub_162d880
*/
void sub_164ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ec10ULL || rel >= 0x164ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ec40 size=64 callers=0 calls=2
   calls: sub_15cf3c0, sub_1638210
*/
void sub_164ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ec40ULL || rel >= 0x164ec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ec80 size=64 callers=0 calls=2
   calls: sub_15cf3c0, sub_1638210
*/
void sub_164ec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ec80ULL || rel >= 0x164ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ecc0 size=48 callers=0 calls=1
   calls: sub_1638220
*/
void sub_164ecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ecc0ULL || rel >= 0x164ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ecf0 size=80 callers=0 calls=2
   calls: sub_15b6dc0, unknown_5
*/
void sub_164ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ecf0ULL || rel >= 0x164ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ed40 size=64 callers=0 calls=2
   calls: sub_15cf3c0, sub_1638210
*/
void sub_164ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ed40ULL || rel >= 0x164ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ed80 size=512 callers=2 calls=8
   calls: sub_15cf190, sub_15cf230, sub_15cf3c0, sub_162fa40, sub_1638210, sub_164dc90, sub_164ef80, sub_164f110
*/
void sub_164ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ed80ULL || rel >= 0x164ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ef80 size=400 callers=1 calls=2
   calls: sub_15b9340, sub_15cf230
*/
void sub_164ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ef80ULL || rel >= 0x164f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164f110 size=464 callers=1 calls=2
   calls: sub_15b9340, sub_15cf230
*/
void sub_164f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164f110ULL || rel >= 0x164f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164f2e0 size=544 callers=1 calls=8
   calls: sub_15cf190, sub_15cf230, sub_15cf3c0, sub_162fa40, sub_1638210, sub_164db50, sub_164f500, sub_164f6b0
*/
void sub_164f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164f2e0ULL || rel >= 0x164f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164f500 size=432 callers=1 calls=2
   calls: sub_15b9340, sub_15cf230
*/
void sub_164f500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164f500ULL || rel >= 0x164f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164f6b0 size=544 callers=1 calls=2
   calls: sub_15b9340, sub_15cf230
*/
void sub_164f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164f6b0ULL || rel >= 0x164f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164f8d0 size=560 callers=2 calls=9
   calls: sub_15cf190, sub_15cf230, sub_15cf3c0, sub_15cf460, sub_162fa40, sub_1638210, sub_164e150, sub_164fb00, sub_164fcb0
*/
void sub_164f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164f8d0ULL || rel >= 0x164fb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164fb00 size=432 callers=1 calls=2
   calls: sub_15b9340, sub_15cf230
*/
void sub_164fb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164fb00ULL || rel >= 0x164fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164fcb0 size=528 callers=1 calls=2
   calls: sub_15b9340, sub_15cf230
*/
void sub_164fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164fcb0ULL || rel >= 0x164fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164fec0 size=128 callers=0 calls=3
   calls: sub_15ceec0, sub_15cefa0, sub_162d880
*/
void sub_164fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164fec0ULL || rel >= 0x164ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0164ff40 size=272 callers=0 calls=3
   calls: sub_15b9340, sub_15bbf10, sub_162ce30
*/
void sub_164ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164ff40ULL || rel >= 0x1650050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650050 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1650050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650050ULL || rel >= 0x16500e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016500e0 size=32 callers=0 calls=0
*/
void sub_16500e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16500e0ULL || rel >= 0x1650100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650100 size=16 callers=0 calls=0
*/
void sub_1650100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650100ULL || rel >= 0x1650110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650110 size=16 callers=0 calls=0
*/
void sub_1650110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650110ULL || rel >= 0x1650120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650120 size=144 callers=0 calls=0
*/
void sub_1650120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650120ULL || rel >= 0x16501b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016501b0 size=208 callers=0 calls=3
   calls: sub_15cee20, sub_15cef80, sub_162ce30
*/
void sub_16501b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16501b0ULL || rel >= 0x1650280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650280 size=80 callers=1 calls=2
   calls: InstanceTable_375, InstanceTable_457
   ref: SDK MW+Nintendo+NEX_UT-4_6_8
*/
void SDK_MW_Nintendo_NEX_UT_4_6_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650280ULL || rel >= 0x16502d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016502d0 size=64 callers=0 calls=1
   calls: sub_1638220
*/
void sub_16502d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16502d0ULL || rel >= 0x1650310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650310 size=64 callers=0 calls=2
   calls: InstanceTable_376, sub_1638220
*/
void sub_1650310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650310ULL || rel >= 0x1650350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650350 size=16 callers=0 calls=0
*/
void sub_1650350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650350ULL || rel >= 0x1650360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650360 size=16 callers=1 calls=0
*/
void sub_1650360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650360ULL || rel >= 0x1650370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650370 size=416 callers=0 calls=10
   calls: InstanceTable_357, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_454(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650370ULL || rel >= 0x1650510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650510 size=48 callers=1 calls=1
   calls: InstanceTable_455
*/
void sub_1650510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650510ULL || rel >= 0x1650540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650540 size=496 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_455(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650540ULL || rel >= 0x1650730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650730 size=48 callers=1 calls=1
   calls: InstanceTable_456
*/
void sub_1650730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650730ULL || rel >= 0x1650760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650760 size=496 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_456(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650760ULL || rel >= 0x1650950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650950 size=80 callers=1 calls=1
   calls: sub_162fef0
*/
void sub_1650950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650950ULL || rel >= 0x16509a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016509a0 size=80 callers=1 calls=1
   calls: sub_162fef0
*/
void sub_16509a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16509a0ULL || rel >= 0x16509f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016509f0 size=112 callers=0 calls=2
   calls: sub_15ceec0, sub_162d880
*/
void sub_16509f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16509f0ULL || rel >= 0x1650a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650a60 size=16 callers=0 calls=0
*/
void sub_1650a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650a60ULL || rel >= 0x1650a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650a70 size=256 callers=1 calls=4
   calls: sub_15b8dc0, sub_1630a10, sub_6a5230, unknown_5
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_457(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650a70ULL || rel >= 0x1650b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650b70 size=160 callers=0 calls=1
   calls: sub_16340b0
*/
void sub_1650b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650b70ULL || rel >= 0x1650c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650c10 size=128 callers=0 calls=3
   calls: sub_16340b0, sub_1650e70, sub_6a6020
*/
void sub_1650c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650c10ULL || rel >= 0x1650c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650c90 size=160 callers=0 calls=1
   calls: sub_16340b0
*/
void sub_1650c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650c90ULL || rel >= 0x1650d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650d30 size=144 callers=0 calls=3
   calls: Result_2, sub_162efb0, sub_1630ba0
*/
void sub_1650d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650d30ULL || rel >= 0x1650dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650dc0 size=48 callers=0 calls=1
   calls: sub_162d880
*/
void sub_1650dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650dc0ULL || rel >= 0x1650df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650df0 size=48 callers=0 calls=1
   calls: sub_1638220
*/
void sub_1650df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650df0ULL || rel >= 0x1650e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650e20 size=80 callers=0 calls=2
   calls: sub_15b6dc0, unknown_5
*/
void sub_1650e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650e20ULL || rel >= 0x1650e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01650e70 size=608 callers=1 calls=3
   calls: sub_15b9340, sub_6a54a0, sub_6a6020
*/
void sub_1650e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1650e70ULL || rel >= 0x16510d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016510d0 size=128 callers=0 calls=3
   calls: sub_15ceec0, sub_15cefa0, sub_162d880
*/
void sub_16510d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16510d0ULL || rel >= 0x1651150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651150 size=272 callers=0 calls=3
   calls: sub_15b9340, sub_15bbf10, sub_162ce30
*/
void sub_1651150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651150ULL || rel >= 0x1651260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651260 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1651260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651260ULL || rel >= 0x16512f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016512f0 size=32 callers=0 calls=0
*/
void sub_16512f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16512f0ULL || rel >= 0x1651310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651310 size=16 callers=0 calls=0
*/
void sub_1651310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651310ULL || rel >= 0x1651320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651320 size=16 callers=0 calls=0
*/
void sub_1651320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651320ULL || rel >= 0x1651330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651330 size=144 callers=0 calls=0
*/
void sub_1651330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651330ULL || rel >= 0x16513c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016513c0 size=208 callers=0 calls=3
   calls: sub_15cee20, sub_15cef80, sub_162ce30
*/
void sub_16513c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16513c0ULL || rel >= 0x1651490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651490 size=128 callers=1 calls=1
   calls: sub_1739c30
*/
void sub_1651490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651490ULL || rel >= 0x1651510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651510 size=112 callers=0 calls=0
*/
void sub_1651510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651510ULL || rel >= 0x1651580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651580 size=96 callers=1 calls=0
*/
void sub_1651580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651580ULL || rel >= 0x16515e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016515e0 size=144 callers=0 calls=1
   calls: sub_1739c60
*/
void sub_16515e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16515e0ULL || rel >= 0x1651670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651670 size=208 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1651670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651670ULL || rel >= 0x1651740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651740 size=224 callers=0 calls=3
   calls: sub_165c600, sub_165e060, sub_173d040
*/
void sub_1651740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651740ULL || rel >= 0x1651820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651820 size=48 callers=0 calls=0
*/
void sub_1651820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651820ULL || rel >= 0x1651850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651850 size=928 callers=0 calls=11
   calls: sub_1651bf0, sub_1651d00, sub_1651e20, sub_1651fa0, sub_165c600, sub_165c6b0, sub_165e060, sub_165e140, sub_173ab40, sub_173ab60, sub_173e5f0
*/
void sub_1651850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651850ULL || rel >= 0x1651bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651bf0 size=272 callers=8 calls=0
*/
void sub_1651bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651bf0ULL || rel >= 0x1651d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651d00 size=288 callers=1 calls=4
   calls: sub_1651bf0, sub_1651fa0, sub_165c600, sub_165e060
*/
void sub_1651d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651d00ULL || rel >= 0x1651e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651e20 size=384 callers=1 calls=3
   calls: sub_1651bf0, sub_1652270, sub_165e060
*/
void sub_1651e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651e20ULL || rel >= 0x1651fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01651fa0 size=336 callers=2 calls=3
   calls: sub_1651bf0, sub_1652270, sub_165e060
*/
void sub_1651fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1651fa0ULL || rel >= 0x16520f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016520f0 size=288 callers=0 calls=3
   calls: sub_165e060, sub_173d270, sub_174de50
*/
void sub_16520f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16520f0ULL || rel >= 0x1652210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652210 size=64 callers=1 calls=0
*/
void sub_1652210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652210ULL || rel >= 0x1652250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652250 size=32 callers=19 calls=0
*/
void sub_1652250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652250ULL || rel >= 0x1652270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652270 size=496 callers=2 calls=4
   calls: sub_165e060, sub_165e140, sub_173caa0, sub_173ef10
*/
void sub_1652270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652270ULL || rel >= 0x1652460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652460 size=16 callers=0 calls=0
*/
void sub_1652460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652460ULL || rel >= 0x1652470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652470 size=16 callers=0 calls=0
*/
void sub_1652470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652470ULL || rel >= 0x1652480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652480 size=16 callers=0 calls=0
*/
void sub_1652480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652480ULL || rel >= 0x1652490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652490 size=16 callers=0 calls=0
*/
void sub_1652490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652490ULL || rel >= 0x16524a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016524a0 size=16 callers=8 calls=0
*/
void sub_16524a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16524a0ULL || rel >= 0x16524b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016524b0 size=432 callers=1 calls=10
   calls: SDK_MW_Nintendo_PiaCommon_5_18_0, SDK_MW_Nintendo_Pia_5_18_0, sub_16529a0, sub_1652a90, sub_1657610, sub_1658230, sub_1659e40, sub_165dee0, sub_165e060, sub_1716580
   ref: pia common heap
*/
void pia_common_heap(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16524b0ULL || rel >= 0x1652660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652660 size=16 callers=0 calls=0
*/
void sub_1652660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652660ULL || rel >= 0x1652670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652670 size=176 callers=1 calls=11
   calls: sub_1652720, sub_1652a50, sub_1652b20, sub_1654090, sub_1657540, sub_1657630, sub_16577b0, sub_165c910, sub_165d780, sub_165dfb0, sub_1716580
*/
void sub_1652670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652670ULL || rel >= 0x1652720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652720 size=176 callers=2 calls=3
   calls: sub_1652bd0, sub_1652c30, sub_165e060
*/
void sub_1652720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652720ULL || rel >= 0x16527d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016527d0 size=240 callers=1 calls=5
   calls: sub_1652bf0, sub_1653f70, sub_1657440, sub_165e060, sub_165e140
*/
void sub_16527d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16527d0ULL || rel >= 0x16528c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016528c0 size=16 callers=5 calls=0
*/
void sub_16528c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16528c0ULL || rel >= 0x16528d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016528d0 size=32 callers=1 calls=0
*/
void sub_16528d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16528d0ULL || rel >= 0x16528f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016528f0 size=32 callers=0 calls=0
*/
void sub_16528f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16528f0ULL || rel >= 0x1652910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652910 size=16 callers=0 calls=0
*/
void sub_1652910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652910ULL || rel >= 0x1652920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652920 size=16 callers=0 calls=0
*/
void sub_1652920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652920ULL || rel >= 0x1652930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652930 size=16 callers=0 calls=0
*/
void sub_1652930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652930ULL || rel >= 0x1652940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652940 size=16 callers=15 calls=0
*/
void sub_1652940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652940ULL || rel >= 0x1652950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652950 size=48 callers=5 calls=0
*/
void sub_1652950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652950ULL || rel >= 0x1652980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652980 size=16 callers=1 calls=0
   ref: SDK MW+Nintendo+PiaCommon-5_18_0
*/
void SDK_MW_Nintendo_PiaCommon_5_18_0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652980ULL || rel >= 0x1652990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652990 size=16 callers=0 calls=0
*/
void sub_1652990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652990ULL || rel >= 0x16529a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016529a0 size=176 callers=1 calls=3
   calls: RootHeap, sub_1721350, sub_1721fc0
*/
void sub_16529a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16529a0ULL || rel >= 0x1652a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652a50 size=64 callers=1 calls=2
   calls: sub_1721360, sub_17220c0
*/
void sub_1652a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652a50ULL || rel >= 0x1652a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652a90 size=144 callers=6 calls=1
   calls: sub_1716870
*/
void sub_1652a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652a90ULL || rel >= 0x1652b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652b20 size=112 callers=6 calls=0
*/
void sub_1652b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652b20ULL || rel >= 0x1652b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652b90 size=64 callers=3 calls=0
*/
void sub_1652b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652b90ULL || rel >= 0x1652bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652bd0 size=32 callers=295 calls=0
*/
void sub_1652bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652bd0ULL || rel >= 0x1652bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652bf0 size=64 callers=6 calls=0
*/
void sub_1652bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652bf0ULL || rel >= 0x1652c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652c30 size=32 callers=6 calls=0
*/
void sub_1652c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652c30ULL || rel >= 0x1652c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652c50 size=32 callers=0 calls=0
*/
void sub_1652c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652c50ULL || rel >= 0x1652c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652c70 size=48 callers=143 calls=0
*/
void sub_1652c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652c70ULL || rel >= 0x1652ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652ca0 size=80 callers=41 calls=0
*/
void sub_1652ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652ca0ULL || rel >= 0x1652cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652cf0 size=64 callers=71 calls=0
*/
void sub_1652cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652cf0ULL || rel >= 0x1652d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652d30 size=16 callers=382 calls=0
*/
void sub_1652d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652d30ULL || rel >= 0x1652d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652d40 size=16 callers=0 calls=0
*/
void sub_1652d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652d40ULL || rel >= 0x1652d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652d50 size=64 callers=22 calls=0
*/
void sub_1652d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652d50ULL || rel >= 0x1652d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652d90 size=80 callers=2 calls=0
*/
void sub_1652d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652d90ULL || rel >= 0x1652de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652de0 size=384 callers=32 calls=2
   calls: IN_ANY_ADDR_d, sub_165e060
*/
void sub_1652de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652de0ULL || rel >= 0x1652f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652f60 size=48 callers=16 calls=0
*/
void sub_1652f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652f60ULL || rel >= 0x1652f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652f90 size=80 callers=19 calls=0
*/
void sub_1652f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652f90ULL || rel >= 0x1652fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01652fe0 size=368 callers=40 calls=1
   calls: sub_165c560
   ref: %d.%d.%d.%d:%d
   ref: IN_ANY_ADDR:%d
   ref: %04X:%04X:%04X:%04X:%04X:%04X:%04X:%04X:%d
*/
void IN_ANY_ADDR_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652fe0ULL || rel >= 0x1653150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653150 size=400 callers=8 calls=2
   calls: IN_ANY_ADDR_d, sub_165e060
*/
void sub_1653150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653150ULL || rel >= 0x16532e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016532e0 size=144 callers=5 calls=0
*/
void sub_16532e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16532e0ULL || rel >= 0x1653370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653370 size=432 callers=4 calls=1
   calls: sub_165e060
*/
void sub_1653370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653370ULL || rel >= 0x1653520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653520 size=272 callers=5 calls=1
   calls: sub_165e060
*/
void sub_1653520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653520ULL || rel >= 0x1653630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653630 size=352 callers=1 calls=4
   calls: sub_1652de0, sub_165c9b0, sub_165c9e0, sub_165e060
*/
void sub_1653630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653630ULL || rel >= 0x1653790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653790 size=208 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1653790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653790ULL || rel >= 0x1653860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653860 size=48 callers=14 calls=0
*/
void sub_1653860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653860ULL || rel >= 0x1653890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653890 size=64 callers=123 calls=0
*/
void sub_1653890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653890ULL || rel >= 0x16538d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016538d0 size=48 callers=36 calls=0
*/
void sub_16538d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16538d0ULL || rel >= 0x1653900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653900 size=48 callers=51 calls=0
*/
void sub_1653900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653900ULL || rel >= 0x1653930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653930 size=320 callers=6 calls=0
*/
void sub_1653930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653930ULL || rel >= 0x1653a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653a70 size=224 callers=3 calls=0
*/
void sub_1653a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653a70ULL || rel >= 0x1653b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653b50 size=96 callers=101 calls=0
*/
void sub_1653b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653b50ULL || rel >= 0x1653bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653bb0 size=16 callers=73 calls=0
*/
void sub_1653bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653bb0ULL || rel >= 0x1653bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653bc0 size=16 callers=0 calls=0
*/
void sub_1653bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653bc0ULL || rel >= 0x1653bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653bd0 size=64 callers=0 calls=0
*/
void sub_1653bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653bd0ULL || rel >= 0x1653c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653c10 size=480 callers=0 calls=2
   calls: sub_165c200, sub_165e060
*/
void sub_1653c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653c10ULL || rel >= 0x1653df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653df0 size=240 callers=1 calls=5
   calls: sub_1652bd0, sub_1652c70, sub_1654d90, sub_1655340, sub_1716330
*/
void sub_1653df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653df0ULL || rel >= 0x1653ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653ee0 size=144 callers=1 calls=4
   calls: sub_1652d30, sub_1655450, sub_1716390, sub_17163e0
*/
void sub_1653ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653ee0ULL || rel >= 0x1653f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01653f70 size=288 callers=1 calls=6
   calls: sub_16524a0, sub_16528c0, sub_1652bd0, sub_1653df0, sub_165e060, sub_1716330
*/
void sub_1653f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1653f70ULL || rel >= 0x1654090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654090 size=96 callers=1 calls=3
   calls: sub_1653ee0, sub_1716390, sub_17163e0
*/
void sub_1654090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654090ULL || rel >= 0x16540f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016540f0 size=16 callers=24 calls=0
*/
void sub_16540f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16540f0ULL || rel >= 0x1654100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654100 size=144 callers=2 calls=2
   calls: sub_1655030, sub_16554d0
*/
void sub_1654100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654100ULL || rel >= 0x1654190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654190 size=256 callers=1 calls=12
   calls: MonitoringDataSendJob_StepSendReport, sub_1652f60, sub_16542a0, sub_1654720, sub_1654a20, sub_1654cb0, sub_1654ce0, sub_1654cf0, sub_1654d50, sub_1654d80, sub_1655850, sub_16559c0
*/
void sub_1654190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654190ULL || rel >= 0x1654290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654290 size=16 callers=1 calls=0
*/
void sub_1654290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654290ULL || rel >= 0x16542a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016542a0 size=1152 callers=2 calls=16
   calls: f_1_2_11_f_NINTENDO_SDK_v1, sub_1655ca0, sub_16598b0, sub_1659940, sub_1659c00, sub_1659ca0, sub_1659e40, sub_165c9e0, sub_165dad0, sub_165dae0, sub_165daf0, sub_165dba0
   ... +4 more
*/
void sub_16542a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16542a0ULL || rel >= 0x1654720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654720 size=320 callers=2 calls=5
   calls: sub_1652f60, sub_1653bb0, sub_16559c0, sub_165e060, sub_165e140
*/
void sub_1654720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654720ULL || rel >= 0x1654860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654860 size=16 callers=1 calls=0
*/
void sub_1654860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654860ULL || rel >= 0x1654870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654870 size=16 callers=1 calls=0
*/
void sub_1654870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654870ULL || rel >= 0x1654880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654880 size=16 callers=1 calls=0
*/
void sub_1654880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654880ULL || rel >= 0x1654890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654890 size=16 callers=1 calls=0
*/
void sub_1654890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654890ULL || rel >= 0x16548a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016548a0 size=16 callers=0 calls=0
*/
void sub_16548a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16548a0ULL || rel >= 0x16548b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016548b0 size=16 callers=3 calls=0
*/
void sub_16548b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16548b0ULL || rel >= 0x16548c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016548c0 size=352 callers=2 calls=9
   calls: sub_1652d50, sub_1652d90, sub_1652de0, sub_1652f60, sub_1652f90, sub_1653150, sub_1653a70, sub_171e0e0, sub_171e1e0
*/
void sub_16548c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16548c0ULL || rel >= 0x1654a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654a20 size=96 callers=1 calls=0
*/
void sub_1654a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654a20ULL || rel >= 0x1654a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654a80 size=560 callers=1 calls=1
   calls: sub_165c630
*/
void sub_1654a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654a80ULL || rel >= 0x1654cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654cb0 size=48 callers=1 calls=0
*/
void sub_1654cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654cb0ULL || rel >= 0x1654ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654ce0 size=16 callers=1 calls=0
*/
void sub_1654ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654ce0ULL || rel >= 0x1654cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654cf0 size=96 callers=1 calls=0
*/
void sub_1654cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654cf0ULL || rel >= 0x1654d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654d50 size=48 callers=2 calls=0
*/
void sub_1654d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654d50ULL || rel >= 0x1654d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654d80 size=16 callers=1 calls=0
*/
void sub_1654d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654d80ULL || rel >= 0x1654d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654d90 size=64 callers=1 calls=2
   calls: sub_1655080, sub_165ba50
*/
void sub_1654d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654d90ULL || rel >= 0x1654dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654dd0 size=64 callers=0 calls=1
   calls: sub_1655170
*/
void sub_1654dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654dd0ULL || rel >= 0x1654e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654e10 size=64 callers=0 calls=2
   calls: sub_1655170, sub_165baa0
*/
void sub_1654e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654e10ULL || rel >= 0x1654e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654e50 size=208 callers=1 calls=3
   calls: sub_1655190, sub_165baf0, sub_165e060
   ref: MonitoringDataSendJob::StepSendReport
*/
void MonitoringDataSendJob_StepSendReport(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654e50ULL || rel >= 0x1654f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01654f20 size=272 callers=0 calls=8
   calls: sub_1652f60, sub_1654290, sub_1654720, sub_1654860, sub_1654870, sub_16551b0, sub_1655220, sub_165e060
*/
void sub_1654f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1654f20ULL || rel >= 0x1655030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655030 size=64 callers=1 calls=2
   calls: sub_1655110, sub_1655290
*/
void sub_1655030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655030ULL || rel >= 0x1655070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655070 size=16 callers=0 calls=0
*/
void sub_1655070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655070ULL || rel >= 0x1655080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655080 size=144 callers=48 calls=1
   calls: sub_165e140
*/
void sub_1655080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655080ULL || rel >= 0x1655110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655110 size=96 callers=121 calls=1
   calls: sub_165e140
*/
void sub_1655110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655110ULL || rel >= 0x1655170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655170 size=16 callers=76 calls=0
*/
void sub_1655170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655170ULL || rel >= 0x1655180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655180 size=16 callers=5 calls=0
*/
void sub_1655180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655180ULL || rel >= 0x1655190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655190 size=32 callers=99 calls=0
*/
void sub_1655190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655190ULL || rel >= 0x16551b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016551b0 size=112 callers=120 calls=2
   calls: sub_165e060, sub_165e140
*/
void sub_16551b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16551b0ULL || rel >= 0x1655220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655220 size=112 callers=278 calls=2
   calls: sub_165e060, sub_165e140
*/
void sub_1655220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655220ULL || rel >= 0x1655290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655290 size=160 callers=147 calls=2
   calls: sub_165e060, sub_165e140
*/
void sub_1655290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655290ULL || rel >= 0x1655330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655330 size=16 callers=48 calls=0
*/
void sub_1655330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655330ULL || rel >= 0x1655340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655340 size=208 callers=1 calls=2
   calls: sub_1655080, sub_165ba50
*/
void sub_1655340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655340ULL || rel >= 0x1655410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655410 size=64 callers=0 calls=0
*/
void sub_1655410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655410ULL || rel >= 0x1655450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655450 size=64 callers=1 calls=1
   calls: sub_1655170
*/
void sub_1655450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655450ULL || rel >= 0x1655490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655490 size=64 callers=0 calls=2
   calls: sub_1655170, sub_165baa0
*/
void sub_1655490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655490ULL || rel >= 0x16554d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016554d0 size=160 callers=1 calls=2
   calls: sub_1655110, sub_165bba0
*/
void sub_16554d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16554d0ULL || rel >= 0x1655570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655570 size=16 callers=0 calls=0
*/
void sub_1655570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655570ULL || rel >= 0x1655580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655580 size=480 callers=0 calls=2
   calls: sub_165c200, sub_165e060
*/
void sub_1655580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655580ULL || rel >= 0x1655760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655760 size=48 callers=2 calls=0
*/
void sub_1655760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655760ULL || rel >= 0x1655790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655790 size=64 callers=2 calls=0
*/
void sub_1655790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655790ULL || rel >= 0x16557d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016557d0 size=16 callers=0 calls=0
*/
void sub_16557d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16557d0ULL || rel >= 0x16557e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016557e0 size=112 callers=1 calls=2
   calls: sub_1655c80, sub_1657ba0
*/
void sub_16557e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16557e0ULL || rel >= 0x1655850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655850 size=128 callers=60 calls=3
   calls: sub_1655c80, sub_1657b10, sub_165c600
*/
void sub_1655850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655850ULL || rel >= 0x16558d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016558d0 size=128 callers=1 calls=3
   calls: sub_1655c80, sub_1657b10, sub_165c600
*/
void sub_16558d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16558d0ULL || rel >= 0x1655950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655950 size=112 callers=31 calls=2
   calls: sub_1655c80, sub_1655c90
*/
void sub_1655950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655950ULL || rel >= 0x16559c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016559c0 size=96 callers=117 calls=2
   calls: sub_1655c80, sub_1655c90
*/
void sub_16559c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16559c0ULL || rel >= 0x1655a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655a20 size=96 callers=3 calls=2
   calls: sub_1655c80, sub_1655c90
*/
void sub_1655a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655a20ULL || rel >= 0x1655a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655a80 size=96 callers=18 calls=2
   calls: sub_1655c80, sub_1655c90
*/
void sub_1655a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655a80ULL || rel >= 0x1655ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655ae0 size=384 callers=2 calls=6
   calls: sub_1655c80, sub_1655c90, sub_1657b10, sub_1657b80, sub_165c600, sub_165c6b0
*/
void sub_1655ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655ae0ULL || rel >= 0x1655c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655c60 size=16 callers=13 calls=0
*/
void sub_1655c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655c60ULL || rel >= 0x1655c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655c70 size=16 callers=11 calls=0
*/
void sub_1655c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655c70ULL || rel >= 0x1655c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655c80 size=16 callers=59 calls=0
*/
void sub_1655c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655c80ULL || rel >= 0x1655c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655c90 size=16 callers=54 calls=0
*/
void sub_1655c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655c90ULL || rel >= 0x1655ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655ca0 size=512 callers=5 calls=8
   calls: sub_16560f0, sub_1656100, sub_16565b0, sub_1656a70, sub_1656c70, sub_1656e10, sub_1656e20, sub_165e060
*/
void sub_1655ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655ca0ULL || rel >= 0x1655ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01655ea0 size=544 callers=3 calls=8
   calls: sub_16560f0, sub_1656100, sub_1656810, sub_1656a70, sub_1656c70, sub_1656e10, sub_1656e20, sub_165e060
*/
void sub_1655ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655ea0ULL || rel >= 0x16560c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016560c0 size=16 callers=3 calls=0
*/
void sub_16560c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16560c0ULL || rel >= 0x16560d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016560d0 size=32 callers=0 calls=0
*/
void sub_16560d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16560d0ULL || rel >= 0x16560f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016560f0 size=16 callers=4 calls=0
*/
void sub_16560f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16560f0ULL || rel >= 0x1656100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01656100 size=1200 callers=2 calls=0
*/
void sub_1656100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1656100ULL || rel >= 0x16565b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016565b0 size=608 callers=1 calls=0
*/
void sub_16565b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16565b0ULL || rel >= 0x1656810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01656810 size=608 callers=1 calls=0
*/
void sub_1656810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1656810ULL || rel >= 0x1656a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01656a70 size=80 callers=2 calls=1
   calls: sub_1656ac0
*/
void sub_1656a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1656a70ULL || rel >= 0x1656ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01656ac0 size=432 callers=1 calls=0
*/
void sub_1656ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1656ac0ULL || rel >= 0x1656c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01656c70 size=416 callers=2 calls=0
*/
void sub_1656c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1656c70ULL || rel >= 0x1656e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01656e10 size=16 callers=6 calls=0
*/
void sub_1656e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1656e10ULL || rel >= 0x1656e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01656e20 size=512 callers=4 calls=1
   calls: sub_1657020
*/
void sub_1656e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1656e20ULL || rel >= 0x1657020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657020 size=448 callers=8 calls=0
*/
void sub_1657020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657020ULL || rel >= 0x16571e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016571e0 size=528 callers=2 calls=0
*/
void sub_16571e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16571e0ULL || rel >= 0x16573f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016573f0 size=16 callers=0 calls=0
*/
void sub_16573f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16573f0ULL || rel >= 0x1657400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657400 size=48 callers=6 calls=0
*/
void sub_1657400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657400ULL || rel >= 0x1657430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657430 size=16 callers=3 calls=0
*/
void sub_1657430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657430ULL || rel >= 0x1657440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657440 size=256 callers=1 calls=5
   calls: sub_16524a0, sub_16528c0, sub_1652bd0, sub_165e060, sub_1716330
*/
void sub_1657440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657440ULL || rel >= 0x1657540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657540 size=80 callers=1 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_1657540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657540ULL || rel >= 0x1657590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657590 size=128 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1657590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657590ULL || rel >= 0x1657610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657610 size=32 callers=1 calls=0
*/
void sub_1657610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657610ULL || rel >= 0x1657630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657630 size=16 callers=1 calls=0
*/
void sub_1657630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657630ULL || rel >= 0x1657640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657640 size=368 callers=1 calls=6
   calls: sub_16524a0, sub_16528c0, sub_1652bd0, sub_1657830, sub_165e060, sub_1716330
*/
void sub_1657640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657640ULL || rel >= 0x16577b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016577b0 size=128 callers=2 calls=4
   calls: sub_1655c70, sub_1657ed0, sub_1716390, sub_17163e0
*/
void sub_16577b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16577b0ULL || rel >= 0x1657830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657830 size=160 callers=1 calls=5
   calls: Pia_BackgroundScheduler, sub_1652bd0, sub_1655c60, sub_16580b0, sub_17162d0
*/
void sub_1657830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657830ULL || rel >= 0x16578d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016578d0 size=576 callers=8 calls=9
   calls: sub_1654a80, sub_1655ae0, sub_1655c80, sub_1655c90, sub_16580c0, sub_16581b0, sub_16581f0, sub_165c600, sub_165c6b0
*/
void sub_16578d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16578d0ULL || rel >= 0x1657b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657b10 size=112 callers=6 calls=0
*/
void sub_1657b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657b10ULL || rel >= 0x1657b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657b80 size=32 callers=1 calls=0
*/
void sub_1657b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657b80ULL || rel >= 0x1657ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657ba0 size=192 callers=1 calls=3
   calls: sub_1655a20, sub_1655a80, sub_1658150
*/
void sub_1657ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657ba0ULL || rel >= 0x1657c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657c60 size=32 callers=1 calls=0
*/
void sub_1657c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657c60ULL || rel >= 0x1657c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657c80 size=288 callers=1 calls=6
   calls: sub_1652bd0, sub_16580b0, sub_1721090, sub_1721610, sub_1721dc0, sub_1721ea0
   ref: Pia BackgroundScheduler
*/
void Pia_BackgroundScheduler(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657c80ULL || rel >= 0x1657da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657da0 size=304 callers=0 calls=9
   calls: sub_1655ae0, sub_1655c80, sub_1655c90, sub_16581f0, sub_165c600, sub_165c6b0, sub_17216e0, sub_17216f0, sub_1721730
*/
void sub_1657da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657da0ULL || rel >= 0x1657ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657ed0 size=80 callers=1 calls=3
   calls: sub_1721660, sub_1721720, sub_1721e20
*/
void sub_1657ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657ed0ULL || rel >= 0x1657f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657f20 size=160 callers=0 calls=1
   calls: sub_1721720
*/
void sub_1657f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657f20ULL || rel >= 0x1657fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01657fc0 size=96 callers=0 calls=1
   calls: sub_1658150
*/
void sub_1657fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1657fc0ULL || rel >= 0x1658020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01658020 size=48 callers=0 calls=0
*/
void sub_1658020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1658020ULL || rel >= 0x1658050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01658050 size=80 callers=0 calls=1
   calls: sub_17162d0
*/
void sub_1658050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1658050ULL || rel >= 0x16580a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016580a0 size=16 callers=0 calls=0
*/
void sub_16580a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16580a0ULL || rel >= 0x16580b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016580b0 size=16 callers=97 calls=0
*/
void sub_16580b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16580b0ULL || rel >= 0x16580c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016580c0 size=48 callers=118 calls=0
*/
void sub_16580c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16580c0ULL || rel >= 0x16580f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016580f0 size=48 callers=114 calls=0
*/
void sub_16580f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16580f0ULL || rel >= 0x1658120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01658120 size=48 callers=47 calls=0
*/
void sub_1658120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1658120ULL || rel >= 0x1658150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01658150 size=96 callers=3 calls=0
*/
void sub_1658150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1658150ULL || rel >= 0x16581b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016581b0 size=64 callers=5 calls=0
*/
void sub_16581b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16581b0ULL || rel >= 0x16581f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016581f0 size=64 callers=40 calls=0
*/
void sub_16581f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16581f0ULL || rel >= 0x1658230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01658230 size=576 callers=4 calls=1
   calls: sub_1659730
*/
void sub_1658230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1658230ULL || rel >= 0x1658470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01658470 size=304 callers=2 calls=0
*/
void sub_1658470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1658470ULL || rel >= 0x16585a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016585a0 size=4496 callers=2 calls=7
   calls: sub_1659750, sub_16598a0, sub_165c960, sub_165c9b0, sub_165c9e0, sub_165ca00, sub_165e060
*/
void sub_16585a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16585a0ULL || rel >= 0x1659730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01659730 size=32 callers=5 calls=1
   calls: sub_16598a0
*/
void sub_1659730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1659730ULL || rel >= 0x1659750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01659750 size=336 callers=2 calls=3
   calls: sub_165c9e0, sub_165ca00, sub_165e060
*/
void sub_1659750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1659750ULL || rel >= 0x16598a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016598a0 size=16 callers=4 calls=0
*/
void sub_16598a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16598a0ULL || rel >= 0x16598b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016598b0 size=144 callers=1 calls=6
   calls: sub_1658230, sub_1659730, sub_1659bf0, sub_171e0e0, sub_171e1e0, sub_171e210
*/
void sub_16598b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16598b0ULL || rel >= 0x1659940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01659940 size=352 callers=1 calls=6
   calls: sub_16585a0, sub_1659730, sub_1659aa0, sub_1659bf0, sub_165e060, sub_165e140
*/
void sub_1659940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1659940ULL || rel >= 0x1659aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01659aa0 size=336 callers=2 calls=3
   calls: sub_165c9e0, sub_165ca00, sub_165e060
*/
void sub_1659aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1659aa0ULL || rel >= 0x1659bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01659bf0 size=16 callers=4 calls=0
*/
void sub_1659bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1659bf0ULL || rel >= 0x1659c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01659c00 size=160 callers=1 calls=8
   calls: sub_1658230, sub_1659730, sub_1659bf0, sub_1659e40, sub_165ad50, sub_171e0e0, sub_171e1e0, sub_171e210
*/
void sub_1659c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1659c00ULL || rel >= 0x1659ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01659ca0 size=416 callers=1 calls=8
   calls: sub_16585a0, sub_1659730, sub_1659aa0, sub_1659bf0, sub_165a070, sub_165ad50, sub_165e060, sub_165e140
*/
void sub_1659ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1659ca0ULL || rel >= 0x1659e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01659e40 size=80 callers=4 calls=1
   calls: sub_165ad50
*/
void sub_1659e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1659e40ULL || rel >= 0x1659e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01659e90 size=480 callers=2 calls=0
*/
void sub_1659e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1659e90ULL || rel >= 0x165a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165a070 size=3296 callers=1 calls=7
   calls: sub_1659750, sub_16598a0, sub_165c960, sub_165c9b0, sub_165c9e0, sub_165ca00, sub_165e060
*/
void sub_165a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165a070ULL || rel >= 0x165ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ad50 size=32 callers=3 calls=1
   calls: sub_16598a0
*/
void sub_165ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ad50ULL || rel >= 0x165ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ad70 size=160 callers=1 calls=1
   calls: sub_165e060
*/
void sub_165ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ad70ULL || rel >= 0x165ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ae10 size=160 callers=1 calls=1
   calls: sub_165e060
*/
void sub_165ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ae10ULL || rel >= 0x165aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165aeb0 size=176 callers=4 calls=1
   calls: sub_165e060
*/
void sub_165aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165aeb0ULL || rel >= 0x165af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165af60 size=32 callers=6 calls=0
*/
void sub_165af60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165af60ULL || rel >= 0x165af80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165af80 size=16 callers=6 calls=0
*/
void sub_165af80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165af80ULL || rel >= 0x165af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165af90 size=176 callers=10 calls=1
   calls: sub_165e060
*/
void sub_165af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165af90ULL || rel >= 0x165b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165b040 size=176 callers=14 calls=1
   calls: sub_165e060
*/
void sub_165b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b040ULL || rel >= 0x165b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165b0f0 size=352 callers=14 calls=9
   calls: sub_1652f60, sub_165aeb0, sub_165b250, sub_165b300, sub_165b950, sub_165b960, sub_165ba30, sub_165ba40, sub_165e060
*/
void sub_165b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b0f0ULL || rel >= 0x165b250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165b250 size=176 callers=1 calls=2
   calls: sub_165aeb0, sub_165e060
*/
void sub_165b250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b250ULL || rel >= 0x165b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165b300 size=192 callers=1 calls=2
   calls: sub_165aeb0, sub_165e060
*/
void sub_165b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b300ULL || rel >= 0x165b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165b3c0 size=192 callers=4 calls=2
   calls: sub_165aeb0, sub_165e060
*/
void sub_165b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b3c0ULL || rel >= 0x165b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165b480 size=16 callers=5 calls=0
*/
void sub_165b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b480ULL || rel >= 0x165b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165b490 size=352 callers=0 calls=5
   calls: sub_165ae10, sub_165b950, sub_165b9e0, sub_165ba30, sub_165e060
*/
void sub_165b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b490ULL || rel >= 0x165b5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165b5f0 size=384 callers=8 calls=6
   calls: IN_ANY_ADDR_d, sub_165ad70, sub_165b950, sub_165b960, sub_165ba30, sub_165e060
*/
void sub_165b5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b5f0ULL || rel >= 0x165b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165b770 size=272 callers=1 calls=1
   calls: sub_165e060
*/
void sub_165b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b770ULL || rel >= 0x165b880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165b880 size=208 callers=3 calls=2
   calls: sub_1652d50, sub_1652f60
*/
void sub_165b880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b880ULL || rel >= 0x165b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165b950 size=16 callers=4 calls=0
*/
void sub_165b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b950ULL || rel >= 0x165b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165b960 size=128 callers=3 calls=1
   calls: sub_1652de0
*/
void sub_165b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b960ULL || rel >= 0x165b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165b9e0 size=80 callers=1 calls=1
   calls: sub_1652d50
*/
void sub_165b9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b9e0ULL || rel >= 0x165ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ba30 size=16 callers=4 calls=0
*/
void sub_165ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ba30ULL || rel >= 0x165ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ba40 size=16 callers=1 calls=0
*/
void sub_165ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ba40ULL || rel >= 0x165ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ba50 size=80 callers=52 calls=1
   calls: sub_1655760
*/
void sub_165ba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ba50ULL || rel >= 0x165baa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165baa0 size=16 callers=33 calls=0
*/
void sub_165baa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165baa0ULL || rel >= 0x165bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165bab0 size=16 callers=0 calls=0
*/
void sub_165bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165bab0ULL || rel >= 0x165bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165bac0 size=48 callers=0 calls=1
   calls: sub_1655790
*/
void sub_165bac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165bac0ULL || rel >= 0x165baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165baf0 size=48 callers=3 calls=1
   calls: sub_16557e0
*/
void sub_165baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165baf0ULL || rel >= 0x165bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165bb20 size=128 callers=0 calls=0
*/
void sub_165bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165bb20ULL || rel >= 0x165bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165bba0 size=192 callers=17 calls=4
   calls: sub_1655950, sub_1655a20, sub_1655a80, sub_1721d90
*/
void sub_165bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165bba0ULL || rel >= 0x165bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165bc60 size=16 callers=0 calls=0
*/
void sub_165bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165bc60ULL || rel >= 0x165bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165bc70 size=16 callers=0 calls=0
*/
void sub_165bc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165bc70ULL || rel >= 0x165bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165bc80 size=16 callers=0 calls=0
*/
void sub_165bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165bc80ULL || rel >= 0x165bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165bc90 size=144 callers=23 calls=1
   calls: sub_165e060
*/
void sub_165bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165bc90ULL || rel >= 0x165bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165bd20 size=144 callers=2 calls=1
   calls: sub_165e060
*/
void sub_165bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165bd20ULL || rel >= 0x165bdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165bdb0 size=192 callers=0 calls=1
   calls: sub_165e060
*/
void sub_165bdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165bdb0ULL || rel >= 0x165be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165be70 size=16 callers=69 calls=0
*/
void sub_165be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165be70ULL || rel >= 0x165be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165be80 size=16 callers=12 calls=0
*/
void sub_165be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165be80ULL || rel >= 0x165be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165be90 size=16 callers=5 calls=0
*/
void sub_165be90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165be90ULL || rel >= 0x165bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165bea0 size=480 callers=50 calls=2
   calls: sub_165e060, sub_165e140
*/
void sub_165bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165bea0ULL || rel >= 0x165c080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c080 size=240 callers=34 calls=0
*/
void sub_165c080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c080ULL || rel >= 0x165c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c170 size=16 callers=0 calls=0
*/
void sub_165c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c170ULL || rel >= 0x165c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c180 size=16 callers=25 calls=0
*/
void sub_165c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c180ULL || rel >= 0x165c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c190 size=112 callers=2 calls=0
*/
void sub_165c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c190ULL || rel >= 0x165c200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c200 size=192 callers=9 calls=0
*/
void sub_165c200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c200ULL || rel >= 0x165c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c2c0 size=672 callers=1 calls=0
*/
void sub_165c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c2c0ULL || rel >= 0x165c560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c560 size=128 callers=2 calls=1
   calls: sub_165c2c0
*/
void sub_165c560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c560ULL || rel >= 0x165c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c5e0 size=16 callers=8 calls=0
*/
void sub_165c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c5e0ULL || rel >= 0x165c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c5f0 size=16 callers=0 calls=0
*/
void sub_165c5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c5f0ULL || rel >= 0x165c600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c600 size=48 callers=204 calls=0
*/
void sub_165c600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c600ULL || rel >= 0x165c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c630 size=128 callers=1 calls=0
*/
void sub_165c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c630ULL || rel >= 0x165c6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c6b0 size=128 callers=247 calls=0
*/
void sub_165c6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c6b0ULL || rel >= 0x165c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c730 size=192 callers=3 calls=0
*/
void sub_165c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c730ULL || rel >= 0x165c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c7f0 size=288 callers=1 calls=6
   calls: sub_16524a0, sub_16528c0, sub_1652bd0, sub_165c600, sub_165e060, sub_1716330
*/
void sub_165c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c7f0ULL || rel >= 0x165c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c910 size=80 callers=2 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_165c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c910ULL || rel >= 0x165c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c960 size=64 callers=55 calls=0
*/
void sub_165c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c960ULL || rel >= 0x165c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c9a0 size=16 callers=17 calls=0
*/
void sub_165c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c9a0ULL || rel >= 0x165c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c9b0 size=32 callers=249 calls=0
*/
void sub_165c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c9b0ULL || rel >= 0x165c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c9d0 size=16 callers=34 calls=0
*/
void sub_165c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c9d0ULL || rel >= 0x165c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c9e0 size=16 callers=136 calls=0
*/
void sub_165c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c9e0ULL || rel >= 0x165c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165c9f0 size=16 callers=32 calls=0
*/
void sub_165c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165c9f0ULL || rel >= 0x165ca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ca00 size=16 callers=393 calls=0
*/
void sub_165ca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ca00ULL || rel >= 0x165ca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ca10 size=16 callers=49 calls=0
*/
void sub_165ca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ca10ULL || rel >= 0x165ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ca20 size=32 callers=1 calls=0
*/
void sub_165ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ca20ULL || rel >= 0x165ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ca40 size=2528 callers=0 calls=0
*/
void sub_165ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ca40ULL || rel >= 0x165d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165d420 size=48 callers=2 calls=0
*/
void sub_165d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165d420ULL || rel >= 0x165d450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165d450 size=272 callers=6 calls=0
*/
void sub_165d450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165d450ULL || rel >= 0x165d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165d560 size=224 callers=2 calls=0
*/
void sub_165d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165d560ULL || rel >= 0x165d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165d640 size=16 callers=0 calls=0
*/
void sub_165d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165d640ULL || rel >= 0x165d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165d650 size=16 callers=0 calls=0
*/
void sub_165d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165d650ULL || rel >= 0x165d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165d660 size=288 callers=1 calls=6
   calls: sub_16524a0, sub_16528c0, sub_1652bd0, sub_165d7e0, sub_165e060, sub_1716330
*/
void sub_165d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165d660ULL || rel >= 0x165d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165d780 size=96 callers=2 calls=3
   calls: sub_165d860, sub_1716390, sub_17163e0
*/
void sub_165d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165d780ULL || rel >= 0x165d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165d7e0 size=128 callers=1 calls=1
   calls: No_name
*/
void sub_165d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165d7e0ULL || rel >= 0x165d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165d860 size=128 callers=1 calls=1
   calls: sub_165da10
*/
void sub_165d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165d860ULL || rel >= 0x165d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165d8e0 size=32 callers=32 calls=0
*/
void sub_165d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165d8e0ULL || rel >= 0x165d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165d900 size=64 callers=1 calls=0
*/
void sub_165d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165d900ULL || rel >= 0x165d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165d940 size=112 callers=11 calls=0
   ref: (No name)
*/
void No_name(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165d940ULL || rel >= 0x165d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165d9b0 size=96 callers=5 calls=0
*/
void sub_165d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165d9b0ULL || rel >= 0x165da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165da10 size=16 callers=11 calls=0
*/
void sub_165da10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165da10ULL || rel >= 0x165da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165da20 size=64 callers=24 calls=0
*/
void sub_165da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165da20ULL || rel >= 0x165da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165da60 size=80 callers=0 calls=0
*/
void sub_165da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165da60ULL || rel >= 0x165dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165dab0 size=32 callers=0 calls=0
*/
void sub_165dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165dab0ULL || rel >= 0x165dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165dad0 size=16 callers=2 calls=0
*/
void sub_165dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165dad0ULL || rel >= 0x165dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165dae0 size=16 callers=2 calls=0
*/
void sub_165dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165dae0ULL || rel >= 0x165daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165daf0 size=176 callers=2 calls=1
   calls: sub_165e060
*/
void sub_165daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165daf0ULL || rel >= 0x165dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165dba0 size=16 callers=2 calls=0
*/
void sub_165dba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165dba0ULL || rel >= 0x165dbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165dbb0 size=352 callers=2 calls=3
   calls: sub_165e060, sub_58bf50, sub_58d910
   ref: 1.2.11.f-NINTENDO-SDK-v1
*/
void f_1_2_11_f_NINTENDO_SDK_v1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165dbb0ULL || rel >= 0x165dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165dd10 size=48 callers=3 calls=1
   calls: sub_58c1e0
*/
void sub_165dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165dd10ULL || rel >= 0x165dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165dd40 size=208 callers=2 calls=2
   calls: sub_165e060, sub_58c460
*/
void sub_165dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165dd40ULL || rel >= 0x165de10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165de10 size=192 callers=2 calls=2
   calls: sub_165e060, sub_58c460
*/
void sub_165de10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165de10ULL || rel >= 0x165ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ded0 size=16 callers=1 calls=0
   ref: SDK MW+Nintendo+Pia-5_18_0
*/
void SDK_MW_Nintendo_Pia_5_18_0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ded0ULL || rel >= 0x165dee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165dee0 size=208 callers=6 calls=1
   calls: sub_165e060
*/
void sub_165dee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165dee0ULL || rel >= 0x165dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165dfb0 size=176 callers=6 calls=1
   calls: sub_165e060
*/
void sub_165dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165dfb0ULL || rel >= 0x165e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165e060 size=224 callers=2319 calls=0
*/
void sub_165e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165e060ULL || rel >= 0x165e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165e140 size=208 callers=897 calls=0
*/
void sub_165e140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165e140ULL || rel >= 0x165e210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165e210 size=368 callers=1 calls=2
   calls: sub_165e060, sub_165e380
*/
void sub_165e210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165e210ULL || rel >= 0x165e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165e380 size=6032 callers=1 calls=0
*/
void sub_165e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165e380ULL || rel >= 0x165fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165fb10 size=32 callers=33 calls=0
*/
void sub_165fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165fb10ULL || rel >= 0x165fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165fb30 size=32 callers=66 calls=0
*/
void sub_165fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165fb30ULL || rel >= 0x165fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165fb50 size=32 callers=19 calls=0
*/
void sub_165fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165fb50ULL || rel >= 0x165fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165fb70 size=16 callers=18 calls=0
*/
void sub_165fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165fb70ULL || rel >= 0x165fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165fb80 size=240 callers=0 calls=3
   calls: sub_16532e0, sub_1653370, sub_165e060
*/
void sub_165fb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165fb80ULL || rel >= 0x165fc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165fc70 size=176 callers=0 calls=2
   calls: sub_1653520, sub_165e060
*/
void sub_165fc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165fc70ULL || rel >= 0x165fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165fd20 size=16 callers=0 calls=0
*/
void sub_165fd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165fd20ULL || rel >= 0x165fd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165fd30 size=16 callers=7 calls=0
*/
void sub_165fd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165fd30ULL || rel >= 0x165fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165fd40 size=16 callers=11 calls=0
*/
void sub_165fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165fd40ULL || rel >= 0x165fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165fd50 size=64 callers=38 calls=1
   calls: sub_1652cf0
*/
void sub_165fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165fd50ULL || rel >= 0x165fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165fd90 size=96 callers=38 calls=2
   calls: sub_1652cf0, sub_165e060
*/
void sub_165fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165fd90ULL || rel >= 0x165fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165fdf0 size=176 callers=1 calls=3
   calls: IN_ANY_ADDR_d, sub_165be90, sub_165c560
*/
void sub_165fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165fdf0ULL || rel >= 0x165fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165fea0 size=16 callers=4 calls=0
*/
void sub_165fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165fea0ULL || rel >= 0x165feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165feb0 size=32 callers=0 calls=0
*/
void sub_165feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165feb0ULL || rel >= 0x165fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165fed0 size=64 callers=0 calls=1
   calls: sub_1652d30
*/
void sub_165fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165fed0ULL || rel >= 0x165ff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ff10 size=32 callers=6 calls=0
*/
void sub_165ff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ff10ULL || rel >= 0x165ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ff30 size=32 callers=14 calls=0
*/
void sub_165ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ff30ULL || rel >= 0x165ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ff50 size=32 callers=0 calls=0
*/
void sub_165ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ff50ULL || rel >= 0x165ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ff70 size=96 callers=6 calls=1
   calls: sub_165e060
*/
void sub_165ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ff70ULL || rel >= 0x165ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ffd0 size=16 callers=6 calls=0
*/
void sub_165ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ffd0ULL || rel >= 0x165ffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0165ffe0 size=96 callers=6 calls=1
   calls: sub_165e060
*/
void sub_165ffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165ffe0ULL || rel >= 0x1660040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660040 size=48 callers=1 calls=1
   calls: sub_1660070
*/
void sub_1660040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660040ULL || rel >= 0x1660070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660070 size=384 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1660070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660070ULL || rel >= 0x16601f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016601f0 size=48 callers=1 calls=1
   calls: sub_1660220
*/
void sub_16601f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16601f0ULL || rel >= 0x1660220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660220 size=352 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1660220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660220ULL || rel >= 0x1660380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660380 size=16 callers=2 calls=0
*/
void sub_1660380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660380ULL || rel >= 0x1660390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660390 size=176 callers=4 calls=2
   calls: sub_165fb30, sub_165fb70
*/
void sub_1660390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660390ULL || rel >= 0x1660440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660440 size=128 callers=5 calls=1
   calls: sub_165fb70
*/
void sub_1660440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660440ULL || rel >= 0x16604c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016604c0 size=64 callers=4 calls=1
   calls: sub_1652d30
*/
void sub_16604c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16604c0ULL || rel >= 0x1660500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660500 size=64 callers=4 calls=0
*/
void sub_1660500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660500ULL || rel >= 0x1660540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660540 size=48 callers=2 calls=0
*/
void sub_1660540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660540ULL || rel >= 0x1660570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660570 size=240 callers=4 calls=1
   calls: sub_165fd50
*/
void sub_1660570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660570ULL || rel >= 0x1660660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660660 size=432 callers=1 calls=3
   calls: sub_1655ca0, sub_16560c0, sub_165e060
*/
void sub_1660660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660660ULL || rel >= 0x1660810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660810 size=352 callers=1 calls=3
   calls: sub_1655ea0, sub_16560c0, sub_165e060
*/
void sub_1660810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660810ULL || rel >= 0x1660970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660970 size=16 callers=6 calls=0
*/
void sub_1660970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660970ULL || rel >= 0x1660980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660980 size=32 callers=1 calls=1
   calls: sub_171b080
*/
void sub_1660980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660980ULL || rel >= 0x16609a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016609a0 size=16 callers=0 calls=0
*/
void sub_16609a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16609a0ULL || rel >= 0x16609b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016609b0 size=16 callers=0 calls=0
*/
void sub_16609b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16609b0ULL || rel >= 0x16609c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016609c0 size=16 callers=0 calls=0
*/
void sub_16609c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16609c0ULL || rel >= 0x16609d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016609d0 size=96 callers=1 calls=2
   calls: sub_171e0e0, sub_171e210
*/
void sub_16609d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16609d0ULL || rel >= 0x1660a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660a30 size=16 callers=2 calls=0
*/
void sub_1660a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660a30ULL || rel >= 0x1660a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660a40 size=16 callers=2 calls=0
*/
void sub_1660a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660a40ULL || rel >= 0x1660a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660a50 size=608 callers=31 calls=7
   calls: sub_1655ca0, sub_165c960, sub_165c9b0, sub_165c9d0, sub_171e0e0, sub_171e190, sub_171e1e0
*/
void sub_1660a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660a50ULL || rel >= 0x1660cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660cb0 size=16 callers=7 calls=0
*/
void sub_1660cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660cb0ULL || rel >= 0x1660cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660cc0 size=576 callers=7 calls=0
*/
void sub_1660cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660cc0ULL || rel >= 0x1660f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01660f00 size=256 callers=7 calls=0
*/
void sub_1660f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1660f00ULL || rel >= 0x1661000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661000 size=96 callers=0 calls=0
*/
void sub_1661000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661000ULL || rel >= 0x1661060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661060 size=16 callers=0 calls=0
*/
void sub_1661060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661060ULL || rel >= 0x1661070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661070 size=144 callers=0 calls=1
   calls: sub_1661360
*/
void sub_1661070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661070ULL || rel >= 0x1661100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661100 size=576 callers=0 calls=0
*/
void sub_1661100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661100ULL || rel >= 0x1661340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661340 size=16 callers=0 calls=0
*/
void sub_1661340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661340ULL || rel >= 0x1661350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661350 size=16 callers=0 calls=0
*/
void sub_1661350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661350ULL || rel >= 0x1661360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661360 size=128 callers=1 calls=0
*/
void sub_1661360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661360ULL || rel >= 0x16613e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016613e0 size=192 callers=0 calls=0
*/
void sub_16613e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16613e0ULL || rel >= 0x16614a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016614a0 size=80 callers=0 calls=0
*/
void sub_16614a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16614a0ULL || rel >= 0x16614f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016614f0 size=32 callers=0 calls=0
*/
void sub_16614f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16614f0ULL || rel >= 0x1661510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661510 size=16 callers=1 calls=0
*/
void sub_1661510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661510ULL || rel >= 0x1661520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661520 size=16 callers=1 calls=0
*/
void sub_1661520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661520ULL || rel >= 0x1661530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661530 size=176 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1661530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661530ULL || rel >= 0x16615e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016615e0 size=16 callers=1 calls=0
*/
void sub_16615e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16615e0ULL || rel >= 0x16615f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016615f0 size=224 callers=1 calls=2
   calls: sub_165e060, sub_5918f0
   ref: 1.2.11.f-NINTENDO-SDK-v1
*/
void f_1_2_11_f_NINTENDO_SDK_v1_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16615f0ULL || rel >= 0x16616d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016616d0 size=48 callers=1 calls=1
   calls: sub_593530
*/
void sub_16616d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16616d0ULL || rel >= 0x1661700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661700 size=224 callers=1 calls=2
   calls: lengths_set, sub_165e060
*/
void sub_1661700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661700ULL || rel >= 0x16617e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016617e0 size=208 callers=1 calls=4
   calls: SDK_MW_Nintendo_PiaLan_5_18_0, sub_1652a90, sub_165dee0, sub_165e060
   ref: pia lan heap
*/
void pia_lan_heap(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16617e0ULL || rel >= 0x16618b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016618b0 size=80 callers=0 calls=2
   calls: sub_1652b20, sub_165dfb0
*/
void sub_16618b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16618b0ULL || rel >= 0x1661900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661900 size=176 callers=1 calls=2
   calls: sub_1652bf0, sub_165e060
*/
void sub_1661900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661900ULL || rel >= 0x16619b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016619b0 size=16 callers=1 calls=0
*/
void sub_16619b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16619b0ULL || rel >= 0x16619c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016619c0 size=176 callers=1 calls=3
   calls: sub_1652b90, sub_1652c30, sub_165e060
*/
void sub_16619c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16619c0ULL || rel >= 0x1661a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661a70 size=16 callers=1 calls=0
*/
void sub_1661a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661a70ULL || rel >= 0x1661a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661a80 size=16 callers=1 calls=0
   ref: SDK MW+Nintendo+PiaLan-5_18_0
*/
void SDK_MW_Nintendo_PiaLan_5_18_0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661a80ULL || rel >= 0x1661a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661a90 size=96 callers=4 calls=1
   calls: sub_17232f0
*/
void sub_1661a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661a90ULL || rel >= 0x1661af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661af0 size=16 callers=5 calls=0
*/
void sub_1661af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661af0ULL || rel >= 0x1661b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661b00 size=48 callers=0 calls=1
   calls: sub_1723320
*/
void sub_1661b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661b00ULL || rel >= 0x1661b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661b30 size=112 callers=1 calls=1
   calls: sub_17233a0
*/
void sub_1661b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661b30ULL || rel >= 0x1661ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661ba0 size=80 callers=2 calls=1
   calls: sub_17233d0
*/
void sub_1661ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661ba0ULL || rel >= 0x1661bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661bf0 size=160 callers=2 calls=1
   calls: sub_165e060
*/
void sub_1661bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661bf0ULL || rel >= 0x1661c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661c90 size=192 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1661c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661c90ULL || rel >= 0x1661d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661d50 size=16 callers=0 calls=0
*/
void sub_1661d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661d50ULL || rel >= 0x1661d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01661d60 size=16 callers=0 calls=0
*/
void sub_1661d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1661d60ULL || rel >= 0x1661d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

