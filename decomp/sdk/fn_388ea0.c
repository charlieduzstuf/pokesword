/* sdk functions 00388ea0..003a5130 (39 of 53). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00388ea0 size=32 callers=0 calls=0
*/
void sub_388ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388ea0ULL || rel >= 0x388ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388ec0 size=48 callers=0 calls=0
*/
void sub_388ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388ec0ULL || rel >= 0x388ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388ef0 size=32 callers=0 calls=0
*/
void sub_388ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388ef0ULL || rel >= 0x388f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388f10 size=64 callers=0 calls=0
*/
void sub_388f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388f10ULL || rel >= 0x388f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388f50 size=48 callers=0 calls=0
*/
void sub_388f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388f50ULL || rel >= 0x388f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388f80 size=16 callers=0 calls=0
*/
void sub_388f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388f80ULL || rel >= 0x388f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388f90 size=16 callers=0 calls=0
*/
void sub_388f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388f90ULL || rel >= 0x388fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388fa0 size=368 callers=0 calls=0
*/
void sub_388fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388fa0ULL || rel >= 0x389110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389110 size=352 callers=0 calls=0
*/
void sub_389110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389110ULL || rel >= 0x389270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389270 size=560 callers=0 calls=0
*/
void sub_389270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389270ULL || rel >= 0x3894a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003894a0 size=384 callers=0 calls=0
*/
void sub_3894a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3894a0ULL || rel >= 0x389620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389620 size=560 callers=0 calls=0
*/
void sub_389620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389620ULL || rel >= 0x389850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389850 size=368 callers=0 calls=0
*/
void sub_389850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389850ULL || rel >= 0x3899c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003899c0 size=544 callers=0 calls=0
*/
void sub_3899c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3899c0ULL || rel >= 0x389be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389be0 size=528 callers=0 calls=0
*/
void sub_389be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389be0ULL || rel >= 0x389df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389df0 size=368 callers=0 calls=0
*/
void sub_389df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389df0ULL || rel >= 0x389f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389f60 size=512 callers=0 calls=0
*/
void sub_389f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389f60ULL || rel >= 0x38a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a160 size=576 callers=0 calls=0
*/
void sub_38a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a160ULL || rel >= 0x38a3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a3a0 size=560 callers=0 calls=0
*/
void sub_38a3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a3a0ULL || rel >= 0x38a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a5d0 size=16 callers=0 calls=0
*/
void sub_38a5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a5d0ULL || rel >= 0x38a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a5e0 size=160 callers=0 calls=0
*/
void sub_38a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a5e0ULL || rel >= 0x38a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a680 size=224 callers=0 calls=0
*/
void sub_38a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a680ULL || rel >= 0x38a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a760 size=160 callers=0 calls=0
*/
void sub_38a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a760ULL || rel >= 0x38a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a800 size=96 callers=0 calls=0
*/
void sub_38a800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a800ULL || rel >= 0x38a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a860 size=128 callers=0 calls=0
*/
void sub_38a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a860ULL || rel >= 0x38a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a8e0 size=112 callers=0 calls=0
*/
void sub_38a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a8e0ULL || rel >= 0x38a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a950 size=384 callers=0 calls=0
*/
void sub_38a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a950ULL || rel >= 0x38aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038aad0 size=256 callers=0 calls=0
*/
void sub_38aad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38aad0ULL || rel >= 0x38abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038abd0 size=288 callers=0 calls=0
*/
void sub_38abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38abd0ULL || rel >= 0x38acf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038acf0 size=688 callers=0 calls=0
*/
void sub_38acf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38acf0ULL || rel >= 0x38afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038afa0 size=112 callers=0 calls=1
   calls: sub_38b010
*/
void sub_38afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38afa0ULL || rel >= 0x38b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b010 size=192 callers=5 calls=1
   calls: sub_1c0
*/
void sub_38b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b010ULL || rel >= 0x38b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b0d0 size=32 callers=0 calls=0
*/
void sub_38b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b0d0ULL || rel >= 0x38b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b0f0 size=16 callers=0 calls=0
*/
void sub_38b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b0f0ULL || rel >= 0x38b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b100 size=32 callers=0 calls=0
*/
void sub_38b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b100ULL || rel >= 0x38b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b120 size=32 callers=0 calls=0
*/
void sub_38b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b120ULL || rel >= 0x38b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b140 size=32 callers=0 calls=1
   calls: sub_38b010
*/
void sub_38b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b140ULL || rel >= 0x38b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b160 size=16 callers=0 calls=0
*/
void sub_38b160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b160ULL || rel >= 0x38b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b170 size=16 callers=0 calls=0
*/
void sub_38b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b170ULL || rel >= 0x38b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b180 size=16 callers=0 calls=0
*/
void sub_38b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b180ULL || rel >= 0x38b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b190 size=80 callers=0 calls=0
*/
void sub_38b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b190ULL || rel >= 0x38b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b1e0 size=128 callers=0 calls=0
*/
void sub_38b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b1e0ULL || rel >= 0x38b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b260 size=128 callers=0 calls=0
*/
void sub_38b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b260ULL || rel >= 0x38b2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b2e0 size=464 callers=0 calls=0
*/
void sub_38b2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b2e0ULL || rel >= 0x38b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b4b0 size=416 callers=0 calls=0
*/
void sub_38b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b4b0ULL || rel >= 0x38b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b650 size=16 callers=0 calls=0
*/
void sub_38b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b650ULL || rel >= 0x38b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b660 size=176 callers=0 calls=0
*/
void sub_38b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b660ULL || rel >= 0x38b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b710 size=16 callers=0 calls=0
*/
void sub_38b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b710ULL || rel >= 0x38b720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b720 size=176 callers=0 calls=0
*/
void sub_38b720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b720ULL || rel >= 0x38b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b7d0 size=32 callers=0 calls=0
*/
void sub_38b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b7d0ULL || rel >= 0x38b7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b7f0 size=32 callers=0 calls=0
*/
void sub_38b7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b7f0ULL || rel >= 0x38b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b810 size=16 callers=0 calls=0
*/
void sub_38b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b810ULL || rel >= 0x38b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b820 size=16 callers=0 calls=0
*/
void sub_38b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b820ULL || rel >= 0x38b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b830 size=176 callers=0 calls=0
*/
void sub_38b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b830ULL || rel >= 0x38b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b8e0 size=16 callers=0 calls=0
*/
void sub_38b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b8e0ULL || rel >= 0x38b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b8f0 size=176 callers=0 calls=0
*/
void sub_38b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b8f0ULL || rel >= 0x38b9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b9a0 size=16 callers=0 calls=0
*/
void sub_38b9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b9a0ULL || rel >= 0x38b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b9b0 size=32 callers=0 calls=0
*/
void sub_38b9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b9b0ULL || rel >= 0x38b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b9d0 size=32 callers=0 calls=0
*/
void sub_38b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b9d0ULL || rel >= 0x38b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b9f0 size=32 callers=0 calls=0
*/
void sub_38b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b9f0ULL || rel >= 0x38ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ba10 size=32 callers=0 calls=0
*/
void sub_38ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ba10ULL || rel >= 0x38ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ba30 size=32 callers=0 calls=0
*/
void sub_38ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ba30ULL || rel >= 0x38ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ba50 size=32 callers=0 calls=0
*/
void sub_38ba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ba50ULL || rel >= 0x38ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ba70 size=16 callers=0 calls=0
*/
void sub_38ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ba70ULL || rel >= 0x38ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ba80 size=16 callers=0 calls=0
*/
void sub_38ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ba80ULL || rel >= 0x38ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ba90 size=96 callers=0 calls=0
*/
void sub_38ba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ba90ULL || rel >= 0x38baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038baf0 size=16 callers=0 calls=0
*/
void sub_38baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38baf0ULL || rel >= 0x38bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038bb00 size=288 callers=0 calls=0
*/
void sub_38bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38bb00ULL || rel >= 0x38bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038bc20 size=96 callers=0 calls=0
*/
void sub_38bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38bc20ULL || rel >= 0x38bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038bc80 size=48 callers=0 calls=0
*/
void sub_38bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38bc80ULL || rel >= 0x38bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038bcb0 size=48 callers=0 calls=0
*/
void sub_38bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38bcb0ULL || rel >= 0x38bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038bce0 size=16 callers=0 calls=0
*/
void sub_38bce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38bce0ULL || rel >= 0x38bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038bcf0 size=16 callers=0 calls=0
*/
void sub_38bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38bcf0ULL || rel >= 0x38bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038bd00 size=64 callers=0 calls=0
*/
void sub_38bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38bd00ULL || rel >= 0x38bd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038bd40 size=80 callers=0 calls=0
*/
void sub_38bd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38bd40ULL || rel >= 0x38bd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038bd90 size=976 callers=0 calls=0
*/
void sub_38bd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38bd90ULL || rel >= 0x38c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c160 size=16 callers=0 calls=0
*/
void sub_38c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c160ULL || rel >= 0x38c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c170 size=208 callers=0 calls=0
*/
void sub_38c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c170ULL || rel >= 0x38c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c240 size=208 callers=0 calls=0
*/
void sub_38c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c240ULL || rel >= 0x38c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c310 size=16 callers=0 calls=0
*/
void sub_38c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c310ULL || rel >= 0x38c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c320 size=752 callers=0 calls=0
*/
void sub_38c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c320ULL || rel >= 0x38c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c610 size=16 callers=0 calls=0
*/
void sub_38c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c610ULL || rel >= 0x38c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c620 size=16 callers=0 calls=0
*/
void sub_38c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c620ULL || rel >= 0x38c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c630 size=784 callers=0 calls=0
*/
void sub_38c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c630ULL || rel >= 0x38c940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c940 size=16 callers=0 calls=0
*/
void sub_38c940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c940ULL || rel >= 0x38c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c950 size=32 callers=0 calls=0
*/
void sub_38c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c950ULL || rel >= 0x38c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c970 size=800 callers=0 calls=0
*/
void sub_38c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c970ULL || rel >= 0x38cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038cc90 size=352 callers=0 calls=0
*/
void sub_38cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38cc90ULL || rel >= 0x38cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038cdf0 size=192 callers=0 calls=0
*/
void sub_38cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38cdf0ULL || rel >= 0x38ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ceb0 size=560 callers=0 calls=1
   calls: sub_38d0e0
