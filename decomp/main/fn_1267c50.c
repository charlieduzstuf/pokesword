/* main functions 01267c50..0127bec0 (155 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01267c50 size=160 callers=0 calls=0
*/
void sub_1267c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1267c50ULL || rel >= 0x1267cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01267cf0 size=160 callers=0 calls=0
*/
void sub_1267cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1267cf0ULL || rel >= 0x1267d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01267d90 size=16 callers=0 calls=0
*/
void sub_1267d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1267d90ULL || rel >= 0x1267da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01267da0 size=160 callers=0 calls=0
*/
void sub_1267da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1267da0ULL || rel >= 0x1267e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01267e40 size=160 callers=0 calls=0
*/
void sub_1267e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1267e40ULL || rel >= 0x1267ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01267ee0 size=16 callers=0 calls=0
*/
void sub_1267ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1267ee0ULL || rel >= 0x1267ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01267ef0 size=16 callers=0 calls=0
*/
void sub_1267ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1267ef0ULL || rel >= 0x1267f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01267f00 size=160 callers=0 calls=0
*/
void sub_1267f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1267f00ULL || rel >= 0x1267fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01267fa0 size=160 callers=0 calls=0
*/
void sub_1267fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1267fa0ULL || rel >= 0x1268040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268040 size=304 callers=0 calls=0
*/
void sub_1268040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268040ULL || rel >= 0x1268170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268170 size=160 callers=0 calls=5
   calls: sub_1108730, sub_1134fa0, sub_113a3b0, sub_1313580, sub_bf05e0
*/
void sub_1268170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268170ULL || rel >= 0x1268210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268210 size=16 callers=0 calls=0
*/
void sub_1268210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268210ULL || rel >= 0x1268220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268220 size=16 callers=0 calls=0
*/
void sub_1268220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268220ULL || rel >= 0x1268230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268230 size=16 callers=0 calls=0
*/
void sub_1268230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268230ULL || rel >= 0x1268240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268240 size=144 callers=0 calls=1
   calls: sub_14ab2b0
*/
void sub_1268240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268240ULL || rel >= 0x12682d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012682d0 size=16 callers=0 calls=0
*/
void sub_12682d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12682d0ULL || rel >= 0x12682e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012682e0 size=16 callers=0 calls=0
*/
void sub_12682e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12682e0ULL || rel >= 0x12682f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012682f0 size=16 callers=0 calls=0
*/
void sub_12682f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12682f0ULL || rel >= 0x1268300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268300 size=208 callers=0 calls=0
*/
void sub_1268300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268300ULL || rel >= 0x12683d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012683d0 size=16 callers=18 calls=0
*/
void sub_12683d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12683d0ULL || rel >= 0x12683e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012683e0 size=48 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_12683e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12683e0ULL || rel >= 0x1268410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268410 size=432 callers=1 calls=2
   calls: sub_786a40, sub_f1db30
   ref: bin/appli/pokecamp/pokecamp_curry_l_%02d.bntx
   ref: bin/appli/pokecamp/pokecamp_curry_p_%02d.bntx
   ref: bin/appli/pokecamp/pokecamp_curry_m_%02d.bntx
   ref: bin/appli/pokecamp/pokecamp_curry_s_%02d.bntx
*/
void pokecamp_curry_s__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268410ULL || rel >= 0x12685c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012685c0 size=320 callers=3 calls=2
   calls: pokecamp_curry_s__02d, sub_14ba820
*/
void sub_12685c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12685c0ULL || rel >= 0x1268700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268700 size=16 callers=0 calls=0
*/
void sub_1268700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268700ULL || rel >= 0x1268710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268710 size=16 callers=13 calls=0
*/
void sub_1268710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268710ULL || rel >= 0x1268720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268720 size=48 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_1268720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268720ULL || rel >= 0x1268750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268750 size=256 callers=2 calls=2
   calls: pokecamp_food__02d_2, sub_14ba820
*/
void sub_1268750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268750ULL || rel >= 0x1268850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268850 size=336 callers=2 calls=2
   calls: sub_786a40, sub_f1db30
   ref: bin/appli/pokecamp/pokecamp_food_%02d.bntx
*/
void pokecamp_food__02d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268850ULL || rel >= 0x12689a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012689a0 size=304 callers=1 calls=2
   calls: pokecamp_food__02d_2, sub_14ba820
*/
void sub_12689a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12689a0ULL || rel >= 0x1268ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268ad0 size=16 callers=16 calls=0
*/
void sub_1268ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268ad0ULL || rel >= 0x1268ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268ae0 size=48 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_1268ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268ae0ULL || rel >= 0x1268b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268b10 size=256 callers=2 calls=2
   calls: pokecamp_kinomi__02d_2, sub_14ba820
*/
void sub_1268b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268b10ULL || rel >= 0x1268c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268c10 size=336 callers=1 calls=2
   calls: sub_786a40, sub_f1db30
   ref: bin/appli/pokecamp/pokecamp_kinomi_%02d.bntx
*/
void pokecamp_kinomi__02d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268c10ULL || rel >= 0x1268d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268d60 size=16 callers=0 calls=0
*/
void sub_1268d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268d60ULL || rel >= 0x1268d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268d70 size=48 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_1268d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268d70ULL || rel >= 0x1268da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268da0 size=320 callers=1 calls=1
   calls: sub_f1db30
   ref: bin/appli/pokecamp/pokecamp_result_bg_%02d.bntx
*/
void pokecamp_result_bg__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268da0ULL || rel >= 0x1268ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01268ee0 size=304 callers=1 calls=2
   calls: pokecamp_result_bg__02d, sub_14ba820
*/
void sub_1268ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1268ee0ULL || rel >= 0x1269010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01269010 size=768 callers=3 calls=1
   calls: anonymous
*/
void sub_1269010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1269010ULL || rel >= 0x1269310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01269310 size=320 callers=2 calls=2
   calls: sub_126c8d0, sub_c39c40
   ref: matching_status
*/
void matching_status_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1269310ULL || rel >= 0x1269450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01269450 size=544 callers=0 calls=5
   calls: sub_1127d00, sub_125de00, sub_1269670, sub_5cf8e0, sub_5cf8f0
*/
void sub_1269450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1269450ULL || rel >= 0x1269670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01269670 size=400 callers=1 calls=3
   calls: sub_125de00, sub_126cdb0, sub_126d380
*/
void sub_1269670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1269670ULL || rel >= 0x1269800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01269800 size=16 callers=0 calls=0
*/
void sub_1269800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1269800ULL || rel >= 0x1269810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01269810 size=112 callers=5 calls=2
   calls: sub_10617a0, sub_10619f0
*/
void sub_1269810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1269810ULL || rel >= 0x1269880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01269880 size=128 callers=6 calls=2
   calls: sub_1366cd0, sub_786a40
*/
void sub_1269880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1269880ULL || rel >= 0x1269900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01269900 size=112 callers=8 calls=1
   calls: sub_1370690
*/
void sub_1269900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1269900ULL || rel >= 0x1269970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01269970 size=912 callers=0 calls=5
   calls: sub_1179ec0, sub_12446d0, sub_125b840, sub_125de00, sub_1269d00
*/
void sub_1269970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1269970ULL || rel >= 0x1269d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01269d00 size=1056 callers=1 calls=0
*/
void sub_1269d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1269d00ULL || rel >= 0x126a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126a120 size=560 callers=0 calls=1
   calls: sub_12536b0
*/
void sub_126a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126a120ULL || rel >= 0x126a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126a350 size=144 callers=3 calls=0
*/
void sub_126a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126a350ULL || rel >= 0x126a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126a3e0 size=128 callers=1 calls=0
*/
void sub_126a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126a3e0ULL || rel >= 0x126a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126a460 size=848 callers=2 calls=13
   calls: sub_125a0f0, sub_125de00, sub_1263070, sub_12630d0, sub_1263340, sub_12633f0, sub_1263600, sub_1263640, sub_1263990, sub_1263a40, sub_126a7b0, sub_c39c40
   ... +1 more
*/
void sub_126a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126a460ULL || rel >= 0x126a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126a7b0 size=512 callers=3 calls=0
*/
void sub_126a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126a7b0ULL || rel >= 0x126a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126a9b0 size=16 callers=3 calls=0
*/
void sub_126a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126a9b0ULL || rel >= 0x126a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126a9c0 size=352 callers=0 calls=5
   calls: sub_1127d00, sub_125de00, sub_5cf8e0, sub_5cf8f0, sub_c43ed0
*/
void sub_126a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126a9c0ULL || rel >= 0x126ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126ab20 size=176 callers=50 calls=1
   calls: sub_5e2350
*/
void sub_126ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ab20ULL || rel >= 0x126abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126abd0 size=48 callers=25 calls=0
*/
void sub_126abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126abd0ULL || rel >= 0x126ac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126ac00 size=48 callers=0 calls=0
*/
void sub_126ac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ac00ULL || rel >= 0x126ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126ac30 size=96 callers=4 calls=0
*/
void sub_126ac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ac30ULL || rel >= 0x126ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126ac90 size=16 callers=19 calls=0
*/
void sub_126ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ac90ULL || rel >= 0x126aca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126aca0 size=160 callers=60 calls=1
   calls: sub_125de00
