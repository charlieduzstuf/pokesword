/* main functions 008fd740..009231e0 (71 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 008fd740 size=336 callers=12 calls=8
   calls: sub_7ee6b0, sub_7fc2e0, sub_7fc450, sub_8ebf50, sub_8ebfd0, sub_8f1dd0, sub_8f3e10, sub_e83930
*/
void sub_8fd740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fd740ULL || rel >= 0x8fd890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fd890 size=448 callers=7 calls=7
   calls: sub_7ee6b0, sub_7eef50, sub_7ef2b0, sub_8ebf50, sub_8ebfd0, sub_8f3e10, sub_e83930
*/
void sub_8fd890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fd890ULL || rel >= 0x8fda50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fda50 size=160 callers=0 calls=0
*/
void sub_8fda50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fda50ULL || rel >= 0x8fdaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fdaf0 size=160 callers=0 calls=0
*/
void sub_8fdaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fdaf0ULL || rel >= 0x8fdb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fdb90 size=240 callers=0 calls=0
*/
void sub_8fdb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fdb90ULL || rel >= 0x8fdc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fdc80 size=16 callers=0 calls=0
*/
void sub_8fdc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fdc80ULL || rel >= 0x8fdc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fdc90 size=5200 callers=4 calls=3
   calls: P_sick_00, pane__s_2, sub_8efdd0
   ref: switch
   ref: pattern_DM_in
   ref: pane_%s
   ref: anime_%s
   ref: L_seibetsu
   ref: A_lv_00
   ref: T_HPNum_00
   ref: T_pokeName_00
