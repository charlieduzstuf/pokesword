/* main functions 00ac3290..00ae22d0 (82 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00ac3290 size=128 callers=0 calls=4
   calls: PostEventName, sub_14cae50, sub_e76980, sub_e7ea20
*/
void sub_ac3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac3290ULL || rel >= 0xac3310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac3310 size=5488 callers=0 calls=13
   calls: sub_13083a0, sub_14aad40, sub_abc650, sub_abc660, sub_abc680, sub_ac4880, sub_ac5b50, sub_acb3d0, sub_afb600, sub_afb680, sub_afb700, sub_afb780
   ... +1 more
   ref: common/btl_pokeselect.dat
   ref: common/btl_bgm_select.dat
   ref: common/btlspot.dat
   ref: StateBtlSpotRankMatchPrepareMatching
   ref: StateBtlSpotCasualMatchBattle
   ref: StateBtlSpotTop
   ref: StateBtlSpotCompBattleEntrance
   ref: StateBtlSpotRankMatchBattle
*/
void StateBtlSpotRankMatchBattle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac3310ULL || rel >= 0xac4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac4880 size=352 callers=62 calls=0
*/
void sub_ac4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac4880ULL || rel >= 0xac49e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac49e0 size=176 callers=0 calls=5
   calls: sub_14cae60, sub_abf420, sub_ac4880, sub_ac4a90, sub_ad20e0
*/
void sub_ac49e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac49e0ULL || rel >= 0xac4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac4a90 size=352 callers=17 calls=0
*/
void sub_ac4a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac4a90ULL || rel >= 0xac4bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac4bf0 size=2320 callers=0 calls=19
   calls: sub_ac5b50, sub_acb4d0, sub_acb8e0, sub_acbb50, sub_acbe70, sub_acc0e0, sub_acc360, sub_acc5e0, sub_acc840, sub_acc960, sub_accc50, sub_acced0
   ... +7 more
*/
void sub_ac4bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac4bf0ULL || rel >= 0xac5500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac5500 size=448 callers=0 calls=8
   calls: sub_14caf00, sub_1502120, sub_abf400, sub_abf420, sub_ac4880, sub_ac4a90, sub_e769b0, sub_e76a20
   ref: Stop_UI_netbattle_rank_count_loop
*/
void Stop_UI_netbattle_rank_count_loop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac5500ULL || rel >= 0xac56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac56c0 size=560 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_ac56c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac56c0ULL || rel >= 0xac58f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac58f0 size=16 callers=0 calls=0
*/
void sub_ac58f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac58f0ULL || rel >= 0xac5900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac5900 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_ac5900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac5900ULL || rel >= 0xac59b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac59b0 size=16 callers=0 calls=0
*/
void sub_ac59b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac59b0ULL || rel >= 0xac59c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac59c0 size=16 callers=0 calls=0
*/
void sub_ac59c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac59c0ULL || rel >= 0xac59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac59d0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_ac59d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac59d0ULL || rel >= 0xac5a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac5a80 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_ac5a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac5a80ULL || rel >= 0xac5b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac5b30 size=16 callers=0 calls=0
*/
void sub_ac5b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac5b30ULL || rel >= 0xac5b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac5b40 size=16 callers=0 calls=0
*/
void sub_ac5b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac5b40ULL || rel >= 0xac5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac5b50 size=304 callers=313 calls=0
*/
void sub_ac5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac5b50ULL || rel >= 0xac5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac5c80 size=288 callers=1 calls=2
   calls: sub_ac5da0, sub_e809c0
*/
void sub_ac5c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac5c80ULL || rel >= 0xac5da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac5da0 size=384 callers=1 calls=3
   calls: sub_790490, sub_ac5f20, sub_e7fe20
*/
void sub_ac5da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac5da0ULL || rel >= 0xac5f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac5f20 size=368 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ac5f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac5f20ULL || rel >= 0xac6090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac6090 size=288 callers=1 calls=2
   calls: sub_ac61b0, sub_e809c0
*/
void sub_ac6090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac6090ULL || rel >= 0xac61b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac61b0 size=384 callers=1 calls=3
   calls: sub_790490, sub_ac6330, sub_e7fe20
*/
void sub_ac61b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac61b0ULL || rel >= 0xac6330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac6330 size=368 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ac6330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac6330ULL || rel >= 0xac64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac64a0 size=288 callers=1 calls=2
   calls: sub_ac65c0, sub_e809c0
*/
void sub_ac64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac64a0ULL || rel >= 0xac65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac65c0 size=384 callers=1 calls=3
   calls: sub_790490, sub_ac6740, sub_e7fe20
*/
void sub_ac65c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac65c0ULL || rel >= 0xac6740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac6740 size=368 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ac6740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac6740ULL || rel >= 0xac68b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac68b0 size=288 callers=1 calls=2
   calls: sub_ac69d0, sub_e809c0
*/
void sub_ac68b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac68b0ULL || rel >= 0xac69d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac69d0 size=384 callers=1 calls=3
   calls: sub_790490, sub_ac6b50, sub_e7fe20
*/
void sub_ac69d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac69d0ULL || rel >= 0xac6b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac6b50 size=384 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ac6b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac6b50ULL || rel >= 0xac6cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac6cd0 size=288 callers=1 calls=2
   calls: sub_ac6df0, sub_e809c0
*/
void sub_ac6cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac6cd0ULL || rel >= 0xac6df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac6df0 size=384 callers=1 calls=3
   calls: sub_790490, sub_ac6f70, sub_e7fe20
*/
void sub_ac6df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac6df0ULL || rel >= 0xac6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac6f70 size=368 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ac6f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac6f70ULL || rel >= 0xac70e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac70e0 size=720 callers=0 calls=0
*/
void sub_ac70e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac70e0ULL || rel >= 0xac73b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac73b0 size=16 callers=0 calls=0
*/
void sub_ac73b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac73b0ULL || rel >= 0xac73c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac73c0 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ac73c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac73c0ULL || rel >= 0xac7470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac7470 size=32 callers=0 calls=0
*/
void sub_ac7470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac7470ULL || rel >= 0xac7490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac7490 size=16 callers=0 calls=0
*/
void sub_ac7490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac7490ULL || rel >= 0xac74a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac74a0 size=16 callers=0 calls=0
*/
void sub_ac74a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac74a0ULL || rel >= 0xac74b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac74b0 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ac74b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac74b0ULL || rel >= 0xac7560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac7560 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ac7560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac7560ULL || rel >= 0xac7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac7610 size=16 callers=0 calls=0
*/
void sub_ac7610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac7610ULL || rel >= 0xac7620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac7620 size=16 callers=0 calls=0
*/
void sub_ac7620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac7620ULL || rel >= 0xac7630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac7630 size=304 callers=51 calls=0
*/
void sub_ac7630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac7630ULL || rel >= 0xac7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac7760 size=288 callers=1 calls=2
   calls: sub_ac7880, sub_e809c0
*/
void sub_ac7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac7760ULL || rel >= 0xac7880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac7880 size=384 callers=1 calls=3
   calls: sub_790490, sub_ac7a00, sub_e7fe20
*/
void sub_ac7880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac7880ULL || rel >= 0xac7a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac7a00 size=384 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ac7a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac7a00ULL || rel >= 0xac7b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac7b80 size=288 callers=1 calls=2
   calls: sub_ac7ca0, sub_e809c0
*/
void sub_ac7b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac7b80ULL || rel >= 0xac7ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac7ca0 size=384 callers=1 calls=3
   calls: sub_790490, sub_ac7e20, sub_e7fe20
*/
void sub_ac7ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac7ca0ULL || rel >= 0xac7e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac7e20 size=368 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ac7e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac7e20ULL || rel >= 0xac7f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac7f90 size=16 callers=0 calls=0
*/
void sub_ac7f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac7f90ULL || rel >= 0xac7fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac7fa0 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ac7fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac7fa0ULL || rel >= 0xac8050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8050 size=16 callers=0 calls=0
*/
void sub_ac8050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8050ULL || rel >= 0xac8060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8060 size=16 callers=0 calls=0
*/
void sub_ac8060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8060ULL || rel >= 0xac8070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8070 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ac8070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8070ULL || rel >= 0xac8120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8120 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ac8120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8120ULL || rel >= 0xac81d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac81d0 size=16 callers=0 calls=0
*/
void sub_ac81d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac81d0ULL || rel >= 0xac81e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac81e0 size=16 callers=0 calls=0
*/
void sub_ac81e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac81e0ULL || rel >= 0xac81f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac81f0 size=288 callers=1 calls=2
   calls: sub_ac8310, sub_e809c0
*/
void sub_ac81f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac81f0ULL || rel >= 0xac8310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8310 size=384 callers=1 calls=3
   calls: sub_790490, sub_ac8490, sub_e7fe20
*/
void sub_ac8310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8310ULL || rel >= 0xac8490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8490 size=368 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ac8490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8490ULL || rel >= 0xac8600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8600 size=288 callers=1 calls=2
   calls: sub_ac8720, sub_e809c0
*/
void sub_ac8600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8600ULL || rel >= 0xac8720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8720 size=384 callers=1 calls=3
   calls: sub_790490, sub_ac88a0, sub_e7fe20
