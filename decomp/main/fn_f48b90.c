/* main functions 00f48b90..00f64fa0 (121 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00f48b90 size=64 callers=0 calls=1
   calls: sub_f47920
*/
void sub_f48b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48b90ULL || rel >= 0xf48bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48bd0 size=64 callers=0 calls=0
*/
void sub_f48bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48bd0ULL || rel >= 0xf48c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48c10 size=48 callers=0 calls=0
*/
void sub_f48c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48c10ULL || rel >= 0xf48c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48c40 size=48 callers=0 calls=0
*/
void sub_f48c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48c40ULL || rel >= 0xf48c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48c70 size=512 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_f48c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48c70ULL || rel >= 0xf48e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48e70 size=32 callers=0 calls=0
*/
void sub_f48e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48e70ULL || rel >= 0xf48e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48e90 size=64 callers=0 calls=0
*/
void sub_f48e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48e90ULL || rel >= 0xf48ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48ed0 size=48 callers=0 calls=0
*/
void sub_f48ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48ed0ULL || rel >= 0xf48f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48f00 size=48 callers=0 calls=0
*/
void sub_f48f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48f00ULL || rel >= 0xf48f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48f30 size=64 callers=0 calls=1
   calls: sub_f47920
*/
void sub_f48f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48f30ULL || rel >= 0xf48f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48f70 size=64 callers=0 calls=0
*/
void sub_f48f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48f70ULL || rel >= 0xf48fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48fb0 size=48 callers=0 calls=0
*/
void sub_f48fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48fb0ULL || rel >= 0xf48fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f48fe0 size=48 callers=0 calls=0
*/
void sub_f48fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf48fe0ULL || rel >= 0xf49010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49010 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_bb83a0, sub_bb8640, sub_bb9d40, sub_bba240, sub_c70
*/
void sub_f49010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49010ULL || rel >= 0xf49140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49140 size=128 callers=0 calls=0
*/
void sub_f49140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49140ULL || rel >= 0xf491c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f491c0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_tournament/bin/uikit_live_tournament_top_00.bin
   ref: bin/appli/live_tournament/bin/live_tournament_top_00_lyt.bin
*/
void uikit_live_tournament_top_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf491c0ULL || rel >= 0xf493a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f493a0 size=64 callers=0 calls=2
   calls: sub_14e1a30, sub_e84310
*/
void sub_f493a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf493a0ULL || rel >= 0xf493e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f493e0 size=80 callers=3 calls=2
   calls: sub_14e1a30, sub_e84310
*/
void sub_f493e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf493e0ULL || rel >= 0xf49430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49430 size=80 callers=0 calls=0
*/
void sub_f49430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49430ULL || rel >= 0xf49480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49480 size=576 callers=0 calls=9
   calls: sub_14e6d50, sub_1502120, sub_5cfad0, sub_e807d0, sub_e840a0, sub_ea4740, sub_ea4760, sub_eb6530, sub_f49d90
   ref: normal_panel
*/
void normal_panel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49480ULL || rel >= 0xf496c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f496c0 size=32 callers=8 calls=1
   calls: sub_eb6530
*/
void sub_f496c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf496c0ULL || rel >= 0xf496e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f496e0 size=192 callers=3 calls=7
   calls: sub_14e1a00, sub_14e1a30, sub_14e6550, sub_e80580, sub_e807f0, sub_e840a0, sub_e84310
   ref: normal_panel
*/
void normal_panel_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf496e0ULL || rel >= 0xf497a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f497a0 size=16 callers=3 calls=0
*/
void sub_f497a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf497a0ULL || rel >= 0xf497b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f497b0 size=16 callers=0 calls=0
*/
void sub_f497b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf497b0ULL || rel >= 0xf497c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f497c0 size=112 callers=4 calls=2
   calls: sub_e83430, sub_eb6230
*/
void sub_f497c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf497c0ULL || rel >= 0xf49830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49830 size=144 callers=11 calls=5
   calls: sub_14e1a30, sub_14e1b40, sub_e840a0, sub_e84310, sub_eb6230
   ref: normal_panel
*/
void normal_panel_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49830ULL || rel >= 0xf498c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f498c0 size=16 callers=3 calls=0
*/
void sub_f498c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf498c0ULL || rel >= 0xf498d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f498d0 size=288 callers=3 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_f498d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf498d0ULL || rel >= 0xf499f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f499f0 size=112 callers=1 calls=1
   calls: sub_f498d0
*/
void sub_f499f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf499f0ULL || rel >= 0xf49a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49a60 size=128 callers=1 calls=1
   calls: sub_f498d0
*/
void sub_f49a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49a60ULL || rel >= 0xf49ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49ae0 size=64 callers=1 calls=0
*/
void sub_f49ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49ae0ULL || rel >= 0xf49b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49b20 size=64 callers=2 calls=0
*/
void sub_f49b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49b20ULL || rel >= 0xf49b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49b60 size=128 callers=1 calls=1
   calls: sub_f498d0
*/
void sub_f49b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49b60ULL || rel >= 0xf49be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49be0 size=16 callers=0 calls=0
*/
void sub_f49be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49be0ULL || rel >= 0xf49bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49bf0 size=16 callers=0 calls=0
*/
void sub_f49bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49bf0ULL || rel >= 0xf49c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49c00 size=16 callers=0 calls=0
*/
void sub_f49c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49c00ULL || rel >= 0xf49c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49c10 size=16 callers=0 calls=0
*/
void sub_f49c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49c10ULL || rel >= 0xf49c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49c20 size=16 callers=0 calls=0
*/
void sub_f49c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49c20ULL || rel >= 0xf49c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49c30 size=16 callers=0 calls=0
*/
void sub_f49c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49c30ULL || rel >= 0xf49c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49c40 size=16 callers=0 calls=0
*/
void sub_f49c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49c40ULL || rel >= 0xf49c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49c50 size=16 callers=0 calls=0
*/
void sub_f49c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49c50ULL || rel >= 0xf49c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49c60 size=304 callers=0 calls=0
*/
void sub_f49c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49c60ULL || rel >= 0xf49d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49d90 size=592 callers=4 calls=1
   calls: sub_f49d90
*/
void sub_f49d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49d90ULL || rel >= 0xf49fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f49fe0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_tournament/bin/live_tournament_ttitle_00_lyt.bin
*/
void live_tournament_ttitle_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49fe0ULL || rel >= 0xf4a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a0f0 size=192 callers=0 calls=2
   calls: sub_14ab040, sub_f4a370
*/
void sub_f4a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a0f0ULL || rel >= 0xf4a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a1b0 size=192 callers=1 calls=2
   calls: sub_14ab040, sub_f4a370
*/
void sub_f4a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a1b0ULL || rel >= 0xf4a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a270 size=16 callers=0 calls=0
*/
void sub_f4a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a270ULL || rel >= 0xf4a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a280 size=16 callers=0 calls=0
*/
void sub_f4a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a280ULL || rel >= 0xf4a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a290 size=112 callers=8 calls=2
   calls: sub_e83430, sub_eb6230
*/
void sub_f4a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a290ULL || rel >= 0xf4a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a300 size=80 callers=2 calls=1
   calls: sub_eb6230
*/
void sub_f4a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a300ULL || rel >= 0xf4a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a350 size=32 callers=10 calls=1
   calls: sub_eb6530
*/
void sub_f4a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a350ULL || rel >= 0xf4a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a370 size=288 callers=3 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_f4a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a370ULL || rel >= 0xf4a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a490 size=272 callers=1 calls=2
   calls: sub_1313430, sub_7c2af0
*/
void sub_f4a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a490ULL || rel >= 0xf4a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a5a0 size=384 callers=1 calls=4
   calls: sub_1313430, sub_14ab040, sub_7c2af0, sub_f4a370
*/
void sub_f4a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a5a0ULL || rel >= 0xf4a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a720 size=16 callers=0 calls=0
*/
void sub_f4a720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a720ULL || rel >= 0xf4a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a730 size=16 callers=0 calls=0
*/
void sub_f4a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a730ULL || rel >= 0xf4a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a740 size=16 callers=0 calls=0
*/
void sub_f4a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a740ULL || rel >= 0xf4a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a750 size=16 callers=0 calls=0
*/
void sub_f4a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a750ULL || rel >= 0xf4a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a760 size=16 callers=0 calls=0
*/
void sub_f4a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a760ULL || rel >= 0xf4a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a770 size=16 callers=0 calls=0
*/
void sub_f4a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a770ULL || rel >= 0xf4a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a780 size=16 callers=0 calls=0
*/
void sub_f4a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a780ULL || rel >= 0xf4a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a790 size=16 callers=0 calls=0
*/
void sub_f4a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a790ULL || rel >= 0xf4a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a7a0 size=304 callers=0 calls=0
*/
void sub_f4a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a7a0ULL || rel >= 0xf4a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4a8d0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_tournament/bin/live_tournament_detail_btlcup_00_lyt.bin
   ref: bin/appli/live_tournament/bin/uikit_live_tournament_detail_btlcup_00.bin
*/
void uikit_live_tournament_detail_btlcup_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a8d0ULL || rel >= 0xf4aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4aab0 size=416 callers=0 calls=3
   calls: sub_93c570, sub_f4ac90, sub_f4ae60
*/
void sub_f4aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4aab0ULL || rel >= 0xf4ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ac50 size=64 callers=0 calls=0
*/
void sub_f4ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ac50ULL || rel >= 0xf4ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ac90 size=464 callers=1 calls=2
   calls: sub_1315b90, sub_f4b580
*/
void sub_f4ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ac90ULL || rel >= 0xf4ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ae60 size=1072 callers=1 calls=5
   calls: sub_1313430, sub_1315b90, sub_14ab040, sub_7c2af0, sub_f4b580