*/
void sub_126aca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126aca0ULL || rel >= 0x126ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126ad40 size=16 callers=0 calls=0
*/
void sub_126ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ad40ULL || rel >= 0x126ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126ad50 size=96 callers=14 calls=0
*/
void sub_126ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ad50ULL || rel >= 0x126adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126adb0 size=208 callers=22 calls=3
   calls: sub_126a460, sub_126a7b0, sub_126ae80
*/
void sub_126adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126adb0ULL || rel >= 0x126ae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126ae80 size=880 callers=3 calls=0
*/
void sub_126ae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ae80ULL || rel >= 0x126b1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126b1f0 size=960 callers=22 calls=8
   calls: sub_125a0f0, sub_125de00, sub_1263620, sub_12639a0, sub_126a460, sub_126a7b0, sub_126ae80, sub_126c5f0
*/
void sub_126b1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126b1f0ULL || rel >= 0x126b5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126b5b0 size=32 callers=8 calls=0
*/
void sub_126b5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126b5b0ULL || rel >= 0x126b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126b5d0 size=448 callers=0 calls=5
   calls: anime_out_9, sub_1127d00, sub_125de00, sub_5cf8e0, sub_5cf8f0
*/
void sub_126b5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126b5d0ULL || rel >= 0x126b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126b790 size=448 callers=0 calls=5
   calls: anime_out_9, sub_1127d00, sub_125de00, sub_5cf8e0, sub_5cf8f0
*/
void sub_126b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126b790ULL || rel >= 0x126b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126b950 size=816 callers=0 calls=0
*/
void sub_126b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126b950ULL || rel >= 0x126bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126bc80 size=16 callers=0 calls=0
*/
void sub_126bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126bc80ULL || rel >= 0x126bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126bc90 size=16 callers=0 calls=0
*/
void sub_126bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126bc90ULL || rel >= 0x126bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126bca0 size=16 callers=0 calls=0
*/
void sub_126bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126bca0ULL || rel >= 0x126bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126bcb0 size=16 callers=0 calls=0
*/
void sub_126bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126bcb0ULL || rel >= 0x126bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126bcc0 size=16 callers=0 calls=0
*/
void sub_126bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126bcc0ULL || rel >= 0x126bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126bcd0 size=16 callers=0 calls=0
*/
void sub_126bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126bcd0ULL || rel >= 0x126bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126bce0 size=16 callers=0 calls=0
*/
void sub_126bce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126bce0ULL || rel >= 0x126bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126bcf0 size=16 callers=0 calls=0
*/
void sub_126bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126bcf0ULL || rel >= 0x126bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126bd00 size=336 callers=0 calls=0
*/
void sub_126bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126bd00ULL || rel >= 0x126be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126be50 size=336 callers=0 calls=0
*/
void sub_126be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126be50ULL || rel >= 0x126bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126bfa0 size=240 callers=0 calls=0
*/
void sub_126bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126bfa0ULL || rel >= 0x126c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126c090 size=320 callers=0 calls=0
*/
void sub_126c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126c090ULL || rel >= 0x126c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126c1d0 size=320 callers=0 calls=0
*/
void sub_126c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126c1d0ULL || rel >= 0x126c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126c310 size=16 callers=0 calls=0
*/
void sub_126c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126c310ULL || rel >= 0x126c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126c320 size=16 callers=0 calls=0
*/
void sub_126c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126c320ULL || rel >= 0x126c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126c330 size=320 callers=0 calls=0
*/
void sub_126c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126c330ULL || rel >= 0x126c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126c470 size=320 callers=0 calls=0
*/
void sub_126c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126c470ULL || rel >= 0x126c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126c5b0 size=16 callers=0 calls=0
*/
void sub_126c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126c5b0ULL || rel >= 0x126c5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126c5c0 size=16 callers=0 calls=0
*/
void sub_126c5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126c5c0ULL || rel >= 0x126c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126c5d0 size=16 callers=0 calls=0
*/
void sub_126c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126c5d0ULL || rel >= 0x126c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126c5e0 size=16 callers=0 calls=0
*/
void sub_126c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126c5e0ULL || rel >= 0x126c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126c5f0 size=432 callers=1 calls=0
*/
void sub_126c5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126c5f0ULL || rel >= 0x126c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126c7a0 size=304 callers=11 calls=0
*/
void sub_126c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126c7a0ULL || rel >= 0x126c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126c8d0 size=272 callers=2 calls=2
   calls: sub_126c9e0, sub_5cfaf0
*/
void sub_126c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126c8d0ULL || rel >= 0x126c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126c9e0 size=304 callers=1 calls=0
*/
void sub_126c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126c9e0ULL || rel >= 0x126cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cb10 size=16 callers=0 calls=0
*/
void sub_126cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cb10ULL || rel >= 0x126cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cb20 size=16 callers=0 calls=0
*/
void sub_126cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cb20ULL || rel >= 0x126cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cb30 size=16 callers=0 calls=0
*/
void sub_126cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cb30ULL || rel >= 0x126cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cb40 size=16 callers=0 calls=0
*/
void sub_126cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cb40ULL || rel >= 0x126cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cb50 size=32 callers=0 calls=0
*/
void sub_126cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cb50ULL || rel >= 0x126cb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cb70 size=16 callers=0 calls=0
*/
void sub_126cb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cb70ULL || rel >= 0x126cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cb80 size=32 callers=0 calls=0
*/
void sub_126cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cb80ULL || rel >= 0x126cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cba0 size=32 callers=0 calls=0
*/
void sub_126cba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cba0ULL || rel >= 0x126cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cbc0 size=160 callers=0 calls=0
*/
void sub_126cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cbc0ULL || rel >= 0x126cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cc60 size=16 callers=0 calls=0
*/
void sub_126cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cc60ULL || rel >= 0x126cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cc70 size=16 callers=0 calls=0
*/
void sub_126cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cc70ULL || rel >= 0x126cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cc80 size=16 callers=0 calls=0
*/
void sub_126cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cc80ULL || rel >= 0x126cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cc90 size=144 callers=0 calls=3
   calls: sub_125a0f0, sub_125de00, sub_12635f0
*/
void sub_126cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cc90ULL || rel >= 0x126cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cd20 size=16 callers=0 calls=0
*/
void sub_126cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cd20ULL || rel >= 0x126cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cd30 size=16 callers=0 calls=0
*/
void sub_126cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cd30ULL || rel >= 0x126cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cd40 size=16 callers=0 calls=0
*/
void sub_126cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cd40ULL || rel >= 0x126cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cd50 size=48 callers=0 calls=0
*/
void sub_126cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cd50ULL || rel >= 0x126cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cd80 size=16 callers=0 calls=0
*/
void sub_126cd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cd80ULL || rel >= 0x126cd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cd90 size=16 callers=0 calls=0
*/
void sub_126cd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cd90ULL || rel >= 0x126cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cda0 size=16 callers=0 calls=0
*/
void sub_126cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cda0ULL || rel >= 0x126cdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cdb0 size=352 callers=1 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_126cdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cdb0ULL || rel >= 0x126cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cf10 size=160 callers=0 calls=0
*/
void sub_126cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cf10ULL || rel >= 0x126cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126cfb0 size=736 callers=0 calls=5
   calls: sub_14ba7b0, sub_8f3180, sub_e806b0, sub_e833a0, sub_e83ac0
*/
void sub_126cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126cfb0ULL || rel >= 0x126d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126d290 size=96 callers=2 calls=2
   calls: sub_e806b0, sub_e83a40
   ref: anime_in
*/
void anime_in_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126d290ULL || rel >= 0x126d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126d2f0 size=144 callers=10 calls=1
   calls: sub_e83450
   ref: anime_out
*/
void anime_out_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126d2f0ULL || rel >= 0x126d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126d380 size=928 callers=1 calls=6
   calls: sub_126d720, sub_14ab2b0, sub_8f3180, sub_e833a0, sub_e83870, sub_e83ac0
*/
void sub_126d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126d380ULL || rel >= 0x126d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126d720 size=384 callers=2 calls=6
   calls: player_icon_table_3, sub_136b530, sub_136b770, sub_8f3180, sub_e833a0, sub_e83ac0
*/
void sub_126d720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126d720ULL || rel >= 0x126d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126d8a0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokecamp/bin/pokecamp_cooking_reception_00_lyt.bin
*/
void pokecamp_cooking_reception_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126d8a0ULL || rel >= 0x126d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126d9b0 size=16 callers=0 calls=0
*/
void sub_126d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126d9b0ULL || rel >= 0x126d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126d9c0 size=224 callers=0 calls=0
*/
void sub_126d9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126d9c0ULL || rel >= 0x126daa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126daa0 size=224 callers=0 calls=0
*/
void sub_126daa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126daa0ULL || rel >= 0x126db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126db80 size=16 callers=0 calls=0
*/
void sub_126db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126db80ULL || rel >= 0x126db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126db90 size=224 callers=0 calls=0
*/
void sub_126db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126db90ULL || rel >= 0x126dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126dc70 size=224 callers=0 calls=0
*/
void sub_126dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126dc70ULL || rel >= 0x126dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126dd50 size=16 callers=0 calls=0
*/
void sub_126dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126dd50ULL || rel >= 0x126dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126dd60 size=16 callers=0 calls=0
*/
void sub_126dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126dd60ULL || rel >= 0x126dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126dd70 size=224 callers=0 calls=0
*/
void sub_126dd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126dd70ULL || rel >= 0x126de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126de50 size=224 callers=0 calls=0
*/
void sub_126de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126de50ULL || rel >= 0x126df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126df30 size=112 callers=0 calls=2
   calls: sub_14ab2b0, sub_e806b0