*/
void sub_ac8720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8720ULL || rel >= 0xac88a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac88a0 size=368 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ac88a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac88a0ULL || rel >= 0xac8a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8a10 size=16 callers=0 calls=0
*/
void sub_ac8a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8a10ULL || rel >= 0xac8a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8a20 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ac8a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8a20ULL || rel >= 0xac8ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8ad0 size=16 callers=0 calls=0
*/
void sub_ac8ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8ad0ULL || rel >= 0xac8ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8ae0 size=16 callers=0 calls=0
*/
void sub_ac8ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8ae0ULL || rel >= 0xac8af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8af0 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ac8af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8af0ULL || rel >= 0xac8ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8ba0 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ac8ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8ba0ULL || rel >= 0xac8c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8c50 size=16 callers=0 calls=0
*/
void sub_ac8c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8c50ULL || rel >= 0xac8c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8c60 size=16 callers=0 calls=0
*/
void sub_ac8c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8c60ULL || rel >= 0xac8c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8c70 size=288 callers=1 calls=2
   calls: sub_ac8d90, sub_e809c0
*/
void sub_ac8c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8c70ULL || rel >= 0xac8d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8d90 size=384 callers=1 calls=3
   calls: sub_790490, sub_ac8f10, sub_e7fe20
*/
void sub_ac8d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8d90ULL || rel >= 0xac8f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac8f10 size=432 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ac8f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac8f10ULL || rel >= 0xac90c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac90c0 size=288 callers=1 calls=2
   calls: sub_ac91e0, sub_e809c0
*/
void sub_ac90c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac90c0ULL || rel >= 0xac91e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac91e0 size=384 callers=1 calls=3
   calls: sub_790490, sub_ac9360, sub_e7fe20
*/
void sub_ac91e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac91e0ULL || rel >= 0xac9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac9360 size=384 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ac9360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac9360ULL || rel >= 0xac94e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac94e0 size=288 callers=1 calls=2
   calls: sub_ac9600, sub_e809c0
*/
void sub_ac94e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac94e0ULL || rel >= 0xac9600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac9600 size=384 callers=1 calls=3
   calls: sub_790490, sub_ac9780, sub_e7fe20
*/
void sub_ac9600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac9600ULL || rel >= 0xac9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac9780 size=400 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ac9780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac9780ULL || rel >= 0xac9910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac9910 size=288 callers=1 calls=2
   calls: sub_ac9a30, sub_e809c0
*/
void sub_ac9910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac9910ULL || rel >= 0xac9a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac9a30 size=384 callers=1 calls=3
   calls: sub_790490, sub_ac9bb0, sub_e7fe20
*/
void sub_ac9a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac9a30ULL || rel >= 0xac9bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac9bb0 size=384 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ac9bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac9bb0ULL || rel >= 0xac9d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac9d30 size=288 callers=1 calls=2
   calls: sub_ac9e50, sub_e809c0
*/
void sub_ac9d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac9d30ULL || rel >= 0xac9e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac9e50 size=384 callers=1 calls=3
   calls: sub_790490, sub_ac9fd0, sub_e7fe20
*/
void sub_ac9e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac9e50ULL || rel >= 0xac9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac9fd0 size=384 callers=1 calls=1
   calls: anonymous_2
*/
void sub_ac9fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac9fd0ULL || rel >= 0xaca150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aca150 size=288 callers=1 calls=2
   calls: sub_aca270, sub_e809c0
*/
void sub_aca150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaca150ULL || rel >= 0xaca270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aca270 size=384 callers=1 calls=3
   calls: sub_790490, sub_aca3f0, sub_e7fe20
*/
void sub_aca270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaca270ULL || rel >= 0xaca3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aca3f0 size=400 callers=1 calls=1
   calls: anonymous_2
*/
void sub_aca3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaca3f0ULL || rel >= 0xaca580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aca580 size=288 callers=1 calls=2
   calls: sub_aca6a0, sub_e809c0
*/
void sub_aca580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaca580ULL || rel >= 0xaca6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aca6a0 size=384 callers=1 calls=3
   calls: sub_790490, sub_aca820, sub_e7fe20
*/
void sub_aca6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaca6a0ULL || rel >= 0xaca820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aca820 size=368 callers=1 calls=1
   calls: anonymous_2
*/
void sub_aca820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaca820ULL || rel >= 0xaca990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aca990 size=288 callers=1 calls=2
   calls: sub_acaab0, sub_e809c0
*/
void sub_aca990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaca990ULL || rel >= 0xacaab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acaab0 size=384 callers=1 calls=3
   calls: sub_790490, sub_acac30, sub_e7fe20
*/
void sub_acaab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacaab0ULL || rel >= 0xacac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acac30 size=608 callers=1 calls=3
   calls: anonymous_2, sub_acae90, sub_ea46c0
*/
void sub_acac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacac30ULL || rel >= 0xacae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acae90 size=464 callers=2 calls=0
*/
void sub_acae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacae90ULL || rel >= 0xacb060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb060 size=288 callers=1 calls=2
   calls: sub_acb180, sub_e809c0
*/
void sub_acb060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb060ULL || rel >= 0xacb180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb180 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_acb180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb180ULL || rel >= 0xacb3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb3d0 size=256 callers=1 calls=1
   calls: sub_ad0ec0
*/
void sub_acb3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb3d0ULL || rel >= 0xacb4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb4d0 size=288 callers=1 calls=1
   calls: sub_acb5f0
*/
void sub_acb4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb4d0ULL || rel >= 0xacb5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb5f0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_acb5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb5f0ULL || rel >= 0xacb730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb730 size=16 callers=0 calls=0
*/
void sub_acb730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb730ULL || rel >= 0xacb740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb740 size=16 callers=0 calls=0
*/
void sub_acb740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb740ULL || rel >= 0xacb750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb750 size=16 callers=0 calls=0
*/
void sub_acb750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb750ULL || rel >= 0xacb760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb760 size=16 callers=0 calls=0
*/
void sub_acb760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb760ULL || rel >= 0xacb770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb770 size=16 callers=0 calls=0
*/
void sub_acb770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb770ULL || rel >= 0xacb780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb780 size=16 callers=0 calls=0
*/
void sub_acb780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb780ULL || rel >= 0xacb790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb790 size=16 callers=0 calls=0
*/
void sub_acb790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb790ULL || rel >= 0xacb7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb7a0 size=16 callers=0 calls=0
*/
void sub_acb7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb7a0ULL || rel >= 0xacb7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb7b0 size=304 callers=0 calls=0
*/
void sub_acb7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb7b0ULL || rel >= 0xacb8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acb8e0 size=288 callers=1 calls=1
   calls: sub_acba00
*/
void sub_acb8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb8e0ULL || rel >= 0xacba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acba00 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_acba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacba00ULL || rel >= 0xacbb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acbb50 size=288 callers=1 calls=1
   calls: sub_acbc70
*/
void sub_acbb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacbb50ULL || rel >= 0xacbc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acbc70 size=512 callers=1 calls=2
   calls: anonymous, sub_65d700
*/
void sub_acbc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacbc70ULL || rel >= 0xacbe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acbe70 size=288 callers=1 calls=1
   calls: sub_acbf90
*/
void sub_acbe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacbe70ULL || rel >= 0xacbf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acbf90 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_acbf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacbf90ULL || rel >= 0xacc0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acc0e0 size=288 callers=1 calls=1
   calls: sub_acc200
*/
void sub_acc0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacc0e0ULL || rel >= 0xacc200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acc200 size=352 callers=1 calls=1
   calls: anonymous
*/
void sub_acc200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacc200ULL || rel >= 0xacc360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acc360 size=288 callers=1 calls=1
   calls: sub_acc480
*/
void sub_acc360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacc360ULL || rel >= 0xacc480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acc480 size=352 callers=1 calls=1
   calls: anonymous
*/
void sub_acc480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacc480ULL || rel >= 0xacc5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acc5e0 size=288 callers=1 calls=1
   calls: sub_acc700
*/
void sub_acc5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacc5e0ULL || rel >= 0xacc700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acc700 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_acc700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacc700ULL || rel >= 0xacc840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acc840 size=288 callers=1 calls=1
   calls: sub_afc030
*/
void sub_acc840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacc840ULL || rel >= 0xacc960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acc960 size=288 callers=1 calls=1
   calls: sub_acca80
*/
void sub_acc960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacc960ULL || rel >= 0xacca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acca80 size=464 callers=1 calls=1
   calls: anonymous
*/
void sub_acca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacca80ULL || rel >= 0xaccc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00accc50 size=288 callers=1 calls=1
   calls: sub_accd70
*/
void sub_accc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaccc50ULL || rel >= 0xaccd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00accd70 size=352 callers=1 calls=1
   calls: anonymous
*/
void sub_accd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaccd70ULL || rel >= 0xacced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acced0 size=288 callers=1 calls=1
   calls: sub_accff0
*/
void sub_acced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacced0ULL || rel >= 0xaccff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00accff0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_accff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaccff0ULL || rel >= 0xacd140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acd140 size=288 callers=1 calls=1
   calls: sub_acd260
*/
void sub_acd140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacd140ULL || rel >= 0xacd260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acd260 size=384 callers=1 calls=1
   calls: anonymous
