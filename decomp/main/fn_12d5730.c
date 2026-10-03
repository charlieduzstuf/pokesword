/* main functions 012d5730..012f8c90 (159 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 012d5730 size=192 callers=0 calls=0
*/
void sub_12d5730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5730ULL || rel >= 0x12d57f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d57f0 size=304 callers=0 calls=0
*/
void sub_12d57f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d57f0ULL || rel >= 0x12d5920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5920 size=96 callers=0 calls=3
   calls: anime_L_poke_name_00_g_ptn, sub_12d2440, sub_e833a0
   ref: anime_L_poke_name_00_arrow_up
*/
void anime_L_poke_name_00_arrow_up(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5920ULL || rel >= 0x12d5980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5980 size=16 callers=0 calls=0
*/
void sub_12d5980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5980ULL || rel >= 0x12d5990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5990 size=16 callers=0 calls=0
*/
void sub_12d5990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5990ULL || rel >= 0x12d59a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d59a0 size=16 callers=0 calls=0
*/
void sub_12d59a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d59a0ULL || rel >= 0x12d59b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d59b0 size=96 callers=0 calls=3
   calls: anime_L_poke_name_00_g_ptn, sub_12d2b30, sub_e833a0
   ref: anime_L_poke_name_00_arrow_down
*/
void anime_L_poke_name_00_arrow_down(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d59b0ULL || rel >= 0x12d5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5a10 size=16 callers=0 calls=0
*/
void sub_12d5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5a10ULL || rel >= 0x12d5a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5a20 size=16 callers=0 calls=0
*/
void sub_12d5a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5a20ULL || rel >= 0x12d5a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5a30 size=16 callers=0 calls=0
*/
void sub_12d5a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5a30ULL || rel >= 0x12d5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5a40 size=80 callers=0 calls=1
   calls: sub_e833a0
   ref: anime_L_tab_left_00_key_select
*/
void anime_L_tab_left_00_key_select_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5a40ULL || rel >= 0x12d5a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5a90 size=16 callers=0 calls=0
*/
void sub_12d5a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5a90ULL || rel >= 0x12d5aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5aa0 size=16 callers=0 calls=0
*/
void sub_12d5aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5aa0ULL || rel >= 0x12d5ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5ab0 size=16 callers=0 calls=0
*/
void sub_12d5ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5ab0ULL || rel >= 0x12d5ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5ac0 size=96 callers=0 calls=1
   calls: sub_e833a0
   ref: anime_L_tab_right_00_key_select
*/
void anime_L_tab_right_00_key_select_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5ac0ULL || rel >= 0x12d5b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5b20 size=16 callers=0 calls=0
*/
void sub_12d5b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5b20ULL || rel >= 0x12d5b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5b30 size=16 callers=0 calls=0
*/
void sub_12d5b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5b30ULL || rel >= 0x12d5b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5b40 size=16 callers=0 calls=0
*/
void sub_12d5b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5b40ULL || rel >= 0x12d5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5b50 size=128 callers=0 calls=1
   calls: sub_12d3d90
*/
void sub_12d5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5b50ULL || rel >= 0x12d5bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5bd0 size=16 callers=0 calls=0
*/
void sub_12d5bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5bd0ULL || rel >= 0x12d5be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5be0 size=16 callers=0 calls=0
*/
void sub_12d5be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5be0ULL || rel >= 0x12d5bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5bf0 size=16 callers=0 calls=0
*/
void sub_12d5bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5bf0ULL || rel >= 0x12d5c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5c00 size=48 callers=0 calls=0
*/
void sub_12d5c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5c00ULL || rel >= 0x12d5c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5c30 size=16 callers=0 calls=0
*/
void sub_12d5c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5c30ULL || rel >= 0x12d5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5c40 size=16 callers=0 calls=0
*/
void sub_12d5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5c40ULL || rel >= 0x12d5c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5c50 size=16 callers=0 calls=0
*/
void sub_12d5c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5c50ULL || rel >= 0x12d5c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5c60 size=32 callers=0 calls=0
*/
void sub_12d5c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5c60ULL || rel >= 0x12d5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5c80 size=16 callers=0 calls=0
*/
void sub_12d5c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5c80ULL || rel >= 0x12d5c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5c90 size=16 callers=0 calls=0
*/
void sub_12d5c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5c90ULL || rel >= 0x12d5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5ca0 size=16 callers=0 calls=0
*/
void sub_12d5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5ca0ULL || rel >= 0x12d5cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5cb0 size=160 callers=0 calls=0
*/
void sub_12d5cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5cb0ULL || rel >= 0x12d5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5d50 size=1952 callers=0 calls=6
   calls: sub_12d64f0, sub_12e0840, sub_12e0950, sub_14aad40, sub_e7eb10, sub_e83430
*/
void sub_12d5d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5d50ULL || rel >= 0x12d64f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d64f0 size=272 callers=34 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_12d64f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d64f0ULL || rel >= 0x12d6600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d6600 size=512 callers=1 calls=2
   calls: sub_5f19d0, sub_602930
*/
void sub_12d6600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d6600ULL || rel >= 0x12d6800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d6800 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_12d6800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d6800ULL || rel >= 0x12d6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d6850 size=16 callers=0 calls=0
*/
void sub_12d6850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d6850ULL || rel >= 0x12d6860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d6860 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/status/bin/status_poke_ability_00_lyt.bin
*/
void status_poke_ability_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d6860ULL || rel >= 0x12d6970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d6970 size=272 callers=2 calls=2
   calls: sub_14ac370, sub_67d080
*/
void sub_12d6970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d6970ULL || rel >= 0x12d6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d6a80 size=4160 callers=3 calls=21
   calls: sub_12d2130, sub_12d64f0, sub_12d6970, sub_12e09c0, sub_12e0a00, sub_1315b90, sub_14aad40, sub_7635d0, sub_763de0, sub_7644a0, sub_764bc0, sub_764c30
   ... +9 more
*/
void sub_12d6a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d6a80ULL || rel >= 0x12d7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d7ac0 size=912 callers=1 calls=3
   calls: sub_12d2130, sub_14aad40, sub_764c30
*/
void sub_12d7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d7ac0ULL || rel >= 0x12d7e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d7e50 size=80 callers=2 calls=1
   calls: sub_12e1760
*/
void sub_12d7e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d7e50ULL || rel >= 0x12d7ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d7ea0 size=240 callers=0 calls=1
   calls: sub_12e0950
*/
void sub_12d7ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d7ea0ULL || rel >= 0x12d7f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d7f90 size=16 callers=0 calls=0
*/
void sub_12d7f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d7f90ULL || rel >= 0x12d7fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d7fa0 size=16 callers=0 calls=0
*/
void sub_12d7fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d7fa0ULL || rel >= 0x12d7fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d7fb0 size=16 callers=0 calls=0
*/
void sub_12d7fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d7fb0ULL || rel >= 0x12d7fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d7fc0 size=16 callers=0 calls=0
*/
void sub_12d7fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d7fc0ULL || rel >= 0x12d7fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d7fd0 size=16 callers=0 calls=0
*/
void sub_12d7fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d7fd0ULL || rel >= 0x12d7fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d7fe0 size=16 callers=0 calls=0
*/
void sub_12d7fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d7fe0ULL || rel >= 0x12d7ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d7ff0 size=16 callers=0 calls=0
*/
void sub_12d7ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d7ff0ULL || rel >= 0x12d8000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d8000 size=16 callers=0 calls=0
*/
void sub_12d8000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d8000ULL || rel >= 0x12d8010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d8010 size=304 callers=0 calls=0
*/
void sub_12d8010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d8010ULL || rel >= 0x12d8140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d8140 size=160 callers=0 calls=0
*/
void sub_12d8140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d8140ULL || rel >= 0x12d81e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d81e0 size=1344 callers=0 calls=12
   calls: sub_12cfb60, sub_12cfe00, sub_12cff50, sub_12d8970, sub_12d8ac0, sub_12e98b0, sub_1502120, sub_5cfad0, sub_795bc0, sub_c39c40, sub_d0c0, sub_eb77f0
   ref: PokeStatusMemoView
   ref: PokeStatusInfoView
   ref: PokeStatusEndState
   ref: PokeStatusRibbonView
   ref: PokeStatusAbilityView
   ref: PokeStatusSkillView
*/
void PokeStatusRibbonView_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d81e0ULL || rel >= 0x12d8720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d8720 size=144 callers=0 calls=3
   calls: sub_12e9910, sub_eb6530, sub_eb7830
*/
void sub_12d8720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d8720ULL || rel >= 0x12d87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d87b0 size=16 callers=0 calls=0
*/
void sub_12d87b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d87b0ULL || rel >= 0x12d87c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d87c0 size=16 callers=0 calls=0
*/
void sub_12d87c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d87c0ULL || rel >= 0x12d87d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d87d0 size=16 callers=0 calls=0
*/
void sub_12d87d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d87d0ULL || rel >= 0x12d87e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d87e0 size=16 callers=0 calls=0
*/
void sub_12d87e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d87e0ULL || rel >= 0x12d87f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d87f0 size=16 callers=0 calls=0
*/
void sub_12d87f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d87f0ULL || rel >= 0x12d8800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d8800 size=16 callers=0 calls=0
*/
void sub_12d8800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d8800ULL || rel >= 0x12d8810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d8810 size=16 callers=0 calls=0
*/
void sub_12d8810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d8810ULL || rel >= 0x12d8820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d8820 size=16 callers=0 calls=0
*/
void sub_12d8820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d8820ULL || rel >= 0x12d8830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d8830 size=16 callers=0 calls=0
*/
void sub_12d8830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d8830ULL || rel >= 0x12d8840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d8840 size=304 callers=0 calls=0
*/
void sub_12d8840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d8840ULL || rel >= 0x12d8970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d8970 size=336 callers=8 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_12d8970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d8970ULL || rel >= 0x12d8ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d8ac0 size=336 callers=5 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_12d8ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d8ac0ULL || rel >= 0x12d8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d8c10 size=160 callers=0 calls=0
*/
void sub_12d8c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d8c10ULL || rel >= 0x12d8cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d8cb0 size=736 callers=0 calls=8
   calls: sub_14aad40, sub_14ba7b0, sub_14e1a00, sub_7a3c20, sub_8f3180, sub_8f3390, sub_e840a0, sub_e84310
   ref: grid_00
*/
void grid_00_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d8cb0ULL || rel >= 0x12d8f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d8f90 size=704 callers=6 calls=5
   calls: sub_134f3e0, sub_1353ad0, sub_1353b00, sub_1354890, sub_76f6c0
*/
void sub_12d8f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d8f90ULL || rel >= 0x12d9250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d9250 size=240 callers=2 calls=3
   calls: sub_12d2130, sub_762f30, sub_e83430
*/
void sub_12d9250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d9250ULL || rel >= 0x12d9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d9340 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_12d9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d9340ULL || rel >= 0x12d9390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d9390 size=656 callers=0 calls=6
   calls: sub_12d2130, sub_12d8f90, sub_1500c40, sub_762db0, sub_762de0, sub_e83430
*/
void sub_12d9390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d9390ULL || rel >= 0x12d9620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d9620 size=80 callers=1 calls=1
   calls: sub_14e6550
*/
void sub_12d9620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d9620ULL || rel >= 0x12d9670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d9670 size=560 callers=2 calls=0
*/
void sub_12d9670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d9670ULL || rel >= 0x12d98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d98a0 size=496 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/status/bin/uikit_setting_status_poke_info_00.bin
   ref: bin/appli/status/bin/status_poke_info_00_lyt.bin
*/
void uikit_setting_status_poke_info_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d98a0ULL || rel >= 0x12d9a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d9a90 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/status/bin/uikit_setting_status_poke_info_00.bin
   ref: bin/appli/status/bin/status_poke_info_00_lyt.bin
*/
void uikit_setting_status_poke_info_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d9a90ULL || rel >= 0x12d9c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d9c70 size=272 callers=31 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_12d9c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d9c70ULL || rel >= 0x12d9d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d9d80 size=272 callers=2 calls=2
   calls: sub_14ac370, sub_67d080
*/
void sub_12d9d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d9d80ULL || rel >= 0x12d9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d9e90 size=4736 callers=3 calls=33
   calls: anime_L_pokerus_00_check_01, sub_12d2130, sub_12d9250, sub_12d9c70, sub_12d9d80, sub_12fa1e0, sub_12feb30, sub_1313e50, sub_1314a80, sub_1315270, sub_1315b90, sub_14aad40
   ... +21 more
   ref: anime_L_icon_generat_00_generation_05
   ref: anime_L_icon_generat_00_generation_02
   ref: anime_L_icon_generat_00_generation_03
   ref: anime_L_icon_generat_00_generation_04
   ref: anime_L_icon_generat_00_generation_00
   ref: anime_L_icon_generat_00_generation_06
   ref: anime_L_icon_generat_00_generation_01
*/
void anime_L_icon_generat_00_generation_06(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d9e90ULL || rel >= 0x12db110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db110 size=208 callers=1 calls=6
   calls: sub_12d2130, sub_14aad40, sub_767950, sub_7690c0, sub_769100, sub_e833a0
   ref: anime_L_pokerus_00_check_00
   ref: anime_L_pokerus_00_check_01
*/
void anime_L_pokerus_00_check_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db110ULL || rel >= 0x12db1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db1e0 size=304 callers=1 calls=5
   calls: sub_12d2130, sub_14aad40, sub_762f30, sub_e833a0, sub_e83430
   ref: anime_L_win_marking_00_win_marking_open
*/
void anime_L_win_marking_00_win_marking_open(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db1e0ULL || rel >= 0x12db310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db310 size=112 callers=0 calls=0
*/
void sub_12db310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db310ULL || rel >= 0x12db380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db380 size=112 callers=0 calls=0
*/
void sub_12db380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db380ULL || rel >= 0x12db3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db3f0 size=16 callers=0 calls=0
*/
void sub_12db3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db3f0ULL || rel >= 0x12db400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db400 size=112 callers=0 calls=0
*/
void sub_12db400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db400ULL || rel >= 0x12db470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db470 size=112 callers=0 calls=0
*/
void sub_12db470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db470ULL || rel >= 0x12db4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db4e0 size=16 callers=0 calls=0
*/
void sub_12db4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db4e0ULL || rel >= 0x12db4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db4f0 size=16 callers=0 calls=0
*/
void sub_12db4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db4f0ULL || rel >= 0x12db500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db500 size=112 callers=0 calls=0
*/
void sub_12db500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db500ULL || rel >= 0x12db570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db570 size=112 callers=0 calls=0
*/
void sub_12db570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db570ULL || rel >= 0x12db5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db5e0 size=304 callers=0 calls=0
*/
void sub_12db5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db5e0ULL || rel >= 0x12db710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db710 size=96 callers=0 calls=2
   calls: sub_12d9250, sub_e833a0
   ref: anime_L_win_marking_00_win_marking_close
*/
void anime_L_win_marking_00_win_marking_close(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db710ULL || rel >= 0x12db770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db770 size=16 callers=0 calls=0
*/
void sub_12db770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db770ULL || rel >= 0x12db780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db780 size=16 callers=0 calls=0
*/
void sub_12db780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db780ULL || rel >= 0x12db790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db790 size=16 callers=0 calls=0
*/
void sub_12db790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db790ULL || rel >= 0x12db7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db7a0 size=512 callers=0 calls=7
   calls: sub_12d2130, sub_12d8f90, sub_14e6d50, sub_1500c40, sub_762db0, sub_762de0, sub_e83430
*/
void sub_12db7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db7a0ULL || rel >= 0x12db9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db9a0 size=16 callers=0 calls=0
*/
void sub_12db9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db9a0ULL || rel >= 0x12db9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db9b0 size=16 callers=0 calls=0
*/
void sub_12db9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db9b0ULL || rel >= 0x12db9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db9c0 size=16 callers=0 calls=0
*/
void sub_12db9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db9c0ULL || rel >= 0x12db9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012db9d0 size=160 callers=0 calls=0
*/
void sub_12db9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12db9d0ULL || rel >= 0x12dba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dba70 size=144 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_12dba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dba70ULL || rel >= 0x12dbb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dbb00 size=704 callers=2 calls=12
   calls: sub_12d2130, sub_12dbdc0, sub_12dbf90, sub_12dc420, sub_12dc5f0, sub_136b5e0, sub_14aad40, sub_17919c0, sub_767950, sub_769240, sub_8efdd0, sub_e833a0
   ref: anime_tnote_poke
   ref: anime_tnote_egg
*/
void anime_tnote_poke(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dbb00ULL || rel >= 0x12dbdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dbdc0 size=464 callers=1 calls=4
   calls: sub_12d2130, sub_12dc310, sub_767810, sub_e7eb10
*/
void sub_12dbdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dbdc0ULL || rel >= 0x12dbf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dbf90 size=528 callers=1 calls=5
   calls: sub_12d2130, sub_12dc310, sub_1303430, sub_7670b0, sub_e7eb10
*/
void sub_12dbf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dbf90ULL || rel >= 0x12dc1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dc1a0 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_12dc1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dc1a0ULL || rel >= 0x12dc1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dc1f0 size=16 callers=0 calls=0
*/
void sub_12dc1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dc1f0ULL || rel >= 0x12dc200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dc200 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/status/bin/status_poke_tnote_00_lyt.bin
*/
void status_poke_tnote_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dc200ULL || rel >= 0x12dc310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dc310 size=272 callers=8 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_12dc310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dc310ULL || rel >= 0x12dc420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dc420 size=464 callers=1 calls=5
   calls: sub_12feb10, sub_136b5e0, sub_762fe0, sub_763380, sub_769240
*/
void sub_12dc420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dc420ULL || rel >= 0x12dc5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dc5f0 size=1088 callers=2 calls=11
   calls: sub_12d2130, sub_12dc310, sub_12fe780, sub_12fe870, sub_12feb10, sub_13133a0, sub_1315b90, sub_762fe0, sub_763380, sub_769240, sub_e7eb10
*/
void sub_12dc5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dc5f0ULL || rel >= 0x12dca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dca30 size=96 callers=0 calls=0
*/
void sub_12dca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dca30ULL || rel >= 0x12dca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dca90 size=96 callers=0 calls=0
*/
void sub_12dca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dca90ULL || rel >= 0x12dcaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dcaf0 size=16 callers=0 calls=0
*/
void sub_12dcaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dcaf0ULL || rel >= 0x12dcb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dcb00 size=96 callers=0 calls=0
*/
void sub_12dcb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dcb00ULL || rel >= 0x12dcb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dcb60 size=96 callers=0 calls=0
*/
void sub_12dcb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dcb60ULL || rel >= 0x12dcbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dcbc0 size=16 callers=0 calls=0
*/
void sub_12dcbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dcbc0ULL || rel >= 0x12dcbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dcbd0 size=16 callers=0 calls=0
*/
void sub_12dcbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dcbd0ULL || rel >= 0x12dcbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dcbe0 size=96 callers=0 calls=0
*/
void sub_12dcbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dcbe0ULL || rel >= 0x12dcc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dcc40 size=96 callers=0 calls=0
*/
void sub_12dcc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dcc40ULL || rel >= 0x12dcca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dcca0 size=304 callers=0 calls=0
*/
void sub_12dcca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dcca0ULL || rel >= 0x12dcdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dcdd0 size=160 callers=0 calls=0
*/
void sub_12dcdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dcdd0ULL || rel >= 0x12dce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dce70 size=1760 callers=0 calls=18
   calls: anime_L_icon_generat_00_generation_06, anime_L_poke_name_00_g_ptn, sub_12cdff0, sub_12cfcb0, sub_12cfe00, sub_12cff50, sub_12d1f00, sub_12d3f80, sub_12d4e90, sub_12d8970, sub_12d8ac0, sub_5cfad0
   ... +6 more
   ref: PokeStatusMemoView
   ref: PokeStatusInfoView
   ref: PokeStatusBgView
   ref: PokeStatusRibbonView
   ref: PokeStatusInfoState
   ref: PokeStatusAbilityView
*/
void PokeStatusRibbonView_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dce70ULL || rel >= 0x12dd550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dd550 size=464 callers=0 calls=14
   calls: sub_12cdff0, sub_12d1f00, sub_12d9620, sub_12d9670, sub_12dd720, sub_12dd890, sub_12ddb00, sub_12ddc50, sub_12ddd20, sub_12ef620, sub_14ab2b0, sub_e80580
   ... +2 more
*/
void sub_12dd550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dd550ULL || rel >= 0x12dd720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dd720 size=368 callers=1 calls=5
   calls: sub_12cdff0, sub_14e1a00, sub_e80580, sub_eb6530, sub_eb7790
*/
void sub_12dd720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dd720ULL || rel >= 0x12dd890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dd890 size=624 callers=1 calls=13
   calls: anime_L_icon_generat_00_generation_06, anime_L_win_marking_00_win_marking_open, sub_12cdff0, sub_12d2030, sub_12d3f80, sub_12d4e90, sub_12dde40, sub_12ef540, sub_12ef560, sub_12ef5d0, sub_12ef650, sub_14e1a00
   ... +1 more
*/
void sub_12dd890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dd890ULL || rel >= 0x12ddb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ddb00 size=336 callers=1 calls=8
   calls: sub_12cdff0, sub_12d2130, sub_12d3f80, sub_12d8f90, sub_12d9670, sub_14ab2b0, sub_14e1a00, sub_e807f0
*/
void sub_12ddb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ddb00ULL || rel >= 0x12ddc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ddc50 size=208 callers=1 calls=4
   calls: sub_12cdff0, sub_e80580, sub_eb8e80, sub_eb8ea0
*/
void sub_12ddc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ddc50ULL || rel >= 0x12ddd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ddd20 size=272 callers=1 calls=2
   calls: sub_14e1a00, sub_eb6230
*/
void sub_12ddd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ddd20ULL || rel >= 0x12dde30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dde30 size=16 callers=0 calls=0
*/
void sub_12dde30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dde30ULL || rel >= 0x12dde40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dde40 size=992 callers=1 calls=7
   calls: sub_12cdff0, sub_1311c60, sub_67d450, sub_c39c40, sub_e7eb10, sub_e807f0, sub_eb8990
*/
void sub_12dde40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dde40ULL || rel >= 0x12de220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012de220 size=16 callers=0 calls=0
*/
void sub_12de220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12de220ULL || rel >= 0x12de230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012de230 size=16 callers=0 calls=0
*/
void sub_12de230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12de230ULL || rel >= 0x12de240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012de240 size=16 callers=0 calls=0
*/
void sub_12de240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12de240ULL || rel >= 0x12de250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012de250 size=16 callers=0 calls=0
*/
void sub_12de250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12de250ULL || rel >= 0x12de260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012de260 size=16 callers=0 calls=0
*/
void sub_12de260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12de260ULL || rel >= 0x12de270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012de270 size=16 callers=0 calls=0
*/
void sub_12de270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12de270ULL || rel >= 0x12de280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012de280 size=16 callers=0 calls=0
*/
void sub_12de280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12de280ULL || rel >= 0x12de290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012de290 size=16 callers=0 calls=0
*/
void sub_12de290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12de290ULL || rel >= 0x12de2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012de2a0 size=304 callers=0 calls=0
*/
void sub_12de2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12de2a0ULL || rel >= 0x12de3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012de3d0 size=160 callers=0 calls=0
*/
void sub_12de3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12de3d0ULL || rel >= 0x12de470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012de470 size=1504 callers=0 calls=14
   calls: anime_tnote_poke, sub_12cdff0, sub_12cfb60, sub_12cfcb0, sub_12cfe00, sub_12d1f00, sub_12d4d00, sub_12d5020, sub_12d8970, sub_12d8ac0, sub_5cfaf0, sub_79b990
   ... +2 more
   ref: PokeStatusMemoView
   ref: PokeStatusInfoView
   ref: PokeStatusMemoState
   ref: PokeStatusBgView
   ref: PokeStatusRibbonView
   ref: PokeStatusSkillView
*/
void PokeStatusRibbonView_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12de470ULL || rel >= 0x12dea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dea50 size=352 callers=0 calls=10
   calls: sub_12cdff0, sub_12debb0, sub_12dece0, sub_12dee30, sub_12def10, sub_12ef5d0, sub_12ef620, sub_e80580, sub_e807f0, sub_eb8e80
*/
void sub_12dea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dea50ULL || rel >= 0x12debb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012debb0 size=304 callers=1 calls=3
   calls: sub_12cdff0, sub_14e1a00, sub_eb6530
*/
void sub_12debb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12debb0ULL || rel >= 0x12dece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dece0 size=336 callers=1 calls=7
   calls: anime_tnote_poke, sub_12cdff0, sub_12d2030, sub_12df040, sub_12ef540, sub_12ef560, sub_12ef650
*/
void sub_12dece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dece0ULL || rel >= 0x12dee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dee30 size=224 callers=1 calls=4
   calls: sub_12cdff0, sub_e80580, sub_eb8e80, sub_eb8ea0
*/
void sub_12dee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dee30ULL || rel >= 0x12def10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012def10 size=288 callers=1 calls=3
   calls: sub_12d1f00, sub_14e1a00, sub_eb6230
*/
void sub_12def10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12def10ULL || rel >= 0x12df030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012df030 size=16 callers=0 calls=0
*/
void sub_12df030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12df030ULL || rel >= 0x12df040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012df040 size=992 callers=1 calls=7
   calls: sub_12cdff0, sub_1311c60, sub_67d450, sub_c39c40, sub_e7eb10, sub_e807f0, sub_eb8990
*/
void sub_12df040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12df040ULL || rel >= 0x12df420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012df420 size=16 callers=0 calls=0
*/
void sub_12df420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12df420ULL || rel >= 0x12df430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012df430 size=16 callers=0 calls=0
*/
void sub_12df430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12df430ULL || rel >= 0x12df440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012df440 size=16 callers=0 calls=0
*/
void sub_12df440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12df440ULL || rel >= 0x12df450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012df450 size=16 callers=0 calls=0
*/
void sub_12df450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12df450ULL || rel >= 0x12df460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012df460 size=16 callers=0 calls=0
*/
void sub_12df460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12df460ULL || rel >= 0x12df470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012df470 size=16 callers=0 calls=0
*/
void sub_12df470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12df470ULL || rel >= 0x12df480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012df480 size=16 callers=0 calls=0
*/
void sub_12df480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12df480ULL || rel >= 0x12df490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012df490 size=16 callers=0 calls=0
*/
void sub_12df490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12df490ULL || rel >= 0x12df4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012df4a0 size=304 callers=0 calls=0
*/
void sub_12df4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12df4a0ULL || rel >= 0x12df5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012df5d0 size=160 callers=0 calls=0
*/
void sub_12df5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12df5d0ULL || rel >= 0x12df670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012df670 size=1312 callers=0 calls=13
   calls: sub_12cdff0, sub_12cfb60, sub_12cfcb0, sub_12cff50, sub_12d1f00, sub_12d4200, sub_12d5020, sub_12d6a80, sub_12d8970, sub_5cfaf0, sub_79b990, sub_c39c40
   ... +1 more
   ref: PokeStatusInfoView
   ref: PokeStatusAbilityState
   ref: PokeStatusBgView
   ref: PokeStatusAbilityView
   ref: PokeStatusSkillView
*/
void PokeStatusAbilityView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12df670ULL || rel >= 0x12dfb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dfb90 size=464 callers=0 calls=14
   calls: sub_12cdff0, sub_12d1f00, sub_12d1fe0, sub_12d7e50, sub_12dfd60, sub_12dfeb0, sub_12e0000, sub_12e00e0, sub_12ef540, sub_12ef5d0, sub_12ef620, sub_e80580
   ... +2 more
*/
void sub_12dfb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dfb90ULL || rel >= 0x12dfd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dfd60 size=336 callers=1 calls=4
   calls: sub_12cdff0, sub_14e1a00, sub_e80580, sub_eb6530
*/
void sub_12dfd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dfd60ULL || rel >= 0x12dfeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012dfeb0 size=336 callers=1 calls=9
   calls: sub_12cdff0, sub_12d1f00, sub_12d2030, sub_12d6a80, sub_12d7ac0, sub_12e0200, sub_12ef540, sub_12ef560, sub_12ef650
*/
void sub_12dfeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dfeb0ULL || rel >= 0x12e0000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e0000 size=224 callers=1 calls=4
   calls: sub_12cdff0, sub_e80580, sub_eb8e80, sub_eb8ea0
*/
void sub_12e0000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e0000ULL || rel >= 0x12e00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e00e0 size=272 callers=1 calls=2
   calls: sub_14e1a00, sub_eb6230
*/
void sub_12e00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e00e0ULL || rel >= 0x12e01f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e01f0 size=16 callers=0 calls=0
*/
void sub_12e01f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e01f0ULL || rel >= 0x12e0200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e0200 size=1008 callers=1 calls=7
   calls: sub_12cdff0, sub_1311c60, sub_67d450, sub_c39c40, sub_e7eb10, sub_e807f0, sub_eb8990
*/
void sub_12e0200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e0200ULL || rel >= 0x12e05f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e05f0 size=16 callers=0 calls=0
*/
void sub_12e05f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e05f0ULL || rel >= 0x12e0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e0600 size=16 callers=0 calls=0
*/
void sub_12e0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e0600ULL || rel >= 0x12e0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e0610 size=16 callers=0 calls=0
*/
void sub_12e0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e0610ULL || rel >= 0x12e0620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e0620 size=16 callers=0 calls=0
*/
void sub_12e0620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e0620ULL || rel >= 0x12e0630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e0630 size=16 callers=0 calls=0
*/
void sub_12e0630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e0630ULL || rel >= 0x12e0640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e0640 size=16 callers=0 calls=0
*/
void sub_12e0640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e0640ULL || rel >= 0x12e0650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e0650 size=16 callers=0 calls=0
*/
void sub_12e0650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e0650ULL || rel >= 0x12e0660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e0660 size=16 callers=0 calls=0
*/
void sub_12e0660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e0660ULL || rel >= 0x12e0670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e0670 size=304 callers=0 calls=0
*/
void sub_12e0670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e0670ULL || rel >= 0x12e07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e07a0 size=160 callers=0 calls=0
*/
void sub_12e07a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e07a0ULL || rel >= 0x12e0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e0840 size=272 callers=3 calls=1
   calls: sub_639f90
*/
void sub_12e0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e0840ULL || rel >= 0x12e0950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e0950 size=112 callers=6 calls=0
*/
void sub_12e0950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e0950ULL || rel >= 0x12e09c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e09c0 size=64 callers=3 calls=0
*/
void sub_12e09c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e09c0ULL || rel >= 0x12e0a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e0a00 size=240 callers=3 calls=7
   calls: sub_12e0af0, sub_63bb50, sub_63bec0, sub_63bed0, sub_63bee0, sub_63bef0, sub_63bf00
*/
void sub_12e0a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e0a00ULL || rel >= 0x12e0af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e0af0 size=3184 callers=1 calls=1
   calls: sub_63c2c0
*/
void sub_12e0af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e0af0ULL || rel >= 0x12e1760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e1760 size=304 callers=1 calls=3
   calls: sub_63bec0, sub_63bf10, sub_63d1b0
*/
void sub_12e1760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e1760ULL || rel >= 0x12e1890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e1890 size=160 callers=0 calls=0
*/
void sub_12e1890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e1890ULL || rel >= 0x12e1930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e1930 size=1248 callers=0 calls=12
   calls: sub_12cfcb0, sub_12cfe00, sub_12d1f00, sub_12d8970, sub_12d8ac0, sub_12e1e10, sub_12e3f20, sub_12e3f60, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0
   ref: PokeStatusMemoView
   ref: PokeStatusInfoView
   ref: PokeStatusRibbonState
   ref: PokeStatusBgView
   ref: PokeStatusRibbonView
*/
void PokeStatusRibbonView_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e1930ULL || rel >= 0x12e1e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e1e10 size=480 callers=3 calls=5
   calls: sub_12cdff0, sub_12d2130, sub_12d3d90, sub_12d4890, sub_769040
*/
void sub_12e1e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e1e10ULL || rel >= 0x12e1ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e1ff0 size=496 callers=0 calls=15
   calls: sub_12cdff0, sub_12d1f00, sub_12d1fe0, sub_12e21e0, sub_12e2320, sub_12e2540, sub_12e2960, sub_12e2b90, sub_12e2c70, sub_12ef540, sub_12ef5d0, sub_12ef620
   ... +3 more
*/
void sub_12e1ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e1ff0ULL || rel >= 0x12e21e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e21e0 size=320 callers=1 calls=1
   calls: sub_14bacd0
*/
void sub_12e21e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e21e0ULL || rel >= 0x12e2320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e2320 size=544 callers=1 calls=7
   calls: sub_12cdff0, sub_12d2130, sub_12d3d90, sub_14e1a00, sub_769040, sub_e80580, sub_eb6530
*/
void sub_12e2320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e2320ULL || rel >= 0x12e2540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e2540 size=1056 callers=1 calls=19
   calls: sub_12cdff0, sub_12d1f00, sub_12d2030, sub_12d2130, sub_12d3d90, sub_12d4a20, sub_12e1e10, sub_12e2db0, sub_12e3f20, sub_12e3f40, sub_12e3f60, sub_12ef540
   ... +7 more
*/
void sub_12e2540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e2540ULL || rel >= 0x12e2960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e2960 size=560 callers=1 calls=7
   calls: sub_12cdff0, sub_12d3d90, sub_12d4890, sub_12e3f20, sub_14aad40, sub_14e1a00, sub_e807f0
*/
void sub_12e2960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e2960ULL || rel >= 0x12e2b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e2b90 size=224 callers=1 calls=4
   calls: sub_12cdff0, sub_e80580, sub_eb8e80, sub_eb8ea0
*/
void sub_12e2b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e2b90ULL || rel >= 0x12e2c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e2c70 size=304 callers=1 calls=3
   calls: sub_12d3d90, sub_14e1a00, sub_eb6230
*/
void sub_12e2c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e2c70ULL || rel >= 0x12e2da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e2da0 size=16 callers=0 calls=0
*/
void sub_12e2da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e2da0ULL || rel >= 0x12e2db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e2db0 size=992 callers=1 calls=7
   calls: sub_12cdff0, sub_1311c60, sub_67d450, sub_c39c40, sub_e7eb10, sub_e807f0, sub_eb8990
*/
void sub_12e2db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e2db0ULL || rel >= 0x12e3190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e3190 size=16 callers=0 calls=0
*/
void sub_12e3190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e3190ULL || rel >= 0x12e31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e31a0 size=16 callers=0 calls=0
*/
void sub_12e31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e31a0ULL || rel >= 0x12e31b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e31b0 size=16 callers=0 calls=0
*/
void sub_12e31b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e31b0ULL || rel >= 0x12e31c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e31c0 size=16 callers=0 calls=0
*/
void sub_12e31c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e31c0ULL || rel >= 0x12e31d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e31d0 size=16 callers=0 calls=0
*/
void sub_12e31d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e31d0ULL || rel >= 0x12e31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e31e0 size=16 callers=0 calls=0
*/
void sub_12e31e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e31e0ULL || rel >= 0x12e31f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e31f0 size=16 callers=0 calls=0
*/
void sub_12e31f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e31f0ULL || rel >= 0x12e3200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e3200 size=16 callers=0 calls=0
*/
void sub_12e3200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e3200ULL || rel >= 0x12e3210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e3210 size=304 callers=0 calls=0
*/
void sub_12e3210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e3210ULL || rel >= 0x12e3340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e3340 size=160 callers=0 calls=0
*/
void sub_12e3340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e3340ULL || rel >= 0x12e33e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e33e0 size=2000 callers=0 calls=12
   calls: sub_12e3bb0, sub_12e3e10, sub_14aad40, sub_14ba7b0, sub_14e1a00, sub_7a3c20, sub_7a41b0, sub_8f3180, sub_e7eb10, sub_e83430, sub_e83930, sub_e83a20
*/
void sub_12e33e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e33e0ULL || rel >= 0x12e3bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e3bb0 size=608 callers=1 calls=2
   calls: sub_14e1a30, sub_e84250
*/
void sub_12e3bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e3bb0ULL || rel >= 0x12e3e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e3e10 size=272 callers=20 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_12e3e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e3e10ULL || rel >= 0x12e3f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e3f20 size=32 callers=3 calls=0
*/
void sub_12e3f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e3f20ULL || rel >= 0x12e3f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e3f40 size=32 callers=1 calls=0
*/
void sub_12e3f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e3f40ULL || rel >= 0x12e3f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e3f60 size=1104 callers=2 calls=11
   calls: ribbon_table_3, sub_12d2130, sub_14e1a30, sub_14edac0, sub_14eead0, sub_14f1840, sub_14f1850, sub_14f1870, sub_769040, sub_7690a0, sub_7a4ba0
*/
void sub_12e3f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e3f60ULL || rel >= 0x12e43b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e43b0 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_12e43b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e43b0ULL || rel >= 0x12e4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4400 size=16 callers=0 calls=0
*/
void sub_12e4400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4400ULL || rel >= 0x12e4410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4410 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/status/bin/uikit_setting_status_ribbon_00.bin
   ref: bin/appli/status/bin/status_ribbon_00_lyt.bin
*/
void uikit_setting_status_ribbon_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4410ULL || rel >= 0x12e45f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e45f0 size=400 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_12e45f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e45f0ULL || rel >= 0x12e4780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4780 size=16 callers=0 calls=0
*/
void sub_12e4780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4780ULL || rel >= 0x12e4790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4790 size=16 callers=0 calls=0
*/
void sub_12e4790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4790ULL || rel >= 0x12e47a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e47a0 size=16 callers=0 calls=0
*/
void sub_12e47a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e47a0ULL || rel >= 0x12e47b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e47b0 size=16 callers=0 calls=0
*/
void sub_12e47b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e47b0ULL || rel >= 0x12e47c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e47c0 size=16 callers=0 calls=0
*/
void sub_12e47c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e47c0ULL || rel >= 0x12e47d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e47d0 size=16 callers=0 calls=0
*/
void sub_12e47d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e47d0ULL || rel >= 0x12e47e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e47e0 size=16 callers=0 calls=0
*/
void sub_12e47e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e47e0ULL || rel >= 0x12e47f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e47f0 size=16 callers=0 calls=0
*/
void sub_12e47f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e47f0ULL || rel >= 0x12e4800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4800 size=304 callers=0 calls=0
*/
void sub_12e4800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4800ULL || rel >= 0x12e4930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4930 size=32 callers=0 calls=0
*/
void sub_12e4930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4930ULL || rel >= 0x12e4950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4950 size=16 callers=0 calls=0
*/
void sub_12e4950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4950ULL || rel >= 0x12e4960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4960 size=16 callers=0 calls=0
*/
void sub_12e4960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4960ULL || rel >= 0x12e4970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4970 size=16 callers=0 calls=0
*/
void sub_12e4970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4970ULL || rel >= 0x12e4980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4980 size=240 callers=0 calls=7
   calls: sub_12d2130, sub_12d8f90, sub_14aad40, sub_14f1f00, sub_7690b0, sub_e83430, sub_e83930
*/
void sub_12e4980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4980ULL || rel >= 0x12e4a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4a70 size=16 callers=0 calls=0
*/
void sub_12e4a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4a70ULL || rel >= 0x12e4a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4a80 size=16 callers=0 calls=0
*/
void sub_12e4a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4a80ULL || rel >= 0x12e4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4a90 size=16 callers=0 calls=0
*/
void sub_12e4a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4a90ULL || rel >= 0x12e4aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4aa0 size=1280 callers=0 calls=9
   calls: another_name, sub_1106320, sub_11063e0, sub_1106cd0, sub_12d2130, sub_12e3e10, sub_1315b90, sub_769070, sub_e7eb10
   ref: textLabelName
   ref: textLabelInfo
   ref: ribbon_table
*/
void textLabelName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4aa0ULL || rel >= 0x12e4fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4fa0 size=16 callers=0 calls=0
*/
void sub_12e4fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4fa0ULL || rel >= 0x12e4fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4fb0 size=16 callers=0 calls=0
*/
void sub_12e4fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4fb0ULL || rel >= 0x12e4fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4fc0 size=16 callers=0 calls=0
*/
void sub_12e4fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4fc0ULL || rel >= 0x12e4fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e4fd0 size=272 callers=0 calls=6
   calls: sub_12d2130, sub_12d8f90, sub_14f1f00, sub_7690b0, sub_e83430, sub_e83930
*/
void sub_12e4fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e4fd0ULL || rel >= 0x12e50e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e50e0 size=16 callers=0 calls=0
*/
void sub_12e50e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e50e0ULL || rel >= 0x12e50f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e50f0 size=16 callers=0 calls=0
*/
void sub_12e50f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e50f0ULL || rel >= 0x12e5100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e5100 size=16 callers=0 calls=0
*/
void sub_12e5100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e5100ULL || rel >= 0x12e5110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e5110 size=816 callers=0 calls=9
   calls: sub_1106320, sub_11063e0, sub_11069b0, sub_12d2130, sub_14bc910, sub_769070, sub_7690a0, sub_e83430, sub_e83930
   ref: ribbon_table
   ref: imageName
   ref: imageName2
*/
void ribbon_table_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e5110ULL || rel >= 0x12e5440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e5440 size=16 callers=0 calls=0
*/
void sub_12e5440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e5440ULL || rel >= 0x12e5450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e5450 size=16 callers=0 calls=0
*/
void sub_12e5450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e5450ULL || rel >= 0x12e5460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e5460 size=16 callers=0 calls=0
*/
void sub_12e5460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e5460ULL || rel >= 0x12e5470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e5470 size=3504 callers=3 calls=8
   calls: ribbon_table_3, ribbon_table_4, ribbon_table_5, ribbon_table_6, ribbon_table_7, sub_1106320, sub_11063e0, sub_11065b0
   ref: showNum
   ref: ribbon_table
*/
void ribbon_table_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e5470ULL || rel >= 0x12e6220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e6220 size=928 callers=6 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: showNum
   ref: ribbon_table
*/
void ribbon_table_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e6220ULL || rel >= 0x12e65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e65c0 size=704 callers=3 calls=4
   calls: ribbon_table_4, sub_1106320, sub_11063e0, sub_11065b0
   ref: showNum
   ref: ribbon_table
*/
void ribbon_table_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e65c0ULL || rel >= 0x12e6880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e6880 size=944 callers=3 calls=4
   calls: ribbon_table_5, sub_1106320, sub_11063e0, sub_11065b0
   ref: showNum
   ref: ribbon_table
*/
void ribbon_table_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e6880ULL || rel >= 0x12e6c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e6c30 size=992 callers=2 calls=6
   calls: ribbon_table_4, ribbon_table_5, ribbon_table_6, sub_1106320, sub_11063e0, sub_11065b0
   ref: showNum
   ref: ribbon_table
*/
void ribbon_table_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e6c30ULL || rel >= 0x12e7010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e7010 size=160 callers=0 calls=0
*/
void sub_12e7010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e7010ULL || rel >= 0x12e70b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e70b0 size=1456 callers=0 calls=13
   calls: sub_12cfb60, sub_12cfcb0, sub_12cff50, sub_12d1f00, sub_12d4470, sub_12d8970, sub_12d8ac0, sub_12ea0e0, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0
   ... +1 more
   ref: PokeStatusMemoView
   ref: PokeStatusInfoView
   ref: PokeStatusBgView
   ref: PokeStatusSkillState
   ref: PokeStatusAbilityView
   ref: PokeStatusSkillView
*/
void PokeStatusSkillState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e70b0ULL || rel >= 0x12e7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e7660 size=496 callers=0 calls=14
   calls: sub_12cdff0, sub_12d1f00, sub_12d1fe0, sub_12e7850, sub_12e7a50, sub_12e7cd0, sub_12e7f00, sub_12e7fe0, sub_12ef540, sub_12ef5d0, sub_12ef620, sub_e80580
   ... +2 more
*/
void sub_12e7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e7660ULL || rel >= 0x12e7850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e7850 size=512 callers=1 calls=5
   calls: sub_12cdff0, sub_12d3d90, sub_14e1a00, sub_e80580, sub_eb6530
*/
void sub_12e7850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e7850ULL || rel >= 0x12e7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e7a50 size=640 callers=1 calls=17
   calls: sub_12cdff0, sub_12d1880, sub_12d1f00, sub_12d2030, sub_12d3d90, sub_12d4600, sub_12e8160, sub_12e85c0, sub_12e9700, sub_12e99a0, sub_12ea3b0, sub_12ef540
   ... +5 more
*/
void sub_12e7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e7a50ULL || rel >= 0x12e7cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e7cd0 size=560 callers=1 calls=11
   calls: sub_12cdff0, sub_12d1880, sub_12d3d90, sub_12d4470, sub_12e85c0, sub_12e9700, sub_12e99a0, sub_14aad40, sub_14e1a00, sub_e807f0, sub_eb6230
*/
void sub_12e7cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e7cd0ULL || rel >= 0x12e7f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e7f00 size=224 callers=1 calls=4
   calls: sub_12cdff0, sub_e80580, sub_eb8e80, sub_eb8ea0
*/
void sub_12e7f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e7f00ULL || rel >= 0x12e7fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e7fe0 size=368 callers=1 calls=3
   calls: sub_12d3d90, sub_14e1a00, sub_eb6230
*/
void sub_12e7fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e7fe0ULL || rel >= 0x12e8150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e8150 size=16 callers=0 calls=0
*/
void sub_12e8150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e8150ULL || rel >= 0x12e8160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e8160 size=992 callers=1 calls=7
   calls: sub_12cdff0, sub_1311c60, sub_67d450, sub_c39c40, sub_e7eb10, sub_e807f0, sub_eb8990
*/
void sub_12e8160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e8160ULL || rel >= 0x12e8540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e8540 size=16 callers=0 calls=0
*/
void sub_12e8540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e8540ULL || rel >= 0x12e8550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e8550 size=16 callers=0 calls=0
*/
void sub_12e8550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e8550ULL || rel >= 0x12e8560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e8560 size=16 callers=0 calls=0
*/
void sub_12e8560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e8560ULL || rel >= 0x12e8570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e8570 size=16 callers=0 calls=0
*/
void sub_12e8570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e8570ULL || rel >= 0x12e8580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e8580 size=16 callers=0 calls=0
*/
void sub_12e8580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e8580ULL || rel >= 0x12e8590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e8590 size=16 callers=0 calls=0
*/
void sub_12e8590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e8590ULL || rel >= 0x12e85a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e85a0 size=16 callers=0 calls=0
*/
void sub_12e85a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e85a0ULL || rel >= 0x12e85b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e85b0 size=16 callers=0 calls=0
*/
void sub_12e85b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e85b0ULL || rel >= 0x12e85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e85c0 size=608 callers=3 calls=3
   calls: sub_1350900, sub_1353ec0, sub_1354890
*/
void sub_12e85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e85c0ULL || rel >= 0x12e8820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e8820 size=304 callers=0 calls=0
*/
void sub_12e8820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e8820ULL || rel >= 0x12e8950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e8950 size=160 callers=0 calls=0
*/
void sub_12e8950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e8950ULL || rel >= 0x12e89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e89f0 size=2464 callers=0 calls=9
   calls: sub_12e9390, sub_12e94a0, sub_14aad40, sub_14e1a00, sub_7a3c20, sub_e7eb10, sub_e83e60, sub_e840a0, wazainfo
   ref: grid_00
*/
void grid_00_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e89f0ULL || rel >= 0x12e9390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e9390 size=272 callers=18 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_12e9390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e9390ULL || rel >= 0x12e94a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e94a0 size=608 callers=1 calls=1
   calls: sub_14e6bc0
*/
void sub_12e94a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e94a0ULL || rel >= 0x12e9700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e9700 size=128 callers=2 calls=2
   calls: sub_14e1a00, sub_e83e60
*/
void sub_12e9700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e9700ULL || rel >= 0x12e9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e9780 size=208 callers=1 calls=2
   calls: sub_1308340, sub_14d6820
*/
void sub_12e9780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e9780ULL || rel >= 0x12e9850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e9850 size=96 callers=1 calls=1
   calls: sub_14d68a0
*/
void sub_12e9850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e9850ULL || rel >= 0x12e98b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e98b0 size=96 callers=1 calls=1
   calls: sub_14d6840
*/
void sub_12e98b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e98b0ULL || rel >= 0x12e9910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e9910 size=144 callers=1 calls=1
   calls: sub_14d6890
*/
void sub_12e9910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e9910ULL || rel >= 0x12e99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e99a0 size=112 callers=2 calls=2
   calls: sub_12e9a10, sub_14e6550
*/
void sub_12e99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e99a0ULL || rel >= 0x12e9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012e9a10 size=1744 callers=7 calls=20
   calls: gwazaname, sub_12d2130, sub_12e9390, sub_12eaa10, sub_1315b90, sub_14d6920, sub_14da810, sub_762930, sub_762940, sub_763cc0, sub_765dd0, sub_780d40
   ... +8 more
*/
void sub_12e9a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e9a10ULL || rel >= 0x12ea0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ea0e0 size=720 callers=1 calls=5
   calls: sub_12d2130, sub_12ea3b0, sub_14da630, sub_14da810, sub_e7eb10
*/
void sub_12ea0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ea0e0ULL || rel >= 0x12ea3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ea3b0 size=576 callers=2 calls=5
   calls: sub_12d2130, sub_12e9a10, sub_14aad40, sub_14e6d90, sub_765de0
*/
void sub_12ea3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ea3b0ULL || rel >= 0x12ea5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ea5f0 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_12ea5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ea5f0ULL || rel >= 0x12ea640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ea640 size=16 callers=0 calls=0
*/
void sub_12ea640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ea640ULL || rel >= 0x12ea650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ea650 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/status/bin/uikit_setting_status_skill_00.bin
   ref: bin/appli/status/bin/status_poke_skill_00_lyt.bin
*/
void uikit_setting_status_skill_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ea650ULL || rel >= 0x12ea830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ea830 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/status/bin/uikit_setting_status_skill_00.bin
   ref: bin/appli/status/bin/status_poke_skill_00_lyt.bin
*/
void uikit_setting_status_skill_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ea830ULL || rel >= 0x12eaa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eaa10 size=272 callers=3 calls=2
   calls: sub_14ac370, sub_67d080
*/
void sub_12eaa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eaa10ULL || rel >= 0x12eab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eab20 size=240 callers=0 calls=0
*/
void sub_12eab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eab20ULL || rel >= 0x12eac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eac10 size=16 callers=0 calls=0
*/
void sub_12eac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eac10ULL || rel >= 0x12eac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eac20 size=16 callers=0 calls=0
*/
void sub_12eac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eac20ULL || rel >= 0x12eac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eac30 size=16 callers=0 calls=0
*/
void sub_12eac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eac30ULL || rel >= 0x12eac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eac40 size=16 callers=0 calls=0
*/
void sub_12eac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eac40ULL || rel >= 0x12eac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eac50 size=16 callers=0 calls=0
*/
void sub_12eac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eac50ULL || rel >= 0x12eac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eac60 size=16 callers=0 calls=0
*/
void sub_12eac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eac60ULL || rel >= 0x12eac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eac70 size=16 callers=0 calls=0
*/
void sub_12eac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eac70ULL || rel >= 0x12eac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eac80 size=16 callers=0 calls=0
*/
void sub_12eac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eac80ULL || rel >= 0x12eac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eac90 size=304 callers=0 calls=0
*/
void sub_12eac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eac90ULL || rel >= 0x12eadc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eadc0 size=160 callers=0 calls=5
   calls: sub_12d3d90, sub_14e67f0, sub_14e68e0, sub_14e69a0, sub_1500c40
*/
void sub_12eadc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eadc0ULL || rel >= 0x12eae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eae60 size=16 callers=0 calls=0
*/
void sub_12eae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eae60ULL || rel >= 0x12eae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eae70 size=16 callers=0 calls=0
*/
void sub_12eae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eae70ULL || rel >= 0x12eae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eae80 size=16 callers=0 calls=0
*/
void sub_12eae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eae80ULL || rel >= 0x12eae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eae90 size=208 callers=0 calls=7
   calls: sub_14e1b40, sub_14e68e0, sub_14e69a0, sub_14e6ac0, sub_1500c40, sub_1502120, sub_5cfad0
*/
void sub_12eae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eae90ULL || rel >= 0x12eaf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eaf60 size=16 callers=0 calls=0
*/
void sub_12eaf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eaf60ULL || rel >= 0x12eaf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eaf70 size=16 callers=0 calls=0
*/
void sub_12eaf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eaf70ULL || rel >= 0x12eaf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eaf80 size=16 callers=0 calls=0
*/
void sub_12eaf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eaf80ULL || rel >= 0x12eaf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eaf90 size=80 callers=0 calls=1
   calls: sub_14e68e0
*/
void sub_12eaf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eaf90ULL || rel >= 0x12eafe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eafe0 size=16 callers=0 calls=0
*/
void sub_12eafe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eafe0ULL || rel >= 0x12eaff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eaff0 size=16 callers=0 calls=0
*/
void sub_12eaff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eaff0ULL || rel >= 0x12eb000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb000 size=16 callers=0 calls=0
*/
void sub_12eb000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb000ULL || rel >= 0x12eb010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb010 size=32 callers=0 calls=0
*/
void sub_12eb010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb010ULL || rel >= 0x12eb030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb030 size=16 callers=0 calls=0
*/
void sub_12eb030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb030ULL || rel >= 0x12eb040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb040 size=16 callers=0 calls=0
*/
void sub_12eb040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb040ULL || rel >= 0x12eb050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb050 size=16 callers=0 calls=0
*/
void sub_12eb050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb050ULL || rel >= 0x12eb060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb060 size=48 callers=0 calls=0
*/
void sub_12eb060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb060ULL || rel >= 0x12eb090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb090 size=16 callers=0 calls=0
*/
void sub_12eb090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb090ULL || rel >= 0x12eb0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb0a0 size=16 callers=0 calls=0
*/
void sub_12eb0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb0a0ULL || rel >= 0x12eb0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb0b0 size=16 callers=0 calls=0
*/
void sub_12eb0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb0b0ULL || rel >= 0x12eb0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb0c0 size=1360 callers=0 calls=6
   calls: sub_12d2130, sub_12d8f90, sub_12e9a10, sub_14ab740, sub_14ab810, sub_766730
*/
void sub_12eb0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb0c0ULL || rel >= 0x12eb610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb610 size=16 callers=0 calls=0
*/
void sub_12eb610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb610ULL || rel >= 0x12eb620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb620 size=16 callers=0 calls=0
*/
void sub_12eb620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb620ULL || rel >= 0x12eb630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb630 size=16 callers=0 calls=0
*/
void sub_12eb630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb630ULL || rel >= 0x12eb640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb640 size=16 callers=0 calls=0
*/
void sub_12eb640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb640ULL || rel >= 0x12eb650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb650 size=16 callers=0 calls=0
*/
void sub_12eb650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb650ULL || rel >= 0x12eb660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb660 size=16 callers=0 calls=0
*/
void sub_12eb660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb660ULL || rel >= 0x12eb670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb670 size=16 callers=0 calls=0
*/
void sub_12eb670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb670ULL || rel >= 0x12eb680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb680 size=160 callers=0 calls=0
*/
void sub_12eb680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb680ULL || rel >= 0x12eb720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eb720 size=1136 callers=0 calls=15
   calls: anime_L_poke_name_00_g_ptn, sub_12cdff0, sub_12cfb60, sub_12cfcb0, sub_12d1880, sub_12d1f00, sub_12d8970, sub_12e85c0, sub_1502120, sub_5cfad0, sub_795bc0, sub_c39c40
   ... +3 more
   ref: PokeStatusInfoView
   ref: PokeStatusBgView
   ref: PokeStatusStartState
   ref: PokeStatusSkillView
*/
void PokeStatusStartState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eb720ULL || rel >= 0x12ebb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ebb90 size=16 callers=0 calls=0
*/
void sub_12ebb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ebb90ULL || rel >= 0x12ebba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ebba0 size=16 callers=0 calls=0
*/
void sub_12ebba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ebba0ULL || rel >= 0x12ebbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ebbb0 size=16 callers=0 calls=0
*/
void sub_12ebbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ebbb0ULL || rel >= 0x12ebbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ebbc0 size=16 callers=0 calls=0
*/
void sub_12ebbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ebbc0ULL || rel >= 0x12ebbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ebbd0 size=16 callers=0 calls=0
*/
void sub_12ebbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ebbd0ULL || rel >= 0x12ebbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ebbe0 size=16 callers=0 calls=0
*/
void sub_12ebbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ebbe0ULL || rel >= 0x12ebbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ebbf0 size=16 callers=0 calls=0
*/
void sub_12ebbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ebbf0ULL || rel >= 0x12ebc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ebc00 size=16 callers=0 calls=0
*/
void sub_12ebc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ebc00ULL || rel >= 0x12ebc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ebc10 size=16 callers=0 calls=0
*/
void sub_12ebc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ebc10ULL || rel >= 0x12ebc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ebc20 size=16 callers=0 calls=0
*/
void sub_12ebc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ebc20ULL || rel >= 0x12ebc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ebc30 size=304 callers=0 calls=0
*/
void sub_12ebc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ebc30ULL || rel >= 0x12ebd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ebd60 size=160 callers=0 calls=0
*/
void sub_12ebd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ebd60ULL || rel >= 0x12ebe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ebe00 size=784 callers=0 calls=11
   calls: sub_12cdff0, sub_12cff50, sub_12d6a80, sub_12ec310, sub_14aad40, sub_1502120, sub_5cfad0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: PokeStatusTrainingStartState
   ref: PokeStatusTrainingView
   ref: PokeStatusAbilityView
*/
void PokeStatusTrainingView_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ebe00ULL || rel >= 0x12ec110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec110 size=64 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_12ec110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec110ULL || rel >= 0x12ec150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec150 size=16 callers=0 calls=0
*/
void sub_12ec150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec150ULL || rel >= 0x12ec160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec160 size=16 callers=0 calls=0
*/
void sub_12ec160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec160ULL || rel >= 0x12ec170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec170 size=16 callers=0 calls=0
*/
void sub_12ec170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec170ULL || rel >= 0x12ec180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec180 size=16 callers=0 calls=0
*/
void sub_12ec180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec180ULL || rel >= 0x12ec190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec190 size=16 callers=0 calls=0
*/
void sub_12ec190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec190ULL || rel >= 0x12ec1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec1a0 size=16 callers=0 calls=0
*/
void sub_12ec1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec1a0ULL || rel >= 0x12ec1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec1b0 size=16 callers=0 calls=0
*/
void sub_12ec1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec1b0ULL || rel >= 0x12ec1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec1c0 size=16 callers=0 calls=0
*/
void sub_12ec1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec1c0ULL || rel >= 0x12ec1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec1d0 size=16 callers=0 calls=0
*/
void sub_12ec1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec1d0ULL || rel >= 0x12ec1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec1e0 size=304 callers=0 calls=0
*/
void sub_12ec1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec1e0ULL || rel >= 0x12ec310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec310 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_12ec310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec310ULL || rel >= 0x12ec460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec460 size=160 callers=0 calls=0
*/
void sub_12ec460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec460ULL || rel >= 0x12ec500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec500 size=1216 callers=0 calls=10
   calls: sub_12cfcb0, sub_12cff50, sub_12d1f00, sub_12d51b0, sub_12d8970, sub_12ec310, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0
   ref: PokeStatusTrainingState
   ref: PokeStatusInfoView
   ref: PokeStatusBgView
   ref: PokeStatusTrainingView
   ref: PokeStatusAbilityView
*/
void PokeStatusTrainingView_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec500ULL || rel >= 0x12ec9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ec9c0 size=400 callers=0 calls=12
   calls: sub_12cdff0, sub_12d1f50, sub_12d7e50, sub_12ecb50, sub_12eded0, sub_12edf50, sub_12ef5d0, sub_e80580, sub_e807f0, sub_eb6230, sub_eb6530, sub_eb8e80
*/
void sub_12ec9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec9c0ULL || rel >= 0x12ecb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ecb50 size=352 callers=1 calls=2
   calls: sub_12cdff0, sub_1315270
*/
void sub_12ecb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ecb50ULL || rel >= 0x12eccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eccb0 size=16 callers=0 calls=0
*/
void sub_12eccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eccb0ULL || rel >= 0x12eccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eccc0 size=656 callers=0 calls=6
   calls: sub_1311c60, sub_67d450, sub_c39c40, sub_e7eb10, sub_e807f0, sub_eb8930
*/
void sub_12eccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eccc0ULL || rel >= 0x12ecf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ecf50 size=16 callers=0 calls=0
*/
void sub_12ecf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ecf50ULL || rel >= 0x12ecf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ecf60 size=16 callers=0 calls=0
*/
void sub_12ecf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ecf60ULL || rel >= 0x12ecf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ecf70 size=16 callers=0 calls=0
*/
void sub_12ecf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ecf70ULL || rel >= 0x12ecf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ecf80 size=16 callers=0 calls=0
*/
void sub_12ecf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ecf80ULL || rel >= 0x12ecf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ecf90 size=16 callers=0 calls=0
*/
void sub_12ecf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ecf90ULL || rel >= 0x12ecfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ecfa0 size=16 callers=0 calls=0
*/
void sub_12ecfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ecfa0ULL || rel >= 0x12ecfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ecfb0 size=16 callers=0 calls=0
*/
void sub_12ecfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ecfb0ULL || rel >= 0x12ecfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ecfc0 size=16 callers=0 calls=0
*/
void sub_12ecfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ecfc0ULL || rel >= 0x12ecfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ecfd0 size=304 callers=0 calls=0
*/
void sub_12ecfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ecfd0ULL || rel >= 0x12ed100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ed100 size=160 callers=0 calls=0
*/
void sub_12ed100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ed100ULL || rel >= 0x12ed1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ed1a0 size=768 callers=0 calls=9
   calls: sub_12d2130, sub_12ed4a0, sub_12ed920, sub_12ed9e0, sub_14e1a30, sub_763630, sub_7a3c20, sub_e84190, sub_e84310
*/
void sub_12ed1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ed1a0ULL || rel >= 0x12ed4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ed4a0 size=1152 callers=1 calls=7
   calls: sub_14ab040, sub_14e1a00, sub_14e6d90, sub_8f19b0, sub_e7eb10, sub_e83430, sub_e83e60
*/
void sub_12ed4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ed4a0ULL || rel >= 0x12ed920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ed920 size=192 callers=1 calls=1
   calls: sub_14e6d90
*/
void sub_12ed920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ed920ULL || rel >= 0x12ed9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ed9e0 size=768 callers=1 calls=8
   calls: sub_12edfc0, sub_1315b90, sub_1367a30, sub_14ac370, sub_67d450, sub_8d8330, sub_8f19b0, sub_e7eb10
*/
void sub_12ed9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ed9e0ULL || rel >= 0x12edce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012edce0 size=16 callers=0 calls=0
*/
void sub_12edce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12edce0ULL || rel >= 0x12edcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012edcf0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/gtraining/bin/gtraining_window_lyt.bin
   ref: bin/appli/gtraining/bin/uikit_gtraining_window.bin
*/
void uikit_gtraining_window(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12edcf0ULL || rel >= 0x12eded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eded0 size=128 callers=1 calls=3
   calls: sub_14e1a00, sub_14e1a30, sub_14e6550
*/
void sub_12eded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eded0ULL || rel >= 0x12edf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012edf50 size=112 callers=1 calls=4
   calls: sub_14e1a30, sub_14e6550, sub_14e6d50, sub_1500c40
*/
void sub_12edf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12edf50ULL || rel >= 0x12edfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012edfc0 size=400 callers=2 calls=4
   calls: sub_1315b90, sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_12edfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12edfc0ULL || rel >= 0x12ee150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee150 size=912 callers=1 calls=6
   calls: sub_12d2130, sub_134f3e0, sub_1354890, sub_1367510, sub_7635d0, sub_763a10
*/
void sub_12ee150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee150ULL || rel >= 0x12ee4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee4e0 size=144 callers=0 calls=0
*/
void sub_12ee4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee4e0ULL || rel >= 0x12ee570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee570 size=144 callers=0 calls=0
*/
void sub_12ee570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee570ULL || rel >= 0x12ee600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee600 size=16 callers=0 calls=0
*/
void sub_12ee600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee600ULL || rel >= 0x12ee610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee610 size=144 callers=0 calls=0
*/
void sub_12ee610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee610ULL || rel >= 0x12ee6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee6a0 size=144 callers=0 calls=0
*/
void sub_12ee6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee6a0ULL || rel >= 0x12ee730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee730 size=16 callers=0 calls=0
*/
void sub_12ee730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee730ULL || rel >= 0x12ee740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee740 size=16 callers=0 calls=0
*/
void sub_12ee740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee740ULL || rel >= 0x12ee750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee750 size=144 callers=0 calls=0
*/
void sub_12ee750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee750ULL || rel >= 0x12ee7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee7e0 size=144 callers=0 calls=0
*/
void sub_12ee7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee7e0ULL || rel >= 0x12ee870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee870 size=304 callers=0 calls=0
*/
void sub_12ee870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee870ULL || rel >= 0x12ee9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee9a0 size=48 callers=0 calls=1
   calls: sub_14e1a30
*/
void sub_12ee9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee9a0ULL || rel >= 0x12ee9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee9d0 size=16 callers=0 calls=0
*/
void sub_12ee9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee9d0ULL || rel >= 0x12ee9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee9e0 size=16 callers=0 calls=0
*/
void sub_12ee9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee9e0ULL || rel >= 0x12ee9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ee9f0 size=16 callers=0 calls=0
*/
void sub_12ee9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ee9f0ULL || rel >= 0x12eea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eea00 size=352 callers=0 calls=5
   calls: sub_12edfc0, sub_14e1a00, sub_14e6d90, sub_1500c40, sub_e83430
*/
void sub_12eea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eea00ULL || rel >= 0x12eeb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eeb60 size=16 callers=0 calls=0
*/
void sub_12eeb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eeb60ULL || rel >= 0x12eeb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eeb70 size=16 callers=0 calls=0
*/
void sub_12eeb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eeb70ULL || rel >= 0x12eeb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eeb80 size=16 callers=0 calls=0
*/
void sub_12eeb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eeb80ULL || rel >= 0x12eeb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eeb90 size=48 callers=0 calls=1
   calls: sub_12ee150
*/
void sub_12eeb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eeb90ULL || rel >= 0x12eebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eebc0 size=16 callers=0 calls=0
*/
void sub_12eebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eebc0ULL || rel >= 0x12eebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eebd0 size=16 callers=0 calls=0
*/
void sub_12eebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eebd0ULL || rel >= 0x12eebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eebe0 size=16 callers=0 calls=0
*/
void sub_12eebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eebe0ULL || rel >= 0x12eebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eebf0 size=160 callers=0 calls=0
*/
void sub_12eebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eebf0ULL || rel >= 0x12eec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eec90 size=720 callers=1 calls=2
   calls: sub_67b990, sub_e7c210
*/
void sub_12eec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eec90ULL || rel >= 0x12eef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eef60 size=384 callers=1 calls=1
   calls: fel_999_2
*/
void sub_12eef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eef60ULL || rel >= 0x12ef0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef0e0 size=160 callers=0 calls=0
*/
void sub_12ef0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef0e0ULL || rel >= 0x12ef180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef180 size=160 callers=0 calls=0
*/
void sub_12ef180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef180ULL || rel >= 0x12ef220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef220 size=160 callers=0 calls=0
*/
void sub_12ef220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef220ULL || rel >= 0x12ef2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef2c0 size=160 callers=0 calls=0
*/
void sub_12ef2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef2c0ULL || rel >= 0x12ef360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef360 size=160 callers=0 calls=0
*/
void sub_12ef360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef360ULL || rel >= 0x12ef400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef400 size=160 callers=0 calls=0
*/
void sub_12ef400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef400ULL || rel >= 0x12ef4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef4a0 size=160 callers=1 calls=1
   calls: sub_67d450
*/
void sub_12ef4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef4a0ULL || rel >= 0x12ef540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef540 size=32 callers=12 calls=1
   calls: sub_12d2130
*/
void sub_12ef540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef540ULL || rel >= 0x12ef560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef560 size=112 callers=8 calls=3
   calls: sub_12d2130, sub_12f9ef0, sub_1503280
*/
void sub_12ef560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef560ULL || rel >= 0x12ef5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef5d0 size=16 callers=7 calls=0
*/
void sub_12ef5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef5d0ULL || rel >= 0x12ef5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef5e0 size=16 callers=1 calls=0
*/
void sub_12ef5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef5e0ULL || rel >= 0x12ef5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef5f0 size=16 callers=1 calls=0
*/
void sub_12ef5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef5f0ULL || rel >= 0x12ef600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef600 size=32 callers=1 calls=0
*/
void sub_12ef600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef600ULL || rel >= 0x12ef620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef620 size=48 callers=16 calls=1
   calls: sub_14db6e0
*/
void sub_12ef620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef620ULL || rel >= 0x12ef650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef650 size=288 callers=5 calls=9
   calls: Stop_Event_PM_Voice, sub_12d2130, sub_1504d70, sub_1505660, sub_762930, sub_762940, sub_763d50, sub_763dc0, sub_767950
*/
void sub_12ef650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef650ULL || rel >= 0x12ef770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef770 size=16 callers=0 calls=0
*/
void sub_12ef770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef770ULL || rel >= 0x12ef780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef780 size=16 callers=0 calls=0
*/
void sub_12ef780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef780ULL || rel >= 0x12ef790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef790 size=16 callers=0 calls=0
*/
void sub_12ef790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef790ULL || rel >= 0x12ef7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef7a0 size=128 callers=0 calls=1
   calls: Stop_Event_PM_Voice
*/
void sub_12ef7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef7a0ULL || rel >= 0x12ef820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef820 size=16 callers=0 calls=0
*/
void sub_12ef820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef820ULL || rel >= 0x12ef830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef830 size=16 callers=0 calls=0
*/
void sub_12ef830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef830ULL || rel >= 0x12ef840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef840 size=16 callers=0 calls=0
*/
void sub_12ef840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef840ULL || rel >= 0x12ef850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef850 size=160 callers=0 calls=0
*/
void sub_12ef850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef850ULL || rel >= 0x12ef8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ef8f0 size=448 callers=2 calls=2
   calls: sub_5db3d0, sub_65d700
*/
void sub_12ef8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef8f0ULL || rel >= 0x12efab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012efab0 size=144 callers=1 calls=2
   calls: sub_12efb40, unnamed_45
*/
void sub_12efab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12efab0ULL || rel >= 0x12efb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012efb40 size=416 callers=3 calls=2
   calls: sub_12f6d30, sub_b79260
*/
void sub_12efb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12efb40ULL || rel >= 0x12efce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012efce0 size=672 callers=1 calls=7
   calls: sub_12f4880, sub_12f4900, sub_5dd790, sub_5e2930, sub_5e6280, sub_76d0d0, sub_793480
   ref: .gfpak
   ref: bin/archive/gpokemon/
*/
void unnamed_45(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12efce0ULL || rel >= 0x12eff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012eff80 size=128 callers=1 calls=2
   calls: Origin_7, sub_12f0000
*/
void sub_12eff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12eff80ULL || rel >= 0x12f0000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f0000 size=256 callers=1 calls=3
   calls: gfbgpokecfg, sub_12efb40, sub_1c0
*/
void sub_12f0000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f0000ULL || rel >= 0x12f0100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f0100 size=32 callers=1 calls=0
*/
void sub_12f0100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f0100ULL || rel >= 0x12f0120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f0120 size=736 callers=1 calls=6
   calls: sub_12efb40, sub_12f0400, sub_59bee0, sub_6288e0, sub_967240, unnamed_46
*/
void sub_12f0120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f0120ULL || rel >= 0x12f0400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f0400 size=352 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_12f0400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f0400ULL || rel >= 0x12f0560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f0560 size=736 callers=2 calls=6
   calls: sub_12f4990, sub_5e2930, sub_5e3870, sub_76d0d0, sub_793480, sub_d700
   ref: bin/pokemon/
   ref: /g_shader/
*/
void unnamed_46(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f0560ULL || rel >= 0x12f0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f0840 size=528 callers=1 calls=2
   calls: sub_59bee0, sub_967240
*/
void sub_12f0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f0840ULL || rel >= 0x12f0a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f0a50 size=3824 callers=1 calls=21
   calls: sub_12f6050, sub_12f6140, sub_598de0, sub_59a4f0, sub_59bee0, sub_5d99d0, sub_5e2bc0, sub_60fdb0, sub_61be70, sub_61bf10, sub_65cd90, sub_68d630
   ... +9 more
   ref: EffectTex
   ref: gloop01
   ref: NexConnectStationJob::WaitForNatTraversalCompletedByRelay
*/
void EffectTex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f0a50ULL || rel >= 0x12f1940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f1940 size=4688 callers=1 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e2bc0, sub_607750, sub_68d9f0, sub_96c6c0, sub_96ccf0
*/
void sub_12f1940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f1940ULL || rel >= 0x12f2b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f2b90 size=176 callers=4 calls=4
   calls: sub_618d40, sub_618ec0, sub_68da40, sub_68da70
*/
void sub_12f2b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f2b90ULL || rel >= 0x12f2c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f2c40 size=224 callers=3 calls=4
   calls: sub_618d40, sub_68da40, sub_68da70, sub_ee5c70
*/
void sub_12f2c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f2c40ULL || rel >= 0x12f2d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f2d20 size=112 callers=1 calls=2
   calls: sub_619060, sub_68da60
*/
void sub_12f2d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f2d20ULL || rel >= 0x12f2d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f2d90 size=192 callers=2 calls=2
   calls: sub_619060, sub_68da60
*/
void sub_12f2d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f2d90ULL || rel >= 0x12f2e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f2e50 size=416 callers=1 calls=3
   calls: sub_68d950, sub_68d9b0, sub_68da60
*/
void sub_12f2e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f2e50ULL || rel >= 0x12f2ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f2ff0 size=6272 callers=0 calls=17
   calls: sub_12f4df0, sub_59bee0, sub_612ef0, sub_612f70, sub_65cd90, sub_670800, sub_670810, sub_670820, sub_670830, sub_671b00, sub_671e80, sub_68d910
   ... +5 more
   ref: EffCenter01
   ref: NexConnectStationJob::WaitForNatTraversalCompletedByRelay
*/
void EffCenter01_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f2ff0ULL || rel >= 0x12f4870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f4870 size=16 callers=0 calls=0
*/
void sub_12f4870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f4870ULL || rel >= 0x12f4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f4880 size=128 callers=2 calls=1
   calls: sub_d0c0
*/
void sub_12f4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f4880ULL || rel >= 0x12f4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f4900 size=144 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_12f4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f4900ULL || rel >= 0x12f4990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f4990 size=208 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_12f4990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f4990ULL || rel >= 0x12f4a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f4a60 size=784 callers=1 calls=6
   calls: sub_12f4d70, sub_5dd790, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_793480
   ref: .gfbgpokecfg
*/
void gfbgpokecfg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f4a60ULL || rel >= 0x12f4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f4d70 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_12f4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f4d70ULL || rel >= 0x12f4df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f4df0 size=400 callers=3 calls=3
   calls: sub_671e80, sub_967240, sub_b8b370
*/
void sub_12f4df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f4df0ULL || rel >= 0x12f4f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f4f80 size=736 callers=0 calls=3
   calls: sub_12f5400, sub_5e2bc0, sub_629ef0
*/
void sub_12f4f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f4f80ULL || rel >= 0x12f5260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f5260 size=16 callers=0 calls=0
*/
void sub_12f5260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f5260ULL || rel >= 0x12f5270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f5270 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_12f5270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f5270ULL || rel >= 0x12f52e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f52e0 size=16 callers=0 calls=0
*/
void sub_12f52e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f52e0ULL || rel >= 0x12f52f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f52f0 size=16 callers=0 calls=0
*/
void sub_12f52f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f52f0ULL || rel >= 0x12f5300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f5300 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_12f5300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f5300ULL || rel >= 0x12f5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f5370 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_12f5370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f5370ULL || rel >= 0x12f53e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f53e0 size=16 callers=0 calls=0
*/
void sub_12f53e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f53e0ULL || rel >= 0x12f53f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f53f0 size=16 callers=0 calls=0
*/
void sub_12f53f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f53f0ULL || rel >= 0x12f5400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f5400 size=320 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_12f5400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f5400ULL || rel >= 0x12f5540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f5540 size=352 callers=1 calls=1
   calls: sub_5e2350
   ref: Origin
*/
void Origin_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f5540ULL || rel >= 0x12f56a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f56a0 size=144 callers=0 calls=0
*/
void sub_12f56a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f56a0ULL || rel >= 0x12f5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f5730 size=144 callers=0 calls=0
*/
void sub_12f5730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f5730ULL || rel >= 0x12f57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f57c0 size=240 callers=0 calls=0
*/
void sub_12f57c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f57c0ULL || rel >= 0x12f58b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f58b0 size=144 callers=0 calls=0
*/
void sub_12f58b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f58b0ULL || rel >= 0x12f5940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f5940 size=144 callers=0 calls=0
*/
void sub_12f5940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f5940ULL || rel >= 0x12f59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f59d0 size=16 callers=0 calls=0
*/
void sub_12f59d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f59d0ULL || rel >= 0x12f59e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f59e0 size=16 callers=0 calls=0
*/
void sub_12f59e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f59e0ULL || rel >= 0x12f59f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f59f0 size=144 callers=0 calls=0
*/
void sub_12f59f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f59f0ULL || rel >= 0x12f5a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f5a80 size=144 callers=0 calls=0
*/
void sub_12f5a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f5a80ULL || rel >= 0x12f5b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f5b10 size=864 callers=0 calls=2
   calls: sub_12f5e70, sub_5e2bc0
*/
void sub_12f5b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f5b10ULL || rel >= 0x12f5e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f5e70 size=480 callers=1 calls=0
*/
void sub_12f5e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f5e70ULL || rel >= 0x12f6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f6050 size=240 callers=2 calls=1
   calls: sub_598a60
*/
void sub_12f6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f6050ULL || rel >= 0x12f6140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f6140 size=224 callers=5 calls=1
   calls: sub_68d230
*/
void sub_12f6140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f6140ULL || rel >= 0x12f6220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f6220 size=16 callers=0 calls=0
*/
void sub_12f6220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f6220ULL || rel >= 0x12f6230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f6230 size=16 callers=0 calls=0
*/
void sub_12f6230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f6230ULL || rel >= 0x12f6240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f6240 size=1808 callers=0 calls=0
*/
void sub_12f6240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f6240ULL || rel >= 0x12f6950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f6950 size=16 callers=0 calls=0
*/
void sub_12f6950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f6950ULL || rel >= 0x12f6960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f6960 size=16 callers=0 calls=0
*/
void sub_12f6960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f6960ULL || rel >= 0x12f6970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f6970 size=224 callers=4 calls=4
   calls: sub_762d70, sub_763000, sub_767720, sub_767950
*/
void sub_12f6970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f6970ULL || rel >= 0x12f6a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f6a50 size=208 callers=6 calls=4
   calls: sub_762d70, sub_763000, sub_767720, sub_767950
*/
void sub_12f6a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f6a50ULL || rel >= 0x12f6b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f6b20 size=256 callers=1 calls=6
   calls: sub_762d70, sub_763000, sub_767720, sub_767730, sub_767950, sub_786420
*/
void sub_12f6b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f6b20ULL || rel >= 0x12f6c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f6c20 size=272 callers=1 calls=8
   calls: sub_762d70, sub_763000, sub_767720, sub_767730, sub_767950, sub_7863b0, sub_786410, sub_786420
*/
void sub_12f6c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f6c20ULL || rel >= 0x12f6d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f6d30 size=64 callers=4 calls=0
*/
void sub_12f6d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f6d30ULL || rel >= 0x12f6d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f6d70 size=1376 callers=1 calls=6
   calls: sub_12f72d0, sub_12f8780, sub_5dd790, sub_5e26a0, sub_5e2930, sub_8c2c10
   ref: bin/pokemon/table/poke_resource_table.gfbpmcatalog
   ref: bin/pokemon/table/gpoke_resource_table.gfbpmcatalog
*/
void poke_resource_table_gfbpmcatalog(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f6d70ULL || rel >= 0x12f72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f72d0 size=2592 callers=2 calls=3
   calls: sub_12f8b90, sub_12f8c90, sub_12f8ee0
*/
void sub_12f72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f72d0ULL || rel >= 0x12f7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f7cf0 size=400 callers=0 calls=2
   calls: sub_12f7e80, sub_5e2bc0
*/
void sub_12f7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f7cf0ULL || rel >= 0x12f7e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f7e80 size=1168 callers=2 calls=2
   calls: sub_5e2bc0, sub_682dd0
*/
void sub_12f7e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f7e80ULL || rel >= 0x12f8310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8310 size=16 callers=0 calls=0
*/
void sub_12f8310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8310ULL || rel >= 0x12f8320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8320 size=16 callers=0 calls=0
*/
void sub_12f8320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8320ULL || rel >= 0x12f8330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8330 size=16 callers=0 calls=0
*/
void sub_12f8330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8330ULL || rel >= 0x12f8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8340 size=16 callers=6 calls=0
*/
void sub_12f8340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8340ULL || rel >= 0x12f8350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8350 size=16 callers=6 calls=0
*/
void sub_12f8350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8350ULL || rel >= 0x12f8360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8360 size=16 callers=6 calls=0
*/
void sub_12f8360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8360ULL || rel >= 0x12f8370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8370 size=16 callers=6 calls=0
*/
void sub_12f8370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8370ULL || rel >= 0x12f8380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8380 size=560 callers=1 calls=1
   calls: sub_b79260
*/
void sub_12f8380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8380ULL || rel >= 0x12f85b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f85b0 size=304 callers=4 calls=1
   calls: sub_12f8380
*/
void sub_12f85b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f85b0ULL || rel >= 0x12f86e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f86e0 size=112 callers=4 calls=1
   calls: sub_b79260
*/
void sub_12f86e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f86e0ULL || rel >= 0x12f8750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8750 size=48 callers=0 calls=1
   calls: sub_12f7e80
*/
void sub_12f8750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8750ULL || rel >= 0x12f8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8780 size=384 callers=2 calls=2
   calls: sub_5e2350, sub_65d700
*/
void sub_12f8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8780ULL || rel >= 0x12f8900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8900 size=304 callers=0 calls=2
   calls: sub_12f8b90, sub_5e2bc0
*/
void sub_12f8900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8900ULL || rel >= 0x12f8a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8a30 size=16 callers=0 calls=0
*/
void sub_12f8a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8a30ULL || rel >= 0x12f8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8a40 size=240 callers=0 calls=0
*/
void sub_12f8a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8a40ULL || rel >= 0x12f8b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8b30 size=16 callers=0 calls=0
*/
void sub_12f8b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8b30ULL || rel >= 0x12f8b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8b40 size=16 callers=0 calls=0
*/
void sub_12f8b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8b40ULL || rel >= 0x12f8b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8b50 size=16 callers=0 calls=0
*/
void sub_12f8b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8b50ULL || rel >= 0x12f8b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8b60 size=16 callers=0 calls=0
*/
void sub_12f8b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8b60ULL || rel >= 0x12f8b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8b70 size=16 callers=0 calls=0
*/
void sub_12f8b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8b70ULL || rel >= 0x12f8b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8b80 size=16 callers=0 calls=0
*/
void sub_12f8b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8b80ULL || rel >= 0x12f8b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8b90 size=256 callers=2 calls=0
*/
void sub_12f8b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8b90ULL || rel >= 0x12f8c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8c90 size=592 callers=1 calls=2
   calls: sub_12f8ee0, sub_12f92b0
*/
void sub_12f8c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8c90ULL || rel >= 0x12f8ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