*/
void sub_126df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126df30ULL || rel >= 0x126dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126dfa0 size=16 callers=0 calls=0
*/
void sub_126dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126dfa0ULL || rel >= 0x126dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126dfb0 size=16 callers=0 calls=0
*/
void sub_126dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126dfb0ULL || rel >= 0x126dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126dfc0 size=16 callers=0 calls=0
*/
void sub_126dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126dfc0ULL || rel >= 0x126dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126dfd0 size=160 callers=0 calls=0
*/
void sub_126dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126dfd0ULL || rel >= 0x126e070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126e070 size=16 callers=0 calls=0
*/
void sub_126e070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e070ULL || rel >= 0x126e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126e080 size=1376 callers=0 calls=23
   calls: Play_UI_Common_window_close, sub_106fcf0, sub_106fd00, sub_106fd30, sub_1179fc0, sub_125a0f0, sub_125b840, sub_125de00, sub_1263070, sub_12630d0, sub_1263300, sub_1263640
   ... +11 more
*/
void sub_126e080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e080ULL || rel >= 0x126e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126e5e0 size=16 callers=0 calls=0
*/
void sub_126e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e5e0ULL || rel >= 0x126e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126e5f0 size=16 callers=0 calls=0
*/
void sub_126e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e5f0ULL || rel >= 0x126e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126e600 size=16 callers=0 calls=0
*/
void sub_126e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e600ULL || rel >= 0x126e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126e610 size=16 callers=0 calls=0
*/
void sub_126e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e610ULL || rel >= 0x126e620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126e620 size=16 callers=0 calls=0
*/
void sub_126e620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e620ULL || rel >= 0x126e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126e630 size=16 callers=0 calls=0
*/
void sub_126e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e630ULL || rel >= 0x126e640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126e640 size=16 callers=0 calls=0
*/
void sub_126e640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e640ULL || rel >= 0x126e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126e650 size=16 callers=0 calls=0
*/
void sub_126e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e650ULL || rel >= 0x126e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126e660 size=16 callers=0 calls=0
*/
void sub_126e660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e660ULL || rel >= 0x126e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126e670 size=304 callers=0 calls=0
*/
void sub_126e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e670ULL || rel >= 0x126e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126e7a0 size=352 callers=1 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_126e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e7a0ULL || rel >= 0x126e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126e900 size=272 callers=2 calls=2
   calls: sub_126ea10, sub_5cfaf0
*/
void sub_126e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e900ULL || rel >= 0x126ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126ea10 size=304 callers=1 calls=0
*/
void sub_126ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ea10ULL || rel >= 0x126eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126eb40 size=256 callers=0 calls=3
   calls: sub_1127d00, sub_5cf8e0, sub_5cf8f0
*/
void sub_126eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126eb40ULL || rel >= 0x126ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126ec40 size=16 callers=0 calls=0
*/
void sub_126ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ec40ULL || rel >= 0x126ec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126ec50 size=16 callers=0 calls=0
*/
void sub_126ec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ec50ULL || rel >= 0x126ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126ec60 size=16 callers=0 calls=0
*/
void sub_126ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ec60ULL || rel >= 0x126ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126ec70 size=352 callers=3 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_126ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ec70ULL || rel >= 0x126edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126edd0 size=128 callers=0 calls=0
*/
void sub_126edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126edd0ULL || rel >= 0x126ee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126ee50 size=176 callers=0 calls=4
   calls: sub_14e6550, sub_e806b0, sub_e83870, sub_e84190
   ref: anime_L_button_00_ptn_icon
   ref: anime_L_button_01_ptn_icon
   ref: anime_L_button_02_ptn_icon
*/
void anime_L_button_02_ptn_icon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ee50ULL || rel >= 0x126ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126ef00 size=336 callers=2 calls=4
   calls: sub_1128e40, sub_e806b0, sub_e807f0, sub_e83450
   ref: anime_in
   ref: Play_UI_Common_window_open