*/
void sub_f4ae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ae60ULL || rel >= 0xf4b290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4b290 size=16 callers=0 calls=0
*/
void sub_f4b290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b290ULL || rel >= 0xf4b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4b2a0 size=400 callers=0 calls=6
   calls: sub_1502120, sub_5cfad0, sub_e807d0, sub_ea4760, sub_eb6530, sub_f4bc30
*/
void sub_f4b2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b2a0ULL || rel >= 0xf4b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4b430 size=32 callers=5 calls=1
   calls: sub_eb6530
*/
void sub_f4b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b430ULL || rel >= 0xf4b450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4b450 size=16 callers=1 calls=0
*/
void sub_f4b450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b450ULL || rel >= 0xf4b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4b460 size=48 callers=2 calls=1
   calls: sub_e807f0
*/
void sub_f4b460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b460ULL || rel >= 0xf4b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4b490 size=16 callers=3 calls=0
*/
void sub_f4b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b490ULL || rel >= 0xf4b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4b4a0 size=112 callers=1 calls=2
   calls: sub_e83430, sub_eb6230
*/
void sub_f4b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b4a0ULL || rel >= 0xf4b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4b510 size=80 callers=4 calls=1
   calls: sub_eb6230
*/
void sub_f4b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b510ULL || rel >= 0xf4b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4b560 size=16 callers=2 calls=0
*/
void sub_f4b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b560ULL || rel >= 0xf4b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4b570 size=16 callers=2 calls=0
*/
void sub_f4b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b570ULL || rel >= 0xf4b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4b580 size=288 callers=13 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_f4b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b580ULL || rel >= 0xf4b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4b6a0 size=880 callers=1 calls=7
   calls: Play_UI_common_decide_5, sub_14e3670, sub_14e3680, sub_14e4040, sub_67d450, sub_93c570, sub_e7eb10
*/
void sub_f4b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b6a0ULL || rel >= 0xf4ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ba10 size=16 callers=0 calls=0
*/
void sub_f4ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ba10ULL || rel >= 0xf4ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ba20 size=16 callers=0 calls=0
*/
void sub_f4ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ba20ULL || rel >= 0xf4ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ba30 size=16 callers=0 calls=0
*/
void sub_f4ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ba30ULL || rel >= 0xf4ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ba40 size=16 callers=0 calls=0
*/
void sub_f4ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ba40ULL || rel >= 0xf4ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ba50 size=16 callers=0 calls=0
*/
void sub_f4ba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ba50ULL || rel >= 0xf4ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ba60 size=16 callers=0 calls=0
*/
void sub_f4ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ba60ULL || rel >= 0xf4ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ba70 size=16 callers=0 calls=0
*/
void sub_f4ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ba70ULL || rel >= 0xf4ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ba80 size=16 callers=0 calls=0
*/
void sub_f4ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ba80ULL || rel >= 0xf4ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ba90 size=304 callers=0 calls=0
*/
void sub_f4ba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ba90ULL || rel >= 0xf4bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4bbc0 size=32 callers=0 calls=0
*/
void sub_f4bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4bbc0ULL || rel >= 0xf4bbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4bbe0 size=16 callers=0 calls=0
*/
void sub_f4bbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4bbe0ULL || rel >= 0xf4bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4bbf0 size=32 callers=0 calls=0
*/
void sub_f4bbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4bbf0ULL || rel >= 0xf4bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4bc10 size=32 callers=0 calls=0
*/
void sub_f4bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4bc10ULL || rel >= 0xf4bc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4bc30 size=400 callers=4 calls=2
   calls: sub_e86260, sub_f4bc30
*/
void sub_f4bc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4bc30ULL || rel >= 0xf4bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4bdc0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_tournament/bin/uikit_live_tournament_detail_btlcup_01.bin
   ref: bin/appli/live_tournament/bin/live_tournament_detail_btlcup_01_lyt.bin
*/
void uikit_live_tournament_detail_btlcup_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4bdc0ULL || rel >= 0xf4bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4bfa0 size=416 callers=0 calls=3
   calls: sub_93c570, sub_f4c180, sub_f4c3d0
*/
void sub_f4bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4bfa0ULL || rel >= 0xf4c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4c140 size=64 callers=0 calls=0
*/
void sub_f4c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c140ULL || rel >= 0xf4c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4c180 size=592 callers=1 calls=2
   calls: sub_1315b90, sub_f4c940
*/
void sub_f4c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c180ULL || rel >= 0xf4c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4c3d0 size=640 callers=1 calls=3
   calls: sub_13133a0, sub_1315b90, sub_f4c940
*/
void sub_f4c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c3d0ULL || rel >= 0xf4c650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4c650 size=16 callers=0 calls=0
*/
void sub_f4c650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c650ULL || rel >= 0xf4c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4c660 size=400 callers=0 calls=6
   calls: sub_1502120, sub_5cfad0, sub_e807d0, sub_ea4760, sub_eb6530, sub_f4cff0
*/
void sub_f4c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c660ULL || rel >= 0xf4c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4c7f0 size=32 callers=5 calls=1
   calls: sub_eb6530
*/
void sub_f4c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c7f0ULL || rel >= 0xf4c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4c810 size=16 callers=1 calls=0
*/
void sub_f4c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c810ULL || rel >= 0xf4c820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4c820 size=48 callers=2 calls=1
   calls: sub_e807f0
*/
void sub_f4c820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c820ULL || rel >= 0xf4c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4c850 size=16 callers=2 calls=0
*/
void sub_f4c850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c850ULL || rel >= 0xf4c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4c860 size=112 callers=1 calls=2
   calls: sub_e83430, sub_eb6230
*/
void sub_f4c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c860ULL || rel >= 0xf4c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4c8d0 size=80 callers=4 calls=1
   calls: sub_eb6230
*/
void sub_f4c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c8d0ULL || rel >= 0xf4c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4c920 size=16 callers=2 calls=0
*/
void sub_f4c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c920ULL || rel >= 0xf4c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4c930 size=16 callers=2 calls=0
*/
void sub_f4c930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c930ULL || rel >= 0xf4c940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4c940 size=288 callers=16 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_f4c940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c940ULL || rel >= 0xf4ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ca60 size=880 callers=1 calls=7
   calls: Play_UI_common_decide_5, sub_14e3670, sub_14e3680, sub_14e4040, sub_67d450, sub_93c570, sub_e7eb10
*/
void sub_f4ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ca60ULL || rel >= 0xf4cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4cdd0 size=16 callers=0 calls=0
*/
void sub_f4cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4cdd0ULL || rel >= 0xf4cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4cde0 size=16 callers=0 calls=0
*/
void sub_f4cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4cde0ULL || rel >= 0xf4cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4cdf0 size=16 callers=0 calls=0
*/
void sub_f4cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4cdf0ULL || rel >= 0xf4ce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ce00 size=16 callers=0 calls=0
*/
void sub_f4ce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ce00ULL || rel >= 0xf4ce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ce10 size=16 callers=0 calls=0
*/
void sub_f4ce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ce10ULL || rel >= 0xf4ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ce20 size=16 callers=0 calls=0
*/
void sub_f4ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ce20ULL || rel >= 0xf4ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ce30 size=16 callers=0 calls=0
*/
void sub_f4ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ce30ULL || rel >= 0xf4ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ce40 size=16 callers=0 calls=0
*/
void sub_f4ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ce40ULL || rel >= 0xf4ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ce50 size=304 callers=0 calls=0
*/
void sub_f4ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ce50ULL || rel >= 0xf4cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4cf80 size=32 callers=0 calls=0
*/
void sub_f4cf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4cf80ULL || rel >= 0xf4cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4cfa0 size=16 callers=0 calls=0
*/
void sub_f4cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4cfa0ULL || rel >= 0xf4cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4cfb0 size=32 callers=0 calls=0
*/
void sub_f4cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4cfb0ULL || rel >= 0xf4cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4cfd0 size=32 callers=0 calls=0
*/
void sub_f4cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4cfd0ULL || rel >= 0xf4cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4cff0 size=400 callers=4 calls=2
   calls: sub_e86260, sub_f4cff0
*/
void sub_f4cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4cff0ULL || rel >= 0xf4d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4d180 size=1040 callers=0 calls=17
   calls: OptionBar_6, sub_138cb20, sub_c39c40, sub_d0c0, sub_e806b0, sub_f3d7e0, sub_f3d810, sub_f3da70, sub_f3f520, sub_f42ed0, sub_f435a0, sub_f48830
   ... +5 more
   ref: ViewTop
   ref: ViewBg
   ref: ViewTitle
   ref: host_menu
*/
void host_menu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4d180ULL || rel >= 0xf4d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4d590 size=464 callers=1 calls=5
   calls: sub_795bc0, sub_c39c40, sub_eb7570, sub_eb75e0, sub_f43ab0
   ref: OptionBar
*/
void OptionBar_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4d590ULL || rel >= 0xf4d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4d760 size=96 callers=0 calls=2
   calls: sub_f4d7c0, sub_f4db20
*/
void sub_f4d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4d760ULL || rel >= 0xf4d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4d7c0 size=192 callers=1 calls=6
   calls: normal_panel_2, sub_f3dab0, sub_f3f520, sub_f434e0, sub_f496c0, sub_f4a350
*/
void sub_f4d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4d7c0ULL || rel >= 0xf4d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4d880 size=672 callers=0 calls=9
   calls: normal_panel_3, sub_e80580, sub_f3d7e0, sub_f3d800, sub_f3f520, sub_f493e0, sub_f497a0, sub_f498c0, sub_f49b20
*/
void sub_f4d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4d880ULL || rel >= 0xf4db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4db20 size=368 callers=1 calls=12
   calls: normal_panel_3, strinput, sub_e76980, sub_e769b0, sub_e76a20, sub_e7a6e0, sub_e80580, sub_f3d7e0, sub_f3d800, sub_f3dac0, sub_f3f520, sub_f4a300
