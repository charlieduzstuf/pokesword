/* main functions 011c9b40..011e5390 (149 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 011c9b40 size=16 callers=0 calls=0
*/
void sub_11c9b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9b40ULL || rel >= 0x11c9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9b50 size=16 callers=0 calls=0
*/
void sub_11c9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9b50ULL || rel >= 0x11c9b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9b60 size=16 callers=0 calls=0
*/
void sub_11c9b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9b60ULL || rel >= 0x11c9b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9b70 size=16 callers=0 calls=0
*/
void sub_11c9b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9b70ULL || rel >= 0x11c9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9b80 size=224 callers=0 calls=4
   calls: sub_110c6a0, sub_1115590, sub_1148c50, sub_117dca0
*/
void sub_11c9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9b80ULL || rel >= 0x11c9c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9c60 size=16 callers=0 calls=0
*/
void sub_11c9c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9c60ULL || rel >= 0x11c9c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9c70 size=16 callers=0 calls=0
*/
void sub_11c9c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9c70ULL || rel >= 0x11c9c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9c80 size=16 callers=0 calls=0
*/
void sub_11c9c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9c80ULL || rel >= 0x11c9c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9c90 size=688 callers=0 calls=4
   calls: sub_1127d00, sub_117dca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11c9c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9c90ULL || rel >= 0x11c9f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9f40 size=16 callers=0 calls=0
*/
void sub_11c9f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9f40ULL || rel >= 0x11c9f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9f50 size=16 callers=0 calls=0
*/
void sub_11c9f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9f50ULL || rel >= 0x11c9f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9f60 size=16 callers=0 calls=0
*/
void sub_11c9f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9f60ULL || rel >= 0x11c9f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9f70 size=16 callers=0 calls=0
*/
void sub_11c9f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9f70ULL || rel >= 0x11c9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9f80 size=16 callers=0 calls=0
*/
void sub_11c9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9f80ULL || rel >= 0x11c9f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9f90 size=16 callers=0 calls=0
*/
void sub_11c9f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9f90ULL || rel >= 0x11c9fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9fa0 size=16 callers=0 calls=0
*/
void sub_11c9fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9fa0ULL || rel >= 0x11c9fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9fb0 size=16 callers=0 calls=0
*/
void sub_11c9fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9fb0ULL || rel >= 0x11c9fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9fc0 size=16 callers=0 calls=0
*/
void sub_11c9fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9fc0ULL || rel >= 0x11c9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9fd0 size=16 callers=0 calls=0
*/
void sub_11c9fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9fd0ULL || rel >= 0x11c9fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9fe0 size=16 callers=0 calls=0
*/
void sub_11c9fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9fe0ULL || rel >= 0x11c9ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011c9ff0 size=400 callers=0 calls=2
   calls: sub_11ca190, sub_11ca340
*/
void sub_11c9ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11c9ff0ULL || rel >= 0x11ca180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca180 size=16 callers=0 calls=0
*/
void sub_11ca180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca180ULL || rel >= 0x11ca190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca190 size=432 callers=1 calls=3
   calls: sub_1198110, sub_5cf8e0, sub_5cf8f0
*/
void sub_11ca190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca190ULL || rel >= 0x11ca340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca340 size=48 callers=1 calls=0
*/
void sub_11ca340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca340ULL || rel >= 0x11ca370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca370 size=16 callers=0 calls=0
*/
void sub_11ca370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca370ULL || rel >= 0x11ca380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca380 size=16 callers=0 calls=0
*/
void sub_11ca380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca380ULL || rel >= 0x11ca390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca390 size=16 callers=0 calls=0
*/
void sub_11ca390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca390ULL || rel >= 0x11ca3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca3a0 size=16 callers=0 calls=0
*/
void sub_11ca3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca3a0ULL || rel >= 0x11ca3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca3b0 size=16 callers=0 calls=0
*/
void sub_11ca3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca3b0ULL || rel >= 0x11ca3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca3c0 size=320 callers=0 calls=3
   calls: sub_1178b30, sub_607750, sub_b46790
*/
void sub_11ca3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca3c0ULL || rel >= 0x11ca500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca500 size=16 callers=0 calls=0
*/
void sub_11ca500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca500ULL || rel >= 0x11ca510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca510 size=16 callers=0 calls=0
*/
void sub_11ca510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca510ULL || rel >= 0x11ca520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca520 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_11ca520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca520ULL || rel >= 0x11ca560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca560 size=32 callers=0 calls=0
*/
void sub_11ca560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca560ULL || rel >= 0x11ca580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca580 size=16 callers=0 calls=0
*/
void sub_11ca580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca580ULL || rel >= 0x11ca590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca590 size=16 callers=0 calls=0
*/
void sub_11ca590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca590ULL || rel >= 0x11ca5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca5a0 size=64 callers=0 calls=1
   calls: sub_619060
*/
void sub_11ca5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca5a0ULL || rel >= 0x11ca5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca5e0 size=16 callers=0 calls=0
*/
void sub_11ca5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca5e0ULL || rel >= 0x11ca5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca5f0 size=16 callers=0 calls=0
*/
void sub_11ca5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca5f0ULL || rel >= 0x11ca600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca600 size=208 callers=0 calls=0
*/
void sub_11ca600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca600ULL || rel >= 0x11ca6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca6d0 size=96 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_11ca6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca6d0ULL || rel >= 0x11ca730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ca730 size=928 callers=0 calls=5
   calls: sub_112eaf0, sub_59bee0, sub_5cfad0, sub_614680, sub_967240
*/
void sub_11ca730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ca730ULL || rel >= 0x11caad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011caad0 size=256 callers=4 calls=1
   calls: sub_112ea00
*/
void sub_11caad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11caad0ULL || rel >= 0x11cabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cabd0 size=144 callers=0 calls=0
*/
void sub_11cabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cabd0ULL || rel >= 0x11cac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cac60 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11cac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cac60ULL || rel >= 0x11cad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cad10 size=144 callers=0 calls=0
*/
void sub_11cad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cad10ULL || rel >= 0x11cada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cada0 size=144 callers=0 calls=0
*/
void sub_11cada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cada0ULL || rel >= 0x11cae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cae30 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11cae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cae30ULL || rel >= 0x11caee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011caee0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11caee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11caee0ULL || rel >= 0x11caf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011caf90 size=144 callers=0 calls=0
*/
void sub_11caf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11caf90ULL || rel >= 0x11cb020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cb020 size=144 callers=0 calls=0
*/
void sub_11cb020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb020ULL || rel >= 0x11cb0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cb0b0 size=160 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_11cb0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb0b0ULL || rel >= 0x11cb150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cb150 size=224 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11cb150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb150ULL || rel >= 0x11cb230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cb230 size=224 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11cb230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb230ULL || rel >= 0x11cb310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cb310 size=224 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11cb310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb310ULL || rel >= 0x11cb3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cb3f0 size=224 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11cb3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb3f0ULL || rel >= 0x11cb4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cb4d0 size=224 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11cb4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb4d0ULL || rel >= 0x11cb5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cb5b0 size=224 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11cb5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb5b0ULL || rel >= 0x11cb690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cb690 size=16 callers=0 calls=0
*/
void sub_11cb690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb690ULL || rel >= 0x11cb6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cb6a0 size=144 callers=1 calls=3
   calls: sub_11cb730, sub_68d630, sub_68d910
*/
void sub_11cb6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb6a0ULL || rel >= 0x11cb730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cb730 size=304 callers=17 calls=3
   calls: sub_5d99d0, sub_967240, sub_98eec0
*/
void sub_11cb730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb730ULL || rel >= 0x11cb860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cb860 size=16 callers=4 calls=0
*/
void sub_11cb860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb860ULL || rel >= 0x11cb870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cb870 size=16 callers=0 calls=0
*/
void sub_11cb870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb870ULL || rel >= 0x11cb880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cb880 size=592 callers=0 calls=4
   calls: Play_Camp_Cooking_MixHard, sub_112eaf0, sub_11cbb50, sub_11cbee0
*/
void sub_11cb880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cb880ULL || rel >= 0x11cbad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cbad0 size=96 callers=1 calls=1
   calls: sub_112e3e0
*/
void sub_11cbad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cbad0ULL || rel >= 0x11cbb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cbb30 size=16 callers=1 calls=0
*/
void sub_11cbb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cbb30ULL || rel >= 0x11cbb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cbb40 size=16 callers=1 calls=0
*/
void sub_11cbb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cbb40ULL || rel >= 0x11cbb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cbb50 size=352 callers=1 calls=5
   calls: sub_59b100, sub_59b130, sub_5cfad0, sub_967240, sub_b44bb0
*/
void sub_11cbb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cbb50ULL || rel >= 0x11cbcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cbcb0 size=560 callers=1 calls=1
   calls: sub_11cbee0
*/
void sub_11cbcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cbcb0ULL || rel >= 0x11cbee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cbee0 size=640 callers=2 calls=6
   calls: sub_112eaf0, sub_59b100, sub_59b130, sub_5cfad0, sub_967240, sub_b44bb0
*/
void sub_11cbee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cbee0ULL || rel >= 0x11cc160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cc160 size=576 callers=1 calls=7
   calls: sub_1128e40, sub_68d950, sub_68d9b0, sub_68d9f0, sub_68da30, sub_ea7c40, sub_ea8c70
   ref: Play_Camp_Cooking_MixHard