*/
void Play_UI_Common_window_open(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ef00ULL || rel >= 0x126f050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126f050 size=320 callers=6 calls=5
   calls: sub_1128e40, sub_14e1a30, sub_e80580, sub_e83450, sub_e84310
   ref: Play_UI_Common_window_close
   ref: anime_out
*/
void Play_UI_Common_window_close(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f050ULL || rel >= 0x126f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126f190 size=624 callers=1 calls=2
   calls: sub_126f400, sub_e7eb10
*/
void sub_126f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f190ULL || rel >= 0x126f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126f400 size=272 callers=6 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_126f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f400ULL || rel >= 0x126f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126f510 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokecamp/bin/pokecamp_menu_00_lyt.bin
   ref: bin/appli/pokecamp/bin/uikit_pokecamp_menu_00.bin
*/
void uikit_pokecamp_menu_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f510ULL || rel >= 0x126f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126f6f0 size=64 callers=0 calls=0
*/
void sub_126f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f6f0ULL || rel >= 0x126f730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126f730 size=64 callers=0 calls=0
*/
void sub_126f730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f730ULL || rel >= 0x126f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126f770 size=64 callers=0 calls=0
*/
void sub_126f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f770ULL || rel >= 0x126f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126f7b0 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_126f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f7b0ULL || rel >= 0x126f820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126f820 size=80 callers=0 calls=0
*/
void sub_126f820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f820ULL || rel >= 0x126f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126f870 size=80 callers=0 calls=0
*/
void sub_126f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f870ULL || rel >= 0x126f8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126f8c0 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_126f8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f8c0ULL || rel >= 0x126f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126f930 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_126f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f930ULL || rel >= 0x126f9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126f9a0 size=80 callers=0 calls=0
*/
void sub_126f9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f9a0ULL || rel >= 0x126f9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126f9f0 size=80 callers=0 calls=0
*/
void sub_126f9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f9f0ULL || rel >= 0x126fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126fa40 size=160 callers=0 calls=4
   calls: sub_14ab2b0, sub_14e1a30, sub_1500c40, sub_e84310
*/
void sub_126fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126fa40ULL || rel >= 0x126fae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126fae0 size=16 callers=0 calls=0
*/
void sub_126fae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126fae0ULL || rel >= 0x126faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126faf0 size=16 callers=0 calls=0
*/
void sub_126faf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126faf0ULL || rel >= 0x126fb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126fb00 size=16 callers=0 calls=0
*/
void sub_126fb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126fb00ULL || rel >= 0x126fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126fb10 size=128 callers=0 calls=2
   calls: sub_14ab2b0, sub_e806b0
*/
void sub_126fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126fb10ULL || rel >= 0x126fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126fb90 size=16 callers=0 calls=0
*/
void sub_126fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126fb90ULL || rel >= 0x126fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126fba0 size=16 callers=0 calls=0
*/
void sub_126fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126fba0ULL || rel >= 0x126fbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126fbb0 size=16 callers=0 calls=0
*/
void sub_126fbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126fbb0ULL || rel >= 0x126fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126fbc0 size=816 callers=0 calls=7
   calls: sub_125de00, sub_126fef0, sub_1271a30, sub_1271b80, sub_1271cd0, sub_12733f0, sub_c39c40
   ref: cooking_dining
   ref: cooking_result
*/
void cooking_result(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126fbc0ULL || rel >= 0x126fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0126fef0 size=2688 callers=1 calls=27
   calls: anime_g_text, msg_ui_pokecamp_cooking_05_08, msg_ui_pokecamp_cooking_05_11, msg_ui_pokecamp_cookname_01__02d, sub_111b250, sub_117a6c0, sub_117aee0, sub_117af10, sub_117af90, sub_125b9f0, sub_125ba00, sub_125de00
   ... +15 more
*/
void sub_126fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126fef0ULL || rel >= 0x1270970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01270970 size=448 callers=0 calls=2
   calls: sub_1273210, sub_12732b0
*/
void sub_1270970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1270970ULL || rel >= 0x1270b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01270b30 size=2880 callers=0 calls=20
   calls: Play_Camp_Eating_Curry_Introduce_Efx_Birthday, anime_keep_2, sub_1127d00, sub_1127fc0, sub_1128340, sub_125de00, sub_1267a90, sub_1271670, sub_1272a50, sub_1272ba0, sub_1272c70, sub_1272d00
   ... +8 more
   ref: Play_UI_network_result
   ref: Play_UI_common_menu_open
*/
void Play_UI_network_result(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1270b30ULL || rel >= 0x1271670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271670 size=144 callers=1 calls=4
   calls: sub_1128e40, sub_1164ea0, sub_1164ec0, sub_5cfad0
*/
void sub_1271670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271670ULL || rel >= 0x1271700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271700 size=64 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_1271700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271700ULL || rel >= 0x1271740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271740 size=320 callers=0 calls=0
*/
void sub_1271740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271740ULL || rel >= 0x1271880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271880 size=16 callers=0 calls=0
*/
void sub_1271880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271880ULL || rel >= 0x1271890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271890 size=16 callers=0 calls=0
*/
void sub_1271890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271890ULL || rel >= 0x12718a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012718a0 size=16 callers=0 calls=0
*/
void sub_12718a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12718a0ULL || rel >= 0x12718b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012718b0 size=16 callers=0 calls=0
*/
void sub_12718b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12718b0ULL || rel >= 0x12718c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012718c0 size=16 callers=0 calls=0
*/
void sub_12718c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12718c0ULL || rel >= 0x12718d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012718d0 size=16 callers=0 calls=0
*/
void sub_12718d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12718d0ULL || rel >= 0x12718e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012718e0 size=16 callers=0 calls=0
*/
void sub_12718e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12718e0ULL || rel >= 0x12718f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012718f0 size=16 callers=0 calls=0
*/
void sub_12718f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12718f0ULL || rel >= 0x1271900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271900 size=304 callers=0 calls=0
*/
void sub_1271900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271900ULL || rel >= 0x1271a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271a30 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1271a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271a30ULL || rel >= 0x1271b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271b80 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1271b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271b80ULL || rel >= 0x1271cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271cd0 size=352 callers=1 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1271cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271cd0ULL || rel >= 0x1271e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271e30 size=32 callers=0 calls=0
*/
void sub_1271e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271e30ULL || rel >= 0x1271e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271e50 size=16 callers=0 calls=0
*/
void sub_1271e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271e50ULL || rel >= 0x1271e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271e60 size=32 callers=0 calls=0
*/
void sub_1271e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271e60ULL || rel >= 0x1271e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271e80 size=32 callers=0 calls=0
*/
void sub_1271e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271e80ULL || rel >= 0x1271ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271ea0 size=16 callers=0 calls=0
*/
void sub_1271ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271ea0ULL || rel >= 0x1271eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271eb0 size=16 callers=0 calls=0
*/
void sub_1271eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271eb0ULL || rel >= 0x1271ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271ec0 size=16 callers=0 calls=0
*/
void sub_1271ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271ec0ULL || rel >= 0x1271ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271ed0 size=16 callers=0 calls=0
*/
void sub_1271ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271ed0ULL || rel >= 0x1271ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271ee0 size=208 callers=0 calls=0
*/
void sub_1271ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271ee0ULL || rel >= 0x1271fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271fb0 size=16 callers=0 calls=0
*/
void sub_1271fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271fb0ULL || rel >= 0x1271fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01271fc0 size=1648 callers=1 calls=13
   calls: sub_111b250, sub_12685c0, sub_1272630, sub_1272890, sub_1272920, sub_12729d0, sub_14ba7b0, sub_67bdb0, sub_786a40, sub_8f3180, sub_e83430, sub_e83930
   ... +1 more
*/
void sub_1271fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1271fc0ULL || rel >= 0x1272630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01272630 size=608 callers=1 calls=1
   calls: sub_14ba3b0
*/
void sub_1272630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1272630ULL || rel >= 0x1272890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01272890 size=144 callers=18 calls=1
   calls: sub_d0c0
*/
void sub_1272890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1272890ULL || rel >= 0x1272920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01272920 size=176 callers=2 calls=1
   calls: sub_d0c0
*/
void sub_1272920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1272920ULL || rel >= 0x12729d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012729d0 size=128 callers=6 calls=1
   calls: sub_d0c0
*/
void sub_12729d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12729d0ULL || rel >= 0x1272a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01272a50 size=336 callers=1 calls=4
   calls: sub_12729d0, sub_e806b0, sub_e836a0, sub_e837c0
*/
void sub_1272a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1272a50ULL || rel >= 0x1272ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01272ba0 size=208 callers=1 calls=5
   calls: sub_1128e40, sub_12729d0, sub_5cfad0, sub_e806b0, sub_e836a0
*/
void sub_1272ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1272ba0ULL || rel >= 0x1272c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01272c70 size=144 callers=1 calls=2
   calls: sub_12729d0, sub_e836a0
*/
void sub_1272c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1272c70ULL || rel >= 0x1272d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01272d00 size=64 callers=1 calls=1
   calls: sub_14bacd0
*/
void sub_1272d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1272d00ULL || rel >= 0x1272d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01272d40 size=288 callers=1 calls=2
   calls: sub_1272890, sub_e83930
*/
void sub_1272d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1272d40ULL || rel >= 0x1272e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01272e60 size=944 callers=1 calls=4
   calls: sub_1128e40, sub_1272890, sub_5cfad0, sub_e83540
*/
void sub_1272e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1272e60ULL || rel >= 0x1273210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273210 size=160 callers=2 calls=3
   calls: sub_1272890, sub_14aad40, sub_14d56d0
*/
void sub_1273210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273210ULL || rel >= 0x12732b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012732b0 size=160 callers=3 calls=3
   calls: sub_1272890, sub_14aad40, sub_14d56d0
*/
void sub_12732b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12732b0ULL || rel >= 0x1273350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273350 size=160 callers=1 calls=3
   calls: sub_1128e40, sub_14aad40, sub_14d56d0
   ref: Play_Camp_Eating_Curry_Introduce_Efx_Birthday
*/
void Play_Camp_Eating_Curry_Introduce_Efx_Birthday(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273350ULL || rel >= 0x12733f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012733f0 size=112 callers=1 calls=0
*/
void sub_12733f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12733f0ULL || rel >= 0x1273460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273460 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokecamp_dining/bin/pokecamp_dining_00_lyt.bin
*/
void pokecamp_dining_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273460ULL || rel >= 0x1273570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273570 size=272 callers=0 calls=0
*/
void sub_1273570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273570ULL || rel >= 0x1273680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273680 size=16 callers=0 calls=0
*/
void sub_1273680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273680ULL || rel >= 0x1273690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273690 size=16 callers=0 calls=0
*/
void sub_1273690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273690ULL || rel >= 0x12736a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012736a0 size=16 callers=0 calls=0
*/
void sub_12736a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12736a0ULL || rel >= 0x12736b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012736b0 size=16 callers=0 calls=0
*/
void sub_12736b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12736b0ULL || rel >= 0x12736c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012736c0 size=16 callers=0 calls=0
*/
void sub_12736c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12736c0ULL || rel >= 0x12736d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012736d0 size=16 callers=0 calls=0
*/
void sub_12736d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12736d0ULL || rel >= 0x12736e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012736e0 size=16 callers=0 calls=0
*/
void sub_12736e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12736e0ULL || rel >= 0x12736f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012736f0 size=16 callers=0 calls=0
*/
void sub_12736f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12736f0ULL || rel >= 0x1273700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273700 size=304 callers=0 calls=0
*/
void sub_1273700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273700ULL || rel >= 0x1273830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273830 size=272 callers=0 calls=4
   calls: sub_1128e40, sub_1272890, sub_14ab2b0, sub_5cfad0
*/
void sub_1273830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273830ULL || rel >= 0x1273940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273940 size=16 callers=0 calls=0
*/
void sub_1273940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273940ULL || rel >= 0x1273950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273950 size=16 callers=0 calls=0
*/
void sub_1273950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273950ULL || rel >= 0x1273960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273960 size=16 callers=0 calls=0
*/
void sub_1273960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273960ULL || rel >= 0x1273970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273970 size=288 callers=0 calls=4
   calls: sub_1128e40, sub_1272890, sub_14ab2b0, sub_5cfad0
*/
void sub_1273970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273970ULL || rel >= 0x1273a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273a90 size=16 callers=0 calls=0
*/
void sub_1273a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273a90ULL || rel >= 0x1273aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273aa0 size=16 callers=0 calls=0
*/
void sub_1273aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273aa0ULL || rel >= 0x1273ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273ab0 size=16 callers=0 calls=0
*/
void sub_1273ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273ab0ULL || rel >= 0x1273ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273ac0 size=96 callers=0 calls=1
   calls: sub_125de00
*/
void sub_1273ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273ac0ULL || rel >= 0x1273b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273b20 size=272 callers=0 calls=4
   calls: sub_1127fc0, sub_125de00, sub_5cf8e0, sub_5cf8f0
*/
void sub_1273b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273b20ULL || rel >= 0x1273c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273c30 size=16 callers=0 calls=0
*/
void sub_1273c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273c30ULL || rel >= 0x1273c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273c40 size=16 callers=0 calls=0
*/
void sub_1273c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273c40ULL || rel >= 0x1273c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273c50 size=16 callers=0 calls=0
*/
void sub_1273c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273c50ULL || rel >= 0x1273c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273c60 size=16 callers=0 calls=0
*/
void sub_1273c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273c60ULL || rel >= 0x1273c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273c70 size=16 callers=0 calls=0
*/
void sub_1273c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273c70ULL || rel >= 0x1273c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273c80 size=16 callers=0 calls=0
*/
void sub_1273c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273c80ULL || rel >= 0x1273c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273c90 size=16 callers=0 calls=0
*/
void sub_1273c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273c90ULL || rel >= 0x1273ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273ca0 size=16 callers=0 calls=0
*/
void sub_1273ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273ca0ULL || rel >= 0x1273cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273cb0 size=16 callers=0 calls=0
*/
void sub_1273cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273cb0ULL || rel >= 0x1273cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273cc0 size=304 callers=0 calls=0
*/
void sub_1273cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273cc0ULL || rel >= 0x1273df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273df0 size=128 callers=0 calls=0
*/
void sub_1273df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273df0ULL || rel >= 0x1273e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01273e70 size=800 callers=0 calls=5
   calls: msg_pokecamp_optionbar_decide, sub_125de00, sub_1275b20, sub_1275c70, sub_c39c40
   ref: cooking_order
   ref: cooking_call
*/
void cooking_order(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1273e70ULL || rel >= 0x1274190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01274190 size=2544 callers=0 calls=14
   calls: Play_UI_Camp_Cooking_Start, anime_L_controller_00_keep_swing_joycon, anime_L_controller_00_throw, anime_L_controller_00_throw_2, anime_L_controller_00_throw_3, anime_out_11, anime_out_12, anime_out_13, anime_ptn_text_2, sub_1127fc0, sub_1128e40, sub_125de00
   ... +2 more
   ref: Play_UI_Camp_Cooking_Pop
*/
void Play_UI_Camp_Cooking_Pop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1274190ULL || rel >= 0x1274b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01274b80 size=432 callers=0 calls=7
   calls: sub_1127fc0, sub_125de00, sub_12764a0, sub_1276f40, sub_5cf8e0, sub_5cf8f0, sub_e806b0
*/
void sub_1274b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1274b80ULL || rel >= 0x1274d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01274d30 size=16 callers=0 calls=0
*/
void sub_1274d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1274d30ULL || rel >= 0x1274d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01274d40 size=384 callers=1 calls=3
   calls: anime_ptn_text, sub_1128e40, sub_1276b10
   ref: Play_UI_Camp_Cooking_Start
*/
void Play_UI_Camp_Cooking_Start(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1274d40ULL || rel >= 0x1274ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01274ec0 size=16 callers=0 calls=0
*/
void sub_1274ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1274ec0ULL || rel >= 0x1274ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01274ed0 size=16 callers=0 calls=0
*/
void sub_1274ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1274ed0ULL || rel >= 0x1274ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01274ee0 size=400 callers=0 calls=4
   calls: sub_1127d00, sub_125de00, sub_5cf8e0, sub_5cf8f0
*/
void sub_1274ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1274ee0ULL || rel >= 0x1275070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275070 size=320 callers=0 calls=4
   calls: sub_1127d00, sub_125de00, sub_5cf8e0, sub_5cf8f0
*/
void sub_1275070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275070ULL || rel >= 0x12751b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012751b0 size=400 callers=0 calls=4
   calls: sub_1127d00, sub_125de00, sub_5cf8e0, sub_5cf8f0
*/
void sub_12751b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12751b0ULL || rel >= 0x1275340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275340 size=400 callers=0 calls=4
   calls: sub_1127d00, sub_125de00, sub_5cf8e0, sub_5cf8f0
*/
void sub_1275340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275340ULL || rel >= 0x12754d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012754d0 size=400 callers=0 calls=4
   calls: sub_1127d00, sub_125de00, sub_5cf8e0, sub_5cf8f0
*/
void sub_12754d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12754d0ULL || rel >= 0x1275660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275660 size=144 callers=0 calls=0
*/
void sub_1275660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275660ULL || rel >= 0x12756f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012756f0 size=144 callers=0 calls=0
*/
void sub_12756f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12756f0ULL || rel >= 0x1275780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275780 size=16 callers=0 calls=0
*/
void sub_1275780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275780ULL || rel >= 0x1275790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275790 size=144 callers=0 calls=0
*/
void sub_1275790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275790ULL || rel >= 0x1275820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275820 size=144 callers=0 calls=0
*/
void sub_1275820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275820ULL || rel >= 0x12758b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012758b0 size=16 callers=0 calls=0
*/
void sub_12758b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12758b0ULL || rel >= 0x12758c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012758c0 size=16 callers=0 calls=0
*/
void sub_12758c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12758c0ULL || rel >= 0x12758d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012758d0 size=144 callers=0 calls=0
*/
void sub_12758d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12758d0ULL || rel >= 0x1275960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275960 size=144 callers=0 calls=0
*/
void sub_1275960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275960ULL || rel >= 0x12759f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012759f0 size=304 callers=0 calls=0
*/
void sub_12759f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12759f0ULL || rel >= 0x1275b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275b20 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1275b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275b20ULL || rel >= 0x1275c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275c70 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1275c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275c70ULL || rel >= 0x1275dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275dc0 size=32 callers=0 calls=0
*/
void sub_1275dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275dc0ULL || rel >= 0x1275de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275de0 size=16 callers=0 calls=0
*/
void sub_1275de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275de0ULL || rel >= 0x1275df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275df0 size=32 callers=0 calls=0
*/
void sub_1275df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275df0ULL || rel >= 0x1275e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275e10 size=32 callers=0 calls=0
*/
void sub_1275e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275e10ULL || rel >= 0x1275e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275e30 size=16 callers=0 calls=0
*/
void sub_1275e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275e30ULL || rel >= 0x1275e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275e40 size=16 callers=0 calls=0
*/
void sub_1275e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275e40ULL || rel >= 0x1275e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275e50 size=16 callers=0 calls=0
*/
void sub_1275e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275e50ULL || rel >= 0x1275e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275e60 size=16 callers=0 calls=0
*/
void sub_1275e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275e60ULL || rel >= 0x1275e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275e70 size=16 callers=0 calls=0
*/
void sub_1275e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275e70ULL || rel >= 0x1275e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275e80 size=16 callers=0 calls=0
*/
void sub_1275e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275e80ULL || rel >= 0x1275e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275e90 size=16 callers=0 calls=0
*/
void sub_1275e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275e90ULL || rel >= 0x1275ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275ea0 size=16 callers=0 calls=0
*/
void sub_1275ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275ea0ULL || rel >= 0x1275eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275eb0 size=16 callers=0 calls=0
*/
void sub_1275eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275eb0ULL || rel >= 0x1275ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275ec0 size=16 callers=0 calls=0
*/
void sub_1275ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275ec0ULL || rel >= 0x1275ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275ed0 size=16 callers=0 calls=0
*/
void sub_1275ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275ed0ULL || rel >= 0x1275ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275ee0 size=16 callers=0 calls=0
*/
void sub_1275ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275ee0ULL || rel >= 0x1275ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275ef0 size=16 callers=0 calls=0
*/
void sub_1275ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275ef0ULL || rel >= 0x1275f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275f00 size=16 callers=0 calls=0
*/
void sub_1275f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275f00ULL || rel >= 0x1275f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275f10 size=16 callers=0 calls=0
*/
void sub_1275f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275f10ULL || rel >= 0x1275f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275f20 size=16 callers=0 calls=0
*/
void sub_1275f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275f20ULL || rel >= 0x1275f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275f30 size=16 callers=0 calls=0
*/
void sub_1275f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275f30ULL || rel >= 0x1275f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275f40 size=16 callers=0 calls=0
*/
void sub_1275f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275f40ULL || rel >= 0x1275f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275f50 size=16 callers=0 calls=0
*/
void sub_1275f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275f50ULL || rel >= 0x1275f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275f60 size=16 callers=0 calls=0
*/
void sub_1275f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275f60ULL || rel >= 0x1275f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275f70 size=16 callers=0 calls=0
*/
void sub_1275f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275f70ULL || rel >= 0x1275f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275f80 size=16 callers=0 calls=0
*/
void sub_1275f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275f80ULL || rel >= 0x1275f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275f90 size=16 callers=0 calls=0
*/
void sub_1275f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275f90ULL || rel >= 0x1275fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275fa0 size=16 callers=0 calls=0
*/
void sub_1275fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275fa0ULL || rel >= 0x1275fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275fb0 size=16 callers=0 calls=0
*/
void sub_1275fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275fb0ULL || rel >= 0x1275fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275fc0 size=16 callers=0 calls=0
*/
void sub_1275fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275fc0ULL || rel >= 0x1275fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275fd0 size=16 callers=0 calls=0
*/
void sub_1275fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275fd0ULL || rel >= 0x1275fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275fe0 size=16 callers=0 calls=0
*/
void sub_1275fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275fe0ULL || rel >= 0x1275ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01275ff0 size=16 callers=0 calls=0
*/
void sub_1275ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275ff0ULL || rel >= 0x1276000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276000 size=16 callers=0 calls=0
*/
void sub_1276000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276000ULL || rel >= 0x1276010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276010 size=16 callers=0 calls=0
*/
void sub_1276010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276010ULL || rel >= 0x1276020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276020 size=16 callers=0 calls=0
*/
void sub_1276020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276020ULL || rel >= 0x1276030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276030 size=16 callers=0 calls=0
*/
void sub_1276030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276030ULL || rel >= 0x1276040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276040 size=16 callers=0 calls=0
*/
void sub_1276040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276040ULL || rel >= 0x1276050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276050 size=16 callers=0 calls=0
*/
void sub_1276050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276050ULL || rel >= 0x1276060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276060 size=16 callers=0 calls=0
*/
void sub_1276060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276060ULL || rel >= 0x1276070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276070 size=16 callers=0 calls=0
*/
void sub_1276070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276070ULL || rel >= 0x1276080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276080 size=16 callers=0 calls=0
*/
void sub_1276080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276080ULL || rel >= 0x1276090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276090 size=16 callers=0 calls=0
*/
void sub_1276090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276090ULL || rel >= 0x12760a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012760a0 size=16 callers=0 calls=0
*/
void sub_12760a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12760a0ULL || rel >= 0x12760b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012760b0 size=208 callers=0 calls=0
*/
void sub_12760b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12760b0ULL || rel >= 0x1276180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276180 size=16 callers=0 calls=0
*/
void sub_1276180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276180ULL || rel >= 0x1276190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276190 size=400 callers=1 calls=4
   calls: sub_e806b0, sub_e83450, sub_e83870, sub_e83a40
   ref: anime_ptn_text
   ref: anime_text_in
*/
void anime_ptn_text(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276190ULL || rel >= 0x1276320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276320 size=384 callers=1 calls=2
   calls: sub_e83450, sub_e83870
   ref: anime_ptn_text
   ref: anime_text_in
*/
void anime_ptn_text_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276320ULL || rel >= 0x12764a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012764a0 size=112 callers=1 calls=0
*/
void sub_12764a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12764a0ULL || rel >= 0x1276510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276510 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokecamp_cooking/bin/pokecamp_cooking_game_call_00_lyt.bin
*/
void pokecamp_cooking_game_call_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276510ULL || rel >= 0x1276620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276620 size=96 callers=0 calls=0
*/
void sub_1276620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276620ULL || rel >= 0x1276680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276680 size=96 callers=0 calls=0
*/
void sub_1276680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276680ULL || rel >= 0x12766e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012766e0 size=16 callers=0 calls=0
*/
void sub_12766e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12766e0ULL || rel >= 0x12766f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012766f0 size=96 callers=0 calls=0
*/
void sub_12766f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12766f0ULL || rel >= 0x1276750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276750 size=96 callers=0 calls=0
*/
void sub_1276750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276750ULL || rel >= 0x12767b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012767b0 size=16 callers=0 calls=0
*/
void sub_12767b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12767b0ULL || rel >= 0x12767c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012767c0 size=16 callers=0 calls=0
*/
void sub_12767c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12767c0ULL || rel >= 0x12767d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012767d0 size=96 callers=0 calls=0
*/
void sub_12767d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12767d0ULL || rel >= 0x1276830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276830 size=96 callers=0 calls=0
*/
void sub_1276830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276830ULL || rel >= 0x1276890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276890 size=304 callers=0 calls=0
*/
void sub_1276890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276890ULL || rel >= 0x12769c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012769c0 size=16 callers=0 calls=0
*/
void sub_12769c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12769c0ULL || rel >= 0x12769d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012769d0 size=16 callers=0 calls=0
*/
void sub_12769d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12769d0ULL || rel >= 0x12769e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012769e0 size=16 callers=0 calls=0
*/
void sub_12769e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12769e0ULL || rel >= 0x12769f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012769f0 size=16 callers=0 calls=0
*/
void sub_12769f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12769f0ULL || rel >= 0x1276a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276a00 size=144 callers=0 calls=1
   calls: sub_14ab2b0
*/
void sub_1276a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276a00ULL || rel >= 0x1276a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276a90 size=16 callers=0 calls=0
*/
void sub_1276a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276a90ULL || rel >= 0x1276aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276aa0 size=16 callers=0 calls=0
*/
void sub_1276aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276aa0ULL || rel >= 0x1276ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276ab0 size=16 callers=0 calls=0
*/
void sub_1276ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276ab0ULL || rel >= 0x1276ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276ac0 size=80 callers=0 calls=2
   calls: sub_e806b0, sub_e833a0
   ref: anime_out
*/
void anime_out_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276ac0ULL || rel >= 0x1276b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276b10 size=48 callers=1 calls=1
   calls: sub_e806b0
*/
void sub_1276b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276b10ULL || rel >= 0x1276b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276b40 size=64 callers=1 calls=1
   calls: sub_e833a0
   ref: anime_out
*/
void anime_out_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276b40ULL || rel >= 0x1276b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276b80 size=256 callers=1 calls=4
   calls: sub_14aad40, sub_e833a0, sub_e837c0, sub_e83870
   ref: anime_L_controller_00_keep_btn
   ref: anime_in
   ref: anime_L_controller_00_throw
   ref: anime_ptn_text
   ref: anime_L_controller_00_keep_mix_joycon
   ref: anime_L_controller_00_keep_swing_joycon
   ref: anime_L_controller_00_in
   ref: anime_L_controller_00_icon_change
*/
void anime_L_controller_00_throw(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276b80ULL || rel >= 0x1276c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276c80 size=64 callers=1 calls=1
   calls: sub_e833a0
   ref: anime_out
*/
void anime_out_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276c80ULL || rel >= 0x1276cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276cc0 size=240 callers=1 calls=4
   calls: sub_14aad40, sub_e833a0, sub_e837c0, sub_e83870
   ref: anime_L_controller_00_keep_btn
   ref: anime_in
   ref: anime_ptn_text
   ref: anime_L_controller_00_keep_mix_joycon
   ref: anime_L_controller_00_keep_swing_joycon
   ref: anime_L_controller_00_in
   ref: anime_L_controller_00_icon_change
*/
void anime_L_controller_00_keep_swing_joycon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276cc0ULL || rel >= 0x1276db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276db0 size=64 callers=1 calls=1
   calls: sub_e833a0
   ref: anime_out
*/
void anime_out_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276db0ULL || rel >= 0x1276df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276df0 size=240 callers=1 calls=4
   calls: sub_14aad40, sub_e833a0, sub_e837c0, sub_e83870
   ref: anime_in
   ref: anime_L_controller_00_throw
   ref: anime_ptn_text
   ref: anime_L_controller_00_keep_mix_joycon
   ref: anime_L_controller_00_keep_swing_joycon
   ref: anime_L_controller_00_in
   ref: anime_L_controller_00_icon_change
*/
void anime_L_controller_00_throw_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276df0ULL || rel >= 0x1276ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276ee0 size=96 callers=1 calls=2
   calls: sub_e833a0, sub_e837c0
   ref: anime_L_controller_00_throw
   ref: anime_out
   ref: anime_L_controller_00_out
*/
void anime_L_controller_00_throw_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276ee0ULL || rel >= 0x1276f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276f40 size=112 callers=1 calls=0
*/
void sub_1276f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276f40ULL || rel >= 0x1276fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01276fb0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokecamp_cooking/bin/pokecamp_cooking_game_order_00_lyt.bin
*/
void pokecamp_cooking_game_order_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1276fb0ULL || rel >= 0x12770c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012770c0 size=96 callers=0 calls=0
*/
void sub_12770c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12770c0ULL || rel >= 0x1277120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277120 size=96 callers=0 calls=0
*/
void sub_1277120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277120ULL || rel >= 0x1277180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277180 size=16 callers=0 calls=0
*/
void sub_1277180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277180ULL || rel >= 0x1277190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277190 size=96 callers=0 calls=0
*/
void sub_1277190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277190ULL || rel >= 0x12771f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012771f0 size=96 callers=0 calls=0
*/
void sub_12771f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12771f0ULL || rel >= 0x1277250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277250 size=16 callers=0 calls=0
*/
void sub_1277250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277250ULL || rel >= 0x1277260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277260 size=16 callers=0 calls=0
*/
void sub_1277260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277260ULL || rel >= 0x1277270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277270 size=96 callers=0 calls=0
*/
void sub_1277270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277270ULL || rel >= 0x12772d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012772d0 size=96 callers=0 calls=0
*/
void sub_12772d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12772d0ULL || rel >= 0x1277330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277330 size=304 callers=0 calls=0
*/
void sub_1277330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277330ULL || rel >= 0x1277460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277460 size=16 callers=0 calls=0
*/
void sub_1277460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277460ULL || rel >= 0x1277470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277470 size=16 callers=0 calls=0
*/
void sub_1277470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277470ULL || rel >= 0x1277480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277480 size=16 callers=0 calls=0
*/
void sub_1277480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277480ULL || rel >= 0x1277490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277490 size=16 callers=0 calls=0
*/
void sub_1277490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277490ULL || rel >= 0x12774a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012774a0 size=432 callers=0 calls=2
   calls: sub_1278120, sub_c39c40
*/
void sub_12774a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12774a0ULL || rel >= 0x1277650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277650 size=1328 callers=0 calls=12
   calls: anime_in_7, msg_pokecamp_optionbar_decide, sub_1127d00, sub_1128340, sub_125de00, sub_12783a0, sub_1278500, sub_1278950, sub_5cf8e0, sub_5cf8f0, sub_e80580, sub_e807d0
*/
void sub_1277650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277650ULL || rel >= 0x1277b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277b80 size=80 callers=0 calls=1
   calls: anime_out_14
*/
void sub_1277b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277b80ULL || rel >= 0x1277bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277bd0 size=928 callers=0 calls=7
   calls: sub_1127d00, sub_125de00, sub_1278e40, sub_5cf8e0, sub_5cf8f0, sub_e80580, sub_e807d0
*/
void sub_1277bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277bd0ULL || rel >= 0x1277f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277f70 size=16 callers=0 calls=0
*/
void sub_1277f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277f70ULL || rel >= 0x1277f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277f80 size=16 callers=0 calls=0
*/
void sub_1277f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277f80ULL || rel >= 0x1277f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277f90 size=16 callers=0 calls=0
*/
void sub_1277f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277f90ULL || rel >= 0x1277fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277fa0 size=16 callers=0 calls=0
*/
void sub_1277fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277fa0ULL || rel >= 0x1277fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277fb0 size=16 callers=0 calls=0
*/
void sub_1277fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277fb0ULL || rel >= 0x1277fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277fc0 size=16 callers=0 calls=0
*/
void sub_1277fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277fc0ULL || rel >= 0x1277fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277fd0 size=16 callers=0 calls=0
*/
void sub_1277fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277fd0ULL || rel >= 0x1277fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277fe0 size=16 callers=0 calls=0
*/
void sub_1277fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277fe0ULL || rel >= 0x1277ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01277ff0 size=304 callers=0 calls=0
*/
void sub_1277ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1277ff0ULL || rel >= 0x1278120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278120 size=272 callers=1 calls=2
   calls: sub_1278230, sub_5cfaf0
*/
void sub_1278120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278120ULL || rel >= 0x1278230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278230 size=304 callers=1 calls=0
*/
void sub_1278230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278230ULL || rel >= 0x1278360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278360 size=16 callers=0 calls=0
*/
void sub_1278360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278360ULL || rel >= 0x1278370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278370 size=16 callers=0 calls=0
*/
void sub_1278370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278370ULL || rel >= 0x1278380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278380 size=16 callers=0 calls=0
*/
void sub_1278380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278380ULL || rel >= 0x1278390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278390 size=16 callers=0 calls=0
*/
void sub_1278390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278390ULL || rel >= 0x12783a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012783a0 size=352 callers=2 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_12783a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12783a0ULL || rel >= 0x1278500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278500 size=352 callers=17 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1278500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278500ULL || rel >= 0x1278660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278660 size=16 callers=0 calls=0
*/
void sub_1278660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278660ULL || rel >= 0x1278670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278670 size=16 callers=0 calls=0
*/
void sub_1278670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278670ULL || rel >= 0x1278680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278680 size=16 callers=0 calls=0
*/
void sub_1278680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278680ULL || rel >= 0x1278690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278690 size=16 callers=0 calls=0
*/
void sub_1278690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278690ULL || rel >= 0x12786a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012786a0 size=16 callers=0 calls=0
*/
void sub_12786a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12786a0ULL || rel >= 0x12786b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012786b0 size=16 callers=0 calls=0
*/
void sub_12786b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12786b0ULL || rel >= 0x12786c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012786c0 size=16 callers=0 calls=0
*/
void sub_12786c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12786c0ULL || rel >= 0x12786d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012786d0 size=16 callers=0 calls=0
*/
void sub_12786d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12786d0ULL || rel >= 0x12786e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012786e0 size=128 callers=0 calls=0
*/
void sub_12786e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12786e0ULL || rel >= 0x1278760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278760 size=496 callers=0 calls=7
   calls: sub_1278950, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1860, sub_e806b0, sub_e84250
*/
void sub_1278760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278760ULL || rel >= 0x1278950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278950 size=608 callers=2 calls=11
   calls: sub_117bf10, sub_117bf30, sub_1278bb0, sub_1279660, sub_127a0a0, sub_14edac0, sub_14eead0, sub_14eebd0, sub_14eebe0, sub_14eebf0, sub_14f1870
*/
void sub_1278950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278950ULL || rel >= 0x1278bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278bb0 size=288 callers=5 calls=2
   calls: sub_1279430, sub_1c0
*/
void sub_1278bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278bb0ULL || rel >= 0x1278cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278cd0 size=16 callers=0 calls=0
*/
void sub_1278cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278cd0ULL || rel >= 0x1278ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278ce0 size=96 callers=1 calls=4
   calls: sub_14e1a30, sub_e806b0, sub_e836a0, sub_e83d70
   ref: anime_in
   ref: left_00
*/
void anime_in_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278ce0ULL || rel >= 0x1278d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278d40 size=256 callers=1 calls=4
   calls: sub_14e1a30, sub_e80580, sub_e83450, sub_e84310
   ref: anime_out
*/
void anime_out_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278d40ULL || rel >= 0x1278e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278e40 size=80 callers=1 calls=2
   calls: sub_14eebd0, sub_14eebe0
*/
void sub_1278e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278e40ULL || rel >= 0x1278e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01278e90 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokecamp/bin/uikit_pokecamp_toy_00.bin
   ref: bin/appli/pokecamp/bin/pokecamp_toy_00_lyt.bin
*/
void uikit_pokecamp_toy_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278e90ULL || rel >= 0x1279070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279070 size=80 callers=0 calls=1
   calls: sub_1500c40
*/
void sub_1279070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279070ULL || rel >= 0x12790c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012790c0 size=128 callers=0 calls=0
*/
void sub_12790c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12790c0ULL || rel >= 0x1279140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279140 size=128 callers=0 calls=0
*/
void sub_1279140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279140ULL || rel >= 0x12791c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012791c0 size=16 callers=0 calls=0
*/
void sub_12791c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12791c0ULL || rel >= 0x12791d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012791d0 size=128 callers=0 calls=0
*/
void sub_12791d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12791d0ULL || rel >= 0x1279250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279250 size=128 callers=0 calls=0
*/
void sub_1279250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279250ULL || rel >= 0x12792d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012792d0 size=16 callers=0 calls=0
*/
void sub_12792d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12792d0ULL || rel >= 0x12792e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012792e0 size=16 callers=0 calls=0
*/
void sub_12792e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12792e0ULL || rel >= 0x12792f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012792f0 size=128 callers=0 calls=0
*/
void sub_12792f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12792f0ULL || rel >= 0x1279370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279370 size=128 callers=0 calls=0
*/
void sub_1279370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279370ULL || rel >= 0x12793f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012793f0 size=64 callers=0 calls=0
*/
void sub_12793f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12793f0ULL || rel >= 0x1279430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279430 size=304 callers=1 calls=0
*/
void sub_1279430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279430ULL || rel >= 0x1279560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279560 size=96 callers=0 calls=1
   calls: sub_14ee830
*/
void sub_1279560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279560ULL || rel >= 0x12795c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012795c0 size=16 callers=0 calls=0
*/
void sub_12795c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12795c0ULL || rel >= 0x12795d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012795d0 size=16 callers=0 calls=0
*/
void sub_12795d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12795d0ULL || rel >= 0x12795e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012795e0 size=16 callers=0 calls=0
*/
void sub_12795e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12795e0ULL || rel >= 0x12795f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012795f0 size=64 callers=0 calls=0
*/
void sub_12795f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12795f0ULL || rel >= 0x1279630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279630 size=16 callers=0 calls=0
*/
void sub_1279630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279630ULL || rel >= 0x1279640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279640 size=16 callers=0 calls=0
*/
void sub_1279640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279640ULL || rel >= 0x1279650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279650 size=16 callers=0 calls=0
*/
void sub_1279650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279650ULL || rel >= 0x1279660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279660 size=464 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1279660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279660ULL || rel >= 0x1279830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279830 size=240 callers=0 calls=0
*/
void sub_1279830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279830ULL || rel >= 0x1279920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279920 size=240 callers=0 calls=0
*/
void sub_1279920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279920ULL || rel >= 0x1279a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279a10 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_1279a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279a10ULL || rel >= 0x1279a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279a80 size=16 callers=0 calls=0
*/
void sub_1279a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279a80ULL || rel >= 0x1279a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279a90 size=48 callers=0 calls=0
*/
void sub_1279a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279a90ULL || rel >= 0x1279ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279ac0 size=320 callers=0 calls=0
*/
void sub_1279ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279ac0ULL || rel >= 0x1279c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279c00 size=240 callers=0 calls=0
*/
void sub_1279c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279c00ULL || rel >= 0x1279cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279cf0 size=240 callers=0 calls=0
*/
void sub_1279cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279cf0ULL || rel >= 0x1279de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279de0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_1279de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279de0ULL || rel >= 0x1279e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279e50 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_1279e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279e50ULL || rel >= 0x1279ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279ec0 size=240 callers=0 calls=0
*/
void sub_1279ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279ec0ULL || rel >= 0x1279fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01279fb0 size=240 callers=0 calls=0
*/
void sub_1279fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1279fb0ULL || rel >= 0x127a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a0a0 size=464 callers=1 calls=0
*/
void sub_127a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a0a0ULL || rel >= 0x127a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a270 size=48 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_127a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a270ULL || rel >= 0x127a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a2a0 size=16 callers=0 calls=0
*/
void sub_127a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a2a0ULL || rel >= 0x127a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a2b0 size=16 callers=0 calls=0
*/
void sub_127a2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a2b0ULL || rel >= 0x127a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a2c0 size=16 callers=0 calls=0
*/
void sub_127a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a2c0ULL || rel >= 0x127a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a2d0 size=96 callers=0 calls=1
   calls: sub_125de00
*/
void sub_127a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a2d0ULL || rel >= 0x127a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a330 size=352 callers=0 calls=6
   calls: sub_1127fc0, sub_125de00, sub_127a490, sub_127a810, sub_5cf8e0, sub_5cf8f0
*/
void sub_127a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a330ULL || rel >= 0x127a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a490 size=448 callers=1 calls=8
   calls: sub_125a0f0, sub_125de00, sub_1263070, sub_12630d0, sub_1263640, sub_1263a40, sub_c39c40, sub_e7eb10
*/
void sub_127a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a490ULL || rel >= 0x127a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a650 size=16 callers=0 calls=0
*/
void sub_127a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a650ULL || rel >= 0x127a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a660 size=16 callers=0 calls=0
*/
void sub_127a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a660ULL || rel >= 0x127a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a670 size=16 callers=0 calls=0
*/
void sub_127a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a670ULL || rel >= 0x127a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a680 size=16 callers=0 calls=0
*/
void sub_127a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a680ULL || rel >= 0x127a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a690 size=16 callers=0 calls=0
*/
void sub_127a690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a690ULL || rel >= 0x127a6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a6a0 size=16 callers=0 calls=0
*/
void sub_127a6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a6a0ULL || rel >= 0x127a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a6b0 size=16 callers=0 calls=0
*/
void sub_127a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a6b0ULL || rel >= 0x127a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a6c0 size=16 callers=0 calls=0
*/
void sub_127a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a6c0ULL || rel >= 0x127a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a6d0 size=16 callers=0 calls=0
*/
void sub_127a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a6d0ULL || rel >= 0x127a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a6e0 size=304 callers=0 calls=0
*/
void sub_127a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a6e0ULL || rel >= 0x127a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a810 size=352 callers=1 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_127a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a810ULL || rel >= 0x127a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127a970 size=256 callers=0 calls=3
   calls: sub_1127d00, sub_5cf8e0, sub_5cf8f0
*/
void sub_127a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a970ULL || rel >= 0x127aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127aa70 size=16 callers=0 calls=0
*/
void sub_127aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127aa70ULL || rel >= 0x127aa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127aa80 size=16 callers=0 calls=0
*/
void sub_127aa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127aa80ULL || rel >= 0x127aa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127aa90 size=16 callers=0 calls=0
*/
void sub_127aa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127aa90ULL || rel >= 0x127aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127aaa0 size=128 callers=0 calls=0
*/
void sub_127aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127aaa0ULL || rel >= 0x127ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127ab20 size=800 callers=0 calls=14
   calls: sub_125a0f0, sub_125de00, sub_1263070, sub_1263300, sub_12633f0, sub_126ec70, sub_127b460, sub_1313e50, sub_13149a0, sub_1315270, sub_795bc0, sub_c39c40
   ... +2 more
   ref: optionbar
*/
void optionbar_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127ab20ULL || rel >= 0x127ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127ae40 size=1120 callers=0 calls=9
   calls: sub_1127fc0, sub_125a0f0, sub_125de00, sub_12630d0, sub_1263340, sub_1263640, sub_1263a40, sub_5cf8e0, sub_5cf8f0
*/
void sub_127ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127ae40ULL || rel >= 0x127b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b2a0 size=16 callers=0 calls=0
*/
void sub_127b2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b2a0ULL || rel >= 0x127b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b2b0 size=16 callers=0 calls=0
*/
void sub_127b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b2b0ULL || rel >= 0x127b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b2c0 size=16 callers=0 calls=0
*/
void sub_127b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b2c0ULL || rel >= 0x127b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b2d0 size=16 callers=0 calls=0
*/
void sub_127b2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b2d0ULL || rel >= 0x127b2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b2e0 size=16 callers=0 calls=0
*/
void sub_127b2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b2e0ULL || rel >= 0x127b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b2f0 size=16 callers=0 calls=0
*/
void sub_127b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b2f0ULL || rel >= 0x127b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b300 size=16 callers=0 calls=0
*/
void sub_127b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b300ULL || rel >= 0x127b310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b310 size=16 callers=0 calls=0
*/
void sub_127b310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b310ULL || rel >= 0x127b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b320 size=16 callers=0 calls=0
*/
void sub_127b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b320ULL || rel >= 0x127b330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b330 size=304 callers=0 calls=0
*/
void sub_127b330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b330ULL || rel >= 0x127b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b460 size=352 callers=1 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_127b460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b460ULL || rel >= 0x127b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b5c0 size=32 callers=0 calls=0
*/
void sub_127b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b5c0ULL || rel >= 0x127b5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b5e0 size=16 callers=0 calls=0
*/
void sub_127b5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b5e0ULL || rel >= 0x127b5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b5f0 size=16 callers=0 calls=0
*/
void sub_127b5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b5f0ULL || rel >= 0x127b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b600 size=16 callers=0 calls=0
*/
void sub_127b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b600ULL || rel >= 0x127b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b610 size=64 callers=0 calls=1
   calls: sub_12635f0
*/
void sub_127b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b610ULL || rel >= 0x127b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b650 size=16 callers=0 calls=0
*/
void sub_127b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b650ULL || rel >= 0x127b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b660 size=16 callers=0 calls=0
*/
void sub_127b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b660ULL || rel >= 0x127b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b670 size=16 callers=0 calls=0
*/
void sub_127b670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b670ULL || rel >= 0x127b680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b680 size=32 callers=0 calls=0
*/
void sub_127b680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b680ULL || rel >= 0x127b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b6a0 size=16 callers=0 calls=0
*/
void sub_127b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b6a0ULL || rel >= 0x127b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b6b0 size=16 callers=0 calls=0
*/
void sub_127b6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b6b0ULL || rel >= 0x127b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b6c0 size=16 callers=0 calls=0
*/
void sub_127b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b6c0ULL || rel >= 0x127b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b6d0 size=256 callers=0 calls=3
   calls: sub_1127d00, sub_5cf8e0, sub_5cf8f0
*/
void sub_127b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b6d0ULL || rel >= 0x127b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b7d0 size=16 callers=0 calls=0
*/
void sub_127b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b7d0ULL || rel >= 0x127b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b7e0 size=16 callers=0 calls=0
*/
void sub_127b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b7e0ULL || rel >= 0x127b7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b7f0 size=16 callers=0 calls=0
*/
void sub_127b7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b7f0ULL || rel >= 0x127b800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b800 size=256 callers=0 calls=3
   calls: sub_1127d00, sub_5cf8e0, sub_5cf8f0
*/
void sub_127b800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b800ULL || rel >= 0x127b900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b900 size=16 callers=0 calls=0
*/
void sub_127b900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b900ULL || rel >= 0x127b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b910 size=16 callers=0 calls=0
*/
void sub_127b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b910ULL || rel >= 0x127b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b920 size=16 callers=0 calls=0
*/
void sub_127b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b920ULL || rel >= 0x127b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b930 size=128 callers=0 calls=0
*/
void sub_127b930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b930ULL || rel >= 0x127b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127b9b0 size=1120 callers=0 calls=17
   calls: sub_115b9f0, sub_1179ec0, sub_125a0f0, sub_125b840, sub_125de00, sub_1263070, sub_12630d0, sub_1263300, sub_1263340, sub_12633f0, sub_12635b0, sub_1263640
   ... +5 more
   ref: msg_pokecamp_end_00
   ref: msg_pokecamp_end_01
*/
void msg_pokecamp_end_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127b9b0ULL || rel >= 0x127be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127be10 size=96 callers=0 calls=1
   calls: sub_125de00
*/
void sub_127be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127be10ULL || rel >= 0x127be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127be70 size=16 callers=0 calls=0
*/
void sub_127be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127be70ULL || rel >= 0x127be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127be80 size=16 callers=0 calls=0
*/
void sub_127be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127be80ULL || rel >= 0x127be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127be90 size=16 callers=0 calls=0
*/
void sub_127be90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127be90ULL || rel >= 0x127bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127bea0 size=16 callers=0 calls=0
*/
void sub_127bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127bea0ULL || rel >= 0x127beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127beb0 size=16 callers=0 calls=0
*/
void sub_127beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127beb0ULL || rel >= 0x127bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127bec0 size=16 callers=0 calls=0
*/
void sub_127bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127bec0ULL || rel >= 0x127bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