*/
void pattern_DM_base(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fdc90ULL || rel >= 0x8ff0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ff0e0 size=64 callers=4 calls=2
   calls: sub_17919c0, sub_8f1de0
*/
void sub_8ff0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ff0e0ULL || rel >= 0x8ff120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ff120 size=80 callers=0 calls=0
*/
void sub_8ff120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ff120ULL || rel >= 0x8ff170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ff170 size=80 callers=0 calls=1
   calls: sub_8f2ea0
*/
void sub_8ff170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ff170ULL || rel >= 0x8ff1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ff1c0 size=240 callers=0 calls=0
*/
void sub_8ff1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ff1c0ULL || rel >= 0x8ff2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ff2b0 size=336 callers=1 calls=3
   calls: sub_5cfad0, sub_e7ea90, sub_e7f7d0
*/
void sub_8ff2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ff2b0ULL || rel >= 0x8ff400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ff400 size=1216 callers=1 calls=1
   calls: sub_14aad40
   ref: pane_%s
   ref: anime_%s
   ref: T_fb_01
   ref: pane_%s_%s
   ref: anime_%s_%s
   ref: T_turn_00
   ref: T_turn_01
   ref: T_fb_00
*/
void T_turn_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ff400ULL || rel >= 0x8ff8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ff8c0 size=224 callers=1 calls=4
   calls: sub_8ed370, sub_8ed490, sub_e83850, sub_e83a40
*/
void sub_8ff8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ff8c0ULL || rel >= 0x8ff9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ff9a0 size=416 callers=1 calls=4
   calls: sub_8f19b0, sub_8ffb40, sub_e83430, sub_e83540
*/
void sub_8ff9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ff9a0ULL || rel >= 0x8ffb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ffb40 size=320 callers=2 calls=6
   calls: sub_1315b90, sub_14ac370, sub_67bdb0, sub_67bfa0, sub_67d450, sub_e83b20
*/
void sub_8ffb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ffb40ULL || rel >= 0x8ffc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ffc80 size=240 callers=0 calls=0
*/
void sub_8ffc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ffc80ULL || rel >= 0x8ffd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ffd70 size=224 callers=0 calls=0
*/
void sub_8ffd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ffd70ULL || rel >= 0x8ffe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ffe50 size=32 callers=0 calls=1
   calls: sub_8ff9a0
*/
void sub_8ffe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ffe50ULL || rel >= 0x8ffe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ffe70 size=16 callers=0 calls=0
*/
void sub_8ffe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ffe70ULL || rel >= 0x8ffe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ffe80 size=16 callers=0 calls=0
*/
void sub_8ffe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ffe80ULL || rel >= 0x8ffe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ffe90 size=16 callers=0 calls=0
*/
void sub_8ffe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ffe90ULL || rel >= 0x8ffea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ffea0 size=240 callers=0 calls=0
*/
void sub_8ffea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ffea0ULL || rel >= 0x8fff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fff90 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/battle_tokusei_00_lyt.bin
*/
void battle_tokusei_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fff90ULL || rel >= 0x9000a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009000a0 size=560 callers=0 calls=1
   calls: sub_9010c0
*/
void sub_9000a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9000a0ULL || rel >= 0x9002d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009002d0 size=208 callers=0 calls=2
   calls: btl_app, sub_e806b0
*/
void sub_9002d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9002d0ULL || rel >= 0x9003a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009003a0 size=672 callers=3 calls=7
   calls: sub_1313580, sub_14ac370, sub_67d450, sub_7eef50, sub_7ef330, sub_e7ea90, tokusei
   ref: common/btl_app.dat
*/
void btl_app(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9003a0ULL || rel >= 0x900640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900640 size=64 callers=0 calls=0
*/
void sub_900640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900640ULL || rel >= 0x900680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900680 size=256 callers=0 calls=2
   calls: sub_e83430, sub_e83540
*/
void sub_900680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900680ULL || rel >= 0x900780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900780 size=256 callers=1 calls=1
   calls: sub_14ab2b0
*/
void sub_900780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900780ULL || rel >= 0x900880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900880 size=224 callers=0 calls=0
*/
void sub_900880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900880ULL || rel >= 0x900960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900960 size=224 callers=0 calls=0
*/
void sub_900960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900960ULL || rel >= 0x900a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900a40 size=16 callers=0 calls=0
*/
void sub_900a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900a40ULL || rel >= 0x900a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900a50 size=224 callers=0 calls=0
*/
void sub_900a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900a50ULL || rel >= 0x900b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900b30 size=224 callers=0 calls=0
*/
void sub_900b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900b30ULL || rel >= 0x900c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900c10 size=16 callers=0 calls=0
*/
void sub_900c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900c10ULL || rel >= 0x900c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900c20 size=16 callers=0 calls=0
*/
void sub_900c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900c20ULL || rel >= 0x900c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900c30 size=224 callers=0 calls=0
*/
void sub_900c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900c30ULL || rel >= 0x900d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900d10 size=224 callers=0 calls=0
*/
void sub_900d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900d10ULL || rel >= 0x900df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900df0 size=112 callers=0 calls=0
*/
void sub_900df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900df0ULL || rel >= 0x900e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900e60 size=96 callers=0 calls=0
*/
void sub_900e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900e60ULL || rel >= 0x900ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900ec0 size=304 callers=0 calls=0
*/
void sub_900ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900ec0ULL || rel >= 0x900ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00900ff0 size=32 callers=0 calls=0
*/
void sub_900ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900ff0ULL || rel >= 0x901010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901010 size=16 callers=0 calls=0
*/
void sub_901010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901010ULL || rel >= 0x901020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901020 size=16 callers=0 calls=0
*/
void sub_901020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901020ULL || rel >= 0x901030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901030 size=16 callers=0 calls=0
*/
void sub_901030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901030ULL || rel >= 0x901040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901040 size=32 callers=0 calls=0
*/
void sub_901040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901040ULL || rel >= 0x901060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901060 size=16 callers=0 calls=0
*/
void sub_901060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901060ULL || rel >= 0x901070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901070 size=16 callers=0 calls=0
*/
void sub_901070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901070ULL || rel >= 0x901080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901080 size=16 callers=0 calls=0
*/
void sub_901080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901080ULL || rel >= 0x901090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901090 size=32 callers=0 calls=0
*/
void sub_901090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901090ULL || rel >= 0x9010b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009010b0 size=16 callers=0 calls=0
*/
void sub_9010b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9010b0ULL || rel >= 0x9010c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009010c0 size=16 callers=1 calls=0
*/
void sub_9010c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9010c0ULL || rel >= 0x9010d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009010d0 size=16 callers=0 calls=0
*/
void sub_9010d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9010d0ULL || rel >= 0x9010e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009010e0 size=32 callers=0 calls=0
*/
void sub_9010e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9010e0ULL || rel >= 0x901100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901100 size=16 callers=0 calls=0
*/
void sub_901100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901100ULL || rel >= 0x901110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901110 size=16 callers=0 calls=0
*/
void sub_901110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901110ULL || rel >= 0x901120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901120 size=16 callers=0 calls=0
*/
void sub_901120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901120ULL || rel >= 0x901130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901130 size=48 callers=0 calls=1
   calls: btl_app
*/
void sub_901130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901130ULL || rel >= 0x901160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901160 size=16 callers=0 calls=0
*/
void sub_901160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901160ULL || rel >= 0x901170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901170 size=32 callers=0 calls=0
*/
void sub_901170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901170ULL || rel >= 0x901190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901190 size=32 callers=0 calls=0
*/
void sub_901190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901190ULL || rel >= 0x9011b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009011b0 size=240 callers=0 calls=0
*/
void sub_9011b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9011b0ULL || rel >= 0x9012a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009012a0 size=416 callers=1 calls=0
   ref: Set_State_InNetBattle
   ref: Play_UI_common_tab
   ref: Play_UI_common_menu_close
   ref: Set_State_NetBattleOff
   ref: Play_UI_common_slide
   ref: Play_UI_battlemenu_dymax_cancel
   ref: Play_UI_battlemenu_dymax_decide
   ref: Play_UI_common_menu_open
*/
void Set_State_NetBattleOff(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9012a0ULL || rel >= 0x901440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901440 size=16 callers=4 calls=0
*/
void sub_901440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901440ULL || rel >= 0x901450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901450 size=80 callers=9 calls=2
   calls: Set_State_NetBattleOff, sub_1502120
*/
void sub_901450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901450ULL || rel >= 0x9014a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009014a0 size=240 callers=0 calls=0
*/
void sub_9014a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9014a0ULL || rel >= 0x901590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00901590 size=288 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/battle_top_00_lyt.bin
*/
void battle_top_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x901590ULL || rel >= 0x9016b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009016b0 size=17168 callers=0 calls=7
   calls: P_sick_00, color_ball_05, pane__s_2, pattern_ouen_out, sub_142a1c0, sub_907b50, sub_e7eb10
   ref: L_near2_raid_L_pokeicon_00
   ref: L_near2_raid
   ref: L_ball_enemy_00
   ref: L_near3_raid_L_pokeicon_00
   ref: L_near3_raid
   ref: L_ball_player_01
   ref: L_near4_raid
   ref: L_near1_raid_L_pokeicon_00
*/
void L_near4_raid_L_pokeicon_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9016b0ULL || rel >= 0x9059c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009059c0 size=48 callers=0 calls=1
   calls: sub_142aa00
*/
void sub_9059c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9059c0ULL || rel >= 0x9059f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009059f0 size=256 callers=3 calls=1
   calls: sub_905af0
*/
void sub_9059f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9059f0ULL || rel >= 0x905af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00905af0 size=384 callers=11 calls=1
   calls: sub_7ef2b0
*/
void sub_905af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x905af0ULL || rel >= 0x905c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00905c70 size=32 callers=0 calls=0
*/
void sub_905c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x905c70ULL || rel >= 0x905c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00905c90 size=48 callers=0 calls=0
*/
void sub_905c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x905c90ULL || rel >= 0x905cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00905cc0 size=176 callers=0 calls=1
   calls: sub_142a480
*/
void sub_905cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x905cc0ULL || rel >= 0x905d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00905d70 size=1072 callers=9 calls=2
   calls: sub_8ebd00, sub_9061a0
*/
void sub_905d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x905d70ULL || rel >= 0x9061a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009061a0 size=544 callers=10 calls=5
   calls: sub_8ebd00, sub_8f1de0, sub_8f2890, sub_8f28a0, sub_8fc8a0
*/
void sub_9061a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9061a0ULL || rel >= 0x9063c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009063c0 size=192 callers=4 calls=1
   calls: sub_8fc8a0
*/
void sub_9063c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9063c0ULL || rel >= 0x906480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00906480 size=192 callers=1 calls=1
   calls: sub_8f2900
*/
void sub_906480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x906480ULL || rel >= 0x906540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00906540 size=16 callers=1 calls=0
*/
void sub_906540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x906540ULL || rel >= 0x906550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00906550 size=640 callers=0 calls=0
*/
void sub_906550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x906550ULL || rel >= 0x9067d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009067d0 size=16 callers=0 calls=0
*/
void sub_9067d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9067d0ULL || rel >= 0x9067e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009067e0 size=16 callers=0 calls=0
*/
void sub_9067e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9067e0ULL || rel >= 0x9067f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009067f0 size=16 callers=0 calls=0
*/
void sub_9067f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9067f0ULL || rel >= 0x906800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00906800 size=16 callers=0 calls=0
*/
void sub_906800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x906800ULL || rel >= 0x906810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00906810 size=16 callers=0 calls=0
*/
void sub_906810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x906810ULL || rel >= 0x906820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00906820 size=16 callers=0 calls=0
*/
void sub_906820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x906820ULL || rel >= 0x906830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00906830 size=16 callers=0 calls=0
*/
void sub_906830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x906830ULL || rel >= 0x906840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00906840 size=16 callers=0 calls=0
*/
void sub_906840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x906840ULL || rel >= 0x906850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00906850 size=304 callers=0 calls=0
*/
void sub_906850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x906850ULL || rel >= 0x906980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00906980 size=16 callers=0 calls=0
*/
void sub_906980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x906980ULL || rel >= 0x906990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00906990 size=240 callers=0 calls=0
*/
void sub_906990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x906990ULL || rel >= 0x906a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00906a80 size=2848 callers=4 calls=2
   calls: pane__s_2, sub_14aad40
   ref: P_ball_04
   ref: pane_%s
   ref: anime_%s
   ref: P_ball_01
   ref: pane_%s_%s
   ref: color_ball_03
   ref: color_ball_04
   ref: color_ball_02
*/
void color_ball_05(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x906a80ULL || rel >= 0x9075a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009075a0 size=1120 callers=0 calls=5
   calls: sub_7ef2b0, sub_7ef6a0, sub_7fc450, sub_e83930, sub_e83c60
*/
void sub_9075a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9075a0ULL || rel >= 0x907a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00907a00 size=80 callers=0 calls=1
   calls: sub_e83430
*/
void sub_907a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x907a00ULL || rel >= 0x907a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00907a50 size=16 callers=0 calls=0
*/
void sub_907a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x907a50ULL || rel >= 0x907a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00907a60 size=240 callers=0 calls=0
*/
void sub_907a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x907a60ULL || rel >= 0x907b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00907b50 size=96 callers=3 calls=2
   calls: sub_e83430, sub_e83850
*/
void sub_907b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x907b50ULL || rel >= 0x907bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00907bb0 size=192 callers=0 calls=2
   calls: sub_e83430, sub_e83930
*/
void sub_907bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x907bb0ULL || rel >= 0x907c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00907c70 size=240 callers=0 calls=0
*/
void sub_907c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x907c70ULL || rel >= 0x907d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00907d60 size=240 callers=2 calls=1
   calls: sub_783bd0
*/
void sub_907d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x907d60ULL || rel >= 0x907e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00907e50 size=784 callers=2 calls=1
   calls: sub_67b990
*/
void sub_907e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x907e50ULL || rel >= 0x908160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00908160 size=368 callers=3 calls=3
   calls: sub_1366a40, sub_786b40, sub_90e2e0
*/
void sub_908160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x908160ULL || rel >= 0x9082d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009082d0 size=48 callers=1 calls=0
*/
void sub_9082d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9082d0ULL || rel >= 0x908300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00908300 size=80 callers=1 calls=0
*/
void sub_908300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x908300ULL || rel >= 0x908350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00908350 size=2688 callers=2 calls=16
   calls: sub_765dd0, sub_765de0, sub_76f440, sub_7847d0, sub_7ee6b0, sub_7ee6c0, sub_7ef630, sub_7fc2e0, sub_7fc450, sub_8a8010, sub_8a8140, sub_8ebd00
   ... +4 more
*/
void sub_908350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x908350ULL || rel >= 0x908dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00908dd0 size=688 callers=5 calls=18
   calls: sub_762d90, sub_7655b0, sub_765830, sub_765ac0, sub_765b00, sub_765d90, sub_765db0, sub_7664a0, sub_76f440, sub_76f650, sub_7eef50, sub_7ef320
   ... +6 more
*/
void sub_908dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x908dd0ULL || rel >= 0x909080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00909080 size=240 callers=1 calls=1
   calls: sub_783bd0
*/
void sub_909080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x909080ULL || rel >= 0x909170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00909170 size=688 callers=1 calls=23
   calls: sub_762d90, sub_7655b0, sub_765830, sub_765ac0, sub_765b00, sub_765d90, sub_765db0, sub_7664a0, sub_76f650, sub_7ee6b0, sub_7eef50, sub_7ef320
   ... +11 more
*/
void sub_909170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x909170ULL || rel >= 0x909420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00909420 size=224 callers=1 calls=1
   calls: sub_1047180
*/
void sub_909420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x909420ULL || rel >= 0x909500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00909500 size=3600 callers=0 calls=36
   calls: sub_14de000, sub_5cfad0, sub_78f150, sub_78f240, sub_794e80, sub_7950c0, sub_79ab20, sub_79b250, sub_901450, sub_907d60, sub_907e50, sub_90a310
   ... +24 more
   ref: font_fs_42_00.bffnt
   ref: FogView
   ref: InfoView
   ref: RaidResultView
   ref: font_fs_32_00.bffnt
   ref: SpectatorViewName
   ref: View_SelectAction
   ref: TargetSelectView
*/
void ActionSelectSubView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x909500ULL || rel >= 0x90a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090a310 size=400 callers=1 calls=3
   calls: sub_90e4c0, sub_967370, sub_e7c160
*/
void sub_90a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90a310ULL || rel >= 0x90a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090a4a0 size=560 callers=1 calls=0
*/
void sub_90a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90a4a0ULL || rel >= 0x90a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090a6d0 size=1168 callers=0 calls=11
   calls: sub_5cfaf0, sub_8eb4f0, sub_90ab60, sub_9138b0, sub_9139a0, sub_917090, sub_919190, sub_91c940, sub_967370, sub_e7f440, sub_e806b0
   ref: RemainTimeView
*/
void RemainTimeView_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90a6d0ULL || rel >= 0x90ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090ab60 size=576 callers=1 calls=7
   calls: sub_1047180, sub_1052ca0, sub_1061830, sub_1061a40, sub_967370, sub_eaa040, sub_ec0870
*/
void sub_90ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90ab60ULL || rel >= 0x90ada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090ada0 size=944 callers=0 calls=7
   calls: sub_8fac20, sub_8fac50, sub_9063c0, sub_916d90, sub_916fc0, sub_967370, sub_e806b0
*/
void sub_90ada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90ada0ULL || rel >= 0x90b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090b150 size=1680 callers=0 calls=4
   calls: sub_913a90, sub_913bd0, sub_967370, sub_e7c160
*/
void sub_90b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90b150ULL || rel >= 0x90b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090b7e0 size=1696 callers=0 calls=15
   calls: sub_8f4380, sub_913d10, sub_913e60, sub_913fa0, sub_9140f0, sub_9142e0, sub_914420, sub_914560, sub_9146b0, sub_9147f0, sub_914930, sub_914a70
   ... +3 more
*/
void sub_90b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90b7e0ULL || rel >= 0x90be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090be80 size=416 callers=0 calls=5
   calls: sub_8f43e0, sub_913bd0, sub_914cf0, sub_914de0, sub_e7c160
*/
void sub_90be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90be80ULL || rel >= 0x90c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090c020 size=336 callers=0 calls=4
   calls: sub_913bd0, sub_913d10, sub_914f30, sub_e7c160
*/
void sub_90c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90c020ULL || rel >= 0x90c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090c170 size=656 callers=0 calls=8
   calls: sub_8f4380, sub_8f43e0, sub_913bd0, sub_914560, sub_9146b0, sub_915020, sub_967370, sub_e7c160
*/
void sub_90c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90c170ULL || rel >= 0x90c400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090c400 size=432 callers=0 calls=5
   calls: sub_913bd0, sub_914de0, sub_915110, sub_915200, sub_e7c160
*/
void sub_90c400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90c400ULL || rel >= 0x90c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090c5b0 size=528 callers=0 calls=6
   calls: sub_8f4380, sub_913bd0, sub_913d10, sub_915350, sub_915440, sub_e7c160
*/
void sub_90c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90c5b0ULL || rel >= 0x90c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090c7c0 size=656 callers=0 calls=8
   calls: sub_8a8160, sub_8f4380, sub_8f43e0, sub_913bd0, sub_914560, sub_915590, sub_967370, sub_e7c160
*/
void sub_90c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90c7c0ULL || rel >= 0x90ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090ca50 size=784 callers=0 calls=8
   calls: sub_8f4380, sub_8f43e0, sub_913bd0, sub_913fa0, sub_915680, sub_915770, sub_967370, sub_e7c160
*/
void sub_90ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90ca50ULL || rel >= 0x90cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090cd60 size=800 callers=0 calls=9
   calls: sub_8a8080, sub_8a8100, sub_8f4380, sub_8f43e0, sub_913bd0, sub_915770, sub_9158c0, sub_967370, sub_e7c160
*/
void sub_90cd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90cd60ULL || rel >= 0x90d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090d080 size=624 callers=0 calls=5
   calls: sub_79c240, sub_913bd0, sub_9159b0, sub_967370, sub_e7c160
*/
void sub_90d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90d080ULL || rel >= 0x90d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090d2f0 size=608 callers=0 calls=5
   calls: sub_79c240, sub_913bd0, sub_9147f0, sub_967370, sub_e7c160
*/
void sub_90d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90d2f0ULL || rel >= 0x90d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090d550 size=752 callers=0 calls=8
   calls: sub_79c240, sub_913bd0, sub_915af0, sub_91ced0, sub_967370, sub_e7c160, sub_ec0d20, sub_ec1c40
   ref: SysMessageView
*/
void SysMessageView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90d550ULL || rel >= 0x90d840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090d840 size=368 callers=0 calls=3
   calls: sub_913bd0, sub_967370, sub_e7c160
*/
void sub_90d840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90d840ULL || rel >= 0x90d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090d9b0 size=528 callers=0 calls=4
   calls: sub_79c240, sub_913bd0, sub_967370, sub_e7c160
*/
void sub_90d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90d9b0ULL || rel >= 0x90dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090dbc0 size=368 callers=0 calls=3
   calls: sub_913bd0, sub_967370, sub_e7c160
*/
void sub_90dbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90dbc0ULL || rel >= 0x90dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090dd30 size=224 callers=0 calls=3
   calls: sub_914930, sub_91cee0, sub_e7c160
*/
void sub_90dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90dd30ULL || rel >= 0x90de10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090de10 size=112 callers=0 calls=1
   calls: sub_901450
*/
void sub_90de10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90de10ULL || rel >= 0x90de80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090de80 size=16 callers=1 calls=0
*/
void sub_90de80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90de80ULL || rel >= 0x90de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090de90 size=464 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_90de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90de90ULL || rel >= 0x90e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090e060 size=16 callers=0 calls=0
*/
void sub_90e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e060ULL || rel >= 0x90e070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090e070 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_90e070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e070ULL || rel >= 0x90e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090e120 size=16 callers=0 calls=0
*/
void sub_90e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e120ULL || rel >= 0x90e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090e130 size=16 callers=0 calls=0
*/
void sub_90e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e130ULL || rel >= 0x90e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090e140 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_90e140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e140ULL || rel >= 0x90e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090e1f0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_90e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e1f0ULL || rel >= 0x90e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090e2a0 size=16 callers=0 calls=0
*/
void sub_90e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e2a0ULL || rel >= 0x90e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090e2b0 size=16 callers=0 calls=0
*/
void sub_90e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e2b0ULL || rel >= 0x90e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090e2c0 size=16 callers=0 calls=0
*/
void sub_90e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e2c0ULL || rel >= 0x90e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090e2d0 size=16 callers=0 calls=0
*/
void sub_90e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e2d0ULL || rel >= 0x90e2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090e2e0 size=480 callers=1 calls=0
*/
void sub_90e2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e2e0ULL || rel >= 0x90e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090e4c0 size=1216 callers=1 calls=7
   calls: sub_10466c0, sub_7c2280, sub_8ecc80, sub_90e980, sub_90f090, sub_90f360, sub_e7c210
*/
void sub_90e4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e4c0ULL || rel >= 0x90e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090e980 size=1040 callers=1 calls=0
*/
void sub_90e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e980ULL || rel >= 0x90ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090ed90 size=640 callers=0 calls=0
*/
void sub_90ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90ed90ULL || rel >= 0x90f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f010 size=16 callers=0 calls=0
*/
void sub_90f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f010ULL || rel >= 0x90f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f020 size=16 callers=0 calls=0
*/
void sub_90f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f020ULL || rel >= 0x90f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f030 size=16 callers=0 calls=0
*/
void sub_90f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f030ULL || rel >= 0x90f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f040 size=16 callers=0 calls=0
*/
void sub_90f040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f040ULL || rel >= 0x90f050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f050 size=16 callers=0 calls=0
*/
void sub_90f050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f050ULL || rel >= 0x90f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f060 size=16 callers=0 calls=0
*/
void sub_90f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f060ULL || rel >= 0x90f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f070 size=16 callers=0 calls=0
*/
void sub_90f070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f070ULL || rel >= 0x90f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f080 size=16 callers=0 calls=0
*/
void sub_90f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f080ULL || rel >= 0x90f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f090 size=240 callers=1 calls=1
   calls: sub_c39c40
*/
void sub_90f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f090ULL || rel >= 0x90f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f180 size=96 callers=0 calls=0
*/
void sub_90f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f180ULL || rel >= 0x90f1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f1e0 size=96 callers=0 calls=0
*/
void sub_90f1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f1e0ULL || rel >= 0x90f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f240 size=16 callers=0 calls=0
*/
void sub_90f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f240ULL || rel >= 0x90f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f250 size=16 callers=0 calls=0
*/
void sub_90f250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f250ULL || rel >= 0x90f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f260 size=16 callers=0 calls=0
*/
void sub_90f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f260ULL || rel >= 0x90f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f270 size=16 callers=0 calls=0
*/
void sub_90f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f270ULL || rel >= 0x90f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f280 size=16 callers=0 calls=0
*/
void sub_90f280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f280ULL || rel >= 0x90f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f290 size=16 callers=0 calls=0
*/
void sub_90f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f290ULL || rel >= 0x90f2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f2a0 size=16 callers=0 calls=0
*/
void sub_90f2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f2a0ULL || rel >= 0x90f2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f2b0 size=80 callers=0 calls=0
*/
void sub_90f2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f2b0ULL || rel >= 0x90f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f300 size=80 callers=0 calls=0
*/
void sub_90f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f300ULL || rel >= 0x90f350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f350 size=16 callers=0 calls=0
*/
void sub_90f350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f350ULL || rel >= 0x90f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f360 size=400 callers=1 calls=0
*/
void sub_90f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f360ULL || rel >= 0x90f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f4f0 size=48 callers=0 calls=0
*/
void sub_90f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f4f0ULL || rel >= 0x90f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f520 size=48 callers=0 calls=0
*/
void sub_90f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f520ULL || rel >= 0x90f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f550 size=64 callers=0 calls=0
*/
void sub_90f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f550ULL || rel >= 0x90f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f590 size=64 callers=0 calls=0
*/
void sub_90f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f590ULL || rel >= 0x90f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f5d0 size=288 callers=1 calls=2
   calls: sub_90f6f0, sub_e809c0
*/
void sub_90f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f5d0ULL || rel >= 0x90f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f6f0 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_90f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f6f0ULL || rel >= 0x90f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090f930 size=288 callers=1 calls=2
   calls: sub_90fa50, sub_e809c0
*/
void sub_90f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f930ULL || rel >= 0x90fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090fa50 size=640 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_90fa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90fa50ULL || rel >= 0x90fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090fcd0 size=288 callers=1 calls=2
   calls: sub_90fdf0, sub_e809c0
*/
void sub_90fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90fcd0ULL || rel >= 0x90fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0090fdf0 size=672 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_90fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90fdf0ULL || rel >= 0x910090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00910090 size=288 callers=1 calls=2
   calls: sub_9101b0, sub_e809c0
*/
void sub_910090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x910090ULL || rel >= 0x9101b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009101b0 size=768 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_9101b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9101b0ULL || rel >= 0x9104b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009104b0 size=288 callers=1 calls=2
   calls: sub_9105d0, sub_e809c0
*/
void sub_9104b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9104b0ULL || rel >= 0x9105d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009105d0 size=608 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_9105d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9105d0ULL || rel >= 0x910830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00910830 size=288 callers=1 calls=2
   calls: sub_910950, sub_e809c0
*/
void sub_910830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x910830ULL || rel >= 0x910950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00910950 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_910950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x910950ULL || rel >= 0x910ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00910ba0 size=288 callers=1 calls=2
   calls: sub_910cc0, sub_e809c0
*/
void sub_910ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x910ba0ULL || rel >= 0x910cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00910cc0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_910cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x910cc0ULL || rel >= 0x910ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00910ef0 size=288 callers=1 calls=2
   calls: sub_911010, sub_e809c0
*/
void sub_910ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x910ef0ULL || rel >= 0x911010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00911010 size=384 callers=1 calls=3
   calls: sub_790490, sub_911190, sub_e7fe20
*/
void sub_911010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x911010ULL || rel >= 0x911190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00911190 size=448 callers=1 calls=1
   calls: anonymous_2
*/
void sub_911190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x911190ULL || rel >= 0x911350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00911350 size=80 callers=0 calls=0
*/
void sub_911350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x911350ULL || rel >= 0x9113a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009113a0 size=80 callers=0 calls=0
*/
void sub_9113a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9113a0ULL || rel >= 0x9113f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009113f0 size=288 callers=1 calls=2
   calls: sub_911510, sub_e809c0
*/
void sub_9113f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9113f0ULL || rel >= 0x911510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00911510 size=384 callers=1 calls=3
   calls: sub_790490, sub_911690, sub_e7fe20
*/
void sub_911510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x911510ULL || rel >= 0x911690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00911690 size=336 callers=1 calls=1
   calls: anonymous_2
*/
void sub_911690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x911690ULL || rel >= 0x9117e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009117e0 size=288 callers=1 calls=2
   calls: sub_911900, sub_e809c0
*/
void sub_9117e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9117e0ULL || rel >= 0x911900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00911900 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_911900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x911900ULL || rel >= 0x911b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00911b30 size=288 callers=2 calls=2
   calls: sub_911c50, sub_e809c0
*/
void sub_911b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x911b30ULL || rel >= 0x911c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00911c50 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_911c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x911c50ULL || rel >= 0x911ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00911ec0 size=288 callers=1 calls=2
   calls: sub_911fe0, sub_e809c0
*/
void sub_911ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x911ec0ULL || rel >= 0x911fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00911fe0 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_911fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x911fe0ULL || rel >= 0x912230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00912230 size=288 callers=1 calls=2
   calls: sub_912350, sub_e809c0
*/
void sub_912230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x912230ULL || rel >= 0x912350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00912350 size=384 callers=1 calls=3
   calls: sub_790490, sub_9124d0, sub_e7fe20
*/
void sub_912350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x912350ULL || rel >= 0x9124d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009124d0 size=320 callers=1 calls=1
   calls: anonymous_2
*/
void sub_9124d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9124d0ULL || rel >= 0x912610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00912610 size=288 callers=1 calls=2
   calls: sub_912730, sub_e809c0
*/
void sub_912610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x912610ULL || rel >= 0x912730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00912730 size=384 callers=1 calls=3
   calls: sub_790490, sub_9128b0, sub_e7fe20
*/
void sub_912730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x912730ULL || rel >= 0x9128b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009128b0 size=864 callers=1 calls=1
   calls: anonymous_2
*/
void sub_9128b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9128b0ULL || rel >= 0x912c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00912c10 size=288 callers=1 calls=2
   calls: sub_912d30, sub_e809c0
*/
void sub_912c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x912c10ULL || rel >= 0x912d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00912d30 size=528 callers=1 calls=3
   calls: sub_790490, sub_912f40, sub_e7fe20
*/
void sub_912d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x912d30ULL || rel >= 0x912f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00912f40 size=544 callers=1 calls=1
   calls: anonymous_2
*/
void sub_912f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x912f40ULL || rel >= 0x913160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00913160 size=288 callers=1 calls=2
   calls: sub_913280, sub_e809c0
*/
void sub_913160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x913160ULL || rel >= 0x913280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00913280 size=672 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_913280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x913280ULL || rel >= 0x913520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00913520 size=288 callers=1 calls=2
   calls: sub_913640, sub_e809c0
*/
void sub_913520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x913520ULL || rel >= 0x913640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00913640 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_913640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x913640ULL || rel >= 0x913870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00913870 size=16 callers=0 calls=0
*/
void sub_913870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x913870ULL || rel >= 0x913880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00913880 size=16 callers=0 calls=0
*/
void sub_913880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x913880ULL || rel >= 0x913890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00913890 size=16 callers=0 calls=0
*/
void sub_913890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x913890ULL || rel >= 0x9138a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009138a0 size=16 callers=0 calls=0
*/
void sub_9138a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9138a0ULL || rel >= 0x9138b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009138b0 size=240 callers=3 calls=1
   calls: sub_e7f6c0
*/
void sub_9138b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9138b0ULL || rel >= 0x9139a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009139a0 size=240 callers=2 calls=1
   calls: sub_e7f6c0
*/
void sub_9139a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9139a0ULL || rel >= 0x913a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00913a90 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_913a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x913a90ULL || rel >= 0x913bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00913bd0 size=320 callers=15 calls=1
   calls: anonymous
*/
void sub_913bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x913bd0ULL || rel >= 0x913d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00913d10 size=336 callers=3 calls=1
   calls: anonymous
*/
void sub_913d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x913d10ULL || rel >= 0x913e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00913e60 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_913e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x913e60ULL || rel >= 0x913fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00913fa0 size=336 callers=2 calls=1
   calls: anonymous
*/
void sub_913fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x913fa0ULL || rel >= 0x9140f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009140f0 size=496 callers=1 calls=1
   calls: anonymous
*/
void sub_9140f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9140f0ULL || rel >= 0x9142e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009142e0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_9142e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9142e0ULL || rel >= 0x914420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00914420 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_914420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x914420ULL || rel >= 0x914560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00914560 size=336 callers=3 calls=1
   calls: anonymous
*/
void sub_914560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x914560ULL || rel >= 0x9146b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009146b0 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_9146b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9146b0ULL || rel >= 0x9147f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009147f0 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_9147f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9147f0ULL || rel >= 0x914930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00914930 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_914930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x914930ULL || rel >= 0x914a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00914a70 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_914a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x914a70ULL || rel >= 0x914bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00914bb0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_914bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x914bb0ULL || rel >= 0x914cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00914cf0 size=240 callers=1 calls=1
   calls: sub_79c240
*/
void sub_914cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x914cf0ULL || rel >= 0x914de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00914de0 size=336 callers=2 calls=1
   calls: anonymous
*/
void sub_914de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x914de0ULL || rel >= 0x914f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00914f30 size=240 callers=1 calls=1
   calls: sub_79c240
*/
void sub_914f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x914f30ULL || rel >= 0x915020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00915020 size=240 callers=1 calls=1
   calls: sub_79c240
*/
void sub_915020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x915020ULL || rel >= 0x915110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00915110 size=240 callers=1 calls=1
   calls: sub_79c240
*/
void sub_915110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x915110ULL || rel >= 0x915200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00915200 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_915200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x915200ULL || rel >= 0x915350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00915350 size=240 callers=1 calls=1
   calls: sub_79c240
*/
void sub_915350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x915350ULL || rel >= 0x915440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00915440 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_915440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x915440ULL || rel >= 0x915590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00915590 size=240 callers=1 calls=1
   calls: sub_79c240
*/
void sub_915590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x915590ULL || rel >= 0x915680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00915680 size=240 callers=1 calls=1
   calls: sub_79c240
*/
void sub_915680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x915680ULL || rel >= 0x915770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00915770 size=336 callers=2 calls=1
   calls: anonymous
*/
void sub_915770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x915770ULL || rel >= 0x9158c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009158c0 size=240 callers=1 calls=1
   calls: sub_79c240
*/
void sub_9158c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9158c0ULL || rel >= 0x9159b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009159b0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_9159b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9159b0ULL || rel >= 0x915af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00915af0 size=528 callers=2 calls=3
   calls: anonymous, sub_10466c0, sub_7c2280
*/
void sub_915af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x915af0ULL || rel >= 0x915d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00915d00 size=240 callers=0 calls=0
*/
void sub_915d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x915d00ULL || rel >= 0x915df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00915df0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/battle_time_00_lyt.bin
*/
void battle_time_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x915df0ULL || rel >= 0x915f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00915f00 size=3728 callers=0 calls=5
   calls: P_separator, sub_14aad40, sub_8fc340, sub_8fc3b0, sub_e83930
   ref: pane_%s
   ref: L_time_01
   ref: L_time_00
   ref: P_bar_00
   ref: L_totaltime_00
   ref: L_time_s_00_L_timer_00
   ref: L_command_00
*/
void L_time_s_00_L_timer_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x915f00ULL || rel >= 0x916d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00916d90 size=560 callers=4 calls=4
   calls: sub_8fc010, sub_e83540, sub_e83930, sub_e83c60
*/
void sub_916d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x916d90ULL || rel >= 0x916fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00916fc0 size=208 callers=4 calls=2
   calls: sub_8fc2f0, sub_8fc320
*/
void sub_916fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x916fc0ULL || rel >= 0x917090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917090 size=80 callers=1 calls=1
   calls: sub_e83930
*/
void sub_917090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917090ULL || rel >= 0x9170e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009170e0 size=224 callers=0 calls=0
*/
void sub_9170e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9170e0ULL || rel >= 0x9171c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009171c0 size=224 callers=0 calls=0
*/
void sub_9171c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9171c0ULL || rel >= 0x9172a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009172a0 size=16 callers=0 calls=0
*/
void sub_9172a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9172a0ULL || rel >= 0x9172b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009172b0 size=224 callers=0 calls=0
*/
void sub_9172b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9172b0ULL || rel >= 0x917390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917390 size=224 callers=0 calls=0
*/
void sub_917390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917390ULL || rel >= 0x917470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917470 size=16 callers=0 calls=0
*/
void sub_917470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917470ULL || rel >= 0x917480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917480 size=16 callers=0 calls=0
*/
void sub_917480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917480ULL || rel >= 0x917490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917490 size=224 callers=0 calls=0
*/
void sub_917490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917490ULL || rel >= 0x917570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917570 size=224 callers=0 calls=0
*/
void sub_917570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917570ULL || rel >= 0x917650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917650 size=96 callers=0 calls=2
   calls: sub_e83430, sub_e83850
*/
void sub_917650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917650ULL || rel >= 0x9176b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009176b0 size=16 callers=0 calls=0
*/
void sub_9176b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9176b0ULL || rel >= 0x9176c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009176c0 size=32 callers=0 calls=0
*/
void sub_9176c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9176c0ULL || rel >= 0x9176e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009176e0 size=32 callers=0 calls=0
*/
void sub_9176e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9176e0ULL || rel >= 0x917700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917700 size=80 callers=0 calls=2
   calls: sub_e83430, sub_e83850
*/
void sub_917700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917700ULL || rel >= 0x917750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917750 size=16 callers=0 calls=0
*/
void sub_917750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917750ULL || rel >= 0x917760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917760 size=32 callers=0 calls=0
*/
void sub_917760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917760ULL || rel >= 0x917780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917780 size=32 callers=0 calls=0
*/
void sub_917780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917780ULL || rel >= 0x9177a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009177a0 size=304 callers=0 calls=0
*/
void sub_9177a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9177a0ULL || rel >= 0x9178d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009178d0 size=192 callers=0 calls=1
   calls: sub_e83540
*/
void sub_9178d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9178d0ULL || rel >= 0x917990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917990 size=16 callers=0 calls=0
*/
void sub_917990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917990ULL || rel >= 0x9179a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009179a0 size=32 callers=0 calls=0
*/
void sub_9179a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9179a0ULL || rel >= 0x9179c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009179c0 size=32 callers=0 calls=0
*/
void sub_9179c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9179c0ULL || rel >= 0x9179e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009179e0 size=240 callers=0 calls=0
*/
void sub_9179e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9179e0ULL || rel >= 0x917ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917ad0 size=16 callers=3 calls=0
*/
void sub_917ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917ad0ULL || rel >= 0x917ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917ae0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/uikit_battle_skillSelect.bin
   ref: bin/appli/battle/bin/battle_skillSelect_00_lyt.bin
*/
void uikit_battle_skillSelect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917ae0ULL || rel >= 0x917cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00917cc0 size=3264 callers=0 calls=16
   calls: sub_14e1a00, sub_14e1a30, sub_14e62c0, sub_14e6550, sub_14e6d90, sub_8efdd0, sub_918f70, sub_919060, sub_9197f0, sub_919f80, sub_919f90, sub_e83d70
   ... +4 more
   ref: L_skillButton_02
   ref: L_skillButton_01
   ref: L_gskillButton_02
   ref: L_skillButton_03
   ref: L_gskillButton_01
   ref: L_gskillButton_00
   ref: L_skillButton_00
   ref: L_gskillButton_03
*/
void L_gskillButton_03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x917cc0ULL || rel >= 0x918980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00918980 size=80 callers=2 calls=2
   calls: sub_918f70, sub_919060
*/
void sub_918980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x918980ULL || rel >= 0x9189d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009189d0 size=384 callers=0 calls=0
*/
void sub_9189d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9189d0ULL || rel >= 0x918b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00918b50 size=160 callers=0 calls=1
   calls: sub_14e6dd0
*/
void sub_918b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x918b50ULL || rel >= 0x918bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00918bf0 size=32 callers=0 calls=0
*/
void sub_918bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x918bf0ULL || rel >= 0x918c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00918c10 size=864 callers=3 calls=8
   calls: sub_14e6d90, sub_17919c0, sub_901450, sub_918f70, sub_919060, sub_91a410, sub_e83930, sub_eb6230
*/
void sub_918c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x918c10ULL || rel >= 0x918f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00918f70 size=240 callers=3 calls=4
   calls: sub_14e1a00, sub_14e1a30, sub_14e62c0, sub_14e6d90
*/
void sub_918f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x918f70ULL || rel >= 0x919060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919060 size=224 callers=3 calls=5
   calls: sub_14e1a00, sub_14e1a30, sub_14e1b40, sub_14e6d50, sub_e83930
*/
void sub_919060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919060ULL || rel >= 0x919140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919140 size=64 callers=2 calls=1
   calls: sub_918c10
*/
void sub_919140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919140ULL || rel >= 0x919180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919180 size=16 callers=3 calls=0
*/
void sub_919180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919180ULL || rel >= 0x919190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919190 size=32 callers=1 calls=0
*/
void sub_919190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919190ULL || rel >= 0x9191b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009191b0 size=64 callers=1 calls=0
*/
void sub_9191b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9191b0ULL || rel >= 0x9191f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009191f0 size=32 callers=1 calls=0
*/
void sub_9191f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9191f0ULL || rel >= 0x919210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919210 size=144 callers=0 calls=0
*/
void sub_919210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919210ULL || rel >= 0x9192a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009192a0 size=144 callers=0 calls=0
*/
void sub_9192a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9192a0ULL || rel >= 0x919330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919330 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_919330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919330ULL || rel >= 0x9193a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009193a0 size=144 callers=0 calls=0
*/
void sub_9193a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9193a0ULL || rel >= 0x919430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919430 size=144 callers=0 calls=0
*/
void sub_919430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919430ULL || rel >= 0x9194c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009194c0 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_9194c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9194c0ULL || rel >= 0x919530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919530 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_919530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919530ULL || rel >= 0x9195a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009195a0 size=144 callers=0 calls=0
*/
void sub_9195a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9195a0ULL || rel >= 0x919630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919630 size=144 callers=0 calls=0
*/
void sub_919630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919630ULL || rel >= 0x9196c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009196c0 size=304 callers=26 calls=0
*/
void sub_9196c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9196c0ULL || rel >= 0x9197f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009197f0 size=464 callers=2 calls=0
*/
void sub_9197f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9197f0ULL || rel >= 0x9199c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009199c0 size=112 callers=0 calls=0
*/
void sub_9199c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9199c0ULL || rel >= 0x919a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919a30 size=112 callers=0 calls=0
*/
void sub_919a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919a30ULL || rel >= 0x919aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919aa0 size=112 callers=0 calls=0
*/
void sub_919aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919aa0ULL || rel >= 0x919b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919b10 size=112 callers=0 calls=0
*/
void sub_919b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919b10ULL || rel >= 0x919b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919b80 size=96 callers=0 calls=1
   calls: sub_14e6510
*/
void sub_919b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919b80ULL || rel >= 0x919be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919be0 size=16 callers=0 calls=0
*/
void sub_919be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919be0ULL || rel >= 0x919bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919bf0 size=16 callers=0 calls=0
*/
void sub_919bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919bf0ULL || rel >= 0x919c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919c00 size=16 callers=0 calls=0
*/
void sub_919c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919c00ULL || rel >= 0x919c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919c10 size=880 callers=0 calls=0
*/
void sub_919c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919c10ULL || rel >= 0x919f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919f80 size=16 callers=4 calls=0
*/
void sub_919f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919f80ULL || rel >= 0x919f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919f90 size=96 callers=4 calls=1
   calls: pattern_effect
*/
void sub_919f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919f90ULL || rel >= 0x919ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00919ff0 size=1056 callers=2 calls=2
   calls: sub_8f3180, sub_e83e60
   ref: pane_%s
   ref: anime_%s
   ref: P_iconType_00
   ref: pane_%s_%s
   ref: T_name_00
   ref: anime_%s_%s
   ref: T_pp_00
   ref: pattern_type
*/
void pattern_effect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x919ff0ULL || rel >= 0x91a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091a410 size=352 callers=4 calls=5
   calls: sub_7eef40, sub_7f33a0, sub_82d9a0, sub_8aa360, sub_91a570
*/
void sub_91a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91a410ULL || rel >= 0x91a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091a570 size=960 callers=2 calls=11
   calls: sub_1315b90, sub_14ac370, sub_14d6920, sub_14db470, sub_14e1a00, sub_14e1a30, sub_67d450, sub_780c30, sub_91a940, sub_91ac30, sub_e83930
*/
void sub_91a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91a570ULL || rel >= 0x91a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091a930 size=16 callers=0 calls=0
*/
void sub_91a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91a930ULL || rel >= 0x91a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091a940 size=352 callers=2 calls=3
   calls: gwazaname, sub_67d450, wazaname
*/
void sub_91a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91a940ULL || rel >= 0x91aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091aaa0 size=240 callers=0 calls=0
*/
void sub_91aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91aaa0ULL || rel >= 0x91ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ab90 size=160 callers=2 calls=2
   calls: sub_7ee6b0, sub_7ef2b0
*/
void sub_91ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ab90ULL || rel >= 0x91ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ac30 size=1296 callers=2 calls=3
   calls: sub_7ee6b0, sub_7ef2b0, sub_91b140
*/
void sub_91ac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ac30ULL || rel >= 0x91b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091b140 size=432 callers=2 calls=2
   calls: sub_7ee6b0, sub_7ef2b0
*/
void sub_91b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91b140ULL || rel >= 0x91b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091b2f0 size=240 callers=0 calls=0
*/
void sub_91b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91b2f0ULL || rel >= 0x91b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091b3e0 size=208 callers=4 calls=3
   calls: sub_91b610, sub_e80580, sub_e806b0
*/
void sub_91b3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91b3e0ULL || rel >= 0x91b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091b4b0 size=128 callers=2 calls=1
   calls: sub_e806b0
*/
void sub_91b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91b4b0ULL || rel >= 0x91b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091b530 size=112 callers=4 calls=1
   calls: sub_e80580
*/
void sub_91b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91b530ULL || rel >= 0x91b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091b5a0 size=32 callers=0 calls=0
*/
void sub_91b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91b5a0ULL || rel >= 0x91b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091b5c0 size=48 callers=2 calls=1
   calls: sub_14e6550
*/
void sub_91b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91b5c0ULL || rel >= 0x91b5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091b5f0 size=16 callers=0 calls=0
*/
void sub_91b5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91b5f0ULL || rel >= 0x91b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091b600 size=16 callers=0 calls=0
*/
void sub_91b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91b600ULL || rel >= 0x91b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091b610 size=432 callers=4 calls=3
   calls: sub_14e1a30, sub_91b610, sub_f0ce40
*/
void sub_91b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91b610ULL || rel >= 0x91b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091b7c0 size=432 callers=3 calls=3
   calls: sub_14e1a30, sub_91b7c0, sub_f0ce40
*/
void sub_91b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91b7c0ULL || rel >= 0x91b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091b970 size=240 callers=0 calls=0
*/
void sub_91b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91b970ULL || rel >= 0x91ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ba60 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/uikit_battle_commandSelect_00.bin
   ref: bin/appli/battle/bin/battle_commandSelect_00_lyt.bin
*/
void uikit_battle_commandSelect_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ba60ULL || rel >= 0x91bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091bc40 size=1440 callers=0 calls=8
   calls: sub_14e1a30, sub_8efdd0, sub_8f19b0, sub_e7ea90, sub_e806b0, sub_e83930, sub_e83fe0, sub_e84190
   ref: anime_%s
   ref: L_button_battle
   ref: common/btl_app.dat
   ref: anime_%s_%s
   ref: L_button_ball
   ref: command
*/
void L_button_battle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91bc40ULL || rel >= 0x91c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091c1e0 size=80 callers=0 calls=2
   calls: sub_17919c0, sub_91b3e0
*/
void sub_91c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c1e0ULL || rel >= 0x91c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091c230 size=64 callers=0 calls=1
   calls: sub_91b4b0
*/
void sub_91c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c230ULL || rel >= 0x91c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091c270 size=336 callers=0 calls=0
*/
void sub_91c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c270ULL || rel >= 0x91c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091c3c0 size=192 callers=0 calls=3
   calls: sub_14e62c0, sub_14e6dd0, sub_91b5c0
*/
void sub_91c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c3c0ULL || rel >= 0x91c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091c480 size=176 callers=1 calls=2
   calls: sub_14e62c0, sub_14e6dd0
*/
void sub_91c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c480ULL || rel >= 0x91c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091c530 size=16 callers=0 calls=0
*/
void sub_91c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c530ULL || rel >= 0x91c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091c540 size=640 callers=2 calls=3
   calls: sub_901440, sub_91c7c0, sub_e83930
*/
void sub_91c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c540ULL || rel >= 0x91c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091c7c0 size=320 callers=23 calls=5
   calls: sub_14e1a00, sub_14e1a30, sub_14e62c0, sub_14e6d90, sub_e83930
*/
void sub_91c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c7c0ULL || rel >= 0x91c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091c900 size=16 callers=2 calls=0
*/
void sub_91c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c900ULL || rel >= 0x91c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091c910 size=16 callers=1 calls=0
*/
void sub_91c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c910ULL || rel >= 0x91c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091c920 size=32 callers=0 calls=1
   calls: sub_91b530
*/
void sub_91c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c920ULL || rel >= 0x91c940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091c940 size=32 callers=1 calls=0
*/
void sub_91c940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c940ULL || rel >= 0x91c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091c960 size=128 callers=0 calls=2
   calls: sub_14e62c0, sub_14e6dd0
*/
void sub_91c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c960ULL || rel >= 0x91c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091c9e0 size=176 callers=0 calls=2
   calls: sub_14e62c0, sub_14e6dd0
*/
void sub_91c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c9e0ULL || rel >= 0x91ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ca90 size=64 callers=1 calls=2
   calls: sub_14e6510, sub_14e6d50
*/
void sub_91ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ca90ULL || rel >= 0x91cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cad0 size=16 callers=0 calls=0
*/
void sub_91cad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cad0ULL || rel >= 0x91cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cae0 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_91cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cae0ULL || rel >= 0x91cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cb50 size=16 callers=0 calls=0
*/
void sub_91cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cb50ULL || rel >= 0x91cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cb60 size=16 callers=0 calls=0
*/
void sub_91cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cb60ULL || rel >= 0x91cb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cb70 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_91cb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cb70ULL || rel >= 0x91cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cbe0 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_91cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cbe0ULL || rel >= 0x91cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cc50 size=16 callers=0 calls=0
*/
void sub_91cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cc50ULL || rel >= 0x91cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cc60 size=16 callers=0 calls=0
*/
void sub_91cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cc60ULL || rel >= 0x91cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cc70 size=240 callers=0 calls=0
*/
void sub_91cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cc70ULL || rel >= 0x91cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cd60 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/battle_black_00_lyt.bin
*/
void battle_black_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cd60ULL || rel >= 0x91ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ce70 size=16 callers=0 calls=0
*/
void sub_91ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ce70ULL || rel >= 0x91ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ce80 size=32 callers=0 calls=0
*/
void sub_91ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ce80ULL || rel >= 0x91cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cea0 size=48 callers=0 calls=0
*/
void sub_91cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cea0ULL || rel >= 0x91ced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ced0 size=16 callers=2 calls=0
*/
void sub_91ced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ced0ULL || rel >= 0x91cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cee0 size=16 callers=1 calls=0
*/
void sub_91cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cee0ULL || rel >= 0x91cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cef0 size=16 callers=0 calls=0
*/
void sub_91cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cef0ULL || rel >= 0x91cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cf00 size=16 callers=0 calls=0
*/
void sub_91cf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cf00ULL || rel >= 0x91cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cf10 size=16 callers=0 calls=0
*/
void sub_91cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cf10ULL || rel >= 0x91cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cf20 size=16 callers=0 calls=0
*/
void sub_91cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cf20ULL || rel >= 0x91cf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cf30 size=16 callers=0 calls=0
*/
void sub_91cf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cf30ULL || rel >= 0x91cf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cf40 size=16 callers=0 calls=0
*/
void sub_91cf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cf40ULL || rel >= 0x91cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cf50 size=16 callers=0 calls=0
*/
void sub_91cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cf50ULL || rel >= 0x91cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cf60 size=16 callers=0 calls=0
*/
void sub_91cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cf60ULL || rel >= 0x91cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091cf70 size=304 callers=0 calls=0
*/
void sub_91cf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91cf70ULL || rel >= 0x91d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d0a0 size=240 callers=0 calls=0
*/
void sub_91d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d0a0ULL || rel >= 0x91d190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d190 size=16 callers=0 calls=0
*/
void sub_91d190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d190ULL || rel >= 0x91d1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d1a0 size=336 callers=0 calls=3
   calls: sub_91d7b0, sub_c39c40, sub_d0c0
   ref: View_SelectAction
   ref: select_item
*/
void View_SelectAction(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d1a0ULL || rel >= 0x91d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d2f0 size=384 callers=0 calls=4
   calls: sub_8ebc90, sub_909170, sub_967370, sub_eb6530
*/
void sub_91d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d2f0ULL || rel >= 0x91d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d470 size=96 callers=0 calls=1
   calls: sub_967370
*/
void sub_91d470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d470ULL || rel >= 0x91d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d4d0 size=16 callers=0 calls=0
*/
void sub_91d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d4d0ULL || rel >= 0x91d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d4e0 size=16 callers=0 calls=0
*/
void sub_91d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d4e0ULL || rel >= 0x91d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d4f0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_91d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d4f0ULL || rel >= 0x91d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d560 size=16 callers=0 calls=0
*/
void sub_91d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d560ULL || rel >= 0x91d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d570 size=16 callers=0 calls=0
*/
void sub_91d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d570ULL || rel >= 0x91d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d580 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_91d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d580ULL || rel >= 0x91d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d5f0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_91d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d5f0ULL || rel >= 0x91d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d660 size=16 callers=0 calls=0
*/
void sub_91d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d660ULL || rel >= 0x91d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d670 size=16 callers=0 calls=0
*/
void sub_91d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d670ULL || rel >= 0x91d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d680 size=304 callers=30 calls=0
*/
void sub_91d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d680ULL || rel >= 0x91d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d7b0 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_9196c0
*/
void sub_91d7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d7b0ULL || rel >= 0x91d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d900 size=240 callers=0 calls=0
*/
void sub_91d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d900ULL || rel >= 0x91d9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091d9f0 size=64 callers=0 calls=0
*/
void sub_91d9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91d9f0ULL || rel >= 0x91da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091da30 size=208 callers=0 calls=1
   calls: sub_967370
*/
void sub_91da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91da30ULL || rel >= 0x91db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091db00 size=16 callers=0 calls=0
*/
void sub_91db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91db00ULL || rel >= 0x91db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091db10 size=240 callers=0 calls=0
*/
void sub_91db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91db10ULL || rel >= 0x91dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091dc00 size=608 callers=0 calls=5
   calls: sub_8eb250, sub_8eb3a0, sub_967370, sub_c39c40, sub_d0c0
   ref: BossView
   ref: TopView
*/
void BossView_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91dc00ULL || rel >= 0x91de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091de60 size=384 callers=0 calls=1
   calls: sub_967370
*/
void sub_91de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91de60ULL || rel >= 0x91dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091dfe0 size=16 callers=0 calls=0
*/
void sub_91dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91dfe0ULL || rel >= 0x91dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091dff0 size=112 callers=0 calls=0
*/
void sub_91dff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91dff0ULL || rel >= 0x91e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e060 size=112 callers=0 calls=0
*/
void sub_91e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e060ULL || rel >= 0x91e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e0d0 size=16 callers=0 calls=0
*/
void sub_91e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e0d0ULL || rel >= 0x91e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e0e0 size=112 callers=0 calls=0
*/
void sub_91e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e0e0ULL || rel >= 0x91e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e150 size=112 callers=0 calls=0
*/
void sub_91e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e150ULL || rel >= 0x91e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e1c0 size=16 callers=0 calls=0
*/
void sub_91e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e1c0ULL || rel >= 0x91e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e1d0 size=16 callers=0 calls=0
*/
void sub_91e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e1d0ULL || rel >= 0x91e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e1e0 size=112 callers=0 calls=0
*/
void sub_91e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e1e0ULL || rel >= 0x91e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e250 size=112 callers=0 calls=0
*/
void sub_91e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e250ULL || rel >= 0x91e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e2c0 size=304 callers=0 calls=0
*/
void sub_91e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e2c0ULL || rel >= 0x91e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e3f0 size=240 callers=0 calls=0
*/
void sub_91e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e3f0ULL || rel >= 0x91e4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e4e0 size=336 callers=0 calls=3
   calls: sub_8eb250, sub_c39c40, sub_d0c0
   ref: TopView
   ref: levelup
*/
void levelup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e4e0ULL || rel >= 0x91e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e630 size=576 callers=0 calls=3
   calls: sub_7847d0, sub_967370, sub_eb6530
*/
void sub_91e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e630ULL || rel >= 0x91e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e870 size=16 callers=0 calls=0
*/
void sub_91e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e870ULL || rel >= 0x91e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e880 size=16 callers=0 calls=0
*/
void sub_91e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e880ULL || rel >= 0x91e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e890 size=16 callers=0 calls=0
*/
void sub_91e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e890ULL || rel >= 0x91e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e8a0 size=16 callers=0 calls=0
*/
void sub_91e8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e8a0ULL || rel >= 0x91e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e8b0 size=16 callers=0 calls=0
*/
void sub_91e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e8b0ULL || rel >= 0x91e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e8c0 size=16 callers=0 calls=0
*/
void sub_91e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e8c0ULL || rel >= 0x91e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e8d0 size=16 callers=0 calls=0
*/
void sub_91e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e8d0ULL || rel >= 0x91e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e8e0 size=16 callers=0 calls=0
*/
void sub_91e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e8e0ULL || rel >= 0x91e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e8f0 size=16 callers=0 calls=0
*/
void sub_91e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e8f0ULL || rel >= 0x91e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091e900 size=304 callers=0 calls=0
*/
void sub_91e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e900ULL || rel >= 0x91ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ea30 size=240 callers=0 calls=0
*/
void sub_91ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ea30ULL || rel >= 0x91eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091eb20 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/uikit_battle_ballselect.bin
   ref: bin/appli/battle/bin/battle_ballselect_00_lyt.bin
*/
void uikit_battle_ballselect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91eb20ULL || rel >= 0x91ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ed00 size=1952 callers=0 calls=10
   calls: sub_14aad40, sub_14ba7b0, sub_67b990, sub_7a3c20, sub_8f19b0, sub_8f3180, sub_901440, sub_e7ea90, sub_e83fe0, sub_e84190
   ref: common/iteminfo.dat
   ref: pane_%s
   ref: L_cursorL_00
   ref: common/btl_app.dat
   ref: L_cursorR_00
*/
void L_cursorR_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ed00ULL || rel >= 0x91f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091f4a0 size=16 callers=2 calls=0
*/
void sub_91f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91f4a0ULL || rel >= 0x91f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091f4b0 size=16 callers=2 calls=0
*/
void sub_91f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91f4b0ULL || rel >= 0x91f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091f4c0 size=32 callers=2 calls=1
   calls: sub_eb6530
*/
void sub_91f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91f4c0ULL || rel >= 0x91f4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091f4e0 size=224 callers=2 calls=1
   calls: sub_14e1a00
*/
void sub_91f4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91f4e0ULL || rel >= 0x91f5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091f5c0 size=144 callers=0 calls=0
*/
void sub_91f5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91f5c0ULL || rel >= 0x91f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091f650 size=64 callers=0 calls=1
   calls: sub_91b3e0
*/
void sub_91f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91f650ULL || rel >= 0x91f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091f690 size=608 callers=2 calls=8
   calls: sub_1315b90, sub_14ac370, sub_14bb830, sub_67bdb0, sub_67d080, sub_67d450, sub_8d8330, sub_e83b20
*/
void sub_91f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91f690ULL || rel >= 0x91f8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091f8f0 size=16 callers=0 calls=0
*/
void sub_91f8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91f8f0ULL || rel >= 0x91f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091f900 size=16 callers=0 calls=0
*/
void sub_91f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91f900ULL || rel >= 0x91f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091f910 size=16 callers=4 calls=0
*/
void sub_91f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91f910ULL || rel >= 0x91f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091f920 size=336 callers=0 calls=3
   calls: sub_1500c40, sub_91f690, sub_e83430
   ref: anime_%s_%s
   ref: L_cursorR_00
   ref: select
*/
void L_cursorR_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91f920ULL || rel >= 0x91fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091fa70 size=336 callers=0 calls=3
   calls: sub_1500c40, sub_91f690, sub_e83430
   ref: L_cursorL_00
   ref: anime_%s_%s
   ref: select
*/
void L_cursorL_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91fa70ULL || rel >= 0x91fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091fbc0 size=96 callers=0 calls=0
*/
void sub_91fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91fbc0ULL || rel >= 0x91fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091fc20 size=96 callers=0 calls=0
*/
void sub_91fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91fc20ULL || rel >= 0x91fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091fc80 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_91fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91fc80ULL || rel >= 0x91fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091fcf0 size=96 callers=0 calls=0
*/
void sub_91fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91fcf0ULL || rel >= 0x91fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091fd50 size=96 callers=0 calls=0
*/
void sub_91fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91fd50ULL || rel >= 0x91fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091fdb0 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_91fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91fdb0ULL || rel >= 0x91fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091fe20 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_91fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91fe20ULL || rel >= 0x91fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091fe90 size=96 callers=0 calls=0
*/
void sub_91fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91fe90ULL || rel >= 0x91fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091fef0 size=96 callers=0 calls=0
*/
void sub_91fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91fef0ULL || rel >= 0x91ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ff50 size=16 callers=0 calls=0
*/
void sub_91ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ff50ULL || rel >= 0x91ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ff60 size=16 callers=0 calls=0
*/
void sub_91ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ff60ULL || rel >= 0x91ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ff70 size=16 callers=0 calls=0
*/
void sub_91ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ff70ULL || rel >= 0x91ff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ff80 size=16 callers=0 calls=0
*/
void sub_91ff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ff80ULL || rel >= 0x91ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ff90 size=16 callers=0 calls=0
*/
void sub_91ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ff90ULL || rel >= 0x91ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ffa0 size=16 callers=0 calls=0
*/
void sub_91ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ffa0ULL || rel >= 0x91ffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ffb0 size=16 callers=0 calls=0
*/
void sub_91ffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ffb0ULL || rel >= 0x91ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ffc0 size=16 callers=0 calls=0
*/
void sub_91ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ffc0ULL || rel >= 0x91ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0091ffd0 size=240 callers=0 calls=0
*/
void sub_91ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91ffd0ULL || rel >= 0x9200c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009200c0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/uikit_battle_result_boss_00.bin
   ref: bin/appli/battle/bin/battle_result_boss_00_lyt.bin
*/
void uikit_battle_result_boss_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9200c0ULL || rel >= 0x9202a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009202a0 size=2496 callers=0 calls=11
   calls: sub_14aad40, sub_5cfad0, sub_67b990, sub_7a3c20, sub_8f19b0, sub_921450, sub_9216c0, sub_9218a0, sub_e7ea90, sub_e7f7e0, sub_e83e60
   ref: pane_%s
   ref: L_mark_02
   ref: L_mark_01
   ref: L_mark_04
   ref: pane_%s_%s
   ref: L_mark_00
   ref: anime_%s_%s
   ref: L_button_ok_00
*/
void T_title_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9202a0ULL || rel >= 0x920c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00920c60 size=16 callers=1 calls=0
*/
void sub_920c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x920c60ULL || rel >= 0x920c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00920c70 size=16 callers=1 calls=0
*/
void sub_920c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x920c70ULL || rel >= 0x920c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00920c80 size=80 callers=0 calls=1
   calls: sub_91b3e0
*/
void sub_920c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x920c80ULL || rel >= 0x920cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00920cd0 size=64 callers=0 calls=1
   calls: sub_91b4b0
*/
void sub_920cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x920cd0ULL || rel >= 0x920d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00920d10 size=48 callers=0 calls=0
*/
void sub_920d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x920d10ULL || rel >= 0x920d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00920d40 size=48 callers=0 calls=2
   calls: sub_91b530, sub_921bd0
*/
void sub_920d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x920d40ULL || rel >= 0x920d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00920d70 size=720 callers=1 calls=11
   calls: sub_1311c60, sub_1313e50, sub_5cfad0, sub_67bdb0, sub_67d450, sub_7ef330, sub_921ba0, sub_e7ea90, sub_e7f7e0, sub_e83930, sub_e83b20
*/
void sub_920d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x920d70ULL || rel >= 0x921040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921040 size=16 callers=1 calls=0
*/
void sub_921040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921040ULL || rel >= 0x921050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921050 size=16 callers=0 calls=0
*/
void sub_921050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921050ULL || rel >= 0x921060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921060 size=112 callers=0 calls=1
   calls: sub_921450
*/
void sub_921060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921060ULL || rel >= 0x9210d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009210d0 size=112 callers=0 calls=1
   calls: sub_921450
*/
void sub_9210d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9210d0ULL || rel >= 0x921140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921140 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_921140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921140ULL || rel >= 0x9211b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009211b0 size=112 callers=0 calls=1
   calls: sub_921450
*/
void sub_9211b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9211b0ULL || rel >= 0x921220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921220 size=112 callers=0 calls=1
   calls: sub_921450
*/
void sub_921220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921220ULL || rel >= 0x921290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921290 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_921290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921290ULL || rel >= 0x921300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921300 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_921300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921300ULL || rel >= 0x921370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921370 size=112 callers=0 calls=1
   calls: sub_921450
*/
void sub_921370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921370ULL || rel >= 0x9213e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009213e0 size=112 callers=0 calls=1
   calls: sub_921450
*/
void sub_9213e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9213e0ULL || rel >= 0x921450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921450 size=320 callers=8 calls=0
*/
void sub_921450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921450ULL || rel >= 0x921590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921590 size=16 callers=0 calls=0
*/
void sub_921590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921590ULL || rel >= 0x9215a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009215a0 size=16 callers=0 calls=0
*/
void sub_9215a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9215a0ULL || rel >= 0x9215b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009215b0 size=16 callers=0 calls=0
*/
void sub_9215b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9215b0ULL || rel >= 0x9215c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009215c0 size=16 callers=0 calls=0
*/
void sub_9215c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9215c0ULL || rel >= 0x9215d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009215d0 size=240 callers=0 calls=0
*/
void sub_9215d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9215d0ULL || rel >= 0x9216c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009216c0 size=480 callers=1 calls=2
   calls: sub_922090, sub_e7f7f0
*/
void sub_9216c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9216c0ULL || rel >= 0x9218a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009218a0 size=768 callers=1 calls=5
   calls: sub_14e1a00, sub_9225f0, sub_e83e60, sub_e84190, sub_e84250
*/
void sub_9218a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9218a0ULL || rel >= 0x921ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921ba0 size=48 callers=1 calls=1
   calls: sub_9228b0
*/
void sub_921ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921ba0ULL || rel >= 0x921bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921bd0 size=112 callers=1 calls=2
   calls: sub_14e6d50, sub_922970
*/
void sub_921bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921bd0ULL || rel >= 0x921c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921c40 size=144 callers=0 calls=2
   calls: sub_14e6550, sub_922970
*/
void sub_921c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921c40ULL || rel >= 0x921cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921cd0 size=304 callers=0 calls=0
*/
void sub_921cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921cd0ULL || rel >= 0x921e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921e00 size=288 callers=0 calls=0
*/
void sub_921e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921e00ULL || rel >= 0x921f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921f20 size=80 callers=0 calls=2
   calls: sub_14e6550, sub_901450
*/
void sub_921f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921f20ULL || rel >= 0x921f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921f70 size=16 callers=0 calls=0
*/
void sub_921f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921f70ULL || rel >= 0x921f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921f80 size=16 callers=0 calls=0
*/
void sub_921f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921f80ULL || rel >= 0x921f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921f90 size=16 callers=0 calls=0
*/
void sub_921f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921f90ULL || rel >= 0x921fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00921fa0 size=240 callers=0 calls=0
*/
void sub_921fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921fa0ULL || rel >= 0x922090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00922090 size=1376 callers=1 calls=7
   calls: sub_14f1840, sub_14f1850, sub_14f1870, sub_922b80, sub_923960, sub_e7f7f0, sub_e84250
*/
void sub_922090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x922090ULL || rel >= 0x9225f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009225f0 size=704 callers=1 calls=1
   calls: T_itemlist_number_01
*/
void sub_9225f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9225f0ULL || rel >= 0x9228b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009228b0 size=176 callers=1 calls=3
   calls: sub_14edac0, sub_14eead0, sub_923650
*/
void sub_9228b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9228b0ULL || rel >= 0x922960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00922960 size=16 callers=0 calls=0
*/
void sub_922960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x922960ULL || rel >= 0x922970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00922970 size=48 callers=2 calls=0
*/
void sub_922970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x922970ULL || rel >= 0x9229a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009229a0 size=240 callers=0 calls=0
*/
void sub_9229a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9229a0ULL || rel >= 0x922a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00922a90 size=240 callers=0 calls=0
*/
void sub_922a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x922a90ULL || rel >= 0x922b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00922b80 size=496 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_922b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x922b80ULL || rel >= 0x922d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00922d70 size=240 callers=0 calls=0
*/
void sub_922d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x922d70ULL || rel >= 0x922e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00922e60 size=240 callers=0 calls=0
*/
void sub_922e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x922e60ULL || rel >= 0x922f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00922f50 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_922f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x922f50ULL || rel >= 0x922fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00922fc0 size=32 callers=0 calls=0
*/
void sub_922fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x922fc0ULL || rel >= 0x922fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00922fe0 size=80 callers=0 calls=0
*/
void sub_922fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x922fe0ULL || rel >= 0x923030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00923030 size=192 callers=0 calls=0
*/
void sub_923030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x923030ULL || rel >= 0x9230f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009230f0 size=240 callers=0 calls=0
*/
void sub_9230f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9230f0ULL || rel >= 0x9231e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009231e0 size=240 callers=0 calls=0
*/
void sub_9231e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9231e0ULL || rel >= 0x9232d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