*/
void sub_38ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ceb0ULL || rel >= 0x38d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d0e0 size=1008 callers=6 calls=0
*/
void sub_38d0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d0e0ULL || rel >= 0x38d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d4d0 size=304 callers=0 calls=0
*/
void sub_38d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d4d0ULL || rel >= 0x38d600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d600 size=352 callers=0 calls=0
*/
void sub_38d600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d600ULL || rel >= 0x38d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d760 size=192 callers=0 calls=0
*/
void sub_38d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d760ULL || rel >= 0x38d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d820 size=224 callers=0 calls=0
*/
void sub_38d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d820ULL || rel >= 0x38d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d900 size=272 callers=0 calls=0
*/
void sub_38d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d900ULL || rel >= 0x38da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038da10 size=784 callers=0 calls=0
*/
void sub_38da10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38da10ULL || rel >= 0x38dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038dd20 size=5936 callers=0 calls=2
   calls: sub_38d0e0, sub_38f6a0
*/
void sub_38dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38dd20ULL || rel >= 0x38f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038f450 size=176 callers=0 calls=0
*/
void sub_38f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f450ULL || rel >= 0x38f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038f500 size=416 callers=0 calls=0
*/
void sub_38f500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f500ULL || rel >= 0x38f6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038f6a0 size=1808 callers=1 calls=0
*/
void sub_38f6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f6a0ULL || rel >= 0x38fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038fdb0 size=720 callers=0 calls=0
*/
void sub_38fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38fdb0ULL || rel >= 0x390080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390080 size=1376 callers=0 calls=2
   calls: sub_38d0e0, sub_390cf0
*/
void sub_390080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390080ULL || rel >= 0x3905e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003905e0 size=1808 callers=0 calls=2
   calls: sub_38d0e0, sub_390cf0
*/
void sub_3905e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3905e0ULL || rel >= 0x390cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390cf0 size=624 callers=2 calls=0
*/
void sub_390cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390cf0ULL || rel >= 0x390f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390f60 size=256 callers=0 calls=0
*/
void sub_390f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390f60ULL || rel >= 0x391060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391060 size=4064 callers=0 calls=0
   ref: invalid block type
   ref: too many length or distance symbols
   ref: invalid code -- missing end-of-block
   ref: invalid distance too far back
   ref: invalid literal/lengths set
   ref: invalid distance code
   ref: invalid distances set
   ref: invalid bit length repeat