*/
void sub_acd260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacd260ULL || rel >= 0xacd3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acd3e0 size=288 callers=1 calls=1
   calls: sub_acd500
*/
void sub_acd3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacd3e0ULL || rel >= 0xacd500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acd500 size=352 callers=1 calls=1
   calls: anonymous
*/
void sub_acd500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacd500ULL || rel >= 0xacd660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acd660 size=288 callers=1 calls=1
   calls: sub_af7020
*/
void sub_acd660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacd660ULL || rel >= 0xacd780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acd780 size=288 callers=1 calls=1
   calls: sub_acd8a0
*/
void sub_acd780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacd780ULL || rel >= 0xacd8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acd8a0 size=368 callers=1 calls=1
   calls: anonymous
*/
void sub_acd8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacd8a0ULL || rel >= 0xacda10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acda10 size=288 callers=1 calls=1
   calls: sub_acdb30
*/
void sub_acda10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacda10ULL || rel >= 0xacdb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acdb30 size=368 callers=1 calls=1
   calls: anonymous
*/
void sub_acdb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacdb30ULL || rel >= 0xacdca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acdca0 size=160 callers=0 calls=0
*/
void sub_acdca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacdca0ULL || rel >= 0xacdd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acdd40 size=624 callers=14 calls=2
   calls: sub_14aad40, sub_e80580
*/
void sub_acdd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacdd40ULL || rel >= 0xacdfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acdfb0 size=128 callers=13 calls=1
   calls: sub_14aad40
*/
void sub_acdfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacdfb0ULL || rel >= 0xace030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ace030 size=144 callers=2 calls=1
   calls: sub_8f3180
*/
void sub_ace030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xace030ULL || rel >= 0xace0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ace0c0 size=32 callers=1 calls=0
*/
void sub_ace0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xace0c0ULL || rel >= 0xace0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ace0e0 size=32 callers=1 calls=0
*/
void sub_ace0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xace0e0ULL || rel >= 0xace100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ace100 size=48 callers=2 calls=0
*/
void sub_ace100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xace100ULL || rel >= 0xace130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ace130 size=816 callers=13 calls=3
   calls: sub_14e1a00, sub_5cfad0, sub_7a3c20
*/
void sub_ace130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xace130ULL || rel >= 0xace460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ace460 size=272 callers=3 calls=2
   calls: sub_14ea9e0, sub_67d450
*/
void sub_ace460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xace460ULL || rel >= 0xace570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ace570 size=176 callers=68 calls=1
   calls: sub_ad0c60
*/
void sub_ace570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xace570ULL || rel >= 0xace620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ace620 size=608 callers=12 calls=1
   calls: sub_14ea4f0
*/
void sub_ace620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xace620ULL || rel >= 0xace880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ace880 size=1168 callers=11 calls=1
   calls: sub_f0cc60
*/
void sub_ace880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xace880ULL || rel >= 0xaced10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aced10 size=16 callers=5 calls=0
*/
void sub_aced10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaced10ULL || rel >= 0xaced20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aced20 size=1504 callers=12 calls=3
   calls: sub_14ea9a0, sub_14eaa70, sub_f0cc60
*/
void sub_aced20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaced20ULL || rel >= 0xacf300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acf300 size=32 callers=24 calls=0
*/
void sub_acf300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacf300ULL || rel >= 0xacf320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acf320 size=192 callers=7 calls=1
   calls: sub_67d450
*/
void sub_acf320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacf320ULL || rel >= 0xacf3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acf3e0 size=2144 callers=11 calls=4
   calls: sub_1311c60, sub_1315b90, sub_14ac370, sub_67d450
*/
void sub_acf3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacf3e0ULL || rel >= 0xacfc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acfc40 size=336 callers=2 calls=3
   calls: sub_67bdb0, sub_67d450, sub_e83ac0
*/
void sub_acfc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacfc40ULL || rel >= 0xacfd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00acfd90 size=2176 callers=3 calls=7
   calls: sub_1311c60, sub_1315b90, sub_14ab0c0, sub_14ab440, sub_67bdb0, sub_67d450, sub_e83ac0
*/
void sub_acfd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacfd90ULL || rel >= 0xad0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0610 size=1168 callers=4 calls=4
   calls: sub_1311c60, sub_1315b90, sub_14ac370, sub_67d450
*/
void sub_ad0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0610ULL || rel >= 0xad0aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0aa0 size=272 callers=0 calls=1
   calls: sub_67d450
*/
void sub_ad0aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0aa0ULL || rel >= 0xad0bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0bb0 size=16 callers=0 calls=0
*/
void sub_ad0bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0bb0ULL || rel >= 0xad0bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0bc0 size=16 callers=0 calls=0
*/
void sub_ad0bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0bc0ULL || rel >= 0xad0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0bd0 size=16 callers=0 calls=0
*/
void sub_ad0bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0bd0ULL || rel >= 0xad0be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0be0 size=16 callers=0 calls=0
*/
void sub_ad0be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0be0ULL || rel >= 0xad0bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0bf0 size=16 callers=0 calls=0
*/
void sub_ad0bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0bf0ULL || rel >= 0xad0c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0c00 size=16 callers=0 calls=0
*/
void sub_ad0c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0c00ULL || rel >= 0xad0c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0c10 size=16 callers=0 calls=0
*/
void sub_ad0c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0c10ULL || rel >= 0xad0c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0c20 size=16 callers=0 calls=0
*/
void sub_ad0c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0c20ULL || rel >= 0xad0c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0c30 size=16 callers=0 calls=0
*/
void sub_ad0c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0c30ULL || rel >= 0xad0c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0c40 size=16 callers=0 calls=0
*/
void sub_ad0c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0c40ULL || rel >= 0xad0c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0c50 size=16 callers=0 calls=0
*/
void sub_ad0c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0c50ULL || rel >= 0xad0c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0c60 size=352 callers=2 calls=0
*/
void sub_ad0c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0c60ULL || rel >= 0xad0dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0dc0 size=16 callers=0 calls=0
*/
void sub_ad0dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0dc0ULL || rel >= 0xad0dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0dd0 size=16 callers=0 calls=0
*/
void sub_ad0dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0dd0ULL || rel >= 0xad0de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0de0 size=16 callers=0 calls=0
*/
void sub_ad0de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0de0ULL || rel >= 0xad0df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0df0 size=16 callers=0 calls=0
*/
void sub_ad0df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0df0ULL || rel >= 0xad0e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0e00 size=16 callers=0 calls=0
*/
void sub_ad0e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0e00ULL || rel >= 0xad0e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0e10 size=16 callers=0 calls=0
*/
void sub_ad0e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0e10ULL || rel >= 0xad0e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0e20 size=16 callers=0 calls=0
*/
void sub_ad0e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0e20ULL || rel >= 0xad0e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0e30 size=16 callers=0 calls=0
*/
void sub_ad0e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0e30ULL || rel >= 0xad0e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0e40 size=16 callers=0 calls=0
*/
void sub_ad0e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0e40ULL || rel >= 0xad0e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0e50 size=16 callers=0 calls=0
*/
void sub_ad0e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0e50ULL || rel >= 0xad0e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0e60 size=16 callers=0 calls=0
*/
void sub_ad0e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0e60ULL || rel >= 0xad0e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0e70 size=16 callers=0 calls=0
*/
void sub_ad0e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0e70ULL || rel >= 0xad0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0e80 size=16 callers=0 calls=0
*/
void sub_ad0e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0e80ULL || rel >= 0xad0e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0e90 size=16 callers=0 calls=0
*/
void sub_ad0e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0e90ULL || rel >= 0xad0ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0ea0 size=16 callers=0 calls=0
*/
void sub_ad0ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0ea0ULL || rel >= 0xad0eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0eb0 size=16 callers=0 calls=0
*/
void sub_ad0eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0eb0ULL || rel >= 0xad0ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0ec0 size=224 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_ad0ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0ec0ULL || rel >= 0xad0fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad0fa0 size=3984 callers=0 calls=42
   calls: L_rankup_00, pane_L_btlspot_button_04_T_button_s_00, pane_T_detail_f_21, pane_T_detail_o_17, pane_T_detail_t_19, pane_T_detail_t_34, pane_T_matchmake_r_08, pane_T_rank_detail_01, pane_T_rank_detail_03, pane_T_rank_detail_04, pane_T_rank_detail_05, pane_T_rankmatch_00
   ... +30 more
   ref: CommonOptionBar
   ref: L_matchmake_l_00
   ref: ViewBtlSpotDetailBtlcup2
   ref: ViewBtlSpotMsgWindow
   ref: ViewBtlSpotAttention
   ref: ViewBtlSpotRankup
   ref: ViewBtlSpotBtlcupOfficial2
   ref: ViewBtlSpotBtlcupFriend2
*/
void ViewBtlSpotMenuRankmatch_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0fa0ULL || rel >= 0xad1f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad1f30 size=352 callers=0 calls=0
*/
void sub_ad1f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad1f30ULL || rel >= 0xad2090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad2090 size=16 callers=0 calls=0
*/
void sub_ad2090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad2090ULL || rel >= 0xad20a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad20a0 size=16 callers=0 calls=0
*/
void sub_ad20a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad20a0ULL || rel >= 0xad20b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad20b0 size=16 callers=0 calls=0
*/
void sub_ad20b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad20b0ULL || rel >= 0xad20c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad20c0 size=16 callers=0 calls=0
*/
void sub_ad20c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad20c0ULL || rel >= 0xad20d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad20d0 size=16 callers=0 calls=0
*/
void sub_ad20d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad20d0ULL || rel >= 0xad20e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad20e0 size=752 callers=1 calls=13
   calls: sub_1500c40, sub_ad23d0, sub_ad24e0, sub_ad27f0, sub_ad2b00, sub_ad2c80, sub_ad2f70, sub_ada4c0, sub_ada4f0, sub_adcdd0, sub_adcde0, sub_ae1070
   ... +1 more
