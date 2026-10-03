/* main functions 012f8ee0..0131b690 (160 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 012f8ee0 size=272 callers=2 calls=0
*/
void sub_12f8ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8ee0ULL || rel >= 0x12f8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f8ff0 size=704 callers=0 calls=0
*/
void sub_12f8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f8ff0ULL || rel >= 0x12f92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f92b0 size=288 callers=1 calls=0
*/
void sub_12f92b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f92b0ULL || rel >= 0x12f93d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f93d0 size=464 callers=0 calls=3
   calls: sub_5dd790, sub_5e2930, sub_9b2290
   ref: bin/archive/g_effect/g_effect.gfpak
*/
void g_effect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f93d0ULL || rel >= 0x12f95a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f95a0 size=400 callers=0 calls=2
   calls: sub_5e2bc0, sub_682dd0
*/
void sub_12f95a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f95a0ULL || rel >= 0x12f9730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f9730 size=112 callers=0 calls=0
*/
void sub_12f9730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f9730ULL || rel >= 0x12f97a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f97a0 size=384 callers=0 calls=3
   calls: sub_5e2bc0, sub_5fc600, sub_682dd0
   ref: projection_effect_col
*/
void projection_effect_col(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f97a0ULL || rel >= 0x12f9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f9920 size=1440 callers=0 calls=11
   calls: sub_5e2930, sub_5e3870, sub_955da0, sub_956130, sub_9568b0, sub_96a3a0, sub_96a5a0, sub_96bb80, sub_96e0d0, sub_b77710, sub_ec20
   ref: bin/battle/waza/model/anm/eg_cmn_cloud01.gfbanmcfg
   ref: bin/battle/waza/model/eg_cmn_cloud01/eg_cmn_cloud01.gfbmdl
   ref: bin/battle/g_resource/GTextures/projection_effect_col.bntx
   ref: bin/battle/waza/particle/eg_cmn/eg_cmn_G_Thunder.ptcl
   ref: bin/battle/waza/particle/eg_cmn/eg_cmn_G_under_light.ptcl
   ref: bin/battle/waza/particle/eg_cmn/eg_cmn_G_Storm.ptcl
*/
void eg_cmn_G_under_light(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f9920ULL || rel >= 0x12f9ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f9ec0 size=16 callers=0 calls=0
*/
void sub_12f9ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f9ec0ULL || rel >= 0x12f9ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f9ed0 size=16 callers=0 calls=0
*/
void sub_12f9ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f9ed0ULL || rel >= 0x12f9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f9ee0 size=16 callers=0 calls=0
*/
void sub_12f9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f9ee0ULL || rel >= 0x12f9ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f9ef0 size=208 callers=36 calls=8
   calls: sub_762930, sub_762940, sub_763330, sub_763cc0, sub_7670a0, sub_767950, sub_768dd0, sub_768ef0
*/
void sub_12f9ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f9ef0ULL || rel >= 0x12f9fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012f9fc0 size=144 callers=3 calls=0
*/
void sub_12f9fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f9fc0ULL || rel >= 0x12fa050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa050 size=224 callers=1 calls=4
   calls: sub_7eef50, sub_7f05d0, sub_7f09c0, sub_7f2580
*/
void sub_12fa050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa050ULL || rel >= 0x12fa130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa130 size=176 callers=4 calls=6
   calls: sub_762930, sub_7670a0, sub_767540, sub_767950, sub_7692e0, sub_769330
*/
void sub_12fa130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa130ULL || rel >= 0x12fa1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa1e0 size=112 callers=2 calls=3
   calls: sub_12fead0, sub_762fe0, sub_767d90
*/
void sub_12fa1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa1e0ULL || rel >= 0x12fa250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa250 size=160 callers=6 calls=2
   calls: sub_763630, sub_763690
*/
void sub_12fa250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa250ULL || rel >= 0x12fa2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa2f0 size=176 callers=1 calls=1
   calls: sub_763630
*/
void sub_12fa2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa2f0ULL || rel >= 0x12fa3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa3a0 size=128 callers=3 calls=0
   ref: ZKN_TYPE_%03d
   ref: ZKN_TYPE_%03d_%03d
*/
void ZKN_TYPE__03d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa3a0ULL || rel >= 0x12fa420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa420 size=64 callers=3 calls=0
   ref: ZKN_FORM_%03d_%03d
   ref: ZKN_FORM_%03d_999
*/
void ZKN_FORM__03d_999(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa420ULL || rel >= 0x12fa460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa460 size=112 callers=10 calls=1
   calls: sub_137b970
*/
void sub_12fa460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa460ULL || rel >= 0x12fa4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa4d0 size=48 callers=1 calls=1
   calls: sub_137b970
*/
void sub_12fa4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa4d0ULL || rel >= 0x12fa500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa500 size=32 callers=4 calls=0
*/
void sub_12fa500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa500ULL || rel >= 0x12fa520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa520 size=16 callers=25 calls=0
*/
void sub_12fa520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa520ULL || rel >= 0x12fa530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa530 size=80 callers=2 calls=0
*/
void sub_12fa530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa530ULL || rel >= 0x12fa580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa580 size=272 callers=10 calls=3
   calls: is_force_overwrite, sub_12fa690, sub_12fc7b0
*/
void sub_12fa580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa580ULL || rel >= 0x12fa690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa690 size=336 callers=6 calls=2
   calls: sub_767950, sub_7847d0
*/
void sub_12fa690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa690ULL || rel >= 0x12fa7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa7e0 size=304 callers=2 calls=4
   calls: is_force_overwrite, placeTable, sub_12fa690, sub_12fc7b0
*/
void sub_12fa7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa7e0ULL || rel >= 0x12fa910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fa910 size=848 callers=2 calls=8
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_1106cd0, sub_1318f70, sub_5e2bc0, sub_5e7b30, unnamed_47
   ref: placeTable
   ref: zoneId
   ref: script/poke_memory_place.dat
   ref: placeLabel
*/
void placeTable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fa910ULL || rel >= 0x12fac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fac60 size=288 callers=17 calls=1
   calls: sub_12fa7e0
*/
void sub_12fac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fac60ULL || rel >= 0x12fad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fad80 size=304 callers=6 calls=3
   calls: is_force_overwrite, sub_12fa690, sub_12fc7b0
*/
void sub_12fad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fad80ULL || rel >= 0x12faeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012faeb0 size=304 callers=14 calls=3
   calls: is_force_overwrite, sub_12fa690, sub_12fc7b0
*/
void sub_12faeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12faeb0ULL || rel >= 0x12fafe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fafe0 size=288 callers=12 calls=3
   calls: is_force_overwrite, sub_12fa690, sub_12fc7b0
*/
void sub_12fafe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fafe0ULL || rel >= 0x12fb100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fb100 size=4336 callers=1 calls=15
   calls: is_force_overwrite, placeTable, sub_12fc7b0, sub_12fdd00, sub_134f3e0, sub_134f490, sub_134f600, sub_13533f0, sub_1354430, sub_65d700, sub_762930, sub_762d70
   ... +3 more
   ref: BOX_ITEM1
   ref: BOX_POKE1
   ref: BOX_ITEM2
   ref: BOX_DREAM
   ref: BOX_POKE2
   ref: BOX_PLACE
   ref: BOX_WAZA1
   ref: BOX_WAZA2
*/
void BOX_WAZA2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fb100ULL || rel >= 0x12fc1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fc1f0 size=1472 callers=19 calls=6
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_11069b0, sub_1106cd0
   ref: probablity
   ref: pokeMemoryTable
   ref: data_type
   ref: is_force_overwrite
   ref: message_label
   ref: feel%02d
*/
void is_force_overwrite(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fc1f0ULL || rel >= 0x12fc7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fc7b0 size=608 callers=30 calls=3
   calls: sub_12fcb70, sub_12fccb0, sub_12fcfe0
*/
void sub_12fc7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fc7b0ULL || rel >= 0x12fca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fca10 size=352 callers=1 calls=1
   calls: sub_12fa580
*/
void sub_12fca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fca10ULL || rel >= 0x12fcb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fcb70 size=320 callers=2 calls=2
   calls: sub_136b5e0, sub_763380
*/
void sub_12fcb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fcb70ULL || rel >= 0x12fccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fccb0 size=816 callers=1 calls=0
*/
void sub_12fccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fccb0ULL || rel >= 0x12fcfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fcfe0 size=320 callers=3 calls=2
   calls: sub_136b5e0, sub_7634d0
*/
void sub_12fcfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fcfe0ULL || rel >= 0x12fd120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fd120 size=1312 callers=2 calls=6
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_11069b0, sub_1106cd0
   ref: probablity
   ref: pokeMemoryTable
   ref: data_type
   ref: is_force_overwrite
   ref: message_label
   ref: feel%02d
*/
void is_force_overwrite_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fd120ULL || rel >= 0x12fd640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fd640 size=272 callers=0 calls=2
   calls: is_force_overwrite, sub_12fc7b0
*/
void sub_12fd640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fd640ULL || rel >= 0x12fd750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fd750 size=16 callers=0 calls=0
*/
void sub_12fd750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fd750ULL || rel >= 0x12fd760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fd760 size=16 callers=0 calls=0
*/
void sub_12fd760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fd760ULL || rel >= 0x12fd770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fd770 size=16 callers=0 calls=0
*/
void sub_12fd770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fd770ULL || rel >= 0x12fd780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fd780 size=272 callers=0 calls=2
   calls: is_force_overwrite, sub_12fc7b0
*/
void sub_12fd780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fd780ULL || rel >= 0x12fd890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fd890 size=16 callers=0 calls=0
*/
void sub_12fd890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fd890ULL || rel >= 0x12fd8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fd8a0 size=32 callers=0 calls=0
*/
void sub_12fd8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fd8a0ULL || rel >= 0x12fd8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fd8c0 size=32 callers=0 calls=0
*/
void sub_12fd8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fd8c0ULL || rel >= 0x12fd8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fd8e0 size=272 callers=0 calls=2
   calls: is_force_overwrite, sub_12fc7b0
*/
void sub_12fd8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fd8e0ULL || rel >= 0x12fd9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fd9f0 size=16 callers=0 calls=0
*/
void sub_12fd9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fd9f0ULL || rel >= 0x12fda00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fda00 size=32 callers=0 calls=0
*/
void sub_12fda00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fda00ULL || rel >= 0x12fda20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fda20 size=32 callers=0 calls=0
*/
void sub_12fda20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fda20ULL || rel >= 0x12fda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fda40 size=272 callers=0 calls=2
   calls: is_force_overwrite, sub_12fc7b0
*/
void sub_12fda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fda40ULL || rel >= 0x12fdb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fdb50 size=16 callers=0 calls=0
*/
void sub_12fdb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fdb50ULL || rel >= 0x12fdb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fdb60 size=32 callers=0 calls=0
*/
void sub_12fdb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fdb60ULL || rel >= 0x12fdb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fdb80 size=32 callers=0 calls=0
*/
void sub_12fdb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fdb80ULL || rel >= 0x12fdba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fdba0 size=272 callers=0 calls=2
   calls: is_force_overwrite, sub_12fc7b0
*/
void sub_12fdba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fdba0ULL || rel >= 0x12fdcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fdcb0 size=16 callers=0 calls=0
*/
void sub_12fdcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fdcb0ULL || rel >= 0x12fdcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fdcc0 size=32 callers=0 calls=0
*/
void sub_12fdcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fdcc0ULL || rel >= 0x12fdce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fdce0 size=32 callers=0 calls=0
*/
void sub_12fdce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fdce0ULL || rel >= 0x12fdd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fdd00 size=624 callers=1 calls=1
   calls: sub_12fdf70
*/
void sub_12fdd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fdd00ULL || rel >= 0x12fdf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fdf70 size=256 callers=1 calls=0
*/
void sub_12fdf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fdf70ULL || rel >= 0x12fe070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fe070 size=64 callers=0 calls=0
*/
void sub_12fe070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fe070ULL || rel >= 0x12fe0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fe0b0 size=544 callers=2 calls=3
   calls: sub_1307dd0, sub_5cfad0, sub_c4ac70
*/
void sub_12fe0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fe0b0ULL || rel >= 0x12fe2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fe2d0 size=96 callers=2 calls=1
   calls: sub_1308340
*/
void sub_12fe2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fe2d0ULL || rel >= 0x12fe330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fe330 size=144 callers=2 calls=0
*/
void sub_12fe330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fe330ULL || rel >= 0x12fe3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fe3c0 size=480 callers=1 calls=1
   calls: sub_67d360
*/
void sub_12fe3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fe3c0ULL || rel >= 0x12fe5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fe5a0 size=480 callers=1 calls=1
   calls: sub_67d360
*/
void sub_12fe5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fe5a0ULL || rel >= 0x12fe780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fe780 size=240 callers=3 calls=4
   calls: place_name_5, sub_12fe3c0, sub_12fe5a0, sub_13131d0
*/
void sub_12fe780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fe780ULL || rel >= 0x12fe870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fe870 size=608 callers=1 calls=2
   calls: sub_67b990, sub_67d080
*/
void sub_12fe870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fe870ULL || rel >= 0x12fead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fead0 size=64 callers=1 calls=0
*/
void sub_12fead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fead0ULL || rel >= 0x12feb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012feb10 size=32 callers=2 calls=0
*/
void sub_12feb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12feb10ULL || rel >= 0x12feb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012feb30 size=144 callers=1 calls=0
*/
void sub_12feb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12feb30ULL || rel >= 0x12febc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012febc0 size=144 callers=0 calls=1
   calls: sub_1c0
*/
void sub_12febc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12febc0ULL || rel >= 0x12fec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fec50 size=336 callers=8 calls=3
   calls: sub_5cfad0, sub_794290, sub_794330
   ref: Play_PV_EV_%03d_%02d_%02d
*/
void Play_PV_EV__03d__02d__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fec50ULL || rel >= 0x12feda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012feda0 size=128 callers=5 calls=1
   calls: sub_794330
   ref: Stop_Event_PM_Voice
*/
void Stop_Event_PM_Voice(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12feda0ULL || rel >= 0x12fee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fee20 size=224 callers=2 calls=3
   calls: sub_5cfad0, sub_794290, sub_794330
   ref: Stop_Event_PM_Voice
*/
void Stop_Event_PM_Voice_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fee20ULL || rel >= 0x12fef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fef00 size=208 callers=3 calls=1
   calls: sub_794040
   ref: Play_PV_%03d_%02d_%02d
*/
void Play_PV__03d__02d__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fef00ULL || rel >= 0x12fefd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fefd0 size=320 callers=1 calls=6
   calls: PM133_06, PM_03dVC_2, Play_PV_EV__03d__02d__02d, sub_5cfad0, sub_794290, sub_794330
   ref: Play_PV_EV_052_sp_roar
*/
void Play_PV_EV_052_sp_roar(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fefd0ULL || rel >= 0x12ff110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ff110 size=976 callers=1 calls=1
   calls: sub_794220
   ref: PM025_01
   ref: PM133_06
   ref: PM025_08
   ref: PM025_06
   ref: PM%03dVC
   ref: PM133_01
   ref: PM025_10
   ref: PM133_04
*/
void PM133_06(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ff110ULL || rel >= 0x12ff4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ff4e0 size=272 callers=1 calls=1
   calls: sub_794220
   ref: PM%03dVC
*/
void PM_03dVC_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ff4e0ULL || rel >= 0x12ff5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ff5f0 size=320 callers=1 calls=4
   calls: sub_762930, sub_762940, sub_76d610, sub_76d660
*/
void sub_12ff5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ff5f0ULL || rel >= 0x12ff730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ff730 size=1104 callers=1 calls=9
   calls: sub_764b40, sub_765dd0, sub_765ee0, sub_767080, sub_76d740, sub_76d790, sub_76d7b0, sub_785f60, sub_785fb0
*/
void sub_12ff730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ff730ULL || rel >= 0x12ffb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ffb80 size=288 callers=1 calls=1
   calls: sub_76d610
*/
void sub_12ffb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ffb80ULL || rel >= 0x12ffca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ffca0 size=112 callers=0 calls=0
*/
void sub_12ffca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ffca0ULL || rel >= 0x12ffd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ffd10 size=112 callers=0 calls=0
*/
void sub_12ffd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ffd10ULL || rel >= 0x12ffd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ffd80 size=16 callers=2 calls=0
*/
void sub_12ffd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ffd80ULL || rel >= 0x12ffd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ffd90 size=16 callers=1 calls=0
*/
void sub_12ffd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ffd90ULL || rel >= 0x12ffda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ffda0 size=96 callers=0 calls=4
   calls: sub_12ff730, sub_762930, sub_762940, sub_76d660
*/
void sub_12ffda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ffda0ULL || rel >= 0x12ffe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ffe00 size=320 callers=10 calls=2
   calls: sub_136b5b0, sub_eaf660
*/
void sub_12ffe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ffe00ULL || rel >= 0x12fff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012fff40 size=368 callers=4 calls=5
   calls: sub_12fa500, sub_135a1a0, sub_1379a10, sub_762930, sub_767950
*/
void sub_12fff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fff40ULL || rel >= 0x13000b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013000b0 size=464 callers=12 calls=4
   calls: sub_1300280, sub_1300420, sub_1379700, sub_767950
*/
void sub_13000b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13000b0ULL || rel >= 0x1300280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01300280 size=416 callers=2 calls=10
   calls: place_name_4, sub_1300800, sub_1300d10, sub_1301010, sub_1301170, sub_1301240, sub_1301490, sub_1301590, sub_5c63d0, sub_5c6450
*/
void sub_1300280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1300280ULL || rel >= 0x1300420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01300420 size=688 callers=2 calls=0
*/
void sub_1300420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1300420ULL || rel >= 0x13006d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013006d0 size=112 callers=0 calls=1
   calls: sub_12fff40
*/
void sub_13006d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13006d0ULL || rel >= 0x1300740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01300740 size=160 callers=0 calls=1
   calls: sub_1357640
*/
void sub_1300740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1300740ULL || rel >= 0x13007e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013007e0 size=32 callers=0 calls=0
*/
void sub_13007e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13007e0ULL || rel >= 0x1300800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01300800 size=688 callers=1 calls=5
   calls: sub_1318f70, sub_5cfad0, sub_5e2bc0, sub_5e7b30, unnamed_47
*/
void sub_1300800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1300800ULL || rel >= 0x1300ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01300ab0 size=464 callers=1 calls=5
   calls: sub_1318f70, sub_5cfad0, sub_5e2bc0, sub_5e7b30, unnamed_47
   ref: script/place_name.dat
*/
void place_name_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1300ab0ULL || rel >= 0x1300c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01300c80 size=96 callers=0 calls=0
*/
void sub_1300c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1300c80ULL || rel >= 0x1300ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01300ce0 size=16 callers=0 calls=0
*/
void sub_1300ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1300ce0ULL || rel >= 0x1300cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01300cf0 size=16 callers=0 calls=0
*/
void sub_1300cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1300cf0ULL || rel >= 0x1300d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01300d00 size=16 callers=0 calls=0
*/
void sub_1300d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1300d00ULL || rel >= 0x1300d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01300d10 size=384 callers=1 calls=10
   calls: sub_1300e90, sub_5c63d0, sub_5c6450, sub_762ff0, sub_7634d0, sub_764b40, sub_767950, sub_7692e0, sub_769330, sub_7c2d80
*/
void sub_1300d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1300d10ULL || rel >= 0x1300e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01300e90 size=384 callers=3 calls=11
   calls: sub_136b520, sub_136b580, sub_136b690, sub_67b990, sub_767690, sub_7676e0, sub_768e10, sub_768e50, sub_768ee0, sub_7692e0, sub_769330
*/
void sub_1300e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1300e90ULL || rel >= 0x1301010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01301010 size=352 callers=1 calls=9
   calls: sub_5c63d0, sub_5c6450, sub_762ff0, sub_7634d0, sub_764b40, sub_767950, sub_7692e0, sub_769330, sub_7c2d80
*/
void sub_1301010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1301010ULL || rel >= 0x1301170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01301170 size=208 callers=1 calls=4
   calls: sub_5c63d0, sub_5c6450, sub_7634d0, sub_767950
*/
void sub_1301170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1301170ULL || rel >= 0x1301240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01301240 size=592 callers=1 calls=10
   calls: sub_1300e90, sub_136b5e0, sub_5c63d0, sub_5c6450, sub_762ff0, sub_763380, sub_7634d0, sub_7692e0, sub_769330, sub_7c2d80
*/
void sub_1301240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1301240ULL || rel >= 0x1301490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01301490 size=256 callers=1 calls=3
   calls: sub_7634d0, sub_767950, sub_7692e0
*/
void sub_1301490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1301490ULL || rel >= 0x1301590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01301590 size=352 callers=2 calls=8
   calls: sub_1300e90, sub_5c63d0, sub_5c6450, sub_762ff0, sub_7634d0, sub_7692e0, sub_769330, sub_7c2d80
*/
void sub_1301590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1301590ULL || rel >= 0x13016f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013016f0 size=240 callers=1 calls=6
   calls: sub_5c63d0, sub_5c6450, sub_762ff0, sub_7634d0, sub_764b40, sub_7c2d80
*/
void sub_13016f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13016f0ULL || rel >= 0x13017e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013017e0 size=160 callers=2 calls=2
   calls: sub_1301880, sub_7847d0
*/
void sub_13017e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13017e0ULL || rel >= 0x1301880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01301880 size=176 callers=2 calls=4
   calls: sub_762930, sub_762940, sub_765e60, sub_767950
*/
void sub_1301880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1301880ULL || rel >= 0x1301930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01301930 size=128 callers=1 calls=3
   calls: sub_762930, sub_763130, sub_768270
*/
void sub_1301930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1301930ULL || rel >= 0x13019b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013019b0 size=128 callers=0 calls=3
   calls: sub_762930, sub_763130, sub_768270
*/
void sub_13019b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13019b0ULL || rel >= 0x1301a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01301a30 size=480 callers=3 calls=5
   calls: sub_762930, sub_762940, sub_763d00, sub_763d50, sub_768270
*/
void sub_1301a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1301a30ULL || rel >= 0x1301c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01301c10 size=96 callers=2 calls=2
   calls: sub_1301a30, sub_7847d0
*/
void sub_1301c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1301c10ULL || rel >= 0x1301c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01301c70 size=1440 callers=1 calls=12
   calls: sub_1302e60, sub_762930, sub_764b40, sub_764c30, sub_7651c0, sub_765520, sub_765ab0, sub_765ae0, sub_765b70, sub_765d90, sub_765de0, sub_786420
*/
void sub_1301c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1301c70ULL || rel >= 0x1302210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01302210 size=112 callers=1 calls=3
   calls: sub_1301c70, sub_7863b0, sub_786410
*/
void sub_1302210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1302210ULL || rel >= 0x1302280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01302280 size=2928 callers=1 calls=18
   calls: sub_12f6b20, sub_762930, sub_764b40, sub_764c30, sub_764df0, sub_7651c0, sub_765520, sub_7655f0, sub_765720, sub_765ab0, sub_765ad0, sub_765ae0
   ... +6 more
*/
void sub_1302280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1302280ULL || rel >= 0x1302df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01302df0 size=112 callers=2 calls=3
   calls: sub_1302280, sub_7863b0, sub_786410
*/
void sub_1302df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1302df0ULL || rel >= 0x1302e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01302e60 size=224 callers=6 calls=2
   calls: sub_767720, sub_786420
*/
void sub_1302e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1302e60ULL || rel >= 0x1302f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01302f40 size=608 callers=2 calls=5
   calls: sub_762930, sub_764c30, sub_7863b0, sub_786410, sub_786420
*/
void sub_1302f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1302f40ULL || rel >= 0x13031a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013031a0 size=656 callers=2 calls=5
   calls: sub_764c30, sub_767720, sub_7863b0, sub_786410, sub_786420
*/
void sub_13031a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13031a0ULL || rel >= 0x1303430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01303430 size=192 callers=2 calls=2
   calls: sub_7635d0, sub_768ef0
*/
void sub_1303430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1303430ULL || rel >= 0x13034f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013034f0 size=768 callers=0 calls=0
*/
void sub_13034f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13034f0ULL || rel >= 0x13037f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013037f0 size=176 callers=1 calls=4
   calls: sub_1301930, sub_762930, sub_762940, sub_768270
*/
void sub_13037f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13037f0ULL || rel >= 0x13038a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013038a0 size=112 callers=1 calls=6
   calls: sub_13037f0, sub_136b5b0, sub_7628f0, sub_767430, sub_767940, sub_767950
*/
void sub_13038a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13038a0ULL || rel >= 0x1303910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01303910 size=304 callers=0 calls=5
   calls: sub_1303a40, sub_13042f0, sub_1304640, sub_78f150, sub_e7c0f0
   ref: View_Top
   ref: View_Loading
*/
void View_Loading(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1303910ULL || rel >= 0x1303a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01303a40 size=432 callers=1 calls=3
   calls: sub_13041c0, sub_e7c160, sub_e7c210
*/
void sub_1303a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1303a40ULL || rel >= 0x1303bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01303bf0 size=64 callers=0 calls=2
   calls: sub_e7f200, sub_e7f440
*/
void sub_1303bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1303bf0ULL || rel >= 0x1303c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01303c30 size=16 callers=0 calls=0
*/
void sub_1303c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1303c30ULL || rel >= 0x1303c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01303c40 size=16 callers=0 calls=0
*/
void sub_1303c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1303c40ULL || rel >= 0x1303c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01303c50 size=224 callers=0 calls=2
   calls: sub_1304990, sub_e7c160
*/
void sub_1303c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1303c50ULL || rel >= 0x1303d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01303d30 size=16 callers=0 calls=0
*/
void sub_1303d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1303d30ULL || rel >= 0x1303d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01303d40 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1303d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1303d40ULL || rel >= 0x1303ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01303ee0 size=16 callers=0 calls=0
*/
void sub_1303ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1303ee0ULL || rel >= 0x1303ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01303ef0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1303ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1303ef0ULL || rel >= 0x1303fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01303fa0 size=16 callers=0 calls=0
*/
void sub_1303fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1303fa0ULL || rel >= 0x1303fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01303fb0 size=16 callers=0 calls=0
*/
void sub_1303fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1303fb0ULL || rel >= 0x1303fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01303fc0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1303fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1303fc0ULL || rel >= 0x1304070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304070 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1304070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304070ULL || rel >= 0x1304120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304120 size=16 callers=0 calls=0
*/
void sub_1304120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304120ULL || rel >= 0x1304130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304130 size=16 callers=0 calls=0
*/
void sub_1304130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304130ULL || rel >= 0x1304140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304140 size=16 callers=0 calls=0
*/
void sub_1304140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304140ULL || rel >= 0x1304150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304150 size=16 callers=0 calls=0
*/
void sub_1304150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304150ULL || rel >= 0x1304160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304160 size=16 callers=0 calls=0
*/
void sub_1304160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304160ULL || rel >= 0x1304170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304170 size=16 callers=0 calls=0
*/
void sub_1304170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304170ULL || rel >= 0x1304180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304180 size=16 callers=0 calls=0
*/
void sub_1304180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304180ULL || rel >= 0x1304190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304190 size=16 callers=0 calls=0
*/
void sub_1304190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304190ULL || rel >= 0x13041a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013041a0 size=16 callers=0 calls=0
*/
void sub_13041a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13041a0ULL || rel >= 0x13041b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013041b0 size=16 callers=0 calls=0
*/
void sub_13041b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13041b0ULL || rel >= 0x13041c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013041c0 size=304 callers=1 calls=0
*/
void sub_13041c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13041c0ULL || rel >= 0x13042f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013042f0 size=288 callers=1 calls=2
   calls: sub_1304410, sub_e809c0
*/
void sub_13042f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13042f0ULL || rel >= 0x1304410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304410 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1304410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304410ULL || rel >= 0x1304640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304640 size=288 callers=1 calls=2
   calls: sub_1304760, sub_e809c0
*/
void sub_1304640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304640ULL || rel >= 0x1304760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304760 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1304760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304760ULL || rel >= 0x1304990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304990 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1304990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304990ULL || rel >= 0x1304ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304ad0 size=560 callers=0 calls=6
   calls: sub_1305120, sub_1305270, sub_c39c40, sub_c444b0, sub_d0c0, sub_e806b0
   ref: View_Top
   ref: View_Loading
*/
void View_Loading_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304ad0ULL || rel >= 0x1304d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304d00 size=608 callers=0 calls=8
   calls: anime_L_loading_00_in, sub_b4c080, sub_c44310, sub_c44410, sub_c444b0, sub_c445f0, sub_e806b0, sub_f0a630
*/
void sub_1304d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304d00ULL || rel >= 0x1304f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304f60 size=16 callers=0 calls=0
*/
void sub_1304f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304f60ULL || rel >= 0x1304f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304f70 size=16 callers=0 calls=0
*/
void sub_1304f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304f70ULL || rel >= 0x1304f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304f80 size=16 callers=0 calls=0
*/
void sub_1304f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304f80ULL || rel >= 0x1304f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304f90 size=16 callers=0 calls=0
*/
void sub_1304f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304f90ULL || rel >= 0x1304fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304fa0 size=16 callers=0 calls=0
*/
void sub_1304fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304fa0ULL || rel >= 0x1304fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304fb0 size=16 callers=0 calls=0
*/
void sub_1304fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304fb0ULL || rel >= 0x1304fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304fc0 size=16 callers=0 calls=0
*/
void sub_1304fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304fc0ULL || rel >= 0x1304fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304fd0 size=16 callers=0 calls=0
*/
void sub_1304fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304fd0ULL || rel >= 0x1304fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304fe0 size=16 callers=0 calls=0
*/
void sub_1304fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304fe0ULL || rel >= 0x1304ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01304ff0 size=304 callers=0 calls=0
*/
void sub_1304ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1304ff0ULL || rel >= 0x1305120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305120 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1305120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305120ULL || rel >= 0x1305270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305270 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1305270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305270ULL || rel >= 0x13053c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013053c0 size=16 callers=0 calls=0
   ref: anime_L_loading_00_keep
*/
void anime_L_loading_00_keep(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13053c0ULL || rel >= 0x13053d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013053d0 size=16 callers=1 calls=0
   ref: anime_L_loading_00_in
*/
void anime_L_loading_00_in(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13053d0ULL || rel >= 0x13053e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013053e0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/loading/bin/loading_00_lyt.bin
*/
void loading_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13053e0ULL || rel >= 0x13054f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013054f0 size=16 callers=0 calls=0
*/
void sub_13054f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13054f0ULL || rel >= 0x1305500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305500 size=16 callers=0 calls=0
*/
void sub_1305500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305500ULL || rel >= 0x1305510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305510 size=16 callers=0 calls=0
*/
void sub_1305510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305510ULL || rel >= 0x1305520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305520 size=16 callers=0 calls=0
*/
void sub_1305520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305520ULL || rel >= 0x1305530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305530 size=16 callers=0 calls=0
*/
void sub_1305530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305530ULL || rel >= 0x1305540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305540 size=16 callers=0 calls=0
*/
void sub_1305540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305540ULL || rel >= 0x1305550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305550 size=16 callers=0 calls=0
*/
void sub_1305550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305550ULL || rel >= 0x1305560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305560 size=16 callers=0 calls=0
*/
void sub_1305560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305560ULL || rel >= 0x1305570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305570 size=304 callers=0 calls=0
*/
void sub_1305570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305570ULL || rel >= 0x13056a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013056a0 size=16 callers=0 calls=0
*/
void sub_13056a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13056a0ULL || rel >= 0x13056b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013056b0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/gflogo/bin/gflogo_00_lyt.bin
*/
void gflogo_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13056b0ULL || rel >= 0x13057c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013057c0 size=16 callers=0 calls=0
*/
void sub_13057c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13057c0ULL || rel >= 0x13057d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013057d0 size=16 callers=0 calls=0
*/
void sub_13057d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13057d0ULL || rel >= 0x13057e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013057e0 size=16 callers=0 calls=0
*/
void sub_13057e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13057e0ULL || rel >= 0x13057f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013057f0 size=16 callers=0 calls=0
*/
void sub_13057f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13057f0ULL || rel >= 0x1305800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305800 size=16 callers=0 calls=0
*/
void sub_1305800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305800ULL || rel >= 0x1305810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305810 size=16 callers=0 calls=0
*/
void sub_1305810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305810ULL || rel >= 0x1305820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305820 size=16 callers=0 calls=0
*/
void sub_1305820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305820ULL || rel >= 0x1305830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305830 size=16 callers=0 calls=0
*/
void sub_1305830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305830ULL || rel >= 0x1305840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305840 size=304 callers=0 calls=0
*/
void sub_1305840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305840ULL || rel >= 0x1305970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305970 size=352 callers=1 calls=1
   calls: sub_67b990
*/
void sub_1305970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305970ULL || rel >= 0x1305ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305ad0 size=112 callers=0 calls=0
*/
void sub_1305ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305ad0ULL || rel >= 0x1305b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305b40 size=112 callers=0 calls=0
*/
void sub_1305b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305b40ULL || rel >= 0x1305bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305bb0 size=112 callers=0 calls=0
*/
void sub_1305bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305bb0ULL || rel >= 0x1305c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305c20 size=112 callers=0 calls=0
*/
void sub_1305c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305c20ULL || rel >= 0x1305c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305c90 size=160 callers=5 calls=4
   calls: sub_130b1d0, sub_67bea0, sub_67bf00, sub_67bfa0
*/
void sub_1305c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305c90ULL || rel >= 0x1305d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305d30 size=112 callers=1 calls=4
   calls: sub_130b1d0, sub_67bea0, sub_67bf00, sub_67bfa0
*/
void sub_1305d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305d30ULL || rel >= 0x1305da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305da0 size=16 callers=8 calls=0
*/
void sub_1305da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305da0ULL || rel >= 0x1305db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305db0 size=16 callers=5 calls=0
*/
void sub_1305db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305db0ULL || rel >= 0x1305dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305dc0 size=48 callers=17 calls=0
*/
void sub_1305dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305dc0ULL || rel >= 0x1305df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305df0 size=16 callers=6 calls=0
*/
void sub_1305df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305df0ULL || rel >= 0x1305e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01305e00 size=544 callers=2 calls=0
*/
void sub_1305e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1305e00ULL || rel >= 0x1306020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01306020 size=256 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1306020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1306020ULL || rel >= 0x1306120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01306120 size=256 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1306120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1306120ULL || rel >= 0x1306220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01306220 size=64 callers=1 calls=1
   calls: sub_7c2280
*/
void sub_1306220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1306220ULL || rel >= 0x1306260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01306260 size=2656 callers=0 calls=4
   calls: sub_1306f20, sub_5dd790, sub_5e26a0, sub_5e2930
   ref: bin/message/grammar/Simp_Chinese.dat
   ref: bin/message/grammar/Italian.dat
   ref: bin/message/grammar/English.dat
   ref: bin/message/grammar/Spanish.dat
   ref: bin/message/grammar/French.dat
   ref: bin/message/grammar/German.dat
   ref: bin/message/grammar/Trad_Chinese.dat
   ref: bin/message/grammar/Korean.dat
*/
void Trad_Chinese(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1306260ULL || rel >= 0x1306cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01306cc0 size=32 callers=1 calls=0
*/
void sub_1306cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1306cc0ULL || rel >= 0x1306ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01306ce0 size=16 callers=1 calls=0
*/
void sub_1306ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1306ce0ULL || rel >= 0x1306cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01306cf0 size=560 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1306cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1306cf0ULL || rel >= 0x1306f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01306f20 size=320 callers=123 calls=3
   calls: sub_1307aa0, sub_5e6180, sub_d0c0
*/
void sub_1306f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1306f20ULL || rel >= 0x1307060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307060 size=112 callers=4 calls=0
*/
void sub_1307060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307060ULL || rel >= 0x13070d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013070d0 size=304 callers=0 calls=2
   calls: sub_1305dc0, sub_1307200
*/
void sub_13070d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13070d0ULL || rel >= 0x1307200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307200 size=496 callers=1 calls=3
   calls: sub_1305dc0, sub_67c120, sub_67c270
*/
void sub_1307200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307200ULL || rel >= 0x13073f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013073f0 size=656 callers=0 calls=1
   calls: sub_1305dc0
*/
void sub_13073f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13073f0ULL || rel >= 0x1307680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307680 size=192 callers=1 calls=1
   calls: sub_1305dc0
*/
void sub_1307680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307680ULL || rel >= 0x1307740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307740 size=176 callers=0 calls=1
   calls: sub_1305dc0
*/
void sub_1307740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307740ULL || rel >= 0x13077f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013077f0 size=32 callers=3 calls=0
*/
void sub_13077f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13077f0ULL || rel >= 0x1307810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307810 size=80 callers=4 calls=0
*/
void sub_1307810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307810ULL || rel >= 0x1307860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307860 size=240 callers=2 calls=2
   calls: sub_1307810, sub_1307950
*/
void sub_1307860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307860ULL || rel >= 0x1307950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307950 size=80 callers=1 calls=0
*/
void sub_1307950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307950ULL || rel >= 0x13079a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013079a0 size=16 callers=0 calls=0
*/
void sub_13079a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13079a0ULL || rel >= 0x13079b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013079b0 size=112 callers=0 calls=0
*/
void sub_13079b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13079b0ULL || rel >= 0x1307a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307a20 size=16 callers=0 calls=0
*/
void sub_1307a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307a20ULL || rel >= 0x1307a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307a30 size=112 callers=0 calls=0
*/
void sub_1307a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307a30ULL || rel >= 0x1307aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307aa0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_1307aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307aa0ULL || rel >= 0x1307b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307b20 size=144 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_1307b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307b20ULL || rel >= 0x1307bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307bb0 size=464 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1307bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307bb0ULL || rel >= 0x1307d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307d80 size=16 callers=0 calls=0
*/
void sub_1307d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307d80ULL || rel >= 0x1307d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307d90 size=16 callers=0 calls=0
*/
void sub_1307d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307d90ULL || rel >= 0x1307da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307da0 size=16 callers=0 calls=0
*/
void sub_1307da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307da0ULL || rel >= 0x1307db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307db0 size=16 callers=0 calls=0
*/
void sub_1307db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307db0ULL || rel >= 0x1307dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307dc0 size=16 callers=0 calls=0
*/
void sub_1307dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307dc0ULL || rel >= 0x1307dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307dd0 size=16 callers=35 calls=0
*/
void sub_1307dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307dd0ULL || rel >= 0x1307de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01307de0 size=1056 callers=18 calls=8
   calls: sub_1308200, sub_130be10, sub_5dd790, sub_5e26a0, sub_5e2930, sub_d0c0, sub_e98170, unnamed_47
*/
void sub_1307de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1307de0ULL || rel >= 0x1308200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01308200 size=320 callers=11 calls=1
   calls: sub_67cbd0
*/
void sub_1308200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1308200ULL || rel >= 0x1308340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01308340 size=96 callers=75 calls=1
   calls: sub_1308200
*/
void sub_1308340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1308340ULL || rel >= 0x13083a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013083a0 size=64 callers=63 calls=0
*/
void sub_13083a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13083a0ULL || rel >= 0x13083e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013083e0 size=240 callers=0 calls=0
*/
void sub_13083e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13083e0ULL || rel >= 0x13084d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013084d0 size=16 callers=0 calls=0
*/
void sub_13084d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13084d0ULL || rel >= 0x13084e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013084e0 size=16 callers=0 calls=0
*/
void sub_13084e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13084e0ULL || rel >= 0x13084f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013084f0 size=1088 callers=2 calls=7
   calls: sub_1308930, sub_13118e0, sub_177dd40, sub_67b990, sub_67d490, sub_67ea40, sub_67ea50
*/
void sub_13084f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13084f0ULL || rel >= 0x1308930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01308930 size=176 callers=2 calls=1
   calls: sub_7c2280
*/
void sub_1308930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1308930ULL || rel >= 0x13089e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013089e0 size=320 callers=0 calls=2
   calls: sub_130eda0, sub_177dd60
*/
void sub_13089e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13089e0ULL || rel >= 0x1308b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01308b20 size=16 callers=0 calls=0
*/
void sub_1308b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1308b20ULL || rel >= 0x1308b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01308b30 size=16 callers=0 calls=0
*/
void sub_1308b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1308b30ULL || rel >= 0x1308b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01308b40 size=16 callers=0 calls=0
*/
void sub_1308b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1308b40ULL || rel >= 0x1308b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01308b50 size=256 callers=0 calls=4
   calls: sub_67dcb0, sub_67ea10, sub_67ea20, sub_ea4740
*/
void sub_1308b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1308b50ULL || rel >= 0x1308c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01308c50 size=208 callers=0 calls=3
   calls: sub_17ac790, sub_17b7510, sub_67d750
   ref: g2d_fw
*/
void g2d_fw(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1308c50ULL || rel >= 0x1308d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01308d20 size=208 callers=0 calls=3
   calls: sub_17ac790, sub_17b7510, sub_67d760
   ref: g2d_fw
*/
void g2d_fw_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1308d20ULL || rel >= 0x1308df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01308df0 size=48 callers=0 calls=1
   calls: sub_130b1d0
*/
void sub_1308df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1308df0ULL || rel >= 0x1308e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01308e20 size=928 callers=0 calls=19
   calls: no_short_2, sub_13091d0, sub_1309280, sub_1309400, sub_130a6d0, sub_130abf0, sub_130ac10, sub_130ac20, sub_130b660, sub_130e050, sub_130e200, sub_130ece0
   ... +7 more
*/
void sub_1308e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1308e20ULL || rel >= 0x13091c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013091c0 size=16 callers=2 calls=0
*/
void sub_13091c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13091c0ULL || rel >= 0x13091d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013091d0 size=176 callers=3 calls=6
   calls: sub_130e1b0, sub_130e1d0, sub_130ea60, sub_17ac790, sub_17b7510, sub_17b7520
*/
void sub_13091d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13091d0ULL || rel >= 0x1309280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01309280 size=384 callers=2 calls=8
   calls: sub_1305da0, sub_1305dc0, sub_1305df0, sub_130a6d0, sub_130abf0, sub_130e050, sub_67c470, sub_7c2b60
*/
void sub_1309280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1309280ULL || rel >= 0x1309400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01309400 size=1232 callers=1 calls=9
   calls: sub_130a6d0, sub_130abf0, sub_130b660, sub_17b5b70, sub_67bdb0, sub_67bdc0, sub_67bdd0, sub_67c470, sub_67d910
*/
void sub_1309400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1309400ULL || rel >= 0x13098d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013098d0 size=240 callers=0 calls=2
   calls: sub_794330, sub_ea4760
   ref: Play_UI_Message
*/
void Play_UI_Message_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13098d0ULL || rel >= 0x13099c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013099c0 size=112 callers=0 calls=1
   calls: sub_ea4760
*/
void sub_13099c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13099c0ULL || rel >= 0x1309a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01309a30 size=48 callers=0 calls=0
*/
void sub_1309a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1309a30ULL || rel >= 0x1309a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01309a60 size=16 callers=2 calls=0
*/
void sub_1309a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1309a60ULL || rel >= 0x1309a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01309a70 size=16 callers=0 calls=0
*/
void sub_1309a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1309a70ULL || rel >= 0x1309a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01309a80 size=16 callers=0 calls=0
*/
void sub_1309a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1309a80ULL || rel >= 0x1309a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01309a90 size=16 callers=2 calls=0
*/
void sub_1309a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1309a90ULL || rel >= 0x1309aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01309aa0 size=16 callers=0 calls=0
*/
void sub_1309aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1309aa0ULL || rel >= 0x1309ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01309ab0 size=240 callers=0 calls=2
   calls: sub_130abd0, sub_130abe0
*/
void sub_1309ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1309ab0ULL || rel >= 0x1309ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01309ba0 size=80 callers=0 calls=2
   calls: sub_130b660, sub_67d910
*/
void sub_1309ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1309ba0ULL || rel >= 0x1309bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01309bf0 size=592 callers=0 calls=14
   calls: sub_1305da0, sub_1305dc0, sub_1305df0, sub_1309e40, sub_130a6d0, sub_130abf0, sub_130ac20, sub_130e050, sub_130ece0, sub_14d4b00, sub_17792b0, sub_1779310
   ... +2 more
*/
void sub_1309bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1309bf0ULL || rel >= 0x1309e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01309e40 size=656 callers=1 calls=6
   calls: sub_1309280, sub_130ac20, sub_1779310, sub_1783b70, sub_67c360, sub_67c470
*/
void sub_1309e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1309e40ULL || rel >= 0x130a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a0d0 size=384 callers=0 calls=10
   calls: sub_1305da0, sub_1305dc0, sub_1305df0, sub_130abf0, sub_130e050, sub_130ece0, sub_17792b0, sub_1779310, sub_67c470, sub_7c2b60
*/
void sub_130a0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a0d0ULL || rel >= 0x130a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a250 size=112 callers=0 calls=2
   calls: sub_13091d0, sub_67bfc0
*/
void sub_130a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a250ULL || rel >= 0x130a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a2c0 size=32 callers=0 calls=0
*/
void sub_130a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a2c0ULL || rel >= 0x130a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a2e0 size=96 callers=0 calls=0
*/
void sub_130a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a2e0ULL || rel >= 0x130a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a340 size=48 callers=0 calls=1
   calls: sub_177dd60
*/
void sub_130a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a340ULL || rel >= 0x130a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a370 size=416 callers=2 calls=1
   calls: sub_177dd40
*/
void sub_130a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a370ULL || rel >= 0x130a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a510 size=112 callers=0 calls=0
*/
void sub_130a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a510ULL || rel >= 0x130a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a580 size=112 callers=0 calls=0
*/
void sub_130a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a580ULL || rel >= 0x130a5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a5f0 size=112 callers=0 calls=0
*/
void sub_130a5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a5f0ULL || rel >= 0x130a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a660 size=112 callers=0 calls=0
*/
void sub_130a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a660ULL || rel >= 0x130a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a6d0 size=32 callers=17 calls=1
   calls: sub_67c490
*/
void sub_130a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a6d0ULL || rel >= 0x130a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a6f0 size=96 callers=2 calls=1
   calls: sub_67c490
*/
void sub_130a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a6f0ULL || rel >= 0x130a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a750 size=96 callers=1 calls=1
   calls: sub_67c490
*/
void sub_130a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a750ULL || rel >= 0x130a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a7b0 size=96 callers=2 calls=1
   calls: sub_67c490
*/
void sub_130a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a7b0ULL || rel >= 0x130a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a810 size=96 callers=2 calls=1
   calls: sub_67c490
*/
void sub_130a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a810ULL || rel >= 0x130a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a870 size=96 callers=2 calls=1
   calls: sub_67c490
*/
void sub_130a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a870ULL || rel >= 0x130a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a8d0 size=144 callers=2 calls=1
   calls: sub_67c490
*/
void sub_130a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a8d0ULL || rel >= 0x130a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a960 size=96 callers=1 calls=1
   calls: sub_67c490
*/
void sub_130a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a960ULL || rel >= 0x130a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130a9c0 size=64 callers=7 calls=1
   calls: sub_67c490
*/
void sub_130a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130a9c0ULL || rel >= 0x130aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130aa00 size=64 callers=1 calls=1
   calls: sub_67c490
*/
void sub_130aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130aa00ULL || rel >= 0x130aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130aa40 size=112 callers=1 calls=1
   calls: sub_67c490
*/
void sub_130aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130aa40ULL || rel >= 0x130aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130aab0 size=64 callers=2 calls=1
   calls: sub_67c490
*/
void sub_130aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130aab0ULL || rel >= 0x130aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130aaf0 size=64 callers=1 calls=1
   calls: sub_67c490
*/
void sub_130aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130aaf0ULL || rel >= 0x130ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ab30 size=64 callers=1 calls=1
   calls: sub_67c490
*/
void sub_130ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ab30ULL || rel >= 0x130ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ab70 size=64 callers=1 calls=1
   calls: sub_67c490
*/
void sub_130ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ab70ULL || rel >= 0x130abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130abb0 size=32 callers=1 calls=1
   calls: sub_67c490
*/
void sub_130abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130abb0ULL || rel >= 0x130abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130abd0 size=16 callers=1 calls=0
*/
void sub_130abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130abd0ULL || rel >= 0x130abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130abe0 size=16 callers=1 calls=0
*/
void sub_130abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130abe0ULL || rel >= 0x130abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130abf0 size=32 callers=13 calls=1
   calls: sub_67c490
*/
void sub_130abf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130abf0ULL || rel >= 0x130ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ac10 size=16 callers=3 calls=0
*/
void sub_130ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ac10ULL || rel >= 0x130ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ac20 size=16 callers=14 calls=0
*/
void sub_130ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ac20ULL || rel >= 0x130ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ac30 size=288 callers=3 calls=2
   calls: sub_67bf00, sub_67bfa0
*/
void sub_130ac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ac30ULL || rel >= 0x130ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ad50 size=80 callers=3 calls=1
   calls: sub_67bdb0
*/
void sub_130ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ad50ULL || rel >= 0x130ada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ada0 size=16 callers=3 calls=0
*/
void sub_130ada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ada0ULL || rel >= 0x130adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130adb0 size=912 callers=0 calls=16
   calls: sub_13091c0, sub_130b1e0, sub_130b320, sub_130e050, sub_130e200, sub_130ece0, sub_1311c60, sub_17ac790, sub_17b5b70, sub_17b7510, sub_17b7520, sub_17b76e0
   ... +4 more
   ref: g2d_fw
   ref: no_short
*/
void no_short(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130adb0ULL || rel >= 0x130b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130b140 size=64 callers=1 calls=1
   calls: sub_130bf50
*/
void sub_130b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130b140ULL || rel >= 0x130b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130b180 size=80 callers=0 calls=1
   calls: sub_67bdb0
*/
void sub_130b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130b180ULL || rel >= 0x130b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130b1d0 size=16 callers=18 calls=0
*/
void sub_130b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130b1d0ULL || rel >= 0x130b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130b1e0 size=208 callers=1 calls=6
   calls: sub_130e1b0, sub_130e1d0, sub_130ea60, sub_17ac790, sub_17b7510, sub_17b7520
*/
void sub_130b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130b1e0ULL || rel >= 0x130b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130b2b0 size=112 callers=1 calls=1
   calls: sub_17ac790
   ref: no_short
*/
void no_short_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130b2b0ULL || rel >= 0x130b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130b320 size=624 callers=1 calls=8
   calls: sub_1305da0, sub_1305dc0, sub_1305df0, sub_130e050, sub_130ea60, sub_67c470, sub_67c490, sub_7c2b60
*/
void sub_130b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130b320ULL || rel >= 0x130b590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130b590 size=208 callers=0 calls=3
   calls: sub_17ac790, sub_17b7510, sub_67bdb0
   ref: g2d_fw
   ref: no_short
*/
void no_short_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130b590ULL || rel >= 0x130b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130b660 size=64 callers=3 calls=1
   calls: sub_67bdb0
*/
void sub_130b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130b660ULL || rel >= 0x130b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130b6a0 size=16 callers=2 calls=0
*/
void sub_130b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130b6a0ULL || rel >= 0x130b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130b6b0 size=672 callers=60 calls=6
   calls: sub_130b950, sub_130ba80, sub_130bbb0, sub_130bce0, sub_5bbb30, sub_5e41e0
   ref: bin/message/English/
   ref: bin/message/Trad_Chinese/
   ref: bin/message/French/
   ref: bin/message/Italian/
   ref: bin/message/JPN/
   ref: bin/message/German/
   ref: bin/message/JPN_KANJI/
   ref: bin/message/Spanish/
*/
void unnamed_47(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130b6b0ULL || rel >= 0x130b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130b950 size=304 callers=1 calls=3
   calls: sub_130c030, sub_5e6180, sub_d0c0
*/
void sub_130b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130b950ULL || rel >= 0x130ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ba80 size=304 callers=3 calls=3
   calls: sub_130c0b0, sub_5e6180, sub_d0c0
*/
void sub_130ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ba80ULL || rel >= 0x130bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130bbb0 size=304 callers=3 calls=3
   calls: sub_130c130, sub_5e6180, sub_d0c0
*/
void sub_130bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130bbb0ULL || rel >= 0x130bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130bce0 size=304 callers=2 calls=3
   calls: sub_130c1b0, sub_5e6180, sub_d0c0
*/
void sub_130bce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130bce0ULL || rel >= 0x130be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130be10 size=320 callers=22 calls=3
   calls: sub_130c230, sub_8c2c10, unnamed_47
*/
void sub_130be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130be10ULL || rel >= 0x130bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130bf50 size=224 callers=1 calls=1
   calls: sub_130a370
*/
void sub_130bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130bf50ULL || rel >= 0x130c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130c030 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_130c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130c030ULL || rel >= 0x130c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130c0b0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_130c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130c0b0ULL || rel >= 0x130c130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130c130 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_130c130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130c130ULL || rel >= 0x130c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130c1b0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_130c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130c1b0ULL || rel >= 0x130c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130c230 size=672 callers=1 calls=4
   calls: sub_130c4d0, sub_130c580, sub_130c630, sub_5e6180
*/
void sub_130c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130c230ULL || rel >= 0x130c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130c4d0 size=176 callers=3 calls=1
   calls: sub_d0c0
*/
void sub_130c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130c4d0ULL || rel >= 0x130c580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130c580 size=176 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_130c580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130c580ULL || rel >= 0x130c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130c630 size=144 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_130c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130c630ULL || rel >= 0x130c6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130c6c0 size=112 callers=0 calls=1
   calls: sub_177dd40
*/
void sub_130c6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130c6c0ULL || rel >= 0x130c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130c730 size=976 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_130c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130c730ULL || rel >= 0x130cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130cb00 size=1264 callers=1 calls=4
   calls: font_data, sub_130d1a0, sub_65f1c0, sub_67b990
*/
void sub_130cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130cb00ULL || rel >= 0x130cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130cff0 size=432 callers=1 calls=4
   calls: or_font_BFOTF, sub_130dae0, sub_5dd790, sub_5e2930
   ref: bin/font/font_data.prmb
*/
void font_data(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130cff0ULL || rel >= 0x130d1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130d1a0 size=144 callers=2 calls=1
   calls: sub_130ff50
*/
void sub_130d1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130d1a0ULL || rel >= 0x130d230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130d230 size=2224 callers=0 calls=9
   calls: sub_130dc10, sub_130f800, sub_1310000, sub_1310060, sub_1310150, sub_1310160, sub_13106a0, sub_6814f0, sub_d0c0
   ref: system_huge_jpn.fcpx
   ref: system42_jpn.fcpx
   ref: system54_jpn.fcpx
   ref: system32_jpn.fcpx
   ref: ScFontB
*/
void ScFontB(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130d230ULL || rel >= 0x130dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130dae0 size=304 callers=2 calls=3
   calls: sub_130f780, sub_5e6180, sub_d0c0
*/
void sub_130dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130dae0ULL || rel >= 0x130dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130dc10 size=1088 callers=10 calls=8
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_11067c0, sub_1106cd0, sub_1106f30, sub_1310520
*/
void sub_130dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130dc10ULL || rel >= 0x130e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130e050 size=64 callers=11 calls=0
*/
void sub_130e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130e050ULL || rel >= 0x130e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130e090 size=288 callers=1 calls=2
   calls: sub_1310140, sub_13107e0
*/
void sub_130e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130e090ULL || rel >= 0x130e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130e1b0 size=32 callers=3 calls=0
*/
void sub_130e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130e1b0ULL || rel >= 0x130e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130e1d0 size=48 callers=3 calls=0
*/
void sub_130e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130e1d0ULL || rel >= 0x130e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130e200 size=96 callers=2 calls=2
   calls: sub_130e260, sub_130e5d0
*/
void sub_130e200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130e200ULL || rel >= 0x130e260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130e260 size=880 callers=2 calls=6
   calls: sub_1305da0, sub_1305dc0, sub_1305df0, sub_13100d0, sub_17b7510, sub_67c470
*/
void sub_130e260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130e260ULL || rel >= 0x130e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130e5d0 size=288 callers=1 calls=1
   calls: sub_130fb60
*/
void sub_130e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130e5d0ULL || rel >= 0x130e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130e6f0 size=224 callers=0 calls=4
   calls: sub_1305dc0, sub_67bdb0, sub_67bf00, sub_67bfa0
*/
void sub_130e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130e6f0ULL || rel >= 0x130e7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130e7d0 size=224 callers=1 calls=4
   calls: sub_130e260, sub_130e8b0, sub_1310750, sub_13107a0
*/
void sub_130e7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130e7d0ULL || rel >= 0x130e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130e8b0 size=416 callers=1 calls=3
   calls: sub_1310150, sub_13107d0, sub_177d1b0
*/
void sub_130e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130e8b0ULL || rel >= 0x130ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ea50 size=16 callers=1 calls=0
*/
void sub_130ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ea50ULL || rel >= 0x130ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ea60 size=80 callers=3 calls=0
*/
void sub_130ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ea60ULL || rel >= 0x130eab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130eab0 size=560 callers=1 calls=5
   calls: sub_1310150, sub_1780a10, sub_67b990, sub_67bdb0, sub_67bdc0
*/
void sub_130eab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130eab0ULL || rel >= 0x130ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ece0 size=192 callers=6 calls=2
   calls: sub_7c2280, sub_7c2af0
*/
void sub_130ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ece0ULL || rel >= 0x130eda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130eda0 size=112 callers=2 calls=2
   calls: sub_1310850, sub_1780850
*/
void sub_130eda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130eda0ULL || rel >= 0x130ee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ee10 size=432 callers=3 calls=3
   calls: sub_1310870, sub_17b9140, sub_685240
*/
void sub_130ee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ee10ULL || rel >= 0x130efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130efc0 size=1632 callers=0 calls=3
   calls: sub_5cf8f0, sub_5e2bc0, sub_65f110
*/
void sub_130efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130efc0ULL || rel >= 0x130f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130f620 size=16 callers=0 calls=0
*/
void sub_130f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f620ULL || rel >= 0x130f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130f630 size=16 callers=0 calls=0
*/
void sub_130f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f630ULL || rel >= 0x130f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130f640 size=112 callers=0 calls=0
*/
void sub_130f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f640ULL || rel >= 0x130f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130f6b0 size=16 callers=0 calls=0
*/
void sub_130f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f6b0ULL || rel >= 0x130f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130f6c0 size=112 callers=0 calls=0
*/
void sub_130f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f6c0ULL || rel >= 0x130f730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130f730 size=16 callers=0 calls=0
*/
void sub_130f730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f730ULL || rel >= 0x130f740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130f740 size=16 callers=0 calls=0
*/
void sub_130f740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f740ULL || rel >= 0x130f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130f750 size=16 callers=0 calls=0
*/
void sub_130f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f750ULL || rel >= 0x130f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130f760 size=32 callers=0 calls=0
*/
void sub_130f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f760ULL || rel >= 0x130f780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130f780 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_130f780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f780ULL || rel >= 0x130f800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130f800 size=480 callers=4 calls=1
   calls: sub_177d010
*/
void sub_130f800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f800ULL || rel >= 0x130f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130f9e0 size=96 callers=0 calls=1
   calls: sub_177d080
*/
void sub_130f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130f9e0ULL || rel >= 0x130fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130fa40 size=96 callers=0 calls=1
   calls: sub_177d080
*/
void sub_130fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130fa40ULL || rel >= 0x130faa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130faa0 size=96 callers=0 calls=1
   calls: sub_177d080
*/
void sub_130faa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130faa0ULL || rel >= 0x130fb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130fb00 size=96 callers=0 calls=1
   calls: sub_177d080
*/
void sub_130fb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130fb00ULL || rel >= 0x130fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130fb60 size=464 callers=1 calls=0
*/
void sub_130fb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130fb60ULL || rel >= 0x130fd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130fd30 size=544 callers=7 calls=3
   calls: sub_1306f20, sub_5dd790, sub_5e2930
   ref: bin/font/or_font.BFOTF
   ref: bin/font/FOT-RodinNTLGPro-DB.BFOTF
   ref: bin/font/FOT-UDKakugoC80Pro-DB.BFOTF
*/
void or_font_BFOTF(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130fd30ULL || rel >= 0x130ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ff50 size=80 callers=7 calls=0
*/
void sub_130ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ff50ULL || rel >= 0x130ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ffa0 size=32 callers=1 calls=0
*/
void sub_130ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ffa0ULL || rel >= 0x130ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ffc0 size=32 callers=1 calls=0
*/
void sub_130ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ffc0ULL || rel >= 0x130ffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0130ffe0 size=32 callers=1 calls=0
*/
void sub_130ffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x130ffe0ULL || rel >= 0x1310000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310000 size=96 callers=4 calls=0
*/
void sub_1310000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310000ULL || rel >= 0x1310060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310060 size=112 callers=4 calls=3
   calls: sub_1310850, sub_177cff0, sub_177d0c0
*/
void sub_1310060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310060ULL || rel >= 0x13100d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013100d0 size=112 callers=2 calls=1
   calls: sub_1310860
*/
void sub_13100d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13100d0ULL || rel >= 0x1310140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310140 size=16 callers=20 calls=0
*/
void sub_1310140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310140ULL || rel >= 0x1310150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310150 size=16 callers=27 calls=0
*/
void sub_1310150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310150ULL || rel >= 0x1310160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310160 size=640 callers=2 calls=3
   calls: sub_13109f0, sub_177e0b0, sub_177e320
*/
void sub_1310160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310160ULL || rel >= 0x13103e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013103e0 size=160 callers=0 calls=2
   calls: sub_1310bf0, sub_5fe100
*/
void sub_13103e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13103e0ULL || rel >= 0x1310480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310480 size=96 callers=0 calls=0
*/
void sub_1310480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310480ULL || rel >= 0x13104e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013104e0 size=32 callers=0 calls=0
*/
void sub_13104e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13104e0ULL || rel >= 0x1310500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310500 size=32 callers=0 calls=0
*/
void sub_1310500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310500ULL || rel >= 0x1310520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310520 size=384 callers=1 calls=3
   calls: sub_130ffa0, sub_130ffc0, sub_130ffe0
*/
void sub_1310520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310520ULL || rel >= 0x13106a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013106a0 size=176 callers=2 calls=2
   calls: sub_177e5d0, sub_177f980
*/
void sub_13106a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13106a0ULL || rel >= 0x1310750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310750 size=80 callers=1 calls=1
   calls: sub_177fc90
*/
void sub_1310750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310750ULL || rel >= 0x13107a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013107a0 size=48 callers=2 calls=0
*/
void sub_13107a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13107a0ULL || rel >= 0x13107d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013107d0 size=16 callers=2 calls=0
*/
void sub_13107d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13107d0ULL || rel >= 0x13107e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013107e0 size=112 callers=1 calls=1
   calls: sub_177f9a0
*/
void sub_13107e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13107e0ULL || rel >= 0x1310850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310850 size=16 callers=3 calls=0
*/
void sub_1310850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310850ULL || rel >= 0x1310860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310860 size=16 callers=1 calls=0
*/
void sub_1310860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310860ULL || rel >= 0x1310870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310870 size=16 callers=3 calls=0
*/
void sub_1310870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310870ULL || rel >= 0x1310880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310880 size=320 callers=0 calls=0
*/
void sub_1310880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310880ULL || rel >= 0x13109c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013109c0 size=16 callers=0 calls=0
*/
void sub_13109c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13109c0ULL || rel >= 0x13109d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013109d0 size=16 callers=0 calls=0
*/
void sub_13109d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13109d0ULL || rel >= 0x13109e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013109e0 size=16 callers=0 calls=0
*/
void sub_13109e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13109e0ULL || rel >= 0x13109f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013109f0 size=512 callers=1 calls=0
*/
void sub_13109f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13109f0ULL || rel >= 0x1310bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310bf0 size=320 callers=1 calls=0
*/
void sub_1310bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310bf0ULL || rel >= 0x1310d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310d30 size=464 callers=0 calls=0
*/
void sub_1310d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310d30ULL || rel >= 0x1310f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01310f00 size=256 callers=14 calls=0
*/
void sub_1310f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1310f00ULL || rel >= 0x1311000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01311000 size=2272 callers=0 calls=2
   calls: sub_1305970, sub_67b990
*/
void sub_1311000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1311000ULL || rel >= 0x13118e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013118e0 size=272 callers=7 calls=0
*/
void sub_13118e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13118e0ULL || rel >= 0x13119f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013119f0 size=576 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_13119f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13119f0ULL || rel >= 0x1311c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01311c30 size=16 callers=0 calls=0
*/
void sub_1311c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1311c30ULL || rel >= 0x1311c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01311c40 size=16 callers=0 calls=0
*/
void sub_1311c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1311c40ULL || rel >= 0x1311c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01311c50 size=16 callers=0 calls=0
*/
void sub_1311c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1311c50ULL || rel >= 0x1311c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01311c60 size=96 callers=214 calls=2
   calls: place_name_indirect, sub_67bfa0
*/
void sub_1311c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1311c60ULL || rel >= 0x1311cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01311cc0 size=1056 callers=4 calls=15
   calls: itemname_plural_classified, sub_130a6d0, sub_130a750, sub_130a7b0, sub_130a810, sub_130a870, sub_130a960, sub_130a9c0, sub_130aab0, sub_1312fd0, sub_67bdb0, sub_67be10
   ... +3 more
   ref: common/place_name_indirect.dat
*/
void place_name_indirect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1311cc0ULL || rel >= 0x13120e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013120e0 size=768 callers=3 calls=22
   calls: sub_1305dc0, sub_1307810, sub_130a6d0, sub_130a6f0, sub_130a7b0, sub_130a810, sub_130a870, sub_130a9c0, sub_130aa40, sub_130aab0, sub_130aaf0, sub_130ab30
   ... +10 more
*/
void sub_13120e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13120e0ULL || rel >= 0x13123e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013123e0 size=880 callers=1 calls=19
   calls: place_name_indirect, sub_1305dc0, sub_1307810, sub_1307860, sub_130a8d0, sub_130aa00, sub_130ac10, sub_13120e0, sub_1312a10, sub_67bdb0, sub_67bdc0, sub_67bdd0
   ... +7 more
*/
void sub_13123e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13123e0ULL || rel >= 0x1312750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01312750 size=384 callers=1 calls=6
   calls: sub_130a6d0, sub_1312b90, sub_67bf00, sub_67c470, sub_67c4b0, sub_67c4e0
*/
void sub_1312750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1312750ULL || rel >= 0x13128d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013128d0 size=320 callers=1 calls=6
   calls: sub_1307060, sub_130abb0, sub_1312d30, sub_67bf00, sub_67c4e0, sub_7c2280
*/
void sub_13128d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13128d0ULL || rel >= 0x1312a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01312a10 size=384 callers=1 calls=4
   calls: sub_67bdb0, sub_67bdc0, sub_67bf00, sub_7c2280
*/
void sub_1312a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1312a10ULL || rel >= 0x1312b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01312b90 size=416 callers=1 calls=3
   calls: sub_1312d30, sub_67bdb0, sub_67c270
*/
void sub_1312b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1312b90ULL || rel >= 0x1312d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01312d30 size=544 callers=5 calls=4
   calls: sub_1307680, sub_136b580, sub_67bdb0, sub_7847d0
*/
void sub_1312d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1312d30ULL || rel >= 0x1312f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01312f50 size=128 callers=11 calls=1
   calls: sub_67bfa0
*/
void sub_1312f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1312f50ULL || rel >= 0x1312fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01312fd0 size=512 callers=15 calls=6
   calls: sub_1318b50, sub_5dd790, sub_5e26a0, sub_5e2930, sub_67cbd0, sub_67d080
*/
void sub_1312fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1312fd0ULL || rel >= 0x13131d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013131d0 size=160 callers=13 calls=2
   calls: sub_67be10, sub_67d080
*/
void sub_13131d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13131d0ULL || rel >= 0x1313270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01313270 size=160 callers=3 calls=2
   calls: sub_67be10, sub_67d450
*/
void sub_1313270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1313270ULL || rel >= 0x1313310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01313310 size=144 callers=3 calls=1
   calls: sub_67be10
*/
void sub_1313310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1313310ULL || rel >= 0x13133a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013133a0 size=144 callers=43 calls=1
   calls: sub_67be10
*/
void sub_13133a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13133a0ULL || rel >= 0x1313430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01313430 size=208 callers=44 calls=4
   calls: sub_1305c90, sub_1305db0, sub_67be10, sub_7c2b60
*/
void sub_1313430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1313430ULL || rel >= 0x1313500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01313500 size=128 callers=1 calls=1
   calls: sub_7690a0
*/
void sub_1313500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1313500ULL || rel >= 0x1313580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01313580 size=432 callers=102 calls=11
   calls: sub_1305c90, sub_1305db0, sub_67bd90, sub_67be10, sub_762fd0, sub_7670a0, sub_767550, sub_76bb80, sub_7c2280, sub_7c2af0, sub_7c2b60
*/
void sub_1313580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1313580ULL || rel >= 0x1313730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01313730 size=576 callers=1 calls=8
   calls: place_name_indirect, sub_13120e0, sub_1312fd0, sub_1313580, sub_67bc30, sub_67be10, sub_67bfa0, unnamed_47
   ref: common/another_name.dat
*/
void another_name(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1313730ULL || rel >= 0x1313970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01313970 size=672 callers=1 calls=8
   calls: place_name_indirect, sub_13120e0, sub_1312fd0, sub_67bc30, sub_67be10, sub_67bfa0, sub_76bb80, unnamed_47
   ref: common/another_name.dat
*/
void another_name_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1313970ULL || rel >= 0x1313c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01313c10 size=144 callers=24 calls=2
   calls: sub_67be10, sub_76bb80
*/
void sub_1313c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1313c10ULL || rel >= 0x1313ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01313ca0 size=432 callers=2 calls=8
   calls: sub_1305c90, sub_1305db0, sub_67bd90, sub_67be10, sub_76bb80, sub_7c2280, sub_7c2af0, sub_7c2b60
*/
void sub_1313ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1313ca0ULL || rel >= 0x1313e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01313e50 size=160 callers=9 calls=3
   calls: sub_67be10, sub_762930, sub_76bb80
*/
void sub_1313e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1313e50ULL || rel >= 0x1313ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01313ef0 size=176 callers=1 calls=4
   calls: sub_67be10, sub_762930, sub_767950, sub_76bb80
*/
void sub_1313ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1313ef0ULL || rel >= 0x1313fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01313fa0 size=160 callers=1 calls=2
   calls: sub_67be10, sub_67d080
*/
void sub_1313fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1313fa0ULL || rel >= 0x1314040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01314040 size=144 callers=2 calls=3
   calls: sub_1353600, sub_67be10, sub_67be60
*/
void sub_1314040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1314040ULL || rel >= 0x13140d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013140d0 size=144 callers=2 calls=3
   calls: sub_1353b30, sub_67be10, sub_67be60
*/
void sub_13140d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13140d0ULL || rel >= 0x1314160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01314160 size=336 callers=1 calls=3
   calls: sub_1312fd0, sub_67be10, unnamed_47
   ref: common/trtype.dat
*/
void trtype(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1314160ULL || rel >= 0x13142b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013142b0 size=336 callers=7 calls=3
   calls: sub_1312fd0, sub_67be10, unnamed_47
   ref: common/trname.dat
*/
void trname(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13142b0ULL || rel >= 0x1314400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01314400 size=1440 callers=2 calls=7
   calls: sub_1307060, sub_1312d30, sub_67be10, sub_67bea0, sub_67bf00, sub_67bfa0, sub_7c2280
*/
void sub_1314400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1314400ULL || rel >= 0x13149a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013149a0 size=224 callers=62 calls=8
   calls: sub_1305c90, sub_1305db0, sub_136b520, sub_136b580, sub_136b590, sub_67be10, sub_7c2af0, sub_7c2b60
*/
void sub_13149a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13149a0ULL || rel >= 0x1314a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01314a80 size=208 callers=50 calls=5
   calls: sub_1305c90, sub_1305db0, sub_67be10, sub_7c2af0, sub_7c2b60
*/
void sub_1314a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1314a80ULL || rel >= 0x1314b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01314b50 size=144 callers=3 calls=2
   calls: sub_137bb00, sub_67be10
*/
void sub_1314b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1314b50ULL || rel >= 0x1314be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01314be0 size=336 callers=6 calls=3
   calls: sub_1312fd0, sub_67be10, unnamed_47
   ref: common/typename.dat
*/
void typename_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1314be0ULL || rel >= 0x1314d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01314d30 size=336 callers=15 calls=3
   calls: sub_1312fd0, sub_67be10, unnamed_47
   ref: common/tokusei.dat
*/
void tokusei(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1314d30ULL || rel >= 0x1314e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01314e80 size=336 callers=4 calls=3
   calls: sub_1312fd0, sub_67be10, unnamed_47
   ref: common/seikaku.dat
*/
void seikaku(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1314e80ULL || rel >= 0x1314fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01314fd0 size=336 callers=77 calls=3
   calls: sub_1312fd0, sub_67be10, unnamed_47
   ref: common/wazaname.dat
*/
void wazaname(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1314fd0ULL || rel >= 0x1315120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01315120 size=336 callers=3 calls=3
   calls: sub_1312fd0, sub_67be10, unnamed_47
   ref: common/gwazaname.dat
*/
void gwazaname(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1315120ULL || rel >= 0x1315270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01315270 size=160 callers=68 calls=1
   calls: sub_13077f0
*/
void sub_1315270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1315270ULL || rel >= 0x1315310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01315310 size=640 callers=1 calls=3
   calls: sub_1312fd0, sub_67be10, unnamed_47
   ref: common/itemname_acc_classified.dat
   ref: common/itemname.dat
   ref: common/itemname_plural_classified.dat
   ref: common/itemname_plural.dat
   ref: common/itemname_classified.dat
   ref: common/itemname_acc.dat
*/
void itemname_plural_classified(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1315310ULL || rel >= 0x1315590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01315590 size=352 callers=3 calls=3
   calls: sub_1312fd0, sub_67be10, unnamed_47
   ref: common/bag_pocket.dat
*/
void bag_pocket(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1315590ULL || rel >= 0x13156f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013156f0 size=400 callers=3 calls=3
   calls: sub_1312fd0, sub_67be10, unnamed_47
   ref: script/place_name.dat
*/
void place_name_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13156f0ULL || rel >= 0x1315880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01315880 size=448 callers=15 calls=5
   calls: place_name_5, sub_1318f70, sub_5e2bc0, sub_5e7b30, unnamed_47
   ref: script/place_name.dat
*/
void place_name_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1315880ULL || rel >= 0x1315a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01315a40 size=336 callers=1 calls=3
   calls: sub_1312fd0, sub_67be10, unnamed_47
   ref: common/ribbon.dat
*/
void ribbon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1315a40ULL || rel >= 0x1315b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01315b90 size=192 callers=447 calls=3
   calls: sub_13077f0, sub_130ac30, sub_67be10
*/
void sub_1315b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1315b90ULL || rel >= 0x1315c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01315c50 size=176 callers=1 calls=0
*/
void sub_1315c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1315c50ULL || rel >= 0x1315d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01315d00 size=10160 callers=2 calls=5
   calls: sub_130be10, sub_13185f0, sub_1318790, sub_65f1c0, unnamed_47
   ref: common/itemname_acc_classified.dat
   ref: common/typename.tbl
   ref: common/tokusei.dat
   ref: common/itemname.tbl
   ref: common/itemname_acc.tbl
   ref: common/tokusei.tbl
   ref: common/seikaku.dat
   ref: common/place_name_indirect.tbl
*/
void poke_memory_place(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1315d00ULL || rel >= 0x13184b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013184b0 size=96 callers=2 calls=1
   calls: sub_1318510
*/
void sub_13184b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13184b0ULL || rel >= 0x1318510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01318510 size=224 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_1318510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1318510ULL || rel >= 0x13185f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013185f0 size=416 callers=1 calls=4
   calls: sub_5dd790, sub_5e2930, sub_5e5560, sub_e98170
*/
void sub_13185f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13185f0ULL || rel >= 0x1318790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01318790 size=960 callers=1 calls=2
   calls: sub_67cbd0, sub_67d370
*/
void sub_1318790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1318790ULL || rel >= 0x1318b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01318b50 size=1056 callers=4 calls=0
*/
void sub_1318b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1318b50ULL || rel >= 0x1318f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01318f70 size=1104 callers=6 calls=0
*/
void sub_1318f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1318f70ULL || rel >= 0x13193c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013193c0 size=16 callers=3 calls=0
*/
void sub_13193c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13193c0ULL || rel >= 0x13193d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013193d0 size=16 callers=3 calls=0
*/
void sub_13193d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13193d0ULL || rel >= 0x13193e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013193e0 size=16 callers=7 calls=0
*/
void sub_13193e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13193e0ULL || rel >= 0x13193f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013193f0 size=784 callers=1 calls=7
   calls: sub_1319700, sub_1390780, sub_8dfba0, sub_8dfd80, sub_8e0190, sub_8e0ae0, sub_8e0b80
*/
void sub_13193f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13193f0ULL || rel >= 0x1319700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01319700 size=464 callers=3 calls=3
   calls: regulation_preset_core__d, sub_135a1a0, sub_8dfd80
*/
void sub_1319700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1319700ULL || rel >= 0x13198d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013198d0 size=16 callers=3 calls=0
*/
void sub_13198d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13198d0ULL || rel >= 0x13198e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013198e0 size=608 callers=1 calls=5
   calls: sub_1390780, sub_8dfba0, sub_8dfd80, sub_8e0190, sub_8e0b80
*/
void sub_13198e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13198e0ULL || rel >= 0x1319b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01319b40 size=112 callers=1 calls=2
   calls: sub_1319bb0, sub_e7b660
*/
void sub_1319b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1319b40ULL || rel >= 0x1319bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01319bb0 size=224 callers=1 calls=3
   calls: sub_131b430, sub_7c2da0, sub_e7b5e0
*/
void sub_1319bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1319bb0ULL || rel >= 0x1319c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01319c90 size=1072 callers=0 calls=13
   calls: sub_13193f0, sub_131a0c0, sub_131b690, sub_131b7c0, sub_131c000, sub_131f160, sub_78f150, sub_78f240, sub_794e80, sub_79ab20, sub_79b250, sub_e7c0f0
   ... +1 more
   ref: OptionBar
   ref: ViewProgress
   ref: ViewTop
   ref: SystemMessageView
   ref: common/regulation.dat
*/
void SystemMessageView_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1319c90ULL || rel >= 0x131a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131a0c0 size=272 callers=1 calls=3
   calls: sub_131b520, sub_131b690, sub_e7c160
*/
void sub_131a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131a0c0ULL || rel >= 0x131a1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131a1d0 size=288 callers=0 calls=2
   calls: sub_131b690, sub_e7ea20
*/
void sub_131a1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131a1d0ULL || rel >= 0x131a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131a2f0 size=224 callers=0 calls=3
   calls: sub_131c350, sub_1500ea0, sub_795bc0
   ref: OptionBar
   ref: ViewTop
*/
void OptionBar_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131a2f0ULL || rel >= 0x131a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131a3d0 size=16 callers=0 calls=0
*/
void sub_131a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131a3d0ULL || rel >= 0x131a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131a3e0 size=768 callers=0 calls=7
   calls: sub_131b690, sub_131c4a0, sub_131c5e0, sub_131c720, sub_131c860, sub_131c9a0, sub_e7c160
*/
void sub_131a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131a3e0ULL || rel >= 0x131a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131a6e0 size=368 callers=0 calls=1
   calls: sub_131b690
*/
void sub_131a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131a6e0ULL || rel >= 0x131a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131a850 size=448 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_131a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131a850ULL || rel >= 0x131aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131aa10 size=16 callers=0 calls=0
*/
void sub_131aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131aa10ULL || rel >= 0x131aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131aa20 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_131aa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131aa20ULL || rel >= 0x131aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131aad0 size=16 callers=0 calls=0
*/
void sub_131aad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131aad0ULL || rel >= 0x131aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131aae0 size=16 callers=0 calls=0
*/
void sub_131aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131aae0ULL || rel >= 0x131aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131aaf0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_131aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131aaf0ULL || rel >= 0x131aba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131aba0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_131aba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131aba0ULL || rel >= 0x131ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131ac50 size=16 callers=0 calls=0
*/
void sub_131ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131ac50ULL || rel >= 0x131ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131ac60 size=16 callers=0 calls=0
*/
void sub_131ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131ac60ULL || rel >= 0x131ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131ac70 size=112 callers=0 calls=0
*/
void sub_131ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131ac70ULL || rel >= 0x131ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131ace0 size=112 callers=0 calls=0
*/
void sub_131ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131ace0ULL || rel >= 0x131ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131ad50 size=16 callers=0 calls=0
*/
void sub_131ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131ad50ULL || rel >= 0x131ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131ad60 size=112 callers=0 calls=0
*/
void sub_131ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131ad60ULL || rel >= 0x131add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131add0 size=112 callers=0 calls=0
*/
void sub_131add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131add0ULL || rel >= 0x131ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131ae40 size=16 callers=0 calls=0
*/
void sub_131ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131ae40ULL || rel >= 0x131ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131ae50 size=16 callers=0 calls=0
*/
void sub_131ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131ae50ULL || rel >= 0x131ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131ae60 size=112 callers=0 calls=0
*/
void sub_131ae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131ae60ULL || rel >= 0x131aed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131aed0 size=112 callers=0 calls=0
*/
void sub_131aed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131aed0ULL || rel >= 0x131af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131af40 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_131af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131af40ULL || rel >= 0x131afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131afc0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_131afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131afc0ULL || rel >= 0x131b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131b130 size=96 callers=0 calls=1
   calls: sub_131b350
*/
void sub_131b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131b130ULL || rel >= 0x131b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131b190 size=16 callers=0 calls=0
*/
void sub_131b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131b190ULL || rel >= 0x131b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131b1a0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_131b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131b1a0ULL || rel >= 0x131b240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131b240 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_131b240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131b240ULL || rel >= 0x131b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131b300 size=16 callers=0 calls=0
*/
void sub_131b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131b300ULL || rel >= 0x131b310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131b310 size=16 callers=0 calls=0
*/
void sub_131b310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131b310ULL || rel >= 0x131b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131b320 size=16 callers=0 calls=0
*/
void sub_131b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131b320ULL || rel >= 0x131b330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131b330 size=32 callers=0 calls=0
*/
void sub_131b330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131b330ULL || rel >= 0x131b350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131b350 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_131b350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131b350ULL || rel >= 0x131b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131b430 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_131b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131b430ULL || rel >= 0x131b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131b520 size=368 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_131b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131b520ULL || rel >= 0x131b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0131b690 size=304 callers=24 calls=0
*/
void sub_131b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131b690ULL || rel >= 0x131b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

