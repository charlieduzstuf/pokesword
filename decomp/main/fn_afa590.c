/* main functions 00afa590..00b16560 (85 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00afa590 size=16 callers=0 calls=0
*/
void sub_afa590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa590ULL || rel >= 0xafa5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa5a0 size=304 callers=63 calls=0
*/
void sub_afa5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa5a0ULL || rel >= 0xafa6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa6d0 size=288 callers=56 calls=0
*/
void sub_afa6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa6d0ULL || rel >= 0xafa7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa7f0 size=48 callers=0 calls=0
*/
void sub_afa7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa7f0ULL || rel >= 0xafa820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa820 size=64 callers=0 calls=0
*/
void sub_afa820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa820ULL || rel >= 0xafa860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa860 size=48 callers=0 calls=0
*/
void sub_afa860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa860ULL || rel >= 0xafa890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa890 size=48 callers=0 calls=0
*/
void sub_afa890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa890ULL || rel >= 0xafa8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa8c0 size=48 callers=0 calls=0
*/
void sub_afa8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa8c0ULL || rel >= 0xafa8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa8f0 size=64 callers=0 calls=0
*/
void sub_afa8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa8f0ULL || rel >= 0xafa930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa930 size=48 callers=0 calls=0
*/
void sub_afa930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa930ULL || rel >= 0xafa960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa960 size=48 callers=0 calls=0
*/
void sub_afa960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa960ULL || rel >= 0xafa990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa990 size=48 callers=0 calls=0
*/
void sub_afa990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa990ULL || rel >= 0xafa9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afa9c0 size=64 callers=0 calls=0
*/
void sub_afa9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafa9c0ULL || rel >= 0xafaa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afaa00 size=48 callers=0 calls=0
*/
void sub_afaa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafaa00ULL || rel >= 0xafaa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afaa30 size=48 callers=0 calls=0
*/
void sub_afaa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafaa30ULL || rel >= 0xafaa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afaa60 size=48 callers=0 calls=0
*/
void sub_afaa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafaa60ULL || rel >= 0xafaa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afaa90 size=64 callers=0 calls=0
*/
void sub_afaa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafaa90ULL || rel >= 0xafaad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afaad0 size=48 callers=0 calls=0
*/
void sub_afaad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafaad0ULL || rel >= 0xafab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afab00 size=48 callers=0 calls=0
*/
void sub_afab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafab00ULL || rel >= 0xafab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afab30 size=400 callers=5 calls=1
   calls: sub_15b9340
*/
void sub_afab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafab30ULL || rel >= 0xafacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afacc0 size=400 callers=0 calls=3
   calls: sub_abb7f0, sub_ac0e70, sub_af7320
*/
void sub_afacc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafacc0ULL || rel >= 0xafae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afae50 size=64 callers=0 calls=0
*/
void sub_afae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafae50ULL || rel >= 0xafae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afae90 size=48 callers=0 calls=0
*/
void sub_afae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafae90ULL || rel >= 0xafaec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afaec0 size=48 callers=0 calls=0
*/
void sub_afaec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafaec0ULL || rel >= 0xafaef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afaef0 size=48 callers=0 calls=0
*/
void sub_afaef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafaef0ULL || rel >= 0xafaf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afaf20 size=64 callers=0 calls=0
*/
void sub_afaf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafaf20ULL || rel >= 0xafaf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afaf60 size=48 callers=0 calls=0
*/
void sub_afaf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafaf60ULL || rel >= 0xafaf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afaf90 size=48 callers=0 calls=0
*/
void sub_afaf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafaf90ULL || rel >= 0xafafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afafc0 size=32 callers=0 calls=0
*/
void sub_afafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafafc0ULL || rel >= 0xafafe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afafe0 size=64 callers=0 calls=0
*/
void sub_afafe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafafe0ULL || rel >= 0xafb020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb020 size=32 callers=0 calls=0
*/
void sub_afb020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb020ULL || rel >= 0xafb040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb040 size=32 callers=0 calls=0
*/
void sub_afb040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb040ULL || rel >= 0xafb060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb060 size=48 callers=0 calls=0
*/
void sub_afb060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb060ULL || rel >= 0xafb090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb090 size=64 callers=0 calls=0
*/
void sub_afb090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb090ULL || rel >= 0xafb0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb0d0 size=48 callers=0 calls=0
*/
void sub_afb0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb0d0ULL || rel >= 0xafb100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb100 size=48 callers=0 calls=0
*/
void sub_afb100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb100ULL || rel >= 0xafb130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb130 size=48 callers=0 calls=0
*/
void sub_afb130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb130ULL || rel >= 0xafb160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb160 size=64 callers=0 calls=0
*/
void sub_afb160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb160ULL || rel >= 0xafb1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb1a0 size=48 callers=0 calls=0
*/
void sub_afb1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb1a0ULL || rel >= 0xafb1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb1d0 size=48 callers=0 calls=0
*/
void sub_afb1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb1d0ULL || rel >= 0xafb200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb200 size=48 callers=0 calls=0
*/
void sub_afb200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb200ULL || rel >= 0xafb230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb230 size=64 callers=0 calls=0
*/
void sub_afb230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb230ULL || rel >= 0xafb270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb270 size=48 callers=0 calls=0
*/
void sub_afb270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb270ULL || rel >= 0xafb2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb2a0 size=48 callers=0 calls=0
*/
void sub_afb2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb2a0ULL || rel >= 0xafb2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb2d0 size=80 callers=0 calls=0
*/
void sub_afb2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb2d0ULL || rel >= 0xafb320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb320 size=64 callers=0 calls=0
*/
void sub_afb320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb320ULL || rel >= 0xafb360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb360 size=48 callers=0 calls=0
*/
void sub_afb360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb360ULL || rel >= 0xafb390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb390 size=48 callers=0 calls=0
*/
void sub_afb390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb390ULL || rel >= 0xafb3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb3c0 size=48 callers=0 calls=0
*/
void sub_afb3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb3c0ULL || rel >= 0xafb3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb3f0 size=64 callers=0 calls=0
*/
void sub_afb3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb3f0ULL || rel >= 0xafb430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb430 size=48 callers=0 calls=0
*/
void sub_afb430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb430ULL || rel >= 0xafb460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb460 size=48 callers=0 calls=0
*/
void sub_afb460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb460ULL || rel >= 0xafb490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb490 size=160 callers=0 calls=0
*/
void sub_afb490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb490ULL || rel >= 0xafb530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb530 size=128 callers=1 calls=2
   calls: sub_ac4880, sub_e7c210
*/
void sub_afb530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb530ULL || rel >= 0xafb5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb5b0 size=64 callers=2 calls=1
   calls: sub_ac4880
*/
void sub_afb5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb5b0ULL || rel >= 0xafb5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb5f0 size=16 callers=3 calls=0
*/
void sub_afb5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb5f0ULL || rel >= 0xafb600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb600 size=96 callers=1 calls=0
*/
void sub_afb600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb600ULL || rel >= 0xafb660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb660 size=32 callers=43 calls=0
*/
void sub_afb660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb660ULL || rel >= 0xafb680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb680 size=96 callers=1 calls=0
*/
void sub_afb680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb680ULL || rel >= 0xafb6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb6e0 size=32 callers=54 calls=0
*/
void sub_afb6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb6e0ULL || rel >= 0xafb700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb700 size=96 callers=1 calls=0
*/
void sub_afb700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb700ULL || rel >= 0xafb760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb760 size=32 callers=30 calls=0
*/
void sub_afb760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb760ULL || rel >= 0xafb780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb780 size=64 callers=24 calls=0
*/
void sub_afb780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb780ULL || rel >= 0xafb7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb7c0 size=16 callers=1 calls=0
*/
void sub_afb7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb7c0ULL || rel >= 0xafb7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb7d0 size=64 callers=6 calls=1
   calls: sub_ac4880
*/
void sub_afb7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb7d0ULL || rel >= 0xafb810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb810 size=48 callers=4 calls=1
   calls: sub_ac4880
*/
void sub_afb810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb810ULL || rel >= 0xafb840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb840 size=64 callers=18 calls=1
   calls: sub_ac4880
*/
void sub_afb840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb840ULL || rel >= 0xafb880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb880 size=64 callers=51 calls=1
   calls: sub_ac4880
*/
void sub_afb880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb880ULL || rel >= 0xafb8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb8c0 size=64 callers=129 calls=1
   calls: sub_ac4880
*/
void sub_afb8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb8c0ULL || rel >= 0xafb900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb900 size=64 callers=10 calls=1
   calls: sub_ac4880
*/
void sub_afb900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb900ULL || rel >= 0xafb940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afb940 size=288 callers=18 calls=2
   calls: sub_13a10f0, sub_13a1100
*/
void sub_afb940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafb940ULL || rel >= 0xafba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afba60 size=208 callers=16 calls=4
   calls: sub_13a1100, sub_13a1150, sub_13a11f0, sub_13a1200