*/
void sub_ad20e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad20e0ULL || rel >= 0xad23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad23d0 size=272 callers=3 calls=18
   calls: sub_ad6070, sub_ad6ea0, sub_ad9140, sub_ada1c0, sub_ada660, sub_adc790, sub_add270, sub_adede0, sub_ae05c0, sub_ae8c30, sub_aeac90, sub_aece80
   ... +6 more
*/
void sub_ad23d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad23d0ULL || rel >= 0xad24e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad24e0 size=784 callers=1 calls=0
*/
void sub_ad24e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad24e0ULL || rel >= 0xad27f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad27f0 size=784 callers=1 calls=17
   calls: anime_L_btlcup_icon_00_flashing, sub_ad5f40, sub_ad62e0, sub_ad8d40, sub_ad9c50, sub_ada4d0, sub_ada510, sub_adb1c0, sub_adedc0, sub_ae0350, sub_aea850, sub_aecbb0
   ... +5 more
*/
void sub_ad27f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad27f0ULL || rel >= 0xad2b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad2b00 size=384 callers=1 calls=5
   calls: grid_Menu_2, grid_TopMenu_3, sub_ad2c80, sub_ad8b10, sub_ae8350
*/
void sub_ad2b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad2b00ULL || rel >= 0xad2c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad2c80 size=752 callers=2 calls=2
   calls: sub_ada4c0, sub_ae3be0
*/
void sub_ad2c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad2c80ULL || rel >= 0xad2f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad2f70 size=192 callers=1 calls=0
*/
void sub_ad2f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad2f70ULL || rel >= 0xad3030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad3030 size=176 callers=0 calls=2
   calls: sub_1502120, sub_5cfad0
   ref: Play_me_or_st_bp_get
   ref: Play_me_or_st_item_get