*/
void lengths_set(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391060ULL || rel >= 0x392040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00392040 size=112 callers=0 calls=0
*/
void sub_392040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x392040ULL || rel >= 0x3920b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003920b0 size=1968 callers=0 calls=0
   ref: invalid distance too far back
   ref: invalid distance code
   ref: invalid literal/length code
*/
void length_code(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3920b0ULL || rel >= 0x392860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00392860 size=208 callers=0 calls=0
*/
void sub_392860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x392860ULL || rel >= 0x392930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00392930 size=304 callers=0 calls=0
*/
void sub_392930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x392930ULL || rel >= 0x392a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00392a60 size=224 callers=0 calls=0
*/
void sub_392a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x392a60ULL || rel >= 0x392b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00392b40 size=576 callers=0 calls=0
*/
void sub_392b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x392b40ULL || rel >= 0x392d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00392d80 size=16 callers=0 calls=0
*/
void sub_392d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x392d80ULL || rel >= 0x392d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00392d90 size=224 callers=0 calls=0
*/
void sub_392d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x392d90ULL || rel >= 0x392e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00392e70 size=7632 callers=0 calls=0
   ref: invalid block type
   ref: incorrect header check
   ref: too many length or distance symbols
   ref: invalid code -- missing end-of-block
   ref: incorrect length check
   ref: invalid distance too far back
   ref: invalid literal/lengths set
   ref: invalid distance code
*/
void lengths_set_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x392e70ULL || rel >= 0x394c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394c40 size=240 callers=0 calls=0
*/
void sub_394c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394c40ULL || rel >= 0x394d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394d30 size=304 callers=0 calls=0
*/
void sub_394d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394d30ULL || rel >= 0x394e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394e60 size=464 callers=0 calls=0
*/
void sub_394e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394e60ULL || rel >= 0x395030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395030 size=144 callers=0 calls=0
*/
void sub_395030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395030ULL || rel >= 0x3950c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003950c0 size=704 callers=0 calls=0
*/
void sub_3950c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3950c0ULL || rel >= 0x395380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395380 size=144 callers=0 calls=0
*/
void sub_395380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395380ULL || rel >= 0x395410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395410 size=416 callers=0 calls=0
*/
void sub_395410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395410ULL || rel >= 0x3955b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003955b0 size=128 callers=0 calls=0
*/
void sub_3955b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3955b0ULL || rel >= 0x395630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395630 size=144 callers=0 calls=0
*/
void sub_395630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395630ULL || rel >= 0x3956c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003956c0 size=192 callers=0 calls=0
*/
void sub_3956c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3956c0ULL || rel >= 0x395780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395780 size=128 callers=0 calls=0
*/
void sub_395780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395780ULL || rel >= 0x395800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395800 size=1648 callers=0 calls=0
*/
void sub_395800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395800ULL || rel >= 0x395e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395e70 size=80 callers=0 calls=0
*/
void sub_395e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395e70ULL || rel >= 0x395ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395ec0 size=256 callers=3 calls=0
*/
void sub_395ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395ec0ULL || rel >= 0x395fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395fc0 size=368 callers=0 calls=0
*/
void sub_395fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395fc0ULL || rel >= 0x396130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396130 size=144 callers=0 calls=0
*/
void sub_396130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396130ULL || rel >= 0x3961c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003961c0 size=352 callers=0 calls=0
*/
void sub_3961c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3961c0ULL || rel >= 0x396320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396320 size=2272 callers=0 calls=4
   calls: sub_395ec0, sub_396c00, sub_397540, sub_3979e0
*/
void sub_396320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396320ULL || rel >= 0x396c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396c00 size=2368 callers=3 calls=0
*/
void sub_396c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396c00ULL || rel >= 0x397540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397540 size=1008 callers=2 calls=0
*/
void sub_397540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397540ULL || rel >= 0x397930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397930 size=176 callers=0 calls=0
*/
void sub_397930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397930ULL || rel >= 0x3979e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003979e0 size=1280 callers=2 calls=0
*/
void sub_3979e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3979e0ULL || rel >= 0x397ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397ee0 size=16 callers=0 calls=0
   ref: 1.2.11.f-NINTENDO-SDK-v1
*/
void f_1_2_11_f_NINTENDO_SDK_v1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397ee0ULL || rel >= 0x397ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397ef0 size=16 callers=0 calls=0
*/
void sub_397ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397ef0ULL || rel >= 0x397f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397f00 size=32 callers=0 calls=0
*/
void sub_397f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397f00ULL || rel >= 0x397f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397f20 size=16 callers=0 calls=0
*/
void sub_397f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397f20ULL || rel >= 0x397f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397f30 size=16 callers=0 calls=0
*/
void sub_397f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397f30ULL || rel >= 0x397f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397f40 size=16 callers=0 calls=0
   ref: SDK MW+Nintendo+NintendoSDK_libz-7_3_2-Release
*/
void SDK_MW_Nintendo_NintendoSDK_libz_7_3_2_Release(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397f40ULL || rel >= 0x397f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397f50 size=912 callers=0 calls=0
   ref: ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/
   ref: ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_
*/
void unnamed_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397f50ULL || rel >= 0x3982e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003982e0 size=16 callers=0 calls=0
*/
void sub_3982e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3982e0ULL || rel >= 0x3982f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003982f0 size=720 callers=0 calls=0
*/
void sub_3982f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3982f0ULL || rel >= 0x3985c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003985c0 size=96 callers=0 calls=0
*/
void sub_3985c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3985c0ULL || rel >= 0x398620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398620 size=16 callers=0 calls=0
*/
void sub_398620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398620ULL || rel >= 0x398630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398630 size=48 callers=0 calls=0
*/
void sub_398630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398630ULL || rel >= 0x398660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398660 size=16 callers=0 calls=0
*/
void sub_398660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398660ULL || rel >= 0x398670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398670 size=32 callers=0 calls=0
*/
void sub_398670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398670ULL || rel >= 0x398690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398690 size=16 callers=0 calls=0
*/
void sub_398690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398690ULL || rel >= 0x3986a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003986a0 size=16 callers=0 calls=0
*/
void sub_3986a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3986a0ULL || rel >= 0x3986b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003986b0 size=16 callers=0 calls=0
*/
void sub_3986b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3986b0ULL || rel >= 0x3986c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003986c0 size=16 callers=0 calls=0
*/
void sub_3986c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3986c0ULL || rel >= 0x3986d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003986d0 size=16 callers=0 calls=0
*/
void sub_3986d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3986d0ULL || rel >= 0x3986e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003986e0 size=16 callers=0 calls=0
*/
void sub_3986e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3986e0ULL || rel >= 0x3986f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003986f0 size=16 callers=0 calls=0
*/
void sub_3986f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3986f0ULL || rel >= 0x398700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398700 size=16 callers=0 calls=0
*/
void sub_398700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398700ULL || rel >= 0x398710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398710 size=80 callers=0 calls=0
*/
void sub_398710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398710ULL || rel >= 0x398760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398760 size=112 callers=0 calls=0
*/
void sub_398760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398760ULL || rel >= 0x3987d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003987d0 size=32 callers=0 calls=0
*/
void sub_3987d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3987d0ULL || rel >= 0x3987f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003987f0 size=32 callers=0 calls=0
*/
void sub_3987f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3987f0ULL || rel >= 0x398810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398810 size=32 callers=0 calls=0
*/
void sub_398810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398810ULL || rel >= 0x398830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398830 size=32 callers=0 calls=0
*/
void sub_398830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398830ULL || rel >= 0x398850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398850 size=32 callers=0 calls=0
*/
void sub_398850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398850ULL || rel >= 0x398870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398870 size=96 callers=0 calls=0
*/
void sub_398870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398870ULL || rel >= 0x3988d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003988d0 size=64 callers=0 calls=0
*/
void sub_3988d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3988d0ULL || rel >= 0x398910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398910 size=96 callers=0 calls=0
*/
void sub_398910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398910ULL || rel >= 0x398970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398970 size=64 callers=0 calls=0
*/
void sub_398970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398970ULL || rel >= 0x3989b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003989b0 size=32 callers=0 calls=0
*/
void sub_3989b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3989b0ULL || rel >= 0x3989d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003989d0 size=32 callers=0 calls=0
*/
void sub_3989d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3989d0ULL || rel >= 0x3989f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003989f0 size=32 callers=0 calls=0
*/
void sub_3989f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3989f0ULL || rel >= 0x398a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398a10 size=16 callers=0 calls=0
*/
void sub_398a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398a10ULL || rel >= 0x398a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398a20 size=32 callers=0 calls=0
*/
void sub_398a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398a20ULL || rel >= 0x398a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398a40 size=16 callers=0 calls=0
*/
void sub_398a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398a40ULL || rel >= 0x398a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398a50 size=16 callers=0 calls=0
*/
void sub_398a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398a50ULL || rel >= 0x398a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398a60 size=16 callers=0 calls=0
*/
void sub_398a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398a60ULL || rel >= 0x398a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398a70 size=16 callers=0 calls=0
*/
void sub_398a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398a70ULL || rel >= 0x398a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398a80 size=32 callers=0 calls=0
*/
void sub_398a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398a80ULL || rel >= 0x398aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398aa0 size=16 callers=0 calls=0
*/
void sub_398aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398aa0ULL || rel >= 0x398ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398ab0 size=368 callers=0 calls=0
*/
void sub_398ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398ab0ULL || rel >= 0x398c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398c20 size=384 callers=0 calls=0
*/
void sub_398c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398c20ULL || rel >= 0x398da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398da0 size=16 callers=0 calls=0
*/
void sub_398da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398da0ULL || rel >= 0x398db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398db0 size=16 callers=0 calls=0
*/
void sub_398db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398db0ULL || rel >= 0x398dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398dc0 size=16 callers=0 calls=0
*/
void sub_398dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398dc0ULL || rel >= 0x398dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398dd0 size=32 callers=0 calls=0
*/
void sub_398dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398dd0ULL || rel >= 0x398df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398df0 size=16 callers=0 calls=0
*/
void sub_398df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398df0ULL || rel >= 0x398e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398e00 size=16 callers=0 calls=0
*/
void sub_398e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398e00ULL || rel >= 0x398e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398e10 size=16 callers=0 calls=0
*/
void sub_398e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398e10ULL || rel >= 0x398e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398e20 size=144 callers=0 calls=0
*/
void sub_398e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398e20ULL || rel >= 0x398eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398eb0 size=112 callers=0 calls=0
*/
void sub_398eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398eb0ULL || rel >= 0x398f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398f20 size=128 callers=0 calls=0
*/
void sub_398f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398f20ULL || rel >= 0x398fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398fa0 size=128 callers=0 calls=0
*/
void sub_398fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398fa0ULL || rel >= 0x399020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399020 size=80 callers=0 calls=0
*/
void sub_399020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399020ULL || rel >= 0x399070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399070 size=128 callers=0 calls=0
*/
void sub_399070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399070ULL || rel >= 0x3990f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003990f0 size=80 callers=0 calls=0
*/
void sub_3990f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3990f0ULL || rel >= 0x399140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399140 size=80 callers=0 calls=0
*/
void sub_399140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399140ULL || rel >= 0x399190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399190 size=80 callers=0 calls=0
*/
void sub_399190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399190ULL || rel >= 0x3991e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003991e0 size=144 callers=0 calls=0
*/
void sub_3991e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3991e0ULL || rel >= 0x399270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399270 size=592 callers=0 calls=0
*/
void sub_399270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399270ULL || rel >= 0x3994c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003994c0 size=416 callers=0 calls=0
*/
void sub_3994c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3994c0ULL || rel >= 0x399660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399660 size=96 callers=0 calls=0
*/
void sub_399660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399660ULL || rel >= 0x3996c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003996c0 size=64 callers=0 calls=1
   calls: f_1_2_11_f_NINTENDO_SDK_v1_2
*/
void sub_3996c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3996c0ULL || rel >= 0x399700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399700 size=320 callers=6 calls=0
   ref: 1.2.11.f-NINTENDO-SDK-v1
*/
void f_1_2_11_f_NINTENDO_SDK_v1_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399700ULL || rel >= 0x399840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399840 size=48 callers=0 calls=1
   calls: f_1_2_11_f_NINTENDO_SDK_v1_2
*/
void sub_399840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399840ULL || rel >= 0x399870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399870 size=64 callers=0 calls=1
   calls: f_1_2_11_f_NINTENDO_SDK_v1_2
*/
void sub_399870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399870ULL || rel >= 0x3998b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003998b0 size=48 callers=0 calls=1
   calls: f_1_2_11_f_NINTENDO_SDK_v1_2
*/
void sub_3998b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3998b0ULL || rel >= 0x3998e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003998e0 size=64 callers=0 calls=1
   calls: f_1_2_11_f_NINTENDO_SDK_v1_2
*/
void sub_3998e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3998e0ULL || rel >= 0x399920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399920 size=48 callers=0 calls=1
   calls: f_1_2_11_f_NINTENDO_SDK_v1_2
*/
void sub_399920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399920ULL || rel >= 0x399950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399950 size=48 callers=0 calls=0
*/
void sub_399950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399950ULL || rel >= 0x399980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399980 size=16 callers=0 calls=0
*/
void sub_399980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399980ULL || rel >= 0x399990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399990 size=208 callers=0 calls=0
*/
void sub_399990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399990ULL || rel >= 0x399a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399a60 size=16 callers=0 calls=0
*/
void sub_399a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399a60ULL || rel >= 0x399a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399a70 size=16 callers=0 calls=0
*/
void sub_399a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399a70ULL || rel >= 0x399a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399a80 size=256 callers=0 calls=0
   ref: 1.2.11.f-NINTENDO-SDK-v1
*/
void f_1_2_11_f_NINTENDO_SDK_v1_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399a80ULL || rel >= 0x399b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399b80 size=16 callers=0 calls=0
*/
void sub_399b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399b80ULL || rel >= 0x399b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399b90 size=16 callers=0 calls=0
*/
void sub_399b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399b90ULL || rel >= 0x399ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399ba0 size=192 callers=0 calls=0
*/
void sub_399ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399ba0ULL || rel >= 0x399c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399c60 size=64 callers=0 calls=0
*/
void sub_399c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399c60ULL || rel >= 0x399ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399ca0 size=224 callers=0 calls=0
*/
void sub_399ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399ca0ULL || rel >= 0x399d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399d80 size=192 callers=0 calls=0
*/
void sub_399d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399d80ULL || rel >= 0x399e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399e40 size=112 callers=0 calls=0
*/
void sub_399e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399e40ULL || rel >= 0x399eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399eb0 size=304 callers=0 calls=0
*/
void sub_399eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399eb0ULL || rel >= 0x399fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399fe0 size=368 callers=0 calls=0
*/
void sub_399fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399fe0ULL || rel >= 0x39a150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a150 size=64 callers=0 calls=0
*/
void sub_39a150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a150ULL || rel >= 0x39a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a190 size=192 callers=0 calls=0
*/
void sub_39a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a190ULL || rel >= 0x39a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a250 size=96 callers=0 calls=0
*/
void sub_39a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a250ULL || rel >= 0x39a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a2b0 size=16 callers=0 calls=0
*/
void sub_39a2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a2b0ULL || rel >= 0x39a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a2c0 size=16 callers=0 calls=0
*/
void sub_39a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a2c0ULL || rel >= 0x39a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a2d0 size=16 callers=0 calls=0
*/
void sub_39a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a2d0ULL || rel >= 0x39a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a2e0 size=16 callers=0 calls=0
*/
void sub_39a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a2e0ULL || rel >= 0x39a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a2f0 size=16 callers=0 calls=0
*/
void sub_39a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a2f0ULL || rel >= 0x39a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a300 size=16 callers=0 calls=0
*/
void sub_39a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a300ULL || rel >= 0x39a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a310 size=16 callers=0 calls=0
*/
void sub_39a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a310ULL || rel >= 0x39a320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a320 size=16 callers=0 calls=0
*/
void sub_39a320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a320ULL || rel >= 0x39a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a330 size=16 callers=0 calls=0
*/
void sub_39a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a330ULL || rel >= 0x39a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a340 size=16 callers=0 calls=0
*/
void sub_39a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a340ULL || rel >= 0x39a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a350 size=16 callers=0 calls=0
*/
void sub_39a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a350ULL || rel >= 0x39a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a360 size=16 callers=0 calls=0
*/
void sub_39a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a360ULL || rel >= 0x39a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a370 size=16 callers=0 calls=0
*/
void sub_39a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a370ULL || rel >= 0x39a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a380 size=16 callers=0 calls=0
*/
void sub_39a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a380ULL || rel >= 0x39a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a390 size=16 callers=0 calls=0
*/
void sub_39a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a390ULL || rel >= 0x39a3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a3a0 size=16 callers=0 calls=0
*/
void sub_39a3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a3a0ULL || rel >= 0x39a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a3b0 size=16 callers=0 calls=0
*/
void sub_39a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a3b0ULL || rel >= 0x39a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a3c0 size=16 callers=0 calls=0
*/
void sub_39a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a3c0ULL || rel >= 0x39a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a3d0 size=16 callers=0 calls=0
*/
void sub_39a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a3d0ULL || rel >= 0x39a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a3e0 size=16 callers=0 calls=0
*/
void sub_39a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a3e0ULL || rel >= 0x39a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a3f0 size=16 callers=0 calls=0
*/
void sub_39a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a3f0ULL || rel >= 0x39a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a400 size=16 callers=0 calls=0
*/
void sub_39a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a400ULL || rel >= 0x39a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a410 size=16 callers=0 calls=0
*/
void sub_39a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a410ULL || rel >= 0x39a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a420 size=16 callers=0 calls=0
*/
void sub_39a420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a420ULL || rel >= 0x39a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a430 size=16 callers=0 calls=0
*/
void sub_39a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a430ULL || rel >= 0x39a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a440 size=16 callers=0 calls=0
*/
void sub_39a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a440ULL || rel >= 0x39a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a450 size=16 callers=0 calls=0
*/
void sub_39a450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a450ULL || rel >= 0x39a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a460 size=16 callers=0 calls=0
*/
void sub_39a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a460ULL || rel >= 0x39a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a470 size=16 callers=0 calls=0
*/
void sub_39a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a470ULL || rel >= 0x39a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a480 size=16 callers=0 calls=0
*/
void sub_39a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a480ULL || rel >= 0x39a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a490 size=16 callers=0 calls=0
*/
void sub_39a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a490ULL || rel >= 0x39a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a4a0 size=16 callers=0 calls=0
*/
void sub_39a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a4a0ULL || rel >= 0x39a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a4b0 size=16 callers=0 calls=0
*/
void sub_39a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a4b0ULL || rel >= 0x39a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a4c0 size=16 callers=0 calls=0
*/
void sub_39a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a4c0ULL || rel >= 0x39a4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a4d0 size=768 callers=0 calls=0
*/
void sub_39a4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a4d0ULL || rel >= 0x39a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a7d0 size=192 callers=0 calls=0
*/
void sub_39a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a7d0ULL || rel >= 0x39a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a890 size=176 callers=0 calls=0
*/
void sub_39a890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a890ULL || rel >= 0x39a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a940 size=256 callers=0 calls=0
*/
void sub_39a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a940ULL || rel >= 0x39aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039aa40 size=144 callers=0 calls=0
   ref: 1.2.11.f-NINTENDO-SDK-v1
*/
void f_1_2_11_f_NINTENDO_SDK_v1_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39aa40ULL || rel >= 0x39aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039aad0 size=144 callers=0 calls=0
   ref: 1.2.11.f-NINTENDO-SDK-v1
*/
void f_1_2_11_f_NINTENDO_SDK_v1_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39aad0ULL || rel >= 0x39ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ab60 size=144 callers=0 calls=0
   ref: 1.2.11.f-NINTENDO-SDK-v1
*/
void f_1_2_11_f_NINTENDO_SDK_v1_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ab60ULL || rel >= 0x39abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039abf0 size=144 callers=0 calls=0
   ref: 1.2.11.f-NINTENDO-SDK-v1
*/
void f_1_2_11_f_NINTENDO_SDK_v1_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39abf0ULL || rel >= 0x39ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ac80 size=144 callers=0 calls=0
   ref: 1.2.11.f-NINTENDO-SDK-v1
*/
void f_1_2_11_f_NINTENDO_SDK_v1_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ac80ULL || rel >= 0x39ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ad10 size=144 callers=0 calls=0
   ref: 1.2.11.f-NINTENDO-SDK-v1
*/
void f_1_2_11_f_NINTENDO_SDK_v1_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ad10ULL || rel >= 0x39ada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ada0 size=16 callers=0 calls=0
*/
void sub_39ada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ada0ULL || rel >= 0x39adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039adb0 size=240 callers=0 calls=0
*/
void sub_39adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39adb0ULL || rel >= 0x39aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039aea0 size=16 callers=0 calls=0
*/
void sub_39aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39aea0ULL || rel >= 0x39aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039aeb0 size=16 callers=0 calls=0
*/
void sub_39aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39aeb0ULL || rel >= 0x39aec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039aec0 size=144 callers=0 calls=0
   ref: 1.2.11.f-NINTENDO-SDK-v1
*/
void f_1_2_11_f_NINTENDO_SDK_v1_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39aec0ULL || rel >= 0x39af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039af50 size=144 callers=0 calls=0
   ref: 1.2.11.f-NINTENDO-SDK-v1
*/
void f_1_2_11_f_NINTENDO_SDK_v1_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39af50ULL || rel >= 0x39afe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039afe0 size=144 callers=0 calls=0
   ref: 1.2.11.f-NINTENDO-SDK-v1
*/
void f_1_2_11_f_NINTENDO_SDK_v1_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39afe0ULL || rel >= 0x39b070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b070 size=16 callers=0 calls=0
*/
void sub_39b070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b070ULL || rel >= 0x39b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b080 size=304 callers=0 calls=0
*/
void sub_39b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b080ULL || rel >= 0x39b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b1b0 size=16 callers=0 calls=0
*/
void sub_39b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b1b0ULL || rel >= 0x39b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b1c0 size=16 callers=0 calls=0
*/
void sub_39b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b1c0ULL || rel >= 0x39b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b1d0 size=144 callers=0 calls=0
*/
void sub_39b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b1d0ULL || rel >= 0x39b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b260 size=1968 callers=0 calls=0
*/
void sub_39b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b260ULL || rel >= 0x39ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ba10 size=80 callers=0 calls=0
*/
void sub_39ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ba10ULL || rel >= 0x39ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ba60 size=96 callers=0 calls=0
*/
void sub_39ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ba60ULL || rel >= 0x39bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039bac0 size=80 callers=0 calls=0
*/
void sub_39bac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39bac0ULL || rel >= 0x39bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039bb10 size=240 callers=0 calls=0
*/
void sub_39bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39bb10ULL || rel >= 0x39bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039bc00 size=80 callers=0 calls=0
*/
void sub_39bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39bc00ULL || rel >= 0x39bc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039bc50 size=96 callers=0 calls=0
*/
void sub_39bc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39bc50ULL || rel >= 0x39bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039bcb0 size=80 callers=0 calls=0
*/
void sub_39bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39bcb0ULL || rel >= 0x39bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039bd00 size=256 callers=0 calls=0
*/
void sub_39bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39bd00ULL || rel >= 0x39be00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039be00 size=432 callers=0 calls=0
*/
void sub_39be00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39be00ULL || rel >= 0x39bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039bfb0 size=48 callers=0 calls=0
*/
void sub_39bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39bfb0ULL || rel >= 0x39bfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039bfe0 size=272 callers=0 calls=0
*/
void sub_39bfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39bfe0ULL || rel >= 0x39c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c0f0 size=352 callers=0 calls=0
*/
void sub_39c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c0f0ULL || rel >= 0x39c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c250 size=48 callers=0 calls=0
*/
void sub_39c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c250ULL || rel >= 0x39c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c280 size=752 callers=0 calls=0
*/
void sub_39c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c280ULL || rel >= 0x39c570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c570 size=48 callers=0 calls=0
*/
void sub_39c570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c570ULL || rel >= 0x39c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c5a0 size=64 callers=0 calls=0
*/
void sub_39c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c5a0ULL || rel >= 0x39c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c5e0 size=64 callers=0 calls=0
*/
void sub_39c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c5e0ULL || rel >= 0x39c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c620 size=80 callers=0 calls=0
*/
void sub_39c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c620ULL || rel >= 0x39c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c670 size=96 callers=0 calls=0
*/
void sub_39c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c670ULL || rel >= 0x39c6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c6d0 size=80 callers=0 calls=0
*/
void sub_39c6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c6d0ULL || rel >= 0x39c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c720 size=80 callers=0 calls=0
*/
void sub_39c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c720ULL || rel >= 0x39c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c770 size=432 callers=0 calls=0
*/
void sub_39c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c770ULL || rel >= 0x39c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c920 size=80 callers=0 calls=0
*/
void sub_39c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c920ULL || rel >= 0x39c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c970 size=80 callers=0 calls=0
*/
void sub_39c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c970ULL || rel >= 0x39c9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c9c0 size=96 callers=0 calls=0
*/
void sub_39c9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c9c0ULL || rel >= 0x39ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ca20 size=80 callers=0 calls=0
*/
void sub_39ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ca20ULL || rel >= 0x39ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ca70 size=80 callers=0 calls=0
*/
void sub_39ca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ca70ULL || rel >= 0x39cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039cac0 size=16 callers=0 calls=0
*/
void sub_39cac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39cac0ULL || rel >= 0x39cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039cad0 size=416 callers=0 calls=0
*/
void sub_39cad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39cad0ULL || rel >= 0x39cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039cc70 size=96 callers=0 calls=0
*/
void sub_39cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39cc70ULL || rel >= 0x39ccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ccd0 size=96 callers=0 calls=0
*/
void sub_39ccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ccd0ULL || rel >= 0x39cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039cd30 size=16 callers=0 calls=0
*/
void sub_39cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39cd30ULL || rel >= 0x39cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039cd40 size=16 callers=0 calls=0
   ref: SDK MW+Nintendo+NintendoSdk_nnSdk-7_3_2-Release
*/
void SDK_MW_Nintendo_NintendoSdk_nnSdk_7_3_2_Release(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39cd40ULL || rel >= 0x39cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039cd50 size=160 callers=0 calls=0
*/
void sub_39cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39cd50ULL || rel >= 0x39cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039cdf0 size=496 callers=0 calls=0
*/
void sub_39cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39cdf0ULL || rel >= 0x39cfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039cfe0 size=512 callers=0 calls=0
*/
void sub_39cfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39cfe0ULL || rel >= 0x39d1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d1e0 size=160 callers=0 calls=0
*/
void sub_39d1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d1e0ULL || rel >= 0x39d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d280 size=160 callers=0 calls=0
*/
void sub_39d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d280ULL || rel >= 0x39d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d320 size=16 callers=0 calls=0
*/
void sub_39d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d320ULL || rel >= 0x39d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d330 size=16 callers=0 calls=0
*/
void sub_39d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d330ULL || rel >= 0x39d340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d340 size=112 callers=0 calls=0
*/
void sub_39d340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d340ULL || rel >= 0x39d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d3b0 size=416 callers=0 calls=0
*/
void sub_39d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d3b0ULL || rel >= 0x39d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d550 size=32 callers=0 calls=0
*/
void sub_39d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d550ULL || rel >= 0x39d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d570 size=400 callers=0 calls=0
*/
void sub_39d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d570ULL || rel >= 0x39d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d700 size=384 callers=0 calls=0
*/
void sub_39d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d700ULL || rel >= 0x39d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d880 size=80 callers=0 calls=1
   calls: null_5
*/
void sub_39d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d880ULL || rel >= 0x39d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d8d0 size=3600 callers=4 calls=0
   ref: (null)
*/
void null_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d8d0ULL || rel >= 0x39e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e6e0 size=128 callers=0 calls=0
*/
void sub_39e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e6e0ULL || rel >= 0x39e760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e760 size=112 callers=0 calls=1
   calls: null_5
*/
void sub_39e760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e760ULL || rel >= 0x39e7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e7d0 size=112 callers=0 calls=0
*/
void sub_39e7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e7d0ULL || rel >= 0x39e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e840 size=128 callers=0 calls=0
*/
void sub_39e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e840ULL || rel >= 0x39e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e8c0 size=80 callers=0 calls=1
   calls: null_5
*/
void sub_39e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e8c0ULL || rel >= 0x39e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e910 size=128 callers=0 calls=0
*/
void sub_39e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e910ULL || rel >= 0x39e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e990 size=112 callers=0 calls=1
   calls: null_5
*/
void sub_39e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e990ULL || rel >= 0x39ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ea00 size=128 callers=0 calls=0
*/
void sub_39ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ea00ULL || rel >= 0x39ea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ea80 size=2144 callers=0 calls=1
   calls: sub_39f2e0
*/
void sub_39ea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ea80ULL || rel >= 0x39f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f2e0 size=832 callers=1 calls=0
*/
void sub_39f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f2e0ULL || rel >= 0x39f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f620 size=96 callers=0 calls=0
*/
void sub_39f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f620ULL || rel >= 0x39f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f680 size=64 callers=0 calls=1
   calls: sub_39f6c0
*/
void sub_39f680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f680ULL || rel >= 0x39f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f6c0 size=544 callers=8 calls=0
*/
void sub_39f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f6c0ULL || rel >= 0x39f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f8e0 size=64 callers=0 calls=1
   calls: sub_39f6c0
*/
void sub_39f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f8e0ULL || rel >= 0x39f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f920 size=112 callers=0 calls=1
   calls: sub_39f6c0
*/
void sub_39f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f920ULL || rel >= 0x39f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f990 size=112 callers=0 calls=1
   calls: sub_39f6c0
*/
void sub_39f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f990ULL || rel >= 0x39fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fa00 size=64 callers=0 calls=1
   calls: sub_39fa40
*/
void sub_39fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fa00ULL || rel >= 0x39fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fa40 size=496 callers=10 calls=0
*/
void sub_39fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fa40ULL || rel >= 0x39fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fc30 size=64 callers=0 calls=1
   calls: sub_39fa40
*/
void sub_39fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fc30ULL || rel >= 0x39fc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fc70 size=176 callers=0 calls=1
   calls: sub_39fa40
*/
void sub_39fc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fc70ULL || rel >= 0x39fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fd20 size=176 callers=0 calls=1
   calls: sub_39fa40
*/
void sub_39fd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fd20ULL || rel >= 0x39fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fdd0 size=160 callers=0 calls=1
   calls: sub_39f6c0
*/
void sub_39fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fdd0ULL || rel >= 0x39fe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fe70 size=176 callers=0 calls=1
   calls: sub_39f6c0
*/
void sub_39fe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fe70ULL || rel >= 0x39ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ff20 size=160 callers=0 calls=1
   calls: sub_39fa40
*/
void sub_39ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ff20ULL || rel >= 0x39ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ffc0 size=160 callers=0 calls=1
   calls: sub_39fa40
*/
void sub_39ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ffc0ULL || rel >= 0x3a0060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0060 size=256 callers=0 calls=1
   calls: sub_39fa40
*/
void sub_3a0060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0060ULL || rel >= 0x3a0160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0160 size=256 callers=0 calls=1
   calls: sub_39fa40
*/
void sub_3a0160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0160ULL || rel >= 0x3a0260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0260 size=64 callers=0 calls=1
   calls: sub_3a02a0
*/
void sub_3a0260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0260ULL || rel >= 0x3a02a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a02a0 size=512 callers=6 calls=0
*/
void sub_3a02a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a02a0ULL || rel >= 0x3a04a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a04a0 size=64 callers=0 calls=1
   calls: sub_3a02a0
*/
void sub_3a04a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a04a0ULL || rel >= 0x3a04e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a04e0 size=112 callers=0 calls=1
   calls: sub_3a02a0
*/
void sub_3a04e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a04e0ULL || rel >= 0x3a0550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0550 size=112 callers=0 calls=1
   calls: sub_3a02a0
*/
void sub_3a0550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0550ULL || rel >= 0x3a05c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a05c0 size=64 callers=0 calls=1
   calls: sub_3a0600
*/
void sub_3a05c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a05c0ULL || rel >= 0x3a0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0600 size=400 callers=8 calls=0
*/
void sub_3a0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0600ULL || rel >= 0x3a0790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0790 size=64 callers=0 calls=1
   calls: sub_3a0600
*/
void sub_3a0790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0790ULL || rel >= 0x3a07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a07d0 size=192 callers=0 calls=1
   calls: sub_3a0600
*/
void sub_3a07d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a07d0ULL || rel >= 0x3a0890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0890 size=192 callers=0 calls=1
   calls: sub_3a0600
*/
void sub_3a0890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0890ULL || rel >= 0x3a0950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0950 size=160 callers=0 calls=1
   calls: sub_3a02a0
*/
void sub_3a0950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0950ULL || rel >= 0x3a09f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a09f0 size=176 callers=0 calls=1
   calls: sub_3a02a0
*/
void sub_3a09f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a09f0ULL || rel >= 0x3a0aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0aa0 size=160 callers=0 calls=1
   calls: sub_3a0600
*/
void sub_3a0aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0aa0ULL || rel >= 0x3a0b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0b40 size=160 callers=0 calls=1
   calls: sub_3a0600
*/
void sub_3a0b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0b40ULL || rel >= 0x3a0be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0be0 size=256 callers=0 calls=1
   calls: sub_3a0600
*/
void sub_3a0be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0be0ULL || rel >= 0x3a0ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0ce0 size=256 callers=0 calls=1
   calls: sub_3a0600
*/
void sub_3a0ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0ce0ULL || rel >= 0x3a0de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0de0 size=224 callers=0 calls=1
   calls: sub_39f6c0
*/
void sub_3a0de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0de0ULL || rel >= 0x3a0ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0ec0 size=224 callers=0 calls=1
   calls: sub_39f6c0
*/
void sub_3a0ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0ec0ULL || rel >= 0x3a0fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0fa0 size=224 callers=0 calls=1
   calls: sub_39fa40
*/
void sub_3a0fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0fa0ULL || rel >= 0x3a1080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1080 size=224 callers=0 calls=1
   calls: sub_39fa40
*/
void sub_3a1080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1080ULL || rel >= 0x3a1160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1160 size=320 callers=0 calls=0
*/
void sub_3a1160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1160ULL || rel >= 0x3a12a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a12a0 size=16 callers=0 calls=0
*/
void sub_3a12a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a12a0ULL || rel >= 0x3a12b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a12b0 size=224 callers=0 calls=0
*/
void sub_3a12b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a12b0ULL || rel >= 0x3a1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1390 size=224 callers=0 calls=0
*/
void sub_3a1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1390ULL || rel >= 0x3a1470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1470 size=528 callers=0 calls=0
*/
void sub_3a1470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1470ULL || rel >= 0x3a1680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1680 size=16 callers=0 calls=0
*/
void sub_3a1680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1680ULL || rel >= 0x3a1690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1690 size=80 callers=0 calls=0
*/
void sub_3a1690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1690ULL || rel >= 0x3a16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a16e0 size=192 callers=0 calls=0
*/
void sub_3a16e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a16e0ULL || rel >= 0x3a17a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a17a0 size=96 callers=0 calls=0
*/
void sub_3a17a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a17a0ULL || rel >= 0x3a1800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1800 size=560 callers=0 calls=0
*/
void sub_3a1800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1800ULL || rel >= 0x3a1a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1a30 size=224 callers=0 calls=0
*/
void sub_3a1a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1a30ULL || rel >= 0x3a1b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1b10 size=400 callers=0 calls=0
*/
void sub_3a1b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1b10ULL || rel >= 0x3a1ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1ca0 size=112 callers=0 calls=0
*/
void sub_3a1ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1ca0ULL || rel >= 0x3a1d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1d10 size=128 callers=0 calls=0
*/
void sub_3a1d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1d10ULL || rel >= 0x3a1d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1d90 size=16 callers=0 calls=0
*/
void sub_3a1d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1d90ULL || rel >= 0x3a1da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1da0 size=16 callers=0 calls=0
*/
void sub_3a1da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1da0ULL || rel >= 0x3a1db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1db0 size=560 callers=0 calls=0
*/
void sub_3a1db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1db0ULL || rel >= 0x3a1fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1fe0 size=192 callers=0 calls=0
*/
void sub_3a1fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1fe0ULL || rel >= 0x3a20a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a20a0 size=336 callers=0 calls=0
*/
void sub_3a20a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a20a0ULL || rel >= 0x3a21f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a21f0 size=16 callers=0 calls=0
*/
void sub_3a21f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a21f0ULL || rel >= 0x3a2200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2200 size=160 callers=0 calls=0
*/
void sub_3a2200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2200ULL || rel >= 0x3a22a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a22a0 size=224 callers=0 calls=0
*/
void sub_3a22a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a22a0ULL || rel >= 0x3a2380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2380 size=48 callers=0 calls=0
*/
void sub_3a2380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2380ULL || rel >= 0x3a23b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a23b0 size=16 callers=0 calls=0
*/
void sub_3a23b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a23b0ULL || rel >= 0x3a23c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a23c0 size=16 callers=0 calls=0
*/
void sub_3a23c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a23c0ULL || rel >= 0x3a23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a23d0 size=16 callers=0 calls=0
*/
void sub_3a23d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a23d0ULL || rel >= 0x3a23e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a23e0 size=16 callers=0 calls=0
*/
void sub_3a23e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a23e0ULL || rel >= 0x3a23f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a23f0 size=16 callers=0 calls=0
*/
void sub_3a23f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a23f0ULL || rel >= 0x3a2400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2400 size=16 callers=0 calls=0
*/
void sub_3a2400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2400ULL || rel >= 0x3a2410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2410 size=16 callers=0 calls=0
*/
void sub_3a2410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2410ULL || rel >= 0x3a2420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2420 size=16 callers=0 calls=0
*/
void sub_3a2420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2420ULL || rel >= 0x3a2430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2430 size=16 callers=0 calls=0
*/
void sub_3a2430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2430ULL || rel >= 0x3a2440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2440 size=32 callers=0 calls=0
*/
void sub_3a2440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2440ULL || rel >= 0x3a2460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2460 size=80 callers=0 calls=0
*/
void sub_3a2460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2460ULL || rel >= 0x3a24b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a24b0 size=256 callers=0 calls=0
*/
void sub_3a24b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a24b0ULL || rel >= 0x3a25b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a25b0 size=48 callers=0 calls=0
*/
void sub_3a25b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a25b0ULL || rel >= 0x3a25e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a25e0 size=176 callers=0 calls=0
*/
void sub_3a25e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a25e0ULL || rel >= 0x3a2690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2690 size=64 callers=0 calls=0
*/
void sub_3a2690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2690ULL || rel >= 0x3a26d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a26d0 size=32 callers=0 calls=0
*/
void sub_3a26d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a26d0ULL || rel >= 0x3a26f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a26f0 size=16 callers=0 calls=0
*/
void sub_3a26f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a26f0ULL || rel >= 0x3a2700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2700 size=32 callers=0 calls=0
*/
void sub_3a2700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2700ULL || rel >= 0x3a2720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2720 size=80 callers=0 calls=0
*/
void sub_3a2720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2720ULL || rel >= 0x3a2770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2770 size=224 callers=0 calls=0
*/
void sub_3a2770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2770ULL || rel >= 0x3a2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2850 size=112 callers=0 calls=0
*/
void sub_3a2850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2850ULL || rel >= 0x3a28c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a28c0 size=48 callers=0 calls=0
*/
void sub_3a28c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a28c0ULL || rel >= 0x3a28f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a28f0 size=160 callers=0 calls=0
*/
void sub_3a28f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a28f0ULL || rel >= 0x3a2990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2990 size=64 callers=0 calls=0
*/
void sub_3a2990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2990ULL || rel >= 0x3a29d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a29d0 size=16 callers=0 calls=0
*/
void sub_3a29d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a29d0ULL || rel >= 0x3a29e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a29e0 size=80 callers=0 calls=0
*/
void sub_3a29e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a29e0ULL || rel >= 0x3a2a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2a30 size=16 callers=0 calls=0
*/
void sub_3a2a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2a30ULL || rel >= 0x3a2a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2a40 size=80 callers=0 calls=0
*/
void sub_3a2a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2a40ULL || rel >= 0x3a2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2a90 size=48 callers=0 calls=0
*/
void sub_3a2a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2a90ULL || rel >= 0x3a2ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2ac0 size=16 callers=0 calls=0
*/
void sub_3a2ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2ac0ULL || rel >= 0x3a2ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2ad0 size=32 callers=0 calls=0
*/
void sub_3a2ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2ad0ULL || rel >= 0x3a2af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2af0 size=48 callers=0 calls=0
*/
void sub_3a2af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2af0ULL || rel >= 0x3a2b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2b20 size=80 callers=0 calls=0
*/
void sub_3a2b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2b20ULL || rel >= 0x3a2b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2b70 size=16 callers=0 calls=0
*/
void sub_3a2b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2b70ULL || rel >= 0x3a2b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2b80 size=96 callers=0 calls=0
*/
void sub_3a2b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2b80ULL || rel >= 0x3a2be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2be0 size=16 callers=0 calls=0
*/
void sub_3a2be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2be0ULL || rel >= 0x3a2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2bf0 size=48 callers=0 calls=0
*/
void sub_3a2bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2bf0ULL || rel >= 0x3a2c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2c20 size=16 callers=0 calls=0
*/
void sub_3a2c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2c20ULL || rel >= 0x3a2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2c30 size=16 callers=0 calls=0
*/
void sub_3a2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2c30ULL || rel >= 0x3a2c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2c40 size=16 callers=0 calls=0
*/
void sub_3a2c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2c40ULL || rel >= 0x3a2c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2c50 size=32 callers=0 calls=0
*/
void sub_3a2c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2c50ULL || rel >= 0x3a2c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2c70 size=80 callers=0 calls=0
*/
void sub_3a2c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2c70ULL || rel >= 0x3a2cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2cc0 size=64 callers=0 calls=0
*/
void sub_3a2cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2cc0ULL || rel >= 0x3a2d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2d00 size=96 callers=0 calls=0
*/
void sub_3a2d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2d00ULL || rel >= 0x3a2d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2d60 size=208 callers=0 calls=0
*/
void sub_3a2d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2d60ULL || rel >= 0x3a2e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2e30 size=16 callers=0 calls=0
*/
void sub_3a2e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2e30ULL || rel >= 0x3a2e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2e40 size=16 callers=0 calls=0
*/
void sub_3a2e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2e40ULL || rel >= 0x3a2e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2e50 size=16 callers=0 calls=0
*/
void sub_3a2e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2e50ULL || rel >= 0x3a2e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2e60 size=16 callers=0 calls=0
*/
void sub_3a2e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2e60ULL || rel >= 0x3a2e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2e70 size=16 callers=0 calls=0
*/
void sub_3a2e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2e70ULL || rel >= 0x3a2e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2e80 size=32 callers=0 calls=0
*/
void sub_3a2e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2e80ULL || rel >= 0x3a2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2ea0 size=80 callers=0 calls=0
*/
void sub_3a2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2ea0ULL || rel >= 0x3a2ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2ef0 size=16 callers=0 calls=0
*/
void sub_3a2ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2ef0ULL || rel >= 0x3a2f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2f00 size=64 callers=0 calls=0
*/
void sub_3a2f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2f00ULL || rel >= 0x3a2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2f40 size=112 callers=0 calls=0
*/
void sub_3a2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2f40ULL || rel >= 0x3a2fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2fb0 size=128 callers=0 calls=0
*/
void sub_3a2fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2fb0ULL || rel >= 0x3a3030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3030 size=288 callers=0 calls=0
*/
void sub_3a3030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3030ULL || rel >= 0x3a3150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3150 size=64 callers=0 calls=0
*/
void sub_3a3150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3150ULL || rel >= 0x3a3190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3190 size=16 callers=0 calls=0
*/
void sub_3a3190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3190ULL || rel >= 0x3a31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a31a0 size=16 callers=0 calls=0
*/
void sub_3a31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a31a0ULL || rel >= 0x3a31b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a31b0 size=32 callers=0 calls=0
*/
void sub_3a31b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a31b0ULL || rel >= 0x3a31d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a31d0 size=32 callers=0 calls=0
*/
void sub_3a31d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a31d0ULL || rel >= 0x3a31f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a31f0 size=16 callers=0 calls=0
*/
void sub_3a31f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a31f0ULL || rel >= 0x3a3200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3200 size=48 callers=0 calls=0
*/
void sub_3a3200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3200ULL || rel >= 0x3a3230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3230 size=16 callers=0 calls=0
*/
void sub_3a3230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3230ULL || rel >= 0x3a3240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3240 size=16 callers=0 calls=0
*/
void sub_3a3240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3240ULL || rel >= 0x3a3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3250 size=32 callers=0 calls=0
*/
void sub_3a3250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3250ULL || rel >= 0x3a3270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3270 size=32 callers=0 calls=0
*/
void sub_3a3270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3270ULL || rel >= 0x3a3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3290 size=32 callers=0 calls=0
*/
void sub_3a3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3290ULL || rel >= 0x3a32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a32b0 size=16 callers=0 calls=0
*/
void sub_3a32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a32b0ULL || rel >= 0x3a32c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a32c0 size=96 callers=0 calls=0
*/
void sub_3a32c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a32c0ULL || rel >= 0x3a3320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3320 size=144 callers=0 calls=0
*/
void sub_3a3320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3320ULL || rel >= 0x3a33b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a33b0 size=144 callers=0 calls=0
*/
void sub_3a33b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a33b0ULL || rel >= 0x3a3440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3440 size=112 callers=0 calls=0
*/
void sub_3a3440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3440ULL || rel >= 0x3a34b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a34b0 size=112 callers=0 calls=0
*/
void sub_3a34b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a34b0ULL || rel >= 0x3a3520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3520 size=112 callers=0 calls=0
*/
void sub_3a3520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3520ULL || rel >= 0x3a3590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3590 size=112 callers=0 calls=0
*/
void sub_3a3590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3590ULL || rel >= 0x3a3600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3600 size=112 callers=0 calls=0
*/
void sub_3a3600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3600ULL || rel >= 0x3a3670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3670 size=112 callers=0 calls=0
*/
void sub_3a3670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3670ULL || rel >= 0x3a36e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a36e0 size=112 callers=0 calls=0
*/
void sub_3a36e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a36e0ULL || rel >= 0x3a3750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3750 size=32 callers=0 calls=0
*/
void sub_3a3750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3750ULL || rel >= 0x3a3770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3770 size=32 callers=0 calls=0
*/
void sub_3a3770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3770ULL || rel >= 0x3a3790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3790 size=32 callers=0 calls=0
*/
void sub_3a3790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3790ULL || rel >= 0x3a37b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a37b0 size=32 callers=0 calls=0
*/
void sub_3a37b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a37b0ULL || rel >= 0x3a37d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a37d0 size=32 callers=0 calls=0
*/
void sub_3a37d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a37d0ULL || rel >= 0x3a37f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a37f0 size=32 callers=0 calls=0
*/
void sub_3a37f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a37f0ULL || rel >= 0x3a3810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3810 size=368 callers=0 calls=0
*/
void sub_3a3810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3810ULL || rel >= 0x3a3980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3980 size=32 callers=0 calls=0
*/
void sub_3a3980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3980ULL || rel >= 0x3a39a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a39a0 size=16 callers=0 calls=0
*/
void sub_3a39a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a39a0ULL || rel >= 0x3a39b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a39b0 size=992 callers=0 calls=1
   calls: ZN2nn2sf4cmif6client6detail13CmifProxyImplINS_7account6d
*/
void sub_3a39b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a39b0ULL || rel >= 0x3a3d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3d90 size=1344 callers=1 calls=0
   ref: _ZN2nn2sf4cmif6client6detail13CmifProxyImplINS_7account6detail13IAsyncContextENS2_19CmifDomainProxyK
   ref: dispdrv
*/
void ZN2nn2sf4cmif6client6detail13CmifProxyImplINS_7account6d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3d90ULL || rel >= 0x3a42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a42d0 size=480 callers=0 calls=0
*/
void sub_3a42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a42d0ULL || rel >= 0x3a44b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a44b0 size=1056 callers=0 calls=0
   ref: _ZN2nn2sf4cmif6client6detail13CmifProxyImplINS_7account6detail13IAsyncContextENS2_19CmifDomainProxyK
   ref: dispdrv
*/
void ZN2nn2sf4cmif6client6detail13CmifProxyImplINS_7account6d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a44b0ULL || rel >= 0x3a48d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a48d0 size=352 callers=0 calls=0
*/
void sub_3a48d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a48d0ULL || rel >= 0x3a4a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4a30 size=240 callers=0 calls=0
   ref: _ZN2nn2sf4cmif6client6detail13CmifProxyImplINS_7account6detail13IAsyncContextENS2_19CmifDomainProxyK
   ref: dispdrv
*/
void ZN2nn2sf4cmif6client6detail13CmifProxyImplINS_7account6d_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4a30ULL || rel >= 0x3a4b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4b20 size=416 callers=0 calls=0
*/
void sub_3a4b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4b20ULL || rel >= 0x3a4cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4cc0 size=16 callers=0 calls=0
*/
void sub_3a4cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4cc0ULL || rel >= 0x3a4cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4cd0 size=176 callers=0 calls=0
*/
void sub_3a4cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4cd0ULL || rel >= 0x3a4d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4d80 size=16 callers=0 calls=0
*/
void sub_3a4d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4d80ULL || rel >= 0x3a4d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4d90 size=176 callers=0 calls=0
*/
void sub_3a4d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4d90ULL || rel >= 0x3a4e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4e40 size=176 callers=0 calls=0
*/
void sub_3a4e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4e40ULL || rel >= 0x3a4ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4ef0 size=16 callers=0 calls=0
*/
void sub_3a4ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4ef0ULL || rel >= 0x3a4f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4f00 size=16 callers=0 calls=0
*/
void sub_3a4f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4f00ULL || rel >= 0x3a4f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4f10 size=176 callers=0 calls=0
*/
void sub_3a4f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4f10ULL || rel >= 0x3a4fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4fc0 size=16 callers=0 calls=0
*/
void sub_3a4fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4fc0ULL || rel >= 0x3a4fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4fd0 size=176 callers=0 calls=0
*/
void sub_3a4fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4fd0ULL || rel >= 0x3a5080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5080 size=16 callers=0 calls=0
*/
void sub_3a5080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5080ULL || rel >= 0x3a5090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5090 size=160 callers=0 calls=0
*/
void sub_3a5090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5090ULL || rel >= 0x3a5130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5130 size=160 callers=0 calls=0
*/
void sub_3a5130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5130ULL || rel >= 0x3a51d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