*/
void sub_afba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafba60ULL || rel >= 0xafbb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afbb30 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_afbb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafbb30ULL || rel >= 0xafbbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afbbe0 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_afbbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafbbe0ULL || rel >= 0xafbc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afbc90 size=16 callers=0 calls=0
*/
void sub_afbc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafbc90ULL || rel >= 0xafbca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afbca0 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_afbca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafbca0ULL || rel >= 0xafbd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afbd50 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_afbd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafbd50ULL || rel >= 0xafbe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afbe00 size=16 callers=0 calls=0
*/
void sub_afbe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafbe00ULL || rel >= 0xafbe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afbe10 size=16 callers=0 calls=0
*/
void sub_afbe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafbe10ULL || rel >= 0xafbe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afbe20 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_afbe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafbe20ULL || rel >= 0xafbed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afbed0 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_afbed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafbed0ULL || rel >= 0xafbf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afbf80 size=176 callers=0 calls=0
*/
void sub_afbf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafbf80ULL || rel >= 0xafc030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afc030 size=432 callers=1 calls=1
   calls: anonymous
*/
void sub_afc030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafc030ULL || rel >= 0xafc1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afc1e0 size=416 callers=0 calls=7
   calls: sub_aba100, sub_ac4880, sub_ac5b50, sub_afb6e0, sub_afb760, sub_afc380, sub_d0c0
   ref: StateBtlSpotRankMatchBattle
*/
void StateBtlSpotRankMatchBattle_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafc1e0ULL || rel >= 0xafc380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afc380 size=304 callers=47 calls=5
   calls: sub_abcc20, sub_ac4880, sub_ac5b50, sub_afb6e0, sub_b00b20
*/
void sub_afc380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafc380ULL || rel >= 0xafc4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afc4b0 size=16 callers=0 calls=0
*/
void sub_afc4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafc4b0ULL || rel >= 0xafc4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afc4c0 size=4544 callers=0 calls=46
   calls: NONE_NONE_2, RequestLeaveSession, sub_104c020, sub_104dd50, sub_10617c0, sub_10619f0, sub_11009c0, sub_ab95c0, sub_ab97d0, sub_ab9fd0, sub_aba260, sub_aba270
   ... +34 more
   ref: StateBtlSpotRankMatchAnimation
   ref: StateBtlSpotTop
*/
void StateBtlSpotRankMatchAnimation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafc4c0ULL || rel >= 0xafd680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afd680 size=352 callers=15 calls=0
*/
void sub_afd680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafd680ULL || rel >= 0xafd7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afd7e0 size=448 callers=1 calls=7
   calls: sub_1052c20, sub_abc680, sub_abf2d0, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0
*/
void sub_afd7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafd7e0ULL || rel >= 0xafd9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afd9a0 size=1072 callers=1 calls=10
   calls: RequestGetStats, sub_11009c0, sub_15b9390, sub_ab97d0, sub_ab97f0, sub_ac5b50, sub_afab30, sub_afb880, sub_b00b20, sub_e71830
*/
void sub_afd9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafd9a0ULL || rel >= 0xafddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afddd0 size=992 callers=1 calls=8
   calls: RequestGetCompetitionRankingRank, sub_11009c0, sub_ab97d0, sub_ab97f0, sub_ac5b50, sub_afb880, sub_b00b20, sub_e71830
*/
void sub_afddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafddd0ULL || rel >= 0xafe1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afe1b0 size=240 callers=3 calls=5
   calls: sub_abf2c0, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0
*/
void sub_afe1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafe1b0ULL || rel >= 0xafe2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afe2a0 size=224 callers=3 calls=5
   calls: sub_abf400, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0
*/
void sub_afe2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafe2a0ULL || rel >= 0xafe380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afe380 size=608 callers=1 calls=9
   calls: sub_1052c20, sub_136b520, sub_136b580, sub_136b590, sub_67b990, sub_ac4880, sub_ac5b50, sub_afb660, sub_afb6e0
*/
void sub_afe380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafe380ULL || rel >= 0xafe5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afe5e0 size=880 callers=1 calls=11
   calls: RequestStartRound, sub_10619d0, sub_11009c0, sub_6a4d30, sub_ab97d0, sub_ab97f0, sub_ac5b50, sub_afb880, sub_afc380, sub_b00b20, sub_e71830
*/
void sub_afe5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafe5e0ULL || rel >= 0xafe950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afe950 size=656 callers=1 calls=3
   calls: RequestCheckConnectivity, sub_11009c0, sub_e71830
*/
void sub_afe950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafe950ULL || rel >= 0xafebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afebe0 size=752 callers=1 calls=9
   calls: sub_13868e0, sub_1386a80, sub_1386fc0, sub_1387040, sub_ab97d0, sub_abade0, sub_ac5b50, sub_afb880, sub_b00b20
*/
void sub_afebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafebe0ULL || rel >= 0xafeed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00afeed0 size=656 callers=1 calls=8
   calls: sub_1367100, sub_13868e0, sub_1386a80, sub_ab97d0, sub_abade0, sub_ac5b50, sub_afb880, sub_b00b20
*/
void sub_afeed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xafeed0ULL || rel >= 0xaff160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aff160 size=1504 callers=1 calls=13
   calls: sub_134f3e0, sub_134f490, sub_762d50, sub_767950, sub_769040, sub_769050, sub_abade0, sub_abaeb0, sub_ac1db0, sub_ac5b50, sub_afb880, sub_aff740
   ... +1 more
*/
void sub_aff160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaff160ULL || rel >= 0xaff740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aff740 size=336 callers=3 calls=4
   calls: sub_ab9ea0, sub_ac5b50, sub_afb880, sub_b00b20
*/
void sub_aff740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaff740ULL || rel >= 0xaff890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aff890 size=960 callers=1 calls=11
   calls: RequestEndRound, sub_11009c0, sub_6a4d30, sub_ab97f0, sub_aba260, sub_ac5b50, sub_afb880, sub_afc380, sub_affd90, sub_b00b20, sub_e71830
*/
void sub_aff890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaff890ULL || rel >= 0xaffc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00affc50 size=320 callers=1 calls=4
   calls: sub_ab9f80, sub_ac5b50, sub_afb880, sub_b00b20
*/
void sub_affc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaffc50ULL || rel >= 0xaffd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00affd90 size=2896 callers=1 calls=25
   calls: sub_136b530, sub_136b550, sub_136b580, sub_136b590, sub_136b690, sub_136b710, sub_136b770, sub_1376420, sub_1386a80, sub_6a4d30, sub_762930, sub_762940
   ... +13 more
*/
void sub_affd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaffd90ULL || rel >= 0xb008e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b008e0 size=96 callers=0 calls=0
*/
void sub_b008e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb008e0ULL || rel >= 0xb00940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00940 size=96 callers=0 calls=0
*/
void sub_b00940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00940ULL || rel >= 0xb009a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b009a0 size=96 callers=0 calls=0
*/
void sub_b009a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb009a0ULL || rel >= 0xb00a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00a00 size=96 callers=0 calls=0
*/
void sub_b00a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00a00ULL || rel >= 0xb00a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00a60 size=96 callers=0 calls=0
*/
void sub_b00a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00a60ULL || rel >= 0xb00ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00ac0 size=96 callers=0 calls=0
*/
void sub_b00ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00ac0ULL || rel >= 0xb00b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00b20 size=304 callers=26 calls=0
*/
void sub_b00b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00b20ULL || rel >= 0xb00c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00c50 size=48 callers=0 calls=0
*/
void sub_b00c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00c50ULL || rel >= 0xb00c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00c80 size=64 callers=0 calls=0
*/
void sub_b00c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00c80ULL || rel >= 0xb00cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00cc0 size=48 callers=0 calls=0
*/
void sub_b00cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00cc0ULL || rel >= 0xb00cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00cf0 size=48 callers=0 calls=0
*/
void sub_b00cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00cf0ULL || rel >= 0xb00d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00d20 size=48 callers=0 calls=0
*/
void sub_b00d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00d20ULL || rel >= 0xb00d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00d50 size=64 callers=0 calls=0
*/
void sub_b00d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00d50ULL || rel >= 0xb00d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00d90 size=48 callers=0 calls=0
*/
void sub_b00d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00d90ULL || rel >= 0xb00dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00dc0 size=48 callers=0 calls=0
*/
void sub_b00dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00dc0ULL || rel >= 0xb00df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00df0 size=48 callers=0 calls=0
*/
void sub_b00df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00df0ULL || rel >= 0xb00e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00e20 size=64 callers=0 calls=0
*/
void sub_b00e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00e20ULL || rel >= 0xb00e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00e60 size=48 callers=0 calls=0
*/
void sub_b00e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00e60ULL || rel >= 0xb00e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00e90 size=48 callers=0 calls=0
*/
void sub_b00e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00e90ULL || rel >= 0xb00ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00ec0 size=48 callers=0 calls=0
*/
void sub_b00ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00ec0ULL || rel >= 0xb00ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00ef0 size=64 callers=0 calls=0
*/
void sub_b00ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00ef0ULL || rel >= 0xb00f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00f30 size=48 callers=0 calls=0
*/
void sub_b00f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00f30ULL || rel >= 0xb00f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00f60 size=48 callers=0 calls=0
*/
void sub_b00f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00f60ULL || rel >= 0xb00f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b00f90 size=560 callers=0 calls=4
   calls: sub_abb0c0, sub_ac5b50, sub_afb880, sub_b00b20