*/
void Play_me_or_st_item_get(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad3030ULL || rel >= 0xad30e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad30e0 size=496 callers=1 calls=3
   calls: sub_1500c90, sub_e807f0, sub_e80810
*/
void sub_ad30e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad30e0ULL || rel >= 0xad32d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad32d0 size=160 callers=147 calls=7
   calls: sub_ad23d0, sub_ad30e0, sub_ad3370, sub_ad3480, sub_ad3e00, sub_ad4180, sub_ae1600
*/
void sub_ad32d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad32d0ULL || rel >= 0xad3370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad3370 size=272 callers=1 calls=7
   calls: grid_Menu, grid_Menu3, grid_Menu4, grid_TopMenu_2, sub_aced10, sub_adcdd0, sub_ae1070
*/
void sub_ad3370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad3370ULL || rel >= 0xad3480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad3480 size=2432 callers=1 calls=39
   calls: L_btlteam_pokelist_05_switch, anime_L_card_rival_search_P_matchmake_icon_00_keep, anime__s_6, grid_Menu_3, pane_L_menu_btlcup_button_03_T_button_l_00, pane_L_menu_button_03_T_button_l_00, pane_T_btlspot_title_00, pane_T_btlspot_title_01, pane_T_detail_f_21, pane_T_detail_o_17, pane_T_detail_r_t_07, pane_T_detail_t_07
   ... +27 more
*/
void sub_ad3480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad3480ULL || rel >= 0xad3e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad3e00 size=896 callers=1 calls=17
   calls: sub_ad6090, sub_ad6ec0, sub_ad9160, sub_ada1e0, sub_ada680, sub_adc7b0, sub_add2c0, sub_adee00, sub_ae05e0, sub_ae17c0, sub_ae8c50, sub_aeacb0
   ... +5 more
*/
void sub_ad3e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad3e00ULL || rel >= 0xad4180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad4180 size=752 callers=1 calls=2
   calls: msg_ui_btlspot_help_00_2, sub_aced20
*/
void sub_ad4180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad4180ULL || rel >= 0xad4470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad4470 size=192 callers=2 calls=5
   calls: pane_T_rank_detail_01, pane_T_rank_detail_03, sub_acf320, sub_adb110, sub_aee0e0
*/
void sub_ad4470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad4470ULL || rel >= 0xad4530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad4530 size=144 callers=1 calls=2
   calls: pane_T_rankmatch_00, sub_ad4470
*/
void sub_ad4530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad4530ULL || rel >= 0xad45c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad45c0 size=240 callers=0 calls=0
*/
void sub_ad45c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad45c0ULL || rel >= 0xad46b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad46b0 size=16 callers=0 calls=0
*/
void sub_ad46b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad46b0ULL || rel >= 0xad46c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad46c0 size=16 callers=0 calls=0
*/
void sub_ad46c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad46c0ULL || rel >= 0xad46d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad46d0 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_ad46d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad46d0ULL || rel >= 0xad47c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad47c0 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_ad47c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad47c0ULL || rel >= 0xad48b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad48b0 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_ad48b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad48b0ULL || rel >= 0xad49a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad49a0 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_ad49a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad49a0ULL || rel >= 0xad4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad4a90 size=496 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_ad4a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad4a90ULL || rel >= 0xad4c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad4c80 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_ad4c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad4c80ULL || rel >= 0xad4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad4d70 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_ad4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad4d70ULL || rel >= 0xad4e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad4e60 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_ad4e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad4e60ULL || rel >= 0xad4f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad4f50 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_ad4f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad4f50ULL || rel >= 0xad50a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad50a0 size=496 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_ad50a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad50a0ULL || rel >= 0xad5290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad5290 size=496 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_ad5290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad5290ULL || rel >= 0xad5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad5480 size=496 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_ad5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad5480ULL || rel >= 0xad5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad5670 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_ad5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad5670ULL || rel >= 0xad5760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad5760 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_ad5760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad5760ULL || rel >= 0xad5850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad5850 size=496 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_ad5850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad5850ULL || rel >= 0xad5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad5a40 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_ad5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad5a40ULL || rel >= 0xad5b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad5b30 size=496 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_ad5b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad5b30ULL || rel >= 0xad5d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad5d20 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_ad5d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad5d20ULL || rel >= 0xad5e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad5e70 size=160 callers=0 calls=0
*/
void sub_ad5e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad5e70ULL || rel >= 0xad5f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad5f10 size=48 callers=0 calls=1
   calls: sub_acdd40
*/
void sub_ad5f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad5f10ULL || rel >= 0xad5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad5f40 size=32 callers=1 calls=0
*/
void sub_ad5f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad5f40ULL || rel >= 0xad5f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad5f60 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_spot/bin/btlspot_bg_00_lyt.bin
*/
void btlspot_bg_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad5f60ULL || rel >= 0xad6070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6070 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_ad6070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6070ULL || rel >= 0xad6090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6090 size=32 callers=1 calls=0
*/
void sub_ad6090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6090ULL || rel >= 0xad60b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad60b0 size=16 callers=0 calls=0
*/
void sub_ad60b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad60b0ULL || rel >= 0xad60c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad60c0 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ad60c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad60c0ULL || rel >= 0xad6130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6130 size=16 callers=0 calls=0
*/
void sub_ad6130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6130ULL || rel >= 0xad6140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6140 size=16 callers=0 calls=0
*/
void sub_ad6140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6140ULL || rel >= 0xad6150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6150 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ad6150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6150ULL || rel >= 0xad61c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad61c0 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ad61c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad61c0ULL || rel >= 0xad6230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6230 size=16 callers=0 calls=0
*/
void sub_ad6230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6230ULL || rel >= 0xad6240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6240 size=16 callers=0 calls=0
*/
void sub_ad6240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6240ULL || rel >= 0xad6250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6250 size=80 callers=0 calls=3
   calls: sub_acdd40, sub_acf300, sub_e840a0
   ref: grid_TopMenu
*/
void grid_TopMenu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6250ULL || rel >= 0xad62a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad62a0 size=64 callers=1 calls=2
   calls: sub_acf300, sub_e840a0
   ref: grid_TopMenu
*/
void grid_TopMenu_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad62a0ULL || rel >= 0xad62e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad62e0 size=32 callers=1 calls=0
*/
void sub_ad62e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad62e0ULL || rel >= 0xad6300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6300 size=1216 callers=1 calls=3
   calls: sub_67bdb0, sub_67d450, sub_e83ac0
   ref: pane_L_btlspot_button_03_T_button_s_00
   ref: pane_L_btlspot_button_02_T_button_s_00
   ref: pane_L_btlspot_button_04_T_button_s_00
   ref: pane_L_btlspot_button_01_T_button_l_00
   ref: pane_L_btlspot_button_00_T_button_l_00
*/
void pane_L_btlspot_button_04_T_button_s_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6300ULL || rel >= 0xad67c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad67c0 size=32 callers=1 calls=1
   calls: sub_e840a0
   ref: grid_TopMenu
*/
void grid_TopMenu_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad67c0ULL || rel >= 0xad67e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad67e0 size=128 callers=0 calls=3
   calls: sub_14e6550, sub_acf300, sub_e840a0
   ref: grid_TopMenu
*/
void grid_TopMenu_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad67e0ULL || rel >= 0xad6860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6860 size=1120 callers=0 calls=7
   calls: sub_14e1a00, sub_ace460, sub_ace570, sub_ace620, sub_ace880, sub_e83e60, sub_f0cc60
   ref: msg_ui_btlspot_help_00
*/
void msg_ui_btlspot_help_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6860ULL || rel >= 0xad6cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6cc0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_spot/bin/uikit_btlspot_top_00_lyt.bin
   ref: bin/appli/btl_spot/bin/btlspot_top_00_lyt.bin
*/
void uikit_btlspot_top_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6cc0ULL || rel >= 0xad6ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6ea0 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_ad6ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6ea0ULL || rel >= 0xad6ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6ec0 size=32 callers=2 calls=0
*/
void sub_ad6ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6ec0ULL || rel >= 0xad6ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6ee0 size=16 callers=0 calls=0
*/
void sub_ad6ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6ee0ULL || rel >= 0xad6ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6ef0 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ad6ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6ef0ULL || rel >= 0xad6f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6f60 size=16 callers=0 calls=0
*/
void sub_ad6f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6f60ULL || rel >= 0xad6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6f70 size=16 callers=0 calls=0
*/
void sub_ad6f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6f70ULL || rel >= 0xad6f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6f80 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ad6f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6f80ULL || rel >= 0xad6ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad6ff0 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ad6ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad6ff0ULL || rel >= 0xad7060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7060 size=16 callers=0 calls=0
*/
void sub_ad7060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7060ULL || rel >= 0xad7070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7070 size=16 callers=0 calls=0
*/
void sub_ad7070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7070ULL || rel >= 0xad7080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7080 size=16 callers=0 calls=0
*/
void sub_ad7080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7080ULL || rel >= 0xad7090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7090 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_ad7090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7090ULL || rel >= 0xad70d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad70d0 size=32 callers=0 calls=0
*/
void sub_ad70d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad70d0ULL || rel >= 0xad70f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad70f0 size=16 callers=0 calls=0
*/
void sub_ad70f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad70f0ULL || rel >= 0xad7100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7100 size=16 callers=0 calls=0
*/
void sub_ad7100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7100ULL || rel >= 0xad7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7110 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_ad7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7110ULL || rel >= 0xad7170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7170 size=16 callers=0 calls=0
*/
void sub_ad7170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7170ULL || rel >= 0xad7180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7180 size=16 callers=0 calls=0
*/
void sub_ad7180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7180ULL || rel >= 0xad7190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7190 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_ad7190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7190ULL || rel >= 0xad71d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad71d0 size=32 callers=0 calls=0
*/
void sub_ad71d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad71d0ULL || rel >= 0xad71f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad71f0 size=16 callers=0 calls=0
*/
void sub_ad71f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad71f0ULL || rel >= 0xad7200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7200 size=16 callers=0 calls=0
*/
void sub_ad7200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7200ULL || rel >= 0xad7210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7210 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_ad7210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7210ULL || rel >= 0xad7270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7270 size=16 callers=0 calls=0
*/
void sub_ad7270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7270ULL || rel >= 0xad7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7280 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_ad7280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7280ULL || rel >= 0xad72c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad72c0 size=32 callers=0 calls=0
*/
void sub_ad72c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad72c0ULL || rel >= 0xad72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad72e0 size=16 callers=0 calls=0
*/
void sub_ad72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad72e0ULL || rel >= 0xad72f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad72f0 size=16 callers=0 calls=0
*/
void sub_ad72f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad72f0ULL || rel >= 0xad7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7300 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_ad7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7300ULL || rel >= 0xad7360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7360 size=16 callers=0 calls=0
*/
void sub_ad7360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7360ULL || rel >= 0xad7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7370 size=16 callers=0 calls=0
*/
void sub_ad7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7370ULL || rel >= 0xad7380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7380 size=16 callers=0 calls=0
*/
void sub_ad7380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7380ULL || rel >= 0xad7390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7390 size=16 callers=0 calls=0
*/
void sub_ad7390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7390ULL || rel >= 0xad73a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad73a0 size=192 callers=0 calls=5
   calls: sub_14e1b40, sub_acdd40, sub_acdfb0, sub_acf300, sub_e840a0
   ref: grid_Menu
   ref: grid_Menu3
   ref: grid_Menu2
   ref: pane_L_menu_button_02
   ref: pane_L_menu_button_03
*/
void pane_L_menu_button_03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad73a0ULL || rel >= 0xad7460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7460 size=176 callers=3 calls=2
   calls: sub_acf300, sub_e840a0
   ref: grid_Menu
   ref: grid_Menu3
   ref: grid_Menu2
*/
void grid_Menu3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7460ULL || rel >= 0xad7510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad7510 size=3888 callers=1 calls=9
   calls: sub_1311c60, sub_1313430, sub_1315b90, sub_67b990, sub_67bdb0, sub_67be60, sub_67d450, sub_acf3e0, sub_e83ac0
   ref: pane_T_detail_t_04
   ref: pane_T_detail_t_06
   ref: pane_T_t_name_00
   ref: pane_T_detail_t_05
   ref: pane_T_t_name_02
   ref: pane_T_t_name_01
   ref: pane_T_detail_t_07
   ref: pane_T_detail_t_00
*/
void pane_T_detail_t_07(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad7510ULL || rel >= 0xad8440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad8440 size=1744 callers=3 calls=4
   calls: sub_67bdb0, sub_67d450, sub_8f19b0, sub_e83ac0
   ref: pane_L_menu_button_03_T_button_l_00
   ref: pane_L_menu_button_00_T_button_l_00
   ref: pane_L_menu_button_02_T_button_l_00
   ref: pane_L_menu_button_01_T_button_l_00
*/
void pane_L_menu_button_03_T_button_l_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad8440ULL || rel >= 0xad8b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad8b10 size=48 callers=1 calls=1
   calls: sub_e840a0
*/
void sub_ad8b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad8b10ULL || rel >= 0xad8b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad8b40 size=176 callers=0 calls=3
   calls: sub_14e6550, sub_acf300, sub_e840a0
   ref: grid_Menu
   ref: grid_Menu3
   ref: grid_Menu2
*/
void grid_Menu3_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad8b40ULL || rel >= 0xad8bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad8bf0 size=224 callers=1 calls=2
   calls: sub_14ab0c0, sub_14ab440
*/
void sub_ad8bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad8bf0ULL || rel >= 0xad8cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad8cd0 size=112 callers=1 calls=2
   calls: sub_14ab0c0, sub_14ab440
*/
void sub_ad8cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad8cd0ULL || rel >= 0xad8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad8d40 size=32 callers=1 calls=0
*/
void sub_ad8d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad8d40ULL || rel >= 0xad8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad8d60 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_spot/bin/uikit_btlspot_menu_00_lyt.bin
   ref: bin/appli/btl_spot/bin/btlspot_menu_00_lyt.bin
*/
void uikit_btlspot_menu_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad8d60ULL || rel >= 0xad8f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad8f40 size=512 callers=0 calls=2
   calls: sub_ace570, sub_ace620
*/
void sub_ad8f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad8f40ULL || rel >= 0xad9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9140 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_ad9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9140ULL || rel >= 0xad9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9160 size=32 callers=2 calls=0
*/
void sub_ad9160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9160ULL || rel >= 0xad9180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9180 size=16 callers=0 calls=0
*/
void sub_ad9180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9180ULL || rel >= 0xad9190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9190 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ad9190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9190ULL || rel >= 0xad9200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9200 size=16 callers=0 calls=0
*/
void sub_ad9200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9200ULL || rel >= 0xad9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9210 size=16 callers=0 calls=0
*/
void sub_ad9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9210ULL || rel >= 0xad9220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9220 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ad9220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9220ULL || rel >= 0xad9290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9290 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ad9290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9290ULL || rel >= 0xad9300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9300 size=16 callers=0 calls=0
*/
void sub_ad9300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9300ULL || rel >= 0xad9310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9310 size=16 callers=0 calls=0
*/
void sub_ad9310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9310ULL || rel >= 0xad9320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9320 size=16 callers=0 calls=0
*/
void sub_ad9320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9320ULL || rel >= 0xad9330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9330 size=16 callers=0 calls=0
*/
void sub_ad9330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9330ULL || rel >= 0xad9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9340 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_ad9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9340ULL || rel >= 0xad9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9380 size=32 callers=0 calls=0
*/
void sub_ad9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9380ULL || rel >= 0xad93a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad93a0 size=16 callers=0 calls=0
*/
void sub_ad93a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad93a0ULL || rel >= 0xad93b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad93b0 size=16 callers=0 calls=0
*/
void sub_ad93b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad93b0ULL || rel >= 0xad93c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad93c0 size=880 callers=0 calls=4
   calls: sub_14e1a00, sub_ace880, sub_e83e60, sub_f0cc60
*/
void sub_ad93c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad93c0ULL || rel >= 0xad9730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9730 size=16 callers=0 calls=0
*/
void sub_ad9730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9730ULL || rel >= 0xad9740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9740 size=16 callers=0 calls=0
*/
void sub_ad9740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9740ULL || rel >= 0xad9750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9750 size=16 callers=0 calls=0
*/
void sub_ad9750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9750ULL || rel >= 0xad9760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9760 size=16 callers=0 calls=0
*/
void sub_ad9760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9760ULL || rel >= 0xad9770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9770 size=16 callers=0 calls=0
*/
void sub_ad9770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9770ULL || rel >= 0xad9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9780 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_ad9780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9780ULL || rel >= 0xad97c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad97c0 size=32 callers=0 calls=0
*/
void sub_ad97c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad97c0ULL || rel >= 0xad97e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad97e0 size=16 callers=0 calls=0
*/
void sub_ad97e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad97e0ULL || rel >= 0xad97f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad97f0 size=16 callers=0 calls=0
*/
void sub_ad97f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad97f0ULL || rel >= 0xad9800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9800 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_ad9800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9800ULL || rel >= 0xad9860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9860 size=16 callers=0 calls=0
*/
void sub_ad9860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9860ULL || rel >= 0xad9870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9870 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_ad9870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9870ULL || rel >= 0xad98b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad98b0 size=32 callers=0 calls=0
*/
void sub_ad98b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad98b0ULL || rel >= 0xad98d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad98d0 size=16 callers=0 calls=0
*/
void sub_ad98d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad98d0ULL || rel >= 0xad98e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad98e0 size=16 callers=0 calls=0
*/
void sub_ad98e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad98e0ULL || rel >= 0xad98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad98f0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_ad98f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad98f0ULL || rel >= 0xad9950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9950 size=16 callers=0 calls=0
*/
void sub_ad9950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9950ULL || rel >= 0xad9960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9960 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_ad9960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9960ULL || rel >= 0xad99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad99a0 size=32 callers=0 calls=0
*/
void sub_ad99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad99a0ULL || rel >= 0xad99c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad99c0 size=16 callers=0 calls=0
*/
void sub_ad99c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad99c0ULL || rel >= 0xad99d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad99d0 size=16 callers=0 calls=0
*/
void sub_ad99d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad99d0ULL || rel >= 0xad99e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad99e0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_ad99e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad99e0ULL || rel >= 0xad9a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9a40 size=16 callers=0 calls=0
*/
void sub_ad9a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9a40ULL || rel >= 0xad9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9a50 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_ad9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9a50ULL || rel >= 0xad9a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9a90 size=32 callers=0 calls=0
*/
void sub_ad9a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9a90ULL || rel >= 0xad9ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9ab0 size=16 callers=0 calls=0
*/
void sub_ad9ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9ab0ULL || rel >= 0xad9ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9ac0 size=16 callers=0 calls=0
*/
void sub_ad9ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9ac0ULL || rel >= 0xad9ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9ad0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_ad9ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9ad0ULL || rel >= 0xad9b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9b30 size=16 callers=0 calls=0
*/
void sub_ad9b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9b30ULL || rel >= 0xad9b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9b40 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_ad9b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9b40ULL || rel >= 0xad9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9b80 size=32 callers=0 calls=0
*/
void sub_ad9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9b80ULL || rel >= 0xad9ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9ba0 size=16 callers=0 calls=0
*/
void sub_ad9ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9ba0ULL || rel >= 0xad9bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9bb0 size=16 callers=0 calls=0
*/
void sub_ad9bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9bb0ULL || rel >= 0xad9bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9bc0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_ad9bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9bc0ULL || rel >= 0xad9c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9c20 size=48 callers=0 calls=1
   calls: sub_acdd40
*/
void sub_ad9c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9c20ULL || rel >= 0xad9c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9c50 size=32 callers=1 calls=0
*/
void sub_ad9c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9c50ULL || rel >= 0xad9c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9c70 size=656 callers=1 calls=3
   calls: sub_67bdb0, sub_67d450, sub_e83ac0
   ref: pane_T_btlspot_title_00
*/
void pane_T_btlspot_title_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9c70ULL || rel >= 0xad9f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ad9f00 size=320 callers=3 calls=3
   calls: sub_67bdb0, sub_67d450, sub_e83ac0
   ref: pane_T_btlspot_title_01
*/
void pane_T_btlspot_title_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9f00ULL || rel >= 0xada040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada040 size=112 callers=4 calls=2
   calls: sub_14ab0c0, sub_14ab440
*/
void sub_ada040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada040ULL || rel >= 0xada0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada0b0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_spot/bin/btlspot_title_00_lyt.bin
*/
void btlspot_title_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada0b0ULL || rel >= 0xada1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada1c0 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_ada1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada1c0ULL || rel >= 0xada1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada1e0 size=32 callers=2 calls=0
*/
void sub_ada1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada1e0ULL || rel >= 0xada200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada200 size=16 callers=0 calls=0
*/
void sub_ada200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada200ULL || rel >= 0xada210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada210 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ada210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada210ULL || rel >= 0xada280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada280 size=16 callers=0 calls=0
*/
void sub_ada280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada280ULL || rel >= 0xada290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada290 size=16 callers=0 calls=0
*/
void sub_ada290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada290ULL || rel >= 0xada2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada2a0 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ada2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada2a0ULL || rel >= 0xada310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada310 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ada310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada310ULL || rel >= 0xada380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada380 size=16 callers=0 calls=0
*/
void sub_ada380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada380ULL || rel >= 0xada390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada390 size=16 callers=0 calls=0
*/
void sub_ada390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada390ULL || rel >= 0xada3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada3a0 size=48 callers=0 calls=1
   calls: sub_acdd40
*/
void sub_ada3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada3a0ULL || rel >= 0xada3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada3d0 size=240 callers=1 calls=2
   calls: sub_8f19b0, sub_adaea0
   ref: L_rankup_00
*/
void L_rankup_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada3d0ULL || rel >= 0xada4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada4c0 size=16 callers=3 calls=0
*/
void sub_ada4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada4c0ULL || rel >= 0xada4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada4d0 size=32 callers=1 calls=0
*/
void sub_ada4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada4d0ULL || rel >= 0xada4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada4f0 size=32 callers=1 calls=0
*/
void sub_ada4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada4f0ULL || rel >= 0xada510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada510 size=32 callers=1 calls=0
*/
void sub_ada510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada510ULL || rel >= 0xada530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada530 size=32 callers=0 calls=1
   calls: sub_14d9c40
*/
void sub_ada530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada530ULL || rel >= 0xada550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada550 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_spot/bin/btlspot_rankup_00_lyt.bin
*/
void btlspot_rankup_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada550ULL || rel >= 0xada660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada660 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_ada660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada660ULL || rel >= 0xada680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada680 size=32 callers=2 calls=0
*/
void sub_ada680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada680ULL || rel >= 0xada6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada6a0 size=96 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_ada6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada6a0ULL || rel >= 0xada700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada700 size=96 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_ada700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada700ULL || rel >= 0xada760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada760 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ada760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada760ULL || rel >= 0xada810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada810 size=112 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_ada810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada810ULL || rel >= 0xada880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada880 size=112 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_ada880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada880ULL || rel >= 0xada8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada8f0 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ada8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada8f0ULL || rel >= 0xada9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ada9a0 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ada9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xada9a0ULL || rel >= 0xadaa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adaa50 size=112 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_adaa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadaa50ULL || rel >= 0xadaac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adaac0 size=112 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_adaac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadaac0ULL || rel >= 0xadab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adab30 size=96 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_adab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadab30ULL || rel >= 0xadab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adab90 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_adab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadab90ULL || rel >= 0xadac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adac00 size=112 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_adac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadac00ULL || rel >= 0xadac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adac70 size=112 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_adac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadac70ULL || rel >= 0xadace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adace0 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_adace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadace0ULL || rel >= 0xadad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adad50 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_adad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadad50ULL || rel >= 0xadadc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adadc0 size=112 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_adadc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadadc0ULL || rel >= 0xadae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adae30 size=112 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_adae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadae30ULL || rel >= 0xadaea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adaea0 size=624 callers=3 calls=1
   calls: L_rank_gauge_00
*/
void sub_adaea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadaea0ULL || rel >= 0xadb110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adb110 size=32 callers=7 calls=0
*/
void sub_adb110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadb110ULL || rel >= 0xadb130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adb130 size=144 callers=0 calls=2
   calls: L_btlteam_pokelist_05_P_team_pokelist_icon_03, sub_acdd40
   ref: L_license_btlteam_00
*/
void L_license_btlteam_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadb130ULL || rel >= 0xadb1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adb1c0 size=32 callers=1 calls=0
*/
void sub_adb1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadb1c0ULL || rel >= 0xadb1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adb1e0 size=4640 callers=2 calls=10
   calls: sub_1311c60, sub_1313430, sub_1315b90, sub_67b990, sub_67bdb0, sub_67be60, sub_67d450, sub_acf3e0, sub_acfc40, sub_e83ac0
   ref: pane_T_detail_r_t_01
   ref: pane_T_r_rank_01
   ref: pane_T_detail_r_t_07
   ref: pane_T_t_name_00
   ref: pane_T_r_rank_00
   ref: pane_T_detail_r_t_06
   ref: pane_T_t_name_04
   ref: pane_T_t_name_02
*/
void pane_T_detail_r_t_07(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadb1e0ULL || rel >= 0xadc400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc400 size=112 callers=2 calls=2
   calls: sub_14ab0c0, sub_14ab440
*/
void sub_adc400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc400ULL || rel >= 0xadc470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc470 size=112 callers=2 calls=2
   calls: sub_14ab0c0, sub_14ab440
*/
void sub_adc470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc470ULL || rel >= 0xadc4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc4e0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_spot/bin/btlspot_license_00_lyt.bin
   ref: bin/appli/btl_spot/bin/uikit_btlspot_license_00_lyt.bin
*/
void uikit_btlspot_license_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc4e0ULL || rel >= 0xadc6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc6c0 size=208 callers=0 calls=3
   calls: sub_ace570, sub_ace620, sub_ace880
*/
void sub_adc6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc6c0ULL || rel >= 0xadc790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc790 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_adc790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc790ULL || rel >= 0xadc7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc7b0 size=32 callers=2 calls=0
*/
void sub_adc7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc7b0ULL || rel >= 0xadc7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc7d0 size=16 callers=0 calls=0
*/
void sub_adc7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc7d0ULL || rel >= 0xadc7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc7e0 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_adc7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc7e0ULL || rel >= 0xadc850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc850 size=16 callers=0 calls=0
*/
void sub_adc850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc850ULL || rel >= 0xadc860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc860 size=16 callers=0 calls=0
*/
void sub_adc860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc860ULL || rel >= 0xadc870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc870 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_adc870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc870ULL || rel >= 0xadc8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc8e0 size=112 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_adc8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc8e0ULL || rel >= 0xadc950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc950 size=16 callers=0 calls=0
*/
void sub_adc950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc950ULL || rel >= 0xadc960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc960 size=16 callers=0 calls=0
*/
void sub_adc960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc960ULL || rel >= 0xadc970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc970 size=112 callers=0 calls=0
*/
void sub_adc970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc970ULL || rel >= 0xadc9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc9e0 size=16 callers=0 calls=0
*/
void sub_adc9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc9e0ULL || rel >= 0xadc9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adc9f0 size=32 callers=0 calls=0
*/
void sub_adc9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadc9f0ULL || rel >= 0xadca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adca10 size=32 callers=0 calls=0
*/
void sub_adca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadca10ULL || rel >= 0xadca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adca30 size=16 callers=0 calls=0
*/
void sub_adca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadca30ULL || rel >= 0xadca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adca40 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_adca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadca40ULL || rel >= 0xadca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adca80 size=32 callers=0 calls=0
*/
void sub_adca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadca80ULL || rel >= 0xadcaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcaa0 size=16 callers=0 calls=0
*/
void sub_adcaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcaa0ULL || rel >= 0xadcab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcab0 size=16 callers=0 calls=0
*/
void sub_adcab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcab0ULL || rel >= 0xadcac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcac0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_adcac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcac0ULL || rel >= 0xadcb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcb20 size=16 callers=0 calls=0
*/
void sub_adcb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcb20ULL || rel >= 0xadcb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcb30 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_adcb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcb30ULL || rel >= 0xadcb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcb70 size=32 callers=0 calls=0
*/
void sub_adcb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcb70ULL || rel >= 0xadcb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcb90 size=16 callers=0 calls=0
*/
void sub_adcb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcb90ULL || rel >= 0xadcba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcba0 size=16 callers=0 calls=0
*/
void sub_adcba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcba0ULL || rel >= 0xadcbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcbb0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_adcbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcbb0ULL || rel >= 0xadcc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcc10 size=336 callers=0 calls=5
   calls: sub_14aad40, sub_5cfad0, sub_e80580, sub_e83d70, sub_eb5ee0
   ref: btn_cancel
*/
void btn_cancel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcc10ULL || rel >= 0xadcd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcd60 size=112 callers=0 calls=1
   calls: sub_eb5f60
*/
void sub_adcd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcd60ULL || rel >= 0xadcdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcdd0 size=16 callers=2 calls=0
*/
void sub_adcdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcdd0ULL || rel >= 0xadcde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcde0 size=416 callers=1 calls=3
   calls: sub_67d450, sub_7c2d80, sub_eb5fb0
*/
void sub_adcde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcde0ULL || rel >= 0xadcf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcf80 size=48 callers=1 calls=0
*/
void sub_adcf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcf80ULL || rel >= 0xadcfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adcfb0 size=688 callers=0 calls=4
   calls: sub_14ea4f0, sub_14ea9a0, sub_14eaa70, sub_67d450
*/
void sub_adcfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadcfb0ULL || rel >= 0xadd260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add260 size=16 callers=0 calls=0
*/
void sub_add260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd260ULL || rel >= 0xadd270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add270 size=80 callers=1 calls=1
   calls: sub_eb6630
*/
void sub_add270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd270ULL || rel >= 0xadd2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add2c0 size=32 callers=2 calls=0
*/
void sub_add2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd2c0ULL || rel >= 0xadd2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add2e0 size=112 callers=0 calls=0
*/
void sub_add2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd2e0ULL || rel >= 0xadd350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add350 size=112 callers=0 calls=0
*/
void sub_add350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd350ULL || rel >= 0xadd3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add3c0 size=16 callers=0 calls=0
*/
void sub_add3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd3c0ULL || rel >= 0xadd3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add3d0 size=32 callers=0 calls=0
*/
void sub_add3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd3d0ULL || rel >= 0xadd3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add3f0 size=112 callers=0 calls=0
*/
void sub_add3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd3f0ULL || rel >= 0xadd460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add460 size=112 callers=0 calls=0
*/
void sub_add460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd460ULL || rel >= 0xadd4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add4d0 size=16 callers=0 calls=0
*/
void sub_add4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd4d0ULL || rel >= 0xadd4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add4e0 size=16 callers=0 calls=0
*/
void sub_add4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd4e0ULL || rel >= 0xadd4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add4f0 size=112 callers=0 calls=0
*/
void sub_add4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd4f0ULL || rel >= 0xadd560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add560 size=112 callers=0 calls=0
*/
void sub_add560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd560ULL || rel >= 0xadd5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add5d0 size=304 callers=0 calls=0
*/
void sub_add5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd5d0ULL || rel >= 0xadd700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add700 size=64 callers=0 calls=1
   calls: sub_acdd40
*/
void sub_add700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd700ULL || rel >= 0xadd740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add740 size=464 callers=0 calls=2
   calls: sub_5cfad0, sub_7a3c20
*/
void sub_add740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd740ULL || rel >= 0xadd910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00add910 size=2608 callers=4 calls=11
   calls: sub_1311c60, sub_1315b90, sub_67bdb0, sub_67d450, sub_acfc40, sub_ad0610, sub_ade340, sub_ade6a0, sub_ade980, sub_adeab0, sub_e83ac0
   ref: pane_T_detail_t_29
   ref: pane_T_detail_t_25
   ref: pane_T_detail_t_30
   ref: pane_T_detail_t_24
   ref: pane_T_detail_t_28
   ref: pane_T_detail_t_34
   ref: pane_T_detail_t_22
   ref: pane_T_detail_t_26
*/
void pane_T_detail_t_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadd910ULL || rel >= 0xade340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ade340 size=864 callers=1 calls=6
   calls: sub_1311c60, sub_13133a0, sub_67bdb0, sub_67be60, sub_67d450, sub_e83ac0
*/
void sub_ade340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xade340ULL || rel >= 0xade6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ade6a0 size=736 callers=1 calls=5
   calls: sub_1311c60, sub_1315b90, sub_67bdb0, sub_67d450, sub_e83ac0
*/
void sub_ade6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xade6a0ULL || rel >= 0xade980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ade980 size=304 callers=2 calls=3
   calls: sub_67bdb0, sub_67d450, sub_e83ac0
*/
void sub_ade980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xade980ULL || rel >= 0xadeab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adeab0 size=304 callers=1 calls=3
   calls: sub_67bdb0, sub_67d450, sub_e83ac0
*/
void sub_adeab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadeab0ULL || rel >= 0xadebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adebe0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_spot/bin/btlspot_detail_btlcup_01_lyt.bin
   ref: bin/appli/btl_spot/bin/uikit_btlspot_detail_btlcup_01_lyt.bin
*/
void uikit_btlspot_detail_btlcup_01_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadebe0ULL || rel >= 0xadedc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adedc0 size=32 callers=2 calls=0
*/
void sub_adedc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadedc0ULL || rel >= 0xadede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adede0 size=32 callers=2 calls=1
   calls: sub_eb6530
*/
void sub_adede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadede0ULL || rel >= 0xadee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adee00 size=32 callers=3 calls=0
*/
void sub_adee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadee00ULL || rel >= 0xadee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adee20 size=80 callers=0 calls=1
   calls: sub_14ab0c0
*/
void sub_adee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadee20ULL || rel >= 0xadee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adee70 size=16 callers=0 calls=0
*/
void sub_adee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadee70ULL || rel >= 0xadee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adee80 size=16 callers=0 calls=0
*/
void sub_adee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadee80ULL || rel >= 0xadee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adee90 size=16 callers=0 calls=0
*/
void sub_adee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadee90ULL || rel >= 0xadeea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adeea0 size=256 callers=0 calls=4
   calls: L_btlteam_pokelist_05_P_team_pokelist_icon_03, sub_acdd40, sub_acdfb0, sub_adefa0
   ref: pane_L_card_rival_search_T_matchmake_l_00
   ref: pane_L_card_rival_search_P_matchmake_icon_00
   ref: pane_L_rank_00
   ref: pane_N_matchmake_subdata
   ref: L_matchmake_btlteam_00
   ref: pane_P_matchmake_icon_00
*/
void pane_P_matchmake_icon_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadeea0ULL || rel >= 0xadefa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adefa0 size=896 callers=1 calls=2
   calls: sub_5cfad0, sub_7a3c20
*/
void sub_adefa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadefa0ULL || rel >= 0xadf320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adf320 size=352 callers=5 calls=2
   calls: sub_1311c60, sub_1315b90
*/
void sub_adf320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadf320ULL || rel >= 0xadf480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adf480 size=32 callers=1 calls=0
*/
void sub_adf480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadf480ULL || rel >= 0xadf4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adf4a0 size=112 callers=2 calls=2
   calls: sub_14ab0c0, sub_14ab440
*/
void sub_adf4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadf4a0ULL || rel >= 0xadf510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adf510 size=112 callers=2 calls=2
   calls: sub_14ab0c0, sub_14ab440
*/
void sub_adf510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadf510ULL || rel >= 0xadf580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adf580 size=304 callers=1 calls=4
   calls: sub_67bdb0, sub_67d450, sub_adf320, sub_e83ac0
   ref: pane_T_matchmake_r_01
*/
void pane_T_matchmake_r_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadf580ULL || rel >= 0xadf6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adf6b0 size=304 callers=1 calls=4
   calls: sub_67bdb0, sub_67d450, sub_adf320, sub_e83ac0
   ref: pane_T_matchmake_r_03
*/
void pane_T_matchmake_r_03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadf6b0ULL || rel >= 0xadf7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adf7e0 size=304 callers=1 calls=4
   calls: sub_67bdb0, sub_67d450, sub_adf320, sub_e83ac0
   ref: pane_T_matchmake_r_05
*/
void pane_T_matchmake_r_05(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadf7e0ULL || rel >= 0xadf910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adf910 size=304 callers=1 calls=4
   calls: sub_67bdb0, sub_67d450, sub_adf320, sub_e83ac0
   ref: pane_T_matchmake_r_09
*/
void pane_T_matchmake_r_09(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadf910ULL || rel >= 0xadfa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adfa40 size=304 callers=1 calls=4
   calls: sub_67bdb0, sub_67d450, sub_adf320, sub_e83ac0
   ref: pane_T_matchmake_r_07
*/
void pane_T_matchmake_r_07(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadfa40ULL || rel >= 0xadfb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adfb70 size=288 callers=0 calls=6
   calls: sub_14ab0c0, sub_1500c40, sub_8f19b0, sub_ec8f00, sub_ec9400, sub_ec9430
*/
void sub_adfb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadfb70ULL || rel >= 0xadfc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00adfc90 size=1728 callers=1 calls=6
   calls: sub_67bdb0, sub_67d450, sub_8f19b0, sub_adaea0, sub_e83ac0, sub_ec8f00
   ref: pane_L_card_rival_search_T_matchmake_l_00
   ref: pane_T_matchmake_r_06
   ref: L_rank_00
   ref: pane_T_matchmake_r_08
   ref: pane_T_matchmake_r_02
   ref: pane_T_matchmake_r_04
   ref: pane_T_matchmake_r_00
*/
void pane_T_matchmake_r_08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadfc90ULL || rel >= 0xae0350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0350 size=32 callers=1 calls=0
*/
void sub_ae0350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0350ULL || rel >= 0xae0370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0370 size=112 callers=1 calls=1
   calls: sub_e833a0
   ref: anime_L_card_rival_search_P_matchmake_icon_00_in
   ref: anime_L_card_rival_search_P_matchmake_icon_00_keep
*/
void anime_L_card_rival_search_P_matchmake_icon_00_keep(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0370ULL || rel >= 0xae03e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae03e0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_spot/bin/btlspot_matchmake_00_lyt.bin
   ref: bin/appli/btl_spot/bin/uikit_btlspot_matchmake_00_lyt.bin
*/
void uikit_btlspot_matchmake_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae03e0ULL || rel >= 0xae05c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae05c0 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_ae05c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae05c0ULL || rel >= 0xae05e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae05e0 size=32 callers=2 calls=0
*/
void sub_ae05e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae05e0ULL || rel >= 0xae0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0600 size=160 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_ae0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0600ULL || rel >= 0xae06a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae06a0 size=160 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_ae06a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae06a0ULL || rel >= 0xae0740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0740 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ae0740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0740ULL || rel >= 0xae07f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae07f0 size=160 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_ae07f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae07f0ULL || rel >= 0xae0890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0890 size=160 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_ae0890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0890ULL || rel >= 0xae0930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0930 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ae0930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0930ULL || rel >= 0xae09e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae09e0 size=176 callers=0 calls=1
   calls: sub_ac7630
*/
void sub_ae09e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae09e0ULL || rel >= 0xae0a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0a90 size=160 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_ae0a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0a90ULL || rel >= 0xae0b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0b30 size=160 callers=0 calls=1
   calls: sub_14d9fe0
*/
void sub_ae0b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0b30ULL || rel >= 0xae0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0bd0 size=112 callers=0 calls=0
*/
void sub_ae0bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0bd0ULL || rel >= 0xae0c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0c40 size=16 callers=0 calls=0
*/
void sub_ae0c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0c40ULL || rel >= 0xae0c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0c50 size=32 callers=0 calls=0
*/
void sub_ae0c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0c50ULL || rel >= 0xae0c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0c70 size=32 callers=0 calls=0
*/
void sub_ae0c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0c70ULL || rel >= 0xae0c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0c90 size=16 callers=0 calls=0
*/
void sub_ae0c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0c90ULL || rel >= 0xae0ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0ca0 size=16 callers=0 calls=0
*/
void sub_ae0ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0ca0ULL || rel >= 0xae0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0cb0 size=16 callers=0 calls=0
*/
void sub_ae0cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0cb0ULL || rel >= 0xae0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0cc0 size=16 callers=0 calls=0
*/
void sub_ae0cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0cc0ULL || rel >= 0xae0cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0cd0 size=16 callers=0 calls=0
*/
void sub_ae0cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0cd0ULL || rel >= 0xae0ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0ce0 size=16 callers=0 calls=0
*/
void sub_ae0ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0ce0ULL || rel >= 0xae0cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0cf0 size=16 callers=0 calls=0
*/
void sub_ae0cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0cf0ULL || rel >= 0xae0d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0d00 size=16 callers=0 calls=0
*/
void sub_ae0d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0d00ULL || rel >= 0xae0d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae0d10 size=864 callers=0 calls=2
   calls: sub_67b990, sub_eb7e10
*/
void sub_ae0d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae0d10ULL || rel >= 0xae1070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae1070 size=16 callers=2 calls=0
*/
void sub_ae1070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae1070ULL || rel >= 0xae1080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae1080 size=1344 callers=21 calls=10
   calls: sub_1311c60, sub_1313430, sub_1314a80, sub_1315b90, sub_67b990, sub_67bdb0, sub_67be60, sub_67d450, sub_ae44e0, sub_ae4640
*/
void sub_ae1080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae1080ULL || rel >= 0xae15c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae15c0 size=64 callers=0 calls=1
   calls: sub_eb8a30
*/
void sub_ae15c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae15c0ULL || rel >= 0xae1600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae1600 size=16 callers=1 calls=0
*/
void sub_ae1600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae1600ULL || rel >= 0xae1610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae1610 size=384 callers=1 calls=6
   calls: sub_eb7ef0, sub_eb8930, sub_eb8a30, sub_eb8c60, sub_eb8e80, sub_eb8ea0
*/
void sub_ae1610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae1610ULL || rel >= 0xae1790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae1790 size=48 callers=0 calls=2
   calls: sub_ae1610, sub_eb8b90
*/
void sub_ae1790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae1790ULL || rel >= 0xae17c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae17c0 size=64 callers=1 calls=1
   calls: sub_eb8a30
*/
void sub_ae17c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae17c0ULL || rel >= 0xae1800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae1800 size=16 callers=1 calls=0
*/
void sub_ae1800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae1800ULL || rel >= 0xae1810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae1810 size=2752 callers=0 calls=4
   calls: sub_67bdb0, sub_acae90, sub_ae1080, sub_ae44e0
   ref: msg_ui_btlspot_rank_change_09
   ref: msg_ui_btlspot_win_06
   ref: msg_ui_btlspot_win_16
   ref: msg_ui_btlspot_win_37
   ref: msg_ui_btlspot_win_04
   ref: msg_ui_btlspot_win_71
   ref: msg_ui_btlspot_win_31
   ref: msg_ui_btlspot_win_03
*/
void msg_ui_btlspot_win_71(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae1810ULL || rel >= 0xae22d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ae22d0 size=416 callers=0 calls=3
   calls: sub_67d450, sub_ae1080, sub_ae4640
   ref: msg_ui_btlspot_win_05
*/
void msg_ui_btlspot_win_05(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae22d0ULL || rel >= 0xae2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

