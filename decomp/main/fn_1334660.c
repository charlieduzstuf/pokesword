/* main functions 01334660..0134cb00 (162 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01334660 size=16 callers=0 calls=0
*/
void sub_1334660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334660ULL || rel >= 0x1334670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334670 size=16 callers=0 calls=0
*/
void sub_1334670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334670ULL || rel >= 0x1334680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334680 size=16 callers=0 calls=0
*/
void sub_1334680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334680ULL || rel >= 0x1334690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334690 size=16 callers=0 calls=0
*/
void sub_1334690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334690ULL || rel >= 0x13346a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013346a0 size=16 callers=0 calls=0
*/
void sub_13346a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13346a0ULL || rel >= 0x13346b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013346b0 size=16 callers=0 calls=0
*/
void sub_13346b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13346b0ULL || rel >= 0x13346c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013346c0 size=16 callers=0 calls=0
*/
void sub_13346c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13346c0ULL || rel >= 0x13346d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013346d0 size=240 callers=0 calls=6
   calls: sub_1328090, sub_132cbc0, sub_1331380, sub_1331d60, sub_1432f10, sub_e807f0
*/
void sub_13346d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13346d0ULL || rel >= 0x13347c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013347c0 size=16 callers=0 calls=0
*/
void sub_13347c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13347c0ULL || rel >= 0x13347d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013347d0 size=16 callers=0 calls=0
*/
void sub_13347d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13347d0ULL || rel >= 0x13347e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013347e0 size=16 callers=0 calls=0
*/
void sub_13347e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13347e0ULL || rel >= 0x13347f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013347f0 size=16 callers=0 calls=0
*/
void sub_13347f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13347f0ULL || rel >= 0x1334800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334800 size=16 callers=0 calls=0
*/
void sub_1334800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334800ULL || rel >= 0x1334810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334810 size=16 callers=0 calls=0
*/
void sub_1334810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334810ULL || rel >= 0x1334820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334820 size=16 callers=0 calls=0
*/
void sub_1334820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334820ULL || rel >= 0x1334830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334830 size=80 callers=0 calls=2
   calls: sub_132cbc0, sub_e807f0
*/
void sub_1334830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334830ULL || rel >= 0x1334880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334880 size=16 callers=0 calls=0
*/
void sub_1334880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334880ULL || rel >= 0x1334890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334890 size=16 callers=0 calls=0
*/
void sub_1334890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334890ULL || rel >= 0x13348a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013348a0 size=16 callers=0 calls=0
*/
void sub_13348a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13348a0ULL || rel >= 0x13348b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013348b0 size=16 callers=0 calls=0
*/
void sub_13348b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13348b0ULL || rel >= 0x13348c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013348c0 size=16 callers=0 calls=0
*/
void sub_13348c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13348c0ULL || rel >= 0x13348d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013348d0 size=16 callers=0 calls=0
*/
void sub_13348d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13348d0ULL || rel >= 0x13348e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013348e0 size=16 callers=0 calls=0
*/
void sub_13348e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13348e0ULL || rel >= 0x13348f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013348f0 size=112 callers=0 calls=2
   calls: sub_132cbc0, sub_e807f0
*/
void sub_13348f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13348f0ULL || rel >= 0x1334960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334960 size=16 callers=0 calls=0
*/
void sub_1334960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334960ULL || rel >= 0x1334970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334970 size=16 callers=0 calls=0
*/
void sub_1334970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334970ULL || rel >= 0x1334980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334980 size=16 callers=0 calls=0
*/
void sub_1334980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334980ULL || rel >= 0x1334990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334990 size=16 callers=0 calls=0
*/
void sub_1334990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334990ULL || rel >= 0x13349a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013349a0 size=16 callers=0 calls=0
*/
void sub_13349a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13349a0ULL || rel >= 0x13349b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013349b0 size=16 callers=0 calls=0
*/
void sub_13349b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13349b0ULL || rel >= 0x13349c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013349c0 size=16 callers=0 calls=0
*/
void sub_13349c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13349c0ULL || rel >= 0x13349d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013349d0 size=192 callers=0 calls=4
   calls: sub_13285f0, sub_132cbc0, sub_1376670, sub_e807f0
*/
void sub_13349d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13349d0ULL || rel >= 0x1334a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334a90 size=16 callers=0 calls=0
*/
void sub_1334a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334a90ULL || rel >= 0x1334aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334aa0 size=16 callers=0 calls=0
*/
void sub_1334aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334aa0ULL || rel >= 0x1334ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334ab0 size=16 callers=0 calls=0
*/
void sub_1334ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334ab0ULL || rel >= 0x1334ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334ac0 size=16 callers=0 calls=0
*/
void sub_1334ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334ac0ULL || rel >= 0x1334ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334ad0 size=16 callers=0 calls=0
*/
void sub_1334ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334ad0ULL || rel >= 0x1334ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334ae0 size=16 callers=0 calls=0
*/
void sub_1334ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334ae0ULL || rel >= 0x1334af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334af0 size=16 callers=0 calls=0
*/
void sub_1334af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334af0ULL || rel >= 0x1334b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334b00 size=288 callers=2 calls=3
   calls: sub_5e2350, sub_67b990, sub_e76a20
*/
void sub_1334b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334b00ULL || rel >= 0x1334c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334c20 size=64 callers=2 calls=1
   calls: sub_67bfa0
*/
void sub_1334c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334c20ULL || rel >= 0x1334c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334c60 size=512 callers=2 calls=13
   calls: strinput, sub_105b2c0, sub_158a7e0, sub_15bc1e0, sub_15bc310, sub_16305c0, sub_67bdb0, sub_67bdd0, sub_67c7e0, sub_e76980, sub_e769b0, sub_e76a20
   ... +1 more
*/
void sub_1334c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334c60ULL || rel >= 0x1334e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334e60 size=144 callers=0 calls=0
*/
void sub_1334e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334e60ULL || rel >= 0x1334ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334ef0 size=144 callers=0 calls=0
*/
void sub_1334ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334ef0ULL || rel >= 0x1334f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01334f80 size=240 callers=0 calls=0
*/
void sub_1334f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334f80ULL || rel >= 0x1335070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01335070 size=144 callers=0 calls=0
*/
void sub_1335070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1335070ULL || rel >= 0x1335100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01335100 size=144 callers=0 calls=0
*/
void sub_1335100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1335100ULL || rel >= 0x1335190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01335190 size=16 callers=0 calls=0
*/
void sub_1335190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1335190ULL || rel >= 0x13351a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013351a0 size=16 callers=0 calls=0
*/
void sub_13351a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13351a0ULL || rel >= 0x13351b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013351b0 size=144 callers=0 calls=0
*/
void sub_13351b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13351b0ULL || rel >= 0x1335240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01335240 size=144 callers=0 calls=0
*/
void sub_1335240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1335240ULL || rel >= 0x13352d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013352d0 size=160 callers=0 calls=0
*/
void sub_13352d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13352d0ULL || rel >= 0x1335370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01335370 size=912 callers=2 calls=12
   calls: sub_1048a80, sub_1048d70, sub_1048f70, sub_136b4f0, sub_136b500, sub_136b530, sub_67b990, sub_67be60, sub_783bd0, sub_784e40, sub_785110, sub_7cd960
*/
void sub_1335370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1335370ULL || rel >= 0x1335700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01335700 size=288 callers=1 calls=3
   calls: anonymous, sub_132c7c0, sub_d0c0
   ref: StateSelectBattleTeam