*/
void sub_f4db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4db20ULL || rel >= 0xf4dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4dc90 size=16 callers=0 calls=0
*/
void sub_f4dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4dc90ULL || rel >= 0xf4dca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4dca0 size=16 callers=0 calls=0
*/
void sub_f4dca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4dca0ULL || rel >= 0xf4dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4dcb0 size=16 callers=0 calls=0
*/
void sub_f4dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4dcb0ULL || rel >= 0xf4dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4dcc0 size=16 callers=0 calls=0
*/
void sub_f4dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4dcc0ULL || rel >= 0xf4dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4dcd0 size=16 callers=0 calls=0
*/
void sub_f4dcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4dcd0ULL || rel >= 0xf4dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4dce0 size=16 callers=0 calls=0
*/
void sub_f4dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4dce0ULL || rel >= 0xf4dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4dcf0 size=16 callers=0 calls=0
*/
void sub_f4dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4dcf0ULL || rel >= 0xf4dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4dd00 size=16 callers=0 calls=0
*/
void sub_f4dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4dd00ULL || rel >= 0xf4dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4dd10 size=16 callers=0 calls=0
*/
void sub_f4dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4dd10ULL || rel >= 0xf4dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4dd20 size=304 callers=0 calls=0
*/
void sub_f4dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4dd20ULL || rel >= 0xf4de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4de50 size=128 callers=0 calls=0
*/
void sub_f4de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4de50ULL || rel >= 0xf4ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ded0 size=288 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_tournament/bin/live_tournament_matchmake_00_lyt.bin
*/
void live_tournament_matchmake_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ded0ULL || rel >= 0xf4dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4dff0 size=2080 callers=0 calls=4
   calls: sub_14ab040, sub_14ba7b0, sub_8f3180, sub_f4eb20
   ref: pane_L_matchmake_btlteam_00_L_btlteam_pokelist_%02d_L_team_pokelist_icon_01_P_pokeIcon_00
   ref: pane_L_matchmake_btlteam_00_L_btlteam_pokelist_%02d_P_team_pokelist_icon_02