*/
void Play_Camp_Cooking_MixHard(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cc160ULL || rel >= 0x11cc3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cc3a0 size=16 callers=1 calls=0
*/
void sub_11cc3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cc3a0ULL || rel >= 0x11cc3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cc3b0 size=256 callers=1 calls=0
*/
void sub_11cc3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cc3b0ULL || rel >= 0x11cc4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cc4b0 size=336 callers=1 calls=0
*/
void sub_11cc4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cc4b0ULL || rel >= 0x11cc600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cc600 size=160 callers=1 calls=0
*/
void sub_11cc600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cc600ULL || rel >= 0x11cc6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cc6a0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11cc6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cc6a0ULL || rel >= 0x11cc750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cc750 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11cc750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cc750ULL || rel >= 0x11cc800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cc800 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11cc800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cc800ULL || rel >= 0x11cc8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cc8b0 size=144 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_11cc8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cc8b0ULL || rel >= 0x11cc940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cc940 size=16 callers=0 calls=0
*/
void sub_11cc940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cc940ULL || rel >= 0x11cc950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cc950 size=144 callers=1 calls=0
*/
void sub_11cc950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cc950ULL || rel >= 0x11cc9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cc9e0 size=1456 callers=0 calls=7
   calls: Play_Camp_Cooking_BurnUp, sub_112ea00, sub_11c9150, sub_11cd0e0, sub_11d0ff0, sub_11d18a0, sub_11d2670
*/
void sub_11cc9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cc9e0ULL || rel >= 0x11ccf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ccf90 size=336 callers=2 calls=4
   calls: Play_Camp_Cooking_Fire_lp, sub_1128e40, sub_11cd590, sub_967240
   ref: Play_Camp_Cooking_BurnUp
*/
void Play_Camp_Cooking_BurnUp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ccf90ULL || rel >= 0x11cd0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd0e0 size=320 callers=1 calls=3
   calls: Stop_Camp_Cooking_Fire_lp_2, sub_11cd590, sub_967240
*/
void sub_11cd0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd0e0ULL || rel >= 0x11cd220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd220 size=192 callers=1 calls=1
   calls: Play_Camp_Cooking_BurnUp
*/
void sub_11cd220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd220ULL || rel >= 0x11cd2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd2e0 size=16 callers=1 calls=0
*/
void sub_11cd2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd2e0ULL || rel >= 0x11cd2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd2f0 size=256 callers=0 calls=0
*/
void sub_11cd2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd2f0ULL || rel >= 0x11cd3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd3f0 size=16 callers=0 calls=0
*/
void sub_11cd3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd3f0ULL || rel >= 0x11cd400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd400 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11cd400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd400ULL || rel >= 0x11cd470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd470 size=16 callers=0 calls=0
*/
void sub_11cd470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd470ULL || rel >= 0x11cd480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd480 size=16 callers=0 calls=0
*/
void sub_11cd480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd480ULL || rel >= 0x11cd490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd490 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11cd490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd490ULL || rel >= 0x11cd500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd500 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11cd500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd500ULL || rel >= 0x11cd570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd570 size=16 callers=0 calls=0
*/
void sub_11cd570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd570ULL || rel >= 0x11cd580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd580 size=16 callers=0 calls=0
*/
void sub_11cd580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd580ULL || rel >= 0x11cd590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd590 size=512 callers=7 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_bf0820
*/
void sub_11cd590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd590ULL || rel >= 0x11cd790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd790 size=96 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_11cd790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd790ULL || rel >= 0x11cd7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cd7f0 size=912 callers=0 calls=3
   calls: sub_1128e40, sub_68d9f0, sub_794310
   ref: Stop_Camp_Cooking_BurnUpSmoke_lp
   ref: Stop_Camp_Cooking_Fire_lp
   ref: Stop_Camp_Cooking_BonSizzle_lp
   ref: Camp_FirePower
*/
void Stop_Camp_Cooking_Fire_lp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cd7f0ULL || rel >= 0x11cdb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cdb80 size=16 callers=0 calls=0
*/
void sub_11cdb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cdb80ULL || rel >= 0x11cdb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cdb90 size=16 callers=0 calls=0
*/
void sub_11cdb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cdb90ULL || rel >= 0x11cdba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cdba0 size=16 callers=0 calls=0
*/
void sub_11cdba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cdba0ULL || rel >= 0x11cdbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cdbb0 size=16 callers=0 calls=0
*/
void sub_11cdbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cdbb0ULL || rel >= 0x11cdbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cdbc0 size=16 callers=0 calls=0
*/
void sub_11cdbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cdbc0ULL || rel >= 0x11cdbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cdbd0 size=288 callers=2 calls=3
   calls: sub_12f6140, sub_5d99d0, sub_967240
*/
void sub_11cdbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cdbd0ULL || rel >= 0x11cdcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cdcf0 size=288 callers=7 calls=3
   calls: sub_11cef40, sub_5d99d0, sub_967240
*/
void sub_11cdcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cdcf0ULL || rel >= 0x11cde10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cde10 size=672 callers=1 calls=8
   calls: sub_112e580, sub_112e920, sub_112ea00, sub_11cb730, sub_11cdcf0, sub_11ced40, sub_68d630, sub_967240
*/
void sub_11cde10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cde10ULL || rel >= 0x11ce0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ce0b0 size=768 callers=0 calls=5
   calls: Camp_FirePower, sub_11ce3b0, sub_11d0150, sub_68da30, sub_967240
*/
void sub_11ce0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ce0b0ULL || rel >= 0x11ce3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ce3b0 size=256 callers=7 calls=1
   calls: sub_17c1ba0
*/
void sub_11ce3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ce3b0ULL || rel >= 0x11ce4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ce4b0 size=336 callers=1 calls=3
   calls: sub_11d0150, sub_794310, sub_967240
   ref: Camp_FirePower
*/
void Camp_FirePower(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ce4b0ULL || rel >= 0x11ce600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ce600 size=112 callers=1 calls=1
   calls: sub_11cb730
*/
void sub_11ce600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ce600ULL || rel >= 0x11ce670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ce670 size=608 callers=1 calls=7
   calls: sub_1128e40, sub_112e660, sub_11ce3b0, sub_11ced40, sub_68d950, sub_68da30, sub_967240
   ref: Play_Camp_Cooking_BonSizzle_lp
   ref: Play_Camp_Cooking_BurnUpSmoke_lp
   ref: Play_Camp_Cooking_Fire_lp
*/
void Play_Camp_Cooking_Fire_lp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ce670ULL || rel >= 0x11ce8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ce8d0 size=592 callers=1 calls=7
   calls: sub_1128e40, sub_112e660, sub_11ce3b0, sub_11ced40, sub_68d9b0, sub_68da30, sub_967240
   ref: Stop_Camp_Cooking_BurnUpSmoke_lp
   ref: Stop_Camp_Cooking_Fire_lp
   ref: Stop_Camp_Cooking_BonSizzle_lp
*/
void Stop_Camp_Cooking_Fire_lp_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ce8d0ULL || rel >= 0x11ceb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ceb20 size=16 callers=3 calls=0
*/
void sub_11ceb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ceb20ULL || rel >= 0x11ceb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ceb30 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11ceb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ceb30ULL || rel >= 0x11cebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cebe0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11cebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cebe0ULL || rel >= 0x11cec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cec90 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11cec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cec90ULL || rel >= 0x11ced40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ced40 size=512 callers=29 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_11ced40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ced40ULL || rel >= 0x11cef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cef40 size=320 callers=3 calls=1
   calls: sub_5db1b0
*/
void sub_11cef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cef40ULL || rel >= 0x11cf080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cf080 size=272 callers=0 calls=0
*/
void sub_11cf080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cf080ULL || rel >= 0x11cf190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cf190 size=272 callers=0 calls=0
*/
void sub_11cf190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cf190ULL || rel >= 0x11cf2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cf2a0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_11cf2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cf2a0ULL || rel >= 0x11cf310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cf310 size=192 callers=0 calls=2
   calls: sub_11cf9b0, sub_11cfc10
*/
void sub_11cf310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cf310ULL || rel >= 0x11cf3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cf3d0 size=272 callers=0 calls=0
*/
void sub_11cf3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cf3d0ULL || rel >= 0x11cf4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cf4e0 size=272 callers=0 calls=0
*/
void sub_11cf4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cf4e0ULL || rel >= 0x11cf5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cf5f0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_11cf5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cf5f0ULL || rel >= 0x11cf660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cf660 size=192 callers=0 calls=2
   calls: sub_11cf9b0, sub_11cfc10
*/
void sub_11cf660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cf660ULL || rel >= 0x11cf720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cf720 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_11cf720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cf720ULL || rel >= 0x11cf790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cf790 size=272 callers=0 calls=0
*/
void sub_11cf790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cf790ULL || rel >= 0x11cf8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cf8a0 size=272 callers=0 calls=0
*/
void sub_11cf8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cf8a0ULL || rel >= 0x11cf9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cf9b0 size=608 callers=2 calls=1
   calls: sub_967240
*/
void sub_11cf9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cf9b0ULL || rel >= 0x11cfc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cfc10 size=672 callers=2 calls=1
   calls: sub_967240
*/
void sub_11cfc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cfc10ULL || rel >= 0x11cfeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011cfeb0 size=672 callers=0 calls=1
   calls: sub_967240
*/
void sub_11cfeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cfeb0ULL || rel >= 0x11d0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d0150 size=336 callers=12 calls=3
   calls: sub_11d02a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11d0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d0150ULL || rel >= 0x11d02a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d02a0 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11d02a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d02a0ULL || rel >= 0x11d0390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d0390 size=128 callers=1 calls=1
   calls: sub_11d2560
*/
void sub_11d0390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d0390ULL || rel >= 0x11d0410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d0410 size=48 callers=0 calls=2
   calls: sub_112e3e0, sub_11cdcf0
*/
void sub_11d0410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d0410ULL || rel >= 0x11d0440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d0440 size=288 callers=1 calls=3
   calls: sub_11d1f90, sub_5d99d0, sub_967240
*/
void sub_11d0440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d0440ULL || rel >= 0x11d0560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d0560 size=192 callers=1 calls=4
   calls: sub_112e580, sub_112e750, sub_112e920, sub_972c70
*/
void sub_11d0560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d0560ULL || rel >= 0x11d0620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d0620 size=752 callers=1 calls=7
   calls: sub_5cfad0, sub_614680, sub_618ec0, sub_619060, sub_967240, sub_989700, sub_d63430
*/
void sub_11d0620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d0620ULL || rel >= 0x11d0910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d0910 size=448 callers=0 calls=11
   calls: Play_Camp_Cooking_Fan, Play_Camp_Cooking_Fan_2, sub_112e750, sub_112eaf0, sub_11d0ad0, sub_11d25c0, sub_11d2680, sub_794310, sub_972c70, sub_ea3d10, sub_ea4820
   ref: Camp_FanVelocity
*/
void Camp_FanVelocity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d0910ULL || rel >= 0x11d0ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d0ad0 size=352 callers=1 calls=4
   calls: sub_112e750, sub_112eaf0, sub_972c70, sub_ead150
*/
void sub_11d0ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d0ad0ULL || rel >= 0x11d0c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d0c30 size=416 callers=1 calls=5
   calls: sub_1128440, sub_112eaf0, sub_794330, sub_ea7c40, sub_ea8c70
   ref: Play_Camp_Cooking_Fan
*/
void Play_Camp_Cooking_Fan(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d0c30ULL || rel >= 0x11d0dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d0dd0 size=544 callers=1 calls=5
   calls: sub_112eaf0, sub_794330, sub_ea3d20, sub_ea7c40, sub_ea8c70
   ref: Play_Camp_Cooking_Fan
*/
void Play_Camp_Cooking_Fan_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d0dd0ULL || rel >= 0x11d0ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d0ff0 size=816 callers=4 calls=1
   calls: sub_967240
*/
void sub_11d0ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d0ff0ULL || rel >= 0x11d1320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1320 size=816 callers=4 calls=1
   calls: sub_967240
*/
void sub_11d1320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1320ULL || rel >= 0x11d1650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1650 size=272 callers=0 calls=2
   calls: sub_11ced40, sub_967240
*/
void sub_11d1650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1650ULL || rel >= 0x11d1760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1760 size=272 callers=0 calls=2
   calls: sub_11ced40, sub_967240
*/
void sub_11d1760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1760ULL || rel >= 0x11d1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1870 size=48 callers=1 calls=0
*/
void sub_11d1870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1870ULL || rel >= 0x11d18a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d18a0 size=32 callers=4 calls=0
*/
void sub_11d18a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d18a0ULL || rel >= 0x11d18c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d18c0 size=48 callers=4 calls=0
*/
void sub_11d18c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d18c0ULL || rel >= 0x11d18f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d18f0 size=16 callers=1 calls=0
*/
void sub_11d18f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d18f0ULL || rel >= 0x11d1900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1900 size=16 callers=0 calls=0
*/
void sub_11d1900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1900ULL || rel >= 0x11d1910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1910 size=128 callers=0 calls=1
   calls: sub_794310
   ref: Camp_FanVelocity
*/
void Camp_FanVelocity_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1910ULL || rel >= 0x11d1990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1990 size=144 callers=0 calls=0
*/
void sub_11d1990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1990ULL || rel >= 0x11d1a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1a20 size=112 callers=0 calls=1
   calls: sub_11d1ee0
*/
void sub_11d1a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1a20ULL || rel >= 0x11d1a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1a90 size=16 callers=0 calls=0
*/
void sub_11d1a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1a90ULL || rel >= 0x11d1aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1aa0 size=16 callers=0 calls=0
*/
void sub_11d1aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1aa0ULL || rel >= 0x11d1ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1ab0 size=16 callers=0 calls=0
*/
void sub_11d1ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1ab0ULL || rel >= 0x11d1ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1ac0 size=144 callers=0 calls=0
*/
void sub_11d1ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1ac0ULL || rel >= 0x11d1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1b50 size=144 callers=0 calls=0
*/
void sub_11d1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1b50ULL || rel >= 0x11d1be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1be0 size=240 callers=0 calls=1
   calls: sub_607750
*/
void sub_11d1be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1be0ULL || rel >= 0x11d1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1cd0 size=240 callers=0 calls=1
   calls: sub_607750
*/
void sub_11d1cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1cd0ULL || rel >= 0x11d1dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1dc0 size=144 callers=0 calls=0
*/
void sub_11d1dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1dc0ULL || rel >= 0x11d1e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1e50 size=144 callers=0 calls=0
*/
void sub_11d1e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1e50ULL || rel >= 0x11d1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1ee0 size=176 callers=3 calls=1
   calls: sub_607750
*/
void sub_11d1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1ee0ULL || rel >= 0x11d1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d1f90 size=240 callers=1 calls=1
   calls: sub_5db1b0
*/
void sub_11d1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d1f90ULL || rel >= 0x11d2080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2080 size=144 callers=0 calls=0
*/
void sub_11d2080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2080ULL || rel >= 0x11d2110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2110 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_11d2110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2110ULL || rel >= 0x11d2180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2180 size=96 callers=0 calls=0
*/
void sub_11d2180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2180ULL || rel >= 0x11d21e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d21e0 size=144 callers=0 calls=0
*/
void sub_11d21e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d21e0ULL || rel >= 0x11d2270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2270 size=144 callers=0 calls=0
*/
void sub_11d2270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2270ULL || rel >= 0x11d2300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2300 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_11d2300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2300ULL || rel >= 0x11d2370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2370 size=96 callers=0 calls=0
*/
void sub_11d2370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2370ULL || rel >= 0x11d23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d23d0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_11d23d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d23d0ULL || rel >= 0x11d2440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2440 size=144 callers=0 calls=0
*/
void sub_11d2440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2440ULL || rel >= 0x11d24d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d24d0 size=144 callers=0 calls=0
*/
void sub_11d24d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d24d0ULL || rel >= 0x11d2560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2560 size=96 callers=4 calls=1
   calls: sub_5db1b0
*/
void sub_11d2560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2560ULL || rel >= 0x11d25c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d25c0 size=128 callers=3 calls=2
   calls: sub_ea3d10, sub_ea4820
*/
void sub_11d25c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d25c0ULL || rel >= 0x11d2640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2640 size=48 callers=0 calls=0
*/
void sub_11d2640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2640ULL || rel >= 0x11d2670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2670 size=16 callers=5 calls=0
*/
void sub_11d2670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2670ULL || rel >= 0x11d2680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2680 size=16 callers=5 calls=0
*/
void sub_11d2680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2680ULL || rel >= 0x11d2690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2690 size=16 callers=1 calls=0
*/
void sub_11d2690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2690ULL || rel >= 0x11d26a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d26a0 size=16 callers=3 calls=0
*/
void sub_11d26a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d26a0ULL || rel >= 0x11d26b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d26b0 size=16 callers=4 calls=0
*/
void sub_11d26b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d26b0ULL || rel >= 0x11d26c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d26c0 size=64 callers=27 calls=0
*/
void sub_11d26c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d26c0ULL || rel >= 0x11d2700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2700 size=64 callers=10 calls=0
*/
void sub_11d2700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2700ULL || rel >= 0x11d2740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2740 size=144 callers=0 calls=0
*/
void sub_11d2740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2740ULL || rel >= 0x11d27d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d27d0 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11d27d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d27d0ULL || rel >= 0x11d2840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2840 size=16 callers=0 calls=0
*/
void sub_11d2840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2840ULL || rel >= 0x11d2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2850 size=16 callers=0 calls=0
*/
void sub_11d2850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2850ULL || rel >= 0x11d2860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2860 size=16 callers=0 calls=0
*/
void sub_11d2860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2860ULL || rel >= 0x11d2870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2870 size=144 callers=0 calls=0
*/
void sub_11d2870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2870ULL || rel >= 0x11d2900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2900 size=144 callers=0 calls=0
*/
void sub_11d2900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2900ULL || rel >= 0x11d2990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2990 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11d2990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2990ULL || rel >= 0x11d2a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2a00 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11d2a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2a00ULL || rel >= 0x11d2a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2a70 size=144 callers=0 calls=0
*/
void sub_11d2a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2a70ULL || rel >= 0x11d2b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2b00 size=144 callers=0 calls=0
*/
void sub_11d2b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2b00ULL || rel >= 0x11d2b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2b90 size=272 callers=1 calls=2
   calls: sub_11d2560, sub_ead150
*/
void sub_11d2b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2b90ULL || rel >= 0x11d2ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2ca0 size=16 callers=0 calls=0
*/
void sub_11d2ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2ca0ULL || rel >= 0x11d2cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2cb0 size=384 callers=1 calls=3
   calls: sub_112e580, sub_112e920, sub_112ea00
*/
void sub_11d2cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2cb0ULL || rel >= 0x11d2e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d2e30 size=1408 callers=1 calls=10
   calls: sub_5cfad0, sub_614680, sub_618ec0, sub_619060, sub_65cd70, sub_65cd90, sub_967240, sub_972c70, sub_989700, sub_d63430
*/
void sub_11d2e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2e30ULL || rel >= 0x11d33b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d33b0 size=800 callers=0 calls=7
   calls: Play_Camp_Cooking_Mix, sub_112e920, sub_112ea00, sub_112eaf0, sub_11d25c0, sub_11d37a0, sub_11d3a00
*/
void sub_11d33b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d33b0ULL || rel >= 0x11d36d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d36d0 size=208 callers=0 calls=1
   calls: sub_112eaf0
*/
void sub_11d36d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d36d0ULL || rel >= 0x11d37a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d37a0 size=608 callers=1 calls=3
   calls: sub_ea3d10, sub_ea4800, sub_ea4810
*/
void sub_11d37a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d37a0ULL || rel >= 0x11d3a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d3a00 size=768 callers=1 calls=2
   calls: sub_112eaf0, sub_ea3d20
*/
void sub_11d3a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d3a00ULL || rel >= 0x11d3d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d3d00 size=1360 callers=1 calls=9
   calls: sub_112e3d0, sub_112eaf0, sub_11d2680, sub_794310, sub_794330, sub_967240, sub_ea7ec0, sub_ea8100, sub_ea8c70
   ref: Play_Camp_Cooking_Mix
   ref: Camp_MixVelocity
*/
void Play_Camp_Cooking_Mix(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d3d00ULL || rel >= 0x11d4250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d4250 size=272 callers=0 calls=2
   calls: sub_11ced40, sub_967240
*/
void sub_11d4250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d4250ULL || rel >= 0x11d4360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d4360 size=416 callers=0 calls=5
   calls: sub_11ced40, sub_794310, sub_967240, sub_ea8100, sub_ea8c70
   ref: Camp_MixVelocity
*/
void Camp_MixVelocity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d4360ULL || rel >= 0x11d4500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d4500 size=32 callers=1 calls=0
*/
void sub_11d4500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d4500ULL || rel >= 0x11d4520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d4520 size=1104 callers=0 calls=6
   calls: sub_112e3e0, sub_11d5000, sub_59bee0, sub_5cfad0, sub_614680, sub_967240
*/
void sub_11d4520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d4520ULL || rel >= 0x11d4970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d4970 size=368 callers=0 calls=6
   calls: sub_112e3e0, sub_11d5000, sub_794310, sub_967240, sub_ea8100, sub_ea8c70
   ref: Camp_MixVelocity
*/
void Camp_MixVelocity_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d4970ULL || rel >= 0x11d4ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d4ae0 size=144 callers=0 calls=0
*/
void sub_11d4ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d4ae0ULL || rel >= 0x11d4b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d4b70 size=112 callers=0 calls=1
   calls: sub_11d1ee0
*/
void sub_11d4b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d4b70ULL || rel >= 0x11d4be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d4be0 size=144 callers=0 calls=0
*/
void sub_11d4be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d4be0ULL || rel >= 0x11d4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d4c70 size=144 callers=0 calls=0
*/
void sub_11d4c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d4c70ULL || rel >= 0x11d4d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d4d00 size=240 callers=0 calls=1
   calls: sub_607750
*/
void sub_11d4d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d4d00ULL || rel >= 0x11d4df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d4df0 size=240 callers=0 calls=1
   calls: sub_607750
*/
void sub_11d4df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d4df0ULL || rel >= 0x11d4ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d4ee0 size=144 callers=0 calls=0
*/
void sub_11d4ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d4ee0ULL || rel >= 0x11d4f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d4f70 size=144 callers=0 calls=0
*/
void sub_11d4f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d4f70ULL || rel >= 0x11d5000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5000 size=336 callers=4 calls=3
   calls: sub_11d5150, sub_5cf8e0, sub_5cf8f0
*/
void sub_11d5000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5000ULL || rel >= 0x11d5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5150 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11d5150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5150ULL || rel >= 0x11d5240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5240 size=112 callers=1 calls=1
   calls: sub_11d2560
*/
void sub_11d5240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5240ULL || rel >= 0x11d52b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d52b0 size=240 callers=0 calls=0
*/
void sub_11d52b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d52b0ULL || rel >= 0x11d53a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d53a0 size=240 callers=0 calls=0
*/
void sub_11d53a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d53a0ULL || rel >= 0x11d5490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5490 size=240 callers=0 calls=0
*/
void sub_11d5490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5490ULL || rel >= 0x11d5580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5580 size=240 callers=0 calls=0
*/
void sub_11d5580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5580ULL || rel >= 0x11d5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5670 size=240 callers=0 calls=0
*/
void sub_11d5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5670ULL || rel >= 0x11d5760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5760 size=240 callers=0 calls=0
*/
void sub_11d5760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5760ULL || rel >= 0x11d5850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5850 size=128 callers=0 calls=1
   calls: sub_ead150
*/
void sub_11d5850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5850ULL || rel >= 0x11d58d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d58d0 size=272 callers=0 calls=5
   calls: Play_Camp_Cooking_TrueLove_Throw, sub_1128440, sub_11d2670, sub_11d2680, sub_11d6230
*/
void sub_11d58d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d58d0ULL || rel >= 0x11d59e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d59e0 size=112 callers=0 calls=2
   calls: Play_Camp_Cooking_TrueLove_Throw, sub_11d6230
*/
void sub_11d59e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d59e0ULL || rel >= 0x11d5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5a50 size=448 callers=2 calls=9
   calls: sub_1128e40, sub_112e3e0, sub_11d26a0, sub_11d5ff0, sub_11d6840, sub_967240, sub_ea7c40, sub_ea8100, sub_ea8c70
   ref: Play_Camp_Cooking_TrueLove_Throw
*/
void Play_Camp_Cooking_TrueLove_Throw(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5a50ULL || rel >= 0x11d5c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5c10 size=160 callers=0 calls=3
   calls: sub_11d25c0, sub_11d2670, sub_11d2680
*/
void sub_11d5c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5c10ULL || rel >= 0x11d5cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5cb0 size=96 callers=0 calls=1
   calls: sub_1128e40
   ref: Play_Camp_Cooking_TrueLove_Ready
*/
void Play_Camp_Cooking_TrueLove_Ready(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5cb0ULL || rel >= 0x11d5d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5d10 size=16 callers=0 calls=0
*/
void sub_11d5d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5d10ULL || rel >= 0x11d5d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5d20 size=96 callers=0 calls=2
   calls: sub_11d26a0, sub_ea8c70
*/
void sub_11d5d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5d20ULL || rel >= 0x11d5d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5d80 size=96 callers=0 calls=2
   calls: sub_11d26a0, sub_ea8c70
*/
void sub_11d5d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5d80ULL || rel >= 0x11d5de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5de0 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11d5de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5de0ULL || rel >= 0x11d5e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5e90 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11d5e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5e90ULL || rel >= 0x11d5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5f40 size=176 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11d5f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5f40ULL || rel >= 0x11d5ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d5ff0 size=336 callers=29 calls=3
   calls: sub_11d6140, sub_5cf8e0, sub_5cf8f0
*/
void sub_11d5ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5ff0ULL || rel >= 0x11d6140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d6140 size=240 callers=4 calls=1
   calls: sub_bf0820
*/
void sub_11d6140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d6140ULL || rel >= 0x11d6230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d6230 size=512 callers=17 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_bf0820
*/
void sub_11d6230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d6230ULL || rel >= 0x11d6430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d6430 size=144 callers=1 calls=1
   calls: sub_11d2560
*/
void sub_11d6430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d6430ULL || rel >= 0x11d64c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d64c0 size=496 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11d64c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d64c0ULL || rel >= 0x11d66b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d66b0 size=16 callers=0 calls=0
*/
void sub_11d66b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d66b0ULL || rel >= 0x11d66c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d66c0 size=16 callers=0 calls=0
*/
void sub_11d66c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d66c0ULL || rel >= 0x11d66d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d66d0 size=16 callers=0 calls=0
*/
void sub_11d66d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d66d0ULL || rel >= 0x11d66e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d66e0 size=16 callers=0 calls=0
*/
void sub_11d66e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d66e0ULL || rel >= 0x11d66f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d66f0 size=16 callers=0 calls=0
*/
void sub_11d66f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d66f0ULL || rel >= 0x11d6700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d6700 size=128 callers=0 calls=3
   calls: sub_112e3e0, sub_11cdcf0, sub_ead150
*/
void sub_11d6700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d6700ULL || rel >= 0x11d6780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d6780 size=80 callers=1 calls=1
   calls: sub_112e920
*/
void sub_11d6780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d6780ULL || rel >= 0x11d67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d67d0 size=112 callers=0 calls=0
*/
void sub_11d67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d67d0ULL || rel >= 0x11d6840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d6840 size=848 callers=2 calls=7
   calls: sub_112e3d0, sub_112e3e0, sub_112ea00, sub_11d6230, sub_11d82e0, sub_11d84a0, sub_967240
*/
void sub_11d6840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d6840ULL || rel >= 0x11d6b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d6b90 size=992 callers=0 calls=6
   calls: Play_Camp_Cooking_TrueLove_hit_3People, sub_112e580, sub_112e920, sub_11d6230, sub_11d84a0, sub_967240
*/
void sub_11d6b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d6b90ULL || rel >= 0x11d6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d6f70 size=368 callers=1 calls=6
   calls: Play_Camp_Cooking_TrueLove_hit_4, sub_1128e40, sub_112e3e0, sub_11d6230, sub_5cfad0, sub_68d950
   ref: Play_Camp_Cooking_TrueLove_hit_2People
   ref: Play_Camp_Cooking_TrueLove_hit_3People
*/
void Play_Camp_Cooking_TrueLove_hit_3People(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d6f70ULL || rel >= 0x11d70e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d70e0 size=256 callers=0 calls=3
   calls: sub_1128e40, sub_112e580, sub_68d950
   ref: Play_Camp_Cooking_TrueLove_Ready
*/
void Play_Camp_Cooking_TrueLove_Ready_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d70e0ULL || rel >= 0x11d71e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d71e0 size=80 callers=0 calls=1
   calls: sub_68d9b0
*/
void sub_11d71e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d71e0ULL || rel >= 0x11d7230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7230 size=112 callers=1 calls=1
   calls: sub_11cb730
*/
void sub_11d7230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7230ULL || rel >= 0x11d72a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d72a0 size=128 callers=4 calls=1
   calls: sub_11cb730
*/
void sub_11d72a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d72a0ULL || rel >= 0x11d7320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7320 size=112 callers=1 calls=1
   calls: sub_11cb730
*/
void sub_11d7320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7320ULL || rel >= 0x11d7390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7390 size=16 callers=1 calls=0
*/
void sub_11d7390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7390ULL || rel >= 0x11d73a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d73a0 size=16 callers=5 calls=0
*/
void sub_11d73a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d73a0ULL || rel >= 0x11d73b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d73b0 size=16 callers=4 calls=0
*/
void sub_11d73b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d73b0ULL || rel >= 0x11d73c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d73c0 size=112 callers=0 calls=1
   calls: sub_11d1ee0
*/
void sub_11d73c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d73c0ULL || rel >= 0x11d7430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7430 size=240 callers=0 calls=1
   calls: sub_607750
*/
void sub_11d7430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7430ULL || rel >= 0x11d7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7520 size=240 callers=0 calls=1
   calls: sub_607750
*/
void sub_11d7520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7520ULL || rel >= 0x11d7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7610 size=32 callers=0 calls=0
*/
void sub_11d7610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7610ULL || rel >= 0x11d7630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7630 size=16 callers=0 calls=0
*/
void sub_11d7630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7630ULL || rel >= 0x11d7640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7640 size=32 callers=0 calls=0
*/
void sub_11d7640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7640ULL || rel >= 0x11d7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7660 size=32 callers=0 calls=0
*/
void sub_11d7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7660ULL || rel >= 0x11d7680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7680 size=208 callers=0 calls=1
   calls: sub_112e920
*/
void sub_11d7680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7680ULL || rel >= 0x11d7750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7750 size=16 callers=0 calls=0
*/
void sub_11d7750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7750ULL || rel >= 0x11d7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7760 size=16 callers=0 calls=0
*/
void sub_11d7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7760ULL || rel >= 0x11d7770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7770 size=16 callers=0 calls=0
*/
void sub_11d7770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7770ULL || rel >= 0x11d7780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7780 size=160 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_11d7780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7780ULL || rel >= 0x11d7820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7820 size=544 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11d7820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7820ULL || rel >= 0x11d7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7a40 size=16 callers=0 calls=0
*/
void sub_11d7a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7a40ULL || rel >= 0x11d7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7a50 size=16 callers=0 calls=0
*/
void sub_11d7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7a50ULL || rel >= 0x11d7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7a60 size=16 callers=0 calls=0
*/
void sub_11d7a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7a60ULL || rel >= 0x11d7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7a70 size=16 callers=0 calls=0
*/
void sub_11d7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7a70ULL || rel >= 0x11d7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7a80 size=16 callers=0 calls=0
*/
void sub_11d7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7a80ULL || rel >= 0x11d7a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7a90 size=112 callers=1 calls=1
   calls: sub_11cb730
*/
void sub_11d7a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7a90ULL || rel >= 0x11d7b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7b00 size=272 callers=1 calls=4
   calls: sub_11cdbd0, sub_68d630, sub_68da40, sub_68da80
*/
void sub_11d7b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7b00ULL || rel >= 0x11d7c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7c10 size=16 callers=0 calls=0
*/
void sub_11d7c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7c10ULL || rel >= 0x11d7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7c20 size=208 callers=1 calls=2
   calls: sub_112e580, sub_112e920
*/
void sub_11d7c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7c20ULL || rel >= 0x11d7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7cf0 size=112 callers=0 calls=2
   calls: sub_112e750, sub_112eaf0
*/
void sub_11d7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7cf0ULL || rel >= 0x11d7d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7d60 size=224 callers=1 calls=2
   calls: sub_68d950, sub_68d9f0
*/
void sub_11d7d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7d60ULL || rel >= 0x11d7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7e40 size=16 callers=0 calls=0
*/
void sub_11d7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7e40ULL || rel >= 0x11d7e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7e50 size=80 callers=0 calls=1
   calls: sub_68d9b0
*/
void sub_11d7e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7e50ULL || rel >= 0x11d7ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d7ea0 size=368 callers=1 calls=3
   calls: sub_1128e40, sub_68d950, sub_68d9f0
   ref: Play_Camp_Cooking_TrueLove_hit_2
   ref: Play_Camp_Cooking_TrueLove_hit_1
   ref: Play_Camp_Cooking_TrueLove_hit_4
   ref: Play_Camp_Cooking_TrueLove_hit_3
*/
void Play_Camp_Cooking_TrueLove_hit_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d7ea0ULL || rel >= 0x11d8010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d8010 size=720 callers=7 calls=2
   calls: sub_11d5ff0, sub_11d73b0
*/
void sub_11d8010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d8010ULL || rel >= 0x11d82e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d82e0 size=112 callers=1 calls=1
   calls: sub_11d8350
*/
void sub_11d82e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d82e0ULL || rel >= 0x11d8350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d8350 size=336 callers=1 calls=0
*/
void sub_11d8350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d8350ULL || rel >= 0x11d84a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d84a0 size=784 callers=2 calls=0
*/
void sub_11d84a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d84a0ULL || rel >= 0x11d87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d87b0 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11d87b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d87b0ULL || rel >= 0x11d8820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d8820 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11d8820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d8820ULL || rel >= 0x11d8890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d8890 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11d8890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d8890ULL || rel >= 0x11d8900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d8900 size=240 callers=2 calls=2
   calls: sub_112e3e0, sub_5db1b0
*/
void sub_11d8900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d8900ULL || rel >= 0x11d89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d89f0 size=576 callers=1 calls=4
   calls: sub_112e750, sub_112e920, sub_972c70, sub_ead150
*/
void sub_11d89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d89f0ULL || rel >= 0x11d8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d8c30 size=768 callers=1 calls=11
   calls: sub_110c6a0, sub_1148c40, sub_119e440, sub_11d8f30, sub_598de0, sub_618ec0, sub_619060, sub_967240, sub_989700, sub_c52c40, sub_c52e00
*/
void sub_11d8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d8c30ULL || rel >= 0x11d8f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d8f30 size=304 callers=2 calls=3
   calls: sub_12f6050, sub_5d99d0, sub_967240
*/
void sub_11d8f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d8f30ULL || rel >= 0x11d9060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9060 size=320 callers=1 calls=1
   calls: sub_11c9430
*/
void sub_11d9060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9060ULL || rel >= 0x11d91a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d91a0 size=1504 callers=0 calls=8
   calls: sub_112e3d0, sub_112e750, sub_112e830, sub_112e920, sub_112ea00, sub_112eaf0, sub_11c9430, sub_967240
*/
void sub_11d91a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d91a0ULL || rel >= 0x11d9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9780 size=256 callers=1 calls=3
   calls: sub_59b130, sub_967240, sub_b44bb0
*/
void sub_11d9780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9780ULL || rel >= 0x11d9880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9880 size=256 callers=0 calls=0
*/
void sub_11d9880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9880ULL || rel >= 0x11d9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9980 size=16 callers=0 calls=0
*/
void sub_11d9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9980ULL || rel >= 0x11d9990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9990 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11d9990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9990ULL || rel >= 0x11d9a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9a40 size=16 callers=0 calls=0
*/
void sub_11d9a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9a40ULL || rel >= 0x11d9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9a50 size=16 callers=0 calls=0
*/
void sub_11d9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9a50ULL || rel >= 0x11d9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9a60 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11d9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9a60ULL || rel >= 0x11d9b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9b10 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11d9b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9b10ULL || rel >= 0x11d9bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9bc0 size=16 callers=0 calls=0
*/
void sub_11d9bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9bc0ULL || rel >= 0x11d9bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9bd0 size=16 callers=0 calls=0
*/
void sub_11d9bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9bd0ULL || rel >= 0x11d9be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9be0 size=96 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_11d9be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9be0ULL || rel >= 0x11d9c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9c40 size=224 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11d9c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9c40ULL || rel >= 0x11d9d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9d20 size=224 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11d9d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9d20ULL || rel >= 0x11d9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9e00 size=224 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11d9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9e00ULL || rel >= 0x11d9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9ee0 size=224 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11d9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9ee0ULL || rel >= 0x11d9fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011d9fc0 size=224 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11d9fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d9fc0ULL || rel >= 0x11da0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011da0a0 size=224 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_11da0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11da0a0ULL || rel >= 0x11da180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011da180 size=336 callers=1 calls=6
   calls: sub_11c9430, sub_11cb730, sub_11d2690, sub_68d630, sub_68d910, sub_967240
*/
void sub_11da180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11da180ULL || rel >= 0x11da2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011da2d0 size=112 callers=0 calls=3
   calls: sub_11da340, sub_11da5c0, sub_11da650
*/
void sub_11da2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11da2d0ULL || rel >= 0x11da340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011da340 size=640 callers=1 calls=3
   calls: sub_112e3d0, sub_11c9430, sub_967240
*/
void sub_11da340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11da340ULL || rel >= 0x11da5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011da5c0 size=144 callers=1 calls=2
   calls: sub_17c1ba0, sub_68da30
*/
void sub_11da5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11da5c0ULL || rel >= 0x11da650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011da650 size=256 callers=1 calls=2
   calls: sub_17c1ba0, sub_68da30
*/
void sub_11da650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11da650ULL || rel >= 0x11da750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011da750 size=144 callers=0 calls=3
   calls: sub_17c1ba0, sub_68d950, sub_68da30
*/
void sub_11da750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11da750ULL || rel >= 0x11da7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011da7e0 size=16 callers=0 calls=0
*/
void sub_11da7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11da7e0ULL || rel >= 0x11da7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011da7f0 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11da7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11da7f0ULL || rel >= 0x11da860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011da860 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11da860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11da860ULL || rel >= 0x11da8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011da8d0 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11da8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11da8d0ULL || rel >= 0x11da940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011da940 size=144 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_11da940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11da940ULL || rel >= 0x11da9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011da9d0 size=256 callers=0 calls=0
*/
void sub_11da9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11da9d0ULL || rel >= 0x11daad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011daad0 size=288 callers=1 calls=2
   calls: sub_11db920, sub_967240
*/
void sub_11daad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11daad0ULL || rel >= 0x11dabf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dabf0 size=160 callers=0 calls=2
   calls: sub_112e3d0, sub_11dac90
*/
void sub_11dabf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dabf0ULL || rel >= 0x11dac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dac90 size=272 callers=1 calls=2
   calls: sub_11c7e80, sub_967240
*/
void sub_11dac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dac90ULL || rel >= 0x11dada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dada0 size=448 callers=0 calls=2
   calls: sub_11c7e80, sub_967240
*/
void sub_11dada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dada0ULL || rel >= 0x11daf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011daf60 size=464 callers=3 calls=4
   calls: sub_112e3e0, sub_11c7e80, sub_11db920, sub_967240
*/
void sub_11daf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11daf60ULL || rel >= 0x11db130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db130 size=240 callers=0 calls=3
   calls: sub_11c7e80, sub_11daad0, sub_967240
*/
void sub_11db130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db130ULL || rel >= 0x11db220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db220 size=192 callers=0 calls=0
*/
void sub_11db220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db220ULL || rel >= 0x11db2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db2e0 size=192 callers=0 calls=0
*/
void sub_11db2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db2e0ULL || rel >= 0x11db3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db3a0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11db3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db3a0ULL || rel >= 0x11db450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db450 size=192 callers=0 calls=0
*/
void sub_11db450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db450ULL || rel >= 0x11db510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db510 size=192 callers=0 calls=0
*/
void sub_11db510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db510ULL || rel >= 0x11db5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db5d0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11db5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db5d0ULL || rel >= 0x11db680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db680 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11db680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db680ULL || rel >= 0x11db730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db730 size=192 callers=0 calls=0
*/
void sub_11db730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db730ULL || rel >= 0x11db7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db7f0 size=192 callers=0 calls=0
*/
void sub_11db7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db7f0ULL || rel >= 0x11db8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db8b0 size=32 callers=0 calls=0
*/
void sub_11db8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db8b0ULL || rel >= 0x11db8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db8d0 size=16 callers=0 calls=0
*/
void sub_11db8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db8d0ULL || rel >= 0x11db8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db8e0 size=32 callers=0 calls=0
*/
void sub_11db8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db8e0ULL || rel >= 0x11db900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db900 size=32 callers=0 calls=0
*/
void sub_11db900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db900ULL || rel >= 0x11db920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011db920 size=512 callers=6 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_11db920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11db920ULL || rel >= 0x11dbb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dbb20 size=624 callers=3 calls=2
   calls: sub_5db1b0, sub_65d700
*/
void sub_11dbb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dbb20ULL || rel >= 0x11dbd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dbd90 size=432 callers=0 calls=0
*/
void sub_11dbd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dbd90ULL || rel >= 0x11dbf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dbf40 size=1056 callers=1 calls=6
   calls: sub_11ced40, sub_11dff90, sub_11e02b0, sub_ea3d20, sub_ea5de0, sub_ea5e60
*/
void sub_11dbf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dbf40ULL || rel >= 0x11dc360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dc360 size=16 callers=0 calls=0
*/
void sub_11dc360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dc360ULL || rel >= 0x11dc370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dc370 size=16 callers=0 calls=0
*/
void sub_11dc370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dc370ULL || rel >= 0x11dc380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dc380 size=16 callers=0 calls=0
*/
void sub_11dc380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dc380ULL || rel >= 0x11dc390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dc390 size=16 callers=0 calls=0
*/
void sub_11dc390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dc390ULL || rel >= 0x11dc3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dc3a0 size=16 callers=0 calls=0
*/
void sub_11dc3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dc3a0ULL || rel >= 0x11dc3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dc3b0 size=368 callers=0 calls=3
   calls: sub_11d0440, sub_11dc520, sub_967240
*/
void sub_11dc3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dc3b0ULL || rel >= 0x11dc520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dc520 size=288 callers=1 calls=3
   calls: sub_11e05d0, sub_5d99d0, sub_967240
*/
void sub_11dc520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dc520ULL || rel >= 0x11dc640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dc640 size=80 callers=0 calls=2
   calls: sub_11dc690, sub_11dc810
*/
void sub_11dc640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dc640ULL || rel >= 0x11dc690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dc690 size=384 callers=1 calls=3
   calls: sub_11d9780, sub_11e2920, sub_967240
*/
void sub_11dc690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dc690ULL || rel >= 0x11dc810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dc810 size=1200 callers=1 calls=7
   calls: sub_112ea00, sub_11c9150, sub_11caad0, sub_11d1320, sub_11d18c0, sub_11e2b60, sub_967240
*/
void sub_11dc810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dc810ULL || rel >= 0x11dccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dccc0 size=800 callers=0 calls=9
   calls: sub_11d6230, sub_11d8010, sub_11e0fc0, sub_11e1270, sub_11e26e0, sub_11e3540, sub_11e3990, sub_11e39a0, sub_967240
*/
void sub_11dccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dccc0ULL || rel >= 0x11dcfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dcfe0 size=1328 callers=0 calls=7
   calls: sub_11c9150, sub_11c9430, sub_11c9710, sub_11d0150, sub_11d6230, sub_11e0db0, sub_11e0fc0
*/
void sub_11dcfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dcfe0ULL || rel >= 0x11dd510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dd510 size=1536 callers=1 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2070, sub_967240, sub_ea9e40
*/
void sub_11dd510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dd510ULL || rel >= 0x11ddb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ddb10 size=112 callers=1 calls=3
   calls: sub_1061810, sub_117a6c0, sub_117a970
*/
void sub_11ddb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ddb10ULL || rel >= 0x11ddb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ddb80 size=448 callers=0 calls=8
   calls: sub_112e3e0, sub_11d0150, sub_11daf60, sub_11e1270, sub_11e1590, sub_967240, sub_ea3d20, sub_ea5dd0
*/
void sub_11ddb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ddb80ULL || rel >= 0x11ddd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ddd40 size=64 callers=1 calls=0
*/
void sub_11ddd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ddd40ULL || rel >= 0x11ddd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ddd80 size=208 callers=0 calls=2
   calls: sub_11db920, sub_967240
*/
void sub_11ddd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ddd80ULL || rel >= 0x11dde50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dde50 size=80 callers=0 calls=1
   calls: sub_11d0150
*/
void sub_11dde50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dde50ULL || rel >= 0x11ddea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ddea0 size=80 callers=0 calls=1
   calls: sub_11e1270
*/
void sub_11ddea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ddea0ULL || rel >= 0x11ddef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ddef0 size=144 callers=0 calls=2
   calls: sub_112e3d0, sub_11c9710
*/
void sub_11ddef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ddef0ULL || rel >= 0x11ddf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ddf80 size=208 callers=0 calls=2
   calls: sub_11d5ff0, sub_11de050
*/
void sub_11ddf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ddf80ULL || rel >= 0x11de050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011de050 size=160 callers=2 calls=2
   calls: sub_11d5ff0, sub_11d73a0
*/
void sub_11de050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11de050ULL || rel >= 0x11de0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011de0f0 size=576 callers=0 calls=4
   calls: sub_112ea00, sub_11cef40, sub_11e14b0, sub_5d99d0
*/
void sub_11de0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11de0f0ULL || rel >= 0x11de330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011de330 size=112 callers=2 calls=0
*/
void sub_11de330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11de330ULL || rel >= 0x11de3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011de3a0 size=800 callers=0 calls=8
   calls: sub_11cbad0, sub_11daf60, sub_11db920, sub_11e0fc0, sub_11e1270, sub_11e1590, sub_11e4bd0, sub_967240
*/
void sub_11de3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11de3a0ULL || rel >= 0x11de6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011de6c0 size=544 callers=1 calls=9
   calls: sub_112e3e0, sub_11c9150, sub_11c9430, sub_11cbb30, sub_11e0fc0, sub_11e1270, sub_11e17d0, sub_11e4c30, sub_967240
*/
void sub_11de6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11de6c0ULL || rel >= 0x11de8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011de8e0 size=560 callers=0 calls=4
   calls: sub_112e3d0, sub_112e3e0, sub_11c9710, sub_11d5ff0
*/
void sub_11de8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11de8e0ULL || rel >= 0x11deb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011deb10 size=16 callers=0 calls=0
*/
void sub_11deb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11deb10ULL || rel >= 0x11deb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011deb20 size=208 callers=1 calls=5
   calls: sub_112e3d0, sub_112e3e0, sub_11c9150, sub_11d0150, sub_11e0fc0
*/
void sub_11deb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11deb20ULL || rel >= 0x11debf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011debf0 size=144 callers=0 calls=5
   calls: sub_112e3e0, sub_11d6230, sub_11d8010, sub_11e0fc0, sub_11e1270
*/
void sub_11debf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11debf0ULL || rel >= 0x11dec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dec80 size=112 callers=1 calls=4
   calls: sub_11d6230, sub_11d8010, sub_11e0fc0, sub_11e1270
*/
void sub_11dec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dec80ULL || rel >= 0x11decf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011decf0 size=16 callers=0 calls=0
*/
void sub_11decf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11decf0ULL || rel >= 0x11ded00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011ded00 size=2768 callers=0 calls=18
   calls: sub_112e3e0, sub_112ea00, sub_11c9150, sub_11c9430, sub_11c9710, sub_11cd590, sub_11ceb20, sub_11ced40, sub_11d2700, sub_11d6230, sub_11e19d0, sub_11e1bd0
   ... +6 more
*/
void sub_11ded00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ded00ULL || rel >= 0x11df7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011df7d0 size=1456 callers=1 calls=5
   calls: sub_112e3d0, sub_11c9430, sub_11cb860, sub_11e1270, sub_967240
*/
void sub_11df7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11df7d0ULL || rel >= 0x11dfd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dfd80 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11dfd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dfd80ULL || rel >= 0x11dfe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dfe30 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11dfe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dfe30ULL || rel >= 0x11dfee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dfee0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_11dfee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dfee0ULL || rel >= 0x11dff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011dff90 size=800 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_11dff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dff90ULL || rel >= 0x11e02b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e02b0 size=800 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_11e02b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e02b0ULL || rel >= 0x11e05d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e05d0 size=240 callers=1 calls=1
   calls: sub_5db1b0
*/
void sub_11e05d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e05d0ULL || rel >= 0x11e06c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e06c0 size=192 callers=0 calls=0
*/
void sub_11e06c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e06c0ULL || rel >= 0x11e0780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e0780 size=192 callers=0 calls=0
*/
void sub_11e0780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e0780ULL || rel >= 0x11e0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e0840 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_11e0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e0840ULL || rel >= 0x11e08b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e08b0 size=144 callers=0 calls=0
*/
void sub_11e08b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e08b0ULL || rel >= 0x11e0940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e0940 size=192 callers=0 calls=0
*/
void sub_11e0940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e0940ULL || rel >= 0x11e0a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e0a00 size=192 callers=0 calls=0
*/
void sub_11e0a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e0a00ULL || rel >= 0x11e0ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e0ac0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_11e0ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e0ac0ULL || rel >= 0x11e0b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e0b30 size=144 callers=0 calls=0
*/
void sub_11e0b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e0b30ULL || rel >= 0x11e0bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e0bc0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_11e0bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e0bc0ULL || rel >= 0x11e0c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e0c30 size=192 callers=0 calls=0
*/
void sub_11e0c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e0c30ULL || rel >= 0x11e0cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e0cf0 size=192 callers=0 calls=0
*/
void sub_11e0cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e0cf0ULL || rel >= 0x11e0db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e0db0 size=528 callers=2 calls=0
*/
void sub_11e0db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e0db0ULL || rel >= 0x11e0fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e0fc0 size=336 callers=16 calls=3
   calls: sub_11e1110, sub_5cf8e0, sub_5cf8f0
*/
void sub_11e0fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e0fc0ULL || rel >= 0x11e1110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1110 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11e1110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1110ULL || rel >= 0x11e1200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1200 size=32 callers=0 calls=0
*/
void sub_11e1200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1200ULL || rel >= 0x11e1220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1220 size=16 callers=0 calls=0
*/
void sub_11e1220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1220ULL || rel >= 0x11e1230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1230 size=32 callers=0 calls=0
*/
void sub_11e1230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1230ULL || rel >= 0x11e1250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1250 size=32 callers=0 calls=0
*/
void sub_11e1250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1250ULL || rel >= 0x11e1270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1270 size=336 callers=23 calls=3
   calls: sub_11e13c0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11e1270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1270ULL || rel >= 0x11e13c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e13c0 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11e13c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e13c0ULL || rel >= 0x11e14b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e14b0 size=224 callers=1 calls=1
   calls: sub_11e5340
*/
void sub_11e14b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e14b0ULL || rel >= 0x11e1590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1590 size=336 callers=3 calls=3
   calls: sub_11e16e0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11e1590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1590ULL || rel >= 0x11e16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e16e0 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11e16e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e16e0ULL || rel >= 0x11e17d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e17d0 size=512 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_11e17d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e17d0ULL || rel >= 0x11e19d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e19d0 size=512 callers=7 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_11e19d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e19d0ULL || rel >= 0x11e1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1bd0 size=336 callers=6 calls=3
   calls: sub_11e1d20, sub_5cf8e0, sub_5cf8f0
*/
void sub_11e1bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1bd0ULL || rel >= 0x11e1d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1d20 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11e1d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1d20ULL || rel >= 0x11e1e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1e10 size=144 callers=0 calls=5
   calls: sub_112e3e0, sub_11cc4b0, sub_11e1270, sub_11e1bd0, sub_11e7550
*/
void sub_11e1e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1e10ULL || rel >= 0x11e1ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1ea0 size=16 callers=0 calls=0
*/
void sub_11e1ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1ea0ULL || rel >= 0x11e1eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1eb0 size=16 callers=0 calls=0
*/
void sub_11e1eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1eb0ULL || rel >= 0x11e1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1ec0 size=16 callers=0 calls=0
*/
void sub_11e1ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1ec0ULL || rel >= 0x11e1ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1ed0 size=96 callers=0 calls=1
   calls: sub_11e19d0
*/
void sub_11e1ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1ed0ULL || rel >= 0x11e1f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1f30 size=16 callers=0 calls=0
*/
void sub_11e1f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1f30ULL || rel >= 0x11e1f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1f40 size=16 callers=0 calls=0
*/
void sub_11e1f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1f40ULL || rel >= 0x11e1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1f50 size=16 callers=0 calls=0
*/
void sub_11e1f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1f50ULL || rel >= 0x11e1f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e1f60 size=1456 callers=0 calls=8
   calls: sub_112e3e0, sub_11c9710, sub_11d2700, sub_11d5ff0, sub_11d6230, sub_11d7d60, sub_ea3d20, sub_ea5df0
*/
void sub_11e1f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e1f60ULL || rel >= 0x11e2510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e2510 size=16 callers=0 calls=0
*/
void sub_11e2510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e2510ULL || rel >= 0x11e2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e2520 size=80 callers=0 calls=0
*/
void sub_11e2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e2520ULL || rel >= 0x11e2570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e2570 size=16 callers=0 calls=0
*/
void sub_11e2570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e2570ULL || rel >= 0x11e2580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e2580 size=16 callers=0 calls=0
*/
void sub_11e2580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e2580ULL || rel >= 0x11e2590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e2590 size=16 callers=0 calls=0
*/
void sub_11e2590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e2590ULL || rel >= 0x11e25a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e25a0 size=208 callers=0 calls=0
*/
void sub_11e25a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e25a0ULL || rel >= 0x11e2670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e2670 size=16 callers=0 calls=0
*/
void sub_11e2670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e2670ULL || rel >= 0x11e2680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e2680 size=32 callers=0 calls=0
*/
void sub_11e2680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e2680ULL || rel >= 0x11e26a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e26a0 size=32 callers=0 calls=0
*/
void sub_11e26a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e26a0ULL || rel >= 0x11e26c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e26c0 size=16 callers=0 calls=0
*/
void sub_11e26c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e26c0ULL || rel >= 0x11e26d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e26d0 size=16 callers=0 calls=0
*/
void sub_11e26d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e26d0ULL || rel >= 0x11e26e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e26e0 size=336 callers=4 calls=3
   calls: sub_11e2830, sub_5cf8e0, sub_5cf8f0
*/
void sub_11e26e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e26e0ULL || rel >= 0x11e2830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e2830 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11e2830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e2830ULL || rel >= 0x11e2920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e2920 size=336 callers=1 calls=3
   calls: sub_11e2a70, sub_5cf8e0, sub_5cf8f0
*/
void sub_11e2920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e2920ULL || rel >= 0x11e2a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e2a70 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11e2a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e2a70ULL || rel >= 0x11e2b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e2b60 size=336 callers=12 calls=3
   calls: sub_11e2cb0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11e2b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e2b60ULL || rel >= 0x11e2cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e2cb0 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_11e2cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e2cb0ULL || rel >= 0x11e2da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e2da0 size=400 callers=0 calls=0
*/
void sub_11e2da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e2da0ULL || rel >= 0x11e2f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e2f30 size=224 callers=1 calls=2
   calls: sub_5cf8c0, sub_5db1b0
*/
void sub_11e2f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e2f30ULL || rel >= 0x11e3010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e3010 size=1168 callers=0 calls=2
   calls: sub_1157ef0, sub_117ae60
*/
void sub_11e3010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e3010ULL || rel >= 0x11e34a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e34a0 size=160 callers=0 calls=1
   calls: sub_5cf8f0
*/
void sub_11e34a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e34a0ULL || rel >= 0x11e3540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e3540 size=16 callers=1 calls=0
*/
void sub_11e3540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e3540ULL || rel >= 0x11e3550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e3550 size=1088 callers=0 calls=2
   calls: sub_1157ef0, sub_117ae60
*/
void sub_11e3550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e3550ULL || rel >= 0x11e3990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e3990 size=16 callers=1 calls=0
*/
void sub_11e3990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e3990ULL || rel >= 0x11e39a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e39a0 size=16 callers=1 calls=0
*/
void sub_11e39a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e39a0ULL || rel >= 0x11e39b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e39b0 size=496 callers=0 calls=4
   calls: sub_112eaf0, sub_1158640, sub_117ae60, sub_ead150
*/
void sub_11e39b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e39b0ULL || rel >= 0x11e3ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e3ba0 size=224 callers=1 calls=1
   calls: sub_5cf8f0
*/
void sub_11e3ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e3ba0ULL || rel >= 0x11e3c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e3c80 size=208 callers=1 calls=1
   calls: sub_5cf8f0
*/
void sub_11e3c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e3c80ULL || rel >= 0x11e3d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e3d50 size=224 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_11e3d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e3d50ULL || rel >= 0x11e3e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e3e30 size=224 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_11e3e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e3e30ULL || rel >= 0x11e3f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e3f10 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11e3f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e3f10ULL || rel >= 0x11e3f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e3f80 size=224 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_11e3f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e3f80ULL || rel >= 0x11e4060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4060 size=224 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_11e4060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4060ULL || rel >= 0x11e4140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4140 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11e4140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4140ULL || rel >= 0x11e41b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e41b0 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11e41b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e41b0ULL || rel >= 0x11e4220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4220 size=224 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_11e4220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4220ULL || rel >= 0x11e4300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4300 size=224 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_11e4300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4300ULL || rel >= 0x11e43e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e43e0 size=16 callers=0 calls=0
*/
void sub_11e43e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e43e0ULL || rel >= 0x11e43f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e43f0 size=16 callers=0 calls=0
*/
void sub_11e43f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e43f0ULL || rel >= 0x11e4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4400 size=16 callers=0 calls=0
*/
void sub_11e4400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4400ULL || rel >= 0x11e4410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4410 size=16 callers=0 calls=0
*/
void sub_11e4410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4410ULL || rel >= 0x11e4420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4420 size=208 callers=0 calls=4
   calls: sub_112e920, sub_11361b0, sub_1136910, sub_1160e20
*/
void sub_11e4420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4420ULL || rel >= 0x11e44f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e44f0 size=16 callers=0 calls=0
*/
void sub_11e44f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e44f0ULL || rel >= 0x11e4500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4500 size=16 callers=0 calls=0
*/
void sub_11e4500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4500ULL || rel >= 0x11e4510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4510 size=16 callers=0 calls=0
*/
void sub_11e4510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4510ULL || rel >= 0x11e4520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4520 size=96 callers=0 calls=1
   calls: sub_1136910
*/
void sub_11e4520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4520ULL || rel >= 0x11e4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4580 size=16 callers=0 calls=0
*/
void sub_11e4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4580ULL || rel >= 0x11e4590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4590 size=16 callers=0 calls=0
*/
void sub_11e4590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4590ULL || rel >= 0x11e45a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e45a0 size=16 callers=0 calls=0
*/
void sub_11e45a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e45a0ULL || rel >= 0x11e45b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e45b0 size=16 callers=0 calls=0
*/
void sub_11e45b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e45b0ULL || rel >= 0x11e45c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e45c0 size=16 callers=0 calls=0
*/
void sub_11e45c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e45c0ULL || rel >= 0x11e45d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e45d0 size=16 callers=0 calls=0
*/
void sub_11e45d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e45d0ULL || rel >= 0x11e45e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e45e0 size=16 callers=0 calls=0
*/
void sub_11e45e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e45e0ULL || rel >= 0x11e45f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e45f0 size=16 callers=0 calls=0
*/
void sub_11e45f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e45f0ULL || rel >= 0x11e4600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4600 size=16 callers=0 calls=0
*/
void sub_11e4600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4600ULL || rel >= 0x11e4610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4610 size=16 callers=0 calls=0
*/
void sub_11e4610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4610ULL || rel >= 0x11e4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4620 size=16 callers=0 calls=0
*/
void sub_11e4620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4620ULL || rel >= 0x11e4630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4630 size=160 callers=0 calls=3
   calls: sub_1136910, sub_113c440, sub_1160e20
*/
void sub_11e4630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4630ULL || rel >= 0x11e46d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e46d0 size=16 callers=0 calls=0
*/
void sub_11e46d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e46d0ULL || rel >= 0x11e46e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e46e0 size=16 callers=0 calls=0
*/
void sub_11e46e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e46e0ULL || rel >= 0x11e46f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e46f0 size=16 callers=0 calls=0
*/
void sub_11e46f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e46f0ULL || rel >= 0x11e4700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4700 size=112 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_11e4700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4700ULL || rel >= 0x11e4770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4770 size=48 callers=0 calls=1
   calls: sub_112ea00
*/
void sub_11e4770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4770ULL || rel >= 0x11e47a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e47a0 size=640 callers=1 calls=11
   calls: sub_110c6a0, sub_1148c40, sub_119e440, sub_11d8f30, sub_598de0, sub_618ec0, sub_619060, sub_967240, sub_989700, sub_c52c40, sub_c52e00
*/
void sub_11e47a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e47a0ULL || rel >= 0x11e4a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4a20 size=112 callers=1 calls=1
   calls: sub_11d0150
*/
void sub_11e4a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4a20ULL || rel >= 0x11e4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4a90 size=320 callers=0 calls=2
   calls: sub_112eaf0, sub_11d0150
*/
void sub_11e4a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4a90ULL || rel >= 0x11e4bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4bd0 size=96 callers=1 calls=0
*/
void sub_11e4bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4bd0ULL || rel >= 0x11e4c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4c30 size=16 callers=1 calls=0
*/
void sub_11e4c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4c30ULL || rel >= 0x11e4c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4c40 size=16 callers=1 calls=0
*/
void sub_11e4c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4c40ULL || rel >= 0x11e4c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4c50 size=240 callers=0 calls=0
*/
void sub_11e4c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4c50ULL || rel >= 0x11e4d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4d40 size=240 callers=0 calls=0
*/
void sub_11e4d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4d40ULL || rel >= 0x11e4e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4e30 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11e4e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4e30ULL || rel >= 0x11e4ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4ea0 size=240 callers=0 calls=0
*/
void sub_11e4ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4ea0ULL || rel >= 0x11e4f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e4f90 size=240 callers=0 calls=0
*/
void sub_11e4f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4f90ULL || rel >= 0x11e5080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e5080 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11e5080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e5080ULL || rel >= 0x11e50f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e50f0 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11e50f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e50f0ULL || rel >= 0x11e5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e5160 size=240 callers=0 calls=0
*/
void sub_11e5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e5160ULL || rel >= 0x11e5250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e5250 size=240 callers=0 calls=0
*/
void sub_11e5250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e5250ULL || rel >= 0x11e5340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e5340 size=80 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_11e5340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e5340ULL || rel >= 0x11e5390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011e5390 size=2048 callers=0 calls=7
   calls: sub_13576a0, sub_13576d0, sub_967240, sub_972c70, sub_ea3d10, sub_ea4800, sub_ea4810
   ref: _ZN2nn3ldn13CreateNetworkERKNS0_13NetworkConfigERKNS0_14SecurityConfigERKNS0_10UserConfigE
*/
void nn_ldn_CreateNetwork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e5390ULL || rel >= 0x11e5b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