*/
void StateSelectBattleTeam(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1335700ULL || rel >= 0x1335820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01335820 size=1152 callers=0 calls=20
   calls: sub_1327b20, sub_1328090, sub_13287c0, sub_13292a0, sub_132c350, sub_132c370, sub_132c390, sub_132cb10, sub_1331380, sub_1331d50, sub_1331d80, sub_1335ca0
   ... +8 more
   ref: BattleTeamView
   ref: View_OptionBar
*/
void BattleTeamView_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1335820ULL || rel >= 0x1335ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01335ca0 size=592 callers=1 calls=5
   calls: sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0
*/
void sub_1335ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1335ca0ULL || rel >= 0x1335ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01335ef0 size=3072 callers=0 calls=27
   calls: Play_UI_pbox_error_4, RequestPokemonValidation, RequestUploadRentalTeam, sub_105b2c0, sub_105c390, sub_1328090, sub_13285f0, sub_13287c0, sub_1329790, sub_132bc40, sub_132cb20, sub_132cbc0
   ... +15 more
*/
void sub_1335ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1335ef0ULL || rel >= 0x1336af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01336af0 size=352 callers=1 calls=9
   calls: sub_1328090, sub_1331d50, sub_1432fc0, sub_1433520, sub_1502120, sub_5cfad0, sub_7847d0, sub_e80580, sub_e807f0
   ref: Play_UI_pbox_error
*/
void Play_UI_pbox_error_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1336af0ULL || rel >= 0x1336c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01336c50 size=832 callers=1 calls=7
   calls: sub_1328090, sub_13285f0, sub_132bc40, sub_132d080, sub_132d200, sub_1331d50, sub_1331ed0
*/
void sub_1336c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1336c50ULL || rel >= 0x1336f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01336f90 size=432 callers=2 calls=10
   calls: sub_1328090, sub_1331d50, sub_1335370, sub_136b530, sub_136b580, sub_136b770, sub_67bdb0, sub_784e40, sub_7c2280, sub_7c2d80
*/
void sub_1336f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1336f90ULL || rel >= 0x1337140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337140 size=208 callers=2 calls=4
   calls: sub_13285f0, sub_13287c0, sub_13297f0, sub_eb77f0
*/
void sub_1337140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337140ULL || rel >= 0x1337210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337210 size=16 callers=0 calls=0
*/
void sub_1337210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337210ULL || rel >= 0x1337220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337220 size=320 callers=0 calls=0
*/
void sub_1337220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337220ULL || rel >= 0x1337360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337360 size=16 callers=0 calls=0
*/
void sub_1337360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337360ULL || rel >= 0x1337370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337370 size=16 callers=0 calls=0
*/
void sub_1337370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337370ULL || rel >= 0x1337380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337380 size=16 callers=0 calls=0
*/
void sub_1337380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337380ULL || rel >= 0x1337390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337390 size=16 callers=0 calls=0
*/
void sub_1337390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337390ULL || rel >= 0x13373a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013373a0 size=16 callers=0 calls=0
*/
void sub_13373a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13373a0ULL || rel >= 0x13373b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013373b0 size=16 callers=0 calls=0
*/
void sub_13373b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13373b0ULL || rel >= 0x13373c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013373c0 size=16 callers=0 calls=0
*/
void sub_13373c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13373c0ULL || rel >= 0x13373d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013373d0 size=16 callers=0 calls=0
*/
void sub_13373d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13373d0ULL || rel >= 0x13373e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013373e0 size=304 callers=0 calls=0
*/
void sub_13373e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13373e0ULL || rel >= 0x1337510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337510 size=112 callers=0 calls=2
   calls: sub_13285f0, sub_132bc40
*/
void sub_1337510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337510ULL || rel >= 0x1337580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337580 size=16 callers=0 calls=0
*/
void sub_1337580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337580ULL || rel >= 0x1337590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337590 size=16 callers=0 calls=0
*/
void sub_1337590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337590ULL || rel >= 0x13375a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013375a0 size=16 callers=0 calls=0
*/
void sub_13375a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13375a0ULL || rel >= 0x13375b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013375b0 size=16 callers=0 calls=0
*/
void sub_13375b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13375b0ULL || rel >= 0x13375c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013375c0 size=16 callers=0 calls=0
*/
void sub_13375c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13375c0ULL || rel >= 0x13375d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013375d0 size=16 callers=0 calls=0
*/
void sub_13375d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13375d0ULL || rel >= 0x13375e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013375e0 size=16 callers=0 calls=0
*/
void sub_13375e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13375e0ULL || rel >= 0x13375f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013375f0 size=64 callers=0 calls=0
*/
void sub_13375f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13375f0ULL || rel >= 0x1337630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337630 size=64 callers=0 calls=0
*/
void sub_1337630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337630ULL || rel >= 0x1337670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337670 size=48 callers=0 calls=0
*/
void sub_1337670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337670ULL || rel >= 0x13376a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013376a0 size=48 callers=0 calls=0
*/
void sub_13376a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13376a0ULL || rel >= 0x13376d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013376d0 size=64 callers=0 calls=0
*/
void sub_13376d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13376d0ULL || rel >= 0x1337710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337710 size=64 callers=0 calls=0
*/
void sub_1337710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337710ULL || rel >= 0x1337750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337750 size=48 callers=0 calls=0
*/
void sub_1337750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337750ULL || rel >= 0x1337780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337780 size=48 callers=0 calls=0
*/
void sub_1337780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337780ULL || rel >= 0x13377b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013377b0 size=64 callers=0 calls=0
*/
void sub_13377b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13377b0ULL || rel >= 0x13377f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013377f0 size=16 callers=0 calls=0
*/
void sub_13377f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13377f0ULL || rel >= 0x1337800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337800 size=16 callers=0 calls=0
*/
void sub_1337800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337800ULL || rel >= 0x1337810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337810 size=16 callers=0 calls=0
*/
void sub_1337810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337810ULL || rel >= 0x1337820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337820 size=16 callers=0 calls=0
*/
void sub_1337820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337820ULL || rel >= 0x1337830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337830 size=16 callers=0 calls=0
*/
void sub_1337830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337830ULL || rel >= 0x1337840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337840 size=16 callers=0 calls=0
*/
void sub_1337840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337840ULL || rel >= 0x1337850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337850 size=16 callers=0 calls=0
*/
void sub_1337850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337850ULL || rel >= 0x1337860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337860 size=144 callers=0 calls=3
   calls: sub_13285f0, sub_132bcb0, sub_132d490
*/
void sub_1337860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337860ULL || rel >= 0x13378f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013378f0 size=64 callers=0 calls=0
*/
void sub_13378f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13378f0ULL || rel >= 0x1337930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337930 size=48 callers=0 calls=0
*/
void sub_1337930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337930ULL || rel >= 0x1337960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337960 size=48 callers=0 calls=0
*/
void sub_1337960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337960ULL || rel >= 0x1337990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337990 size=112 callers=0 calls=1
   calls: sub_1047680
*/
void sub_1337990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337990ULL || rel >= 0x1337a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337a00 size=64 callers=0 calls=0
*/
void sub_1337a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337a00ULL || rel >= 0x1337a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337a40 size=48 callers=0 calls=0
*/
void sub_1337a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337a40ULL || rel >= 0x1337a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337a70 size=48 callers=0 calls=0
*/
void sub_1337a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337a70ULL || rel >= 0x1337aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337aa0 size=400 callers=0 calls=6
   calls: sub_13285f0, sub_132bc60, sub_ebccd0, sub_ebcfb0, sub_ebd130, sub_f9c860
*/
void sub_1337aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337aa0ULL || rel >= 0x1337c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337c30 size=16 callers=0 calls=0
*/
void sub_1337c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337c30ULL || rel >= 0x1337c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337c40 size=16 callers=0 calls=0
*/
void sub_1337c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337c40ULL || rel >= 0x1337c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337c50 size=16 callers=0 calls=0
*/
void sub_1337c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337c50ULL || rel >= 0x1337c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337c60 size=16 callers=0 calls=0
*/
void sub_1337c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337c60ULL || rel >= 0x1337c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337c70 size=16 callers=0 calls=0
*/
void sub_1337c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337c70ULL || rel >= 0x1337c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337c80 size=16 callers=0 calls=0
*/
void sub_1337c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337c80ULL || rel >= 0x1337c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337c90 size=16 callers=0 calls=0
*/
void sub_1337c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337c90ULL || rel >= 0x1337ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337ca0 size=112 callers=0 calls=2
   calls: sub_13285f0, sub_132bc40
*/
void sub_1337ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337ca0ULL || rel >= 0x1337d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337d10 size=16 callers=0 calls=0
*/
void sub_1337d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337d10ULL || rel >= 0x1337d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337d20 size=16 callers=0 calls=0
*/
void sub_1337d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337d20ULL || rel >= 0x1337d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337d30 size=16 callers=0 calls=0
*/
void sub_1337d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337d30ULL || rel >= 0x1337d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337d40 size=16 callers=0 calls=0
*/
void sub_1337d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337d40ULL || rel >= 0x1337d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337d50 size=16 callers=0 calls=0
*/
void sub_1337d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337d50ULL || rel >= 0x1337d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337d60 size=16 callers=0 calls=0
*/
void sub_1337d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337d60ULL || rel >= 0x1337d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337d70 size=16 callers=0 calls=0
*/
void sub_1337d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337d70ULL || rel >= 0x1337d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337d80 size=80 callers=0 calls=2
   calls: sub_132cbc0, sub_e807f0
*/
void sub_1337d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337d80ULL || rel >= 0x1337dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337dd0 size=16 callers=0 calls=0
*/
void sub_1337dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337dd0ULL || rel >= 0x1337de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337de0 size=16 callers=0 calls=0
*/
void sub_1337de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337de0ULL || rel >= 0x1337df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337df0 size=16 callers=0 calls=0
*/
void sub_1337df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337df0ULL || rel >= 0x1337e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337e00 size=16 callers=0 calls=0
*/
void sub_1337e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337e00ULL || rel >= 0x1337e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337e10 size=16 callers=0 calls=0
*/
void sub_1337e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337e10ULL || rel >= 0x1337e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337e20 size=16 callers=0 calls=0
*/
void sub_1337e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337e20ULL || rel >= 0x1337e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337e30 size=16 callers=0 calls=0
*/
void sub_1337e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337e30ULL || rel >= 0x1337e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337e40 size=112 callers=0 calls=2
   calls: sub_13285f0, sub_132bc40
*/
void sub_1337e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337e40ULL || rel >= 0x1337eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337eb0 size=16 callers=0 calls=0
*/
void sub_1337eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337eb0ULL || rel >= 0x1337ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337ec0 size=16 callers=0 calls=0
*/
void sub_1337ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337ec0ULL || rel >= 0x1337ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337ed0 size=16 callers=0 calls=0
*/
void sub_1337ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337ed0ULL || rel >= 0x1337ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337ee0 size=16 callers=0 calls=0
*/
void sub_1337ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337ee0ULL || rel >= 0x1337ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337ef0 size=16 callers=0 calls=0
*/
void sub_1337ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337ef0ULL || rel >= 0x1337f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337f00 size=16 callers=0 calls=0
*/
void sub_1337f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337f00ULL || rel >= 0x1337f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337f10 size=16 callers=0 calls=0
*/
void sub_1337f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337f10ULL || rel >= 0x1337f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337f20 size=112 callers=0 calls=2
   calls: sub_132cbc0, sub_e807f0
*/
void sub_1337f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337f20ULL || rel >= 0x1337f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337f90 size=16 callers=0 calls=0
*/
void sub_1337f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337f90ULL || rel >= 0x1337fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337fa0 size=16 callers=0 calls=0
*/
void sub_1337fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337fa0ULL || rel >= 0x1337fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337fb0 size=16 callers=0 calls=0
*/
void sub_1337fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337fb0ULL || rel >= 0x1337fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337fc0 size=16 callers=0 calls=0
*/
void sub_1337fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337fc0ULL || rel >= 0x1337fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337fd0 size=16 callers=0 calls=0
*/
void sub_1337fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337fd0ULL || rel >= 0x1337fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337fe0 size=16 callers=0 calls=0
*/
void sub_1337fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337fe0ULL || rel >= 0x1337ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01337ff0 size=16 callers=0 calls=0
*/
void sub_1337ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1337ff0ULL || rel >= 0x1338000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01338000 size=112 callers=0 calls=2
   calls: sub_132cbc0, sub_e807f0
*/
void sub_1338000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1338000ULL || rel >= 0x1338070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01338070 size=16 callers=0 calls=0
*/
void sub_1338070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1338070ULL || rel >= 0x1338080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01338080 size=16 callers=0 calls=0
*/
void sub_1338080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1338080ULL || rel >= 0x1338090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01338090 size=16 callers=0 calls=0
*/
void sub_1338090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1338090ULL || rel >= 0x13380a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013380a0 size=16 callers=0 calls=0
*/
void sub_13380a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13380a0ULL || rel >= 0x13380b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013380b0 size=16 callers=0 calls=0
*/
void sub_13380b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13380b0ULL || rel >= 0x13380c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013380c0 size=16 callers=0 calls=0
*/
void sub_13380c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13380c0ULL || rel >= 0x13380d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013380d0 size=16 callers=0 calls=0
*/
void sub_13380d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13380d0ULL || rel >= 0x13380e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013380e0 size=160 callers=0 calls=0
*/
void sub_13380e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13380e0ULL || rel >= 0x1338180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01338180 size=288 callers=1 calls=3
   calls: anonymous, sub_132c7c0, sub_d0c0
   ref: StateConfirmBattleTeam
*/
void StateConfirmBattleTeam(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1338180ULL || rel >= 0x13382a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013382a0 size=1008 callers=0 calls=21
   calls: sub_1327b20, sub_1328090, sub_13287c0, sub_13292a0, sub_1329d10, sub_132c350, sub_132c370, sub_132c390, sub_132c3b0, sub_132cb10, sub_1331eb0, sub_1338690
   ... +9 more
   ref: ViewTeamDetail
   ref: View_OptionBar
*/
void View_OptionBar_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13382a0ULL || rel >= 0x1338690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01338690 size=544 callers=1 calls=6
   calls: sub_13285f0, sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0
*/
void sub_1338690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1338690ULL || rel >= 0x13388b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013388b0 size=1776 callers=0 calls=23
   calls: sub_1100840, sub_1100870, sub_13285f0, sub_13287c0, sub_1329790, sub_132cb20, sub_132ce90, sub_132d080, sub_132d450, sub_132d490, sub_1338fa0, sub_133bea0
   ... +11 more
*/
void sub_13388b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13388b0ULL || rel >= 0x1338fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01338fa0 size=224 callers=1 calls=2
   calls: sub_13285f0, sub_132bc40
*/
void sub_1338fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1338fa0ULL || rel >= 0x1339080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339080 size=160 callers=0 calls=1
   calls: sub_13285f0
*/
void sub_1339080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339080ULL || rel >= 0x1339120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339120 size=384 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_1339120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339120ULL || rel >= 0x13392a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013392a0 size=16 callers=0 calls=0
*/
void sub_13392a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13392a0ULL || rel >= 0x13392b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013392b0 size=16 callers=0 calls=0
*/
void sub_13392b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13392b0ULL || rel >= 0x13392c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013392c0 size=16 callers=0 calls=0
*/
void sub_13392c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13392c0ULL || rel >= 0x13392d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013392d0 size=16 callers=0 calls=0
*/
void sub_13392d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13392d0ULL || rel >= 0x13392e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013392e0 size=16 callers=0 calls=0
*/
void sub_13392e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13392e0ULL || rel >= 0x13392f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013392f0 size=16 callers=0 calls=0
*/
void sub_13392f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13392f0ULL || rel >= 0x1339300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339300 size=16 callers=0 calls=0
*/
void sub_1339300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339300ULL || rel >= 0x1339310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339310 size=16 callers=0 calls=0
*/
void sub_1339310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339310ULL || rel >= 0x1339320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339320 size=304 callers=0 calls=0
*/
void sub_1339320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339320ULL || rel >= 0x1339450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339450 size=144 callers=0 calls=2
   calls: sub_13285f0, sub_132bc40
*/
void sub_1339450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339450ULL || rel >= 0x13394e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013394e0 size=16 callers=0 calls=0
*/
void sub_13394e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13394e0ULL || rel >= 0x13394f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013394f0 size=16 callers=0 calls=0
*/
void sub_13394f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13394f0ULL || rel >= 0x1339500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339500 size=16 callers=0 calls=0
*/
void sub_1339500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339500ULL || rel >= 0x1339510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339510 size=16 callers=0 calls=0
*/
void sub_1339510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339510ULL || rel >= 0x1339520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339520 size=16 callers=0 calls=0
*/
void sub_1339520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339520ULL || rel >= 0x1339530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339530 size=16 callers=0 calls=0
*/
void sub_1339530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339530ULL || rel >= 0x1339540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339540 size=16 callers=0 calls=0
*/
void sub_1339540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339540ULL || rel >= 0x1339550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339550 size=16 callers=0 calls=0
*/
void sub_1339550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339550ULL || rel >= 0x1339560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339560 size=16 callers=0 calls=0
*/
void sub_1339560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339560ULL || rel >= 0x1339570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339570 size=16 callers=0 calls=0
*/
void sub_1339570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339570ULL || rel >= 0x1339580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339580 size=16 callers=0 calls=0
*/
void sub_1339580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339580ULL || rel >= 0x1339590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339590 size=16 callers=0 calls=0
*/
void sub_1339590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339590ULL || rel >= 0x13395a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013395a0 size=16 callers=0 calls=0
*/
void sub_13395a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13395a0ULL || rel >= 0x13395b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013395b0 size=16 callers=0 calls=0
*/
void sub_13395b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13395b0ULL || rel >= 0x13395c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013395c0 size=16 callers=0 calls=0
*/
void sub_13395c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13395c0ULL || rel >= 0x13395d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013395d0 size=112 callers=0 calls=2
   calls: sub_13285f0, sub_132bc40
*/
void sub_13395d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13395d0ULL || rel >= 0x1339640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339640 size=16 callers=0 calls=0
*/
void sub_1339640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339640ULL || rel >= 0x1339650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339650 size=16 callers=0 calls=0
*/
void sub_1339650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339650ULL || rel >= 0x1339660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339660 size=16 callers=0 calls=0
*/
void sub_1339660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339660ULL || rel >= 0x1339670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339670 size=16 callers=0 calls=0
*/
void sub_1339670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339670ULL || rel >= 0x1339680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339680 size=16 callers=0 calls=0
*/
void sub_1339680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339680ULL || rel >= 0x1339690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339690 size=16 callers=0 calls=0
*/
void sub_1339690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339690ULL || rel >= 0x13396a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013396a0 size=16 callers=0 calls=0
*/
void sub_13396a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13396a0ULL || rel >= 0x13396b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013396b0 size=560 callers=4 calls=2
   calls: sub_14aad40, sub_8f3180
   ref: pane_%s
   ref: P_iconType_00
   ref: pane_%s_%s
*/
void P_iconType_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13396b0ULL || rel >= 0x13398e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013398e0 size=608 callers=4 calls=4
   calls: sub_14d6920, sub_780d40, sub_923fb0, sub_e83930
   ref: skill_color_pattern
   ref: pane_%s
   ref: anime_%s
   ref: pane_%s_%s
   ref: T_rental_skill_00
   ref: anime_%s_%s
*/
void skill_color_pattern(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13398e0ULL || rel >= 0x1339b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01339b40 size=4080 callers=6 calls=6
   calls: P_iconType_00, sub_14aad40, sub_14ba7b0, sub_8efdd0, sub_8f3180, sub_e7f7f0
   ref: P_typeicon_01
   ref: pane_%s
   ref: P_rental_icon_00
   ref: L_rental_skill_00
   ref: pane_%s_%s
   ref: L_rental_skill_01
   ref: P_typeicon_00
   ref: L_rental_icon_00_P_pokeIcon_00
*/
void L_rental_icon_00_P_pokeIcon_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1339b40ULL || rel >= 0x133ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ab30 size=2160 callers=12 calls=20
   calls: skill_color_pattern, sub_133b3a0, sub_133b4c0, sub_14aad40, sub_14bb830, sub_14bbf30, sub_14d6920, sub_762930, sub_762d50, sub_762d70, sub_764b40, sub_765dd0
   ... +8 more
   ref: L_rental_icon_01_switch
   ref: pane_%s
   ref: anime_%s
   ref: pane_%s_%s
   ref: T_rental_poke_03
   ref: anime_%s_%s
   ref: T_rental_poke_02
   ref: T_rental_poke_01
*/
void L_rental_icon_01_switch(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ab30ULL || rel >= 0x133b3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133b3a0 size=288 callers=1 calls=2
   calls: sub_1315b90, sub_67d450
*/
void sub_133b3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133b3a0ULL || rel >= 0x133b4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133b4c0 size=272 callers=1 calls=2
   calls: sub_67d450, tokusei
*/
void sub_133b4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133b4c0ULL || rel >= 0x133b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133b5d0 size=1408 callers=0 calls=9
   calls: L_rental_icon_00_P_pokeIcon_00, sub_133bb50, sub_133cf10, sub_14ba7b0, sub_14e1a00, sub_8f3180, sub_e7eb10, sub_e7f7c0, sub_e83e60
*/
void sub_133b5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133b5d0ULL || rel >= 0x133bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133bb50 size=832 callers=1 calls=0
*/
void sub_133bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133bb50ULL || rel >= 0x133be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133be90 size=16 callers=1 calls=0
*/
void sub_133be90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133be90ULL || rel >= 0x133bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133bea0 size=144 callers=2 calls=0
*/
void sub_133bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133bea0ULL || rel >= 0x133bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133bf30 size=1664 callers=1 calls=16
   calls: L_rental_icon_01_switch, player_icon_table_3, sub_13133a0, sub_1313430, sub_1314a80, sub_14aad40, sub_14ac370, sub_67be60, sub_67bf00, sub_67bfa0, sub_67d450, sub_783bd0
   ... +4 more
*/
void sub_133bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133bf30ULL || rel >= 0x133c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133c5b0 size=528 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/rental_team/bin/rentalteam_share_00_lyt.bin
   ref: bin/appli/rental_team/bin/rentalteam_share_00_uikit.bin
*/
void rentalteam_share_00_uikit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133c5b0ULL || rel >= 0x133c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133c7c0 size=64 callers=0 calls=0
*/
void sub_133c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133c7c0ULL || rel >= 0x133c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133c800 size=64 callers=0 calls=0
*/
void sub_133c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133c800ULL || rel >= 0x133c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133c840 size=16 callers=1 calls=0
*/
void sub_133c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133c840ULL || rel >= 0x133c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133c850 size=128 callers=0 calls=1
   calls: sub_133cf10
*/
void sub_133c850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133c850ULL || rel >= 0x133c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133c8d0 size=128 callers=0 calls=1
   calls: sub_133cf10
*/
void sub_133c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133c8d0ULL || rel >= 0x133c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133c950 size=16 callers=0 calls=0
*/
void sub_133c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133c950ULL || rel >= 0x133c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133c960 size=128 callers=0 calls=1
   calls: sub_133cf10
*/
void sub_133c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133c960ULL || rel >= 0x133c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133c9e0 size=128 callers=0 calls=1
   calls: sub_133cf10
*/
void sub_133c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133c9e0ULL || rel >= 0x133ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ca60 size=16 callers=0 calls=0
*/
void sub_133ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ca60ULL || rel >= 0x133ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ca70 size=16 callers=0 calls=0
*/
void sub_133ca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ca70ULL || rel >= 0x133ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ca80 size=128 callers=0 calls=1
   calls: sub_133cf10
*/
void sub_133ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ca80ULL || rel >= 0x133cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133cb00 size=128 callers=0 calls=1
   calls: sub_133cf10
*/
void sub_133cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133cb00ULL || rel >= 0x133cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133cb80 size=304 callers=0 calls=0
*/
void sub_133cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133cb80ULL || rel >= 0x133ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ccb0 size=80 callers=0 calls=0
*/
void sub_133ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ccb0ULL || rel >= 0x133cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133cd00 size=80 callers=0 calls=0
*/
void sub_133cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133cd00ULL || rel >= 0x133cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133cd50 size=224 callers=0 calls=0
*/
void sub_133cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133cd50ULL || rel >= 0x133ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ce30 size=224 callers=0 calls=0
*/
void sub_133ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ce30ULL || rel >= 0x133cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133cf10 size=368 callers=8 calls=0
*/
void sub_133cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133cf10ULL || rel >= 0x133d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133d080 size=16 callers=0 calls=0
*/
void sub_133d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133d080ULL || rel >= 0x133d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133d090 size=16 callers=0 calls=0
*/
void sub_133d090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133d090ULL || rel >= 0x133d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133d0a0 size=16 callers=0 calls=0
*/
void sub_133d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133d0a0ULL || rel >= 0x133d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133d0b0 size=16 callers=0 calls=0
*/
void sub_133d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133d0b0ULL || rel >= 0x133d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133d0c0 size=656 callers=0 calls=0
   ref: L_rental_poke_d_02
   ref: L_rental_poke_d_05
   ref: L_rental_poke_d_01
   ref: L_rental_poke_d_00
   ref: L_rental_poke_d_03
   ref: L_rental_poke_d_04
*/
void L_rental_poke_d_05(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133d0c0ULL || rel >= 0x133d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133d350 size=96 callers=1 calls=2
   calls: sub_133d3b0, sub_e7b660
*/
void sub_133d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133d350ULL || rel >= 0x133d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133d3b0 size=224 callers=1 calls=3
   calls: sub_133e840, sub_7c2da0, sub_e7b5e0
*/
void sub_133d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133d3b0ULL || rel >= 0x133d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133d490 size=864 callers=0 calls=10
   calls: sub_133d7f0, sub_133e930, sub_133ede0, sub_1340a40, sub_5cfad0, sub_78f150, sub_78f240, sub_e7c0f0, sub_e7c160, sub_e7e890
   ref: common/report.dat
   ref: ViewReport
*/
void ViewReport(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133d490ULL || rel >= 0x133d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133d7f0 size=432 callers=1 calls=3
   calls: sub_133ecb0, sub_e7c160, sub_e7c210
*/
void sub_133d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133d7f0ULL || rel >= 0x133d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133d9a0 size=624 callers=0 calls=12
   calls: fi_badges_complete, sub_133f180, sub_1340e10, sub_1340e50, sub_1341210, sub_1341250, sub_1341260, sub_1343380, sub_1343ce0, sub_e7ea20, sub_e921d0, sub_ee78c0
   ref: ViewReport
*/
void ViewReport_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133d9a0ULL || rel >= 0x133dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133dc10 size=304 callers=0 calls=3
   calls: msg_ui_report_title_06, sub_13083a0, sub_e7ea90
   ref: common/report.dat
*/
void report(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133dc10ULL || rel >= 0x133dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133dd40 size=128 callers=0 calls=2
   calls: sub_133e930, sub_e7c1a0
*/
void sub_133dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133dd40ULL || rel >= 0x133ddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ddc0 size=304 callers=0 calls=3
   calls: sub_133f3c0, sub_133f500, sub_e7c160
*/
void sub_133ddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ddc0ULL || rel >= 0x133def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133def0 size=512 callers=0 calls=4
   calls: sub_133e930, sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_133def0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133def0ULL || rel >= 0x133e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e0f0 size=16 callers=0 calls=0
*/
void sub_133e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e0f0ULL || rel >= 0x133e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e100 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_133e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e100ULL || rel >= 0x133e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e1b0 size=16 callers=0 calls=0
*/
void sub_133e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e1b0ULL || rel >= 0x133e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e1c0 size=16 callers=0 calls=0
*/
void sub_133e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e1c0ULL || rel >= 0x133e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e1d0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_133e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e1d0ULL || rel >= 0x133e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e280 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_133e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e280ULL || rel >= 0x133e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e330 size=16 callers=0 calls=0
*/
void sub_133e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e330ULL || rel >= 0x133e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e340 size=16 callers=0 calls=0
*/
void sub_133e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e340ULL || rel >= 0x133e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e350 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_133e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e350ULL || rel >= 0x133e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e3d0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_133e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e3d0ULL || rel >= 0x133e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e540 size=96 callers=0 calls=1
   calls: sub_133e760
*/
void sub_133e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e540ULL || rel >= 0x133e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e5a0 size=16 callers=0 calls=0
*/
void sub_133e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e5a0ULL || rel >= 0x133e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e5b0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_133e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e5b0ULL || rel >= 0x133e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e650 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_133e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e650ULL || rel >= 0x133e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e710 size=16 callers=0 calls=0
*/
void sub_133e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e710ULL || rel >= 0x133e720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e720 size=16 callers=0 calls=0
*/
void sub_133e720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e720ULL || rel >= 0x133e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e730 size=16 callers=0 calls=0
*/
void sub_133e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e730ULL || rel >= 0x133e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e740 size=32 callers=0 calls=0
*/
void sub_133e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e740ULL || rel >= 0x133e760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e760 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_133e760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e760ULL || rel >= 0x133e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e840 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_133e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e840ULL || rel >= 0x133e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133e930 size=768 callers=6 calls=1
   calls: sub_5e2bc0
*/
void sub_133e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e930ULL || rel >= 0x133ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ec30 size=16 callers=0 calls=0
*/
void sub_133ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ec30ULL || rel >= 0x133ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ec40 size=16 callers=0 calls=0
*/
void sub_133ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ec40ULL || rel >= 0x133ec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ec50 size=16 callers=0 calls=0
*/
void sub_133ec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ec50ULL || rel >= 0x133ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ec60 size=16 callers=0 calls=0
*/
void sub_133ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ec60ULL || rel >= 0x133ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ec70 size=16 callers=0 calls=0
*/
void sub_133ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ec70ULL || rel >= 0x133ec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ec80 size=16 callers=0 calls=0
*/
void sub_133ec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ec80ULL || rel >= 0x133ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ec90 size=16 callers=0 calls=0
*/
void sub_133ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ec90ULL || rel >= 0x133eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133eca0 size=16 callers=0 calls=0
*/
void sub_133eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133eca0ULL || rel >= 0x133ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ecb0 size=304 callers=1 calls=0
*/
void sub_133ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ecb0ULL || rel >= 0x133ede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ede0 size=288 callers=1 calls=2
   calls: sub_133ef00, sub_e809c0
*/
void sub_133ede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ede0ULL || rel >= 0x133ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ef00 size=640 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_133ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ef00ULL || rel >= 0x133f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133f180 size=272 callers=3 calls=2
   calls: sub_133f290, sub_5cfaf0
*/
void sub_133f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133f180ULL || rel >= 0x133f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133f290 size=304 callers=1 calls=0
*/
void sub_133f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133f290ULL || rel >= 0x133f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133f3c0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_133f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133f3c0ULL || rel >= 0x133f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133f500 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_133f500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133f500ULL || rel >= 0x133f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133f650 size=1008 callers=0 calls=7
   calls: sub_12a25b0, sub_12a26a0, sub_133f180, sub_133ffc0, sub_c39c40, sub_d0c0, sub_eb19e0
   ref: ViewReport
   ref: StateReportBackup
*/
void StateReportBackup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133f650ULL || rel >= 0x133fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133fa40 size=464 callers=0 calls=16
   calls: anime_in_01, sub_1341270, sub_1341e30, sub_1343750, sub_13437c0, sub_1343940, sub_13439a0, sub_13439d0, sub_1343ce0, sub_c44310, sub_c44410, sub_c444b0
   ... +4 more
*/
void sub_133fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133fa40ULL || rel >= 0x133fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133fc10 size=16 callers=0 calls=0
*/
void sub_133fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133fc10ULL || rel >= 0x133fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133fc20 size=96 callers=0 calls=0
*/
void sub_133fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133fc20ULL || rel >= 0x133fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133fc80 size=96 callers=0 calls=0
*/
void sub_133fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133fc80ULL || rel >= 0x133fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133fce0 size=16 callers=0 calls=0
*/
void sub_133fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133fce0ULL || rel >= 0x133fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133fcf0 size=96 callers=0 calls=0
*/
void sub_133fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133fcf0ULL || rel >= 0x133fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133fd50 size=96 callers=0 calls=0
*/
void sub_133fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133fd50ULL || rel >= 0x133fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133fdb0 size=16 callers=0 calls=0
*/
void sub_133fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133fdb0ULL || rel >= 0x133fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133fdc0 size=16 callers=0 calls=0
*/
void sub_133fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133fdc0ULL || rel >= 0x133fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133fdd0 size=96 callers=0 calls=0
*/
void sub_133fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133fdd0ULL || rel >= 0x133fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133fe30 size=96 callers=0 calls=0
*/
void sub_133fe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133fe30ULL || rel >= 0x133fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133fe90 size=304 callers=0 calls=0
*/
void sub_133fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133fe90ULL || rel >= 0x133ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0133ffc0 size=240 callers=8 calls=1
   calls: sub_c39c40
*/
void sub_133ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ffc0ULL || rel >= 0x13400b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013400b0 size=192 callers=0 calls=2
   calls: sub_12a25b0, sub_12a26a0
*/
void sub_13400b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13400b0ULL || rel >= 0x1340170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340170 size=16 callers=0 calls=0
*/
void sub_1340170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340170ULL || rel >= 0x1340180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340180 size=16 callers=0 calls=0
*/
void sub_1340180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340180ULL || rel >= 0x1340190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340190 size=16 callers=0 calls=0
*/
void sub_1340190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340190ULL || rel >= 0x13401a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013401a0 size=624 callers=0 calls=4
   calls: sub_133f180, sub_133ffc0, sub_c39c40, sub_d0c0
   ref: ViewReport
   ref: StateReportSave
*/
void StateReportSave(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13401a0ULL || rel >= 0x1340410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340410 size=640 callers=0 calls=26
   calls: anime_L_iconSave_00_check, anime_L_iconSave_00_loop, anime_L_iconSave_00_loop_2, anime_in_01, msg_ui_report_message_01, pane_T_message_00, sub_1341270, sub_1341e30, sub_1343750, sub_13437c0, sub_13438d0, sub_1343940
   ... +14 more
*/
void sub_1340410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340410ULL || rel >= 0x1340690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340690 size=16 callers=0 calls=0
*/
void sub_1340690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340690ULL || rel >= 0x13406a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013406a0 size=96 callers=0 calls=0
*/
void sub_13406a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13406a0ULL || rel >= 0x1340700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340700 size=96 callers=0 calls=0
*/
void sub_1340700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340700ULL || rel >= 0x1340760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340760 size=16 callers=0 calls=0
*/
void sub_1340760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340760ULL || rel >= 0x1340770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340770 size=96 callers=0 calls=0
*/
void sub_1340770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340770ULL || rel >= 0x13407d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013407d0 size=96 callers=0 calls=0
*/
void sub_13407d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13407d0ULL || rel >= 0x1340830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340830 size=16 callers=0 calls=0
*/
void sub_1340830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340830ULL || rel >= 0x1340840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340840 size=16 callers=0 calls=0
*/
void sub_1340840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340840ULL || rel >= 0x1340850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340850 size=96 callers=0 calls=0
*/
void sub_1340850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340850ULL || rel >= 0x13408b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013408b0 size=96 callers=0 calls=0
*/
void sub_13408b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13408b0ULL || rel >= 0x1340910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340910 size=304 callers=0 calls=0
*/
void sub_1340910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340910ULL || rel >= 0x1340a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340a40 size=976 callers=2 calls=3
   calls: sub_1306f20, sub_5dd790, sub_5e2930
*/
void sub_1340a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340a40ULL || rel >= 0x1340e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340e10 size=64 callers=3 calls=0
*/
void sub_1340e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340e10ULL || rel >= 0x1340e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340e50 size=224 callers=2 calls=2
   calls: sub_1340f30, sub_1341100
*/
void sub_1340e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340e50ULL || rel >= 0x1340f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01340f30 size=464 callers=2 calls=6
   calls: sub_603250, sub_6323a0, sub_986200, sub_ea9e40, sub_ed1920, sub_eec520
*/
void sub_1340f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1340f30ULL || rel >= 0x1341100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01341100 size=272 callers=2 calls=6
   calls: sub_598de0, sub_5d99d0, sub_618ec0, sub_619060, sub_b8ae40, sub_b8b050
*/
void sub_1341100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341100ULL || rel >= 0x1341210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01341210 size=64 callers=2 calls=1
   calls: sub_65cd90
*/
void sub_1341210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341210ULL || rel >= 0x1341250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01341250 size=16 callers=2 calls=0
*/
void sub_1341250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341250ULL || rel >= 0x1341260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01341260 size=16 callers=2 calls=0
*/
void sub_1341260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341260ULL || rel >= 0x1341270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01341270 size=64 callers=5 calls=1
   calls: sub_619060
*/
void sub_1341270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341270ULL || rel >= 0x13412b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013412b0 size=480 callers=3 calls=4
   calls: sub_59b170, sub_59b1a0, sub_5cfad0, sub_7c2d80
   ref: fi_badges_complete
*/
void fi_badges_complete(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13412b0ULL || rel >= 0x1341490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01341490 size=352 callers=0 calls=5
   calls: sub_1306f20, sub_5e26a0, sub_5e2930, sub_5e3870, sub_96a5a0
*/
void sub_1341490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341490ULL || rel >= 0x13415f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013415f0 size=16 callers=0 calls=0
*/
void sub_13415f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13415f0ULL || rel >= 0x1341600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01341600 size=16 callers=0 calls=0
*/
void sub_1341600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341600ULL || rel >= 0x1341610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01341610 size=16 callers=0 calls=0
*/
void sub_1341610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341610ULL || rel >= 0x1341620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01341620 size=352 callers=0 calls=5
   calls: sub_1306f20, sub_5e26a0, sub_5e2930, sub_5e3870, sub_b77710
*/
void sub_1341620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341620ULL || rel >= 0x1341780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01341780 size=16 callers=0 calls=0
*/
void sub_1341780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341780ULL || rel >= 0x1341790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01341790 size=16 callers=0 calls=0
*/
void sub_1341790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341790ULL || rel >= 0x13417a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013417a0 size=16 callers=0 calls=0
*/
void sub_13417a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13417a0ULL || rel >= 0x13417b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013417b0 size=1312 callers=0 calls=5
   calls: sub_14aad40, sub_14ba7b0, sub_67b990, sub_8f3180, sub_e80580
*/
void sub_13417b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13417b0ULL || rel >= 0x1341cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01341cd0 size=352 callers=10 calls=2
   calls: sub_14ac040, sub_67d450
*/
void sub_1341cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341cd0ULL || rel >= 0x1341e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01341e30 size=32 callers=2 calls=0
*/
void sub_1341e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341e30ULL || rel >= 0x1341e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01341e50 size=896 callers=2 calls=9
   calls: sub_1311c60, sub_1312f50, sub_1315b90, sub_1341cd0, sub_1361fd0, sub_67bdb0, sub_67d450, sub_e83ac0, sub_eaed70
   ref: pane_T_param_03
   ref: pane_T_param_00
   ref: msg_ui_report_title_05
   ref: pane_T_param_04
   ref: msg_ui_report_title_00
*/
void msg_ui_report_title_05(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341e50ULL || rel >= 0x13421d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013421d0 size=592 callers=2 calls=9
   calls: sub_1311c60, sub_1312f50, sub_1315b90, sub_136f5a0, sub_136f5b0, sub_67b990, sub_67bdb0, sub_67d450, sub_e83ac0
   ref: pane_T_param_06
*/
void pane_T_param_06(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13421d0ULL || rel >= 0x1342420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01342420 size=3648 callers=1 calls=24
   calls: msg_ui_report_title_05, pane_T_param_06, place_name_6, sub_1311c60, sub_1312f50, sub_1315b90, sub_1341cd0, sub_1343260, sub_135a1a0, sub_136f5e0, sub_136f5f0, sub_136f600
   ... +12 more
   ref: pane_T_param_07
   ref: msg_ui_report_title_02
   ref: msg_ui_report_title_06
   ref: grid_messageWin
   ref: msg_ui_report_title_01
   ref: msg_ui_report_title_03
   ref: pane_T_param_02
   ref: pane_L_button_01_T_00
*/
void msg_ui_report_title_06(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1342420ULL || rel >= 0x1343260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01343260 size=224 callers=1 calls=5
   calls: sub_136f5e0, sub_136f5f0, sub_136f600, sub_136f610, sub_136f620
*/
void sub_1343260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1343260ULL || rel >= 0x1343340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01343340 size=64 callers=0 calls=2
   calls: msg_ui_report_title_05, pane_T_param_06
*/
void sub_1343340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1343340ULL || rel >= 0x1343380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01343380 size=976 callers=1 calls=3
   calls: sub_14aad40, sub_14bbb20, sub_762d50
*/
void sub_1343380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1343380ULL || rel >= 0x1343750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01343750 size=112 callers=3 calls=2
   calls: sub_14ab0c0, sub_14ab440
*/
void sub_1343750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1343750ULL || rel >= 0x13437c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013437c0 size=128 callers=2 calls=3
   calls: sub_1502120, sub_5cfad0, sub_eb6230
*/
void sub_13437c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13437c0ULL || rel >= 0x1343840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01343840 size=16 callers=1 calls=0
   ref: anime_L_iconSave_00_loop
*/
void anime_L_iconSave_00_loop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1343840ULL || rel >= 0x1343850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01343850 size=16 callers=1 calls=0
   ref: anime_L_iconSave_00_loop
*/
void anime_L_iconSave_00_loop_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1343850ULL || rel >= 0x1343860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01343860 size=112 callers=1 calls=3
   calls: sub_1502120, sub_5cfad0, sub_e833a0
   ref: anime_L_iconSave_00_check
*/
void anime_L_iconSave_00_check(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1343860ULL || rel >= 0x13438d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013438d0 size=96 callers=1 calls=1
   calls: sub_14ab2b0
*/
void sub_13438d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13438d0ULL || rel >= 0x1343930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01343930 size=16 callers=2 calls=0
   ref: anime_in_01
*/
void anime_in_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1343930ULL || rel >= 0x1343940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01343940 size=96 callers=2 calls=1
   calls: sub_14ab2b0
*/
void sub_1343940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1343940ULL || rel >= 0x13439a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013439a0 size=48 callers=2 calls=1
   calls: sub_eb6530
*/
void sub_13439a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13439a0ULL || rel >= 0x13439d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013439d0 size=160 callers=2 calls=3
   calls: sub_1502120, sub_5cfad0, sub_eb6230
*/
void sub_13439d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13439d0ULL || rel >= 0x1343a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01343a70 size=64 callers=1 calls=1
   calls: sub_1341cd0
   ref: pane_T_message_00
   ref: msg_ui_report_message_01
*/
void msg_ui_report_message_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1343a70ULL || rel >= 0x1343ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01343ab0 size=560 callers=1 calls=8
   calls: sub_1311c60, sub_1312f50, sub_13149a0, sub_67b990, sub_67bdb0, sub_67d450, sub_e83ac0, sub_e83c60
   ref: pane_T_message_00
*/
void pane_T_message_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1343ab0ULL || rel >= 0x1343ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01343ce0 size=80 callers=5 calls=1
   calls: sub_14aad40
*/
void sub_1343ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1343ce0ULL || rel >= 0x1343d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01343d30 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/report/bin/uikit_setting_report_top_00.bin
   ref: bin/appli/report/bin/report_top_00_lyt.bin
*/
void uikit_setting_report_top_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1343d30ULL || rel >= 0x1343f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01343f10 size=288 callers=0 calls=0
*/
void sub_1343f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1343f10ULL || rel >= 0x1344030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344030 size=16 callers=0 calls=0
*/
void sub_1344030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344030ULL || rel >= 0x1344040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344040 size=16 callers=0 calls=0
*/
void sub_1344040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344040ULL || rel >= 0x1344050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344050 size=16 callers=0 calls=0
*/
void sub_1344050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344050ULL || rel >= 0x1344060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344060 size=16 callers=0 calls=0
*/
void sub_1344060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344060ULL || rel >= 0x1344070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344070 size=16 callers=0 calls=0
*/
void sub_1344070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344070ULL || rel >= 0x1344080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344080 size=16 callers=0 calls=0
*/
void sub_1344080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344080ULL || rel >= 0x1344090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344090 size=16 callers=0 calls=0
*/
void sub_1344090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344090ULL || rel >= 0x13440a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013440a0 size=16 callers=0 calls=0
*/
void sub_13440a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13440a0ULL || rel >= 0x13440b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013440b0 size=96 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_13440b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13440b0ULL || rel >= 0x1344110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344110 size=16 callers=0 calls=0
*/
void sub_1344110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344110ULL || rel >= 0x1344120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344120 size=16 callers=0 calls=0
*/
void sub_1344120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344120ULL || rel >= 0x1344130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344130 size=16 callers=0 calls=0
*/
void sub_1344130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344130ULL || rel >= 0x1344140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344140 size=96 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_1344140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344140ULL || rel >= 0x13441a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013441a0 size=16 callers=0 calls=0
*/
void sub_13441a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13441a0ULL || rel >= 0x13441b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013441b0 size=16 callers=0 calls=0
*/
void sub_13441b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13441b0ULL || rel >= 0x13441c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013441c0 size=16 callers=0 calls=0
*/
void sub_13441c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13441c0ULL || rel >= 0x13441d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013441d0 size=272 callers=1 calls=2
   calls: sub_13442e0, sub_13447b0
*/
void sub_13441d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13441d0ULL || rel >= 0x13442e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013442e0 size=288 callers=1 calls=3
   calls: sub_13448e0, sub_c38350, sub_e9db40
*/
void sub_13442e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13442e0ULL || rel >= 0x1344400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344400 size=240 callers=0 calls=0
*/
void sub_1344400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344400ULL || rel >= 0x13444f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013444f0 size=16 callers=0 calls=0
*/
void sub_13444f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13444f0ULL || rel >= 0x1344500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344500 size=16 callers=0 calls=0
*/
void sub_1344500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344500ULL || rel >= 0x1344510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344510 size=16 callers=0 calls=0
*/
void sub_1344510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344510ULL || rel >= 0x1344520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344520 size=16 callers=0 calls=0
*/
void sub_1344520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344520ULL || rel >= 0x1344530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344530 size=16 callers=0 calls=0
*/
void sub_1344530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344530ULL || rel >= 0x1344540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344540 size=16 callers=0 calls=0
*/
void sub_1344540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344540ULL || rel >= 0x1344550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344550 size=128 callers=0 calls=0
*/
void sub_1344550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344550ULL || rel >= 0x13445d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013445d0 size=16 callers=0 calls=0
*/
void sub_13445d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13445d0ULL || rel >= 0x13445e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013445e0 size=416 callers=0 calls=2
   calls: sub_133ffc0, sub_c39d70
*/
void sub_13445e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13445e0ULL || rel >= 0x1344780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344780 size=16 callers=0 calls=0
*/
void sub_1344780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344780ULL || rel >= 0x1344790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344790 size=16 callers=0 calls=0
*/
void sub_1344790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344790ULL || rel >= 0x13447a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013447a0 size=16 callers=0 calls=0
*/
void sub_13447a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13447a0ULL || rel >= 0x13447b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013447b0 size=304 callers=1 calls=0
*/
void sub_13447b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13447b0ULL || rel >= 0x13448e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013448e0 size=336 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_13448e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13448e0ULL || rel >= 0x1344a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01344a30 size=1552 callers=2 calls=2
   calls: sub_5e2350, sub_b6f8c0
*/
void sub_1344a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1344a30ULL || rel >= 0x1345040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345040 size=80 callers=0 calls=0
*/
void sub_1345040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345040ULL || rel >= 0x1345090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345090 size=80 callers=0 calls=0
*/
void sub_1345090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345090ULL || rel >= 0x13450e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013450e0 size=80 callers=0 calls=0
*/
void sub_13450e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13450e0ULL || rel >= 0x1345130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345130 size=80 callers=0 calls=0
*/
void sub_1345130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345130ULL || rel >= 0x1345180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345180 size=80 callers=0 calls=0
*/
void sub_1345180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345180ULL || rel >= 0x13451d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013451d0 size=80 callers=0 calls=0
*/
void sub_13451d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13451d0ULL || rel >= 0x1345220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345220 size=528 callers=0 calls=0
*/
void sub_1345220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345220ULL || rel >= 0x1345430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345430 size=432 callers=0 calls=5
   calls: sub_1346030, sub_1346a50, sub_1346c70, sub_1346e90, sub_137e480
*/
void sub_1345430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345430ULL || rel >= 0x13455e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013455e0 size=256 callers=0 calls=5
   calls: sub_13456e0, sub_1345820, sub_1345960, sub_1345aa0, sub_137e480
*/
void sub_13455e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13455e0ULL || rel >= 0x13456e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013456e0 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_1347350, sub_13475a0
*/
void sub_13456e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13456e0ULL || rel >= 0x1345820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345820 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_1349260, sub_13494b0
*/
void sub_1345820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345820ULL || rel >= 0x1345960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345960 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_13496c0, sub_1349910
*/
void sub_1345960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345960ULL || rel >= 0x1345aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345aa0 size=304 callers=9 calls=3
   calls: sub_1349b20, sub_1349c70, sub_1349ea0
*/
void sub_1345aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345aa0ULL || rel >= 0x1345bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345bd0 size=32 callers=3 calls=0
*/
void sub_1345bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345bd0ULL || rel >= 0x1345bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345bf0 size=128 callers=2 calls=1
   calls: sub_eaed70
*/
void sub_1345bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345bf0ULL || rel >= 0x1345c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345c70 size=32 callers=1 calls=0
*/
void sub_1345c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345c70ULL || rel >= 0x1345c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345c90 size=16 callers=7 calls=0
*/
void sub_1345c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345c90ULL || rel >= 0x1345ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345ca0 size=16 callers=31 calls=0
*/
void sub_1345ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345ca0ULL || rel >= 0x1345cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345cb0 size=80 callers=8 calls=2
   calls: sub_eadb00, sub_eaed70
*/
void sub_1345cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345cb0ULL || rel >= 0x1345d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345d00 size=16 callers=8 calls=0
*/
void sub_1345d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345d00ULL || rel >= 0x1345d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345d10 size=16 callers=14 calls=0
*/
void sub_1345d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345d10ULL || rel >= 0x1345d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345d20 size=224 callers=8 calls=1
   calls: sub_eaed70
*/
void sub_1345d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345d20ULL || rel >= 0x1345e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345e00 size=64 callers=5 calls=0
*/
void sub_1345e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345e00ULL || rel >= 0x1345e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345e40 size=48 callers=1 calls=0
*/
void sub_1345e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345e40ULL || rel >= 0x1345e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345e70 size=64 callers=6 calls=0
*/
void sub_1345e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345e70ULL || rel >= 0x1345eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345eb0 size=80 callers=4 calls=0
*/
void sub_1345eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345eb0ULL || rel >= 0x1345f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345f00 size=16 callers=1 calls=0
*/
void sub_1345f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345f00ULL || rel >= 0x1345f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345f10 size=16 callers=4 calls=0
*/
void sub_1345f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345f10ULL || rel >= 0x1345f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01345f20 size=240 callers=0 calls=0
*/
void sub_1345f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1345f20ULL || rel >= 0x1346010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346010 size=16 callers=0 calls=0
*/
void sub_1346010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346010ULL || rel >= 0x1346020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346020 size=16 callers=0 calls=0
*/
void sub_1346020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346020ULL || rel >= 0x1346030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346030 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1346030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346030ULL || rel >= 0x1346250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346250 size=16 callers=0 calls=0
*/
void sub_1346250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346250ULL || rel >= 0x1346260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346260 size=16 callers=0 calls=0
*/
void sub_1346260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346260ULL || rel >= 0x1346270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346270 size=16 callers=0 calls=0
*/
void sub_1346270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346270ULL || rel >= 0x1346280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346280 size=16 callers=0 calls=0
*/
void sub_1346280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346280ULL || rel >= 0x1346290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346290 size=16 callers=0 calls=0
*/
void sub_1346290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346290ULL || rel >= 0x13462a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013462a0 size=16 callers=0 calls=0
*/
void sub_13462a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13462a0ULL || rel >= 0x13462b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013462b0 size=528 callers=0 calls=0
*/
void sub_13462b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13462b0ULL || rel >= 0x13464c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013464c0 size=560 callers=0 calls=0
*/
void sub_13464c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13464c0ULL || rel >= 0x13466f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013466f0 size=16 callers=0 calls=0
*/
void sub_13466f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13466f0ULL || rel >= 0x1346700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346700 size=16 callers=0 calls=0
*/
void sub_1346700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346700ULL || rel >= 0x1346710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346710 size=16 callers=0 calls=0
*/
void sub_1346710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346710ULL || rel >= 0x1346720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346720 size=16 callers=0 calls=0
*/
void sub_1346720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346720ULL || rel >= 0x1346730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346730 size=32 callers=226 calls=0
*/
void sub_1346730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346730ULL || rel >= 0x1346750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346750 size=16 callers=0 calls=0
*/
void sub_1346750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346750ULL || rel >= 0x1346760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346760 size=16 callers=0 calls=0
*/
void sub_1346760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346760ULL || rel >= 0x1346770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346770 size=64 callers=0 calls=0
*/
void sub_1346770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346770ULL || rel >= 0x13467b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013467b0 size=80 callers=0 calls=0
*/
void sub_13467b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13467b0ULL || rel >= 0x1346800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346800 size=16 callers=0 calls=0
*/
void sub_1346800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346800ULL || rel >= 0x1346810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346810 size=48 callers=0 calls=0
*/
void sub_1346810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346810ULL || rel >= 0x1346840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346840 size=32 callers=0 calls=0
*/
void sub_1346840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346840ULL || rel >= 0x1346860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346860 size=496 callers=50 calls=0
*/
void sub_1346860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346860ULL || rel >= 0x1346a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346a50 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1346a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346a50ULL || rel >= 0x1346c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346c70 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1346c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346c70ULL || rel >= 0x1346e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01346e90 size=512 callers=9 calls=2
   calls: sub_1346730, sub_1347090
*/
void sub_1346e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1346e90ULL || rel >= 0x1347090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01347090 size=336 callers=1 calls=0
*/
void sub_1347090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1347090ULL || rel >= 0x13471e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013471e0 size=368 callers=52 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_13471e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13471e0ULL || rel >= 0x1347350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01347350 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1347350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1347350ULL || rel >= 0x13475a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013475a0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_13475a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13475a0ULL || rel >= 0x13477b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013477b0 size=768 callers=18 calls=0
*/
void sub_13477b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13477b0ULL || rel >= 0x1347ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01347ab0 size=16 callers=0 calls=0
*/
void sub_1347ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1347ab0ULL || rel >= 0x1347ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01347ac0 size=16 callers=0 calls=0
*/
void sub_1347ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1347ac0ULL || rel >= 0x1347ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01347ad0 size=16 callers=0 calls=0
*/
void sub_1347ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1347ad0ULL || rel >= 0x1347ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01347ae0 size=16 callers=0 calls=0
*/
void sub_1347ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1347ae0ULL || rel >= 0x1347af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01347af0 size=480 callers=104 calls=0
*/
void sub_1347af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1347af0ULL || rel >= 0x1347cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01347cd0 size=288 callers=73 calls=1
   calls: sub_1347df0
*/
void sub_1347cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1347cd0ULL || rel >= 0x1347df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01347df0 size=480 callers=1 calls=0
*/
void sub_1347df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1347df0ULL || rel >= 0x1347fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01347fd0 size=2848 callers=75 calls=3
   calls: sub_1347fd0, sub_1348af0, sub_1348d60
*/
void sub_1347fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1347fd0ULL || rel >= 0x1348af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01348af0 size=624 callers=4 calls=0
*/
void sub_1348af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1348af0ULL || rel >= 0x1348d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01348d60 size=1280 callers=2 calls=1
   calls: sub_1348af0
*/
void sub_1348d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1348d60ULL || rel >= 0x1349260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01349260 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1349260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1349260ULL || rel >= 0x13494b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013494b0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_13494b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13494b0ULL || rel >= 0x13496c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013496c0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_13496c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13496c0ULL || rel >= 0x1349910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01349910 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1349910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1349910ULL || rel >= 0x1349b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01349b20 size=336 callers=1 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_1349b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1349b20ULL || rel >= 0x1349c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01349c70 size=560 callers=1 calls=2
   calls: sub_1346730, sub_134a0a0
*/
void sub_1349c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1349c70ULL || rel >= 0x1349ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01349ea0 size=512 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_134a0a0
*/
void sub_1349ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1349ea0ULL || rel >= 0x134a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134a0a0 size=368 callers=2 calls=0
*/
void sub_134a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134a0a0ULL || rel >= 0x134a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134a210 size=208 callers=0 calls=0
*/
void sub_134a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134a210ULL || rel >= 0x134a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134a2e0 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_134a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134a2e0ULL || rel >= 0x134a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134a330 size=368 callers=0 calls=4
   calls: sub_134a4a0, sub_137e480, sub_76f550, sub_76f7f0
*/
void sub_134a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134a330ULL || rel >= 0x134a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134a4a0 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_134b260, sub_134b4b0
*/
void sub_134a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134a4a0ULL || rel >= 0x134a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134a5e0 size=144 callers=0 calls=2
   calls: sub_134b6c0, sub_137e480
*/
void sub_134a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134a5e0ULL || rel >= 0x134a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134a670 size=96 callers=0 calls=2
   calls: sub_134a4a0, sub_137e480
*/
void sub_134a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134a670ULL || rel >= 0x134a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134a6d0 size=48 callers=6 calls=0
*/
void sub_134a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134a6d0ULL || rel >= 0x134a700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134a700 size=304 callers=17 calls=1
   calls: sub_76f550
*/
void sub_134a700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134a700ULL || rel >= 0x134a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134a830 size=192 callers=4 calls=1
   calls: sub_76f7f0
*/
void sub_134a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134a830ULL || rel >= 0x134a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134a8f0 size=112 callers=1 calls=0
*/
void sub_134a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134a8f0ULL || rel >= 0x134a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134a960 size=112 callers=2 calls=2
   calls: sub_134a700, sub_762930
*/
void sub_134a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134a960ULL || rel >= 0x134a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134a9d0 size=112 callers=2 calls=2
   calls: sub_134a700, sub_762940
*/
void sub_134a9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134a9d0ULL || rel >= 0x134aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134aa40 size=48 callers=2 calls=0
*/
void sub_134aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134aa40ULL || rel >= 0x134aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134aa70 size=688 callers=4 calls=6
   calls: sub_134a700, sub_1367890, sub_765f10, sub_767c40, sub_76f7f0, sub_ead110
*/
void sub_134aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134aa70ULL || rel >= 0x134ad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134ad20 size=224 callers=2 calls=2
   calls: sub_134a700, sub_767c40
*/
void sub_134ad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134ad20ULL || rel >= 0x134ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134ae00 size=688 callers=1 calls=8
   calls: sub_134a700, sub_1367890, sub_136b520, sub_136b690, sub_137baf0, sub_67b990, sub_7871c0, sub_ead0f0
*/
void sub_134ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134ae00ULL || rel >= 0x134b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134b0b0 size=32 callers=2 calls=0
*/
void sub_134b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134b0b0ULL || rel >= 0x134b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134b0d0 size=80 callers=0 calls=0
*/
void sub_134b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134b0d0ULL || rel >= 0x134b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134b120 size=80 callers=0 calls=0
*/
void sub_134b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134b120ULL || rel >= 0x134b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134b170 size=80 callers=0 calls=0
*/
void sub_134b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134b170ULL || rel >= 0x134b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134b1c0 size=80 callers=0 calls=0
*/
void sub_134b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134b1c0ULL || rel >= 0x134b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134b210 size=80 callers=0 calls=0
*/
void sub_134b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134b210ULL || rel >= 0x134b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134b260 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_134b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134b260ULL || rel >= 0x134b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134b4b0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_134b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134b4b0ULL || rel >= 0x134b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134b6c0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_134b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134b6c0ULL || rel >= 0x134b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134b8e0 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_134b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134b8e0ULL || rel >= 0x134b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134b930 size=32 callers=0 calls=0
*/
void sub_134b930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134b930ULL || rel >= 0x134b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134b950 size=80 callers=0 calls=0
*/
void sub_134b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134b950ULL || rel >= 0x134b9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134b9a0 size=80 callers=0 calls=0
*/
void sub_134b9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134b9a0ULL || rel >= 0x134b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134b9f0 size=80 callers=0 calls=0
*/
void sub_134b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134b9f0ULL || rel >= 0x134ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134ba40 size=80 callers=0 calls=0
*/
void sub_134ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134ba40ULL || rel >= 0x134ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134ba90 size=80 callers=0 calls=0
*/
void sub_134ba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134ba90ULL || rel >= 0x134bae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134bae0 size=80 callers=0 calls=0
*/
void sub_134bae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134bae0ULL || rel >= 0x134bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134bb30 size=32 callers=0 calls=0
*/
void sub_134bb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134bb30ULL || rel >= 0x134bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134bb50 size=528 callers=0 calls=5
   calls: sub_1345aa0, sub_134c180, sub_134c2b0, sub_134c3e0, sub_137e480
*/
void sub_134bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134bb50ULL || rel >= 0x134bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134bd60 size=1056 callers=0 calls=5
   calls: sub_1346e90, sub_134ccd0, sub_134d020, sub_134d370, sub_137e480
*/
void sub_134bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134bd60ULL || rel >= 0x134c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c180 size=304 callers=2 calls=3
   calls: sub_134d6c0, sub_134d810, sub_134da40
*/
void sub_134c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c180ULL || rel >= 0x134c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c2b0 size=304 callers=10 calls=3
   calls: sub_134ddb0, sub_134df00, sub_134e130
*/
void sub_134c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c2b0ULL || rel >= 0x134c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c3e0 size=304 callers=13 calls=3
   calls: sub_134e4a0, sub_134e5f0, sub_134e820
*/
void sub_134c3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c3e0ULL || rel >= 0x134c510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c510 size=32 callers=3 calls=0
*/
void sub_134c510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c510ULL || rel >= 0x134c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c530 size=32 callers=1 calls=0
*/
void sub_134c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c530ULL || rel >= 0x134c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c550 size=192 callers=11 calls=0
*/
void sub_134c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c550ULL || rel >= 0x134c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c610 size=32 callers=2 calls=0
*/
void sub_134c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c610ULL || rel >= 0x134c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c630 size=176 callers=2 calls=0
*/
void sub_134c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c630ULL || rel >= 0x134c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c6e0 size=192 callers=2 calls=0
*/
void sub_134c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c6e0ULL || rel >= 0x134c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c7a0 size=224 callers=2 calls=0
*/
void sub_134c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c7a0ULL || rel >= 0x134c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c880 size=32 callers=4 calls=0
*/
void sub_134c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c880ULL || rel >= 0x134c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c8a0 size=32 callers=2 calls=0
*/
void sub_134c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c8a0ULL || rel >= 0x134c8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c8c0 size=32 callers=2 calls=0
*/
void sub_134c8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c8c0ULL || rel >= 0x134c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c8e0 size=144 callers=2 calls=0
*/
void sub_134c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c8e0ULL || rel >= 0x134c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134c970 size=352 callers=2 calls=0
*/
void sub_134c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134c970ULL || rel >= 0x134cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134cad0 size=48 callers=3 calls=0
*/
void sub_134cad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134cad0ULL || rel >= 0x134cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134cb00 size=32 callers=3 calls=0
*/
void sub_134cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134cb00ULL || rel >= 0x134cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

