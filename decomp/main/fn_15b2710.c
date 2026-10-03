/* main functions 015b2710..015c8390 (185 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 015b2710 size=48 callers=4 calls=1
   calls: InstanceTable_192
*/
void sub_15b2710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b2710ULL || rel >= 0x15b2740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b2740 size=496 callers=1 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_192(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b2740ULL || rel >= 0x15b2930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b2930 size=480 callers=1 calls=4
   calls: sub_15bab00, sub_15bc1e0, sub_15bc310, sub_15bc5d0
   ref: DynamicGathering
*/
void DynamicGathering_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b2930ULL || rel >= 0x15b2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b2b10 size=224 callers=0 calls=8
   calls: sub_15bb6c0, sub_15bc310, sub_15bc5d0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_15de370, sub_162cec0
   ref: Community
   ref: PersistentGathering
*/
void PersistentGathering_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b2b10ULL || rel >= 0x15b2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b2bf0 size=464 callers=0 calls=12
   calls: DynamicGathering_2, sub_15bb6c0, sub_15bc310, sub_15bc5d0, sub_15c3ee0, sub_15c7dc0, sub_15c7dd0, sub_15c8140, sub_15de230, sub_15de2d0, sub_15de370, sub_162d000
   ref: Community
   ref: PersistentGathering
*/
void PersistentGathering_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b2bf0ULL || rel >= 0x15b2dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b2dc0 size=352 callers=4 calls=3
   calls: sub_15c8aa0, sub_15c8ad0, sub_162cec0
*/
void sub_15b2dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b2dc0ULL || rel >= 0x15b2f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b2f20 size=864 callers=4 calls=1
   calls: sub_162d000
*/
void sub_15b2f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b2f20ULL || rel >= 0x15b3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3280 size=304 callers=0 calls=5
   calls: sub_15b6dc0, sub_15bb6c0, sub_15bc1e0, sub_15c7dc0, sub_15c7dd0
   ref: DynamicGathering
*/
void DynamicGathering_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3280ULL || rel >= 0x15b33b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b33b0 size=64 callers=0 calls=0
   ref: DynamicGathering
*/
void DynamicGathering_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b33b0ULL || rel >= 0x15b33f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b33f0 size=32 callers=0 calls=0
   ref: DynamicGathering
*/
void DynamicGathering_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b33f0ULL || rel >= 0x15b3410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3410 size=80 callers=0 calls=1
   calls: sub_15bc5d0
   ref: Gathering
   ref: DynamicGathering
*/
void DynamicGathering_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3410ULL || rel >= 0x15b3460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3460 size=32 callers=0 calls=0
   ref: Gathering
*/
void Gathering(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3460ULL || rel >= 0x15b3480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3480 size=64 callers=0 calls=1
   calls: sub_15b2dc0
*/
void sub_15b3480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3480ULL || rel >= 0x15b34c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b34c0 size=80 callers=0 calls=1
   calls: sub_15b2f20
*/
void sub_15b34c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b34c0ULL || rel >= 0x15b3510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3510 size=160 callers=0 calls=2
   calls: sub_15b6dc0, sub_15bb6c0
*/
void sub_15b3510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3510ULL || rel >= 0x15b35b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b35b0 size=64 callers=0 calls=0
   ref: GameSession
*/
void GameSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b35b0ULL || rel >= 0x15b35f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b35f0 size=32 callers=0 calls=0
   ref: GameSession
*/
void GameSession_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b35f0ULL || rel >= 0x15b3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3610 size=80 callers=0 calls=1
   calls: sub_15bc5d0
   ref: Gathering
   ref: GameSession
*/
void GameSession_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3610ULL || rel >= 0x15b3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3660 size=144 callers=0 calls=2
   calls: sub_15b2dc0, sub_15c8ad0
*/
void sub_15b3660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3660ULL || rel >= 0x15b36f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b36f0 size=208 callers=0 calls=1
   calls: sub_15b2f20
*/
void sub_15b36f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b36f0ULL || rel >= 0x15b37c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b37c0 size=112 callers=13 calls=0
*/
void sub_15b37c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b37c0ULL || rel >= 0x15b3830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3830 size=48 callers=3 calls=0
*/
void sub_15b3830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3830ULL || rel >= 0x15b3860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3860 size=80 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_15b3860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3860ULL || rel >= 0x15b38b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b38b0 size=16 callers=3 calls=0
*/
void sub_15b38b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b38b0ULL || rel >= 0x15b38c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b38c0 size=16 callers=2 calls=0
*/
void sub_15b38c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b38c0ULL || rel >= 0x15b38d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b38d0 size=16 callers=2 calls=0
*/
void sub_15b38d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b38d0ULL || rel >= 0x15b38e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b38e0 size=16 callers=0 calls=0
*/
void sub_15b38e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b38e0ULL || rel >= 0x15b38f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b38f0 size=128 callers=1 calls=1
   calls: sub_15bab00
*/
void sub_15b38f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b38f0ULL || rel >= 0x15b3970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3970 size=144 callers=0 calls=2
   calls: sub_15b6dc0, sub_15bb6c0
*/
void sub_15b3970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3970ULL || rel >= 0x15b3a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3a00 size=64 callers=0 calls=0
   ref: Gathering
*/
void Gathering_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3a00ULL || rel >= 0x15b3a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3a40 size=32 callers=0 calls=0
   ref: Gathering
*/
void Gathering_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3a40ULL || rel >= 0x15b3a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3a60 size=16 callers=0 calls=0
*/
void sub_15b3a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3a60ULL || rel >= 0x15b3a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3a70 size=16 callers=0 calls=0
*/
void sub_15b3a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3a70ULL || rel >= 0x15b3a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3a80 size=352 callers=1 calls=6
   calls: sub_15b9340, sub_15b9390, sub_15e9650, sub_15e9870, sub_15e9a40, sub_162d5a0
*/
void sub_15b3a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3a80ULL || rel >= 0x15b3be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3be0 size=256 callers=1 calls=4
   calls: sub_15b8dc0, sub_1630a10, sub_6a5230, unknown_5
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_193(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3be0ULL || rel >= 0x15b3ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3ce0 size=64 callers=0 calls=2
   calls: sub_15c8ce0, sub_16340b0
*/
void sub_15b3ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3ce0ULL || rel >= 0x15b3d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3d20 size=208 callers=0 calls=3
   calls: sub_15b3a80, sub_15b9390, sub_16340b0
*/
void sub_15b3d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3d20ULL || rel >= 0x15b3df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3df0 size=16 callers=0 calls=0
*/
void sub_15b3df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3df0ULL || rel >= 0x15b3e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3e00 size=16 callers=0 calls=0
*/
void sub_15b3e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3e00ULL || rel >= 0x15b3e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3e10 size=144 callers=0 calls=3
   calls: Result_2, sub_162efb0, sub_1630ba0
*/
void sub_15b3e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3e10ULL || rel >= 0x15b3ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3ea0 size=256 callers=1 calls=4
   calls: sub_15b8dc0, sub_1630a10, sub_6a5230, unknown_5
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_194(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3ea0ULL || rel >= 0x15b3fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3fa0 size=64 callers=0 calls=2
   calls: sub_15c8ce0, sub_16340b0
*/
void sub_15b3fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3fa0ULL || rel >= 0x15b3fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b3fe0 size=144 callers=0 calls=3
   calls: Result_2, sub_162efb0, sub_1630ba0
*/
void sub_15b3fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3fe0ULL || rel >= 0x15b4070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4070 size=112 callers=0 calls=2
   calls: sub_15ceec0, sub_162d880
*/
void sub_15b4070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4070ULL || rel >= 0x15b40e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b40e0 size=16 callers=0 calls=0
*/
void sub_15b40e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b40e0ULL || rel >= 0x15b40f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b40f0 size=48 callers=0 calls=0
*/
void sub_15b40f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b40f0ULL || rel >= 0x15b4120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4120 size=80 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_15b4120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4120ULL || rel >= 0x15b4170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4170 size=16 callers=0 calls=0
*/
void sub_15b4170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4170ULL || rel >= 0x15b4180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4180 size=96 callers=0 calls=1
   calls: sub_15c8140
*/
void sub_15b4180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4180ULL || rel >= 0x15b41e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b41e0 size=96 callers=0 calls=2
   calls: sub_15bc310, sub_15c8140
*/
void sub_15b41e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b41e0ULL || rel >= 0x15b4240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4240 size=48 callers=4 calls=0
*/
void sub_15b4240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4240ULL || rel >= 0x15b4270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4270 size=48 callers=0 calls=1
   calls: sub_1638220
*/
void sub_15b4270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4270ULL || rel >= 0x15b42a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b42a0 size=80 callers=0 calls=2
   calls: sub_15b6dc0, unknown_5
*/
void sub_15b42a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b42a0ULL || rel >= 0x15b42f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b42f0 size=48 callers=0 calls=1
   calls: sub_1638220
*/
void sub_15b42f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b42f0ULL || rel >= 0x15b4320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4320 size=80 callers=0 calls=2
   calls: sub_15b6dc0, unknown_5
*/
void sub_15b4320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4320ULL || rel >= 0x15b4370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4370 size=48 callers=0 calls=1
   calls: sub_162d880
*/
void sub_15b4370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4370ULL || rel >= 0x15b43a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b43a0 size=112 callers=0 calls=2
   calls: sub_15bc310, sub_15c8140
*/
void sub_15b43a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b43a0ULL || rel >= 0x15b4410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4410 size=128 callers=0 calls=2
   calls: sub_15bc310, sub_15c8140
*/
void sub_15b4410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4410ULL || rel >= 0x15b4490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4490 size=48 callers=0 calls=0
*/
void sub_15b4490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4490ULL || rel >= 0x15b44c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b44c0 size=80 callers=0 calls=1
   calls: sub_15bc310
*/
void sub_15b44c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b44c0ULL || rel >= 0x15b4510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4510 size=368 callers=1 calls=4
   calls: sub_15b9340, sub_15b9390, sub_15e47e0, sub_15e9870
*/
void sub_15b4510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4510ULL || rel >= 0x15b4680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4680 size=16 callers=0 calls=0
*/
void sub_15b4680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4680ULL || rel >= 0x15b4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4690 size=128 callers=0 calls=3
   calls: sub_15ceec0, sub_15cefa0, sub_162d880
*/
void sub_15b4690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4690ULL || rel >= 0x15b4710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4710 size=272 callers=0 calls=3
   calls: sub_15b9340, sub_15bbf10, sub_162ce30
*/
void sub_15b4710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4710ULL || rel >= 0x15b4820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4820 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15b4820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4820ULL || rel >= 0x15b48b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b48b0 size=32 callers=0 calls=0
*/
void sub_15b48b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b48b0ULL || rel >= 0x15b48d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b48d0 size=16 callers=0 calls=0
*/
void sub_15b48d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b48d0ULL || rel >= 0x15b48e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b48e0 size=16 callers=0 calls=0
*/
void sub_15b48e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b48e0ULL || rel >= 0x15b48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b48f0 size=144 callers=0 calls=0
*/
void sub_15b48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b48f0ULL || rel >= 0x15b4980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4980 size=352 callers=0 calls=5
   calls: sub_15b78f0, sub_15cee20, sub_15cef80, sub_162ce30, sub_1c0
*/
void sub_15b4980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4980ULL || rel >= 0x15b4ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4ae0 size=256 callers=1 calls=7
   calls: InstanceTable_199, InstanceTable_440, sub_15b6dc0, sub_16323e0, sub_1647560, unknown_5, unknown_6
*/
void sub_15b4ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4ae0ULL || rel >= 0x15b4be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4be0 size=48 callers=0 calls=1
   calls: sub_164b390
*/
void sub_15b4be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4be0ULL || rel >= 0x15b4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4c10 size=32 callers=0 calls=0
*/
void sub_15b4c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4c10ULL || rel >= 0x15b4c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4c30 size=64 callers=1 calls=1
   calls: InstanceTable_375
*/
void sub_15b4c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4c30ULL || rel >= 0x15b4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4c70 size=96 callers=0 calls=0
*/
void sub_15b4c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4c70ULL || rel >= 0x15b4cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4cd0 size=112 callers=0 calls=1
   calls: InstanceTable_376
*/
void sub_15b4cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4cd0ULL || rel >= 0x15b4d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4d40 size=16 callers=1 calls=0
*/
void sub_15b4d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4d40ULL || rel >= 0x15b4d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4d50 size=576 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_162d520, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_195(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4d50ULL || rel >= 0x15b4f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4f90 size=16 callers=1 calls=0
*/
void sub_15b4f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4f90ULL || rel >= 0x15b4fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b4fa0 size=608 callers=0 calls=13
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15c8ca0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_196(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4fa0ULL || rel >= 0x15b5200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b5200 size=16 callers=2 calls=0
*/
void sub_15b5200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b5200ULL || rel >= 0x15b5210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b5210 size=608 callers=0 calls=12
   calls: InstanceTable_207, InstanceTable_357, Result_2, sub_15b8dc0, sub_15c8ad0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_197(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b5210ULL || rel >= 0x15b5470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b5470 size=16 callers=1 calls=0
*/
void sub_15b5470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b5470ULL || rel >= 0x15b5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b5480 size=512 callers=0 calls=10
   calls: InstanceTable_357, sub_15b8dc0, sub_15de0e0, sub_15de2d0, sub_1630a20, sub_1630a90, sub_1630ac0, sub_1630b10, sub_1630b90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_198(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b5480ULL || rel >= 0x15b5680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b5680 size=176 callers=0 calls=4
   calls: sub_15e9650, sub_15e9a40, sub_1633bd0, sub_164b390
*/
void sub_15b5680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b5680ULL || rel >= 0x15b5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b5730 size=128 callers=0 calls=0
*/
void sub_15b5730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b5730ULL || rel >= 0x15b57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b57b0 size=160 callers=0 calls=4
   calls: InstanceTable_199, sub_15b6dc0, unknown_5, unknown_6
*/
void sub_15b57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b57b0ULL || rel >= 0x15b5850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b5850 size=112 callers=0 calls=2
   calls: sub_15ceec0, sub_162d880
*/
void sub_15b5850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b5850ULL || rel >= 0x15b58c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b58c0 size=16 callers=0 calls=0
*/
void sub_15b58c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b58c0ULL || rel >= 0x15b58d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b58d0 size=256 callers=3 calls=4
   calls: sub_15b8dc0, sub_1630a10, sub_6a5230, unknown_5
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_199(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b58d0ULL || rel >= 0x15b59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b59d0 size=16 callers=0 calls=0
*/
void sub_15b59d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b59d0ULL || rel >= 0x15b59e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b59e0 size=16 callers=0 calls=0
*/
void sub_15b59e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b59e0ULL || rel >= 0x15b59f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b59f0 size=16 callers=0 calls=0
*/
void sub_15b59f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b59f0ULL || rel >= 0x15b5a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b5a00 size=800 callers=0 calls=5
   calls: sub_15b7a70, sub_15b7b20, sub_15bc310, sub_162d000, sub_16340b0
*/
void sub_15b5a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b5a00ULL || rel >= 0x15b5d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b5d20 size=480 callers=0 calls=14
   calls: Result_2, sub_15b5f00, sub_15b5ff0, sub_15b60f0, sub_15b6230, sub_15b6340, sub_15b6860, sub_15b9390, sub_15e9650, sub_15e9a40, sub_162d5a0, sub_1630a90
   ... +2 more
*/
void sub_15b5d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b5d20ULL || rel >= 0x15b5f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b5f00 size=240 callers=1 calls=6
   calls: sub_15b6860, sub_15b9390, sub_15e9650, sub_15e9a40, sub_162d5a0, sub_1630a90
*/
void sub_15b5f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b5f00ULL || rel >= 0x15b5ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b5ff0 size=256 callers=1 calls=2
   calls: sub_15c8ce0, sub_1630a90
*/
void sub_15b5ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b5ff0ULL || rel >= 0x15b60f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b60f0 size=320 callers=1 calls=1
   calls: sub_1630a90
*/
void sub_15b60f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b60f0ULL || rel >= 0x15b6230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6230 size=272 callers=1 calls=6
   calls: sub_15b7a70, sub_15b7d40, sub_15bc310, sub_15c8ad0, sub_162cec0, sub_1630a90
*/
void sub_15b6230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6230ULL || rel >= 0x15b6340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6340 size=320 callers=1 calls=2
   calls: sub_15c8ce0, sub_1630a90
*/
void sub_15b6340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6340ULL || rel >= 0x15b6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6480 size=144 callers=0 calls=3
   calls: Result_2, sub_162efb0, sub_1630ba0
*/
void sub_15b6480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6480ULL || rel >= 0x15b6510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6510 size=96 callers=0 calls=2
   calls: sub_162ef90, sub_1638220
*/
void sub_15b6510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6510ULL || rel >= 0x15b6570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6570 size=16 callers=0 calls=0
*/
void sub_15b6570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6570ULL || rel >= 0x15b6580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6580 size=144 callers=0 calls=3
   calls: Result_2, sub_162efb0, sub_1630ba0
*/
void sub_15b6580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6580ULL || rel >= 0x15b6610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6610 size=80 callers=0 calls=1
   calls: sub_1638220
*/
void sub_15b6610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6610ULL || rel >= 0x15b6660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6660 size=96 callers=0 calls=2
   calls: sub_162ef90, sub_1638220
*/
void sub_15b6660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6660ULL || rel >= 0x15b66c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b66c0 size=16 callers=0 calls=0
*/
void sub_15b66c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b66c0ULL || rel >= 0x15b66d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b66d0 size=16 callers=0 calls=0
*/
void sub_15b66d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b66d0ULL || rel >= 0x15b66e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b66e0 size=16 callers=0 calls=0
*/
void sub_15b66e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b66e0ULL || rel >= 0x15b66f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b66f0 size=16 callers=0 calls=0
*/
void sub_15b66f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b66f0ULL || rel >= 0x15b6700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6700 size=16 callers=0 calls=0
*/
void sub_15b6700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6700ULL || rel >= 0x15b6710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6710 size=16 callers=0 calls=0
*/
void sub_15b6710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6710ULL || rel >= 0x15b6720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6720 size=48 callers=0 calls=1
   calls: sub_162d880
*/
void sub_15b6720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6720ULL || rel >= 0x15b6750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6750 size=48 callers=0 calls=1
   calls: sub_1638220
*/
void sub_15b6750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6750ULL || rel >= 0x15b6780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6780 size=80 callers=0 calls=2
   calls: sub_15b6dc0, unknown_5
*/
void sub_15b6780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6780ULL || rel >= 0x15b67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b67d0 size=48 callers=0 calls=1
   calls: sub_1638220
*/
void sub_15b67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b67d0ULL || rel >= 0x15b6800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6800 size=80 callers=0 calls=2
   calls: sub_15b6dc0, unknown_5
*/
void sub_15b6800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6800ULL || rel >= 0x15b6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6850 size=16 callers=0 calls=0
*/
void sub_15b6850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6850ULL || rel >= 0x15b6860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6860 size=416 callers=2 calls=6
   calls: sub_15b9340, sub_15b9390, sub_15e9650, sub_15e9870, sub_15e9a40, sub_162d5a0
*/
void sub_15b6860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6860ULL || rel >= 0x15b6a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6a00 size=128 callers=0 calls=3
   calls: sub_15ceec0, sub_15cefa0, sub_162d880
*/
void sub_15b6a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6a00ULL || rel >= 0x15b6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6a80 size=272 callers=0 calls=3
   calls: sub_15b9340, sub_15bbf10, sub_162ce30
*/
void sub_15b6a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6a80ULL || rel >= 0x15b6b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6b90 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15b6b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6b90ULL || rel >= 0x15b6c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6c20 size=32 callers=0 calls=0
*/
void sub_15b6c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6c20ULL || rel >= 0x15b6c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6c40 size=16 callers=0 calls=0
*/
void sub_15b6c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6c40ULL || rel >= 0x15b6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6c50 size=16 callers=0 calls=0
*/
void sub_15b6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6c50ULL || rel >= 0x15b6c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6c60 size=144 callers=0 calls=0
*/
void sub_15b6c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6c60ULL || rel >= 0x15b6cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6cf0 size=208 callers=0 calls=3
   calls: sub_15cee20, sub_15cef80, sub_162ce30
*/
void sub_15b6cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6cf0ULL || rel >= 0x15b6dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6dc0 size=80 callers=377 calls=1
   calls: sub_860
*/
void sub_15b6dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6dc0ULL || rel >= 0x15b6e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6e10 size=32 callers=24 calls=0
*/
void sub_15b6e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6e10ULL || rel >= 0x15b6e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6e30 size=160 callers=0 calls=0
*/
void sub_15b6e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6e30ULL || rel >= 0x15b6ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b6ed0 size=304 callers=3 calls=0
*/
void sub_15b6ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b6ed0ULL || rel >= 0x15b7000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7000 size=80 callers=0 calls=1
   calls: sub_15b6ed0
*/
void sub_15b7000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7000ULL || rel >= 0x15b7050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7050 size=80 callers=2 calls=0
*/
void sub_15b7050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7050ULL || rel >= 0x15b70a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b70a0 size=112 callers=1 calls=1
   calls: sub_15bc1e0
*/
void sub_15b70a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b70a0ULL || rel >= 0x15b7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7110 size=336 callers=1 calls=3
   calls: sub_15b6ed0, sub_15c0600, sub_8c0
*/
void sub_15b7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7110ULL || rel >= 0x15b7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7260 size=80 callers=0 calls=1
   calls: sub_15b7110
*/
void sub_15b7260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7260ULL || rel >= 0x15b72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b72b0 size=560 callers=2 calls=5
   calls: Outgoing, sub_15b74e0, sub_6a54a0, sub_860, sub_8c0
*/
void sub_15b72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b72b0ULL || rel >= 0x15b74e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b74e0 size=208 callers=6 calls=1
   calls: sub_15bc1e0
*/
void sub_15b74e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b74e0ULL || rel >= 0x15b75b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b75b0 size=560 callers=1 calls=3
   calls: sub_15b77e0, sub_15bc1e0, sub_8c0
   ref: /Incoming
   ref: /Outgoing
*/
void Outgoing(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b75b0ULL || rel >= 0x15b77e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b77e0 size=224 callers=4 calls=0
*/
void sub_15b77e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b77e0ULL || rel >= 0x15b78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b78c0 size=48 callers=1 calls=1
   calls: sub_6a5230
*/
void sub_15b78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b78c0ULL || rel >= 0x15b78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b78f0 size=112 callers=37 calls=0
*/
void sub_15b78f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b78f0ULL || rel >= 0x15b7960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7960 size=144 callers=2 calls=0
*/
void sub_15b7960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7960ULL || rel >= 0x15b79f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b79f0 size=16 callers=9 calls=0
*/
void sub_15b79f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b79f0ULL || rel >= 0x15b7a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7a00 size=112 callers=0 calls=0
*/
void sub_15b7a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7a00ULL || rel >= 0x15b7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7a70 size=16 callers=64 calls=0
*/
void sub_15b7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7a70ULL || rel >= 0x15b7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7a80 size=16 callers=27 calls=0
*/
void sub_15b7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7a80ULL || rel >= 0x15b7a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7a90 size=144 callers=10 calls=0
*/
void sub_15b7a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7a90ULL || rel >= 0x15b7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7b20 size=16 callers=63 calls=0
*/
void sub_15b7b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7b20ULL || rel >= 0x15b7b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7b30 size=448 callers=3 calls=0
*/
void sub_15b7b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7b30ULL || rel >= 0x15b7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7cf0 size=64 callers=3 calls=0
*/
void sub_15b7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7cf0ULL || rel >= 0x15b7d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7d30 size=16 callers=5 calls=0
*/
void sub_15b7d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7d30ULL || rel >= 0x15b7d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7d40 size=16 callers=14 calls=0
*/
void sub_15b7d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7d40ULL || rel >= 0x15b7d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7d50 size=32 callers=11 calls=0
*/
void sub_15b7d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7d50ULL || rel >= 0x15b7d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7d70 size=32 callers=1 calls=0
*/
void sub_15b7d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7d70ULL || rel >= 0x15b7d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7d90 size=512 callers=1 calls=0
*/
void sub_15b7d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7d90ULL || rel >= 0x15b7f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b7f90 size=272 callers=4 calls=0
*/
void sub_15b7f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b7f90ULL || rel >= 0x15b80a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b80a0 size=16 callers=6 calls=0
*/
void sub_15b80a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b80a0ULL || rel >= 0x15b80b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b80b0 size=16 callers=6 calls=0
*/
void sub_15b80b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b80b0ULL || rel >= 0x15b80c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b80c0 size=16 callers=6 calls=0
*/
void sub_15b80c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b80c0ULL || rel >= 0x15b80d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b80d0 size=16 callers=4 calls=0
*/
void sub_15b80d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b80d0ULL || rel >= 0x15b80e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b80e0 size=16 callers=4 calls=0
*/
void sub_15b80e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b80e0ULL || rel >= 0x15b80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b80f0 size=16 callers=3 calls=0
*/
void sub_15b80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b80f0ULL || rel >= 0x15b8100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8100 size=16 callers=6 calls=0
*/
void sub_15b8100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8100ULL || rel >= 0x15b8110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8110 size=48 callers=3 calls=0
*/
void sub_15b8110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8110ULL || rel >= 0x15b8140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8140 size=336 callers=17 calls=0
*/
void sub_15b8140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8140ULL || rel >= 0x15b8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8290 size=64 callers=1 calls=0
*/
void sub_15b8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8290ULL || rel >= 0x15b82d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b82d0 size=272 callers=46 calls=2
   calls: sub_860, sub_8c0
   ref: (null)
*/
void null_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b82d0ULL || rel >= 0x15b83e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b83e0 size=512 callers=2 calls=0
*/
void sub_15b83e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b83e0ULL || rel >= 0x15b85e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b85e0 size=448 callers=1 calls=0
*/
void sub_15b85e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b85e0ULL || rel >= 0x15b87a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b87a0 size=80 callers=1 calls=1
   calls: sub_15b87f0
*/
void sub_15b87a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b87a0ULL || rel >= 0x15b87f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b87f0 size=544 callers=3 calls=0
*/
void sub_15b87f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b87f0ULL || rel >= 0x15b8a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8a10 size=16 callers=2 calls=0
*/
void sub_15b8a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8a10ULL || rel >= 0x15b8a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8a20 size=48 callers=0 calls=1
   calls: sub_15b8a50
*/
void sub_15b8a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8a20ULL || rel >= 0x15b8a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8a50 size=672 callers=1 calls=0
*/
void sub_15b8a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8a50ULL || rel >= 0x15b8cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8cf0 size=112 callers=32 calls=1
   calls: sub_15b87f0
*/
void sub_15b8cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8cf0ULL || rel >= 0x15b8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8d60 size=96 callers=63 calls=2
   calls: sub_15bde80, sub_15be030
*/
void sub_15b8d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8d60ULL || rel >= 0x15b8dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8dc0 size=80 callers=616 calls=1
   calls: sub_15be1a0
*/
void sub_15b8dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8dc0ULL || rel >= 0x15b8e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8e10 size=32 callers=7 calls=0
*/
void sub_15b8e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8e10ULL || rel >= 0x15b8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8e30 size=144 callers=0 calls=0
*/
void sub_15b8e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8e30ULL || rel >= 0x15b8ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8ec0 size=144 callers=30 calls=1
   calls: sub_1c0
*/
void sub_15b8ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8ec0ULL || rel >= 0x15b8f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8f50 size=16 callers=1 calls=0
*/
void sub_15b8f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8f50ULL || rel >= 0x15b8f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8f60 size=16 callers=0 calls=0
*/
void sub_15b8f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8f60ULL || rel >= 0x15b8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8f70 size=32 callers=0 calls=0
*/
void sub_15b8f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8f70ULL || rel >= 0x15b8f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b8f90 size=176 callers=0 calls=0
*/
void sub_15b8f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b8f90ULL || rel >= 0x15b9040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9040 size=288 callers=0 calls=0
*/
void sub_15b9040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9040ULL || rel >= 0x15b9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9160 size=288 callers=0 calls=0
*/
void sub_15b9160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9160ULL || rel >= 0x15b9280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9280 size=16 callers=28 calls=0
*/
void sub_15b9280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9280ULL || rel >= 0x15b9290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9290 size=112 callers=0 calls=0
   ref: Output
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Platform/Core/LogDeviceConsole.cpp
*/
void Output(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9290ULL || rel >= 0x15b9300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9300 size=32 callers=53 calls=0
*/
void sub_15b9300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9300ULL || rel >= 0x15b9320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9320 size=16 callers=0 calls=0
*/
void sub_15b9320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9320ULL || rel >= 0x15b9330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9330 size=16 callers=0 calls=0
*/
void sub_15b9330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9330ULL || rel >= 0x15b9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9340 size=80 callers=474 calls=1
   calls: sub_860
*/
void sub_15b9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9340ULL || rel >= 0x15b9390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9390 size=32 callers=861 calls=0
*/
void sub_15b9390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9390ULL || rel >= 0x15b93b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b93b0 size=32 callers=0 calls=0
*/
void sub_15b93b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b93b0ULL || rel >= 0x15b93d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b93d0 size=32 callers=0 calls=0
*/
void sub_15b93d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b93d0ULL || rel >= 0x15b93f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b93f0 size=96 callers=1 calls=1
   calls: sub_15cefc0
*/
void sub_15b93f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b93f0ULL || rel >= 0x15b9450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9450 size=64 callers=1 calls=1
   calls: sub_15b9490
*/
void sub_15b9450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9450ULL || rel >= 0x15b9490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9490 size=864 callers=2 calls=5
   calls: sub_15b9860, sub_15b99c0, sub_15be1a0, sub_6a5230, sub_8c0
*/
void sub_15b9490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9490ULL || rel >= 0x15b97f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b97f0 size=112 callers=0 calls=2
   calls: InstantiationContext_3, sub_15b9490
*/
void sub_15b97f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b97f0ULL || rel >= 0x15b9860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9860 size=240 callers=2 calls=2
   calls: sub_15be1a0, sub_6a5230
*/
void sub_15b9860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9860ULL || rel >= 0x15b9950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9950 size=112 callers=1 calls=1
   calls: sub_15b9860
*/
void sub_15b9950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9950ULL || rel >= 0x15b99c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b99c0 size=608 callers=2 calls=2
   calls: sub_15c06f0, sub_8c0
*/
void sub_15b99c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b99c0ULL || rel >= 0x15b9c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9c20 size=80 callers=1 calls=0
*/
void sub_15b9c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9c20ULL || rel >= 0x15b9c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9c70 size=32 callers=3 calls=0
*/
void sub_15b9c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9c70ULL || rel >= 0x15b9c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9c90 size=112 callers=1 calls=0
*/
void sub_15b9c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9c90ULL || rel >= 0x15b9d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9d00 size=272 callers=2 calls=0
*/
void sub_15b9d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9d00ULL || rel >= 0x15b9e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9e10 size=96 callers=0 calls=1
   calls: sub_860
*/
void sub_15b9e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9e10ULL || rel >= 0x15b9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9e70 size=32 callers=0 calls=0
*/
void sub_15b9e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9e70ULL || rel >= 0x15b9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9e90 size=96 callers=0 calls=0
*/
void sub_15b9e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9e90ULL || rel >= 0x15b9ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9ef0 size=160 callers=7 calls=2
   calls: sub_15b9f90, sub_860
*/
void sub_15b9ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9ef0ULL || rel >= 0x15b9f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015b9f90 size=224 callers=11 calls=0
*/
void sub_15b9f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b9f90ULL || rel >= 0x15ba070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ba070 size=16 callers=0 calls=0
*/
void sub_15ba070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ba070ULL || rel >= 0x15ba080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ba080 size=32 callers=6 calls=0
*/
void sub_15ba080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ba080ULL || rel >= 0x15ba0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ba0a0 size=352 callers=0 calls=1
   calls: sub_15ba200
*/
void sub_15ba0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ba0a0ULL || rel >= 0x15ba200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ba200 size=368 callers=1 calls=2
   calls: sub_6a54a0, sub_860
*/
void sub_15ba200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ba200ULL || rel >= 0x15ba370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ba370 size=192 callers=7 calls=2
   calls: sub_15ba430, sub_15be1a0
*/
void sub_15ba370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ba370ULL || rel >= 0x15ba430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ba430 size=624 callers=1 calls=2
   calls: sub_860, sub_8c0
*/
void sub_15ba430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ba430ULL || rel >= 0x15ba6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ba6a0 size=224 callers=23 calls=1
   calls: sub_860
*/
void sub_15ba6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ba6a0ULL || rel >= 0x15ba780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ba780 size=32 callers=23 calls=0
*/
void sub_15ba780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ba780ULL || rel >= 0x15ba7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ba7a0 size=624 callers=10 calls=4
   calls: sub_15bde80, sub_15be030, sub_15be1a0, sub_8c0
*/
void sub_15ba7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ba7a0ULL || rel >= 0x15baa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015baa10 size=16 callers=10 calls=0
*/
void sub_15baa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15baa10ULL || rel >= 0x15baa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015baa20 size=208 callers=10 calls=2
   calls: sub_15bde80, sub_15be030
*/
void sub_15baa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15baa20ULL || rel >= 0x15baaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015baaf0 size=16 callers=7 calls=0
*/
void sub_15baaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15baaf0ULL || rel >= 0x15bab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bab00 size=64 callers=101 calls=1
   calls: sub_15bc1e0
*/
void sub_15bab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bab00ULL || rel >= 0x15bab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bab40 size=16 callers=0 calls=0
*/
void sub_15bab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bab40ULL || rel >= 0x15bab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bab50 size=96 callers=0 calls=0
*/
void sub_15bab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bab50ULL || rel >= 0x15babb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015babb0 size=16 callers=0 calls=0
*/
void sub_15babb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15babb0ULL || rel >= 0x15babc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015babc0 size=16 callers=0 calls=0
*/
void sub_15babc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15babc0ULL || rel >= 0x15babd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015babd0 size=16 callers=0 calls=0
*/
void sub_15babd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15babd0ULL || rel >= 0x15babe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015babe0 size=208 callers=0 calls=0
*/
void sub_15babe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15babe0ULL || rel >= 0x15bacb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bacb0 size=16 callers=0 calls=0
*/
void sub_15bacb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bacb0ULL || rel >= 0x15bacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bacc0 size=16 callers=14 calls=0
*/
void sub_15bacc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bacc0ULL || rel >= 0x15bacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bacd0 size=32 callers=14 calls=0
*/
void sub_15bacd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bacd0ULL || rel >= 0x15bacf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bacf0 size=16 callers=1 calls=0
*/
void sub_15bacf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bacf0ULL || rel >= 0x15bad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bad00 size=16 callers=1 calls=0
*/
void sub_15bad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bad00ULL || rel >= 0x15bad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bad10 size=336 callers=5 calls=2
   calls: sub_860, sub_8c0
   ref: %016llx
*/
void f_016llx(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bad10ULL || rel >= 0x15bae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bae60 size=80 callers=2 calls=0
*/
void sub_15bae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bae60ULL || rel >= 0x15baeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015baeb0 size=224 callers=10 calls=1
   calls: sub_15bafc0
*/
void sub_15baeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15baeb0ULL || rel >= 0x15baf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015baf90 size=48 callers=2 calls=0
*/
void sub_15baf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15baf90ULL || rel >= 0x15bafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bafc0 size=368 callers=18 calls=0
*/
void sub_15bafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bafc0ULL || rel >= 0x15bb130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb130 size=272 callers=1 calls=1
   calls: sub_15bafc0
*/
void sub_15bb130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb130ULL || rel >= 0x15bb240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb240 size=16 callers=2 calls=0
*/
void sub_15bb240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb240ULL || rel >= 0x15bb250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb250 size=160 callers=0 calls=0
*/
void sub_15bb250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb250ULL || rel >= 0x15bb2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb2f0 size=368 callers=2 calls=3
   calls: sub_15bc1e0, sub_15bde80, sub_15be030
*/
void sub_15bb2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb2f0ULL || rel >= 0x15bb460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb460 size=528 callers=3 calls=3
   calls: sub_15bde80, sub_15be030, sub_8c0
*/
void sub_15bb460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb460ULL || rel >= 0x15bb670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb670 size=80 callers=0 calls=1
   calls: sub_15bb460
*/
void sub_15bb670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb670ULL || rel >= 0x15bb6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb6c0 size=64 callers=46 calls=1
   calls: sub_15bc1e0
*/
void sub_15bb6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb6c0ULL || rel >= 0x15bb700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb700 size=192 callers=9 calls=0
*/
void sub_15bb700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb700ULL || rel >= 0x15bb7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb7c0 size=144 callers=8 calls=0
*/
void sub_15bb7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb7c0ULL || rel >= 0x15bb850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb850 size=48 callers=7 calls=0
*/
void sub_15bb850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb850ULL || rel >= 0x15bb880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb880 size=16 callers=2 calls=0
*/
void sub_15bb880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb880ULL || rel >= 0x15bb890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb890 size=112 callers=2 calls=0
*/
void sub_15bb890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb890ULL || rel >= 0x15bb900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb900 size=16 callers=2 calls=0
*/
void sub_15bb900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb900ULL || rel >= 0x15bb910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb910 size=64 callers=1 calls=1
   calls: sub_15c0f20
*/
void sub_15bb910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb910ULL || rel >= 0x15bb950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bb950 size=336 callers=1 calls=0
*/
void sub_15bb950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bb950ULL || rel >= 0x15bbaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbaa0 size=320 callers=2 calls=0
*/
void sub_15bbaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbaa0ULL || rel >= 0x15bbbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbbe0 size=48 callers=17 calls=0
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Platform/Core/Result.cpp
*/
void Result(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbbe0ULL || rel >= 0x15bbc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbc10 size=32 callers=475 calls=0
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Platform/Core/Result.cpp
*/
void Result_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbc10ULL || rel >= 0x15bbc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbc30 size=64 callers=45 calls=0
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Platform/Core/Result.cpp
*/
void Result_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbc30ULL || rel >= 0x15bbc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbc70 size=32 callers=42 calls=0
*/
void sub_15bbc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbc70ULL || rel >= 0x15bbc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbc90 size=32 callers=13 calls=0
*/
void sub_15bbc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbc90ULL || rel >= 0x15bbcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbcb0 size=64 callers=1 calls=0
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Platform/Core/Result.cpp
*/
void Result_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbcb0ULL || rel >= 0x15bbcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbcf0 size=32 callers=1 calls=0
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Platform/Core/Result.cpp
*/
void Result_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbcf0ULL || rel >= 0x15bbd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbd10 size=32 callers=56 calls=0
*/
void sub_15bbd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbd10ULL || rel >= 0x15bbd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbd30 size=112 callers=5 calls=1
   calls: sub_15b87f0
*/
void sub_15bbd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbd30ULL || rel >= 0x15bbda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbda0 size=16 callers=0 calls=0
*/
void sub_15bbda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbda0ULL || rel >= 0x15bbdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbdb0 size=304 callers=3 calls=0
*/
void sub_15bbdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbdb0ULL || rel >= 0x15bbee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbee0 size=16 callers=0 calls=0
*/
void sub_15bbee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbee0ULL || rel >= 0x15bbef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbef0 size=32 callers=5 calls=0
*/
void sub_15bbef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbef0ULL || rel >= 0x15bbf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbf10 size=80 callers=19 calls=1
   calls: sub_860
*/
void sub_15bbf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbf10ULL || rel >= 0x15bbf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbf60 size=32 callers=2 calls=0
*/
void sub_15bbf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbf60ULL || rel >= 0x15bbf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bbf80 size=288 callers=18 calls=3
   calls: sub_15be1a0, sub_6a5230, sub_860
*/
void sub_15bbf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bbf80ULL || rel >= 0x15bc0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bc0a0 size=144 callers=10 calls=2
   calls: sub_15bde80, sub_15be030
*/
void sub_15bc0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bc0a0ULL || rel >= 0x15bc130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bc130 size=16 callers=8 calls=0
*/
void sub_15bc130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bc130ULL || rel >= 0x15bc140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bc140 size=32 callers=0 calls=0
*/
void sub_15bc140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bc140ULL || rel >= 0x15bc160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bc160 size=128 callers=4 calls=2
   calls: sub_15bde80, sub_15be030
*/
void sub_15bc160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bc160ULL || rel >= 0x15bc1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bc1e0 size=304 callers=336 calls=2
   calls: sub_860, sub_8c0
*/
void sub_15bc1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bc1e0ULL || rel >= 0x15bc310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bc310 size=48 callers=502 calls=0
*/
void sub_15bc310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bc310ULL || rel >= 0x15bc340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bc340 size=480 callers=16 calls=2
   calls: sub_860, sub_8c0
*/
void sub_15bc340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bc340ULL || rel >= 0x15bc520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bc520 size=176 callers=4 calls=0
*/
void sub_15bc520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bc520ULL || rel >= 0x15bc5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bc5d0 size=128 callers=53 calls=0
*/
void sub_15bc5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bc5d0ULL || rel >= 0x15bc650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bc650 size=48 callers=39 calls=0
*/
void sub_15bc650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bc650ULL || rel >= 0x15bc680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bc680 size=464 callers=12 calls=2
   calls: sub_15bc850, sub_8c0
*/
void sub_15bc680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bc680ULL || rel >= 0x15bc850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bc850 size=192 callers=3 calls=0
*/
void sub_15bc850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bc850ULL || rel >= 0x15bc910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bc910 size=352 callers=2 calls=2
   calls: sub_860, sub_8c0
*/
void sub_15bc910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bc910ULL || rel >= 0x15bca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bca70 size=16 callers=60 calls=0
*/
void sub_15bca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bca70ULL || rel >= 0x15bca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bca80 size=288 callers=5 calls=2
   calls: sub_860, sub_8c0
*/
void sub_15bca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bca80ULL || rel >= 0x15bcba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bcba0 size=144 callers=8 calls=0
*/
void sub_15bcba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bcba0ULL || rel >= 0x15bcc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bcc30 size=192 callers=2 calls=0
*/
void sub_15bcc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bcc30ULL || rel >= 0x15bccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bccf0 size=160 callers=2 calls=0
*/
void sub_15bccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bccf0ULL || rel >= 0x15bcd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bcd90 size=208 callers=5 calls=0
*/
void sub_15bcd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bcd90ULL || rel >= 0x15bce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bce60 size=384 callers=14 calls=2
   calls: sub_15bc1e0, sub_8c0
*/
void sub_15bce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bce60ULL || rel >= 0x15bcfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bcfe0 size=688 callers=2 calls=0
   ref: ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/
*/
void unnamed_68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bcfe0ULL || rel >= 0x15bd290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd290 size=272 callers=2 calls=2
   calls: sub_860, sub_8c0
*/
void sub_15bd290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd290ULL || rel >= 0x15bd3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd3a0 size=336 callers=0 calls=2
   calls: sub_860, sub_8c0
*/
void sub_15bd3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd3a0ULL || rel >= 0x15bd4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd4f0 size=32 callers=15 calls=1
   calls: null_2
*/
void sub_15bd4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd4f0ULL || rel >= 0x15bd510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd510 size=48 callers=5 calls=0
*/
void sub_15bd510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd510ULL || rel >= 0x15bd540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd540 size=48 callers=1 calls=0
*/
void sub_15bd540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd540ULL || rel >= 0x15bd570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd570 size=48 callers=2 calls=0
*/
void sub_15bd570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd570ULL || rel >= 0x15bd5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd5a0 size=80 callers=1 calls=0
*/
void sub_15bd5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd5a0ULL || rel >= 0x15bd5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd5f0 size=112 callers=0 calls=0
*/
void sub_15bd5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd5f0ULL || rel >= 0x15bd660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd660 size=112 callers=2 calls=1
   calls: sub_860
*/
void sub_15bd660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd660ULL || rel >= 0x15bd6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd6d0 size=32 callers=2 calls=0
*/
void sub_15bd6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd6d0ULL || rel >= 0x15bd6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd6f0 size=192 callers=1 calls=2
   calls: sub_860, sub_8c0
*/
void sub_15bd6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd6f0ULL || rel >= 0x15bd7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd7b0 size=64 callers=1 calls=0
*/
void sub_15bd7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd7b0ULL || rel >= 0x15bd7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd7f0 size=16 callers=2 calls=0
*/
void sub_15bd7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd7f0ULL || rel >= 0x15bd800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd800 size=16 callers=1 calls=0
*/
void sub_15bd800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd800ULL || rel >= 0x15bd810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd810 size=64 callers=19 calls=0
*/
void sub_15bd810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd810ULL || rel >= 0x15bd850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd850 size=64 callers=17 calls=0
*/
void sub_15bd850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd850ULL || rel >= 0x15bd890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd890 size=112 callers=0 calls=1
   calls: sub_8c0
*/
void sub_15bd890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd890ULL || rel >= 0x15bd900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd900 size=16 callers=5 calls=0
*/
void sub_15bd900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd900ULL || rel >= 0x15bd910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd910 size=80 callers=1 calls=1
   calls: sub_8c0
*/
void sub_15bd910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd910ULL || rel >= 0x15bd960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bd960 size=336 callers=1 calls=2
   calls: sub_860, sub_8c0
*/
void sub_15bd960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bd960ULL || rel >= 0x15bdab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bdab0 size=336 callers=2 calls=2
   calls: sub_860, sub_8c0
*/
void sub_15bdab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bdab0ULL || rel >= 0x15bdc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bdc00 size=336 callers=7 calls=2
   calls: sub_860, sub_8c0
*/
void sub_15bdc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bdc00ULL || rel >= 0x15bdd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bdd50 size=304 callers=1 calls=2
   calls: sub_860, sub_8c0
   ref: %016zx
*/
void f_016zx(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bdd50ULL || rel >= 0x15bde80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bde80 size=432 callers=51 calls=3
   calls: sub_15bde80, sub_15be030, sub_1c0
*/
void sub_15bde80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bde80ULL || rel >= 0x15be030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015be030 size=256 callers=51 calls=0
*/
void sub_15be030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15be030ULL || rel >= 0x15be130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015be130 size=48 callers=0 calls=0
*/
void sub_15be130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15be130ULL || rel >= 0x15be160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015be160 size=64 callers=0 calls=0
*/
void sub_15be160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15be160ULL || rel >= 0x15be1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015be1a0 size=384 callers=20 calls=2
   calls: sub_6a54a0, sub_860
*/
void sub_15be1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15be1a0ULL || rel >= 0x15be320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015be320 size=272 callers=0 calls=2
   calls: sub_6f9720, sub_8c0
*/
void sub_15be320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15be320ULL || rel >= 0x15be430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015be430 size=240 callers=1 calls=2
   calls: sub_6f9720, sub_8c0
*/
void sub_15be430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15be430ULL || rel >= 0x15be520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015be520 size=352 callers=1 calls=0
*/
void sub_15be520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15be520ULL || rel >= 0x15be680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015be680 size=160 callers=0 calls=0
*/
void sub_15be680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15be680ULL || rel >= 0x15be720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015be720 size=80 callers=0 calls=1
   calls: sub_15be520
*/
void sub_15be720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15be720ULL || rel >= 0x15be770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015be770 size=176 callers=1 calls=0
*/
void sub_15be770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15be770ULL || rel >= 0x15be820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015be820 size=304 callers=0 calls=0
*/
void sub_15be820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15be820ULL || rel >= 0x15be950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015be950 size=352 callers=0 calls=0
*/
void sub_15be950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15be950ULL || rel >= 0x15beab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015beab0 size=32 callers=11 calls=0
*/
void sub_15beab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15beab0ULL || rel >= 0x15bead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bead0 size=160 callers=16 calls=2
   calls: sub_15bde80, sub_15be030
*/
void sub_15bead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bead0ULL || rel >= 0x15beb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015beb70 size=128 callers=4 calls=2
   calls: sub_15bde80, sub_15be030
*/
void sub_15beb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15beb70ULL || rel >= 0x15bebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bebf0 size=176 callers=0 calls=0
*/
void sub_15bebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bebf0ULL || rel >= 0x15beca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015beca0 size=16 callers=4 calls=0
*/
void sub_15beca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15beca0ULL || rel >= 0x15becb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015becb0 size=16 callers=2 calls=0
*/
void sub_15becb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15becb0ULL || rel >= 0x15becc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015becc0 size=448 callers=25 calls=3
   calls: sub_15bc1e0, sub_860, sub_8c0
*/
void sub_15becc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15becc0ULL || rel >= 0x15bee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bee80 size=48 callers=27 calls=0
*/
void sub_15bee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bee80ULL || rel >= 0x15beeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015beeb0 size=16 callers=4 calls=0
*/
void sub_15beeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15beeb0ULL || rel >= 0x15beec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015beec0 size=16 callers=4 calls=0
*/
void sub_15beec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15beec0ULL || rel >= 0x15beed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015beed0 size=32 callers=3 calls=0
*/
void sub_15beed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15beed0ULL || rel >= 0x15beef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015beef0 size=32 callers=13 calls=0
*/
void sub_15beef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15beef0ULL || rel >= 0x15bef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bef10 size=16 callers=4 calls=0
*/
void sub_15bef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bef10ULL || rel >= 0x15bef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bef20 size=32 callers=7 calls=0
*/
void sub_15bef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bef20ULL || rel >= 0x15bef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bef40 size=224 callers=4 calls=1
   calls: sub_860
*/
void sub_15bef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bef40ULL || rel >= 0x15bf020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf020 size=224 callers=3 calls=1
   calls: sub_860
*/
void sub_15bf020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf020ULL || rel >= 0x15bf100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf100 size=32 callers=1 calls=0
*/
void sub_15bf100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf100ULL || rel >= 0x15bf120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf120 size=16 callers=2 calls=0
*/
void sub_15bf120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf120ULL || rel >= 0x15bf130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf130 size=32 callers=1 calls=0
*/
void sub_15bf130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf130ULL || rel >= 0x15bf150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf150 size=32 callers=1 calls=0
*/
void sub_15bf150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf150ULL || rel >= 0x15bf170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf170 size=32 callers=1 calls=0
*/
void sub_15bf170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf170ULL || rel >= 0x15bf190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf190 size=32 callers=1 calls=0
*/
void sub_15bf190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf190ULL || rel >= 0x15bf1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf1b0 size=48 callers=1 calls=0
*/
void sub_15bf1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf1b0ULL || rel >= 0x15bf1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf1e0 size=96 callers=1 calls=0
*/
void sub_15bf1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf1e0ULL || rel >= 0x15bf240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf240 size=32 callers=1 calls=0
*/
void sub_15bf240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf240ULL || rel >= 0x15bf260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf260 size=160 callers=2 calls=1
   calls: sub_8c0
*/
void sub_15bf260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf260ULL || rel >= 0x15bf300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf300 size=320 callers=1 calls=5
   calls: sub_15bc1e0, sub_15bf440, sub_15bf680, sub_15c8d30, sub_860
   ref: 255.255.255.255
*/
void f_255_255_255(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf300ULL || rel >= 0x15bf440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf440 size=576 callers=2 calls=2
   calls: sub_6a54a0, sub_860
*/
void sub_15bf440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf440ULL || rel >= 0x15bf680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf680 size=576 callers=1 calls=2
   calls: sub_6a54a0, sub_860
*/
void sub_15bf680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf680ULL || rel >= 0x15bf8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bf8c0 size=416 callers=1 calls=4
   calls: sub_15bfa60, sub_15bfbe0, sub_15c8d40, sub_8c0
*/
void sub_15bf8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bf8c0ULL || rel >= 0x15bfa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bfa60 size=384 callers=2 calls=2
   calls: sub_15c3660, sub_15c39e0
*/
void sub_15bfa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bfa60ULL || rel >= 0x15bfbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bfbe0 size=384 callers=3 calls=2
   calls: sub_15be430, sub_15c3980
*/
void sub_15bfbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bfbe0ULL || rel >= 0x15bfd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bfd60 size=80 callers=0 calls=1
   calls: sub_15bf8c0
*/
void sub_15bfd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bfd60ULL || rel >= 0x15bfdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bfdb0 size=496 callers=2 calls=2
   calls: f_255_255_255, sub_860
   ref: SDK MW+Nintendo+NEX-4_6_8-appor
*/
void SDK_MW_Nintendo_NEX_4_6_8_appor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bfdb0ULL || rel >= 0x15bffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015bffa0 size=304 callers=2 calls=0
*/
void sub_15bffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15bffa0ULL || rel >= 0x15c00d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c00d0 size=288 callers=1 calls=2
   calls: sub_15be1a0, sub_6a5230
*/
void sub_15c00d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c00d0ULL || rel >= 0x15c01f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c01f0 size=64 callers=1 calls=0
*/
void sub_15c01f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c01f0ULL || rel >= 0x15c0230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0230 size=112 callers=3 calls=1
   calls: sub_860
*/
void sub_15c0230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0230ULL || rel >= 0x15c02a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c02a0 size=224 callers=5 calls=0
*/
void sub_15c02a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c02a0ULL || rel >= 0x15c0380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0380 size=32 callers=0 calls=0
*/
void sub_15c0380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0380ULL || rel >= 0x15c03a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c03a0 size=32 callers=0 calls=0
*/
void sub_15c03a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c03a0ULL || rel >= 0x15c03c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c03c0 size=400 callers=7 calls=1
   calls: sub_8c0
*/
void sub_15c03c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c03c0ULL || rel >= 0x15c0550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0550 size=32 callers=0 calls=0
*/
void sub_15c0550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0550ULL || rel >= 0x15c0570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0570 size=32 callers=0 calls=0
*/
void sub_15c0570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0570ULL || rel >= 0x15c0590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0590 size=16 callers=0 calls=0
*/
void sub_15c0590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0590ULL || rel >= 0x15c05a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c05a0 size=16 callers=0 calls=0
*/
void sub_15c05a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c05a0ULL || rel >= 0x15c05b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c05b0 size=32 callers=0 calls=0
*/
void sub_15c05b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c05b0ULL || rel >= 0x15c05d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c05d0 size=16 callers=0 calls=0
*/
void sub_15c05d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c05d0ULL || rel >= 0x15c05e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c05e0 size=16 callers=0 calls=0
*/
void sub_15c05e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c05e0ULL || rel >= 0x15c05f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c05f0 size=16 callers=0 calls=0
*/
void sub_15c05f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c05f0ULL || rel >= 0x15c0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0600 size=96 callers=4 calls=1
   calls: sub_15c0600
*/
void sub_15c0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0600ULL || rel >= 0x15c0660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0660 size=112 callers=0 calls=0
*/
void sub_15c0660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0660ULL || rel >= 0x15c06d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c06d0 size=16 callers=0 calls=0
*/
void sub_15c06d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c06d0ULL || rel >= 0x15c06e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c06e0 size=16 callers=0 calls=0
*/
void sub_15c06e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c06e0ULL || rel >= 0x15c06f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c06f0 size=864 callers=2 calls=1
   calls: sub_860
*/
void sub_15c06f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c06f0ULL || rel >= 0x15c0a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0a50 size=112 callers=0 calls=0
*/
void sub_15c0a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0a50ULL || rel >= 0x15c0ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0ac0 size=16 callers=0 calls=0
*/
void sub_15c0ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0ac0ULL || rel >= 0x15c0ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0ad0 size=176 callers=0 calls=0
*/
void sub_15c0ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0ad0ULL || rel >= 0x15c0b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0b80 size=256 callers=0 calls=1
   calls: sub_8c0
*/
void sub_15c0b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0b80ULL || rel >= 0x15c0c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0c80 size=256 callers=0 calls=1
   calls: sub_8c0
*/
void sub_15c0c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0c80ULL || rel >= 0x15c0d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0d80 size=240 callers=23 calls=2
   calls: sub_860, sub_8c0
*/
void sub_15c0d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0d80ULL || rel >= 0x15c0e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0e70 size=176 callers=0 calls=0
*/
void sub_15c0e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0e70ULL || rel >= 0x15c0f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c0f20 size=432 callers=1 calls=2
   calls: sub_15c10d0, sub_8c0
*/
void sub_15c0f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c0f20ULL || rel >= 0x15c10d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c10d0 size=80 callers=3 calls=0
*/
void sub_15c10d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c10d0ULL || rel >= 0x15c1120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c1120 size=304 callers=0 calls=2
   calls: sub_15c0d80, sub_860
*/
void sub_15c1120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c1120ULL || rel >= 0x15c1250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c1250 size=304 callers=0 calls=2
   calls: sub_15c0d80, sub_860
*/
void sub_15c1250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c1250ULL || rel >= 0x15c1380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c1380 size=320 callers=0 calls=2
   calls: sub_15c0d80, sub_860
*/
void sub_15c1380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c1380ULL || rel >= 0x15c14c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c14c0 size=880 callers=1 calls=5
   calls: sub_15c0d80, sub_15c2660, sub_15c27c0, sub_15c2910, sub_860
*/
void sub_15c14c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c14c0ULL || rel >= 0x15c1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c1830 size=800 callers=0 calls=5
   calls: sub_15c0d80, sub_15c10d0, sub_15c14c0, sub_15c3080, sub_860
*/
void sub_15c1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c1830ULL || rel >= 0x15c1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c1b50 size=624 callers=0 calls=4
   calls: sub_15c0d80, sub_15c10d0, sub_15c3080, sub_860
*/
void sub_15c1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c1b50ULL || rel >= 0x15c1dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c1dc0 size=2208 callers=0 calls=4
   calls: sub_15c0d80, sub_15c31c0, sub_15c32e0, sub_860
*/
void sub_15c1dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c1dc0ULL || rel >= 0x15c2660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c2660 size=352 callers=1 calls=3
   calls: sub_15c0d80, sub_15c3080, sub_860
*/
void sub_15c2660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c2660ULL || rel >= 0x15c27c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c27c0 size=336 callers=2 calls=0
*/
void sub_15c27c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c27c0ULL || rel >= 0x15c2910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c2910 size=1904 callers=1 calls=2
   calls: sub_15c0d80, sub_860
*/
void sub_15c2910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c2910ULL || rel >= 0x15c3080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c3080 size=320 callers=3 calls=1
   calls: sub_860
*/
void sub_15c3080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c3080ULL || rel >= 0x15c31c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c31c0 size=288 callers=1 calls=2
   calls: sub_15c0d80, sub_860
*/
void sub_15c31c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c31c0ULL || rel >= 0x15c32e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c32e0 size=272 callers=1 calls=2
   calls: sub_15c0d80, sub_860
*/
void sub_15c32e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c32e0ULL || rel >= 0x15c33f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c33f0 size=176 callers=0 calls=0
*/
void sub_15c33f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c33f0ULL || rel >= 0x15c34a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c34a0 size=80 callers=0 calls=1
   calls: sub_15bfbe0
*/
void sub_15c34a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c34a0ULL || rel >= 0x15c34f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c34f0 size=288 callers=0 calls=2
   calls: sub_6f9720, sub_8c0
*/
void sub_15c34f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c34f0ULL || rel >= 0x15c3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c3610 size=80 callers=0 calls=1
   calls: sub_15bfa60
*/
void sub_15c3610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c3610ULL || rel >= 0x15c3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c3660 size=240 callers=1 calls=2
   calls: sub_6f9720, sub_8c0
*/
void sub_15c3660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c3660ULL || rel >= 0x15c3750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c3750 size=288 callers=0 calls=2
   calls: sub_6f9720, sub_8c0
*/
void sub_15c3750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c3750ULL || rel >= 0x15c3870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c3870 size=272 callers=0 calls=2
   calls: sub_6f9720, sub_8c0
*/
void sub_15c3870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c3870ULL || rel >= 0x15c3980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c3980 size=96 callers=3 calls=1
   calls: sub_15c3980
*/
void sub_15c3980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c3980ULL || rel >= 0x15c39e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c39e0 size=96 callers=3 calls=1
   calls: sub_15c39e0
*/
void sub_15c39e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c39e0ULL || rel >= 0x15c3a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c3a40 size=1168 callers=0 calls=3
   calls: sub_15bde80, sub_15be030, sub_1c0
*/
void sub_15c3a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c3a40ULL || rel >= 0x15c3ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c3ed0 size=16 callers=38 calls=0
*/
void sub_15c3ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c3ed0ULL || rel >= 0x15c3ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c3ee0 size=256 callers=99 calls=3
   calls: InstanceTable_203, InstanceTable_204, sub_15b9390
*/
void sub_15c3ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c3ee0ULL || rel >= 0x15c3fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c3fe0 size=112 callers=6 calls=0
*/
void sub_15c3fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c3fe0ULL || rel >= 0x15c4050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c4050 size=96 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15c4050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c4050ULL || rel >= 0x15c40b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c40b0 size=96 callers=3 calls=1
   calls: sub_15b9390
*/
void sub_15c40b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c40b0ULL || rel >= 0x15c4110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c4110 size=96 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15c4110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c4110ULL || rel >= 0x15c4170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c4170 size=304 callers=0 calls=0
*/
void sub_15c4170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c4170ULL || rel >= 0x15c42a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c42a0 size=16 callers=16 calls=0
*/
void sub_15c42a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c42a0ULL || rel >= 0x15c42b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c42b0 size=16 callers=19 calls=0
*/
void sub_15c42b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c42b0ULL || rel >= 0x15c42c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c42c0 size=16 callers=9 calls=0
*/
void sub_15c42c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c42c0ULL || rel >= 0x15c42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c42d0 size=64 callers=4 calls=0
*/
void sub_15c42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c42d0ULL || rel >= 0x15c4310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c4310 size=304 callers=3 calls=0
*/
void sub_15c4310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c4310ULL || rel >= 0x15c4440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c4440 size=160 callers=0 calls=2
   calls: sub_15c3ee0, sub_15c4310
*/
void sub_15c4440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c4440ULL || rel >= 0x15c44e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c44e0 size=160 callers=0 calls=1
   calls: sub_15c4310
*/
void sub_15c44e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c44e0ULL || rel >= 0x15c4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c4580 size=144 callers=0 calls=1
   calls: sub_15c4310
*/
void sub_15c4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c4580ULL || rel >= 0x15c4610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c4610 size=16 callers=0 calls=0
*/
void sub_15c4610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c4610ULL || rel >= 0x15c4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c4620 size=416 callers=1 calls=4
   calls: InstanceTable_203, sub_15b9390, sub_15c3ee0, sub_15c4a10
*/
void sub_15c4620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c4620ULL || rel >= 0x15c47c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c47c0 size=592 callers=2 calls=4
   calls: InstanceTable_203, sub_15b9390, sub_15c3ee0, sub_15c4a10
*/
void sub_15c47c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c47c0ULL || rel >= 0x15c4a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c4a10 size=368 callers=12 calls=2
   calls: InstanceTable_203, sub_15b9390
*/
void sub_15c4a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c4a10ULL || rel >= 0x15c4b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c4b80 size=640 callers=2 calls=4
   calls: InstanceTable_203, sub_15b9340, sub_15b9390, sub_15c4e00
*/
void sub_15c4b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c4b80ULL || rel >= 0x15c4e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c4e00 size=272 callers=19 calls=3
   calls: InstanceTable_203, sub_15b9390, sub_15c3ee0
*/
void sub_15c4e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c4e00ULL || rel >= 0x15c4f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c4f10 size=224 callers=1 calls=4
   calls: InstanceTable_203, sub_15b9390, sub_15c3ee0, sub_15c4b80
*/
void sub_15c4f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c4f10ULL || rel >= 0x15c4ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c4ff0 size=896 callers=2 calls=9
   calls: InstanceTable_201, InstanceTable_203, sub_15b6dc0, sub_15b8dc0, sub_15b9390, sub_15c4e00, sub_15c56d0, sub_15d0500, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c4ff0ULL || rel >= 0x15c5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c5370 size=240 callers=46 calls=4
   calls: InstanceTable_209, InstanceTable_210, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_201(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c5370ULL || rel >= 0x15c5460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c5460 size=192 callers=27 calls=1
   calls: sub_15d0500
*/
void sub_15c5460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c5460ULL || rel >= 0x15c5520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c5520 size=432 callers=0 calls=4
   calls: InstanceTable_200, InstanceTable_203, sub_15b9390, sub_15c3ee0
*/
void sub_15c5520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c5520ULL || rel >= 0x15c56d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c56d0 size=432 callers=1 calls=3
   calls: InstanceTable_203, sub_15c3ee0, sub_15c4e00
*/
void sub_15c56d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c56d0ULL || rel >= 0x15c5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c5880 size=96 callers=3 calls=0
*/
void sub_15c5880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c5880ULL || rel >= 0x15c58e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c58e0 size=160 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15c58e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c58e0ULL || rel >= 0x15c5980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c5980 size=160 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15c5980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c5980ULL || rel >= 0x15c5a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c5a20 size=720 callers=0 calls=7
   calls: InstanceTable_202, InstanceTable_203, sub_15b9340, sub_15b9390, sub_15beb70, sub_15c3ee0, sub_15c4e00
*/
void sub_15c5a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c5a20ULL || rel >= 0x15c5cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c5cf0 size=336 callers=1 calls=5
   calls: InstanceTable_208, Result_2, sub_15aa0d0, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_202(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c5cf0ULL || rel >= 0x15c5e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c5e40 size=96 callers=126 calls=0
*/
void sub_15c5e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c5e40ULL || rel >= 0x15c5ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c5ea0 size=64 callers=6 calls=1
   calls: sub_15aa0d0
*/
void sub_15c5ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c5ea0ULL || rel >= 0x15c5ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c5ee0 size=32 callers=33 calls=0
*/
void sub_15c5ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c5ee0ULL || rel >= 0x15c5f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c5f00 size=208 callers=2 calls=4
   calls: InstanceTable_203, sub_15b9390, sub_15c3ee0, sub_15c5fd0
*/
void sub_15c5f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c5f00ULL || rel >= 0x15c5fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c5fd0 size=304 callers=1 calls=1
   calls: sub_15aa0d0
*/
void sub_15c5fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c5fd0ULL || rel >= 0x15c6100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6100 size=224 callers=2 calls=4
   calls: InstanceTable_203, sub_15b9390, sub_15c3ee0, sub_15c61e0
*/
void sub_15c6100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6100ULL || rel >= 0x15c61e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c61e0 size=448 callers=1 calls=5
   calls: sub_15aa0d0, sub_15b9340, sub_15c4e00, sub_15d4d70, sub_6a54a0
*/
void sub_15c61e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c61e0ULL || rel >= 0x15c63a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c63a0 size=16 callers=0 calls=0
*/
void sub_15c63a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c63a0ULL || rel >= 0x15c63b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c63b0 size=144 callers=8 calls=1
   calls: sub_15aa0d0
*/
void sub_15c63b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c63b0ULL || rel >= 0x15c6440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6440 size=48 callers=0 calls=0
*/
void sub_15c6440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6440ULL || rel >= 0x15c6470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6470 size=16 callers=4 calls=0
*/
void sub_15c6470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6470ULL || rel >= 0x15c6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6480 size=32 callers=37 calls=0
*/
void sub_15c6480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6480ULL || rel >= 0x15c64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c64a0 size=16 callers=0 calls=0
*/
void sub_15c64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c64a0ULL || rel >= 0x15c64b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c64b0 size=176 callers=4 calls=1
   calls: sub_15c3ee0
*/
void sub_15c64b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c64b0ULL || rel >= 0x15c6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6560 size=208 callers=0 calls=0
*/
void sub_15c6560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6560ULL || rel >= 0x15c6630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6630 size=192 callers=0 calls=0
*/
void sub_15c6630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6630ULL || rel >= 0x15c66f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c66f0 size=16 callers=3 calls=0
*/
void sub_15c66f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c66f0ULL || rel >= 0x15c6700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6700 size=112 callers=1 calls=0
*/
void sub_15c6700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6700ULL || rel >= 0x15c6770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6770 size=96 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15c6770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6770ULL || rel >= 0x15c67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c67d0 size=256 callers=0 calls=0
*/
void sub_15c67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c67d0ULL || rel >= 0x15c68d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c68d0 size=224 callers=0 calls=1
   calls: sub_15c3ee0
*/
void sub_15c68d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c68d0ULL || rel >= 0x15c69b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c69b0 size=256 callers=0 calls=0
*/
void sub_15c69b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c69b0ULL || rel >= 0x15c6ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6ab0 size=144 callers=3 calls=2
   calls: InstanceTable_203, sub_15b9390
*/
void sub_15c6ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6ab0ULL || rel >= 0x15c6b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6b40 size=16 callers=1 calls=0
*/
void sub_15c6b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6b40ULL || rel >= 0x15c6b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6b50 size=96 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15c6b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6b50ULL || rel >= 0x15c6bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6bb0 size=16 callers=0 calls=0
*/
void sub_15c6bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6bb0ULL || rel >= 0x15c6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6bc0 size=144 callers=11 calls=1
   calls: sub_15aa0d0
*/
void sub_15c6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6bc0ULL || rel >= 0x15c6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6c50 size=208 callers=0 calls=3
   calls: InstanceTable_203, sub_15b9390, sub_15c4e00
*/
void sub_15c6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6c50ULL || rel >= 0x15c6d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6d20 size=208 callers=0 calls=3
   calls: InstanceTable_203, sub_15b9390, sub_15c4e00
*/
void sub_15c6d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6d20ULL || rel >= 0x15c6df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6df0 size=96 callers=0 calls=0
   ref: Encryption Error
*/
void Encryption_Error(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6df0ULL || rel >= 0x15c6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6e50 size=256 callers=9 calls=3
   calls: sub_15aa0d0, sub_15b78f0, sub_15b9340
*/
void sub_15c6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6e50ULL || rel >= 0x15c6f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6f50 size=128 callers=3 calls=2
   calls: sub_15b9300, sub_15b9390
*/
void sub_15c6f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6f50ULL || rel >= 0x15c6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c6fd0 size=128 callers=0 calls=2
   calls: sub_15b9300, sub_15b9390
*/
void sub_15c6fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c6fd0ULL || rel >= 0x15c7050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7050 size=160 callers=0 calls=0
*/
void sub_15c7050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7050ULL || rel >= 0x15c70f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c70f0 size=288 callers=0 calls=0
*/
void sub_15c70f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c70f0ULL || rel >= 0x15c7210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7210 size=64 callers=1 calls=1
   calls: sub_15c4e00
*/
void sub_15c7210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7210ULL || rel >= 0x15c7250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7250 size=288 callers=0 calls=0
*/
void sub_15c7250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7250ULL || rel >= 0x15c7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7370 size=64 callers=2 calls=1
   calls: sub_15c4e00
*/
void sub_15c7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7370ULL || rel >= 0x15c73b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c73b0 size=80 callers=5 calls=0
*/
void sub_15c73b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c73b0ULL || rel >= 0x15c7400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7400 size=176 callers=9 calls=2
   calls: InstanceTable_203, sub_15b6dc0
*/
void sub_15c7400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7400ULL || rel >= 0x15c74b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c74b0 size=176 callers=6 calls=0
*/
void sub_15c74b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c74b0ULL || rel >= 0x15c7560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7560 size=32 callers=2 calls=0
*/
void sub_15c7560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7560ULL || rel >= 0x15c7580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7580 size=224 callers=14 calls=0
*/
void sub_15c7580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7580ULL || rel >= 0x15c7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7660 size=208 callers=0 calls=0
*/
void sub_15c7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7660ULL || rel >= 0x15c7730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7730 size=160 callers=1 calls=1
   calls: sub_15c4a10
*/
void sub_15c7730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7730ULL || rel >= 0x15c77d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c77d0 size=416 callers=4 calls=4
   calls: sub_15c3ee0, sub_15c4a10, sub_15c6ab0, sub_15c7730
*/
void sub_15c77d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c77d0ULL || rel >= 0x15c7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7970 size=592 callers=6 calls=2
   calls: sub_15b8dc0, sub_15c4a10
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Core/Buffer.cpp
*/
void Buffer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7970ULL || rel >= 0x15c7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7bc0 size=16 callers=7 calls=0
*/
void sub_15c7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7bc0ULL || rel >= 0x15c7bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7bd0 size=16 callers=9 calls=0
*/
void sub_15c7bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7bd0ULL || rel >= 0x15c7be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7be0 size=96 callers=5 calls=1
   calls: sub_15c77d0
*/
void sub_15c7be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7be0ULL || rel >= 0x15c7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7c40 size=176 callers=7 calls=2
   calls: Buffer, sub_15c6ab0
*/
void sub_15c7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7c40ULL || rel >= 0x15c7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7cf0 size=208 callers=1 calls=2
   calls: Buffer, sub_15c6ab0
*/
void sub_15c7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7cf0ULL || rel >= 0x15c7dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7dc0 size=16 callers=35 calls=0
*/
void sub_15c7dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7dc0ULL || rel >= 0x15c7dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7dd0 size=64 callers=65 calls=1
   calls: InstanceTable_203
*/
void sub_15c7dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7dd0ULL || rel >= 0x15c7e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7e10 size=480 callers=35 calls=3
   calls: sub_15b8dc0, sub_15b9c70, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_203(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7e10ULL || rel >= 0x15c7ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c7ff0 size=160 callers=6 calls=2
   calls: InstanceTable_203, sub_15c4e00
*/
void sub_15c7ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c7ff0ULL || rel >= 0x15c8090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8090 size=176 callers=2 calls=3
   calls: InstanceTable_203, sub_15bca70, sub_15bd5a0
*/
void sub_15c8090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8090ULL || rel >= 0x15c8140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8140 size=80 callers=63 calls=1
   calls: sub_15b9390
*/
void sub_15c8140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8140ULL || rel >= 0x15c8190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8190 size=80 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15c8190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8190ULL || rel >= 0x15c81e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c81e0 size=32 callers=3 calls=0
*/
void sub_15c81e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c81e0ULL || rel >= 0x15c8200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8200 size=336 callers=2 calls=3
   calls: sub_15b8dc0, sub_15b9c90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_204(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8200ULL || rel >= 0x15c8350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8350 size=64 callers=1 calls=1
   calls: sub_15c3ee0
*/
void sub_15c8350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8350ULL || rel >= 0x15c8390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015c8390 size=144 callers=2 calls=3
   calls: InstanceTable_203, InstanceTable_204, sub_15b9390
*/
void sub_15c8390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c8390ULL || rel >= 0x15c8420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

