/* sdk functions 00474920..00492ee0 (48 of 53). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00474920 size=152 callers=0 calls=0
*/
void sub_474920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x474920ULL || rel >= 0x4749b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004749b8 size=8 callers=0 calls=0
*/
void sub_4749b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4749b8ULL || rel >= 0x4749c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004749c0 size=8 callers=0 calls=0
*/
void sub_4749c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4749c0ULL || rel >= 0x4749c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004749c8 size=16 callers=0 calls=0
*/
void sub_4749c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4749c8ULL || rel >= 0x4749d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004749d8 size=16 callers=0 calls=0
*/
void sub_4749d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4749d8ULL || rel >= 0x4749e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004749e8 size=16 callers=0 calls=0
*/
void sub_4749e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4749e8ULL || rel >= 0x4749f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004749f8 size=16 callers=0 calls=0
*/
void sub_4749f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4749f8ULL || rel >= 0x474a08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00474a08 size=8 callers=0 calls=0
*/
void sub_474a08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x474a08ULL || rel >= 0x474a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00474a10 size=8 callers=0 calls=0
*/
void sub_474a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x474a10ULL || rel >= 0x474a18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00474a18 size=8 callers=0 calls=0
*/
void sub_474a18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x474a18ULL || rel >= 0x474a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00474a20 size=2024 callers=0 calls=4
   calls: sub_44d288, sub_484510, sub_48b560, sub_48f690
   ref: moneypunct_byname failed to construct for 
   ref: locale not supported