*/
void sub_b00f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb00f90ULL || rel >= 0xb011c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b011c0 size=64 callers=0 calls=0
*/
void sub_b011c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb011c0ULL || rel >= 0xb01200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01200 size=48 callers=0 calls=0
*/
void sub_b01200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01200ULL || rel >= 0xb01230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01230 size=48 callers=0 calls=0
*/
void sub_b01230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01230ULL || rel >= 0xb01260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01260 size=48 callers=0 calls=0
*/
void sub_b01260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01260ULL || rel >= 0xb01290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01290 size=64 callers=0 calls=0
*/
void sub_b01290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01290ULL || rel >= 0xb012d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b012d0 size=48 callers=0 calls=0
*/
void sub_b012d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb012d0ULL || rel >= 0xb01300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01300 size=48 callers=0 calls=0
*/
void sub_b01300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01300ULL || rel >= 0xb01330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01330 size=64 callers=0 calls=0
*/
void sub_b01330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01330ULL || rel >= 0xb01370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01370 size=64 callers=0 calls=0
*/
void sub_b01370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01370ULL || rel >= 0xb013b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b013b0 size=48 callers=0 calls=0
*/
void sub_b013b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb013b0ULL || rel >= 0xb013e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b013e0 size=48 callers=0 calls=0
*/
void sub_b013e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb013e0ULL || rel >= 0xb01410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01410 size=48 callers=0 calls=0
*/
void sub_b01410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01410ULL || rel >= 0xb01440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01440 size=64 callers=0 calls=0
*/
void sub_b01440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01440ULL || rel >= 0xb01480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01480 size=48 callers=0 calls=0
*/
void sub_b01480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01480ULL || rel >= 0xb014b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b014b0 size=48 callers=0 calls=0
*/
void sub_b014b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb014b0ULL || rel >= 0xb014e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b014e0 size=32 callers=0 calls=0
*/
void sub_b014e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb014e0ULL || rel >= 0xb01500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01500 size=64 callers=0 calls=0
*/
void sub_b01500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01500ULL || rel >= 0xb01540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01540 size=32 callers=0 calls=0
*/
void sub_b01540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01540ULL || rel >= 0xb01560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01560 size=32 callers=0 calls=0
*/
void sub_b01560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01560ULL || rel >= 0xb01580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01580 size=48 callers=0 calls=0
*/
void sub_b01580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01580ULL || rel >= 0xb015b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b015b0 size=64 callers=0 calls=0
*/
void sub_b015b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb015b0ULL || rel >= 0xb015f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b015f0 size=48 callers=0 calls=0
*/
void sub_b015f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb015f0ULL || rel >= 0xb01620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01620 size=48 callers=0 calls=0
*/
void sub_b01620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01620ULL || rel >= 0xb01650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01650 size=80 callers=0 calls=0
*/
void sub_b01650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01650ULL || rel >= 0xb016a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b016a0 size=64 callers=0 calls=0
*/
void sub_b016a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb016a0ULL || rel >= 0xb016e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b016e0 size=48 callers=0 calls=0
*/
void sub_b016e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb016e0ULL || rel >= 0xb01710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01710 size=48 callers=0 calls=0
*/
void sub_b01710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01710ULL || rel >= 0xb01740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01740 size=48 callers=0 calls=0
*/
void sub_b01740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01740ULL || rel >= 0xb01770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01770 size=64 callers=0 calls=0
*/
void sub_b01770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01770ULL || rel >= 0xb017b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b017b0 size=48 callers=0 calls=0
*/
void sub_b017b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb017b0ULL || rel >= 0xb017e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b017e0 size=48 callers=0 calls=0
*/
void sub_b017e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb017e0ULL || rel >= 0xb01810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01810 size=48 callers=0 calls=0
*/
void sub_b01810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01810ULL || rel >= 0xb01840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01840 size=64 callers=0 calls=0
*/
void sub_b01840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01840ULL || rel >= 0xb01880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01880 size=48 callers=0 calls=0
*/
void sub_b01880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01880ULL || rel >= 0xb018b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b018b0 size=48 callers=0 calls=0
*/
void sub_b018b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb018b0ULL || rel >= 0xb018e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b018e0 size=48 callers=0 calls=0
*/
void sub_b018e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb018e0ULL || rel >= 0xb01910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01910 size=64 callers=0 calls=0
*/
void sub_b01910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01910ULL || rel >= 0xb01950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01950 size=48 callers=0 calls=0
*/
void sub_b01950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01950ULL || rel >= 0xb01980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01980 size=48 callers=0 calls=0
*/
void sub_b01980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01980ULL || rel >= 0xb019b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b019b0 size=160 callers=0 calls=0
*/
void sub_b019b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb019b0ULL || rel >= 0xb01a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01a50 size=304 callers=0 calls=4
   calls: sub_ac5b50, sub_afb5b0, sub_afb760, sub_d0c0
   ref: StateBtlSpotTop
*/
void StateBtlSpotTop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01a50ULL || rel >= 0xb01b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b01b80 size=1664 callers=0 calls=9
   calls: sub_1387400, sub_1387450, sub_ac5b50, sub_ad32d0, sub_afb6e0, sub_afb780, sub_afb7d0, sub_afd680, sub_b024b0
   ref: StateBtlSpotCompTop
   ref: StateBtlSpotCasualMatchEntrance
   ref: StateBtlSpotRankMatchEntrance
