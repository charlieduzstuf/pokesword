/* main functions 0096e200..0098a0a0 (74 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0096e200 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96e200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e200ULL || rel >= 0x96e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e280 size=16 callers=0 calls=0
*/
void sub_96e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e280ULL || rel >= 0x96e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e290 size=16 callers=0 calls=0
*/
void sub_96e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e290ULL || rel >= 0x96e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e2a0 size=496 callers=0 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_96bb80, sub_96dd80
   ref: bin/battle/waza/particle/ee051/ee051_mst01.ptcl
*/
void ee051_mst01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e2a0ULL || rel >= 0x96e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e490 size=16 callers=0 calls=0
*/
void sub_96e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e490ULL || rel >= 0x96e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e4a0 size=16 callers=0 calls=0
*/
void sub_96e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e4a0ULL || rel >= 0x96e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e4b0 size=16 callers=0 calls=0
*/
void sub_96e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e4b0ULL || rel >= 0x96e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e4c0 size=496 callers=0 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_96bb80, sub_96e0d0
   ref: bin/battle/waza/particle/ee051/ee051_mst01_cam.ptcl
*/
void ee051_mst01_cam(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e4c0ULL || rel >= 0x96e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e6b0 size=16 callers=0 calls=0
*/
void sub_96e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e6b0ULL || rel >= 0x96e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e6c0 size=16 callers=0 calls=0
*/
void sub_96e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e6c0ULL || rel >= 0x96e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e6d0 size=16 callers=0 calls=0
*/
void sub_96e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e6d0ULL || rel >= 0x96e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e6e0 size=496 callers=0 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_96bb80, sub_96dd80
   ref: bin/battle/waza/particle/ee052/ee052_elc01.ptcl
*/
void ee052_elc01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e6e0ULL || rel >= 0x96e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e8d0 size=16 callers=0 calls=0
*/
void sub_96e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e8d0ULL || rel >= 0x96e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e8e0 size=16 callers=0 calls=0
*/
void sub_96e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e8e0ULL || rel >= 0x96e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e8f0 size=16 callers=0 calls=0
*/
void sub_96e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e8f0ULL || rel >= 0x96e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096e900 size=496 callers=0 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_96bb80, sub_96e0d0
   ref: bin/battle/waza/particle/ee052/ee052_elc01_cam.ptcl
*/
void ee052_elc01_cam(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96e900ULL || rel >= 0x96eaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096eaf0 size=16 callers=0 calls=0
*/
void sub_96eaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96eaf0ULL || rel >= 0x96eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096eb00 size=16 callers=0 calls=0
*/
void sub_96eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96eb00ULL || rel >= 0x96eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096eb10 size=16 callers=0 calls=0
*/
void sub_96eb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96eb10ULL || rel >= 0x96eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096eb20 size=496 callers=0 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_96bb80, sub_96dd80
   ref: bin/battle/waza/particle/ee053/ee053_psy01.ptcl
*/
void ee053_psy01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96eb20ULL || rel >= 0x96ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ed10 size=16 callers=0 calls=0
*/
void sub_96ed10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ed10ULL || rel >= 0x96ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ed20 size=16 callers=0 calls=0
*/
void sub_96ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ed20ULL || rel >= 0x96ed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ed30 size=16 callers=0 calls=0
*/
void sub_96ed30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ed30ULL || rel >= 0x96ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ed40 size=496 callers=0 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_96bb80, sub_96e0d0
   ref: bin/battle/waza/particle/ee053/ee053_psy01_cam.ptcl
*/
void ee053_psy01_cam(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ed40ULL || rel >= 0x96ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ef30 size=16 callers=0 calls=0
*/
void sub_96ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ef30ULL || rel >= 0x96ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ef40 size=16 callers=0 calls=0
*/
void sub_96ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ef40ULL || rel >= 0x96ef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ef50 size=16 callers=0 calls=0
*/
void sub_96ef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ef50ULL || rel >= 0x96ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ef60 size=496 callers=0 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_96bb80, sub_96e0d0
   ref: bin/battle/waza/particle/ee700/ee700_bg_fog_01.ptcl
*/
void ee700_bg_fog_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ef60ULL || rel >= 0x96f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f150 size=16 callers=0 calls=0
*/
void sub_96f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f150ULL || rel >= 0x96f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f160 size=16 callers=0 calls=0
*/
void sub_96f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f160ULL || rel >= 0x96f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f170 size=16 callers=0 calls=0
*/
void sub_96f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f170ULL || rel >= 0x96f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f180 size=496 callers=0 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_96bb80, sub_96e0d0
   ref: bin/battle/waza/particle/ee700/ee700_bg_fog_02.ptcl
*/
void ee700_bg_fog_02_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f180ULL || rel >= 0x96f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f370 size=16 callers=0 calls=0
*/
void sub_96f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f370ULL || rel >= 0x96f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f380 size=16 callers=0 calls=0
*/
void sub_96f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f380ULL || rel >= 0x96f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f390 size=16 callers=0 calls=0
*/
void sub_96f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f390ULL || rel >= 0x96f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f3a0 size=32 callers=0 calls=0
*/
void sub_96f3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f3a0ULL || rel >= 0x96f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f3c0 size=16 callers=0 calls=0
*/
void sub_96f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f3c0ULL || rel >= 0x96f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f3d0 size=32 callers=0 calls=0
*/
void sub_96f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f3d0ULL || rel >= 0x96f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f3f0 size=32 callers=0 calls=0
*/
void sub_96f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f3f0ULL || rel >= 0x96f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f410 size=240 callers=0 calls=2
   calls: sub_ed2fe0, sub_ee74b0
*/
void sub_96f410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f410ULL || rel >= 0x96f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f500 size=16 callers=0 calls=0
*/
void sub_96f500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f500ULL || rel >= 0x96f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f510 size=16 callers=0 calls=0
*/
void sub_96f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f510ULL || rel >= 0x96f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f520 size=16 callers=0 calls=0
*/
void sub_96f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f520ULL || rel >= 0x96f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f530 size=160 callers=0 calls=1
   calls: sub_619130
*/
void sub_96f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f530ULL || rel >= 0x96f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f5d0 size=16 callers=0 calls=0
*/
void sub_96f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f5d0ULL || rel >= 0x96f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f5e0 size=16 callers=0 calls=0
*/
void sub_96f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f5e0ULL || rel >= 0x96f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f5f0 size=16 callers=0 calls=0
*/
void sub_96f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f5f0ULL || rel >= 0x96f600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f600 size=16 callers=0 calls=0
*/
void sub_96f600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f600ULL || rel >= 0x96f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f610 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_96f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f610ULL || rel >= 0x96f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f650 size=32 callers=0 calls=0
*/
void sub_96f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f650ULL || rel >= 0x96f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f670 size=16 callers=0 calls=0
*/
void sub_96f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f670ULL || rel >= 0x96f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f680 size=16 callers=0 calls=0
*/
void sub_96f680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f680ULL || rel >= 0x96f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f690 size=256 callers=0 calls=0
*/
void sub_96f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f690ULL || rel >= 0x96f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f790 size=16 callers=0 calls=0
*/
void sub_96f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f790ULL || rel >= 0x96f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f7a0 size=16 callers=0 calls=0
*/
void sub_96f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f7a0ULL || rel >= 0x96f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f7b0 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_96f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f7b0ULL || rel >= 0x96f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f7e0 size=16 callers=0 calls=0
*/
void sub_96f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f7e0ULL || rel >= 0x96f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f7f0 size=16 callers=0 calls=0
*/
void sub_96f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f7f0ULL || rel >= 0x96f800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f800 size=16 callers=0 calls=0
*/
void sub_96f800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f800ULL || rel >= 0x96f810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f810 size=240 callers=0 calls=1
   calls: sub_ee7920
*/
void sub_96f810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f810ULL || rel >= 0x96f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096f900 size=256 callers=0 calls=0
*/
void sub_96f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f900ULL || rel >= 0x96fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096fa00 size=16 callers=0 calls=0
*/
void sub_96fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96fa00ULL || rel >= 0x96fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096fa10 size=16 callers=0 calls=0
*/
void sub_96fa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96fa10ULL || rel >= 0x96fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096fa20 size=16 callers=0 calls=0
*/
void sub_96fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96fa20ULL || rel >= 0x96fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096fa30 size=240 callers=0 calls=1
   calls: sub_ee7920
*/
void sub_96fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96fa30ULL || rel >= 0x96fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096fb20 size=16 callers=0 calls=0
*/
void sub_96fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96fb20ULL || rel >= 0x96fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096fb30 size=16 callers=0 calls=0
*/
void sub_96fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96fb30ULL || rel >= 0x96fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096fb40 size=16 callers=0 calls=0
*/
void sub_96fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96fb40ULL || rel >= 0x96fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096fb50 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96fb50ULL || rel >= 0x96fbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096fbd0 size=672 callers=1 calls=4
   calls: sub_5e6180, sub_96fe70, sub_96ff20, sub_96ffd0
*/
void sub_96fbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96fbd0ULL || rel >= 0x96fe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096fe70 size=176 callers=3 calls=1
   calls: sub_d0c0
*/
void sub_96fe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96fe70ULL || rel >= 0x96ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ff20 size=176 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ff20ULL || rel >= 0x96ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0096ffd0 size=144 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_96ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ffd0ULL || rel >= 0x970060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00970060 size=256 callers=6 calls=1
   calls: FieldObject__lu
*/
void sub_970060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x970060ULL || rel >= 0x970160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00970160 size=16 callers=1 calls=0
*/
void sub_970160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x970160ULL || rel >= 0x970170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00970170 size=544 callers=2 calls=2
   calls: sub_962230, sub_972c70
*/
void sub_970170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x970170ULL || rel >= 0x970390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00970390 size=48 callers=12 calls=0
*/
void sub_970390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x970390ULL || rel >= 0x9703c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009703c0 size=4752 callers=1 calls=8
   calls: EffHeadCenter01, RToeC1, sub_612f70, sub_962230, sub_96c4a0, sub_971650, sub_971950, sub_972c70
*/
void sub_9703c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9703c0ULL || rel >= 0x971650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00971650 size=768 callers=15 calls=1
   calls: sub_972c70
*/
void sub_971650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x971650ULL || rel >= 0x971950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00971950 size=3360 callers=46 calls=0
*/
void sub_971950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x971950ULL || rel >= 0x972670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00972670 size=112 callers=6 calls=0
*/
void sub_972670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x972670ULL || rel >= 0x9726e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009726e0 size=1040 callers=7 calls=4
   calls: LFinger, Origin, Spine2, sub_612f70
   ref: RToeC1
   ref: Origin
*/
void RToeC1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9726e0ULL || rel >= 0x972af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00972af0 size=208 callers=13 calls=2
   calls: EffHeadCenter01, sub_971650
*/
void sub_972af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x972af0ULL || rel >= 0x972bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00972bc0 size=112 callers=5 calls=0
*/
void sub_972bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x972bc0ULL || rel >= 0x972c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00972c30 size=48 callers=1 calls=0
*/
void sub_972c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x972c30ULL || rel >= 0x972c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00972c60 size=16 callers=6 calls=0
*/
void sub_972c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x972c60ULL || rel >= 0x972c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00972c70 size=768 callers=274 calls=0
*/
void sub_972c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x972c70ULL || rel >= 0x972f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00972f70 size=1152 callers=2 calls=1
   calls: sub_9733f0
*/
void sub_972f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x972f70ULL || rel >= 0x9733f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009733f0 size=4672 callers=40 calls=0
*/
void sub_9733f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9733f0ULL || rel >= 0x974630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00974630 size=192 callers=9 calls=2
   calls: sub_5d99d0, sub_9794c0
*/
void sub_974630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x974630ULL || rel >= 0x9746f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009746f0 size=32 callers=6 calls=1
   calls: sub_9795d0
*/
void sub_9746f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9746f0ULL || rel >= 0x974710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00974710 size=48 callers=0 calls=1
   calls: sub_979850
*/
void sub_974710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x974710ULL || rel >= 0x974740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00974740 size=32 callers=2 calls=0
*/
void sub_974740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x974740ULL || rel >= 0x974760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00974760 size=32 callers=4 calls=0
*/
void sub_974760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x974760ULL || rel >= 0x974780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00974780 size=16 callers=0 calls=0
*/
void sub_974780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x974780ULL || rel >= 0x974790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00974790 size=80 callers=0 calls=0
*/
void sub_974790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x974790ULL || rel >= 0x9747e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009747e0 size=544 callers=5 calls=1
   calls: sub_974a00
*/
void sub_9747e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9747e0ULL || rel >= 0x974a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00974a00 size=352 callers=10 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2070
*/
void sub_974a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x974a00ULL || rel >= 0x974b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00974b60 size=112 callers=1 calls=0
*/
void sub_974b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x974b60ULL || rel >= 0x974bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00974bd0 size=464 callers=5 calls=2
   calls: sub_612ef0, sub_9747e0
*/
void sub_974bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x974bd0ULL || rel >= 0x974da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00974da0 size=448 callers=3 calls=3
   calls: sub_612ef0, sub_9747e0, sub_97cd20
*/
void sub_974da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x974da0ULL || rel >= 0x974f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00974f60 size=112 callers=3 calls=0
*/
void sub_974f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x974f60ULL || rel >= 0x974fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00974fd0 size=528 callers=5 calls=1
   calls: sub_974a00
*/
void sub_974fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x974fd0ULL || rel >= 0x9751e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009751e0 size=432 callers=2 calls=3
   calls: sub_612ef0, sub_974fd0, sub_97cd20
*/
void sub_9751e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9751e0ULL || rel >= 0x975390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00975390 size=512 callers=3 calls=1
   calls: sub_974a00
*/
void sub_975390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x975390ULL || rel >= 0x975590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00975590 size=416 callers=1 calls=3
   calls: sub_612ef0, sub_975390, sub_98c1b0
*/
void sub_975590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x975590ULL || rel >= 0x975730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00975730 size=112 callers=2 calls=0
*/
void sub_975730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x975730ULL || rel >= 0x9757a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009757a0 size=96 callers=0 calls=0
*/
void sub_9757a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9757a0ULL || rel >= 0x975800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00975800 size=96 callers=0 calls=0
*/
void sub_975800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x975800ULL || rel >= 0x975860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00975860 size=608 callers=0 calls=0
*/
void sub_975860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x975860ULL || rel >= 0x975ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00975ac0 size=96 callers=0 calls=0
*/
void sub_975ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x975ac0ULL || rel >= 0x975b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00975b20 size=112 callers=0 calls=0
*/
void sub_975b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x975b20ULL || rel >= 0x975b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00975b90 size=1152 callers=25 calls=0
*/
void sub_975b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x975b90ULL || rel >= 0x976010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00976010 size=32 callers=0 calls=0
*/
void sub_976010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x976010ULL || rel >= 0x976030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00976030 size=128 callers=0 calls=0
*/
void sub_976030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x976030ULL || rel >= 0x9760b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009760b0 size=16 callers=0 calls=0
*/
void sub_9760b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9760b0ULL || rel >= 0x9760c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009760c0 size=80 callers=0 calls=0
*/
void sub_9760c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9760c0ULL || rel >= 0x976110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00976110 size=16 callers=0 calls=0
*/
void sub_976110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x976110ULL || rel >= 0x976120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00976120 size=80 callers=12 calls=0
*/
void sub_976120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x976120ULL || rel >= 0x976170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00976170 size=640 callers=1 calls=1
   calls: sub_612f70
   ref: Spine2
*/
void Spine2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x976170ULL || rel >= 0x9763f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009763f0 size=640 callers=1 calls=1
   calls: sub_612f70
   ref: Origin
*/
void Origin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9763f0ULL || rel >= 0x976670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00976670 size=3456 callers=1 calls=1
   calls: sub_612f70
   ref: Spine2
   ref: Spine1
   ref: LFinger
   ref: Origin
*/
void LFinger(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x976670ULL || rel >= 0x9773f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009773f0 size=1920 callers=6 calls=1
   calls: RToeC1
   ref: EffAttack04_01
   ref: EffFoot02
   ref: EffFront01
   ref: EffHeadCenter01
   ref: EffAttack02_01
   ref: EffHand01
   ref: EffAttack03_01
   ref: EffShoot01_01
*/
void EffHeadCenter01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9773f0ULL || rel >= 0x977b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00977b70 size=112 callers=7 calls=1
   calls: EffHeadCenter01
*/
void sub_977b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x977b70ULL || rel >= 0x977be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00977be0 size=224 callers=0 calls=1
   calls: sub_96c4a0
*/
void sub_977be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x977be0ULL || rel >= 0x977cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00977cc0 size=224 callers=0 calls=1
   calls: sub_96c4a0
*/
void sub_977cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x977cc0ULL || rel >= 0x977da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00977da0 size=224 callers=0 calls=1
   calls: sub_96c4a0
*/
void sub_977da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x977da0ULL || rel >= 0x977e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00977e80 size=224 callers=0 calls=1
   calls: sub_96c4a0
*/
void sub_977e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x977e80ULL || rel >= 0x977f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00977f60 size=192 callers=0 calls=0
*/
void sub_977f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x977f60ULL || rel >= 0x978020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978020 size=192 callers=0 calls=0
*/
void sub_978020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978020ULL || rel >= 0x9780e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009780e0 size=16 callers=0 calls=0
*/
void sub_9780e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9780e0ULL || rel >= 0x9780f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009780f0 size=16 callers=0 calls=0
*/
void sub_9780f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9780f0ULL || rel >= 0x978100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978100 size=16 callers=0 calls=0
*/
void sub_978100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978100ULL || rel >= 0x978110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978110 size=16 callers=0 calls=0
*/
void sub_978110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978110ULL || rel >= 0x978120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978120 size=16 callers=0 calls=0
*/
void sub_978120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978120ULL || rel >= 0x978130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978130 size=16 callers=0 calls=0
*/
void sub_978130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978130ULL || rel >= 0x978140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978140 size=16 callers=0 calls=0
*/
void sub_978140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978140ULL || rel >= 0x978150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978150 size=80 callers=0 calls=0
*/
void sub_978150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978150ULL || rel >= 0x9781a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009781a0 size=16 callers=0 calls=0
*/
void sub_9781a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9781a0ULL || rel >= 0x9781b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009781b0 size=16 callers=0 calls=0
*/
void sub_9781b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9781b0ULL || rel >= 0x9781c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009781c0 size=16 callers=0 calls=0
*/
void sub_9781c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9781c0ULL || rel >= 0x9781d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009781d0 size=16 callers=0 calls=0
*/
void sub_9781d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9781d0ULL || rel >= 0x9781e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009781e0 size=16 callers=0 calls=0
*/
void sub_9781e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9781e0ULL || rel >= 0x9781f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009781f0 size=16 callers=0 calls=0
*/
void sub_9781f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9781f0ULL || rel >= 0x978200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978200 size=16 callers=0 calls=0
*/
void sub_978200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978200ULL || rel >= 0x978210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978210 size=16 callers=0 calls=0
*/
void sub_978210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978210ULL || rel >= 0x978220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978220 size=16 callers=0 calls=0
*/
void sub_978220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978220ULL || rel >= 0x978230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978230 size=16 callers=0 calls=0
*/
void sub_978230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978230ULL || rel >= 0x978240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978240 size=16 callers=0 calls=0
*/
void sub_978240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978240ULL || rel >= 0x978250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978250 size=16 callers=0 calls=0
*/
void sub_978250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978250ULL || rel >= 0x978260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978260 size=16 callers=0 calls=0
*/
void sub_978260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978260ULL || rel >= 0x978270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978270 size=16 callers=0 calls=0
*/
void sub_978270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978270ULL || rel >= 0x978280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978280 size=16 callers=0 calls=0
*/
void sub_978280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978280ULL || rel >= 0x978290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978290 size=16 callers=0 calls=0
*/
void sub_978290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978290ULL || rel >= 0x9782a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009782a0 size=16 callers=0 calls=0
*/
void sub_9782a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9782a0ULL || rel >= 0x9782b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009782b0 size=16 callers=0 calls=0
*/
void sub_9782b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9782b0ULL || rel >= 0x9782c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009782c0 size=32 callers=0 calls=0
*/
void sub_9782c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9782c0ULL || rel >= 0x9782e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009782e0 size=16 callers=0 calls=0
*/
void sub_9782e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9782e0ULL || rel >= 0x9782f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009782f0 size=192 callers=0 calls=0
*/
void sub_9782f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9782f0ULL || rel >= 0x9783b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009783b0 size=192 callers=0 calls=0
*/
void sub_9783b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9783b0ULL || rel >= 0x978470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978470 size=16 callers=0 calls=0
*/
void sub_978470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978470ULL || rel >= 0x978480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978480 size=16 callers=0 calls=0
*/
void sub_978480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978480ULL || rel >= 0x978490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978490 size=192 callers=0 calls=0
*/
void sub_978490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978490ULL || rel >= 0x978550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978550 size=192 callers=0 calls=0
*/
void sub_978550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978550ULL || rel >= 0x978610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978610 size=192 callers=0 calls=0
*/
void sub_978610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978610ULL || rel >= 0x9786d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009786d0 size=192 callers=0 calls=0
*/
void sub_9786d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9786d0ULL || rel >= 0x978790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978790 size=32 callers=0 calls=0
*/
void sub_978790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978790ULL || rel >= 0x9787b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009787b0 size=80 callers=0 calls=0
*/
void sub_9787b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9787b0ULL || rel >= 0x978800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978800 size=80 callers=0 calls=0
*/
void sub_978800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978800ULL || rel >= 0x978850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978850 size=48 callers=0 calls=0
*/
void sub_978850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978850ULL || rel >= 0x978880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978880 size=16 callers=0 calls=0
*/
void sub_978880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978880ULL || rel >= 0x978890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978890 size=16 callers=0 calls=0
*/
void sub_978890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978890ULL || rel >= 0x9788a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009788a0 size=16 callers=0 calls=0
*/
void sub_9788a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9788a0ULL || rel >= 0x9788b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009788b0 size=16 callers=0 calls=0
*/
void sub_9788b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9788b0ULL || rel >= 0x9788c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009788c0 size=16 callers=0 calls=0
*/
void sub_9788c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9788c0ULL || rel >= 0x9788d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009788d0 size=16 callers=0 calls=0
*/
void sub_9788d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9788d0ULL || rel >= 0x9788e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009788e0 size=192 callers=0 calls=0
*/
void sub_9788e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9788e0ULL || rel >= 0x9789a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009789a0 size=192 callers=0 calls=0
*/
void sub_9789a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9789a0ULL || rel >= 0x978a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978a60 size=80 callers=0 calls=0
*/
void sub_978a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978a60ULL || rel >= 0x978ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978ab0 size=64 callers=0 calls=0
*/
void sub_978ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978ab0ULL || rel >= 0x978af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978af0 size=32 callers=0 calls=0
*/
void sub_978af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978af0ULL || rel >= 0x978b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978b10 size=16 callers=0 calls=0
*/
void sub_978b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978b10ULL || rel >= 0x978b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978b20 size=16 callers=0 calls=0
*/
void sub_978b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978b20ULL || rel >= 0x978b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978b30 size=16 callers=0 calls=0
*/
void sub_978b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978b30ULL || rel >= 0x978b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978b40 size=16 callers=0 calls=0
*/
void sub_978b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978b40ULL || rel >= 0x978b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978b50 size=16 callers=0 calls=0
*/
void sub_978b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978b50ULL || rel >= 0x978b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978b60 size=16 callers=0 calls=0
*/
void sub_978b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978b60ULL || rel >= 0x978b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978b70 size=192 callers=0 calls=0
*/
void sub_978b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978b70ULL || rel >= 0x978c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978c30 size=192 callers=0 calls=0
*/
void sub_978c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978c30ULL || rel >= 0x978cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978cf0 size=272 callers=0 calls=1
   calls: sub_5c6850
*/
void sub_978cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978cf0ULL || rel >= 0x978e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978e00 size=176 callers=0 calls=0
*/
void sub_978e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978e00ULL || rel >= 0x978eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978eb0 size=160 callers=0 calls=0
*/
void sub_978eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978eb0ULL || rel >= 0x978f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00978f50 size=384 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_978f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x978f50ULL || rel >= 0x9790d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009790d0 size=16 callers=0 calls=0
*/
void sub_9790d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9790d0ULL || rel >= 0x9790e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009790e0 size=112 callers=0 calls=1
   calls: sub_967240
*/
void sub_9790e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9790e0ULL || rel >= 0x979150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00979150 size=16 callers=0 calls=0
*/
void sub_979150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x979150ULL || rel >= 0x979160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00979160 size=16 callers=0 calls=0
*/
void sub_979160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x979160ULL || rel >= 0x979170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00979170 size=112 callers=0 calls=1
   calls: sub_967240
*/
void sub_979170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x979170ULL || rel >= 0x9791e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009791e0 size=112 callers=0 calls=1
   calls: sub_967240
*/
void sub_9791e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9791e0ULL || rel >= 0x979250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00979250 size=16 callers=0 calls=0
*/
void sub_979250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x979250ULL || rel >= 0x979260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00979260 size=16 callers=0 calls=0
*/
void sub_979260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x979260ULL || rel >= 0x979270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00979270 size=80 callers=0 calls=0
*/
void sub_979270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x979270ULL || rel >= 0x9792c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009792c0 size=16 callers=0 calls=0
*/
void sub_9792c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9792c0ULL || rel >= 0x9792d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009792d0 size=80 callers=0 calls=0
*/
void sub_9792d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9792d0ULL || rel >= 0x979320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00979320 size=16 callers=0 calls=0
*/
void sub_979320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x979320ULL || rel >= 0x979330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00979330 size=80 callers=0 calls=0
*/
void sub_979330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x979330ULL || rel >= 0x979380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00979380 size=16 callers=0 calls=0
*/
void sub_979380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x979380ULL || rel >= 0x979390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00979390 size=304 callers=4 calls=0
*/
void sub_979390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x979390ULL || rel >= 0x9794c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009794c0 size=272 callers=1 calls=1
   calls: sub_5db3d0
*/
void sub_9794c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9794c0ULL || rel >= 0x9795d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009795d0 size=640 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_979390
*/
void sub_9795d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9795d0ULL || rel >= 0x979850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00979850 size=352 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_979390
*/
void sub_979850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x979850ULL || rel >= 0x9799b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009799b0 size=272 callers=2 calls=2
   calls: sub_11061d0, sub_970060
*/
void sub_9799b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9799b0ULL || rel >= 0x979ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00979ac0 size=144 callers=0 calls=1
   calls: sub_970160
*/
void sub_979ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x979ac0ULL || rel >= 0x979b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00979b50 size=928 callers=0 calls=7
   calls: ba_think01, sub_970170, sub_970390, sub_972af0, sub_972c60, sub_972c70, sub_97a010
*/
void sub_979b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x979b50ULL || rel >= 0x979ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00979ef0 size=288 callers=1 calls=4
   calls: sub_5cfad0, sub_97d5e0, sub_97f190, to_ba02_megaappeal01
   ref: ba_think01
*/
void ba_think01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x979ef0ULL || rel >= 0x97a010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097a010 size=1296 callers=7 calls=11
   calls: sub_59a4f0, sub_59a930, sub_5b9220, sub_607750, sub_7ef6a0, sub_97dfd0, sub_98a850, sub_b334c0, sub_b33c60, sub_b48270, sub_ed0960
*/
void sub_97a010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97a010ULL || rel >= 0x97a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097a520 size=2048 callers=10 calls=13
   calls: sub_135a1a0, sub_136b4f0, sub_136b730, sub_136b780, sub_7cd960, sub_974630, sub_97ad40, sub_987e20, sub_b334c0, sub_b334e0, sub_b334f0, sub_b6ff20
   ... +1 more
*/
void sub_97a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97a520ULL || rel >= 0x97ad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097ad20 size=32 callers=29 calls=0
*/
void sub_97ad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97ad20ULL || rel >= 0x97ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097ad40 size=1088 callers=3 calls=6
   calls: sub_974a00, sub_986200, sub_b334c0, sub_b334e0, sub_ea0fd0, sub_ea9e40
*/
void sub_97ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97ad40ULL || rel >= 0x97b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097b180 size=768 callers=1 calls=6
   calls: sub_974630, sub_97ad40, sub_987e20, sub_b334c0, sub_b334e0, sub_ea0fd0
*/
void sub_97b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97b180ULL || rel >= 0x97b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097b480 size=416 callers=16 calls=4
   calls: sub_12f9ef0, sub_7ef220, sub_97b620, sub_987db0
*/
void sub_97b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97b480ULL || rel >= 0x97b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097b620 size=672 callers=1 calls=5
   calls: sub_974630, sub_97ad40, sub_b334c0, sub_b33500, sub_ea0fd0
*/
void sub_97b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97b620ULL || rel >= 0x97b8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097b8c0 size=128 callers=1 calls=1
   calls: sub_987db0
*/
void sub_97b8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97b8c0ULL || rel >= 0x97b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097b940 size=336 callers=0 calls=1
   calls: sub_b335e0
*/
void sub_97b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97b940ULL || rel >= 0x97ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097ba90 size=2640 callers=25 calls=21
   calls: ob0046_00_xshadowmSkin_vis, sub_1106200, sub_1106320, sub_11063e0, sub_11067c0, sub_607750, sub_7c56e0, sub_8a9060, sub_97c4e0, sub_97cdf0, sub_97d3f0, sub_97e1a0
   ... +9 more
   ref: ba_variation
   ref: GroundAttributes
   ref: g_table
*/
void GroundAttributes(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97ba90ULL || rel >= 0x97c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097c4e0 size=2112 callers=1 calls=23
   calls: camAdjustScale, sub_11061d0, sub_1106200, sub_12f2b90, sub_12f2c40, sub_607750, sub_618d40, sub_618e70, sub_671d00, sub_671e80, sub_6721f0, sub_7c56e0
   ... +11 more
*/
void sub_97c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97c4e0ULL || rel >= 0x97cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097cd20 size=208 callers=2 calls=2
   calls: sub_97e1a0, sub_b33800
*/
void sub_97cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97cd20ULL || rel >= 0x97cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097cdf0 size=544 callers=1 calls=4
   calls: sub_59a180, sub_5bee70, sub_5e2bc0, sub_97dfd0
*/
void sub_97cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97cdf0ULL || rel >= 0x97d010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097d010 size=880 callers=1 calls=6
   calls: sub_615bd0, sub_615c50, sub_97e1a0, sub_b33760, sub_b33800, sub_ee74b0
   ref: ob0046_00_xshadowfSkin_vis
   ref: ob0046_00_xshadowmSkin_vis
*/
void ob0046_00_xshadowmSkin_vis(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97d010ULL || rel >= 0x97d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097d380 size=112 callers=4 calls=0
*/
void sub_97d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97d380ULL || rel >= 0x97d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097d3f0 size=496 callers=1 calls=3
   calls: sub_607750, sub_b33c60, sub_b46b30
*/
void sub_97d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97d3f0ULL || rel >= 0x97d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097d5e0 size=896 callers=6 calls=4
   calls: sub_607750, sub_987040, sub_b33c60, sub_b8c930
*/
void sub_97d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97d5e0ULL || rel >= 0x97d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097d960 size=64 callers=8 calls=0
*/
void sub_97d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97d960ULL || rel >= 0x97d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097d9a0 size=208 callers=3 calls=4
   calls: sub_793fb0, sub_986bc0, sub_986e00, sub_b85840
*/
void sub_97d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97d9a0ULL || rel >= 0x97da70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097da70 size=416 callers=1 calls=2
   calls: sub_671e80, sub_97d5e0
*/
void sub_97da70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97da70ULL || rel >= 0x97dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097dc10 size=368 callers=3 calls=7
   calls: exadjust_table, sub_11061d0, sub_1106220, sub_11063e0, sub_11067c0, timing_table, waza_table
   ref: adjustScale
   ref: camAdjustScale
*/
void camAdjustScale(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97dc10ULL || rel >= 0x97dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097dd80 size=592 callers=1 calls=4
   calls: sub_59a180, sub_5bee70, sub_5e2bc0, sub_97dfd0
*/
void sub_97dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97dd80ULL || rel >= 0x97dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097dfd0 size=464 callers=18 calls=2
   calls: sub_607750, sub_b33a30
*/
void sub_97dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97dfd0ULL || rel >= 0x97e1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097e1a0 size=416 callers=23 calls=1
   calls: sub_607750
*/
void sub_97e1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97e1a0ULL || rel >= 0x97e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097e340 size=1024 callers=18 calls=8
   calls: sub_607750, sub_9746f0, sub_9862e0, sub_987e90, sub_988230, sub_b33640, sub_b33c60, sub_b46720
*/
void sub_97e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97e340ULL || rel >= 0x97e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097e740 size=400 callers=18 calls=1
   calls: sub_b336a0
*/
void sub_97e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97e740ULL || rel >= 0x97e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097e8d0 size=1360 callers=0 calls=3
   calls: sub_12f2d90, sub_97d9a0, sub_b33870
   ref: PM_Visible
*/
void PM_Visible(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97e8d0ULL || rel >= 0x97ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097ee20 size=32 callers=0 calls=0
*/
void sub_97ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97ee20ULL || rel >= 0x97ee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097ee40 size=96 callers=0 calls=1
   calls: sub_974760
*/
void sub_97ee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97ee40ULL || rel >= 0x97eea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097eea0 size=112 callers=0 calls=1
   calls: sub_974760
*/
void sub_97eea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97eea0ULL || rel >= 0x97ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097ef10 size=80 callers=46 calls=0
*/
void sub_97ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97ef10ULL || rel >= 0x97ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097ef60 size=80 callers=7 calls=0
*/
void sub_97ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97ef60ULL || rel >= 0x97efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097efb0 size=80 callers=6 calls=0
*/
void sub_97efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97efb0ULL || rel >= 0x97f000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097f000 size=80 callers=1 calls=0
*/
void sub_97f000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97f000ULL || rel >= 0x97f050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097f050 size=208 callers=3 calls=1
   calls: sub_12f2e50
*/
void sub_97f050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97f050ULL || rel >= 0x97f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097f120 size=112 callers=3 calls=0
*/
void sub_97f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97f120ULL || rel >= 0x97f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097f190 size=512 callers=18 calls=4
   calls: sub_607750, sub_97a010, sub_b33c60, sub_b477b0
*/
void sub_97f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97f190ULL || rel >= 0x97f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097f390 size=512 callers=2 calls=3
   calls: sub_607750, sub_b33c60, sub_b47510
*/
void sub_97f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97f390ULL || rel >= 0x97f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097f590 size=512 callers=7 calls=3
   calls: sub_607750, sub_b33c60, sub_b46f20
*/
void sub_97f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97f590ULL || rel >= 0x97f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097f790 size=1424 callers=11 calls=4
   calls: sub_607750, sub_97a010, sub_b33c60, sub_b477b0
   ref: to_ba21_tokusyu01
   ref: to_ba41_down01
   ref: to_ba21_tokusyu03
   ref: to_ba20_buturi01
   ref: to_ba21_tokusyu04
   ref: to_ba10_waitA01
   ref: to_ba30_damageS01
   ref: to_ba20_buturi04
*/
void to_ba02_megaappeal01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97f790ULL || rel >= 0x97fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097fd20 size=176 callers=7 calls=2
   calls: sub_97a010, sub_b96730
*/
void sub_97fd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97fd20ULL || rel >= 0x97fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097fdd0 size=496 callers=1 calls=3
   calls: sub_607750, sub_b33c60, sub_b48270
*/
void sub_97fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97fdd0ULL || rel >= 0x97ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0097ffc0 size=640 callers=4 calls=5
   calls: camAdjustScale, sub_12f9ef0, sub_607750, sub_b33c60, sub_b47a40
*/
void sub_97ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97ffc0ULL || rel >= 0x980240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00980240 size=304 callers=1 calls=3
   calls: sub_980370, sub_9804a0, sub_c1eef0
   ref: bin/pokemon/
   ref: bin/chara/data/
*/
void unnamed_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x980240ULL || rel >= 0x980370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00980370 size=304 callers=2 calls=3
   calls: sub_5e6180, sub_986ac0, sub_d0c0
*/
void sub_980370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x980370ULL || rel >= 0x9804a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009804a0 size=304 callers=2 calls=3
   calls: sub_5e6180, sub_986b40, sub_d0c0
*/
void sub_9804a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9804a0ULL || rel >= 0x9805d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009805d0 size=896 callers=2 calls=6
   calls: camAdjustScale, sub_12f9ef0, sub_607750, sub_97f590, sub_b33c60, sub_b47aa0
   ref: ba_variation
*/
void ba_variation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9805d0ULL || rel >= 0x980950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00980950 size=528 callers=1 calls=3
   calls: sub_607750, sub_b33c60, sub_b47ab0
*/
void sub_980950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x980950ULL || rel >= 0x980b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00980b60 size=560 callers=1 calls=3
   calls: sub_607750, sub_b33c60, sub_b47a50
*/
void sub_980b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x980b60ULL || rel >= 0x980d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00980d90 size=496 callers=7 calls=3
   calls: sub_607750, sub_b33c60, sub_b47a70
*/
void sub_980d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x980d90ULL || rel >= 0x980f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00980f80 size=480 callers=1 calls=3
   calls: sub_607750, sub_b33c60, sub_b47a80
*/
void sub_980f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x980f80ULL || rel >= 0x981160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00981160 size=496 callers=0 calls=3
   calls: sub_612ef0, sub_97e1a0, sub_b33800
*/
void sub_981160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x981160ULL || rel >= 0x981350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00981350 size=496 callers=1 calls=3
   calls: sub_607750, sub_b33c60, sub_b46a30
*/
void sub_981350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x981350ULL || rel >= 0x981540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00981540 size=768 callers=2 calls=4
   calls: sub_607750, sub_b33c60, sub_b47ac0, sub_b47fd0
*/
void sub_981540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x981540ULL || rel >= 0x981840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00981840 size=480 callers=1 calls=3
   calls: sub_607750, sub_b33c60, sub_b47d40
*/
void sub_981840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x981840ULL || rel >= 0x981a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00981a20 size=320 callers=42 calls=5
   calls: sub_59b1f0, sub_59b230, sub_7ef6a0, sub_97dfd0, sub_98a850
   ref: to_ba10_waitB01
*/
void to_ba10_waitB01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x981a20ULL || rel >= 0x981b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00981b60 size=16 callers=44 calls=0
*/
void sub_981b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x981b60ULL || rel >= 0x981b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00981b70 size=48 callers=123 calls=0
*/
void sub_981b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x981b70ULL || rel >= 0x981ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00981ba0 size=256 callers=0 calls=2
   calls: sub_972c30, sub_97d5e0
*/
void sub_981ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x981ba0ULL || rel >= 0x981ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00981ca0 size=240 callers=0 calls=1
   calls: sub_97d5e0
*/
void sub_981ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x981ca0ULL || rel >= 0x981d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00981d90 size=288 callers=0 calls=1
   calls: sub_97d5e0
*/
void sub_981d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x981d90ULL || rel >= 0x981eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00981eb0 size=128 callers=8 calls=1
   calls: sub_97d9a0
   ref: PM_Health
*/
void PM_Health(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x981eb0ULL || rel >= 0x981f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00981f30 size=192 callers=6 calls=4
   calls: sub_793f30, sub_986bc0, sub_986e00, sub_b85840
*/
void sub_981f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x981f30ULL || rel >= 0x981ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00981ff0 size=960 callers=4 calls=9
   calls: sub_612f70, sub_793ea0, sub_794040, sub_971650, sub_972c60, sub_972c70, sub_986bc0, sub_986e00, sub_b857d0
*/
void sub_981ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x981ff0ULL || rel >= 0x9823b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009823b0 size=512 callers=26 calls=3
   calls: sub_607750, sub_b33c60, sub_b46c30
*/
void sub_9823b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9823b0ULL || rel >= 0x9825b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009825b0 size=176 callers=8 calls=3
   calls: sub_59a930, sub_97dfd0, sub_982660
*/
void sub_9825b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9825b0ULL || rel >= 0x982660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00982660 size=656 callers=2 calls=6
   calls: sub_59a5a0, sub_59a5c0, sub_59a650, sub_5b9220, sub_9516b0, sub_97dfd0
*/
void sub_982660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x982660ULL || rel >= 0x9828f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009828f0 size=288 callers=6 calls=1
   calls: sub_12f9ef0
*/
void sub_9828f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9828f0ULL || rel >= 0x982a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00982a10 size=576 callers=1 calls=4
   calls: sub_59a180, sub_5bee70, sub_5e2bc0, sub_97dfd0
*/
void sub_982a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x982a10ULL || rel >= 0x982c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00982c50 size=1280 callers=10 calls=5
   calls: sub_607750, sub_987040, sub_b33c60, sub_b46720, sub_b8c9e0
*/
void sub_982c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x982c50ULL || rel >= 0x983150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00983150 size=592 callers=2 calls=5
   calls: sub_607750, sub_982c50, sub_b33c60, sub_b46720, sub_ede170
*/
void sub_983150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x983150ULL || rel >= 0x9833a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009833a0 size=592 callers=2 calls=5
   calls: sub_607750, sub_982c50, sub_b33c60, sub_b46720, sub_ede180
*/
void sub_9833a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9833a0ULL || rel >= 0x9835f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009835f0 size=592 callers=2 calls=5
   calls: sub_607750, sub_982c50, sub_b33c60, sub_b46720, sub_ede190
*/
void sub_9835f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9835f0ULL || rel >= 0x983840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00983840 size=608 callers=7 calls=4
   calls: sub_607750, sub_982c50, sub_b33c60, sub_b46720
*/
void sub_983840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x983840ULL || rel >= 0x983aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00983aa0 size=608 callers=6 calls=4
   calls: sub_607750, sub_982c50, sub_b33c60, sub_b46720
*/
void sub_983aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x983aa0ULL || rel >= 0x983d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00983d00 size=608 callers=6 calls=4
   calls: sub_607750, sub_982c50, sub_b33c60, sub_b46720
*/
void sub_983d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x983d00ULL || rel >= 0x983f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00983f60 size=16 callers=2 calls=0
*/
void sub_983f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x983f60ULL || rel >= 0x983f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00983f70 size=736 callers=4 calls=5
   calls: sub_947d00, sub_974a00, sub_987ee0, sub_987fa0, sub_ee74b0
*/
void sub_983f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x983f70ULL || rel >= 0x984250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984250 size=1136 callers=16 calls=6
   calls: sub_974a00, sub_986200, sub_b334c0, sub_b334e0, sub_ea0fd0, sub_ea9e40
*/
void sub_984250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984250ULL || rel >= 0x9846c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009846c0 size=208 callers=9 calls=1
   calls: sub_b335e0
*/
void sub_9846c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9846c0ULL || rel >= 0x984790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984790 size=576 callers=4 calls=4
   calls: sub_97e1a0, sub_b33760, sub_b33800, sub_ee74b0
*/
void sub_984790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984790ULL || rel >= 0x9849d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009849d0 size=464 callers=2 calls=0
   ref: Play_PV_Btl_052_sp_roar
   ref: Play_PV_Btl_052_sp_down
   ref: Play_PV_Btl_%03d_%02d_%s
   ref: Play_PV_Btl_%03d_%02d_00
   ref: PM%03d_%02d
   ref: PM%03dVC
*/
void Play_PV_Btl_052_sp_roar(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9849d0ULL || rel >= 0x984ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984ba0 size=432 callers=2 calls=3
   calls: Play_PV_Btl_052_sp_roar, sub_981f30, sub_981ff0
*/
void sub_984ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984ba0ULL || rel >= 0x984d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984d50 size=416 callers=0 calls=0
*/
void sub_984d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984d50ULL || rel >= 0x984ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984ef0 size=16 callers=0 calls=0
*/
void sub_984ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984ef0ULL || rel >= 0x984f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984f00 size=16 callers=0 calls=0
*/
void sub_984f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984f00ULL || rel >= 0x984f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984f10 size=16 callers=0 calls=0
*/
void sub_984f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984f10ULL || rel >= 0x984f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984f20 size=16 callers=0 calls=0
*/
void sub_984f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984f20ULL || rel >= 0x984f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984f30 size=16 callers=0 calls=0
*/
void sub_984f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984f30ULL || rel >= 0x984f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984f40 size=16 callers=0 calls=0
*/
void sub_984f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984f40ULL || rel >= 0x984f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984f50 size=80 callers=0 calls=0
*/
void sub_984f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984f50ULL || rel >= 0x984fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984fa0 size=16 callers=0 calls=0
*/
void sub_984fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984fa0ULL || rel >= 0x984fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984fb0 size=16 callers=0 calls=0
*/
void sub_984fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984fb0ULL || rel >= 0x984fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984fc0 size=16 callers=0 calls=0
*/
void sub_984fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984fc0ULL || rel >= 0x984fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984fd0 size=16 callers=0 calls=0
*/
void sub_984fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984fd0ULL || rel >= 0x984fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984fe0 size=16 callers=0 calls=0
*/
void sub_984fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984fe0ULL || rel >= 0x984ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00984ff0 size=16 callers=0 calls=0
*/
void sub_984ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x984ff0ULL || rel >= 0x985000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985000 size=16 callers=0 calls=0
*/
void sub_985000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985000ULL || rel >= 0x985010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985010 size=16 callers=0 calls=0
*/
void sub_985010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985010ULL || rel >= 0x985020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985020 size=48 callers=0 calls=0
*/
void sub_985020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985020ULL || rel >= 0x985050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985050 size=64 callers=0 calls=0
*/
void sub_985050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985050ULL || rel >= 0x985090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985090 size=144 callers=0 calls=0
*/
void sub_985090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985090ULL || rel >= 0x985120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985120 size=16 callers=0 calls=0
*/
void sub_985120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985120ULL || rel >= 0x985130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985130 size=32 callers=0 calls=0
*/
void sub_985130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985130ULL || rel >= 0x985150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985150 size=64 callers=0 calls=0
*/
void sub_985150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985150ULL || rel >= 0x985190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985190 size=16 callers=0 calls=0
*/
void sub_985190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985190ULL || rel >= 0x9851a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009851a0 size=32 callers=0 calls=0
*/
void sub_9851a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9851a0ULL || rel >= 0x9851c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009851c0 size=80 callers=0 calls=0
*/
void sub_9851c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9851c0ULL || rel >= 0x985210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985210 size=16 callers=0 calls=0
*/
void sub_985210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985210ULL || rel >= 0x985220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985220 size=32 callers=0 calls=0
*/
void sub_985220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985220ULL || rel >= 0x985240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985240 size=80 callers=0 calls=0
*/
void sub_985240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985240ULL || rel >= 0x985290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985290 size=32 callers=0 calls=0
*/
void sub_985290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985290ULL || rel >= 0x9852b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009852b0 size=32 callers=0 calls=0
*/
void sub_9852b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9852b0ULL || rel >= 0x9852d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009852d0 size=96 callers=0 calls=0
*/
void sub_9852d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9852d0ULL || rel >= 0x985330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985330 size=32 callers=0 calls=0
*/
void sub_985330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985330ULL || rel >= 0x985350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985350 size=80 callers=0 calls=0
*/
void sub_985350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985350ULL || rel >= 0x9853a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009853a0 size=144 callers=0 calls=0
*/
void sub_9853a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9853a0ULL || rel >= 0x985430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985430 size=80 callers=0 calls=0
*/
void sub_985430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985430ULL || rel >= 0x985480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985480 size=80 callers=0 calls=0
*/
void sub_985480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985480ULL || rel >= 0x9854d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009854d0 size=176 callers=0 calls=0
*/
void sub_9854d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9854d0ULL || rel >= 0x985580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985580 size=64 callers=0 calls=0
*/
void sub_985580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985580ULL || rel >= 0x9855c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009855c0 size=80 callers=0 calls=0
*/
void sub_9855c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9855c0ULL || rel >= 0x985610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985610 size=160 callers=0 calls=0
*/
void sub_985610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985610ULL || rel >= 0x9856b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009856b0 size=80 callers=0 calls=0
*/
void sub_9856b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9856b0ULL || rel >= 0x985700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985700 size=96 callers=0 calls=0
*/
void sub_985700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985700ULL || rel >= 0x985760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985760 size=176 callers=0 calls=0
*/
void sub_985760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985760ULL || rel >= 0x985810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985810 size=256 callers=0 calls=0
*/
void sub_985810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985810ULL || rel >= 0x985910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985910 size=272 callers=0 calls=0
*/
void sub_985910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985910ULL || rel >= 0x985a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985a20 size=544 callers=0 calls=0
*/
void sub_985a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985a20ULL || rel >= 0x985c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985c40 size=32 callers=0 calls=0
*/
void sub_985c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985c40ULL || rel >= 0x985c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985c60 size=32 callers=0 calls=0
*/
void sub_985c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985c60ULL || rel >= 0x985c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985c80 size=304 callers=0 calls=1
   calls: sub_967240
*/
void sub_985c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985c80ULL || rel >= 0x985db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985db0 size=16 callers=0 calls=0
*/
void sub_985db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985db0ULL || rel >= 0x985dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985dc0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_985dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985dc0ULL || rel >= 0x985e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985e00 size=32 callers=0 calls=0
*/
void sub_985e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985e00ULL || rel >= 0x985e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985e20 size=16 callers=0 calls=0
*/
void sub_985e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985e20ULL || rel >= 0x985e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985e30 size=16 callers=0 calls=0
*/
void sub_985e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985e30ULL || rel >= 0x985e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00985e40 size=496 callers=0 calls=3
   calls: sub_967240, sub_986030, sub_c51540
*/
void sub_985e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x985e40ULL || rel >= 0x986030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986030 size=272 callers=2 calls=2
   calls: sub_5d99d0, sub_ede0e0
*/
void sub_986030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986030ULL || rel >= 0x986140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986140 size=144 callers=0 calls=2
   calls: sub_5b5790, sub_982660
*/
void sub_986140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986140ULL || rel >= 0x9861d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009861d0 size=16 callers=0 calls=0
*/
void sub_9861d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9861d0ULL || rel >= 0x9861e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009861e0 size=16 callers=0 calls=0
*/
void sub_9861e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9861e0ULL || rel >= 0x9861f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009861f0 size=16 callers=0 calls=0
*/
void sub_9861f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9861f0ULL || rel >= 0x986200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986200 size=224 callers=40 calls=1
   calls: sub_5d8ee0
*/
void sub_986200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986200ULL || rel >= 0x9862e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009862e0 size=800 callers=5 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_9862e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9862e0ULL || rel >= 0x986600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986600 size=16 callers=0 calls=0
*/
void sub_986600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986600ULL || rel >= 0x986610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986610 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_986610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986610ULL || rel >= 0x986640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986640 size=16 callers=0 calls=0
*/
void sub_986640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986640ULL || rel >= 0x986650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986650 size=16 callers=0 calls=0
*/
void sub_986650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986650ULL || rel >= 0x986660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986660 size=16 callers=0 calls=0
*/
void sub_986660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986660ULL || rel >= 0x986670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986670 size=64 callers=0 calls=2
   calls: sub_9862e0, sub_c51740
*/
void sub_986670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986670ULL || rel >= 0x9866b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009866b0 size=16 callers=0 calls=0
*/
void sub_9866b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9866b0ULL || rel >= 0x9866c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009866c0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_9866c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9866c0ULL || rel >= 0x986700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986700 size=32 callers=0 calls=0
*/
void sub_986700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986700ULL || rel >= 0x986720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986720 size=16 callers=0 calls=0
*/
void sub_986720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986720ULL || rel >= 0x986730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986730 size=16 callers=0 calls=0
*/
void sub_986730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986730ULL || rel >= 0x986740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986740 size=112 callers=0 calls=1
   calls: sub_619130
*/
void sub_986740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986740ULL || rel >= 0x9867b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009867b0 size=16 callers=0 calls=0
*/
void sub_9867b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9867b0ULL || rel >= 0x9867c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009867c0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_9867c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9867c0ULL || rel >= 0x986800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986800 size=32 callers=0 calls=0
*/
void sub_986800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986800ULL || rel >= 0x986820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986820 size=16 callers=0 calls=0
*/
void sub_986820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986820ULL || rel >= 0x986830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986830 size=16 callers=0 calls=0
*/
void sub_986830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986830ULL || rel >= 0x986840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986840 size=112 callers=0 calls=1
   calls: sub_619060
*/
void sub_986840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986840ULL || rel >= 0x9868b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009868b0 size=16 callers=0 calls=0
*/
void sub_9868b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9868b0ULL || rel >= 0x9868c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009868c0 size=16 callers=0 calls=0
*/
void sub_9868c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9868c0ULL || rel >= 0x9868d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009868d0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_9868d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9868d0ULL || rel >= 0x986910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986910 size=32 callers=0 calls=0
*/
void sub_986910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986910ULL || rel >= 0x986930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986930 size=16 callers=0 calls=0
*/
void sub_986930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986930ULL || rel >= 0x986940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986940 size=16 callers=0 calls=0
*/
void sub_986940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986940ULL || rel >= 0x986950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986950 size=112 callers=0 calls=1
   calls: sub_619060
*/
void sub_986950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986950ULL || rel >= 0x9869c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009869c0 size=16 callers=0 calls=0
*/
void sub_9869c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9869c0ULL || rel >= 0x9869d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009869d0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_9869d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9869d0ULL || rel >= 0x986a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986a10 size=32 callers=0 calls=0
*/
void sub_986a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986a10ULL || rel >= 0x986a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986a30 size=16 callers=0 calls=0
*/
void sub_986a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986a30ULL || rel >= 0x986a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986a40 size=16 callers=0 calls=0
*/
void sub_986a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986a40ULL || rel >= 0x986a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986a50 size=112 callers=0 calls=1
   calls: sub_6191c0
*/
void sub_986a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986a50ULL || rel >= 0x986ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986ac0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_986ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986ac0ULL || rel >= 0x986b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986b40 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_986b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986b40ULL || rel >= 0x986bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986bc0 size=336 callers=15 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_986d10
*/
void sub_986bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986bc0ULL || rel >= 0x986d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986d10 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_986d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986d10ULL || rel >= 0x986e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986e00 size=336 callers=4 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_986f50
*/
void sub_986e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986e00ULL || rel >= 0x986f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00986f50 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_986f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x986f50ULL || rel >= 0x987040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987040 size=240 callers=12 calls=1
   calls: sub_607750
*/
void sub_987040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987040ULL || rel >= 0x987130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987130 size=16 callers=0 calls=0
*/
void sub_987130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987130ULL || rel >= 0x987140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987140 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_987140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987140ULL || rel >= 0x987180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987180 size=32 callers=0 calls=0
*/
void sub_987180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987180ULL || rel >= 0x9871a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009871a0 size=16 callers=0 calls=0
*/
void sub_9871a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9871a0ULL || rel >= 0x9871b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009871b0 size=16 callers=0 calls=0
*/
void sub_9871b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9871b0ULL || rel >= 0x9871c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009871c0 size=80 callers=0 calls=1
   calls: sub_987210
*/
void sub_9871c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9871c0ULL || rel >= 0x987210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987210 size=512 callers=7 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_987210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987210ULL || rel >= 0x987410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987410 size=16 callers=0 calls=0
*/
void sub_987410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987410ULL || rel >= 0x987420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987420 size=16 callers=0 calls=0
*/
void sub_987420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987420ULL || rel >= 0x987430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987430 size=32 callers=0 calls=0
*/
void sub_987430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987430ULL || rel >= 0x987450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987450 size=32 callers=0 calls=0
*/
void sub_987450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987450ULL || rel >= 0x987470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987470 size=16 callers=0 calls=0
*/
void sub_987470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987470ULL || rel >= 0x987480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987480 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_987480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987480ULL || rel >= 0x9874c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009874c0 size=32 callers=0 calls=0
*/
void sub_9874c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9874c0ULL || rel >= 0x9874e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009874e0 size=16 callers=0 calls=0
*/
void sub_9874e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9874e0ULL || rel >= 0x9874f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009874f0 size=16 callers=0 calls=0
*/
void sub_9874f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9874f0ULL || rel >= 0x987500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987500 size=160 callers=0 calls=2
   calls: sub_987210, sub_ede170
*/
void sub_987500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987500ULL || rel >= 0x9875a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009875a0 size=16 callers=0 calls=0
*/
void sub_9875a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9875a0ULL || rel >= 0x9875b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009875b0 size=16 callers=0 calls=0
*/
void sub_9875b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9875b0ULL || rel >= 0x9875c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009875c0 size=32 callers=0 calls=0
*/
void sub_9875c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9875c0ULL || rel >= 0x9875e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009875e0 size=32 callers=0 calls=0
*/
void sub_9875e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9875e0ULL || rel >= 0x987600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987600 size=16 callers=0 calls=0
*/
void sub_987600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987600ULL || rel >= 0x987610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987610 size=16 callers=0 calls=0
*/
void sub_987610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987610ULL || rel >= 0x987620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987620 size=16 callers=0 calls=0
*/
void sub_987620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987620ULL || rel >= 0x987630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987630 size=16 callers=0 calls=0
*/
void sub_987630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987630ULL || rel >= 0x987640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987640 size=16 callers=0 calls=0
*/
void sub_987640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987640ULL || rel >= 0x987650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987650 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_987650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987650ULL || rel >= 0x987690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987690 size=32 callers=0 calls=0
*/
void sub_987690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987690ULL || rel >= 0x9876b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009876b0 size=16 callers=0 calls=0
*/
void sub_9876b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9876b0ULL || rel >= 0x9876c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009876c0 size=16 callers=0 calls=0
*/
void sub_9876c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9876c0ULL || rel >= 0x9876d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009876d0 size=160 callers=0 calls=2
   calls: sub_987210, sub_ede180
*/
void sub_9876d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9876d0ULL || rel >= 0x987770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987770 size=16 callers=0 calls=0
*/
void sub_987770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987770ULL || rel >= 0x987780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987780 size=16 callers=0 calls=0
*/
void sub_987780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987780ULL || rel >= 0x987790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987790 size=16 callers=0 calls=0
*/
void sub_987790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987790ULL || rel >= 0x9877a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009877a0 size=16 callers=0 calls=0
*/
void sub_9877a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9877a0ULL || rel >= 0x9877b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009877b0 size=16 callers=0 calls=0
*/
void sub_9877b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9877b0ULL || rel >= 0x9877c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009877c0 size=16 callers=0 calls=0
*/
void sub_9877c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9877c0ULL || rel >= 0x9877d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009877d0 size=16 callers=0 calls=0
*/
void sub_9877d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9877d0ULL || rel >= 0x9877e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009877e0 size=16 callers=0 calls=0
*/
void sub_9877e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9877e0ULL || rel >= 0x9877f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009877f0 size=16 callers=0 calls=0
*/
void sub_9877f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9877f0ULL || rel >= 0x987800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987800 size=16 callers=0 calls=0
*/
void sub_987800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987800ULL || rel >= 0x987810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987810 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_987810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987810ULL || rel >= 0x987850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987850 size=32 callers=0 calls=0
*/
void sub_987850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987850ULL || rel >= 0x987870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987870 size=16 callers=0 calls=0
*/
void sub_987870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987870ULL || rel >= 0x987880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987880 size=16 callers=0 calls=0
*/
void sub_987880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987880ULL || rel >= 0x987890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987890 size=160 callers=0 calls=2
   calls: sub_987210, sub_ede190
*/
void sub_987890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987890ULL || rel >= 0x987930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987930 size=16 callers=0 calls=0
*/
void sub_987930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987930ULL || rel >= 0x987940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987940 size=16 callers=0 calls=0
*/
void sub_987940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987940ULL || rel >= 0x987950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987950 size=16 callers=0 calls=0
*/
void sub_987950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987950ULL || rel >= 0x987960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987960 size=16 callers=0 calls=0
*/
void sub_987960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987960ULL || rel >= 0x987970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987970 size=16 callers=0 calls=0
*/
void sub_987970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987970ULL || rel >= 0x987980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987980 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_987980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987980ULL || rel >= 0x9879c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009879c0 size=32 callers=0 calls=0
*/
void sub_9879c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9879c0ULL || rel >= 0x9879e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009879e0 size=16 callers=0 calls=0
*/
void sub_9879e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9879e0ULL || rel >= 0x9879f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009879f0 size=16 callers=0 calls=0
*/
void sub_9879f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9879f0ULL || rel >= 0x987a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987a00 size=128 callers=0 calls=4
   calls: sub_987210, sub_ede1a0, sub_ede1b0, sub_ede1c0
*/
void sub_987a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987a00ULL || rel >= 0x987a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987a80 size=16 callers=0 calls=0
*/
void sub_987a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987a80ULL || rel >= 0x987a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987a90 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_987a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987a90ULL || rel >= 0x987ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987ad0 size=32 callers=0 calls=0
*/
void sub_987ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987ad0ULL || rel >= 0x987af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987af0 size=16 callers=0 calls=0
*/
void sub_987af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987af0ULL || rel >= 0x987b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987b00 size=16 callers=0 calls=0
*/
void sub_987b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987b00ULL || rel >= 0x987b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987b10 size=128 callers=0 calls=4
   calls: sub_987210, sub_ede220, sub_ede230, sub_ede240
*/
void sub_987b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987b10ULL || rel >= 0x987b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987b90 size=16 callers=0 calls=0
*/
void sub_987b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987b90ULL || rel >= 0x987ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987ba0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_987ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987ba0ULL || rel >= 0x987be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987be0 size=32 callers=0 calls=0
*/
void sub_987be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987be0ULL || rel >= 0x987c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987c00 size=16 callers=0 calls=0
*/
void sub_987c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987c00ULL || rel >= 0x987c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987c10 size=16 callers=0 calls=0
*/
void sub_987c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987c10ULL || rel >= 0x987c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987c20 size=128 callers=0 calls=4
   calls: sub_987210, sub_ede1f0, sub_ede200, sub_ede210
*/
void sub_987c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987c20ULL || rel >= 0x987ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987ca0 size=240 callers=0 calls=0
*/
void sub_987ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987ca0ULL || rel >= 0x987d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987d90 size=32 callers=2 calls=0
*/
void sub_987d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987d90ULL || rel >= 0x987db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987db0 size=112 callers=2 calls=0
*/
void sub_987db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987db0ULL || rel >= 0x987e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987e20 size=112 callers=9 calls=0
*/
void sub_987e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987e20ULL || rel >= 0x987e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987e90 size=32 callers=5 calls=0
*/
void sub_987e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987e90ULL || rel >= 0x987eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987eb0 size=16 callers=1 calls=0
*/
void sub_987eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987eb0ULL || rel >= 0x987ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987ec0 size=16 callers=0 calls=0
*/
void sub_987ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987ec0ULL || rel >= 0x987ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987ed0 size=16 callers=0 calls=0
*/
void sub_987ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987ed0ULL || rel >= 0x987ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987ee0 size=192 callers=8 calls=1
   calls: sub_970060
*/
void sub_987ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987ee0ULL || rel >= 0x987fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00987fa0 size=656 callers=8 calls=7
   calls: sub_5cfad0, sub_618d40, sub_618ec0, sub_6194a0, sub_61c080, sub_974630, sub_989700
*/
void sub_987fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x987fa0ULL || rel >= 0x988230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00988230 size=1840 callers=6 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750, sub_96ccf0, sub_9746f0
*/
void sub_988230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x988230ULL || rel >= 0x988960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00988960 size=32 callers=0 calls=0
*/
void sub_988960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x988960ULL || rel >= 0x988980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00988980 size=32 callers=1 calls=0
*/
void sub_988980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x988980ULL || rel >= 0x9889a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009889a0 size=16 callers=1 calls=0
*/
void sub_9889a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9889a0ULL || rel >= 0x9889b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009889b0 size=1232 callers=4 calls=6
   calls: sub_598de0, sub_5cf8e0, sub_5cf8f0, sub_5d99d0, sub_607750, sub_989810
*/
void sub_9889b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9889b0ULL || rel >= 0x988e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00988e80 size=64 callers=1 calls=2
   calls: sub_59b1f0, sub_59b200
*/
void sub_988e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x988e80ULL || rel >= 0x988ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00988ec0 size=80 callers=0 calls=0
*/
void sub_988ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x988ec0ULL || rel >= 0x988f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00988f10 size=272 callers=0 calls=3
   calls: sub_619130, sub_6191c0, sub_974760
*/
void sub_988f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x988f10ULL || rel >= 0x989020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989020 size=128 callers=1 calls=1
   calls: sub_ed2fe0
*/
void sub_989020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989020ULL || rel >= 0x9890a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009890a0 size=32 callers=5 calls=0
*/
void sub_9890a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9890a0ULL || rel >= 0x9890c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009890c0 size=160 callers=1 calls=0
*/
void sub_9890c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9890c0ULL || rel >= 0x989160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989160 size=128 callers=3 calls=0
*/
void sub_989160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989160ULL || rel >= 0x9891e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009891e0 size=128 callers=3 calls=0
*/
void sub_9891e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9891e0ULL || rel >= 0x989260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989260 size=144 callers=1 calls=2
   calls: sub_612ef0, sub_970390
*/
void sub_989260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989260ULL || rel >= 0x9892f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009892f0 size=608 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_9892f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9892f0ULL || rel >= 0x989550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989550 size=16 callers=0 calls=0
*/
void sub_989550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989550ULL || rel >= 0x989560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989560 size=16 callers=0 calls=0
*/
void sub_989560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989560ULL || rel >= 0x989570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989570 size=16 callers=0 calls=0
*/
void sub_989570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989570ULL || rel >= 0x989580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989580 size=16 callers=0 calls=0
*/
void sub_989580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989580ULL || rel >= 0x989590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989590 size=16 callers=0 calls=0
*/
void sub_989590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989590ULL || rel >= 0x9895a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009895a0 size=16 callers=0 calls=0
*/
void sub_9895a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9895a0ULL || rel >= 0x9895b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009895b0 size=16 callers=0 calls=0
*/
void sub_9895b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9895b0ULL || rel >= 0x9895c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009895c0 size=16 callers=0 calls=0
*/
void sub_9895c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9895c0ULL || rel >= 0x9895d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009895d0 size=304 callers=0 calls=1
   calls: sub_967240
*/
void sub_9895d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9895d0ULL || rel >= 0x989700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989700 size=272 callers=14 calls=2
   calls: sub_5d99d0, sub_6160e0
*/
void sub_989700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989700ULL || rel >= 0x989810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989810 size=240 callers=5 calls=1
   calls: sub_598a60
*/
void sub_989810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989810ULL || rel >= 0x989900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989900 size=1056 callers=1 calls=5
   calls: sub_14dbec0, sub_14dc210, sub_14dd2a0, sub_14dd320, sub_14dd6a0
*/
void sub_989900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989900ULL || rel >= 0x989d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989d20 size=64 callers=2 calls=2
   calls: sub_14dbff0, sub_14dd320
*/
void sub_989d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989d20ULL || rel >= 0x989d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989d60 size=64 callers=3 calls=2
   calls: sub_14dbff0, sub_14dc210
*/
void sub_989d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989d60ULL || rel >= 0x989da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989da0 size=64 callers=2 calls=2
   calls: sub_14dbff0, sub_14dd5e0
*/
void sub_989da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989da0ULL || rel >= 0x989de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989de0 size=208 callers=2 calls=3
   calls: sub_14dbff0, sub_14dc4d0, sub_601140
*/
void sub_989de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989de0ULL || rel >= 0x989eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989eb0 size=288 callers=1 calls=5
   calls: sub_14dbf60, sub_14dbff0, sub_14dc050, sub_14dd2b0, sub_601140
*/
void sub_989eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989eb0ULL || rel >= 0x989fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00989fd0 size=96 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_989fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x989fd0ULL || rel >= 0x98a030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a030 size=32 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_98a030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a030ULL || rel >= 0x98a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a050 size=80 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_98a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a050ULL || rel >= 0x98a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a0a0 size=32 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_98a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a0a0ULL || rel >= 0x98a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