*/
void moneypunct_byname_failed_to_construct_for_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x474a20ULL || rel >= 0x475208ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475208 size=152 callers=0 calls=0
*/
void sub_475208(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475208ULL || rel >= 0x4752a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004752a0 size=152 callers=0 calls=0
*/
void sub_4752a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4752a0ULL || rel >= 0x475338ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475338 size=8 callers=0 calls=0
*/
void sub_475338(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475338ULL || rel >= 0x475340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475340 size=8 callers=0 calls=0
*/
void sub_475340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475340ULL || rel >= 0x475348ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475348 size=16 callers=0 calls=0
*/
void sub_475348(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475348ULL || rel >= 0x475358ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475358 size=16 callers=0 calls=0
*/
void sub_475358(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475358ULL || rel >= 0x475368ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475368 size=16 callers=0 calls=0
*/
void sub_475368(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475368ULL || rel >= 0x475378ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475378 size=16 callers=0 calls=0
*/
void sub_475378(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475378ULL || rel >= 0x475388ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475388 size=8 callers=0 calls=0
*/
void sub_475388(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475388ULL || rel >= 0x475390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475390 size=8 callers=0 calls=0
*/
void sub_475390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475390ULL || rel >= 0x475398ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475398 size=8 callers=0 calls=0
*/
void sub_475398(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475398ULL || rel >= 0x4753a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004753a0 size=2024 callers=0 calls=4
   calls: sub_44d288, sub_484510, sub_48b560, sub_48f690
   ref: moneypunct_byname failed to construct for 
   ref: locale not supported
*/
void moneypunct_byname_failed_to_construct_for_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4753a0ULL || rel >= 0x475b88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475b88 size=152 callers=0 calls=0
*/
void sub_475b88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475b88ULL || rel >= 0x475c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475c20 size=152 callers=0 calls=0
*/
void sub_475c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475c20ULL || rel >= 0x475cb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475cb8 size=8 callers=0 calls=0
*/
void sub_475cb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475cb8ULL || rel >= 0x475cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475cc0 size=8 callers=0 calls=0
*/
void sub_475cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475cc0ULL || rel >= 0x475cc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475cc8 size=16 callers=0 calls=0
*/
void sub_475cc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475cc8ULL || rel >= 0x475cd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475cd8 size=16 callers=0 calls=0
*/
void sub_475cd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475cd8ULL || rel >= 0x475ce8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475ce8 size=16 callers=0 calls=0
*/
void sub_475ce8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475ce8ULL || rel >= 0x475cf8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475cf8 size=16 callers=0 calls=0
*/
void sub_475cf8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475cf8ULL || rel >= 0x475d08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475d08 size=8 callers=0 calls=0
*/
void sub_475d08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475d08ULL || rel >= 0x475d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475d10 size=8 callers=0 calls=0
*/
void sub_475d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475d10ULL || rel >= 0x475d18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475d18 size=8 callers=0 calls=0
*/
void sub_475d18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475d18ULL || rel >= 0x475d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475d20 size=8 callers=0 calls=0
*/
void sub_475d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475d20ULL || rel >= 0x475d28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475d28 size=40 callers=0 calls=0
*/
void sub_475d28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475d28ULL || rel >= 0x475d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475d50 size=1072 callers=0 calls=1
   calls: sub_44d288
   ref: 0123456789
   ref: money_get error
*/
void money_get_error(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475d50ULL || rel >= 0x476180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00476180 size=8 callers=0 calls=0
*/
void sub_476180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x476180ULL || rel >= 0x476188ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00476188 size=5296 callers=0 calls=1
   calls: sub_44d288
*/
void sub_476188(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x476188ULL || rel >= 0x477638ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477638 size=80 callers=0 calls=0
*/
void sub_477638(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477638ULL || rel >= 0x477688ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477688 size=776 callers=0 calls=2
   calls: sub_44d288, sub_491a60
*/
void sub_477688(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477688ULL || rel >= 0x477990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477990 size=792 callers=0 calls=0
*/
void sub_477990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477990ULL || rel >= 0x477ca8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477ca8 size=248 callers=0 calls=0
*/
void sub_477ca8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477ca8ULL || rel >= 0x477da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477da0 size=8 callers=0 calls=0
*/
void sub_477da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477da0ULL || rel >= 0x477da8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477da8 size=40 callers=0 calls=0
*/
void sub_477da8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477da8ULL || rel >= 0x477dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477dd0 size=1112 callers=0 calls=1
   calls: sub_44d288
   ref: 0123456789
   ref: money_get error
*/
void money_get_error_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477dd0ULL || rel >= 0x478228ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478228 size=5408 callers=0 calls=1
   calls: sub_44d288
*/
void sub_478228(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478228ULL || rel >= 0x479748ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00479748 size=800 callers=0 calls=2
   calls: sub_44d288, sub_491d20
*/
void sub_479748(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x479748ULL || rel >= 0x479a68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00479a68 size=800 callers=0 calls=0
*/
void sub_479a68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x479a68ULL || rel >= 0x479d88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00479d88 size=8 callers=0 calls=0
*/
void sub_479d88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x479d88ULL || rel >= 0x479d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00479d90 size=40 callers=0 calls=0
*/
void sub_479d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x479d90ULL || rel >= 0x479db8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00479db8 size=1280 callers=0 calls=2
   calls: sub_468250, sub_469020
*/
void sub_479db8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x479db8ULL || rel >= 0x47a2b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047a2b8 size=760 callers=0 calls=0
*/
void sub_47a2b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47a2b8ULL || rel >= 0x47a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047a5b0 size=1544 callers=0 calls=0
*/
void sub_47a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47a5b0ULL || rel >= 0x47abb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047abb8 size=992 callers=0 calls=1
   calls: sub_468250
*/
void sub_47abb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47abb8ULL || rel >= 0x47af98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047af98 size=8 callers=0 calls=0
*/
void sub_47af98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47af98ULL || rel >= 0x47afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047afa0 size=40 callers=0 calls=0
*/
void sub_47afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47afa0ULL || rel >= 0x47afc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047afc8 size=1304 callers=0 calls=2
   calls: sub_469020, sub_46a6c0
*/
void sub_47afc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47afc8ULL || rel >= 0x47b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047b4e0 size=752 callers=0 calls=0
*/
void sub_47b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47b4e0ULL || rel >= 0x47b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047b7d0 size=1656 callers=0 calls=0
*/
void sub_47b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47b7d0ULL || rel >= 0x47be48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047be48 size=1008 callers=0 calls=1
   calls: sub_46a6c0
*/
void sub_47be48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47be48ULL || rel >= 0x47c238ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c238 size=8 callers=0 calls=0
*/
void sub_47c238(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c238ULL || rel >= 0x47c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c240 size=40 callers=0 calls=0
*/
void sub_47c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c240ULL || rel >= 0x47c268ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c268 size=8 callers=0 calls=0
*/
void sub_47c268(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c268ULL || rel >= 0x47c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c270 size=16 callers=0 calls=0
*/
void sub_47c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c270ULL || rel >= 0x47c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c280 size=8 callers=0 calls=0
*/
void sub_47c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c280ULL || rel >= 0x47c288ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c288 size=8 callers=0 calls=0
*/
void sub_47c288(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c288ULL || rel >= 0x47c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c290 size=40 callers=0 calls=0
*/
void sub_47c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c290ULL || rel >= 0x47c2b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c2b8 size=8 callers=0 calls=0
*/
void sub_47c2b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c2b8ULL || rel >= 0x47c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c2c0 size=16 callers=0 calls=0
*/
void sub_47c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c2c0ULL || rel >= 0x47c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c2d0 size=8 callers=0 calls=0
*/
void sub_47c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c2d0ULL || rel >= 0x47c2d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c2d8 size=8 callers=0 calls=0
*/
void sub_47c2d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c2d8ULL || rel >= 0x47c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c2e0 size=40 callers=0 calls=0
*/
void sub_47c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c2e0ULL || rel >= 0x47c308ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c308 size=8 callers=0 calls=0
*/
void sub_47c308(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c308ULL || rel >= 0x47c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c310 size=40 callers=0 calls=0
*/
void sub_47c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c310ULL || rel >= 0x47c338ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c338 size=8 callers=0 calls=0
*/
void sub_47c338(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c338ULL || rel >= 0x47c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c340 size=40 callers=0 calls=0
*/
void sub_47c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c340ULL || rel >= 0x47c368ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c368 size=384 callers=0 calls=1
   calls: sub_484510
   ref: codecvt_byname<wchar_t, char, mbstate_t>::codecvt_byname failed to construct for 
*/
void codecvt_byname_wchar_t_char_mbstate_t_codecvt_byname_fai(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c368ULL || rel >= 0x47c4e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c4e8 size=8 callers=0 calls=0
*/
void sub_47c4e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c4e8ULL || rel >= 0x47c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c4f0 size=40 callers=0 calls=0
*/
void sub_47c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c4f0ULL || rel >= 0x47c518ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c518 size=8 callers=0 calls=0
*/
void sub_47c518(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c518ULL || rel >= 0x47c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c520 size=40 callers=0 calls=0
*/
void sub_47c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c520ULL || rel >= 0x47c548ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c548 size=8 callers=0 calls=0
*/
void sub_47c548(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c548ULL || rel >= 0x47c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c550 size=40 callers=0 calls=0
*/
void sub_47c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c550ULL || rel >= 0x47c578ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c578 size=7768 callers=3 calls=1
   calls: sub_490bf0
*/
void sub_47c578(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c578ULL || rel >= 0x47e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047e3d0 size=2240 callers=2 calls=24
   calls: sub_44d288, sub_47c578, sub_47ed18, sub_47ee30, sub_47ef48, sub_47f060, sub_47f178, sub_47f290, sub_47f3a8, sub_47f4c0, sub_47f5d8, sub_47f6f0
   ... +12 more
   ref: time_put_byname failed to construct for 
*/
void time_put_byname_failed_to_construct_for_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47e3d0ULL || rel >= 0x47ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047ec90 size=136 callers=0 calls=1
   calls: sub_47c578
*/
void sub_47ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47ec90ULL || rel >= 0x47ed18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047ed18 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47ed18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47ed18ULL || rel >= 0x47ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047ee30 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47ee30ULL || rel >= 0x47ef48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047ef48 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47ef48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47ef48ULL || rel >= 0x47f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047f060 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47f060ULL || rel >= 0x47f178ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047f178 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47f178(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47f178ULL || rel >= 0x47f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047f290 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47f290ULL || rel >= 0x47f3a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047f3a8 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47f3a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47f3a8ULL || rel >= 0x47f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047f4c0 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47f4c0ULL || rel >= 0x47f5d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047f5d8 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47f5d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47f5d8ULL || rel >= 0x47f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047f6f0 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47f6f0ULL || rel >= 0x47f808ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047f808 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47f808(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47f808ULL || rel >= 0x47f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047f920 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47f920ULL || rel >= 0x47fa38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047fa38 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47fa38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47fa38ULL || rel >= 0x47fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047fb50 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47fb50ULL || rel >= 0x47fc68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047fc68 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47fc68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47fc68ULL || rel >= 0x47fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047fd80 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47fd80ULL || rel >= 0x47fe98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047fe98 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47fe98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47fe98ULL || rel >= 0x47ffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047ffb0 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_47ffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47ffb0ULL || rel >= 0x4800c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004800c8 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_4800c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4800c8ULL || rel >= 0x4801e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004801e0 size=280 callers=2 calls=1
   calls: sub_490bf0
*/
void sub_4801e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4801e0ULL || rel >= 0x4802f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004802f8 size=2248 callers=2 calls=23
   calls: sub_44d288, sub_47ed18, sub_47ee30, sub_47ef48, sub_47f060, sub_47f178, sub_47f290, sub_47f3a8, sub_47f4c0, sub_47f5d8, sub_47f6f0, sub_47f808
   ... +11 more
   ref: time_put_byname failed to construct for 
*/
void time_put_byname_failed_to_construct_for_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4802f8ULL || rel >= 0x480bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00480bc0 size=856 callers=1 calls=30
   calls: sub_44d288, sub_480f18, sub_481070, sub_4811c8, sub_481320, sub_481478, sub_4815d0, sub_481728, sub_481880, sub_4819d8, sub_481b30, sub_481c88
   ... +18 more
*/
void sub_480bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x480bc0ULL || rel >= 0x480f18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00480f18 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_480f18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x480f18ULL || rel >= 0x481070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481070 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_481070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481070ULL || rel >= 0x4811c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004811c8 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_4811c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4811c8ULL || rel >= 0x481320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481320 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_481320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481320ULL || rel >= 0x481478ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481478 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_481478(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481478ULL || rel >= 0x4815d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004815d0 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_4815d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4815d0ULL || rel >= 0x481728ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481728 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_481728(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481728ULL || rel >= 0x481880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481880 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_481880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481880ULL || rel >= 0x4819d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004819d8 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_4819d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4819d8ULL || rel >= 0x481b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481b30 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_481b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481b30ULL || rel >= 0x481c88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481c88 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_481c88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481c88ULL || rel >= 0x481de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481de0 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_481de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481de0ULL || rel >= 0x481f38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481f38 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_481f38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481f38ULL || rel >= 0x482090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00482090 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_482090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482090ULL || rel >= 0x4821e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004821e8 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_4821e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4821e8ULL || rel >= 0x482340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00482340 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_482340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482340ULL || rel >= 0x482498ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00482498 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_482498(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482498ULL || rel >= 0x4825f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004825f0 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_4825f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4825f0ULL || rel >= 0x482748ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00482748 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_482748(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482748ULL || rel >= 0x4828a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004828a0 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_4828a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4828a0ULL || rel >= 0x4829f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004829f8 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_4829f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4829f8ULL || rel >= 0x482b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00482b50 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_482b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482b50ULL || rel >= 0x482ca8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00482ca8 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_482ca8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482ca8ULL || rel >= 0x482e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00482e00 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_482e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482e00ULL || rel >= 0x482f58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00482f58 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_482f58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482f58ULL || rel >= 0x4830b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004830b0 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_4830b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4830b0ULL || rel >= 0x483208ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483208 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_483208(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483208ULL || rel >= 0x483360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483360 size=344 callers=1 calls=1
   calls: sub_490bf0
*/
void sub_483360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483360ULL || rel >= 0x4834b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004834b8 size=640 callers=1 calls=2
   calls: sub_490a68, sub_490bf0
*/
void sub_4834b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4834b8ULL || rel >= 0x483738ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483738 size=176 callers=0 calls=0
*/
void sub_483738(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483738ULL || rel >= 0x4837e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004837e8 size=176 callers=0 calls=0
*/
void sub_4837e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4837e8ULL || rel >= 0x483898ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483898 size=216 callers=0 calls=1
   calls: sub_47c578
*/
void sub_483898(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483898ULL || rel >= 0x483970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483970 size=48 callers=0 calls=1
   calls: sub_44d288
*/
void sub_483970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483970ULL || rel >= 0x4839a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004839a0 size=24 callers=0 calls=0
*/
void sub_4839a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4839a0ULL || rel >= 0x4839b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004839b8 size=8 callers=0 calls=0
*/
void sub_4839b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4839b8ULL || rel >= 0x4839c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004839c0 size=64 callers=0 calls=0
*/
void sub_4839c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4839c0ULL || rel >= 0x483a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483a00 size=368 callers=0 calls=1
   calls: time_put_byname_failed_to_construct_for_3
   ref: locale constructed with null
*/
void locale_constructed_with_null(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483a00ULL || rel >= 0x483b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483b70 size=96 callers=0 calls=1
   calls: time_put_byname_failed_to_construct_for_3
*/
void sub_483b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483b70ULL || rel >= 0x483bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483bd0 size=392 callers=0 calls=1
   calls: time_put_byname_failed_to_construct_for_4
   ref: locale constructed with null
*/
void locale_constructed_with_null_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483bd0ULL || rel >= 0x483d58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483d58 size=104 callers=0 calls=1
   calls: time_put_byname_failed_to_construct_for_4
*/
void sub_483d58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483d58ULL || rel >= 0x483dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483dc0 size=104 callers=0 calls=1
   calls: sub_480bc0
*/
void sub_483dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483dc0ULL || rel >= 0x483e28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483e28 size=16 callers=0 calls=0
*/
void sub_483e28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483e28ULL || rel >= 0x483e38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483e38 size=120 callers=0 calls=1
   calls: sub_4834b8
*/
void sub_483e38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483e38ULL || rel >= 0x483eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483eb0 size=344 callers=0 calls=1
   calls: sub_44d288
*/
void sub_483eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483eb0ULL || rel >= 0x484008ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484008 size=176 callers=0 calls=0
*/
void sub_484008(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484008ULL || rel >= 0x4840b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004840b8 size=120 callers=0 calls=0
*/
void sub_4840b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4840b8ULL || rel >= 0x484130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484130 size=192 callers=0 calls=0
*/
void sub_484130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484130ULL || rel >= 0x4841f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004841f0 size=320 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4841f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4841f0ULL || rel >= 0x484330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484330 size=40 callers=0 calls=0
*/
void sub_484330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484330ULL || rel >= 0x484358ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484358 size=24 callers=0 calls=0
*/
void sub_484358(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484358ULL || rel >= 0x484370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484370 size=32 callers=0 calls=0
*/
void sub_484370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484370ULL || rel >= 0x484390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484390 size=384 callers=0 calls=1
   calls: sub_484510
   ref: collate_byname<char>::collate_byname failed to construct for 
*/
void collate_byname_char_collate_byname_failed_to_construct_f(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484390ULL || rel >= 0x484510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484510 size=80 callers=25 calls=0
*/
void sub_484510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484510ULL || rel >= 0x484560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484560 size=184 callers=0 calls=1
   calls: sub_484510
   ref: collate_byname<char>::collate_byname failed to construct for 
*/
void collate_byname_char_collate_byname_failed_to_construct_f_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484560ULL || rel >= 0x484618ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484618 size=80 callers=0 calls=1
   calls: sub_44d288
*/
void sub_484618(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484618ULL || rel >= 0x484668ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484668 size=88 callers=0 calls=1
   calls: sub_44d288
*/
void sub_484668(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484668ULL || rel >= 0x4846c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004846c0 size=656 callers=0 calls=0
*/
void sub_4846c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4846c0ULL || rel >= 0x484950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484950 size=568 callers=0 calls=0
*/
void sub_484950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484950ULL || rel >= 0x484b88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484b88 size=384 callers=0 calls=1
   calls: sub_484510
   ref: collate_byname<wchar_t>::collate_byname(size_t refs) failed to construct for 
*/
void collate_byname_wchar_t_collate_byname_size_t_refs_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484b88ULL || rel >= 0x484d08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484d08 size=184 callers=0 calls=1
   calls: sub_484510
   ref: collate_byname<wchar_t>::collate_byname(size_t refs) failed to construct for 
*/
void collate_byname_wchar_t_collate_byname_size_t_refs_failed_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484d08ULL || rel >= 0x484dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484dc0 size=80 callers=0 calls=1
   calls: sub_44d288
*/
void sub_484dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484dc0ULL || rel >= 0x484e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484e10 size=88 callers=0 calls=1
   calls: sub_44d288
*/
void sub_484e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484e10ULL || rel >= 0x484e68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484e68 size=272 callers=0 calls=1
   calls: allocator_T_allocate_size_t_n_n_exceeds_maximum_supporte
*/
void sub_484e68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484e68ULL || rel >= 0x484f78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484f78 size=272 callers=0 calls=1
   calls: allocator_T_allocate_size_t_n_n_exceeds_maximum_supporte
*/
void sub_484f78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484f78ULL || rel >= 0x485088ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485088 size=40 callers=0 calls=0
*/
void sub_485088(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485088ULL || rel >= 0x4850b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004850b0 size=40 callers=0 calls=0
*/
void sub_4850b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4850b0ULL || rel >= 0x4850d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004850d8 size=16 callers=0 calls=0
*/
void sub_4850d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4850d8ULL || rel >= 0x4850e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004850e8 size=104 callers=0 calls=0
*/
void sub_4850e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4850e8ULL || rel >= 0x485150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485150 size=64 callers=0 calls=0
*/
void sub_485150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485150ULL || rel >= 0x485190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485190 size=64 callers=0 calls=0
*/
void sub_485190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485190ULL || rel >= 0x4851d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004851d0 size=184 callers=0 calls=0
*/
void sub_4851d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4851d0ULL || rel >= 0x485288ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485288 size=248 callers=0 calls=0
*/
void sub_485288(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485288ULL || rel >= 0x485380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485380 size=184 callers=0 calls=0
*/
void sub_485380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485380ULL || rel >= 0x485438ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485438 size=248 callers=0 calls=0
*/
void sub_485438(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485438ULL || rel >= 0x485530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485530 size=8 callers=0 calls=0
*/
void sub_485530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485530ULL || rel >= 0x485538ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485538 size=40 callers=0 calls=0
*/
void sub_485538(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485538ULL || rel >= 0x485560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485560 size=16 callers=0 calls=0
*/
void sub_485560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485560ULL || rel >= 0x485570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485570 size=216 callers=0 calls=0
*/
void sub_485570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485570ULL || rel >= 0x485648ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485648 size=56 callers=0 calls=0
*/
void sub_485648(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485648ULL || rel >= 0x485680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485680 size=72 callers=0 calls=0
*/
void sub_485680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485680ULL || rel >= 0x4856c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004856c8 size=80 callers=0 calls=0
*/
void sub_4856c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4856c8ULL || rel >= 0x485718ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485718 size=184 callers=0 calls=0
*/
void sub_485718(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485718ULL || rel >= 0x4857d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004857d0 size=248 callers=0 calls=0
*/
void sub_4857d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4857d0ULL || rel >= 0x4858c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004858c8 size=184 callers=0 calls=0
*/
void sub_4858c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4858c8ULL || rel >= 0x485980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485980 size=248 callers=0 calls=0
*/
void sub_485980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485980ULL || rel >= 0x485a78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485a78 size=8 callers=0 calls=0
*/
void sub_485a78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485a78ULL || rel >= 0x485a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485a80 size=136 callers=0 calls=0
*/
void sub_485a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485a80ULL || rel >= 0x485b08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485b08 size=16 callers=0 calls=0
*/
void sub_485b08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485b08ULL || rel >= 0x485b18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485b18 size=144 callers=0 calls=0
*/
void sub_485b18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485b18ULL || rel >= 0x485ba8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485ba8 size=400 callers=0 calls=1
   calls: sub_484510
   ref: ctype_byname<char>::ctype_byname failed to construct for 
*/
void ctype_byname_char_ctype_byname_failed_to_construct_for(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485ba8ULL || rel >= 0x485d38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485d38 size=224 callers=0 calls=1
   calls: sub_484510
   ref: ctype_byname<char>::ctype_byname failed to construct for 
*/
void ctype_byname_char_ctype_byname_failed_to_construct_for_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485d38ULL || rel >= 0x485e18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485e18 size=120 callers=0 calls=1
   calls: sub_44d288
*/
void sub_485e18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485e18ULL || rel >= 0x485e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485e90 size=32 callers=0 calls=0
*/
void sub_485e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485e90ULL || rel >= 0x485eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485eb0 size=88 callers=0 calls=0
*/
void sub_485eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485eb0ULL || rel >= 0x485f08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485f08 size=32 callers=0 calls=0
*/
void sub_485f08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485f08ULL || rel >= 0x485f28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485f28 size=88 callers=0 calls=0
*/
void sub_485f28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485f28ULL || rel >= 0x485f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485f80 size=384 callers=0 calls=1
   calls: sub_484510
   ref: ctype_byname<wchar_t>::ctype_byname failed to construct for 
*/
void ctype_byname_wchar_t_ctype_byname_failed_to_construct_fo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485f80ULL || rel >= 0x486100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486100 size=184 callers=0 calls=1
   calls: sub_484510
   ref: ctype_byname<wchar_t>::ctype_byname failed to construct for 
*/
void ctype_byname_wchar_t_ctype_byname_failed_to_construct_fo_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486100ULL || rel >= 0x4861b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004861b8 size=88 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4861b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4861b8ULL || rel >= 0x486210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486210 size=368 callers=0 calls=0
*/
void sub_486210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486210ULL || rel >= 0x486380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486380 size=400 callers=0 calls=0
*/
void sub_486380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486380ULL || rel >= 0x486510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486510 size=488 callers=0 calls=0
*/
void sub_486510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486510ULL || rel >= 0x4866f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004866f8 size=496 callers=0 calls=0
*/
void sub_4866f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4866f8ULL || rel >= 0x4868e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004868e8 size=16 callers=0 calls=0
*/
void sub_4868e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4868e8ULL || rel >= 0x4868f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004868f8 size=88 callers=0 calls=0
*/
void sub_4868f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4868f8ULL || rel >= 0x486950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486950 size=16 callers=0 calls=0
*/
void sub_486950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486950ULL || rel >= 0x486960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486960 size=88 callers=0 calls=0
*/
void sub_486960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486960ULL || rel >= 0x4869b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004869b8 size=104 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4869b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4869b8ULL || rel >= 0x486a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486a20 size=160 callers=0 calls=1
   calls: sub_44d288
*/
void sub_486a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486a20ULL || rel >= 0x486ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486ac0 size=120 callers=0 calls=1
   calls: sub_44d288
*/
void sub_486ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486ac0ULL || rel >= 0x486b38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486b38 size=184 callers=0 calls=1
   calls: sub_44d288
*/
void sub_486b38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486b38ULL || rel >= 0x486bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486bf0 size=40 callers=0 calls=0
*/
void sub_486bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486bf0ULL || rel >= 0x486c18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486c18 size=16 callers=0 calls=0
*/
void sub_486c18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486c18ULL || rel >= 0x486c28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486c28 size=16 callers=0 calls=0
*/
void sub_486c28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486c28ULL || rel >= 0x486c38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486c38 size=16 callers=0 calls=0
*/
void sub_486c38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486c38ULL || rel >= 0x486c48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486c48 size=8 callers=0 calls=0
*/
void sub_486c48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486c48ULL || rel >= 0x486c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486c50 size=8 callers=0 calls=0
*/
void sub_486c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486c50ULL || rel >= 0x486c58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486c58 size=16 callers=0 calls=0
*/
void sub_486c58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486c58ULL || rel >= 0x486c68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486c68 size=8 callers=0 calls=0
*/
void sub_486c68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486c68ULL || rel >= 0x486c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486c70 size=184 callers=0 calls=0
*/
void sub_486c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486c70ULL || rel >= 0x486d28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486d28 size=40 callers=0 calls=0
*/
void sub_486d28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486d28ULL || rel >= 0x486d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486d50 size=816 callers=0 calls=1
   calls: sub_44d288
*/
void sub_486d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486d50ULL || rel >= 0x487080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487080 size=752 callers=0 calls=1
   calls: sub_44d288
*/
void sub_487080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487080ULL || rel >= 0x487370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487370 size=256 callers=0 calls=1
   calls: sub_44d288
*/
void sub_487370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487370ULL || rel >= 0x487470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487470 size=240 callers=0 calls=1
   calls: sub_44d288
*/
void sub_487470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487470ULL || rel >= 0x487560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487560 size=8 callers=0 calls=0
*/
void sub_487560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487560ULL || rel >= 0x487568ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487568 size=264 callers=0 calls=1
   calls: sub_44d288
*/
void sub_487568(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487568ULL || rel >= 0x487670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487670 size=128 callers=0 calls=1
   calls: sub_44d288
*/
void sub_487670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487670ULL || rel >= 0x4876f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004876f0 size=40 callers=0 calls=0
*/
void sub_4876f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4876f0ULL || rel >= 0x487718ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487718 size=104 callers=0 calls=0
*/
void sub_487718(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487718ULL || rel >= 0x487780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487780 size=656 callers=0 calls=0
*/
void sub_487780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487780ULL || rel >= 0x487a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487a10 size=104 callers=0 calls=0
*/
void sub_487a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487a10ULL || rel >= 0x487a78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487a78 size=776 callers=0 calls=0
*/
void sub_487a78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487a78ULL || rel >= 0x487d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487d80 size=16 callers=0 calls=0
*/
void sub_487d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487d80ULL || rel >= 0x487d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487d90 size=8 callers=0 calls=0
*/
void sub_487d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487d90ULL || rel >= 0x487d98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487d98 size=8 callers=0 calls=0
*/
void sub_487d98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487d98ULL || rel >= 0x487da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487da0 size=24 callers=0 calls=0
*/
void sub_487da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487da0ULL || rel >= 0x487db8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487db8 size=552 callers=0 calls=0
*/
void sub_487db8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487db8ULL || rel >= 0x487fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487fe0 size=8 callers=0 calls=0
*/
void sub_487fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487fe0ULL || rel >= 0x487fe8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487fe8 size=40 callers=0 calls=0
*/
void sub_487fe8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487fe8ULL || rel >= 0x488010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488010 size=392 callers=0 calls=0
*/
void sub_488010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488010ULL || rel >= 0x488198ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488198 size=432 callers=2 calls=0
*/
void sub_488198(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488198ULL || rel >= 0x488348ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488348 size=104 callers=0 calls=1
   calls: sub_4883b0
*/
void sub_488348(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488348ULL || rel >= 0x4883b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004883b0 size=680 callers=3 calls=0
*/
void sub_4883b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4883b0ULL || rel >= 0x488658ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488658 size=16 callers=0 calls=0
*/
void sub_488658(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488658ULL || rel >= 0x488668ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488668 size=8 callers=0 calls=0
*/
void sub_488668(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488668ULL || rel >= 0x488670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488670 size=8 callers=0 calls=0
*/
void sub_488670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488670ULL || rel >= 0x488678ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488678 size=24 callers=0 calls=0
*/
void sub_488678(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488678ULL || rel >= 0x488690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488690 size=528 callers=0 calls=0
*/
void sub_488690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488690ULL || rel >= 0x4888a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004888a0 size=8 callers=0 calls=0
*/
void sub_4888a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4888a0ULL || rel >= 0x4888a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004888a8 size=104 callers=0 calls=1
   calls: sub_488198
*/
void sub_4888a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4888a8ULL || rel >= 0x488910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488910 size=104 callers=0 calls=1
   calls: sub_4883b0
*/
void sub_488910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488910ULL || rel >= 0x488978ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488978 size=16 callers=0 calls=0
*/
void sub_488978(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488978ULL || rel >= 0x488988ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488988 size=8 callers=0 calls=0
*/
void sub_488988(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488988ULL || rel >= 0x488990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488990 size=8 callers=0 calls=0
*/
void sub_488990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488990ULL || rel >= 0x488998ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488998 size=32 callers=0 calls=0
*/
void sub_488998(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488998ULL || rel >= 0x4889b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004889b8 size=24 callers=0 calls=0
*/
void sub_4889b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4889b8ULL || rel >= 0x4889d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004889d0 size=344 callers=0 calls=0
*/
void sub_4889d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4889d0ULL || rel >= 0x488b28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488b28 size=528 callers=0 calls=0
*/
void sub_488b28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488b28ULL || rel >= 0x488d38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488d38 size=16 callers=0 calls=0
*/
void sub_488d38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488d38ULL || rel >= 0x488d48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488d48 size=8 callers=0 calls=0
*/
void sub_488d48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488d48ULL || rel >= 0x488d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488d50 size=8 callers=0 calls=0
*/
void sub_488d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488d50ULL || rel >= 0x488d58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488d58 size=368 callers=0 calls=0
*/
void sub_488d58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488d58ULL || rel >= 0x488ec8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488ec8 size=24 callers=0 calls=0
*/
void sub_488ec8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488ec8ULL || rel >= 0x488ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488ee0 size=104 callers=0 calls=1
   calls: sub_488198
*/
void sub_488ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488ee0ULL || rel >= 0x488f48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488f48 size=104 callers=0 calls=1
   calls: sub_4883b0
*/
void sub_488f48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488f48ULL || rel >= 0x488fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488fb0 size=16 callers=0 calls=0
*/
void sub_488fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488fb0ULL || rel >= 0x488fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488fc0 size=8 callers=0 calls=0
*/
void sub_488fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488fc0ULL || rel >= 0x488fc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488fc8 size=8 callers=0 calls=0
*/
void sub_488fc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488fc8ULL || rel >= 0x488fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488fd0 size=32 callers=0 calls=0
*/
void sub_488fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488fd0ULL || rel >= 0x488ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488ff0 size=24 callers=0 calls=0
*/
void sub_488ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488ff0ULL || rel >= 0x489008ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489008 size=272 callers=0 calls=0
*/
void sub_489008(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489008ULL || rel >= 0x489118ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489118 size=320 callers=0 calls=0
*/
void sub_489118(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489118ULL || rel >= 0x489258ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489258 size=16 callers=0 calls=0
*/
void sub_489258(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489258ULL || rel >= 0x489268ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489268 size=8 callers=0 calls=0
*/
void sub_489268(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489268ULL || rel >= 0x489270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489270 size=8 callers=0 calls=0
*/
void sub_489270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489270ULL || rel >= 0x489278ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489278 size=248 callers=0 calls=0
*/
void sub_489278(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489278ULL || rel >= 0x489370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489370 size=24 callers=0 calls=0
*/
void sub_489370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489370ULL || rel >= 0x489388ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489388 size=288 callers=0 calls=0
*/
void sub_489388(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489388ULL || rel >= 0x4894a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004894a8 size=304 callers=0 calls=0
*/
void sub_4894a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4894a8ULL || rel >= 0x4895d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004895d8 size=16 callers=0 calls=0
*/
void sub_4895d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4895d8ULL || rel >= 0x4895e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004895e8 size=8 callers=0 calls=0
*/
void sub_4895e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4895e8ULL || rel >= 0x4895f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004895f0 size=8 callers=0 calls=0
*/
void sub_4895f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4895f0ULL || rel >= 0x4895f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004895f8 size=248 callers=0 calls=0
*/
void sub_4895f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4895f8ULL || rel >= 0x4896f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004896f0 size=24 callers=0 calls=0
*/
void sub_4896f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4896f0ULL || rel >= 0x489708ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489708 size=192 callers=0 calls=0
*/
void sub_489708(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489708ULL || rel >= 0x4897c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004897c8 size=160 callers=0 calls=0
*/
void sub_4897c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4897c8ULL || rel >= 0x489868ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489868 size=16 callers=0 calls=0
*/
void sub_489868(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489868ULL || rel >= 0x489878ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489878 size=8 callers=0 calls=0
*/
void sub_489878(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489878ULL || rel >= 0x489880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489880 size=8 callers=0 calls=0
*/
void sub_489880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489880ULL || rel >= 0x489888ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489888 size=152 callers=0 calls=0
*/
void sub_489888(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489888ULL || rel >= 0x489920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489920 size=24 callers=0 calls=0
*/
void sub_489920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489920ULL || rel >= 0x489938ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489938 size=192 callers=0 calls=0
*/
void sub_489938(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489938ULL || rel >= 0x4899f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004899f8 size=144 callers=0 calls=0
*/
void sub_4899f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4899f8ULL || rel >= 0x489a88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489a88 size=16 callers=0 calls=0
*/
void sub_489a88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489a88ULL || rel >= 0x489a98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489a98 size=8 callers=0 calls=0
*/
void sub_489a98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489a98ULL || rel >= 0x489aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489aa0 size=8 callers=0 calls=0
*/
void sub_489aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489aa0ULL || rel >= 0x489aa8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489aa8 size=176 callers=0 calls=0
*/
void sub_489aa8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489aa8ULL || rel >= 0x489b58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489b58 size=24 callers=0 calls=0
*/
void sub_489b58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489b58ULL || rel >= 0x489b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489b70 size=272 callers=0 calls=0
*/
void sub_489b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489b70ULL || rel >= 0x489c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489c80 size=320 callers=0 calls=0
*/
void sub_489c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489c80ULL || rel >= 0x489dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489dc0 size=16 callers=0 calls=0
*/
void sub_489dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489dc0ULL || rel >= 0x489dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489dd0 size=8 callers=0 calls=0
*/
void sub_489dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489dd0ULL || rel >= 0x489dd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489dd8 size=8 callers=0 calls=0
*/
void sub_489dd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489dd8ULL || rel >= 0x489de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489de0 size=248 callers=0 calls=0
*/
void sub_489de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489de0ULL || rel >= 0x489ed8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489ed8 size=24 callers=0 calls=0
*/
void sub_489ed8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489ed8ULL || rel >= 0x489ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489ef0 size=288 callers=0 calls=0
*/
void sub_489ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489ef0ULL || rel >= 0x48a010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a010 size=304 callers=0 calls=0
*/
void sub_48a010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a010ULL || rel >= 0x48a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a140 size=16 callers=0 calls=0
*/
void sub_48a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a140ULL || rel >= 0x48a150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a150 size=8 callers=0 calls=0
*/
void sub_48a150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a150ULL || rel >= 0x48a158ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a158 size=8 callers=0 calls=0
*/
void sub_48a158(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a158ULL || rel >= 0x48a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a160 size=248 callers=0 calls=0
*/
void sub_48a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a160ULL || rel >= 0x48a258ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a258 size=24 callers=0 calls=0
*/
void sub_48a258(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a258ULL || rel >= 0x48a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a270 size=104 callers=0 calls=0
*/
void sub_48a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a270ULL || rel >= 0x48a2d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a2d8 size=648 callers=0 calls=0
*/
void sub_48a2d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a2d8ULL || rel >= 0x48a560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a560 size=104 callers=0 calls=0
*/
void sub_48a560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a560ULL || rel >= 0x48a5c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a5c8 size=776 callers=0 calls=0
*/
void sub_48a5c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a5c8ULL || rel >= 0x48a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a8d0 size=16 callers=0 calls=0
*/
void sub_48a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a8d0ULL || rel >= 0x48a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a8e0 size=8 callers=0 calls=0
*/
void sub_48a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a8e0ULL || rel >= 0x48a8e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a8e8 size=8 callers=0 calls=0
*/
void sub_48a8e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a8e8ULL || rel >= 0x48a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a8f0 size=32 callers=0 calls=0
*/
void sub_48a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a8f0ULL || rel >= 0x48a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a910 size=24 callers=0 calls=0
*/
void sub_48a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a910ULL || rel >= 0x48a928ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a928 size=104 callers=0 calls=0
*/
void sub_48a928(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a928ULL || rel >= 0x48a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a990 size=104 callers=0 calls=0
*/
void sub_48a990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a990ULL || rel >= 0x48a9f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048a9f8 size=16 callers=0 calls=0
*/
void sub_48a9f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48a9f8ULL || rel >= 0x48aa08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048aa08 size=8 callers=0 calls=0
*/
void sub_48aa08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48aa08ULL || rel >= 0x48aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048aa10 size=8 callers=0 calls=0
*/
void sub_48aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48aa10ULL || rel >= 0x48aa18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048aa18 size=32 callers=0 calls=0
*/
void sub_48aa18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48aa18ULL || rel >= 0x48aa38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048aa38 size=24 callers=0 calls=0
*/
void sub_48aa38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48aa38ULL || rel >= 0x48aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048aa50 size=104 callers=0 calls=0
*/
void sub_48aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48aa50ULL || rel >= 0x48aab8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048aab8 size=104 callers=0 calls=0
*/
void sub_48aab8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48aab8ULL || rel >= 0x48ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ab20 size=16 callers=0 calls=0
*/
void sub_48ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ab20ULL || rel >= 0x48ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ab30 size=8 callers=0 calls=0
*/
void sub_48ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ab30ULL || rel >= 0x48ab38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ab38 size=8 callers=0 calls=0
*/
void sub_48ab38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ab38ULL || rel >= 0x48ab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ab40 size=32 callers=0 calls=0
*/
void sub_48ab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ab40ULL || rel >= 0x48ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ab60 size=24 callers=0 calls=0
*/
void sub_48ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ab60ULL || rel >= 0x48ab78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ab78 size=40 callers=0 calls=0
*/
void sub_48ab78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ab78ULL || rel >= 0x48aba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048aba0 size=40 callers=0 calls=0
*/
void sub_48aba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48aba0ULL || rel >= 0x48abc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048abc8 size=40 callers=0 calls=0
*/
void sub_48abc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48abc8ULL || rel >= 0x48abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048abf0 size=40 callers=0 calls=0
*/
void sub_48abf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48abf0ULL || rel >= 0x48ac18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ac18 size=40 callers=0 calls=0
*/
void sub_48ac18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ac18ULL || rel >= 0x48ac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ac40 size=48 callers=0 calls=0
*/
void sub_48ac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ac40ULL || rel >= 0x48ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ac70 size=64 callers=0 calls=0
*/
void sub_48ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ac70ULL || rel >= 0x48acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048acb0 size=72 callers=0 calls=0
*/
void sub_48acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48acb0ULL || rel >= 0x48acf8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048acf8 size=64 callers=0 calls=0
*/
void sub_48acf8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48acf8ULL || rel >= 0x48ad38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ad38 size=72 callers=0 calls=0
*/
void sub_48ad38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ad38ULL || rel >= 0x48ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ad80 size=8 callers=0 calls=0
*/
void sub_48ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ad80ULL || rel >= 0x48ad88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ad88 size=8 callers=0 calls=0
*/
void sub_48ad88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ad88ULL || rel >= 0x48ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ad90 size=8 callers=0 calls=0
*/
void sub_48ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ad90ULL || rel >= 0x48ad98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ad98 size=8 callers=0 calls=0
*/
void sub_48ad98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ad98ULL || rel >= 0x48ada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ada0 size=16 callers=0 calls=0
*/
void sub_48ada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ada0ULL || rel >= 0x48adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048adb0 size=16 callers=0 calls=0
*/
void sub_48adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48adb0ULL || rel >= 0x48adc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048adc0 size=40 callers=0 calls=0
*/
void sub_48adc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48adc0ULL || rel >= 0x48ade8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ade8 size=32 callers=0 calls=0
*/
void sub_48ade8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ade8ULL || rel >= 0x48ae08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ae08 size=40 callers=0 calls=0
*/
void sub_48ae08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ae08ULL || rel >= 0x48ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ae30 size=32 callers=0 calls=0
*/
void sub_48ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ae30ULL || rel >= 0x48ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ae50 size=120 callers=0 calls=0
*/
void sub_48ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ae50ULL || rel >= 0x48aec8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048aec8 size=464 callers=0 calls=3
   calls: sub_44d288, sub_484510, sub_48b168
   ref: numpunct_byname<char>::numpunct_byname failed to construct for 
*/
void numpunct_byname_char_numpunct_byname_failed_to_construct(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48aec8ULL || rel >= 0x48b098ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b098 size=136 callers=0 calls=0
*/
void sub_48b098(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b098ULL || rel >= 0x48b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b120 size=72 callers=0 calls=0
*/
void sub_48b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b120ULL || rel >= 0x48b168ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b168 size=208 callers=6 calls=2
   calls: sub_44d288, sub_48b560
*/
void sub_48b168(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b168ULL || rel >= 0x48b238ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b238 size=128 callers=0 calls=0
*/
void sub_48b238(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b238ULL || rel >= 0x48b2b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b2b8 size=464 callers=0 calls=3
   calls: sub_44d288, sub_484510, sub_48b560
   ref: numpunct_byname<wchar_t>::numpunct_byname failed to construct for 
*/
void numpunct_byname_wchar_t_numpunct_byname_failed_to_constr(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b2b8ULL || rel >= 0x48b488ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b488 size=144 callers=0 calls=0
*/
void sub_48b488(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b488ULL || rel >= 0x48b518ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b518 size=72 callers=0 calls=0
*/
void sub_48b518(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b518ULL || rel >= 0x48b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b560 size=184 callers=7 calls=1
   calls: sub_44d288
*/
void sub_48b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b560ULL || rel >= 0x48b618ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b618 size=64 callers=0 calls=0
*/
void sub_48b618(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b618ULL || rel >= 0x48b658ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b658 size=480 callers=0 calls=1
   calls: sub_1c0
   ref: Tuesday
   ref: Saturday
   ref: Friday
   ref: Thursday
   ref: Monday
   ref: Sunday
   ref: Wednesday
*/
void Wednesday(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b658ULL || rel >= 0x48b838ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b838 size=480 callers=0 calls=1
   calls: sub_1c0
*/
void sub_48b838(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b838ULL || rel >= 0x48ba18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ba18 size=680 callers=0 calls=1
   calls: sub_1c0
   ref: August
   ref: January
   ref: October
   ref: February
   ref: November
   ref: September
   ref: December
*/
void September(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ba18ULL || rel >= 0x48bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048bcc0 size=680 callers=0 calls=1
   calls: sub_1c0
*/
void sub_48bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48bcc0ULL || rel >= 0x48bf68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048bf68 size=240 callers=0 calls=1
   calls: sub_1c0
*/
void sub_48bf68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48bf68ULL || rel >= 0x48c058ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c058 size=256 callers=0 calls=1
   calls: sub_1c0
*/
void sub_48c058(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c058ULL || rel >= 0x48c158ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c158 size=152 callers=0 calls=1
   calls: sub_1c0
*/
void sub_48c158(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c158ULL || rel >= 0x48c1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c1f0 size=160 callers=0 calls=1
   calls: sub_1c0
*/
void sub_48c1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c1f0ULL || rel >= 0x48c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c290 size=152 callers=0 calls=1
   calls: sub_1c0
*/
void sub_48c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c290ULL || rel >= 0x48c328ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c328 size=160 callers=0 calls=1
   calls: sub_1c0
*/
void sub_48c328(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c328ULL || rel >= 0x48c3c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c3c8 size=160 callers=0 calls=1
   calls: sub_1c0
   ref: %a %b %d %H:%M:%S %Y
*/
void a_b_d_H_M_S_Y(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c3c8ULL || rel >= 0x48c468ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c468 size=160 callers=0 calls=1
   calls: sub_1c0
*/
void sub_48c468(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c468ULL || rel >= 0x48c508ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c508 size=160 callers=0 calls=1
   calls: sub_1c0
   ref: %I:%M:%S %p
*/
void I_M_S_p_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c508ULL || rel >= 0x48c5a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c5a8 size=160 callers=0 calls=1
   calls: sub_1c0
*/
void sub_48c5a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c5a8ULL || rel >= 0x48c648ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c648 size=320 callers=0 calls=1
   calls: sub_484510
   ref: time_get_byname failed to construct for 
*/
void time_get_byname_failed_to_construct_for_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c648ULL || rel >= 0x48c788ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c788 size=136 callers=0 calls=1
   calls: sub_484510
   ref: time_get_byname failed to construct for 
*/
void time_get_byname_failed_to_construct_for_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c788ULL || rel >= 0x48c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c810 size=32 callers=0 calls=1
   calls: sub_44d288
*/
void sub_48c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c810ULL || rel >= 0x48c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c830 size=1624 callers=0 calls=1
   calls: sub_48ce88
*/
void sub_48c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c830ULL || rel >= 0x48ce88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ce88 size=1072 callers=3 calls=0
*/
void sub_48ce88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ce88ULL || rel >= 0x48d2b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048d2b8 size=1832 callers=0 calls=2
   calls: sub_44d288, sub_48d9e0
   ref: locale not supported
*/
void locale_not_supported_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48d2b8ULL || rel >= 0x48d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048d9e0 size=1056 callers=3 calls=0
*/
void sub_48d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48d9e0ULL || rel >= 0x48de00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048de00 size=1272 callers=0 calls=0
*/
void sub_48de00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48de00ULL || rel >= 0x48e2f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048e2f8 size=3424 callers=0 calls=1
   calls: sub_44d288
   ref: locale not supported
*/
void locale_not_supported_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48e2f8ULL || rel >= 0x48f058ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048f058 size=112 callers=0 calls=1
   calls: sub_44d288
*/
void sub_48f058(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48f058ULL || rel >= 0x48f0c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048f0c8 size=80 callers=0 calls=1
   calls: sub_44d288
*/
void sub_48f0c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48f0c8ULL || rel >= 0x48f118ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048f118 size=1400 callers=4 calls=0
*/
void sub_48f118(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48f118ULL || rel >= 0x48f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048f690 size=1480 callers=4 calls=0
*/
void sub_48f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48f690ULL || rel >= 0x48fc58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fc58 size=224 callers=0 calls=1
   calls: sub_44d288
*/
void sub_48fc58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fc58ULL || rel >= 0x48fd38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fd38 size=40 callers=0 calls=0
*/
void sub_48fd38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fd38ULL || rel >= 0x48fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fd60 size=40 callers=0 calls=0
*/
void sub_48fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fd60ULL || rel >= 0x48fd88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fd88 size=40 callers=0 calls=0
*/
void sub_48fd88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fd88ULL || rel >= 0x48fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fdb0 size=40 callers=0 calls=0
*/
void sub_48fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fdb0ULL || rel >= 0x48fdd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fdd8 size=40 callers=0 calls=0
*/
void sub_48fdd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fdd8ULL || rel >= 0x48fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fe00 size=40 callers=0 calls=0
*/
void sub_48fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fe00ULL || rel >= 0x48fe28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fe28 size=40 callers=0 calls=0
*/
void sub_48fe28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fe28ULL || rel >= 0x48fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fe50 size=40 callers=0 calls=0
*/
void sub_48fe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fe50ULL || rel >= 0x48fe78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fe78 size=40 callers=0 calls=0
*/
void sub_48fe78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fe78ULL || rel >= 0x48fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fea0 size=40 callers=0 calls=0
*/
void sub_48fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fea0ULL || rel >= 0x48fec8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fec8 size=40 callers=0 calls=0
*/
void sub_48fec8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fec8ULL || rel >= 0x48fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fef0 size=40 callers=0 calls=0
*/
void sub_48fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fef0ULL || rel >= 0x48ff18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ff18 size=512 callers=0 calls=0
*/
void sub_48ff18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ff18ULL || rel >= 0x490118ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490118 size=512 callers=0 calls=0
*/
void sub_490118(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490118ULL || rel >= 0x490318ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490318 size=872 callers=0 calls=0
*/
void sub_490318(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490318ULL || rel >= 0x490680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490680 size=872 callers=0 calls=0
*/
void sub_490680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490680ULL || rel >= 0x4909e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004909e8 size=64 callers=0 calls=0
*/
void sub_4909e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4909e8ULL || rel >= 0x490a28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490a28 size=64 callers=0 calls=0
*/
void sub_490a28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490a28ULL || rel >= 0x490a68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490a68 size=392 callers=4 calls=0
*/
void sub_490a68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490a68ULL || rel >= 0x490bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490bf0 size=344 callers=77 calls=0
*/
void sub_490bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490bf0ULL || rel >= 0x490d48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490d48 size=40 callers=0 calls=0
*/
void sub_490d48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490d48ULL || rel >= 0x490d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490d70 size=392 callers=3 calls=0
   ref: allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size
*/
void allocator_T_allocate_size_t_n_n_exceeds_maximum_supporte(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490d70ULL || rel >= 0x490ef8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490ef8 size=120 callers=0 calls=1
   calls: sub_44d288
*/
void sub_490ef8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490ef8ULL || rel >= 0x490f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490f70 size=88 callers=0 calls=1
   calls: sub_44d288
*/
void sub_490f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490f70ULL || rel >= 0x490fc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490fc8 size=288 callers=0 calls=0
*/
void sub_490fc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490fc8ULL || rel >= 0x4910e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004910e8 size=288 callers=0 calls=0
*/
void sub_4910e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4910e8ULL || rel >= 0x491208ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00491208 size=328 callers=0 calls=0
*/
void sub_491208(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x491208ULL || rel >= 0x491350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00491350 size=328 callers=0 calls=0
*/
void sub_491350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x491350ULL || rel >= 0x491498ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00491498 size=320 callers=0 calls=0
*/
void sub_491498(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x491498ULL || rel >= 0x4915d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004915d8 size=320 callers=0 calls=0
*/
void sub_4915d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4915d8ULL || rel >= 0x491718ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00491718 size=272 callers=2 calls=0
*/
void sub_491718(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x491718ULL || rel >= 0x491828ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00491828 size=272 callers=2 calls=0
*/
void sub_491828(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x491828ULL || rel >= 0x491938ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00491938 size=296 callers=2 calls=0
*/
void sub_491938(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x491938ULL || rel >= 0x491a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00491a60 size=704 callers=1 calls=0
*/
void sub_491a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x491a60ULL || rel >= 0x491d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00491d20 size=568 callers=1 calls=1
   calls: allocator_T_allocate_size_t_n_n_exceeds_maximum_supporte_2
*/
void sub_491d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x491d20ULL || rel >= 0x491f58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00491f58 size=392 callers=1 calls=0
   ref: allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size
*/
void allocator_T_allocate_size_t_n_n_exceeds_maximum_supporte_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x491f58ULL || rel >= 0x4920e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004920e0 size=8 callers=0 calls=0
*/
void sub_4920e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4920e0ULL || rel >= 0x4920e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004920e8 size=40 callers=0 calls=0
*/
void sub_4920e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4920e8ULL || rel >= 0x492110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492110 size=16 callers=0 calls=0
   ref: bad_weak_ptr
*/
void bad_weak_ptr(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492110ULL || rel >= 0x492120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492120 size=8 callers=0 calls=0
*/
void sub_492120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492120ULL || rel >= 0x492128ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492128 size=8 callers=0 calls=0
*/
void sub_492128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492128ULL || rel >= 0x492130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492130 size=8 callers=0 calls=0
*/
void sub_492130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492130ULL || rel >= 0x492138ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492138 size=24 callers=0 calls=0
*/
void sub_492138(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492138ULL || rel >= 0x492150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492150 size=64 callers=0 calls=0
*/
void sub_492150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492150ULL || rel >= 0x492190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492190 size=24 callers=0 calls=0
*/
void sub_492190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492190ULL || rel >= 0x4921a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004921a8 size=24 callers=0 calls=0
*/
void sub_4921a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4921a8ULL || rel >= 0x4921c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004921c0 size=128 callers=0 calls=0
*/
void sub_4921c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4921c0ULL || rel >= 0x492240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492240 size=48 callers=0 calls=0
*/
void sub_492240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492240ULL || rel >= 0x492270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492270 size=80 callers=0 calls=0
*/
void sub_492270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492270ULL || rel >= 0x4922c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004922c0 size=8 callers=0 calls=0
*/
void sub_4922c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4922c0ULL || rel >= 0x4922c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004922c8 size=88 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4922c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4922c8ULL || rel >= 0x492320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492320 size=32 callers=0 calls=1
   calls: sub_44d288
*/
void sub_492320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492320ULL || rel >= 0x492340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492340 size=336 callers=0 calls=0
*/
void sub_492340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492340ULL || rel >= 0x492490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492490 size=8 callers=0 calls=0
*/
void sub_492490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492490ULL || rel >= 0x492498ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492498 size=8 callers=0 calls=0
*/
void sub_492498(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492498ULL || rel >= 0x4924a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004924a0 size=8 callers=0 calls=0
*/
void sub_4924a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4924a0ULL || rel >= 0x4924a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004924a8 size=8 callers=0 calls=0
*/
void sub_4924a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4924a8ULL || rel >= 0x4924b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004924b0 size=8 callers=0 calls=0
*/
void sub_4924b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4924b0ULL || rel >= 0x4924b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004924b8 size=80 callers=0 calls=0
*/
void sub_4924b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4924b8ULL || rel >= 0x492508ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492508 size=24 callers=0 calls=1
   calls: sub_44d288
*/
void sub_492508(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492508ULL || rel >= 0x492520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492520 size=40 callers=0 calls=0
   ref: mutex lock failed
*/
void mutex_lock_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492520ULL || rel >= 0x492548ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492548 size=32 callers=0 calls=1
   calls: sub_44d288
*/
void sub_492548(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492548ULL || rel >= 0x492568ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492568 size=24 callers=0 calls=1
   calls: sub_44d288
*/
void sub_492568(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492568ULL || rel >= 0x492580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492580 size=40 callers=0 calls=0
   ref: recursive_mutex constructor failed
*/
void recursive_mutex_constructor_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492580ULL || rel >= 0x4925a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004925a8 size=24 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4925a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4925a8ULL || rel >= 0x4925c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004925c0 size=40 callers=0 calls=0
   ref: recursive_mutex lock failed
*/
void recursive_mutex_lock_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4925c0ULL || rel >= 0x4925e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004925e8 size=24 callers=0 calls=1
   calls: sub_44d288
*/
void sub_4925e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4925e8ULL || rel >= 0x492600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492600 size=32 callers=0 calls=1
   calls: sub_44d288
*/
void sub_492600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492600ULL || rel >= 0x492620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492620 size=32 callers=0 calls=0
*/
void sub_492620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492620ULL || rel >= 0x492640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492640 size=112 callers=0 calls=1
   calls: sub_44d288
   ref: mutex lock failed
*/
void mutex_lock_failed_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492640ULL || rel >= 0x4926b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004926b0 size=144 callers=0 calls=1
   calls: sub_44d288
   ref: mutex lock failed
*/
void mutex_lock_failed_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4926b0ULL || rel >= 0x492740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492740 size=104 callers=0 calls=1
   calls: sub_44d288
*/
void sub_492740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492740ULL || rel >= 0x4927a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004927a8 size=80 callers=0 calls=1
   calls: sub_44d288
   ref: mutex lock failed
*/
void mutex_lock_failed_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4927a8ULL || rel >= 0x4927f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004927f8 size=48 callers=0 calls=0
*/
void sub_4927f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4927f8ULL || rel >= 0x492828ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492828 size=112 callers=0 calls=1
   calls: sub_44d288
   ref: mutex lock failed
*/
void mutex_lock_failed_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492828ULL || rel >= 0x492898ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492898 size=248 callers=0 calls=1
   calls: sub_44d288
   ref: mutex lock failed
   ref: recursive_timed_mutex lock limit reached
*/
void recursive_timed_mutex_lock_limit_reached(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492898ULL || rel >= 0x492990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492990 size=136 callers=0 calls=1
   calls: sub_44d288
*/
void sub_492990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492990ULL || rel >= 0x492a18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492a18 size=112 callers=0 calls=1
   calls: sub_44d288
   ref: mutex lock failed
*/
void mutex_lock_failed_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492a18ULL || rel >= 0x492a88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492a88 size=272 callers=0 calls=1
   calls: sub_44d288
*/
void sub_492a88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492a88ULL || rel >= 0x492b98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492b98 size=56 callers=0 calls=0
*/
void sub_492b98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492b98ULL || rel >= 0x492bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492bd0 size=112 callers=0 calls=0
*/
void sub_492bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492bd0ULL || rel >= 0x492c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492c40 size=48 callers=0 calls=1
   calls: sub_44d288
*/
void sub_492c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492c40ULL || rel >= 0x492c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492c70 size=8 callers=0 calls=0
*/
void sub_492c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492c70ULL || rel >= 0x492c78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492c78 size=48 callers=0 calls=1
   calls: sub_44d288
*/
void sub_492c78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492c78ULL || rel >= 0x492ca8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492ca8 size=16 callers=0 calls=0
*/
void sub_492ca8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492ca8ULL || rel >= 0x492cb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492cb8 size=8 callers=0 calls=0
*/
void sub_492cb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492cb8ULL || rel >= 0x492cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492cc0 size=8 callers=0 calls=0
*/
void sub_492cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492cc0ULL || rel >= 0x492cc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492cc8 size=8 callers=0 calls=0
*/
void sub_492cc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492cc8ULL || rel >= 0x492cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492cd0 size=8 callers=0 calls=0
*/
void sub_492cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492cd0ULL || rel >= 0x492cd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492cd8 size=8 callers=0 calls=0
*/
void sub_492cd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492cd8ULL || rel >= 0x492ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492ce0 size=136 callers=0 calls=0
*/
void sub_492ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492ce0ULL || rel >= 0x492d68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492d68 size=48 callers=0 calls=1
   calls: sub_44d288
*/
void sub_492d68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492d68ULL || rel >= 0x492d98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492d98 size=8 callers=0 calls=0
*/
void sub_492d98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492d98ULL || rel >= 0x492da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492da0 size=48 callers=0 calls=1
   calls: sub_44d288
*/
void sub_492da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492da0ULL || rel >= 0x492dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492dd0 size=16 callers=0 calls=0
*/
void sub_492dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492dd0ULL || rel >= 0x492de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492de0 size=8 callers=0 calls=0
*/
void sub_492de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492de0ULL || rel >= 0x492de8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492de8 size=8 callers=0 calls=0
*/
void sub_492de8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492de8ULL || rel >= 0x492df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492df0 size=8 callers=0 calls=0
*/
void sub_492df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492df0ULL || rel >= 0x492df8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492df8 size=8 callers=0 calls=0
*/
void sub_492df8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492df8ULL || rel >= 0x492e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492e00 size=8 callers=0 calls=0
*/
void sub_492e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492e00ULL || rel >= 0x492e08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492e08 size=8 callers=0 calls=0
*/
void sub_492e08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492e08ULL || rel >= 0x492e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492e10 size=40 callers=0 calls=0
*/
void sub_492e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492e10ULL || rel >= 0x492e38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492e38 size=16 callers=0 calls=0
   ref: bad_optional_access
*/
void bad_optional_access(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492e38ULL || rel >= 0x492e48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492e48 size=8 callers=0 calls=0
*/
void sub_492e48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492e48ULL || rel >= 0x492e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492e50 size=40 callers=0 calls=0
*/
void sub_492e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492e50ULL || rel >= 0x492e78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492e78 size=96 callers=0 calls=0
*/
void sub_492e78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492e78ULL || rel >= 0x492ed8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492ed8 size=8 callers=0 calls=0
*/
void sub_492ed8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492ed8ULL || rel >= 0x492ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00492ee0 size=168 callers=0 calls=0
*/
void sub_492ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x492ee0ULL || rel >= 0x492f88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