*/
void StateBtlSpotRankMatchEntrance(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb01b80ULL || rel >= 0xb02200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b02200 size=16 callers=0 calls=0
*/
void sub_b02200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb02200ULL || rel >= 0xb02210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b02210 size=112 callers=0 calls=0
*/
void sub_b02210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb02210ULL || rel >= 0xb02280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b02280 size=112 callers=0 calls=0
*/
void sub_b02280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb02280ULL || rel >= 0xb022f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b022f0 size=112 callers=0 calls=0
*/
void sub_b022f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb022f0ULL || rel >= 0xb02360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b02360 size=112 callers=0 calls=0
*/
void sub_b02360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb02360ULL || rel >= 0xb023d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b023d0 size=112 callers=0 calls=0
*/
void sub_b023d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb023d0ULL || rel >= 0xb02440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b02440 size=112 callers=0 calls=0
*/
void sub_b02440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb02440ULL || rel >= 0xb024b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b024b0 size=464 callers=3 calls=0
*/
void sub_b024b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb024b0ULL || rel >= 0xb02680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b02680 size=160 callers=0 calls=0
*/
void sub_b02680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb02680ULL || rel >= 0xb02720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b02720 size=544 callers=0 calls=6
   calls: sub_abb7c0, sub_ac5b50, sub_afa5a0, sub_afb760, sub_afb8c0, sub_d0c0
   ref: StateBtlSpotCompTop
*/
void StateBtlSpotCompTop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb02720ULL || rel >= 0xb02940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b02940 size=16 callers=0 calls=0
*/
void sub_b02940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb02940ULL || rel >= 0xb02950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b02950 size=7568 callers=0 calls=34
   calls: sub_1386b00, sub_1386d20, sub_1387670, sub_13876c0, sub_ab97c0, sub_abb780, sub_abb7c0, sub_abbdd0, sub_abbe70, sub_ac5b50, sub_ad32d0, sub_af7320
   ... +22 more
   ref: StateBtlSpotTop
   ref: StateBtlSpotCompBattleEntrance
   ref: StateBtlSpotCompSearchComp
   ref: StateBtlSpotCreateUserComp
*/
void StateBtlSpotCompBattleEntrance(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb02950ULL || rel >= 0xb046e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b046e0 size=576 callers=1 calls=8
   calls: sub_1345ca0, sub_abc660, sub_abf2d0, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0, sub_b08840
*/
void sub_b046e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb046e0ULL || rel >= 0xb04920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b04920 size=576 callers=1 calls=3
   calls: RequestGetUserData, sub_11009c0, sub_e71830
*/
void sub_b04920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb04920ULL || rel >= 0xb04b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b04b60 size=592 callers=1 calls=3
   calls: RequestPostUserData, sub_11009c0, sub_e71830
*/
void sub_b04b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb04b60ULL || rel >= 0xb04db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b04db0 size=576 callers=4 calls=3
   calls: RequestGetCompetition, sub_11009c0, sub_e71830
*/
void sub_b04db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb04db0ULL || rel >= 0xb04ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b04ff0 size=400 callers=1 calls=4
   calls: InstanceTable_431, sub_15b7a70, sub_15b8140, sub_6a4d50
*/
void sub_b04ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb04ff0ULL || rel >= 0xb05180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b05180 size=576 callers=1 calls=3
   calls: RequestGetOrCreateStats, sub_11009c0, sub_e71830
*/
void sub_b05180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb05180ULL || rel >= 0xb053c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b053c0 size=624 callers=1 calls=4
   calls: RequestGetCompetitionRankingRank, sub_11009c0, sub_6a4d30, sub_e71830
*/
void sub_b053c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb053c0ULL || rel >= 0xb05630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b05630 size=672 callers=1 calls=8
   calls: sub_1386b00, sub_1386b80, sub_1386d20, sub_1386da0, sub_1386e80, sub_1386f60, sub_1387260, sub_ac0e70
*/
void sub_b05630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb05630ULL || rel >= 0xb058d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b058d0 size=336 callers=1 calls=4
   calls: sub_1354400, sub_1354690, sub_1386b00, sub_1386d20
*/
void sub_b058d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb058d0ULL || rel >= 0xb05a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b05a20 size=928 callers=1 calls=7
   calls: RequestPostUserData, sub_11009c0, sub_abb780, sub_ac5b50, sub_afa5a0, sub_afb8c0, sub_e71830
*/
void sub_b05a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb05a20ULL || rel >= 0xb05dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b05dc0 size=320 callers=2 calls=4
   calls: sub_abb780, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b05dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb05dc0ULL || rel >= 0xb05f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b05f00 size=608 callers=1 calls=3
   calls: RequestSearchCompetition, sub_11009c0, sub_e71830
*/
void sub_b05f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb05f00ULL || rel >= 0xb06160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b06160 size=336 callers=1 calls=5
   calls: sub_abf2c0, sub_ac4880, sub_ac4a90, sub_ac5b50, sub_afb6e0
*/
void sub_b06160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb06160ULL || rel >= 0xb062b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b062b0 size=416 callers=1 calls=4
   calls: sub_1386e00, sub_1386ee0, sub_b05dc0, sub_b06bb0
*/
void sub_b062b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb062b0ULL || rel >= 0xb06450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b06450 size=1376 callers=1 calls=2
   calls: sub_13871e0, sub_afa6d0
*/
void sub_b06450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb06450ULL || rel >= 0xb069b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b069b0 size=512 callers=1 calls=7
   calls: sub_1386e00, sub_1386ee0, sub_ac0730, sub_ac4880, sub_ac5b50, sub_afb660, sub_afb6e0
*/
void sub_b069b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb069b0ULL || rel >= 0xb06bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b06bb0 size=320 callers=1 calls=4
   calls: sub_abb780, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b06bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb06bb0ULL || rel >= 0xb06cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b06cf0 size=192 callers=0 calls=0
*/
void sub_b06cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb06cf0ULL || rel >= 0xb06db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b06db0 size=192 callers=0 calls=0
*/
void sub_b06db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb06db0ULL || rel >= 0xb06e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b06e70 size=192 callers=0 calls=0
*/
void sub_b06e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb06e70ULL || rel >= 0xb06f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b06f30 size=192 callers=0 calls=0
*/
void sub_b06f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb06f30ULL || rel >= 0xb06ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b06ff0 size=192 callers=0 calls=0
*/
void sub_b06ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb06ff0ULL || rel >= 0xb070b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b070b0 size=192 callers=0 calls=0
*/
void sub_b070b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb070b0ULL || rel >= 0xb07170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07170 size=368 callers=0 calls=4
   calls: sub_abb710, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b07170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07170ULL || rel >= 0xb072e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b072e0 size=64 callers=0 calls=0
*/
void sub_b072e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb072e0ULL || rel >= 0xb07320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07320 size=48 callers=0 calls=0
*/
void sub_b07320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07320ULL || rel >= 0xb07350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07350 size=48 callers=0 calls=0
*/
void sub_b07350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07350ULL || rel >= 0xb07380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07380 size=64 callers=0 calls=0
*/
void sub_b07380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07380ULL || rel >= 0xb073c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b073c0 size=64 callers=0 calls=0
*/
void sub_b073c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb073c0ULL || rel >= 0xb07400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07400 size=48 callers=0 calls=0
*/
void sub_b07400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07400ULL || rel >= 0xb07430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07430 size=48 callers=0 calls=0
*/
void sub_b07430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07430ULL || rel >= 0xb07460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07460 size=304 callers=0 calls=4
   calls: sub_abb710, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b07460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07460ULL || rel >= 0xb07590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07590 size=64 callers=0 calls=0
*/
void sub_b07590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07590ULL || rel >= 0xb075d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b075d0 size=48 callers=0 calls=0
*/
void sub_b075d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb075d0ULL || rel >= 0xb07600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07600 size=48 callers=0 calls=0
*/
void sub_b07600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07600ULL || rel >= 0xb07630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07630 size=48 callers=0 calls=0
*/
void sub_b07630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07630ULL || rel >= 0xb07660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07660 size=64 callers=0 calls=0
*/
void sub_b07660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07660ULL || rel >= 0xb076a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b076a0 size=48 callers=0 calls=0
*/
void sub_b076a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb076a0ULL || rel >= 0xb076d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b076d0 size=48 callers=0 calls=0
*/
void sub_b076d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb076d0ULL || rel >= 0xb07700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07700 size=144 callers=0 calls=1
   calls: sub_b077d0
*/
void sub_b07700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07700ULL || rel >= 0xb07790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07790 size=64 callers=0 calls=0
*/
void sub_b07790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07790ULL || rel >= 0xb077d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b077d0 size=992 callers=7 calls=3
   calls: sub_15b8140, sub_15b9390, sub_b07bb0
*/
void sub_b077d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb077d0ULL || rel >= 0xb07bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07bb0 size=416 callers=6 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_b07bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07bb0ULL || rel >= 0xb07d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07d50 size=48 callers=0 calls=0
*/
void sub_b07d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07d50ULL || rel >= 0xb07d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07d80 size=48 callers=0 calls=0
*/
void sub_b07d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07d80ULL || rel >= 0xb07db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07db0 size=64 callers=0 calls=0
*/
void sub_b07db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07db0ULL || rel >= 0xb07df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07df0 size=64 callers=0 calls=0
*/
void sub_b07df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07df0ULL || rel >= 0xb07e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07e30 size=48 callers=0 calls=0
*/
void sub_b07e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07e30ULL || rel >= 0xb07e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07e60 size=48 callers=0 calls=0
*/
void sub_b07e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07e60ULL || rel >= 0xb07e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07e90 size=320 callers=0 calls=4
   calls: sub_abb710, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b07e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07e90ULL || rel >= 0xb07fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b07fd0 size=64 callers=0 calls=0
*/
void sub_b07fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb07fd0ULL || rel >= 0xb08010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08010 size=48 callers=0 calls=0
*/
void sub_b08010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08010ULL || rel >= 0xb08040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08040 size=48 callers=0 calls=0
*/
void sub_b08040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08040ULL || rel >= 0xb08070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08070 size=48 callers=0 calls=0
*/
void sub_b08070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08070ULL || rel >= 0xb080a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b080a0 size=64 callers=0 calls=0
*/
void sub_b080a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb080a0ULL || rel >= 0xb080e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b080e0 size=48 callers=0 calls=0
*/
void sub_b080e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb080e0ULL || rel >= 0xb08110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08110 size=48 callers=0 calls=0
*/
void sub_b08110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08110ULL || rel >= 0xb08140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08140 size=208 callers=0 calls=5
   calls: sub_15b8140, sub_abbd90, sub_ac0c90, sub_af7320, sub_b077d0
*/
void sub_b08140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08140ULL || rel >= 0xb08210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08210 size=64 callers=0 calls=0
*/
void sub_b08210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08210ULL || rel >= 0xb08250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08250 size=48 callers=0 calls=0
*/
void sub_b08250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08250ULL || rel >= 0xb08280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08280 size=48 callers=0 calls=0
*/
void sub_b08280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08280ULL || rel >= 0xb082b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b082b0 size=48 callers=0 calls=0
*/
void sub_b082b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb082b0ULL || rel >= 0xb082e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b082e0 size=64 callers=0 calls=0
*/
void sub_b082e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb082e0ULL || rel >= 0xb08320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08320 size=48 callers=0 calls=0
*/
void sub_b08320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08320ULL || rel >= 0xb08350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08350 size=48 callers=0 calls=0
*/
void sub_b08350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08350ULL || rel >= 0xb08380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08380 size=112 callers=0 calls=1
   calls: sub_b08430
*/
void sub_b08380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08380ULL || rel >= 0xb083f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b083f0 size=64 callers=0 calls=0
*/
void sub_b083f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb083f0ULL || rel >= 0xb08430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08430 size=256 callers=8 calls=1
   calls: sub_15afe30
*/
void sub_b08430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08430ULL || rel >= 0xb08530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08530 size=48 callers=0 calls=0
*/
void sub_b08530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08530ULL || rel >= 0xb08560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08560 size=48 callers=0 calls=0
*/
void sub_b08560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08560ULL || rel >= 0xb08590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08590 size=48 callers=0 calls=0
*/
void sub_b08590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08590ULL || rel >= 0xb085c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b085c0 size=64 callers=0 calls=0
*/
void sub_b085c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb085c0ULL || rel >= 0xb08600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08600 size=48 callers=0 calls=0
*/
void sub_b08600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08600ULL || rel >= 0xb08630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08630 size=48 callers=0 calls=0
*/
void sub_b08630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08630ULL || rel >= 0xb08660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08660 size=64 callers=0 calls=0
*/
void sub_b08660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08660ULL || rel >= 0xb086a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b086a0 size=64 callers=0 calls=0
*/
void sub_b086a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb086a0ULL || rel >= 0xb086e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b086e0 size=48 callers=0 calls=0
*/
void sub_b086e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb086e0ULL || rel >= 0xb08710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08710 size=48 callers=0 calls=0
*/
void sub_b08710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08710ULL || rel >= 0xb08740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08740 size=96 callers=0 calls=0
*/
void sub_b08740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08740ULL || rel >= 0xb087a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b087a0 size=64 callers=0 calls=0
*/
void sub_b087a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb087a0ULL || rel >= 0xb087e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b087e0 size=48 callers=0 calls=0
*/
void sub_b087e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb087e0ULL || rel >= 0xb08810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08810 size=48 callers=0 calls=0
*/
void sub_b08810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08810ULL || rel >= 0xb08840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08840 size=400 callers=5 calls=2
   calls: sub_5e2350, sub_b6f8c0
*/
void sub_b08840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08840ULL || rel >= 0xb089d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b089d0 size=80 callers=0 calls=0
*/
void sub_b089d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb089d0ULL || rel >= 0xb08a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08a20 size=240 callers=0 calls=0
*/
void sub_b08a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08a20ULL || rel >= 0xb08b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08b10 size=80 callers=0 calls=0
*/
void sub_b08b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08b10ULL || rel >= 0xb08b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08b60 size=80 callers=0 calls=0
*/
void sub_b08b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08b60ULL || rel >= 0xb08bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08bb0 size=16 callers=0 calls=0
*/
void sub_b08bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08bb0ULL || rel >= 0xb08bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08bc0 size=16 callers=0 calls=0
*/
void sub_b08bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08bc0ULL || rel >= 0xb08bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08bd0 size=80 callers=0 calls=0
*/
void sub_b08bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08bd0ULL || rel >= 0xb08c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08c20 size=80 callers=0 calls=0
*/
void sub_b08c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08c20ULL || rel >= 0xb08c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08c70 size=160 callers=0 calls=0
*/
void sub_b08c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08c70ULL || rel >= 0xb08d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08d10 size=480 callers=0 calls=6
   calls: sub_ab97d0, sub_ac5b50, sub_afa5a0, sub_afb760, sub_afb8c0, sub_d0c0
   ref: StateBtlSpotCompEntry
*/
void StateBtlSpotCompEntry(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08d10ULL || rel >= 0xb08ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08ef0 size=16 callers=0 calls=0
*/
void sub_b08ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08ef0ULL || rel >= 0xb08f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b08f00 size=1168 callers=0 calls=11
   calls: sub_ac0e90, sub_ac5b50, sub_ad32d0, sub_afb780, sub_afb940, sub_afba60, sub_b09390, sub_b09580, sub_b09760, sub_b09a60, sub_b0a140
   ref: StateBtlSpotCompTop
*/
void StateBtlSpotCompTop_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb08f00ULL || rel >= 0xb09390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b09390 size=496 callers=1 calls=1
   calls: RequestCheckAndEntryCompetition
*/
void sub_b09390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb09390ULL || rel >= 0xb09580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b09580 size=480 callers=1 calls=1
   calls: RequestGetOrCreateStats
*/
void sub_b09580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb09580ULL || rel >= 0xb09760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b09760 size=768 callers=1 calls=10
   calls: sub_1354400, sub_1354690, sub_1386b00, sub_1386b80, sub_1386d20, sub_1386da0, sub_abb7d0, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b09760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb09760ULL || rel >= 0xb09a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b09a60 size=1088 callers=1 calls=6
   calls: RequestPostUserData, sub_abb780, sub_abb7d0, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b09a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb09a60ULL || rel >= 0xb09ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b09ea0 size=112 callers=0 calls=0
*/
void sub_b09ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb09ea0ULL || rel >= 0xb09f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b09f10 size=112 callers=0 calls=0
*/
void sub_b09f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb09f10ULL || rel >= 0xb09f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b09f80 size=112 callers=0 calls=0
*/
void sub_b09f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb09f80ULL || rel >= 0xb09ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b09ff0 size=112 callers=0 calls=0
*/
void sub_b09ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb09ff0ULL || rel >= 0xb0a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a060 size=112 callers=0 calls=0
*/
void sub_b0a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a060ULL || rel >= 0xb0a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a0d0 size=112 callers=0 calls=0
*/
void sub_b0a0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a0d0ULL || rel >= 0xb0a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a140 size=464 callers=3 calls=0
*/
void sub_b0a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a140ULL || rel >= 0xb0a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a310 size=48 callers=0 calls=0
*/
void sub_b0a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a310ULL || rel >= 0xb0a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a340 size=64 callers=0 calls=0
*/
void sub_b0a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a340ULL || rel >= 0xb0a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a380 size=48 callers=0 calls=0
*/
void sub_b0a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a380ULL || rel >= 0xb0a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a3b0 size=48 callers=0 calls=0
*/
void sub_b0a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a3b0ULL || rel >= 0xb0a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a3e0 size=64 callers=0 calls=0
*/
void sub_b0a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a3e0ULL || rel >= 0xb0a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a420 size=64 callers=0 calls=0
*/
void sub_b0a420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a420ULL || rel >= 0xb0a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a460 size=48 callers=0 calls=0
*/
void sub_b0a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a460ULL || rel >= 0xb0a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a490 size=48 callers=0 calls=0
*/
void sub_b0a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a490ULL || rel >= 0xb0a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a4c0 size=80 callers=0 calls=0
*/
void sub_b0a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a4c0ULL || rel >= 0xb0a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a510 size=64 callers=0 calls=0
*/
void sub_b0a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a510ULL || rel >= 0xb0a550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a550 size=48 callers=0 calls=0
*/
void sub_b0a550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a550ULL || rel >= 0xb0a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a580 size=48 callers=0 calls=0
*/
void sub_b0a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a580ULL || rel >= 0xb0a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a5b0 size=48 callers=0 calls=0
*/
void sub_b0a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a5b0ULL || rel >= 0xb0a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a5e0 size=64 callers=0 calls=0
*/
void sub_b0a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a5e0ULL || rel >= 0xb0a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a620 size=48 callers=0 calls=0
*/
void sub_b0a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a620ULL || rel >= 0xb0a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a650 size=48 callers=0 calls=0
*/
void sub_b0a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a650ULL || rel >= 0xb0a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a680 size=288 callers=0 calls=4
   calls: sub_abb710, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b0a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a680ULL || rel >= 0xb0a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a7a0 size=64 callers=0 calls=0
*/
void sub_b0a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a7a0ULL || rel >= 0xb0a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a7e0 size=48 callers=0 calls=0
*/
void sub_b0a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a7e0ULL || rel >= 0xb0a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a810 size=48 callers=0 calls=0
*/
void sub_b0a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a810ULL || rel >= 0xb0a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a840 size=48 callers=0 calls=0
*/
void sub_b0a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a840ULL || rel >= 0xb0a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a870 size=64 callers=0 calls=0
*/
void sub_b0a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a870ULL || rel >= 0xb0a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a8b0 size=48 callers=0 calls=0
*/
void sub_b0a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a8b0ULL || rel >= 0xb0a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a8e0 size=48 callers=0 calls=0
*/
void sub_b0a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a8e0ULL || rel >= 0xb0a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a910 size=160 callers=0 calls=0
*/
void sub_b0a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a910ULL || rel >= 0xb0a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0a9b0 size=768 callers=0 calls=8
   calls: sub_5e2350, sub_6be8b0, sub_aba280, sub_ac5b50, sub_afb660, sub_afb760, sub_b0acb0, sub_d0c0
   ref: StateBtlSpotCommonMatching
*/
void StateBtlSpotCommonMatching(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0a9b0ULL || rel >= 0xb0acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0acb0 size=304 callers=6 calls=5
   calls: sub_ab8fb0, sub_abccc0, sub_ac4880, sub_ac5b50, sub_afb6e0
*/
void sub_b0acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0acb0ULL || rel >= 0xb0ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0ade0 size=16 callers=0 calls=0
*/
void sub_b0ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0ade0ULL || rel >= 0xb0adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0adf0 size=1824 callers=0 calls=25
   calls: sub_104c020, sub_104fb70, sub_1050000, sub_10619f0, sub_65da00, sub_65daf0, sub_ab8fb0, sub_ab9960, sub_ac5b50, sub_ad32d0, sub_afb780, sub_afb810
   ... +13 more
   ref: StateBtlSpotCasualMatchBattle
   ref: StateBtlSpotTop
   ref: StateBtlSpotRankMatchBattle
   ref: StateBtlSpotCompBattle
*/
void StateBtlSpotRankMatchBattle_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0adf0ULL || rel >= 0xb0b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0b510 size=1360 callers=1 calls=8
   calls: StartRandomMatching, sub_1050000, sub_ab8fb0, sub_ab99a0, sub_ac5b50, sub_afb900, sub_b0cce0, sub_b0d730
*/
void sub_b0b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0b510ULL || rel >= 0xb0ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0ba60 size=688 callers=1 calls=10
   calls: sub_1052c20, sub_136b550, sub_ab8fb0, sub_ab9630, sub_ab97a0, sub_ab97e0, sub_ab9f00, sub_ac5b50, sub_afb900, sub_b0cbc0
*/
void sub_b0ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0ba60ULL || rel >= 0xb0bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0bd10 size=688 callers=1 calls=6
   calls: RequestDownloadCompetitionTeam, sub_ab9f80, sub_ac4880, sub_ac5b50, sub_afb6e0, sub_b0acb0
*/
void sub_b0bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0bd10ULL || rel >= 0xb0bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0bfc0 size=1136 callers=1 calls=8
   calls: RequestGetStats, sub_15b9390, sub_ab8fb0, sub_ab97d0, sub_ab97f0, sub_ac5b50, sub_afab30, sub_afb8c0
*/
void sub_b0bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0bfc0ULL || rel >= 0xb0c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0c430 size=736 callers=1 calls=6
   calls: sub_ab8fb0, sub_ab97d0, sub_abb800, sub_ac1250, sub_ac5b50, sub_afb8c0
*/
void sub_b0c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0c430ULL || rel >= 0xb0c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0c710 size=704 callers=1 calls=12
   calls: sub_8ddc00, sub_8ddc20, sub_8dde50, sub_8ddec0, sub_8e1430, sub_ab8fb0, sub_ab95a0, sub_ab9780, sub_ab9f80, sub_ac5b50, sub_afb5f0, sub_afb900
*/
void sub_b0c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0c710ULL || rel >= 0xb0c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0c9d0 size=208 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_b0dce0, sub_b0ddf0
*/
void sub_b0c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0c9d0ULL || rel >= 0xb0caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0caa0 size=32 callers=0 calls=0
*/
void sub_b0caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0caa0ULL || rel >= 0xb0cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0cac0 size=32 callers=0 calls=0
*/
void sub_b0cac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0cac0ULL || rel >= 0xb0cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0cae0 size=32 callers=0 calls=0
*/
void sub_b0cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0cae0ULL || rel >= 0xb0cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0cb00 size=32 callers=0 calls=0
*/
void sub_b0cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0cb00ULL || rel >= 0xb0cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0cb20 size=48 callers=0 calls=0
*/
void sub_b0cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0cb20ULL || rel >= 0xb0cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0cb50 size=48 callers=0 calls=0
*/
void sub_b0cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0cb50ULL || rel >= 0xb0cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0cb80 size=32 callers=0 calls=0
*/
void sub_b0cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0cb80ULL || rel >= 0xb0cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0cba0 size=32 callers=0 calls=0
*/
void sub_b0cba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0cba0ULL || rel >= 0xb0cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0cbc0 size=288 callers=1 calls=4
   calls: sub_1061810, sub_16b00e0, sub_174de50, sub_6ae890
*/
void sub_b0cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0cbc0ULL || rel >= 0xb0cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0cce0 size=1456 callers=1 calls=13
   calls: sub_8e1430, sub_ab8fb0, sub_ab95a0, sub_abade0, sub_abb0a0, sub_abbd80, sub_abcc70, sub_ac4880, sub_ac5b50, sub_afb6e0, sub_afb810, sub_afb880
   ... +1 more
*/
void sub_b0cce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0cce0ULL || rel >= 0xb0d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d290 size=320 callers=1 calls=4
   calls: sub_1100e00, sub_ab9780, sub_ab97b0, sub_b0acb0
*/
void sub_b0d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d290ULL || rel >= 0xb0d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d3d0 size=256 callers=1 calls=5
   calls: sub_1100e00, sub_ab9780, sub_ab97b0, sub_ab9f80, sub_b0acb0
*/
void sub_b0d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d3d0ULL || rel >= 0xb0d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d4d0 size=80 callers=0 calls=1
   calls: sub_1061810
*/
void sub_b0d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d4d0ULL || rel >= 0xb0d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d520 size=80 callers=0 calls=1
   calls: sub_1061810
*/
void sub_b0d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d520ULL || rel >= 0xb0d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d570 size=336 callers=0 calls=0
*/
void sub_b0d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d570ULL || rel >= 0xb0d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d6c0 size=16 callers=0 calls=0
*/
void sub_b0d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d6c0ULL || rel >= 0xb0d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d6d0 size=16 callers=0 calls=0
*/
void sub_b0d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d6d0ULL || rel >= 0xb0d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d6e0 size=16 callers=0 calls=0
*/
void sub_b0d6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d6e0ULL || rel >= 0xb0d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d6f0 size=16 callers=0 calls=0
*/
void sub_b0d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d6f0ULL || rel >= 0xb0d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d700 size=16 callers=0 calls=0
*/
void sub_b0d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d700ULL || rel >= 0xb0d710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d710 size=16 callers=0 calls=0
*/
void sub_b0d710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d710ULL || rel >= 0xb0d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d720 size=16 callers=0 calls=0
*/
void sub_b0d720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d720ULL || rel >= 0xb0d730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d730 size=240 callers=1 calls=0
*/
void sub_b0d730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d730ULL || rel >= 0xb0d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d820 size=160 callers=0 calls=0
*/
void sub_b0d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d820ULL || rel >= 0xb0d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0d8c0 size=416 callers=0 calls=5
   calls: contents_btl_spot_empty_5, gflnet3_message_lite_2, sub_65da00, sub_65daf0, sub_b0f570
*/
void sub_b0d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0d8c0ULL || rel >= 0xb0da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0da60 size=160 callers=0 calls=0
*/
void sub_b0da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0da60ULL || rel >= 0xb0db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0db00 size=160 callers=0 calls=0
*/
void sub_b0db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0db00ULL || rel >= 0xb0dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0dba0 size=160 callers=0 calls=0
*/
void sub_b0dba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0dba0ULL || rel >= 0xb0dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0dc40 size=160 callers=0 calls=0
*/
void sub_b0dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0dc40ULL || rel >= 0xb0dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0dce0 size=272 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_b0df20
*/
void sub_b0dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0dce0ULL || rel >= 0xb0ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0ddf0 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_b0eb80, sub_b0f080, sub_b0f570, sub_b0f6b0, sub_c70
*/
void sub_b0ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0ddf0ULL || rel >= 0xb0df20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0df20 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_b0df20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0df20ULL || rel >= 0xb0e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e090 size=320 callers=0 calls=2
   calls: sub_783bd0, sub_785320
*/
void sub_b0e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e090ULL || rel >= 0xb0e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e1d0 size=64 callers=0 calls=0
*/
void sub_b0e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e1d0ULL || rel >= 0xb0e210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e210 size=48 callers=0 calls=0
*/
void sub_b0e210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e210ULL || rel >= 0xb0e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e240 size=48 callers=0 calls=0
*/
void sub_b0e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e240ULL || rel >= 0xb0e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e270 size=48 callers=0 calls=0
*/
void sub_b0e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e270ULL || rel >= 0xb0e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e2a0 size=64 callers=0 calls=0
*/
void sub_b0e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e2a0ULL || rel >= 0xb0e2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e2e0 size=48 callers=0 calls=0
*/
void sub_b0e2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e2e0ULL || rel >= 0xb0e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e310 size=48 callers=0 calls=0
*/
void sub_b0e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e310ULL || rel >= 0xb0e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e340 size=656 callers=0 calls=4
   calls: sub_ab8fb0, sub_abb7f0, sub_ac5b50, sub_afb8c0
*/
void sub_b0e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e340ULL || rel >= 0xb0e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e5d0 size=64 callers=0 calls=0
*/
void sub_b0e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e5d0ULL || rel >= 0xb0e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e610 size=48 callers=0 calls=0
*/
void sub_b0e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e610ULL || rel >= 0xb0e640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e640 size=48 callers=0 calls=0
*/
void sub_b0e640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e640ULL || rel >= 0xb0e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e670 size=48 callers=0 calls=0
*/
void sub_b0e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e670ULL || rel >= 0xb0e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e6a0 size=64 callers=0 calls=0
*/
void sub_b0e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e6a0ULL || rel >= 0xb0e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e6e0 size=48 callers=0 calls=0
*/
void sub_b0e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e6e0ULL || rel >= 0xb0e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e710 size=48 callers=0 calls=0
*/
void sub_b0e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e710ULL || rel >= 0xb0e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e740 size=160 callers=0 calls=0
*/
void sub_b0e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e740ULL || rel >= 0xb0e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e7e0 size=400 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: CHECK failed: file != NULL: 
   ref: btl_spot_empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/btl_spot/source/state/protocol_buffers/out
*/
void contents_btl_spot_empty(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e7e0ULL || rel >= 0xb0e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0e970 size=160 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: btl_spot_empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/btl_spot/source/state/protocol_buffers/out
*/
void contents_btl_spot_empty_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0e970ULL || rel >= 0xb0ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0ea10 size=80 callers=0 calls=0
*/
void sub_b0ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0ea10ULL || rel >= 0xb0ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0ea60 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: btl_spot_empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/btl_spot/source/state/protocol_buffers/out
*/
void contents_btl_spot_empty_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0ea60ULL || rel >= 0xb0eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0eb80 size=32 callers=4 calls=0
*/
void sub_b0eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0eb80ULL || rel >= 0xb0eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0eba0 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/btl_spot/source/state/protocol_buffers/out
*/
void contents_btl_spot_empty_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0eba0ULL || rel >= 0xb0ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0ebd0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_b0ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0ebd0ULL || rel >= 0xb0ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0ec30 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_b0ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0ec30ULL || rel >= 0xb0ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0ec90 size=16 callers=0 calls=0
*/
void sub_b0ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0ec90ULL || rel >= 0xb0eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0eca0 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: btl_spot_empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/btl_spot/source/state/protocol_buffers/out
*/
void contents_btl_spot_empty_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0eca0ULL || rel >= 0xb0ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0ed70 size=96 callers=0 calls=2
   calls: sub_b0edd0, sub_c70
*/
void sub_b0ed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0ed70ULL || rel >= 0xb0edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0edd0 size=32 callers=1 calls=0
*/
void sub_b0edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0edd0ULL || rel >= 0xb0edf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0edf0 size=16 callers=0 calls=0
*/
void sub_b0edf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0edf0ULL || rel >= 0xb0ee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0ee00 size=160 callers=1 calls=2
   calls: sub_70c480, sub_713480
*/
void sub_b0ee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0ee00ULL || rel >= 0xb0eea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0eea0 size=16 callers=0 calls=0
*/
void sub_b0eea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0eea0ULL || rel >= 0xb0eeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0eeb0 size=16 callers=0 calls=0
*/
void sub_b0eeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0eeb0ULL || rel >= 0xb0eec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0eec0 size=16 callers=1 calls=0
*/
void sub_b0eec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0eec0ULL || rel >= 0xb0eed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0eed0 size=352 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: btl_spot_empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/btl_spot/source/state/protocol_buffers/out
*/
void contents_btl_spot_empty_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0eed0ULL || rel >= 0xb0f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f030 size=80 callers=0 calls=0
*/
void sub_b0f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f030ULL || rel >= 0xb0f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f080 size=32 callers=1 calls=0
*/
void sub_b0f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f080ULL || rel >= 0xb0f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f0a0 size=16 callers=0 calls=0
*/
void sub_b0f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f0a0ULL || rel >= 0xb0f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f0b0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_b0f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f0b0ULL || rel >= 0xb0f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f120 size=16 callers=0 calls=0
*/
void sub_b0f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f120ULL || rel >= 0xb0f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f130 size=32 callers=0 calls=0
*/
void sub_b0f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f130ULL || rel >= 0xb0f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f150 size=16 callers=0 calls=0
*/
void sub_b0f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f150ULL || rel >= 0xb0f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f160 size=16 callers=0 calls=0
*/
void sub_b0f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f160ULL || rel >= 0xb0f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f170 size=208 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: btl_spot_empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/btl_spot/source/state/protocol_buffers/out
*/
void contents_btl_spot_empty_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f170ULL || rel >= 0xb0f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f240 size=352 callers=0 calls=10
   calls: contents_btl_spot_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/btl_spot/source/state/protocol_buffers/out
   ref: CHECK failed: file != NULL: 
   ref: btl_spot_data_holder.proto
*/
void contents_btl_spot_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f240ULL || rel >= 0xb0f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f3a0 size=224 callers=3 calls=6
   calls: contents_btl_spot_empty_2, contents_btl_spot_empty_5, gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/btl_spot/source/state/protocol_buffers/out
   ref: btl_spot_data_holder.proto
*/
void contents_btl_spot_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f3a0ULL || rel >= 0xb0f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f480 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_b0f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f480ULL || rel >= 0xb0f4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f4e0 size=144 callers=0 calls=4
   calls: contents_btl_spot_data_holder_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_b0f4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f4e0ULL || rel >= 0xb0f570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f570 size=32 callers=2 calls=0
*/
void sub_b0f570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f570ULL || rel >= 0xb0f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f590 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_b0f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f590ULL || rel >= 0xb0f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f620 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_b0f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f620ULL || rel >= 0xb0f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f6b0 size=64 callers=1 calls=0
*/
void sub_b0f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f6b0ULL || rel >= 0xb0f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f6f0 size=16 callers=0 calls=0
*/
void sub_b0f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f6f0ULL || rel >= 0xb0f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f700 size=96 callers=0 calls=2
   calls: sub_b0f760, sub_c70
*/
void sub_b0f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f700ULL || rel >= 0xb0f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f760 size=32 callers=1 calls=0
*/
void sub_b0f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f760ULL || rel >= 0xb0f780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f780 size=64 callers=0 calls=0
*/
void sub_b0f780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f780ULL || rel >= 0xb0f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f7c0 size=416 callers=0 calls=8
   calls: sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_b0eb80, sub_b0ee00, sub_c70
*/
void sub_b0f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f7c0ULL || rel >= 0xb0f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f960 size=32 callers=0 calls=0
*/
void sub_b0f960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f960ULL || rel >= 0xb0f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f980 size=96 callers=0 calls=0
*/
void sub_b0f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f980ULL || rel >= 0xb0f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0f9e0 size=112 callers=0 calls=2
   calls: sub_70d000, sub_b0eec0
*/
void sub_b0f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0f9e0ULL || rel >= 0xb0fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0fa50 size=336 callers=0 calls=5
   calls: contents_btl_spot_data_holder_2, contents_btl_spot_empty_5, gflnet3_generated_message_util, sub_b0eb80, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/btl_spot/source/state/protocol_buffers/out
*/
void contents_btl_spot_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0fa50ULL || rel >= 0xb0fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0fba0 size=80 callers=0 calls=0
*/
void sub_b0fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0fba0ULL || rel >= 0xb0fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0fbf0 size=16 callers=0 calls=0
*/
void sub_b0fbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0fbf0ULL || rel >= 0xb0fc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0fc00 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_b0fc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0fc00ULL || rel >= 0xb0fc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0fc70 size=16 callers=0 calls=0
*/
void sub_b0fc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0fc70ULL || rel >= 0xb0fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0fc80 size=32 callers=0 calls=0
*/
void sub_b0fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0fc80ULL || rel >= 0xb0fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0fca0 size=16 callers=0 calls=0
*/
void sub_b0fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0fca0ULL || rel >= 0xb0fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0fcb0 size=16 callers=0 calls=0
*/
void sub_b0fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0fcb0ULL || rel >= 0xb0fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0fcc0 size=48 callers=0 calls=0
*/
void sub_b0fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0fcc0ULL || rel >= 0xb0fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b0fcf0 size=1072 callers=0 calls=10
   calls: sub_67b990, sub_abb7d0, sub_ac4880, sub_ac5b50, sub_afa5a0, sub_afb660, sub_afb6e0, sub_afb760, sub_afb8c0, sub_d0c0
   ref: StateBtlSpotCompSearchComp
*/
void StateBtlSpotCompSearchComp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0fcf0ULL || rel >= 0xb10120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b10120 size=16 callers=0 calls=0
*/
void sub_b10120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb10120ULL || rel >= 0xb10130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b10130 size=4608 callers=0 calls=30
   calls: sub_11011d0, sub_11013c0, sub_1324cb0, sub_1500c40, sub_ab95a0, sub_ab97c0, sub_ab97d0, sub_abbd50, sub_ac4880, sub_ac5b50, sub_ad32d0, sub_af7320
   ... +18 more
   ref: StateBtlSpotCompTop
   ref: StateBtlSpotCompEntry
*/
void StateBtlSpotCompEntry_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb10130ULL || rel >= 0xb11330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b11330 size=432 callers=1 calls=11
   calls: sub_15bc1e0, sub_15bc310, sub_67bdb0, sub_67bdc0, sub_67c7e0, sub_abfc40, sub_ac4880, sub_ac5b50, sub_afb6e0, sub_e76a20, sub_e7a030
*/
void sub_b11330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb11330ULL || rel >= 0xb114e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b114e0 size=496 callers=1 calls=1
   calls: RequestGetCompetition
*/
void sub_b114e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb114e0ULL || rel >= 0xb116d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b116d0 size=496 callers=1 calls=1
   calls: RequestDownloadRegulation
*/
void sub_b116d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb116d0ULL || rel >= 0xb118c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b118c0 size=608 callers=1 calls=8
   calls: sub_8dfba0, sub_ab95a0, sub_ab97d0, sub_abfcf0, sub_ac5b50, sub_afa5a0, sub_afb660, sub_afb8c0
*/
void sub_b118c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb118c0ULL || rel >= 0xb11b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b11b20 size=576 callers=1 calls=7
   calls: sub_ab95a0, sub_ab97d0, sub_ac0200, sub_ac5b50, sub_afa5a0, sub_afb660, sub_afb8c0
*/
void sub_b11b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb11b20ULL || rel >= 0xb11d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b11d60 size=400 callers=1 calls=4
   calls: sub_ac4880, sub_ac5b50, sub_afa6d0, sub_afb6e0
*/
void sub_b11d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb11d60ULL || rel >= 0xb11ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b11ef0 size=496 callers=1 calls=1
   calls: RequestSearchCompetition
*/
void sub_b11ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb11ef0ULL || rel >= 0xb120e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b120e0 size=1376 callers=1 calls=14
   calls: sub_67b990, sub_67bdb0, sub_67bfa0, sub_67c120, sub_7c2af0, sub_8dfba0, sub_8dfd80, sub_8e0250, sub_8e0840, sub_abf9c0, sub_ac5b50, sub_afb660
   ... +2 more
*/
void sub_b120e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb120e0ULL || rel >= 0xb12640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b12640 size=1536 callers=1 calls=16
   calls: sub_67b990, sub_67bdb0, sub_67bfa0, sub_67c120, sub_7c2280, sub_7c2af0, sub_8dfba0, sub_8dfd80, sub_8e0250, sub_8e0840, sub_8e0960, sub_abf9c0
   ... +4 more
*/
void sub_b12640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb12640ULL || rel >= 0xb12c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b12c40 size=144 callers=0 calls=0
*/
void sub_b12c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb12c40ULL || rel >= 0xb12cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b12cd0 size=144 callers=0 calls=0
*/
void sub_b12cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb12cd0ULL || rel >= 0xb12d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b12d60 size=160 callers=0 calls=0
*/
void sub_b12d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb12d60ULL || rel >= 0xb12e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b12e00 size=160 callers=0 calls=0
*/
void sub_b12e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb12e00ULL || rel >= 0xb12ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b12ea0 size=160 callers=0 calls=0
*/
void sub_b12ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb12ea0ULL || rel >= 0xb12f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b12f40 size=160 callers=0 calls=0
*/
void sub_b12f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb12f40ULL || rel >= 0xb12fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b12fe0 size=384 callers=0 calls=6
   calls: sub_ab97c0, sub_ac0e90, sub_ac5b50, sub_afa5a0, sub_afb8c0, sub_b077d0
*/
void sub_b12fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb12fe0ULL || rel >= 0xb13160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13160 size=64 callers=0 calls=0
*/
void sub_b13160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13160ULL || rel >= 0xb131a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b131a0 size=48 callers=0 calls=0
*/
void sub_b131a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb131a0ULL || rel >= 0xb131d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b131d0 size=48 callers=0 calls=0
*/
void sub_b131d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb131d0ULL || rel >= 0xb13200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13200 size=64 callers=0 calls=0
*/
void sub_b13200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13200ULL || rel >= 0xb13240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13240 size=64 callers=0 calls=0
*/
void sub_b13240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13240ULL || rel >= 0xb13280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13280 size=48 callers=0 calls=0
*/
void sub_b13280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13280ULL || rel >= 0xb132b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b132b0 size=48 callers=0 calls=0
*/
void sub_b132b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb132b0ULL || rel >= 0xb132e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b132e0 size=320 callers=0 calls=4
   calls: sub_ab9440, sub_ac5b50, sub_afa5a0, sub_afb8c0
*/
void sub_b132e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb132e0ULL || rel >= 0xb13420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13420 size=64 callers=0 calls=0
*/
void sub_b13420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13420ULL || rel >= 0xb13460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13460 size=48 callers=0 calls=0
*/
void sub_b13460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13460ULL || rel >= 0xb13490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13490 size=48 callers=0 calls=0
*/
void sub_b13490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13490ULL || rel >= 0xb134c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b134c0 size=48 callers=0 calls=0
*/
void sub_b134c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb134c0ULL || rel >= 0xb134f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b134f0 size=64 callers=0 calls=0
*/
void sub_b134f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb134f0ULL || rel >= 0xb13530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13530 size=48 callers=0 calls=0
*/
void sub_b13530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13530ULL || rel >= 0xb13560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13560 size=48 callers=0 calls=0
*/
void sub_b13560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13560ULL || rel >= 0xb13590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13590 size=656 callers=0 calls=7
   calls: sub_abbcb0, sub_ac0c90, sub_ac5b50, sub_afa5a0, sub_afb8c0, sub_b077d0, sub_b13860
*/
void sub_b13590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13590ULL || rel >= 0xb13820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13820 size=64 callers=0 calls=0
*/
void sub_b13820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13820ULL || rel >= 0xb13860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13860 size=560 callers=2 calls=0
*/
void sub_b13860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13860ULL || rel >= 0xb13a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13a90 size=48 callers=0 calls=0
*/
void sub_b13a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13a90ULL || rel >= 0xb13ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13ac0 size=48 callers=0 calls=0
*/
void sub_b13ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13ac0ULL || rel >= 0xb13af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13af0 size=48 callers=0 calls=0
*/
void sub_b13af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13af0ULL || rel >= 0xb13b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13b20 size=64 callers=0 calls=0
*/
void sub_b13b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13b20ULL || rel >= 0xb13b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13b60 size=48 callers=0 calls=0
*/
void sub_b13b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13b60ULL || rel >= 0xb13b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13b90 size=48 callers=0 calls=0
*/
void sub_b13b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13b90ULL || rel >= 0xb13bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13bc0 size=256 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_b13bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13bc0ULL || rel >= 0xb13cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13cc0 size=80 callers=0 calls=0
*/
void sub_b13cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13cc0ULL || rel >= 0xb13d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13d10 size=240 callers=0 calls=0
*/
void sub_b13d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13d10ULL || rel >= 0xb13e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13e00 size=80 callers=0 calls=0
*/
void sub_b13e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13e00ULL || rel >= 0xb13e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13e50 size=80 callers=0 calls=0
*/
void sub_b13e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13e50ULL || rel >= 0xb13ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13ea0 size=16 callers=0 calls=0
*/
void sub_b13ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13ea0ULL || rel >= 0xb13eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13eb0 size=16 callers=0 calls=0
*/
void sub_b13eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13eb0ULL || rel >= 0xb13ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13ec0 size=80 callers=0 calls=0
*/
void sub_b13ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13ec0ULL || rel >= 0xb13f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13f10 size=80 callers=0 calls=0
*/
void sub_b13f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13f10ULL || rel >= 0xb13f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b13f60 size=544 callers=1 calls=0
*/
void sub_b13f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb13f60ULL || rel >= 0xb14180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b14180 size=304 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_b14180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb14180ULL || rel >= 0xb142b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b142b0 size=80 callers=0 calls=0
*/
void sub_b142b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb142b0ULL || rel >= 0xb14300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b14300 size=240 callers=0 calls=0
*/
void sub_b14300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb14300ULL || rel >= 0xb143f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b143f0 size=80 callers=0 calls=0
*/
void sub_b143f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb143f0ULL || rel >= 0xb14440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b14440 size=80 callers=0 calls=0
*/
void sub_b14440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb14440ULL || rel >= 0xb14490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b14490 size=16 callers=0 calls=0
*/
void sub_b14490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb14490ULL || rel >= 0xb144a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b144a0 size=16 callers=0 calls=0
*/
void sub_b144a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb144a0ULL || rel >= 0xb144b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b144b0 size=80 callers=0 calls=0
*/
void sub_b144b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb144b0ULL || rel >= 0xb14500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b14500 size=80 callers=0 calls=0
*/
void sub_b14500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb14500ULL || rel >= 0xb14550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b14550 size=544 callers=1 calls=0
*/
void sub_b14550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb14550ULL || rel >= 0xb14770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b14770 size=160 callers=0 calls=0
*/
void sub_b14770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb14770ULL || rel >= 0xb14810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b14810 size=784 callers=0 calls=9
   calls: sub_abbbc0, sub_abbbd0, sub_abcc70, sub_ac4880, sub_ac5b50, sub_afa5a0, sub_afb6e0, sub_afb760, sub_d0c0
   ref: StateBtlSpotCreateUserComp
*/
void StateBtlSpotCreateUserComp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb14810ULL || rel >= 0xb14b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b14b20 size=16 callers=0 calls=0
*/
void sub_b14b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb14b20ULL || rel >= 0xb14b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b14b30 size=1360 callers=0 calls=14
   calls: sub_104c020, sub_ac4880, sub_ac5b50, sub_ad32d0, sub_afb6e0, sub_afb780, sub_afb940, sub_afba60, sub_afd680, sub_b15080, sub_b15520, sub_b15770
   ... +2 more
   ref: StateBtlSpotCompTop
*/
void StateBtlSpotCompTop_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb14b30ULL || rel >= 0xb15080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b15080 size=1184 callers=1 calls=12
   calls: RequestCreateUserCompetition, sub_11009c0, sub_15b7a70, sub_15b7b20, sub_15b7cf0, sub_8e0060, sub_abbbd0, sub_abf910, sub_ac5b50, sub_afa5a0, sub_afb8c0, sub_e71830
*/
void sub_b15080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb15080ULL || rel >= 0xb15520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b15520 size=592 callers=1 calls=3
   calls: RequestGetOrCreateStats, sub_11009c0, sub_e71830
*/
void sub_b15520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb15520ULL || rel >= 0xb15770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b15770 size=384 callers=1 calls=4
   calls: sub_1354400, sub_1354690, sub_1386d20, sub_1386da0
*/
void sub_b15770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb15770ULL || rel >= 0xb158f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b158f0 size=880 callers=1 calls=7
   calls: RequestPostUserData, sub_11009c0, sub_abb780, sub_ac5b50, sub_afa5a0, sub_afb8c0, sub_e71830
*/
void sub_b158f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb158f0ULL || rel >= 0xb15c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b15c60 size=656 callers=1 calls=6
   calls: sub_abbbd0, sub_ac03b0, sub_ac5b50, sub_afa5a0, sub_afb660, sub_afb8c0
*/
void sub_b15c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb15c60ULL || rel >= 0xb15ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b15ef0 size=144 callers=0 calls=0
*/
void sub_b15ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb15ef0ULL || rel >= 0xb15f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b15f80 size=144 callers=0 calls=0
*/
void sub_b15f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb15f80ULL || rel >= 0xb16010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16010 size=160 callers=0 calls=0
*/
void sub_b16010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16010ULL || rel >= 0xb160b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b160b0 size=160 callers=0 calls=0
*/
void sub_b160b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb160b0ULL || rel >= 0xb16150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16150 size=160 callers=0 calls=0
*/
void sub_b16150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16150ULL || rel >= 0xb161f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b161f0 size=160 callers=0 calls=0
*/
void sub_b161f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb161f0ULL || rel >= 0xb16290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16290 size=176 callers=0 calls=1
   calls: sub_b077d0
*/
void sub_b16290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16290ULL || rel >= 0xb16340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16340 size=64 callers=0 calls=0
*/
void sub_b16340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16340ULL || rel >= 0xb16380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16380 size=48 callers=0 calls=0
*/
void sub_b16380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16380ULL || rel >= 0xb163b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b163b0 size=48 callers=0 calls=0
*/
void sub_b163b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb163b0ULL || rel >= 0xb163e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b163e0 size=112 callers=0 calls=0
*/
void sub_b163e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb163e0ULL || rel >= 0xb16450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16450 size=64 callers=0 calls=0
*/
void sub_b16450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16450ULL || rel >= 0xb16490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16490 size=48 callers=0 calls=0
*/
void sub_b16490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16490ULL || rel >= 0xb164c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b164c0 size=48 callers=0 calls=0
*/
void sub_b164c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb164c0ULL || rel >= 0xb164f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b164f0 size=112 callers=0 calls=1
   calls: sub_b08430
*/
void sub_b164f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb164f0ULL || rel >= 0xb16560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b16560 size=64 callers=0 calls=0
*/
void sub_b16560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb16560ULL || rel >= 0xb165a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