*/
void pane_L_matchmake_btlteam_00_L_btlteam_pokelist__02d_P_te(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4dff0ULL || rel >= 0xf4e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4e810 size=192 callers=2 calls=1
   calls: sub_14ab040
*/
void sub_f4e810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4e810ULL || rel >= 0xf4e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4e8d0 size=16 callers=0 calls=0
*/
void sub_f4e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4e8d0ULL || rel >= 0xf4e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4e8e0 size=160 callers=0 calls=2
   calls: sub_ea4760, sub_eb6530
*/
void sub_f4e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4e8e0ULL || rel >= 0xf4e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4e980 size=32 callers=2 calls=1
   calls: sub_eb6530
*/
void sub_f4e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4e980ULL || rel >= 0xf4e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4e9a0 size=64 callers=3 calls=2
   calls: sub_e80580, sub_e807f0
*/
void sub_f4e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4e9a0ULL || rel >= 0xf4e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4e9e0 size=48 callers=1 calls=1
   calls: sub_e80580
*/
void sub_f4e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4e9e0ULL || rel >= 0xf4ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ea10 size=48 callers=0 calls=1
   calls: sub_e80580
*/
void sub_f4ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ea10ULL || rel >= 0xf4ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ea40 size=112 callers=1 calls=2
   calls: sub_e83430, sub_eb6230
*/
void sub_f4ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ea40ULL || rel >= 0xf4eab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4eab0 size=80 callers=2 calls=1
   calls: sub_eb6230
*/
void sub_f4eab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4eab0ULL || rel >= 0xf4eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4eb00 size=16 callers=1 calls=0
*/
void sub_f4eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4eb00ULL || rel >= 0xf4eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4eb10 size=16 callers=2 calls=0
*/
void sub_f4eb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4eb10ULL || rel >= 0xf4eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4eb20 size=288 callers=1 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_f4eb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4eb20ULL || rel >= 0xf4ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ec40 size=128 callers=1 calls=2
   calls: sub_e83430, sub_e83850
*/
void sub_f4ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ec40ULL || rel >= 0xf4ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ecc0 size=96 callers=4 calls=2
   calls: sub_e83430, sub_e83850
*/
void sub_f4ecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ecc0ULL || rel >= 0xf4ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ed20 size=416 callers=0 calls=0
*/
void sub_f4ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ed20ULL || rel >= 0xf4eec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4eec0 size=16 callers=0 calls=0
*/
void sub_f4eec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4eec0ULL || rel >= 0xf4eed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4eed0 size=16 callers=0 calls=0
*/
void sub_f4eed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4eed0ULL || rel >= 0xf4eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4eee0 size=16 callers=0 calls=0
*/
void sub_f4eee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4eee0ULL || rel >= 0xf4eef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4eef0 size=16 callers=0 calls=0
*/
void sub_f4eef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4eef0ULL || rel >= 0xf4ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ef00 size=16 callers=0 calls=0
*/
void sub_f4ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ef00ULL || rel >= 0xf4ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ef10 size=16 callers=0 calls=0
*/
void sub_f4ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ef10ULL || rel >= 0xf4ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ef20 size=16 callers=0 calls=0
*/
void sub_f4ef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ef20ULL || rel >= 0xf4ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ef30 size=16 callers=0 calls=0
*/
void sub_f4ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ef30ULL || rel >= 0xf4ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4ef40 size=304 callers=0 calls=0
*/
void sub_f4ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ef40ULL || rel >= 0xf4f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4f070 size=992 callers=0 calls=12
   calls: sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e806b0, sub_f3d7e0, sub_f3d810, sub_f3f520, sub_f42ed0, sub_f435a0, sub_f48830, sub_f4a290
   ref: ViewBg
   ref: ViewTitle
   ref: demo_after
*/
void demo_after(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f070ULL || rel >= 0xf4f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4f450 size=688 callers=0 calls=15
   calls: sub_104fb70, sub_1050060, sub_e806b0, sub_e807f0, sub_eb8930, sub_eb8a30, sub_eb8c60, sub_eb8e80, sub_f3d800, sub_f3d900, sub_f3f520, sub_f434e0
   ... +3 more
*/
void sub_f4f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f450ULL || rel >= 0xf4f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4f700 size=336 callers=1 calls=4
   calls: sub_138c760, sub_138c900, sub_f3d7e0, sub_f3f520
*/
void sub_f4f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f700ULL || rel >= 0xf4f850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4f850 size=16 callers=0 calls=0
*/
void sub_f4f850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f850ULL || rel >= 0xf4f860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4f860 size=16 callers=0 calls=0
*/
void sub_f4f860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f860ULL || rel >= 0xf4f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4f870 size=16 callers=0 calls=0
*/
void sub_f4f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f870ULL || rel >= 0xf4f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4f880 size=16 callers=0 calls=0
*/
void sub_f4f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f880ULL || rel >= 0xf4f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4f890 size=16 callers=0 calls=0
*/
void sub_f4f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f890ULL || rel >= 0xf4f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4f8a0 size=16 callers=0 calls=0
*/
void sub_f4f8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f8a0ULL || rel >= 0xf4f8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4f8b0 size=16 callers=0 calls=0
*/
void sub_f4f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f8b0ULL || rel >= 0xf4f8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4f8c0 size=16 callers=0 calls=0
*/
void sub_f4f8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f8c0ULL || rel >= 0xf4f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4f8d0 size=16 callers=0 calls=0
*/
void sub_f4f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f8d0ULL || rel >= 0xf4f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4f8e0 size=304 callers=0 calls=0
*/
void sub_f4f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f8e0ULL || rel >= 0xf4fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4fa10 size=128 callers=0 calls=0
*/
void sub_f4fa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4fa10ULL || rel >= 0xf4fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4fa90 size=992 callers=0 calls=13
   calls: sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e806b0, sub_f3d7e0, sub_f3d810, sub_f3f520, sub_f42ed0, sub_f4e810, sub_f4ea40, sub_f4fe70
   ... +1 more
   ref: ViewMatchmake
   ref: ViewBg
   ref: matchmake
*/
void ViewMatchmake(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4fa90ULL || rel >= 0xf4fe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f4fe70 size=1888 callers=1 calls=11
   calls: sub_134f490, sub_1353ad0, sub_1353b00, sub_138c900, sub_783bd0, sub_8dfd80, sub_8e0080, sub_f3d7e0, sub_f3f520, sub_fe3340, sub_fe3800
*/
void sub_f4fe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4fe70ULL || rel >= 0xf505d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f505d0 size=64 callers=0 calls=1
   calls: sub_f50610
*/
void sub_f505d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf505d0ULL || rel >= 0xf50610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f50610 size=224 callers=1 calls=7
   calls: sub_e806b0, sub_e807f0, sub_eb8930, sub_f43640, sub_f4e980, sub_f4e9a0, sub_f4ec40
*/
void sub_f50610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf50610ULL || rel >= 0xf506f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f506f0 size=2752 callers=0 calls=34
   calls: NONE_NONE_8, sub_1502120, sub_5cfad0, sub_7f4580, sub_e806b0, sub_e807f0, sub_e88750, sub_e89590, sub_eb8930, sub_eb8a30, sub_eb8c60, sub_eb8e80
   ... +22 more
*/
void sub_f506f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf506f0ULL || rel >= 0xf511b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f511b0 size=16 callers=0 calls=0
*/
void sub_f511b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf511b0ULL || rel >= 0xf511c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f511c0 size=320 callers=1 calls=6
   calls: sub_e806b0, sub_e807f0, sub_eb7e40, sub_f43640, sub_f438c0, sub_f43a80
*/
void sub_f511c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf511c0ULL || rel >= 0xf51300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f51300 size=96 callers=0 calls=0
*/
void sub_f51300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf51300ULL || rel >= 0xf51360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f51360 size=96 callers=0 calls=0
*/
void sub_f51360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf51360ULL || rel >= 0xf513c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f513c0 size=16 callers=0 calls=0
*/
void sub_f513c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf513c0ULL || rel >= 0xf513d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f513d0 size=96 callers=0 calls=0
*/
void sub_f513d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf513d0ULL || rel >= 0xf51430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f51430 size=96 callers=0 calls=0
*/
void sub_f51430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf51430ULL || rel >= 0xf51490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f51490 size=16 callers=0 calls=0
*/
void sub_f51490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf51490ULL || rel >= 0xf514a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f514a0 size=16 callers=0 calls=0
*/
void sub_f514a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf514a0ULL || rel >= 0xf514b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f514b0 size=96 callers=0 calls=0
*/
void sub_f514b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf514b0ULL || rel >= 0xf51510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f51510 size=96 callers=0 calls=0
*/
void sub_f51510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf51510ULL || rel >= 0xf51570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f51570 size=304 callers=0 calls=0
*/
void sub_f51570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf51570ULL || rel >= 0xf516a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f516a0 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f516a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf516a0ULL || rel >= 0xf517f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f517f0 size=128 callers=0 calls=0
*/
void sub_f517f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf517f0ULL || rel >= 0xf51870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f51870 size=1696 callers=0 calls=18
   calls: normal_panel_3, normal_panel_5, sub_c39c40, sub_d0c0, sub_f3dac0, sub_f3f520, sub_f42ed0, sub_f43600, sub_f48830, sub_f48980, sub_f4a300, sub_f4b510
   ... +6 more
   ref: ViewMatchmake
   ref: ViewTop
   ref: ViewDetail00
   ref: ViewBg
   ref: ViewMenu
   ref: ViewTitle
   ref: ViewDetail01
*/
void ViewTitle_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf51870ULL || rel >= 0xf51f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f51f10 size=416 callers=0 calls=10
   calls: sub_f3d800, sub_f3daf0, sub_f3f520, sub_f434e0, sub_f496c0, sub_f4a350, sub_f4b430, sub_f4c7f0, sub_f4e980, sub_f52e70
*/
void sub_f51f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf51f10ULL || rel >= 0xf520b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f520b0 size=288 callers=0 calls=4
   calls: sub_e80580, sub_e806b0, sub_f43540, sub_f4e9e0
*/
void sub_f520b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf520b0ULL || rel >= 0xf521d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f521d0 size=16 callers=0 calls=0
*/
void sub_f521d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf521d0ULL || rel >= 0xf521e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f521e0 size=16 callers=0 calls=0
*/
void sub_f521e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf521e0ULL || rel >= 0xf521f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f521f0 size=16 callers=0 calls=0
*/
void sub_f521f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf521f0ULL || rel >= 0xf52200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52200 size=16 callers=0 calls=0
*/
void sub_f52200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52200ULL || rel >= 0xf52210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52210 size=16 callers=0 calls=0
*/
void sub_f52210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52210ULL || rel >= 0xf52220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52220 size=16 callers=0 calls=0
*/
void sub_f52220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52220ULL || rel >= 0xf52230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52230 size=16 callers=0 calls=0
*/
void sub_f52230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52230ULL || rel >= 0xf52240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52240 size=16 callers=0 calls=0
*/
void sub_f52240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52240ULL || rel >= 0xf52250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52250 size=304 callers=0 calls=0
*/
void sub_f52250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52250ULL || rel >= 0xf52380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52380 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f52380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52380ULL || rel >= 0xf524d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f524d0 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f524d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf524d0ULL || rel >= 0xf52620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52620 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f52620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52620ULL || rel >= 0xf52770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52770 size=128 callers=0 calls=0
*/
void sub_f52770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52770ULL || rel >= 0xf527f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f527f0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_tournament/bin/live_tournament_menu_00_lyt.bin
   ref: bin/appli/live_tournament/bin/uikit_live_tournament_menu_00.bin
*/
void uikit_live_tournament_menu_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf527f0ULL || rel >= 0xf529d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f529d0 size=80 callers=0 calls=3
   calls: sub_14e1a30, sub_e84310, sub_f52a20
*/
void sub_f529d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf529d0ULL || rel >= 0xf52a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52a20 size=544 callers=1 calls=2
   calls: sub_13149a0, sub_f530a0
*/
void sub_f52a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52a20ULL || rel >= 0xf52c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52c40 size=80 callers=0 calls=0
*/
void sub_f52c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52c40ULL || rel >= 0xf52c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52c90 size=480 callers=0 calls=7
   calls: sub_1502120, sub_5cfad0, sub_e807d0, sub_ea4740, sub_ea4760, sub_eb6530, sub_f535a0
*/
void sub_f52c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52c90ULL || rel >= 0xf52e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52e70 size=32 callers=4 calls=1
   calls: sub_eb6530
*/
void sub_f52e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52e70ULL || rel >= 0xf52e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52e90 size=192 callers=1 calls=7
   calls: sub_14e1a00, sub_14e1a30, sub_14e6550, sub_e80580, sub_e807f0, sub_e840a0, sub_e84310
   ref: normal_panel
*/
void normal_panel_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52e90ULL || rel >= 0xf52f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52f50 size=16 callers=1 calls=0
*/
void sub_f52f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52f50ULL || rel >= 0xf52f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52f60 size=112 callers=5 calls=2
   calls: sub_e83430, sub_eb6230
*/
void sub_f52f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52f60ULL || rel >= 0xf52fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f52fd0 size=144 callers=4 calls=5
   calls: sub_14e1a30, sub_14e1b40, sub_e840a0, sub_e84310, sub_eb6230
   ref: normal_panel
*/
void normal_panel_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf52fd0ULL || rel >= 0xf53060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f53060 size=64 callers=2 calls=0
*/
void sub_f53060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf53060ULL || rel >= 0xf530a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f530a0 size=288 callers=13 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_f530a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf530a0ULL || rel >= 0xf531c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f531c0 size=16 callers=1 calls=0
*/
void sub_f531c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf531c0ULL || rel >= 0xf531d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f531d0 size=544 callers=1 calls=2
   calls: sub_1315b90, sub_f530a0
*/
void sub_f531d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf531d0ULL || rel >= 0xf533f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f533f0 size=16 callers=0 calls=0
*/
void sub_f533f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf533f0ULL || rel >= 0xf53400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f53400 size=16 callers=0 calls=0
*/
void sub_f53400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf53400ULL || rel >= 0xf53410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f53410 size=16 callers=0 calls=0
*/
void sub_f53410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf53410ULL || rel >= 0xf53420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f53420 size=16 callers=0 calls=0
*/
void sub_f53420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf53420ULL || rel >= 0xf53430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f53430 size=16 callers=0 calls=0
*/
void sub_f53430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf53430ULL || rel >= 0xf53440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f53440 size=16 callers=0 calls=0
*/
void sub_f53440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf53440ULL || rel >= 0xf53450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f53450 size=16 callers=0 calls=0
*/
void sub_f53450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf53450ULL || rel >= 0xf53460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f53460 size=16 callers=0 calls=0
*/
void sub_f53460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf53460ULL || rel >= 0xf53470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f53470 size=304 callers=0 calls=0
*/
void sub_f53470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf53470ULL || rel >= 0xf535a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f535a0 size=592 callers=4 calls=1
   calls: sub_f535a0
*/
void sub_f535a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf535a0ULL || rel >= 0xf537f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f537f0 size=1248 callers=0 calls=18
   calls: OptionBar_7, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e806b0, sub_f3d7e0, sub_f3d810, sub_f3da70, sub_f3f520, sub_f42ed0, sub_f435a0
   ... +6 more
   ref: ViewTop
   ref: ViewBg
   ref: ViewTitle
*/
void ViewTitle_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf537f0ULL || rel >= 0xf53cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f53cd0 size=464 callers=1 calls=5
   calls: sub_795bc0, sub_c39c40, sub_eb7570, sub_eb75e0, sub_f43ab0
   ref: OptionBar
*/
void OptionBar_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf53cd0ULL || rel >= 0xf53ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f53ea0 size=160 callers=0 calls=5
   calls: sub_f434e0, sub_f496c0, sub_f4a350, sub_f53f40, sub_f54320
*/
void sub_f53ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf53ea0ULL || rel >= 0xf53f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f53f40 size=192 callers=1 calls=6
   calls: normal_panel_2, sub_f3dab0, sub_f3f520, sub_f434e0, sub_f496c0, sub_f4a350
*/
void sub_f53f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf53f40ULL || rel >= 0xf54000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54000 size=800 callers=0 calls=9
   calls: normal_panel_3, sub_138c900, sub_e80580, sub_f3d7e0, sub_f3d800, sub_f3f520, sub_f493e0, sub_f497a0, sub_f498c0
*/
void sub_f54000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54000ULL || rel >= 0xf54320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54320 size=320 callers=1 calls=6
   calls: normal_panel_3, sub_eb8e80, sub_eb8ea0, sub_f3d800, sub_f3f520, sub_f54470
*/
void sub_f54320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54320ULL || rel >= 0xf54460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54460 size=16 callers=0 calls=0
*/
void sub_f54460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54460ULL || rel >= 0xf54470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54470 size=320 callers=1 calls=6
   calls: sub_e806b0, sub_e807f0, sub_eb7e40, sub_f43640, sub_f438c0, sub_f43a80
*/
void sub_f54470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54470ULL || rel >= 0xf545b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f545b0 size=16 callers=0 calls=0
*/
void sub_f545b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf545b0ULL || rel >= 0xf545c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f545c0 size=16 callers=0 calls=0
*/
void sub_f545c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf545c0ULL || rel >= 0xf545d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f545d0 size=16 callers=0 calls=0
*/
void sub_f545d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf545d0ULL || rel >= 0xf545e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f545e0 size=16 callers=0 calls=0
*/
void sub_f545e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf545e0ULL || rel >= 0xf545f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f545f0 size=16 callers=0 calls=0
*/
void sub_f545f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf545f0ULL || rel >= 0xf54600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54600 size=16 callers=0 calls=0
*/
void sub_f54600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54600ULL || rel >= 0xf54610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54610 size=16 callers=0 calls=0
*/
void sub_f54610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54610ULL || rel >= 0xf54620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54620 size=16 callers=0 calls=0
*/
void sub_f54620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54620ULL || rel >= 0xf54630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54630 size=304 callers=0 calls=0
*/
void sub_f54630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54630ULL || rel >= 0xf54760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54760 size=128 callers=0 calls=0
*/
void sub_f54760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54760ULL || rel >= 0xf547e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f547e0 size=768 callers=0 calls=10
   calls: sub_5cfaf0, sub_a800f0, sub_c39c40, sub_d0c0, sub_e807f0, sub_eb6230, sub_ebb140, sub_f3db00, sub_f3f520, sub_f42ed0
   ref: ViewBg
*/
void ViewBg_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf547e0ULL || rel >= 0xf54ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54ae0 size=160 callers=0 calls=3
   calls: sub_f3d7f0, sub_f3d800, sub_f3f520
*/
void sub_f54ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54ae0ULL || rel >= 0xf54b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54b80 size=16 callers=0 calls=0
*/
void sub_f54b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54b80ULL || rel >= 0xf54b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54b90 size=16 callers=0 calls=0
*/
void sub_f54b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54b90ULL || rel >= 0xf54ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54ba0 size=16 callers=0 calls=0
*/
void sub_f54ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54ba0ULL || rel >= 0xf54bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54bb0 size=16 callers=0 calls=0
*/
void sub_f54bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54bb0ULL || rel >= 0xf54bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54bc0 size=16 callers=0 calls=0
*/
void sub_f54bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54bc0ULL || rel >= 0xf54bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54bd0 size=16 callers=0 calls=0
*/
void sub_f54bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54bd0ULL || rel >= 0xf54be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54be0 size=16 callers=0 calls=0
*/
void sub_f54be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54be0ULL || rel >= 0xf54bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54bf0 size=16 callers=0 calls=0
*/
void sub_f54bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54bf0ULL || rel >= 0xf54c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54c00 size=16 callers=0 calls=0
*/
void sub_f54c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54c00ULL || rel >= 0xf54c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54c10 size=304 callers=0 calls=0
*/
void sub_f54c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54c10ULL || rel >= 0xf54d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54d40 size=128 callers=0 calls=0
*/
void sub_f54d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54d40ULL || rel >= 0xf54dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f54dc0 size=1424 callers=0 calls=23
   calls: OptionBar_8, sub_138c900, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e806b0, sub_f3d7e0, sub_f3d810, sub_f3da70, sub_f3f520, sub_f42ed0
   ... +11 more
   ref: ViewBg
   ref: ViewMenu
   ref: ViewTitle
*/
void ViewTitle_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf54dc0ULL || rel >= 0xf55350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f55350 size=384 callers=1 calls=4
   calls: sub_138c900, sub_8dfba0, sub_8dfd80, sub_8e0080
*/
void sub_f55350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf55350ULL || rel >= 0xf554d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f554d0 size=400 callers=1 calls=5
   calls: sub_795bc0, sub_c39c40, sub_eb7570, sub_eb75e0, sub_f43ab0
   ref: OptionBar
*/
void OptionBar_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf554d0ULL || rel >= 0xf55660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f55660 size=176 callers=1 calls=3
   calls: sub_f4a490, sub_f4a5a0, sub_f56a70
*/
void sub_f55660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf55660ULL || rel >= 0xf55710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f55710 size=368 callers=1 calls=7
   calls: sub_138c900, sub_8dfba0, sub_8dfd80, sub_8e0080, sub_8e0670, sub_8e06c0, sub_8e0960
*/
void sub_f55710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf55710ULL || rel >= 0xf55880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f55880 size=304 callers=2 calls=4
   calls: sub_138c900, sub_8dfba0, sub_8dfd80, sub_8e0080
*/
void sub_f55880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf55880ULL || rel >= 0xf559b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f559b0 size=320 callers=0 calls=8
   calls: sub_f3daf0, sub_f3f520, sub_f52e70, sub_f55af0, sub_f55bb0, sub_f55d50, sub_f55fb0, sub_f565b0
*/
void sub_f559b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf559b0ULL || rel >= 0xf55af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f55af0 size=192 callers=1 calls=6
   calls: normal_panel_4, sub_f3dab0, sub_f3f520, sub_f434e0, sub_f4a350, sub_f52e70
*/
void sub_f55af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf55af0ULL || rel >= 0xf55bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f55bb0 size=416 callers=1 calls=9
   calls: normal_panel_5, sub_e80580, sub_f3d7e0, sub_f3d800, sub_f3f520, sub_f52f50, sub_f53060, sub_f531c0, sub_f55880
*/
void sub_f55bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf55bb0ULL || rel >= 0xf55d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f55d50 size=608 callers=1 calls=14
   calls: sub_1354690, sub_138c760, sub_138c900, sub_e806b0, sub_e807f0, sub_eb8930, sub_eb8c60, sub_eb8e80, sub_f3d900, sub_f3da70, sub_f3f520, sub_f43640
   ... +2 more
*/
void sub_f55d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf55d50ULL || rel >= 0xf55fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f55fb0 size=464 callers=1 calls=10
   calls: sub_e806b0, sub_e807f0, sub_eb8930, sub_eb8e80, sub_f3da70, sub_f3dac0, sub_f3daf0, sub_f3f520, sub_f43640, sub_f52f60
*/
void sub_f55fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf55fb0ULL || rel >= 0xf56180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56180 size=1072 callers=0 calls=21
   calls: normal_panel_5, sub_1354690, sub_138c760, sub_138c900, sub_e806b0, sub_e807f0, sub_eb8930, sub_eb8e80, sub_eb8ea0, sub_f3d800, sub_f3d900, sub_f3da70
   ... +9 more
*/
void sub_f56180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56180ULL || rel >= 0xf565b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f565b0 size=384 callers=1 calls=11
   calls: normal_panel_5, strinput, sub_e76980, sub_e769b0, sub_e76a20, sub_e7a6e0, sub_e80580, sub_f3d7e0, sub_f3d800, sub_f3dac0, sub_f3f520
*/
void sub_f565b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf565b0ULL || rel >= 0xf56730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56730 size=16 callers=0 calls=0
*/
void sub_f56730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56730ULL || rel >= 0xf56740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56740 size=192 callers=2 calls=4
   calls: sub_e806b0, sub_e807f0, sub_eb8930, sub_f43640
*/
void sub_f56740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56740ULL || rel >= 0xf56800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56800 size=320 callers=1 calls=6
   calls: sub_e806b0, sub_e807f0, sub_eb7e40, sub_f43640, sub_f438c0, sub_f43a80
*/
void sub_f56800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56800ULL || rel >= 0xf56940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56940 size=304 callers=1 calls=4
   calls: sub_138c900, sub_8dfba0, sub_8dfd80, sub_8e0080
*/
void sub_f56940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56940ULL || rel >= 0xf56a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56a70 size=384 callers=2 calls=5
   calls: sub_138c900, sub_8dfba0, sub_8dfd80, sub_8e0080, sub_8e0960
*/
void sub_f56a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56a70ULL || rel >= 0xf56bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56bf0 size=96 callers=0 calls=0
*/
void sub_f56bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56bf0ULL || rel >= 0xf56c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56c50 size=96 callers=0 calls=0
*/
void sub_f56c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56c50ULL || rel >= 0xf56cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56cb0 size=16 callers=0 calls=0
*/
void sub_f56cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56cb0ULL || rel >= 0xf56cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56cc0 size=96 callers=0 calls=0
*/
void sub_f56cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56cc0ULL || rel >= 0xf56d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56d20 size=96 callers=0 calls=0
*/
void sub_f56d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56d20ULL || rel >= 0xf56d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56d80 size=16 callers=0 calls=0
*/
void sub_f56d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56d80ULL || rel >= 0xf56d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56d90 size=16 callers=0 calls=0
*/
void sub_f56d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56d90ULL || rel >= 0xf56da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56da0 size=96 callers=0 calls=0
*/
void sub_f56da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56da0ULL || rel >= 0xf56e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56e00 size=96 callers=0 calls=0
*/
void sub_f56e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56e00ULL || rel >= 0xf56e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56e60 size=304 callers=0 calls=0
*/
void sub_f56e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56e60ULL || rel >= 0xf56f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f56f90 size=128 callers=0 calls=0
*/
void sub_f56f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf56f90ULL || rel >= 0xf57010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f57010 size=2160 callers=0 calls=24
   calls: OptionBar_9, sub_138cb20, sub_5cfaf0, sub_79b990, sub_8dfba0, sub_8dfd80, sub_8e0080, sub_8e0960, sub_c39c40, sub_d0c0, sub_e806b0, sub_f3d7e0
   ... +12 more
   ref: ViewDetail00
   ref: ViewBg
   ref: ViewTitle
   ref: ViewDetail01
*/
void ViewTitle_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf57010ULL || rel >= 0xf57880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f57880 size=400 callers=1 calls=5
   calls: sub_795bc0, sub_c39c40, sub_eb7570, sub_eb75e0, sub_f43ab0
   ref: OptionBar
*/
void OptionBar_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf57880ULL || rel >= 0xf57a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f57a10 size=384 callers=2 calls=5
   calls: sub_8dfba0, sub_8e0670, sub_8e06c0, sub_8e0960, sub_8e0b20
*/
void sub_f57a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf57a10ULL || rel >= 0xf57b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f57b90 size=448 callers=2 calls=7
   calls: sub_7c2280, sub_8dfba0, sub_8e0730, sub_8e0960, sub_8e0ae0, sub_8e0b00, sub_8e1490
*/
void sub_f57b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf57b90ULL || rel >= 0xf57d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f57d50 size=48 callers=0 calls=0
*/
void sub_f57d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf57d50ULL || rel >= 0xf57d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f57d80 size=1408 callers=0 calls=28
   calls: sub_138c980, sub_138cb20, sub_e806b0, sub_e807f0, sub_eb8930, sub_eb8e80, sub_eb8ea0, sub_f3d7e0, sub_f3d800, sub_f3d900, sub_f3da70, sub_f3dab0
   ... +16 more
*/
void sub_f57d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf57d80ULL || rel >= 0xf58300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58300 size=1424 callers=0 calls=28
   calls: sub_138c980, sub_138cb20, sub_e806b0, sub_e807f0, sub_eb8930, sub_eb8e80, sub_eb8ea0, sub_f3d7e0, sub_f3d800, sub_f3d900, sub_f3da70, sub_f3dab0
   ... +16 more
*/
void sub_f58300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58300ULL || rel >= 0xf58890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58890 size=480 callers=0 calls=11
   calls: sub_e806b0, sub_e807f0, sub_eb8930, sub_eb8e80, sub_f3d800, sub_f3d900, sub_f3f520, sub_f434e0, sub_f43640, sub_f4a350, sub_f58be0
*/
void sub_f58890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58890ULL || rel >= 0xf58a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58a70 size=48 callers=0 calls=1
   calls: sub_f4b490
*/
void sub_f58a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58a70ULL || rel >= 0xf58aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58aa0 size=320 callers=2 calls=6
   calls: sub_e806b0, sub_e807f0, sub_eb7e40, sub_f43640, sub_f438c0, sub_f43a80
*/
void sub_f58aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58aa0ULL || rel >= 0xf58be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58be0 size=192 callers=3 calls=4
   calls: sub_e806b0, sub_e807f0, sub_eb8930, sub_f43640
*/
void sub_f58be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58be0ULL || rel >= 0xf58ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58ca0 size=96 callers=0 calls=0
*/
void sub_f58ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58ca0ULL || rel >= 0xf58d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58d00 size=96 callers=0 calls=0
*/
void sub_f58d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58d00ULL || rel >= 0xf58d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58d60 size=16 callers=0 calls=0
*/
void sub_f58d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58d60ULL || rel >= 0xf58d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58d70 size=96 callers=0 calls=0
*/
void sub_f58d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58d70ULL || rel >= 0xf58dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58dd0 size=96 callers=0 calls=0
*/
void sub_f58dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58dd0ULL || rel >= 0xf58e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58e30 size=16 callers=0 calls=0
*/
void sub_f58e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58e30ULL || rel >= 0xf58e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58e40 size=16 callers=0 calls=0
*/
void sub_f58e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58e40ULL || rel >= 0xf58e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58e50 size=96 callers=0 calls=0
*/
void sub_f58e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58e50ULL || rel >= 0xf58eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58eb0 size=96 callers=0 calls=0
*/
void sub_f58eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58eb0ULL || rel >= 0xf58f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f58f10 size=304 callers=0 calls=0
*/
void sub_f58f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf58f10ULL || rel >= 0xf59040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59040 size=128 callers=0 calls=0
*/
void sub_f59040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59040ULL || rel >= 0xf590c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f590c0 size=304 callers=1 calls=3
   calls: sub_ea03d0, sub_f599d0, sub_f59c20
*/
void sub_f590c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf590c0ULL || rel >= 0xf591f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f591f0 size=32 callers=0 calls=1
   calls: sub_f59210
*/
void sub_f591f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf591f0ULL || rel >= 0xf59210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59210 size=432 callers=1 calls=6
   calls: sub_65f1c0, sub_6608d0, sub_660900, sub_66a050, sub_66a400, sub_f598f0
*/
void sub_f59210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59210ULL || rel >= 0xf593c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f593c0 size=32 callers=0 calls=1
   calls: sub_f593e0
*/
void sub_f593c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf593c0ULL || rel >= 0xf593e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f593e0 size=256 callers=1 calls=1
   calls: sub_f598f0
*/
void sub_f593e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf593e0ULL || rel >= 0xf594e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f594e0 size=32 callers=0 calls=1
   calls: sub_660940
*/
void sub_f594e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf594e0ULL || rel >= 0xf59500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59500 size=112 callers=0 calls=1
   calls: sub_f599d0
*/
void sub_f59500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59500ULL || rel >= 0xf59570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59570 size=112 callers=0 calls=1
   calls: sub_f599d0
*/
void sub_f59570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59570ULL || rel >= 0xf595e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f595e0 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f595e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf595e0ULL || rel >= 0xf59650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59650 size=112 callers=0 calls=1
   calls: sub_f599d0
*/
void sub_f59650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59650ULL || rel >= 0xf596c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f596c0 size=112 callers=0 calls=1
   calls: sub_f599d0
*/
void sub_f596c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf596c0ULL || rel >= 0xf59730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59730 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f59730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59730ULL || rel >= 0xf597a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f597a0 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f597a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf597a0ULL || rel >= 0xf59810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59810 size=112 callers=0 calls=1
   calls: sub_f599d0
*/
void sub_f59810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59810ULL || rel >= 0xf59880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59880 size=112 callers=0 calls=1
   calls: sub_f599d0
*/
void sub_f59880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59880ULL || rel >= 0xf598f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f598f0 size=224 callers=6 calls=2
   calls: sub_5cf8d0, sub_65daf0
*/
void sub_f598f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf598f0ULL || rel >= 0xf599d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f599d0 size=512 callers=7 calls=3
   calls: sub_5cf8f0, sub_65f110, sub_f598f0
*/
void sub_f599d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf599d0ULL || rel >= 0xf59bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59bd0 size=16 callers=0 calls=0
*/
void sub_f59bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59bd0ULL || rel >= 0xf59be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59be0 size=16 callers=0 calls=0
*/
void sub_f59be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59be0ULL || rel >= 0xf59bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59bf0 size=16 callers=0 calls=0
*/
void sub_f59bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59bf0ULL || rel >= 0xf59c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59c00 size=32 callers=0 calls=0
*/
void sub_f59c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59c00ULL || rel >= 0xf59c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59c20 size=496 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_f59c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59c20ULL || rel >= 0xf59e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59e10 size=256 callers=4 calls=1
   calls: sub_1350f70
*/
void sub_f59e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59e10ULL || rel >= 0xf59f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f59f10 size=816 callers=1 calls=10
   calls: sub_10198b0, sub_12fac60, sub_13000b0, sub_1350010, sub_1351510, sub_1379700, sub_1379a10, sub_762930, sub_763380, sub_f5a690
   ref: MEET_BY_EVENT
*/
void MEET_BY_EVENT_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf59f10ULL || rel >= 0xf5a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5a240 size=256 callers=1 calls=1
   calls: sub_1367100
*/
void sub_f5a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5a240ULL || rel >= 0xf5a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5a340 size=176 callers=1 calls=2
   calls: sub_137baa0, sub_137bab0
*/
void sub_f5a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5a340ULL || rel >= 0xf5a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5a3f0 size=512 callers=1 calls=2
   calls: sub_136b580, sub_137c9c0
*/
void sub_f5a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5a3f0ULL || rel >= 0xf5a5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5a5f0 size=160 callers=1 calls=1
   calls: sub_137b8e0
*/
void sub_f5a5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5a5f0ULL || rel >= 0xf5a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5a690 size=464 callers=96 calls=0
*/
void sub_f5a690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5a690ULL || rel >= 0xf5a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5a860 size=112 callers=1 calls=1
   calls: sub_f5a8d0
*/
void sub_f5a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5a860ULL || rel >= 0xf5a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5a8d0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_e9db40, sub_f5c590
*/
void sub_f5a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5a8d0ULL || rel >= 0xf5a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5a9f0 size=16 callers=0 calls=0
*/
void sub_f5a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5a9f0ULL || rel >= 0xf5aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5aa00 size=320 callers=0 calls=5
   calls: sub_105c390, sub_5cfad0, sub_794330, sub_f5c6f0, sub_f5c7d0
   ref: Play_bgm_or_st_sys08
*/
void Play_bgm_or_st_sys08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5aa00ULL || rel >= 0xf5ab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5ab40 size=160 callers=0 calls=4
   calls: sub_5cfad0, sub_794330, sub_ea37b0, sub_ece0a0
   ref: Stop_bgm_or_st_sys08
*/
void Stop_bgm_or_st_sys08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5ab40ULL || rel >= 0xf5abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5abe0 size=4832 callers=0 calls=25
   calls: RequestLocalConnection, sub_10198b0, sub_105c390, sub_11009c0, sub_12f9ef0, sub_134f3a0, sub_13a4c20, sub_13a4f20, sub_14e0350, sub_14e0450, sub_14e0650, sub_1539b10
   ... +13 more
   ref: sd9150_mysterygift
*/
void sd9150_mysterygift(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5abe0ULL || rel >= 0xf5bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5bec0 size=272 callers=1 calls=3
   calls: sub_672c10, sub_c386f0, sub_f5c8b0
*/
void sub_f5bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5bec0ULL || rel >= 0xf5bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5bfd0 size=672 callers=1 calls=9
   calls: sub_10198b0, sub_12fa500, sub_13000b0, sub_135a1a0, sub_762930, sub_763380, sub_767950, sub_76f440, sub_76f6c0
*/
void sub_f5bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5bfd0ULL || rel >= 0xf5c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5c270 size=384 callers=0 calls=0
*/
void sub_f5c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5c270ULL || rel >= 0xf5c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5c3f0 size=16 callers=0 calls=0
*/
void sub_f5c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5c3f0ULL || rel >= 0xf5c400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5c400 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_f5c400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5c400ULL || rel >= 0xf5c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5c470 size=16 callers=0 calls=0
*/
void sub_f5c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5c470ULL || rel >= 0xf5c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5c480 size=16 callers=0 calls=0
*/
void sub_f5c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5c480ULL || rel >= 0xf5c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5c490 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_f5c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5c490ULL || rel >= 0xf5c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5c500 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_f5c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5c500ULL || rel >= 0xf5c570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5c570 size=16 callers=0 calls=0
*/
void sub_f5c570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5c570ULL || rel >= 0xf5c580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5c580 size=16 callers=0 calls=0
*/
void sub_f5c580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5c580ULL || rel >= 0xf5c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5c590 size=352 callers=1 calls=2
   calls: sub_a74910, sub_e9d130
*/
void sub_f5c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5c590ULL || rel >= 0xf5c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5c6f0 size=224 callers=1 calls=1
   calls: sub_f67c60
*/
void sub_f5c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5c6f0ULL || rel >= 0xf5c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5c7d0 size=224 callers=1 calls=1
   calls: sub_f5cbf0
*/
void sub_f5c7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5c7d0ULL || rel >= 0xf5c8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5c8b0 size=288 callers=1 calls=1
   calls: sub_f5d6d0
*/
void sub_f5c8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5c8b0ULL || rel >= 0xf5c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5c9d0 size=48 callers=0 calls=0
*/
void sub_f5c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5c9d0ULL || rel >= 0xf5ca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5ca00 size=64 callers=0 calls=0
*/
void sub_f5ca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5ca00ULL || rel >= 0xf5ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5ca40 size=48 callers=0 calls=0
*/
void sub_f5ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5ca40ULL || rel >= 0xf5ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5ca70 size=48 callers=0 calls=0
*/
void sub_f5ca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5ca70ULL || rel >= 0xf5caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5caa0 size=48 callers=0 calls=0
*/
void sub_f5caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5caa0ULL || rel >= 0xf5cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5cad0 size=64 callers=0 calls=0
*/
void sub_f5cad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5cad0ULL || rel >= 0xf5cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5cb10 size=48 callers=0 calls=0
*/
void sub_f5cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5cb10ULL || rel >= 0xf5cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5cb40 size=48 callers=0 calls=0
*/
void sub_f5cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5cb40ULL || rel >= 0xf5cb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5cb70 size=128 callers=0 calls=0
*/
void sub_f5cb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5cb70ULL || rel >= 0xf5cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5cbf0 size=288 callers=2 calls=3
   calls: sub_5e2350, sub_67b990, sub_e76a20
*/
void sub_f5cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5cbf0ULL || rel >= 0xf5cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5cd10 size=16 callers=2 calls=0
*/
void sub_f5cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5cd10ULL || rel >= 0xf5cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5cd20 size=48 callers=2 calls=0
*/
void sub_f5cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5cd20ULL || rel >= 0xf5cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5cd50 size=368 callers=2 calls=8
   calls: strinput, sub_67bdb0, sub_67bdd0, sub_67c7e0, sub_e76980, sub_e769b0, sub_e76a20, sub_e780a0
*/
void sub_f5cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5cd50ULL || rel >= 0xf5cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5cec0 size=64 callers=0 calls=1
   calls: sub_67bdb0
*/
void sub_f5cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5cec0ULL || rel >= 0xf5cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5cf00 size=384 callers=0 calls=0
*/
void sub_f5cf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5cf00ULL || rel >= 0xf5d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d080 size=64 callers=0 calls=1
   calls: sub_67bdb0
*/
void sub_f5d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d080ULL || rel >= 0xf5d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d0c0 size=160 callers=0 calls=0
*/
void sub_f5d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d0c0ULL || rel >= 0xf5d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d160 size=160 callers=0 calls=0
*/
void sub_f5d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d160ULL || rel >= 0xf5d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d200 size=240 callers=0 calls=0
*/
void sub_f5d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d200ULL || rel >= 0xf5d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d2f0 size=160 callers=0 calls=0
*/
void sub_f5d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d2f0ULL || rel >= 0xf5d390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d390 size=160 callers=0 calls=0
*/
void sub_f5d390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d390ULL || rel >= 0xf5d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d430 size=16 callers=0 calls=0
*/
void sub_f5d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d430ULL || rel >= 0xf5d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d440 size=16 callers=0 calls=0
*/
void sub_f5d440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d440ULL || rel >= 0xf5d450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d450 size=160 callers=0 calls=0
*/
void sub_f5d450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d450ULL || rel >= 0xf5d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d4f0 size=160 callers=0 calls=0
*/
void sub_f5d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d4f0ULL || rel >= 0xf5d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d590 size=160 callers=0 calls=0
*/
void sub_f5d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d590ULL || rel >= 0xf5d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d630 size=160 callers=0 calls=0
*/
void sub_f5d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d630ULL || rel >= 0xf5d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d6d0 size=160 callers=1 calls=2
   calls: sub_e7b660, sub_f5d770
*/
void sub_f5d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d6d0ULL || rel >= 0xf5d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d770 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_e7b5e0, sub_f5fcc0
*/
void sub_f5d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d770ULL || rel >= 0xf5d850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5d850 size=2192 callers=0 calls=21
   calls: sub_5cfad0, sub_78f150, sub_78f240, sub_794e80, sub_79b250, sub_e7c0f0, sub_e7e890, sub_f5a690, sub_f5e0e0, sub_f60270, sub_f605d0, sub_f60940
   ... +9 more
   ref: receive_list
   ref: complete
   ref: message
   ref: history
   ref: attention
   ref: menu_method
   ref: progress
   ref: optionbar
*/
void menu_gateway(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5d850ULL || rel >= 0xf5e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5e0e0 size=432 callers=1 calls=3
   calls: sub_e7c160, sub_e7c210, sub_f60140
*/
void sub_f5e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5e0e0ULL || rel >= 0xf5e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5e290 size=256 callers=0 calls=6
   calls: menu_gateway_3, sub_104e050, sub_5cfad0, sub_e7ea90, sub_e7f7e0, sub_ffa7d0
*/
void sub_f5e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5e290ULL || rel >= 0xf5e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5e390 size=16 callers=0 calls=0
*/
void sub_f5e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5e390ULL || rel >= 0xf5e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5e3a0 size=1872 callers=0 calls=19
   calls: sub_e7c160, sub_f5a690, sub_f62a30, sub_f62b50, sub_f62c70, sub_f62d90, sub_f62eb0, sub_f62fd0, sub_f630f0, sub_f63210, sub_f63330, sub_f63450
   ... +7 more
*/
void sub_f5e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5e3a0ULL || rel >= 0xf5eaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5eaf0 size=208 callers=0 calls=1
   calls: sub_f5a690
*/
void sub_f5eaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5eaf0ULL || rel >= 0xf5ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5ebc0 size=816 callers=0 calls=3
   calls: sub_eb7570, sub_eb75e0, sub_eb7ce0
*/
void sub_f5ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5ebc0ULL || rel >= 0xf5eef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5eef0 size=16 callers=0 calls=0
*/
void sub_f5eef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5eef0ULL || rel >= 0xf5ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5ef00 size=192 callers=0 calls=2
   calls: sub_eb75e0, sub_eb7ce0
*/
void sub_f5ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5ef00ULL || rel >= 0xf5efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5efc0 size=192 callers=0 calls=2
   calls: sub_eb75e0, sub_eb7ce0
*/
void sub_f5efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5efc0ULL || rel >= 0xf5f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f080 size=176 callers=0 calls=1
   calls: sub_eb7ce0
*/
void sub_f5f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f080ULL || rel >= 0xf5f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f130 size=176 callers=0 calls=1
   calls: sub_eb7ce0
*/
void sub_f5f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f130ULL || rel >= 0xf5f1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f1e0 size=176 callers=0 calls=1
   calls: sub_eb7ce0
*/
void sub_f5f1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f1e0ULL || rel >= 0xf5f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f290 size=176 callers=0 calls=1
   calls: sub_eb7ce0
*/
void sub_f5f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f290ULL || rel >= 0xf5f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f340 size=528 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_f5f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f340ULL || rel >= 0xf5f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f550 size=16 callers=0 calls=0
*/
void sub_f5f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f550ULL || rel >= 0xf5f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f560 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f5f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f560ULL || rel >= 0xf5f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f610 size=16 callers=0 calls=0
*/
void sub_f5f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f610ULL || rel >= 0xf5f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f620 size=16 callers=0 calls=0
*/
void sub_f5f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f620ULL || rel >= 0xf5f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f630 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f5f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f630ULL || rel >= 0xf5f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f6e0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_f5f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f6e0ULL || rel >= 0xf5f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f790 size=16 callers=0 calls=0
*/
void sub_f5f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f790ULL || rel >= 0xf5f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f7a0 size=16 callers=0 calls=0
*/
void sub_f5f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f7a0ULL || rel >= 0xf5f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f7b0 size=16 callers=0 calls=0
*/
void sub_f5f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f7b0ULL || rel >= 0xf5f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f7c0 size=16 callers=0 calls=0
*/
void sub_f5f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f7c0ULL || rel >= 0xf5f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f7d0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_f5f7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f7d0ULL || rel >= 0xf5f850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f850 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_f5f850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f850ULL || rel >= 0xf5f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5f9c0 size=96 callers=0 calls=1
   calls: sub_f5fbe0
*/
void sub_f5f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f9c0ULL || rel >= 0xf5fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5fa20 size=16 callers=0 calls=0
*/
void sub_f5fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5fa20ULL || rel >= 0xf5fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5fa30 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_f5fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5fa30ULL || rel >= 0xf5fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5fad0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_f5fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5fad0ULL || rel >= 0xf5fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5fb90 size=16 callers=0 calls=0
*/
void sub_f5fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5fb90ULL || rel >= 0xf5fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5fba0 size=16 callers=0 calls=0
*/
void sub_f5fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5fba0ULL || rel >= 0xf5fbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5fbb0 size=16 callers=0 calls=0
*/
void sub_f5fbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5fbb0ULL || rel >= 0xf5fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5fbc0 size=32 callers=0 calls=0
*/
void sub_f5fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5fbc0ULL || rel >= 0xf5fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5fbe0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_f5fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5fbe0ULL || rel >= 0xf5fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5fcc0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_f5fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5fcc0ULL || rel >= 0xf5fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5fdb0 size=144 callers=0 calls=0
*/
void sub_f5fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5fdb0ULL || rel >= 0xf5fe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5fe40 size=144 callers=0 calls=0
*/
void sub_f5fe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5fe40ULL || rel >= 0xf5fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5fed0 size=16 callers=0 calls=0
*/
void sub_f5fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5fed0ULL || rel >= 0xf5fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5fee0 size=144 callers=0 calls=0
*/
void sub_f5fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5fee0ULL || rel >= 0xf5ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f5ff70 size=144 callers=0 calls=0
*/
void sub_f5ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5ff70ULL || rel >= 0xf60000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f60000 size=16 callers=0 calls=0
*/
void sub_f60000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf60000ULL || rel >= 0xf60010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f60010 size=16 callers=0 calls=0
*/
void sub_f60010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf60010ULL || rel >= 0xf60020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f60020 size=144 callers=0 calls=0
*/
void sub_f60020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf60020ULL || rel >= 0xf600b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f600b0 size=144 callers=0 calls=0
*/
void sub_f600b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf600b0ULL || rel >= 0xf60140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f60140 size=304 callers=19 calls=0
*/
void sub_f60140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf60140ULL || rel >= 0xf60270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f60270 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f60390
*/
void sub_f60270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf60270ULL || rel >= 0xf60390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f60390 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f60390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf60390ULL || rel >= 0xf605d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f605d0 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f606f0
*/
void sub_f605d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf605d0ULL || rel >= 0xf606f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f606f0 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f606f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf606f0ULL || rel >= 0xf60940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f60940 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f60a60
*/
void sub_f60940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf60940ULL || rel >= 0xf60a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f60a60 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f60a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf60a60ULL || rel >= 0xf60cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f60cd0 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f60df0
*/
void sub_f60cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf60cd0ULL || rel >= 0xf60df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f60df0 size=656 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f60df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf60df0ULL || rel >= 0xf61080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f61080 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f611a0
*/
void sub_f61080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf61080ULL || rel >= 0xf611a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f611a0 size=656 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f611a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf611a0ULL || rel >= 0xf61430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f61430 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f61550
*/
void sub_f61430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf61430ULL || rel >= 0xf61550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f61550 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f61550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf61550ULL || rel >= 0xf61790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f61790 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f618b0
*/
void sub_f61790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf61790ULL || rel >= 0xf618b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f618b0 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f618b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf618b0ULL || rel >= 0xf61b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f61b20 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f61c40
*/
void sub_f61b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf61b20ULL || rel >= 0xf61c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f61c40 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f61c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf61c40ULL || rel >= 0xf61e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f61e80 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f61fa0
*/
void sub_f61e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf61e80ULL || rel >= 0xf61fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f61fa0 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f61fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf61fa0ULL || rel >= 0xf621e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f621e0 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f62300
*/
void sub_f621e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf621e0ULL || rel >= 0xf62300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f62300 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_f62300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf62300ULL || rel >= 0xf62550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f62550 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_f62670
*/
void sub_f62550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf62550ULL || rel >= 0xf62670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f62670 size=384 callers=1 calls=3
   calls: sub_790490, sub_e7fe20, sub_f627f0
*/
void sub_f62670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf62670ULL || rel >= 0xf627f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f627f0 size=352 callers=1 calls=2
   calls: anonymous_2, sub_ea46c0
*/
void sub_f627f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf627f0ULL || rel >= 0xf62950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f62950 size=224 callers=1 calls=1
   calls: sub_f64fa0
*/
void sub_f62950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf62950ULL || rel >= 0xf62a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f62a30 size=288 callers=1 calls=1
   calls: StateTopMenu
*/
void sub_f62a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf62a30ULL || rel >= 0xf62b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f62b50 size=288 callers=1 calls=1
   calls: StateReceiveMenu
*/
void sub_f62b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf62b50ULL || rel >= 0xf62c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f62c70 size=288 callers=1 calls=1
   calls: StateReceiveLocal
*/
void sub_f62c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf62c70ULL || rel >= 0xf62d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f62d90 size=288 callers=1 calls=1
   calls: StateReceiveInternet
*/
void sub_f62d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf62d90ULL || rel >= 0xf62eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f62eb0 size=288 callers=1 calls=1
   calls: StateReceiveSerial
*/
void sub_f62eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf62eb0ULL || rel >= 0xf62fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f62fd0 size=288 callers=1 calls=1
   calls: StateReceiveRankMatch
*/
void sub_f62fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf62fd0ULL || rel >= 0xf630f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f630f0 size=288 callers=1 calls=1
   calls: StateReceiveFromBall
*/
void sub_f630f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf630f0ULL || rel >= 0xf63210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f63210 size=288 callers=1 calls=1
   calls: StateSelectReceiveDataLocal
*/
void sub_f63210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf63210ULL || rel >= 0xf63330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f63330 size=288 callers=1 calls=1
   calls: StateSelectReceiveDataInternet
*/
void sub_f63330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf63330ULL || rel >= 0xf63450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f63450 size=288 callers=1 calls=1
   calls: StateSelectReceiveDataSerial
*/
void sub_f63450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf63450ULL || rel >= 0xf63570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f63570 size=288 callers=1 calls=1
   calls: StateSelectReceiveDataRankMatch
*/
void sub_f63570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf63570ULL || rel >= 0xf63690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f63690 size=288 callers=1 calls=1
   calls: StateSelectReceiveDataFromBall
*/
void sub_f63690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf63690ULL || rel >= 0xf637b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f637b0 size=288 callers=1 calls=1
   calls: StateConfirmGift
*/
void sub_f637b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf637b0ULL || rel >= 0xf638d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f638d0 size=288 callers=1 calls=1
   calls: StateReceiveNews
*/
void sub_f638d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf638d0ULL || rel >= 0xf639f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f639f0 size=288 callers=1 calls=1
   calls: StateReceiveComplete
*/
void sub_f639f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf639f0ULL || rel >= 0xf63b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f63b10 size=288 callers=1 calls=1
   calls: StateConnectPalma
*/
void sub_f63b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf63b10ULL || rel >= 0xf63c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f63c30 size=640 callers=1 calls=3
   calls: anonymous, sub_65d700, sub_f6c9c0
*/
void sub_f63c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf63c30ULL || rel >= 0xf63eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f63eb0 size=32 callers=0 calls=0
*/
void sub_f63eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf63eb0ULL || rel >= 0xf63ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f63ed0 size=32 callers=0 calls=0
*/
void sub_f63ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf63ed0ULL || rel >= 0xf63ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f63ef0 size=128 callers=0 calls=0
*/
void sub_f63ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf63ef0ULL || rel >= 0xf63f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f63f70 size=256 callers=1 calls=2
   calls: anonymous, sub_d0c0
   ref: StateTopMenu
*/
void StateTopMenu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf63f70ULL || rel >= 0xf64070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f64070 size=1040 callers=0 calls=11
   calls: sub_67d450, sub_795bc0, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0, sub_eb7730, sub_f60140, sub_f64be0, sub_f64dd0, sub_f657c0
   ref: optionbar
   ref: menu_gateway
*/
void menu_gateway_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf64070ULL || rel >= 0xf64480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f64480 size=336 callers=0 calls=6
   calls: sub_eb7790, sub_eb7830, sub_f645d0, sub_f64dd0, sub_f66330, sub_f6b6e0
*/
void sub_f64480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf64480ULL || rel >= 0xf645d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f645d0 size=304 callers=1 calls=3
   calls: sub_f5a690, sub_f64710, sub_f67db0
*/
void sub_f645d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf645d0ULL || rel >= 0xf64700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f64700 size=16 callers=0 calls=0
*/
void sub_f64700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf64700ULL || rel >= 0xf64710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f64710 size=208 callers=1 calls=4
   calls: sub_eb77f0, sub_f5a690, sub_f64dd0, sub_f663d0
*/
void sub_f64710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf64710ULL || rel >= 0xf647e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f647e0 size=112 callers=0 calls=0
*/
void sub_f647e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf647e0ULL || rel >= 0xf64850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f64850 size=112 callers=0 calls=0
*/
void sub_f64850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf64850ULL || rel >= 0xf648c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f648c0 size=16 callers=0 calls=0
*/
void sub_f648c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf648c0ULL || rel >= 0xf648d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f648d0 size=112 callers=0 calls=0
*/
void sub_f648d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf648d0ULL || rel >= 0xf64940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f64940 size=112 callers=0 calls=0
*/
void sub_f64940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf64940ULL || rel >= 0xf649b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f649b0 size=16 callers=0 calls=0
*/
void sub_f649b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf649b0ULL || rel >= 0xf649c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f649c0 size=16 callers=0 calls=0
*/
void sub_f649c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf649c0ULL || rel >= 0xf649d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f649d0 size=112 callers=0 calls=0
*/
void sub_f649d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf649d0ULL || rel >= 0xf64a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f64a40 size=112 callers=0 calls=0
*/
void sub_f64a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf64a40ULL || rel >= 0xf64ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f64ab0 size=304 callers=0 calls=0
*/
void sub_f64ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf64ab0ULL || rel >= 0xf64be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f64be0 size=496 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f64be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf64be0ULL || rel >= 0xf64dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f64dd0 size=464 callers=45 calls=0
*/
void sub_f64dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf64dd0ULL || rel >= 0xf64fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f64fa0 size=192 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_f64fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf64fa0ULL || rel >= 0xf65060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

