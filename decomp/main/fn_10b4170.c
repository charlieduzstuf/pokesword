/* main functions 010b4170..010c3f70 (138 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 010b4170 size=48 callers=0 calls=0
*/
void sub_10b4170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4170ULL || rel >= 0x10b41a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b41a0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b41a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b41a0ULL || rel >= 0x10b4260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4260 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b4260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4260ULL || rel >= 0x10b42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b42d0 size=144 callers=0 calls=0
*/
void sub_10b42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b42d0ULL || rel >= 0x10b4360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4360 size=144 callers=0 calls=0
*/
void sub_10b4360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4360ULL || rel >= 0x10b43f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b43f0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b43f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b43f0ULL || rel >= 0x10b4460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4460 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b4460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4460ULL || rel >= 0x10b44d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b44d0 size=144 callers=0 calls=0
*/
void sub_10b44d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b44d0ULL || rel >= 0x10b4560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4560 size=144 callers=0 calls=0
*/
void sub_10b4560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4560ULL || rel >= 0x10b45f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b45f0 size=48 callers=0 calls=0
*/
void sub_10b45f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b45f0ULL || rel >= 0x10b4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4620 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b4620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4620ULL || rel >= 0x10b46e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b46e0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b46e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b46e0ULL || rel >= 0x10b4750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4750 size=528 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10b4750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4750ULL || rel >= 0x10b4960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4960 size=16 callers=0 calls=0
*/
void sub_10b4960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4960ULL || rel >= 0x10b4970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4970 size=16 callers=0 calls=0
*/
void sub_10b4970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4970ULL || rel >= 0x10b4980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4980 size=16 callers=0 calls=0
*/
void sub_10b4980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4980ULL || rel >= 0x10b4990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4990 size=64 callers=0 calls=1
   calls: sub_104dcc0
*/
void sub_10b4990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4990ULL || rel >= 0x10b49d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b49d0 size=64 callers=0 calls=0
*/
void sub_10b49d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b49d0ULL || rel >= 0x10b4a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4a10 size=32 callers=0 calls=0
*/
void sub_10b4a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4a10ULL || rel >= 0x10b4a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4a30 size=16 callers=0 calls=0
*/
void sub_10b4a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4a30ULL || rel >= 0x10b4a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4a40 size=16 callers=0 calls=0
*/
void sub_10b4a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4a40ULL || rel >= 0x10b4a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4a50 size=64 callers=0 calls=0
*/
void sub_10b4a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4a50ULL || rel >= 0x10b4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4a90 size=32 callers=0 calls=0
*/
void sub_10b4a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4a90ULL || rel >= 0x10b4ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4ab0 size=16 callers=0 calls=0
*/
void sub_10b4ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4ab0ULL || rel >= 0x10b4ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4ac0 size=96 callers=0 calls=2
   calls: sub_10f5c50, sub_f9cab0
*/
void sub_10b4ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4ac0ULL || rel >= 0x10b4b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4b20 size=64 callers=0 calls=0
*/
void sub_10b4b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4b20ULL || rel >= 0x10b4b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4b60 size=32 callers=0 calls=0
*/
void sub_10b4b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4b60ULL || rel >= 0x10b4b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4b80 size=16 callers=0 calls=0
*/
void sub_10b4b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4b80ULL || rel >= 0x10b4b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4b90 size=304 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10b4b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4b90ULL || rel >= 0x10b4cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4cc0 size=144 callers=0 calls=0
*/
void sub_10b4cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4cc0ULL || rel >= 0x10b4d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4d50 size=144 callers=0 calls=0
*/
void sub_10b4d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4d50ULL || rel >= 0x10b4de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4de0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b4de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4de0ULL || rel >= 0x10b4e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4e50 size=64 callers=0 calls=1
   calls: sub_10b5480
*/
void sub_10b4e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4e50ULL || rel >= 0x10b4e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4e90 size=16 callers=0 calls=0
*/
void sub_10b4e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4e90ULL || rel >= 0x10b4ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4ea0 size=48 callers=0 calls=0
*/
void sub_10b4ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4ea0ULL || rel >= 0x10b4ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4ed0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b4ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4ed0ULL || rel >= 0x10b4f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b4f90 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b4f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4f90ULL || rel >= 0x10b5000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5000 size=144 callers=0 calls=0
*/
void sub_10b5000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5000ULL || rel >= 0x10b5090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5090 size=144 callers=0 calls=0
*/
void sub_10b5090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5090ULL || rel >= 0x10b5120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5120 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b5120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5120ULL || rel >= 0x10b5190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5190 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b5190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5190ULL || rel >= 0x10b5200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5200 size=144 callers=0 calls=0
*/
void sub_10b5200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5200ULL || rel >= 0x10b5290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5290 size=144 callers=0 calls=0
*/
void sub_10b5290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5290ULL || rel >= 0x10b5320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5320 size=48 callers=0 calls=0
*/
void sub_10b5320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5320ULL || rel >= 0x10b5350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5350 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b5350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5350ULL || rel >= 0x10b5410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5410 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b5410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5410ULL || rel >= 0x10b5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5480 size=528 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10b5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5480ULL || rel >= 0x10b5690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5690 size=16 callers=0 calls=0
*/
void sub_10b5690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5690ULL || rel >= 0x10b56a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b56a0 size=16 callers=0 calls=0
*/
void sub_10b56a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b56a0ULL || rel >= 0x10b56b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b56b0 size=16 callers=0 calls=0
*/
void sub_10b56b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b56b0ULL || rel >= 0x10b56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b56c0 size=112 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10b56c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b56c0ULL || rel >= 0x10b5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5730 size=80 callers=0 calls=0
*/
void sub_10b5730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5730ULL || rel >= 0x10b5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5780 size=96 callers=0 calls=0
*/
void sub_10b5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5780ULL || rel >= 0x10b57e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b57e0 size=32 callers=0 calls=0
*/
void sub_10b57e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b57e0ULL || rel >= 0x10b5800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5800 size=320 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10b5800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5800ULL || rel >= 0x10b5940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5940 size=144 callers=0 calls=0
*/
void sub_10b5940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5940ULL || rel >= 0x10b59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b59d0 size=144 callers=0 calls=0
*/
void sub_10b59d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b59d0ULL || rel >= 0x10b5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5a60 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b5a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5a60ULL || rel >= 0x10b5ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5ad0 size=64 callers=0 calls=1
   calls: sub_10b6100
*/
void sub_10b5ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5ad0ULL || rel >= 0x10b5b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5b10 size=16 callers=0 calls=0
*/
void sub_10b5b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5b10ULL || rel >= 0x10b5b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5b20 size=48 callers=0 calls=0
*/
void sub_10b5b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5b20ULL || rel >= 0x10b5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5b50 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5b50ULL || rel >= 0x10b5c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5c10 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b5c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5c10ULL || rel >= 0x10b5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5c80 size=144 callers=0 calls=0
*/
void sub_10b5c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5c80ULL || rel >= 0x10b5d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5d10 size=144 callers=0 calls=0
*/
void sub_10b5d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5d10ULL || rel >= 0x10b5da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5da0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b5da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5da0ULL || rel >= 0x10b5e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5e10 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b5e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5e10ULL || rel >= 0x10b5e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5e80 size=144 callers=0 calls=0
*/
void sub_10b5e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5e80ULL || rel >= 0x10b5f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5f10 size=144 callers=0 calls=0
*/
void sub_10b5f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5f10ULL || rel >= 0x10b5fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5fa0 size=48 callers=0 calls=0
*/
void sub_10b5fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5fa0ULL || rel >= 0x10b5fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b5fd0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b5fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b5fd0ULL || rel >= 0x10b6090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6090 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b6090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6090ULL || rel >= 0x10b6100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6100 size=528 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10b6100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6100ULL || rel >= 0x10b6310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6310 size=288 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10b6310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6310ULL || rel >= 0x10b6430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6430 size=144 callers=0 calls=0
*/
void sub_10b6430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6430ULL || rel >= 0x10b64c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b64c0 size=144 callers=0 calls=0
*/
void sub_10b64c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b64c0ULL || rel >= 0x10b6550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6550 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b6550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6550ULL || rel >= 0x10b65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b65c0 size=64 callers=0 calls=1
   calls: sub_10b6bf0
*/
void sub_10b65c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b65c0ULL || rel >= 0x10b6600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6600 size=16 callers=0 calls=0
*/
void sub_10b6600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6600ULL || rel >= 0x10b6610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6610 size=48 callers=0 calls=0
*/
void sub_10b6610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6610ULL || rel >= 0x10b6640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6640 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b6640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6640ULL || rel >= 0x10b6700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6700 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b6700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6700ULL || rel >= 0x10b6770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6770 size=144 callers=0 calls=0
*/
void sub_10b6770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6770ULL || rel >= 0x10b6800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6800 size=144 callers=0 calls=0
*/
void sub_10b6800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6800ULL || rel >= 0x10b6890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6890 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b6890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6890ULL || rel >= 0x10b6900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6900 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b6900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6900ULL || rel >= 0x10b6970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6970 size=144 callers=0 calls=0
*/
void sub_10b6970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6970ULL || rel >= 0x10b6a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6a00 size=144 callers=0 calls=0
*/
void sub_10b6a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6a00ULL || rel >= 0x10b6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6a90 size=48 callers=0 calls=0
*/
void sub_10b6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6a90ULL || rel >= 0x10b6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6ac0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b6ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6ac0ULL || rel >= 0x10b6b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6b80 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b6b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6b80ULL || rel >= 0x10b6bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6bf0 size=528 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10b6bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6bf0ULL || rel >= 0x10b6e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6e00 size=288 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10b6e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6e00ULL || rel >= 0x10b6f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6f20 size=144 callers=0 calls=0
*/
void sub_10b6f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6f20ULL || rel >= 0x10b6fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b6fb0 size=144 callers=0 calls=0
*/
void sub_10b6fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b6fb0ULL || rel >= 0x10b7040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7040 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b7040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7040ULL || rel >= 0x10b70b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b70b0 size=64 callers=0 calls=1
   calls: sub_10b76e0
*/
void sub_10b70b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b70b0ULL || rel >= 0x10b70f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b70f0 size=16 callers=0 calls=0
*/
void sub_10b70f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b70f0ULL || rel >= 0x10b7100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7100 size=48 callers=0 calls=0
*/
void sub_10b7100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7100ULL || rel >= 0x10b7130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7130 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b7130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7130ULL || rel >= 0x10b71f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b71f0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b71f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b71f0ULL || rel >= 0x10b7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7260 size=144 callers=0 calls=0
*/
void sub_10b7260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7260ULL || rel >= 0x10b72f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b72f0 size=144 callers=0 calls=0
*/
void sub_10b72f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b72f0ULL || rel >= 0x10b7380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7380 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b7380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7380ULL || rel >= 0x10b73f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b73f0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b73f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b73f0ULL || rel >= 0x10b7460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7460 size=144 callers=0 calls=0
*/
void sub_10b7460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7460ULL || rel >= 0x10b74f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b74f0 size=144 callers=0 calls=0
*/
void sub_10b74f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b74f0ULL || rel >= 0x10b7580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7580 size=48 callers=0 calls=0
*/
void sub_10b7580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7580ULL || rel >= 0x10b75b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b75b0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b75b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b75b0ULL || rel >= 0x10b7670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7670 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b7670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7670ULL || rel >= 0x10b76e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b76e0 size=528 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10b76e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b76e0ULL || rel >= 0x10b78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b78f0 size=288 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10b78f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b78f0ULL || rel >= 0x10b7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7a10 size=144 callers=0 calls=0
*/
void sub_10b7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7a10ULL || rel >= 0x10b7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7aa0 size=144 callers=0 calls=0
*/
void sub_10b7aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7aa0ULL || rel >= 0x10b7b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7b30 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b7b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7b30ULL || rel >= 0x10b7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7ba0 size=64 callers=0 calls=1
   calls: sub_10b81d0
*/
void sub_10b7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7ba0ULL || rel >= 0x10b7be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7be0 size=16 callers=0 calls=0
*/
void sub_10b7be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7be0ULL || rel >= 0x10b7bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7bf0 size=48 callers=0 calls=0
*/
void sub_10b7bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7bf0ULL || rel >= 0x10b7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7c20 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b7c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7c20ULL || rel >= 0x10b7ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7ce0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b7ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7ce0ULL || rel >= 0x10b7d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7d50 size=144 callers=0 calls=0
*/
void sub_10b7d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7d50ULL || rel >= 0x10b7de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7de0 size=144 callers=0 calls=0
*/
void sub_10b7de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7de0ULL || rel >= 0x10b7e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7e70 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b7e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7e70ULL || rel >= 0x10b7ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7ee0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10b7ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7ee0ULL || rel >= 0x10b7f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7f50 size=144 callers=0 calls=0
*/
void sub_10b7f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7f50ULL || rel >= 0x10b7fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b7fe0 size=144 callers=0 calls=0
*/
void sub_10b7fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b7fe0ULL || rel >= 0x10b8070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8070 size=48 callers=0 calls=0
*/
void sub_10b8070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8070ULL || rel >= 0x10b80a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b80a0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b80a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b80a0ULL || rel >= 0x10b8160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8160 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10b8160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8160ULL || rel >= 0x10b81d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b81d0 size=528 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10b81d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b81d0ULL || rel >= 0x10b83e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b83e0 size=16 callers=0 calls=0
*/
void sub_10b83e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b83e0ULL || rel >= 0x10b83f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b83f0 size=64 callers=0 calls=0
*/
void sub_10b83f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b83f0ULL || rel >= 0x10b8430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8430 size=32 callers=0 calls=0
*/
void sub_10b8430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8430ULL || rel >= 0x10b8450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8450 size=16 callers=0 calls=0
*/
void sub_10b8450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8450ULL || rel >= 0x10b8460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8460 size=16 callers=0 calls=0
*/
void sub_10b8460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8460ULL || rel >= 0x10b8470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8470 size=64 callers=0 calls=0
*/
void sub_10b8470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8470ULL || rel >= 0x10b84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b84b0 size=32 callers=0 calls=0
*/
void sub_10b84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b84b0ULL || rel >= 0x10b84d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b84d0 size=16 callers=0 calls=0
*/
void sub_10b84d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b84d0ULL || rel >= 0x10b84e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b84e0 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10b84e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b84e0ULL || rel >= 0x10b8540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8540 size=64 callers=0 calls=0
*/
void sub_10b8540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8540ULL || rel >= 0x10b8580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8580 size=32 callers=0 calls=0
*/
void sub_10b8580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8580ULL || rel >= 0x10b85a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b85a0 size=16 callers=0 calls=0
*/
void sub_10b85a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b85a0ULL || rel >= 0x10b85b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b85b0 size=16 callers=0 calls=0
*/
void sub_10b85b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b85b0ULL || rel >= 0x10b85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b85c0 size=64 callers=0 calls=0
*/
void sub_10b85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b85c0ULL || rel >= 0x10b8600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8600 size=32 callers=0 calls=0
*/
void sub_10b8600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8600ULL || rel >= 0x10b8620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8620 size=16 callers=0 calls=0
*/
void sub_10b8620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8620ULL || rel >= 0x10b8630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8630 size=16 callers=0 calls=0
*/
void sub_10b8630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8630ULL || rel >= 0x10b8640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8640 size=64 callers=0 calls=0
*/
void sub_10b8640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8640ULL || rel >= 0x10b8680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8680 size=32 callers=0 calls=0
*/
void sub_10b8680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8680ULL || rel >= 0x10b86a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b86a0 size=16 callers=0 calls=0
*/
void sub_10b86a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b86a0ULL || rel >= 0x10b86b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b86b0 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10b86b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b86b0ULL || rel >= 0x10b8710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8710 size=64 callers=0 calls=0
*/
void sub_10b8710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8710ULL || rel >= 0x10b8750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8750 size=32 callers=0 calls=0
*/
void sub_10b8750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8750ULL || rel >= 0x10b8770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8770 size=16 callers=0 calls=0
*/
void sub_10b8770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8770ULL || rel >= 0x10b8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8780 size=16 callers=0 calls=0
*/
void sub_10b8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8780ULL || rel >= 0x10b8790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8790 size=64 callers=0 calls=0
*/
void sub_10b8790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8790ULL || rel >= 0x10b87d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b87d0 size=32 callers=0 calls=0
*/
void sub_10b87d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b87d0ULL || rel >= 0x10b87f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b87f0 size=16 callers=0 calls=0
*/
void sub_10b87f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b87f0ULL || rel >= 0x10b8800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8800 size=16 callers=0 calls=0
*/
void sub_10b8800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8800ULL || rel >= 0x10b8810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8810 size=64 callers=0 calls=0
*/
void sub_10b8810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8810ULL || rel >= 0x10b8850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8850 size=32 callers=0 calls=0
*/
void sub_10b8850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8850ULL || rel >= 0x10b8870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8870 size=16 callers=0 calls=0
*/
void sub_10b8870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8870ULL || rel >= 0x10b8880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8880 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10b8880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8880ULL || rel >= 0x10b88e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b88e0 size=64 callers=0 calls=0
*/
void sub_10b88e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b88e0ULL || rel >= 0x10b8920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8920 size=32 callers=0 calls=0
*/
void sub_10b8920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8920ULL || rel >= 0x10b8940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8940 size=16 callers=0 calls=0
*/
void sub_10b8940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8940ULL || rel >= 0x10b8950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8950 size=128 callers=0 calls=0
*/
void sub_10b8950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8950ULL || rel >= 0x10b89d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b89d0 size=112 callers=0 calls=1
   calls: sub_10f77f0
*/
void sub_10b89d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b89d0ULL || rel >= 0x10b8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8a40 size=16 callers=0 calls=0
*/
void sub_10b8a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8a40ULL || rel >= 0x10b8a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8a50 size=80 callers=0 calls=0
*/
void sub_10b8a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8a50ULL || rel >= 0x10b8aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8aa0 size=128 callers=0 calls=0
*/
void sub_10b8aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8aa0ULL || rel >= 0x10b8b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8b20 size=288 callers=0 calls=3
   calls: sub_10f67c0, sub_10f78f0, sub_10f7a00
*/
void sub_10b8b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8b20ULL || rel >= 0x10b8c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8c40 size=16 callers=0 calls=0
*/
void sub_10b8c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8c40ULL || rel >= 0x10b8c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8c50 size=80 callers=0 calls=0
*/
void sub_10b8c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8c50ULL || rel >= 0x10b8ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8ca0 size=128 callers=0 calls=0
*/
void sub_10b8ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8ca0ULL || rel >= 0x10b8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8d20 size=528 callers=0 calls=9
   calls: Result_2, sub_6a0d40, sub_6a0d90, sub_6a3240, sub_6a3250, sub_6a44e0, sub_6a4b80, sub_6a4b90, sub_6a4ce0
*/
void sub_10b8d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8d20ULL || rel >= 0x10b8f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8f30 size=192 callers=0 calls=1
   calls: sub_6a4b90
*/
void sub_10b8f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8f30ULL || rel >= 0x10b8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b8ff0 size=80 callers=0 calls=0
*/
void sub_10b8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b8ff0ULL || rel >= 0x10b9040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9040 size=128 callers=0 calls=0
*/
void sub_10b9040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9040ULL || rel >= 0x10b90c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b90c0 size=448 callers=0 calls=6
   calls: InstanceTable, Result_2, sub_6a0d40, sub_6a4b80, sub_6a4b90, sub_6a4ce0
*/
void sub_10b90c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b90c0ULL || rel >= 0x10b9280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9280 size=192 callers=0 calls=1
   calls: sub_6a4b90
*/
void sub_10b9280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9280ULL || rel >= 0x10b9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9340 size=80 callers=0 calls=0
*/
void sub_10b9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9340ULL || rel >= 0x10b9390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9390 size=128 callers=0 calls=0
*/
void sub_10b9390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9390ULL || rel >= 0x10b9410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9410 size=128 callers=0 calls=0
*/
void sub_10b9410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9410ULL || rel >= 0x10b9490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9490 size=64 callers=0 calls=0
*/
void sub_10b9490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9490ULL || rel >= 0x10b94d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b94d0 size=16 callers=0 calls=0
*/
void sub_10b94d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b94d0ULL || rel >= 0x10b94e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b94e0 size=80 callers=0 calls=0
*/
void sub_10b94e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b94e0ULL || rel >= 0x10b9530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9530 size=80 callers=0 calls=0
*/
void sub_10b9530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9530ULL || rel >= 0x10b9580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9580 size=64 callers=0 calls=0
*/
void sub_10b9580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9580ULL || rel >= 0x10b95c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b95c0 size=16 callers=0 calls=0
*/
void sub_10b95c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b95c0ULL || rel >= 0x10b95d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b95d0 size=16 callers=0 calls=0
*/
void sub_10b95d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b95d0ULL || rel >= 0x10b95e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b95e0 size=16 callers=0 calls=0
*/
void sub_10b95e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b95e0ULL || rel >= 0x10b95f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b95f0 size=16 callers=0 calls=0
*/
void sub_10b95f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b95f0ULL || rel >= 0x10b9600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9600 size=16 callers=0 calls=0
*/
void sub_10b9600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9600ULL || rel >= 0x10b9610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9610 size=16 callers=0 calls=0
*/
void sub_10b9610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9610ULL || rel >= 0x10b9620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9620 size=16 callers=0 calls=0
*/
void sub_10b9620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9620ULL || rel >= 0x10b9630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9630 size=48 callers=0 calls=0
*/
void sub_10b9630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9630ULL || rel >= 0x10b9660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9660 size=128 callers=0 calls=0
*/
void sub_10b9660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9660ULL || rel >= 0x10b96e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b96e0 size=112 callers=0 calls=1
   calls: sub_104e040
*/
void sub_10b96e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b96e0ULL || rel >= 0x10b9750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9750 size=16 callers=0 calls=0
*/
void sub_10b9750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9750ULL || rel >= 0x10b9760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9760 size=80 callers=0 calls=0
*/
void sub_10b9760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9760ULL || rel >= 0x10b97b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b97b0 size=128 callers=0 calls=0
*/
void sub_10b97b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b97b0ULL || rel >= 0x10b9830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9830 size=112 callers=0 calls=1
   calls: sub_104e050
*/
void sub_10b9830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9830ULL || rel >= 0x10b98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b98a0 size=16 callers=0 calls=0
*/
void sub_10b98a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b98a0ULL || rel >= 0x10b98b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b98b0 size=80 callers=0 calls=0
*/
void sub_10b98b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b98b0ULL || rel >= 0x10b9900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9900 size=128 callers=0 calls=0
*/
void sub_10b9900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9900ULL || rel >= 0x10b9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9980 size=304 callers=0 calls=3
   calls: sub_1049ac0, sub_1049b00, sub_1049b20
*/
void sub_10b9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9980ULL || rel >= 0x10b9ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9ab0 size=64 callers=0 calls=0
*/
void sub_10b9ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9ab0ULL || rel >= 0x10b9af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9af0 size=16 callers=0 calls=0
*/
void sub_10b9af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9af0ULL || rel >= 0x10b9b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9b00 size=16 callers=0 calls=0
*/
void sub_10b9b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9b00ULL || rel >= 0x10b9b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9b10 size=144 callers=0 calls=2
   calls: sub_1049b00, sub_1049b20
*/
void sub_10b9b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9b10ULL || rel >= 0x10b9ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9ba0 size=80 callers=0 calls=0
*/
void sub_10b9ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9ba0ULL || rel >= 0x10b9bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9bf0 size=64 callers=0 calls=0
*/
void sub_10b9bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9bf0ULL || rel >= 0x10b9c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9c30 size=16 callers=0 calls=0
*/
void sub_10b9c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9c30ULL || rel >= 0x10b9c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9c40 size=16 callers=0 calls=0
*/
void sub_10b9c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9c40ULL || rel >= 0x10b9c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9c50 size=16 callers=0 calls=0
*/
void sub_10b9c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9c50ULL || rel >= 0x10b9c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9c60 size=16 callers=0 calls=0
*/
void sub_10b9c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9c60ULL || rel >= 0x10b9c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9c70 size=80 callers=0 calls=0
*/
void sub_10b9c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9c70ULL || rel >= 0x10b9cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9cc0 size=16 callers=0 calls=0
*/
void sub_10b9cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9cc0ULL || rel >= 0x10b9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9cd0 size=48 callers=0 calls=0
*/
void sub_10b9cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9cd0ULL || rel >= 0x10b9d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9d00 size=128 callers=0 calls=0
*/
void sub_10b9d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9d00ULL || rel >= 0x10b9d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9d80 size=128 callers=0 calls=0
*/
void sub_10b9d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9d80ULL || rel >= 0x10b9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9e00 size=128 callers=0 calls=2
   calls: sub_10499c0, sub_1049aa0
*/
void sub_10b9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9e00ULL || rel >= 0x10b9e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9e80 size=16 callers=0 calls=0
*/
void sub_10b9e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9e80ULL || rel >= 0x10b9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9e90 size=80 callers=0 calls=0
*/
void sub_10b9e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9e90ULL || rel >= 0x10b9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9ee0 size=128 callers=0 calls=0
*/
void sub_10b9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9ee0ULL || rel >= 0x10b9f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010b9f60 size=288 callers=0 calls=4
   calls: sub_104c140, sub_1079bc0, sub_10ba080, sub_10ba090
*/
void sub_10b9f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b9f60ULL || rel >= 0x10ba080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ba080 size=16 callers=1 calls=0
*/
void sub_10ba080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ba080ULL || rel >= 0x10ba090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ba090 size=16 callers=1 calls=0
*/
void sub_10ba090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ba090ULL || rel >= 0x10ba0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ba0a0 size=112 callers=0 calls=1
   calls: sub_1079bc0
*/
void sub_10ba0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ba0a0ULL || rel >= 0x10ba110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ba110 size=80 callers=0 calls=0
*/
void sub_10ba110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ba110ULL || rel >= 0x10ba160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ba160 size=128 callers=0 calls=0
*/
void sub_10ba160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ba160ULL || rel >= 0x10ba1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ba1e0 size=112 callers=0 calls=2
   calls: sub_104dcc0, sub_6a0cb0
*/
void sub_10ba1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ba1e0ULL || rel >= 0x10ba250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ba250 size=80 callers=0 calls=0
*/
void sub_10ba250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ba250ULL || rel >= 0x10ba2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ba2a0 size=80 callers=0 calls=0
*/
void sub_10ba2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ba2a0ULL || rel >= 0x10ba2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ba2f0 size=128 callers=0 calls=0
*/
void sub_10ba2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ba2f0ULL || rel >= 0x10ba370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ba370 size=2064 callers=1 calls=9
   calls: sub_10563d0, sub_107e790, sub_10bab80, sub_10bc9a0, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestAcquireAndAssociatePrincipalRomId
*/
void RequestAcquireAndAssociatePrincipalRomId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ba370ULL || rel >= 0x10bab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bab80 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10bcdc0, sub_6ce100
*/
void sub_10bab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bab80ULL || rel >= 0x10bad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bad00 size=2064 callers=3 calls=9
   calls: sub_10563d0, sub_107e790, sub_10bb510, sub_10be0e0, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestLoadApplicationSettingsValue
*/
void RequestLoadApplicationSettingsValue(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bad00ULL || rel >= 0x10bb510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bb510 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10be6e0, sub_6ce100
*/
void sub_10bb510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bb510ULL || rel >= 0x10bb690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bb690 size=2048 callers=1 calls=9
   calls: sub_10563d0, sub_107e790, sub_10bbe90, sub_10bf9e0, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestCheckNSOLicense
*/
void RequestCheckNSOLicense(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bb690ULL || rel >= 0x10bbe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bbe90 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10bfde0, sub_6ce100
*/
void sub_10bbe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bbe90ULL || rel >= 0x10bc010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bc010 size=2064 callers=1 calls=9
   calls: sub_10563d0, sub_107e790, sub_10bc820, sub_10c0ca0, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestGetNexUniqueID
*/
void RequestGetNexUniqueID(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bc010ULL || rel >= 0x10bc820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bc820 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10c10a0, sub_6ce100
*/
void sub_10bc820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bc820ULL || rel >= 0x10bc9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bc9a0 size=384 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10bc9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bc9a0ULL || rel >= 0x10bcb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bcb20 size=80 callers=0 calls=0
*/
void sub_10bcb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bcb20ULL || rel >= 0x10bcb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bcb70 size=240 callers=0 calls=0
*/
void sub_10bcb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bcb70ULL || rel >= 0x10bcc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bcc60 size=80 callers=0 calls=0
*/
void sub_10bcc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bcc60ULL || rel >= 0x10bccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bccb0 size=80 callers=0 calls=0
*/
void sub_10bccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bccb0ULL || rel >= 0x10bcd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bcd00 size=16 callers=0 calls=0
*/
void sub_10bcd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bcd00ULL || rel >= 0x10bcd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bcd10 size=16 callers=0 calls=0
*/
void sub_10bcd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bcd10ULL || rel >= 0x10bcd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bcd20 size=80 callers=0 calls=0
*/
void sub_10bcd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bcd20ULL || rel >= 0x10bcd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bcd70 size=80 callers=0 calls=0
*/
void sub_10bcd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bcd70ULL || rel >= 0x10bcdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bcdc0 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10bcdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bcdc0ULL || rel >= 0x10bcf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bcf20 size=176 callers=0 calls=0
*/
void sub_10bcf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bcf20ULL || rel >= 0x10bcfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bcfd0 size=176 callers=0 calls=0
*/
void sub_10bcfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bcfd0ULL || rel >= 0x10bd080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd080 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10bd080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd080ULL || rel >= 0x10bd0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd0f0 size=64 callers=0 calls=1
   calls: sub_10bd7a0
*/
void sub_10bd0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd0f0ULL || rel >= 0x10bd130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd130 size=16 callers=0 calls=0
*/
void sub_10bd130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd130ULL || rel >= 0x10bd140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd140 size=48 callers=0 calls=0
*/
void sub_10bd140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd140ULL || rel >= 0x10bd170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd170 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10bd170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd170ULL || rel >= 0x10bd230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd230 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10bd230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd230ULL || rel >= 0x10bd2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd2a0 size=176 callers=0 calls=0
*/
void sub_10bd2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd2a0ULL || rel >= 0x10bd350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd350 size=176 callers=0 calls=0
*/
void sub_10bd350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd350ULL || rel >= 0x10bd400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd400 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10bd400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd400ULL || rel >= 0x10bd470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd470 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10bd470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd470ULL || rel >= 0x10bd4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd4e0 size=176 callers=0 calls=0
*/
void sub_10bd4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd4e0ULL || rel >= 0x10bd590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd590 size=176 callers=0 calls=0
*/
void sub_10bd590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd590ULL || rel >= 0x10bd640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd640 size=48 callers=0 calls=0
*/
void sub_10bd640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd640ULL || rel >= 0x10bd670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd670 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10bd670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd670ULL || rel >= 0x10bd730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd730 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10bd730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd730ULL || rel >= 0x10bd7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd7a0 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10bd7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd7a0ULL || rel >= 0x10bd9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd9e0 size=16 callers=0 calls=0
*/
void sub_10bd9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd9e0ULL || rel >= 0x10bd9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bd9f0 size=16 callers=0 calls=0
*/
void sub_10bd9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bd9f0ULL || rel >= 0x10bda00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bda00 size=16 callers=0 calls=0
*/
void sub_10bda00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bda00ULL || rel >= 0x10bda10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bda10 size=64 callers=0 calls=0
*/
void sub_10bda10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bda10ULL || rel >= 0x10bda50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bda50 size=80 callers=0 calls=0
*/
void sub_10bda50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bda50ULL || rel >= 0x10bdaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdaa0 size=96 callers=0 calls=0
*/
void sub_10bdaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdaa0ULL || rel >= 0x10bdb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdb00 size=32 callers=0 calls=0
*/
void sub_10bdb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdb00ULL || rel >= 0x10bdb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdb20 size=16 callers=0 calls=0
*/
void sub_10bdb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdb20ULL || rel >= 0x10bdb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdb30 size=64 callers=0 calls=0
*/
void sub_10bdb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdb30ULL || rel >= 0x10bdb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdb70 size=32 callers=0 calls=0
*/
void sub_10bdb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdb70ULL || rel >= 0x10bdb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdb90 size=16 callers=0 calls=0
*/
void sub_10bdb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdb90ULL || rel >= 0x10bdba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdba0 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10bdba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdba0ULL || rel >= 0x10bdc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdc00 size=64 callers=0 calls=0
*/
void sub_10bdc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdc00ULL || rel >= 0x10bdc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdc40 size=32 callers=0 calls=0
*/
void sub_10bdc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdc40ULL || rel >= 0x10bdc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdc60 size=16 callers=0 calls=0
*/
void sub_10bdc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdc60ULL || rel >= 0x10bdc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdc70 size=144 callers=0 calls=0
*/
void sub_10bdc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdc70ULL || rel >= 0x10bdd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdd00 size=144 callers=0 calls=0
*/
void sub_10bdd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdd00ULL || rel >= 0x10bdd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdd90 size=240 callers=0 calls=0
*/
void sub_10bdd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdd90ULL || rel >= 0x10bde80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bde80 size=144 callers=0 calls=0
*/
void sub_10bde80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bde80ULL || rel >= 0x10bdf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdf10 size=144 callers=0 calls=0
*/
void sub_10bdf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdf10ULL || rel >= 0x10bdfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdfa0 size=16 callers=0 calls=0
*/
void sub_10bdfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdfa0ULL || rel >= 0x10bdfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdfb0 size=16 callers=0 calls=0
*/
void sub_10bdfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdfb0ULL || rel >= 0x10bdfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bdfc0 size=144 callers=0 calls=0
*/
void sub_10bdfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bdfc0ULL || rel >= 0x10be050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be050 size=144 callers=0 calls=0
*/
void sub_10be050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be050ULL || rel >= 0x10be0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be0e0 size=400 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10be0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be0e0ULL || rel >= 0x10be270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be270 size=144 callers=0 calls=1
   calls: sub_6a6020
*/
void sub_10be270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be270ULL || rel >= 0x10be300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be300 size=144 callers=0 calls=1
   calls: sub_6a6020
*/
void sub_10be300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be300ULL || rel >= 0x10be390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be390 size=240 callers=0 calls=0
*/
void sub_10be390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be390ULL || rel >= 0x10be480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be480 size=144 callers=0 calls=1
   calls: sub_6a6020
*/
void sub_10be480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be480ULL || rel >= 0x10be510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be510 size=144 callers=0 calls=1
   calls: sub_6a6020
*/
void sub_10be510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be510ULL || rel >= 0x10be5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be5a0 size=16 callers=0 calls=0
*/
void sub_10be5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be5a0ULL || rel >= 0x10be5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be5b0 size=16 callers=0 calls=0
*/
void sub_10be5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be5b0ULL || rel >= 0x10be5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be5c0 size=144 callers=0 calls=1
   calls: sub_6a6020
*/
void sub_10be5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be5c0ULL || rel >= 0x10be650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be650 size=144 callers=0 calls=1
   calls: sub_6a6020
*/
void sub_10be650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be650ULL || rel >= 0x10be6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be6e0 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10be6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be6e0ULL || rel >= 0x10be840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be840 size=176 callers=0 calls=0
*/
void sub_10be840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be840ULL || rel >= 0x10be8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be8f0 size=176 callers=0 calls=0
*/
void sub_10be8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be8f0ULL || rel >= 0x10be9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010be9a0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10be9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10be9a0ULL || rel >= 0x10bea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bea10 size=64 callers=0 calls=1
   calls: sub_10bf0c0
*/
void sub_10bea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bea10ULL || rel >= 0x10bea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bea50 size=16 callers=0 calls=0
*/
void sub_10bea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bea50ULL || rel >= 0x10bea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bea60 size=48 callers=0 calls=0
*/
void sub_10bea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bea60ULL || rel >= 0x10bea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bea90 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10bea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bea90ULL || rel >= 0x10beb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010beb50 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10beb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10beb50ULL || rel >= 0x10bebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bebc0 size=176 callers=0 calls=0
*/
void sub_10bebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bebc0ULL || rel >= 0x10bec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bec70 size=176 callers=0 calls=0
*/
void sub_10bec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bec70ULL || rel >= 0x10bed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bed20 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10bed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bed20ULL || rel >= 0x10bed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bed90 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10bed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bed90ULL || rel >= 0x10bee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bee00 size=176 callers=0 calls=0
*/
void sub_10bee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bee00ULL || rel >= 0x10beeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010beeb0 size=176 callers=0 calls=0
*/
void sub_10beeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10beeb0ULL || rel >= 0x10bef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bef60 size=48 callers=0 calls=0
*/
void sub_10bef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bef60ULL || rel >= 0x10bef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bef90 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10bef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bef90ULL || rel >= 0x10bf050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf050 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10bf050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf050ULL || rel >= 0x10bf0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf0c0 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10bf0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf0c0ULL || rel >= 0x10bf300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf300 size=16 callers=0 calls=0
*/
void sub_10bf300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf300ULL || rel >= 0x10bf310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf310 size=16 callers=0 calls=0
*/
void sub_10bf310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf310ULL || rel >= 0x10bf320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf320 size=16 callers=0 calls=0
*/
void sub_10bf320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf320ULL || rel >= 0x10bf330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf330 size=32 callers=0 calls=0
*/
void sub_10bf330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf330ULL || rel >= 0x10bf350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf350 size=80 callers=0 calls=0
*/
void sub_10bf350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf350ULL || rel >= 0x10bf3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf3a0 size=96 callers=0 calls=0
*/
void sub_10bf3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf3a0ULL || rel >= 0x10bf400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf400 size=32 callers=0 calls=0
*/
void sub_10bf400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf400ULL || rel >= 0x10bf420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf420 size=16 callers=0 calls=0
*/
void sub_10bf420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf420ULL || rel >= 0x10bf430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf430 size=64 callers=0 calls=0
*/
void sub_10bf430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf430ULL || rel >= 0x10bf470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf470 size=32 callers=0 calls=0
*/
void sub_10bf470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf470ULL || rel >= 0x10bf490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf490 size=16 callers=0 calls=0
*/
void sub_10bf490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf490ULL || rel >= 0x10bf4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf4a0 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10bf4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf4a0ULL || rel >= 0x10bf500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf500 size=64 callers=0 calls=0
*/
void sub_10bf500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf500ULL || rel >= 0x10bf540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf540 size=32 callers=0 calls=0
*/
void sub_10bf540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf540ULL || rel >= 0x10bf560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf560 size=16 callers=0 calls=0
*/
void sub_10bf560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf560ULL || rel >= 0x10bf570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf570 size=144 callers=0 calls=0
*/
void sub_10bf570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf570ULL || rel >= 0x10bf600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf600 size=144 callers=0 calls=0
*/
void sub_10bf600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf600ULL || rel >= 0x10bf690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf690 size=240 callers=0 calls=0
*/
void sub_10bf690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf690ULL || rel >= 0x10bf780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf780 size=144 callers=0 calls=0
*/
void sub_10bf780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf780ULL || rel >= 0x10bf810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf810 size=144 callers=0 calls=0
*/
void sub_10bf810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf810ULL || rel >= 0x10bf8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf8a0 size=16 callers=0 calls=0
*/
void sub_10bf8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf8a0ULL || rel >= 0x10bf8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf8b0 size=16 callers=0 calls=0
*/
void sub_10bf8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf8b0ULL || rel >= 0x10bf8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf8c0 size=144 callers=0 calls=0
*/
void sub_10bf8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf8c0ULL || rel >= 0x10bf950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf950 size=144 callers=0 calls=0
*/
void sub_10bf950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf950ULL || rel >= 0x10bf9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bf9e0 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10bf9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bf9e0ULL || rel >= 0x10bfb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bfb40 size=80 callers=0 calls=0
*/
void sub_10bfb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bfb40ULL || rel >= 0x10bfb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bfb90 size=240 callers=0 calls=0
*/
void sub_10bfb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bfb90ULL || rel >= 0x10bfc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bfc80 size=80 callers=0 calls=0
*/
void sub_10bfc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bfc80ULL || rel >= 0x10bfcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bfcd0 size=80 callers=0 calls=0
*/
void sub_10bfcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bfcd0ULL || rel >= 0x10bfd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bfd20 size=16 callers=0 calls=0
*/
void sub_10bfd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bfd20ULL || rel >= 0x10bfd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bfd30 size=16 callers=0 calls=0
*/
void sub_10bfd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bfd30ULL || rel >= 0x10bfd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bfd40 size=80 callers=0 calls=0
*/
void sub_10bfd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bfd40ULL || rel >= 0x10bfd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bfd90 size=80 callers=0 calls=0
*/
void sub_10bfd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bfd90ULL || rel >= 0x10bfde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bfde0 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10bfde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bfde0ULL || rel >= 0x10bff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bff40 size=176 callers=0 calls=0
*/
void sub_10bff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bff40ULL || rel >= 0x10bfff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010bfff0 size=176 callers=0 calls=0
*/
void sub_10bfff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10bfff0ULL || rel >= 0x10c00a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c00a0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10c00a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c00a0ULL || rel >= 0x10c0110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0110 size=64 callers=0 calls=1
   calls: sub_10c07c0
*/
void sub_10c0110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0110ULL || rel >= 0x10c0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0150 size=16 callers=0 calls=0
*/
void sub_10c0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0150ULL || rel >= 0x10c0160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0160 size=48 callers=0 calls=0
*/
void sub_10c0160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0160ULL || rel >= 0x10c0190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0190 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c0190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0190ULL || rel >= 0x10c0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0250 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0250ULL || rel >= 0x10c02c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c02c0 size=176 callers=0 calls=0
*/
void sub_10c02c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c02c0ULL || rel >= 0x10c0370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0370 size=176 callers=0 calls=0
*/
void sub_10c0370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0370ULL || rel >= 0x10c0420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0420 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10c0420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0420ULL || rel >= 0x10c0490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0490 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10c0490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0490ULL || rel >= 0x10c0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0500 size=176 callers=0 calls=0
*/
void sub_10c0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0500ULL || rel >= 0x10c05b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c05b0 size=176 callers=0 calls=0
*/
void sub_10c05b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c05b0ULL || rel >= 0x10c0660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0660 size=48 callers=0 calls=0
*/
void sub_10c0660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0660ULL || rel >= 0x10c0690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0690 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c0690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0690ULL || rel >= 0x10c0750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0750 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c0750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0750ULL || rel >= 0x10c07c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c07c0 size=592 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10c07c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c07c0ULL || rel >= 0x10c0a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0a10 size=16 callers=0 calls=0
*/
void sub_10c0a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0a10ULL || rel >= 0x10c0a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0a20 size=16 callers=0 calls=0
*/
void sub_10c0a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0a20ULL || rel >= 0x10c0a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0a30 size=16 callers=0 calls=0
*/
void sub_10c0a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0a30ULL || rel >= 0x10c0a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0a40 size=64 callers=0 calls=0
*/
void sub_10c0a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0a40ULL || rel >= 0x10c0a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0a80 size=80 callers=0 calls=0
*/
void sub_10c0a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0a80ULL || rel >= 0x10c0ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0ad0 size=96 callers=0 calls=0
*/
void sub_10c0ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0ad0ULL || rel >= 0x10c0b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0b30 size=32 callers=0 calls=0
*/
void sub_10c0b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0b30ULL || rel >= 0x10c0b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0b50 size=16 callers=0 calls=0
*/
void sub_10c0b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0b50ULL || rel >= 0x10c0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0b60 size=64 callers=0 calls=0
*/
void sub_10c0b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0b60ULL || rel >= 0x10c0ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0ba0 size=32 callers=0 calls=0
*/
void sub_10c0ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0ba0ULL || rel >= 0x10c0bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0bc0 size=16 callers=0 calls=0
*/
void sub_10c0bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0bc0ULL || rel >= 0x10c0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0bd0 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10c0bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0bd0ULL || rel >= 0x10c0c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0c30 size=64 callers=0 calls=0
*/
void sub_10c0c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0c30ULL || rel >= 0x10c0c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0c70 size=32 callers=0 calls=0
*/
void sub_10c0c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0c70ULL || rel >= 0x10c0c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0c90 size=16 callers=0 calls=0
*/
void sub_10c0c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0c90ULL || rel >= 0x10c0ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0ca0 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10c0ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0ca0ULL || rel >= 0x10c0e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0e00 size=80 callers=0 calls=0
*/
void sub_10c0e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0e00ULL || rel >= 0x10c0e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0e50 size=240 callers=0 calls=0
*/
void sub_10c0e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0e50ULL || rel >= 0x10c0f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0f40 size=80 callers=0 calls=0
*/
void sub_10c0f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0f40ULL || rel >= 0x10c0f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0f90 size=80 callers=0 calls=0
*/
void sub_10c0f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0f90ULL || rel >= 0x10c0fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0fe0 size=16 callers=0 calls=0
*/
void sub_10c0fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0fe0ULL || rel >= 0x10c0ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c0ff0 size=16 callers=0 calls=0
*/
void sub_10c0ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c0ff0ULL || rel >= 0x10c1000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1000 size=80 callers=0 calls=0
*/
void sub_10c1000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1000ULL || rel >= 0x10c1050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1050 size=80 callers=0 calls=0
*/
void sub_10c1050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1050ULL || rel >= 0x10c10a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c10a0 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10c10a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c10a0ULL || rel >= 0x10c1200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1200 size=176 callers=0 calls=0
*/
void sub_10c1200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1200ULL || rel >= 0x10c12b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c12b0 size=176 callers=0 calls=0
*/
void sub_10c12b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c12b0ULL || rel >= 0x10c1360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1360 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10c1360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1360ULL || rel >= 0x10c13d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c13d0 size=64 callers=0 calls=1
   calls: sub_10c1a80
*/
void sub_10c13d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c13d0ULL || rel >= 0x10c1410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1410 size=16 callers=0 calls=0
*/
void sub_10c1410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1410ULL || rel >= 0x10c1420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1420 size=48 callers=0 calls=0
*/
void sub_10c1420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1420ULL || rel >= 0x10c1450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1450 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c1450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1450ULL || rel >= 0x10c1510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1510 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c1510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1510ULL || rel >= 0x10c1580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1580 size=176 callers=0 calls=0
*/
void sub_10c1580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1580ULL || rel >= 0x10c1630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1630 size=176 callers=0 calls=0
*/
void sub_10c1630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1630ULL || rel >= 0x10c16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c16e0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10c16e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c16e0ULL || rel >= 0x10c1750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1750 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10c1750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1750ULL || rel >= 0x10c17c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c17c0 size=176 callers=0 calls=0
*/
void sub_10c17c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c17c0ULL || rel >= 0x10c1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1870 size=176 callers=0 calls=0
*/
void sub_10c1870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1870ULL || rel >= 0x10c1920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1920 size=48 callers=0 calls=0
*/
void sub_10c1920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1920ULL || rel >= 0x10c1950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1950 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c1950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1950ULL || rel >= 0x10c1a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1a10 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c1a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1a10ULL || rel >= 0x10c1a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1a80 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10c1a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1a80ULL || rel >= 0x10c1cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1cc0 size=16 callers=0 calls=0
*/
void sub_10c1cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1cc0ULL || rel >= 0x10c1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1cd0 size=16 callers=0 calls=0
*/
void sub_10c1cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1cd0ULL || rel >= 0x10c1ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1ce0 size=16 callers=0 calls=0
*/
void sub_10c1ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1ce0ULL || rel >= 0x10c1cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1cf0 size=64 callers=0 calls=0
*/
void sub_10c1cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1cf0ULL || rel >= 0x10c1d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1d30 size=80 callers=0 calls=0
*/
void sub_10c1d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1d30ULL || rel >= 0x10c1d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1d80 size=96 callers=0 calls=0
*/
void sub_10c1d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1d80ULL || rel >= 0x10c1de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1de0 size=32 callers=0 calls=0
*/
void sub_10c1de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1de0ULL || rel >= 0x10c1e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1e00 size=16 callers=0 calls=0
*/
void sub_10c1e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1e00ULL || rel >= 0x10c1e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1e10 size=64 callers=0 calls=0
*/
void sub_10c1e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1e10ULL || rel >= 0x10c1e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1e50 size=32 callers=0 calls=0
*/
void sub_10c1e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1e50ULL || rel >= 0x10c1e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1e70 size=16 callers=0 calls=0
*/
void sub_10c1e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1e70ULL || rel >= 0x10c1e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1e80 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10c1e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1e80ULL || rel >= 0x10c1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1ee0 size=64 callers=0 calls=0
*/
void sub_10c1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1ee0ULL || rel >= 0x10c1f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1f20 size=32 callers=0 calls=0
*/
void sub_10c1f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1f20ULL || rel >= 0x10c1f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1f40 size=16 callers=0 calls=0
*/
void sub_10c1f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1f40ULL || rel >= 0x10c1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1f50 size=128 callers=0 calls=0
*/
void sub_10c1f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1f50ULL || rel >= 0x10c1fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c1fd0 size=112 callers=0 calls=1
   calls: sub_10c2b10
*/
void sub_10c1fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1fd0ULL || rel >= 0x10c2040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2040 size=112 callers=0 calls=1
   calls: sub_10c2b10
*/
void sub_10c2040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2040ULL || rel >= 0x10c20b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c20b0 size=64 callers=0 calls=1
   calls: sub_104c0e0
*/
void sub_10c20b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c20b0ULL || rel >= 0x10c20f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c20f0 size=64 callers=0 calls=1
   calls: sub_104c0e0
*/
void sub_10c20f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c20f0ULL || rel >= 0x10c2130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2130 size=624 callers=0 calls=7
   calls: sub_10c2b10, sub_10c2ce0, sub_6a4240, sub_6a42c0, sub_6a42d0, sub_6a5940, sub_6a5bd0
*/
void sub_10c2130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2130ULL || rel >= 0x10c23a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c23a0 size=64 callers=0 calls=0
*/
void sub_10c23a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c23a0ULL || rel >= 0x10c23e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c23e0 size=16 callers=0 calls=0
*/
void sub_10c23e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c23e0ULL || rel >= 0x10c23f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c23f0 size=16 callers=0 calls=0
*/
void sub_10c23f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c23f0ULL || rel >= 0x10c2400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2400 size=16 callers=0 calls=0
*/
void sub_10c2400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2400ULL || rel >= 0x10c2410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2410 size=144 callers=0 calls=0
*/
void sub_10c2410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2410ULL || rel >= 0x10c24a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c24a0 size=144 callers=0 calls=0
*/
void sub_10c24a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c24a0ULL || rel >= 0x10c2530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2530 size=240 callers=0 calls=0
*/
void sub_10c2530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2530ULL || rel >= 0x10c2620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2620 size=144 callers=0 calls=0
*/
void sub_10c2620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2620ULL || rel >= 0x10c26b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c26b0 size=144 callers=0 calls=0
*/
void sub_10c26b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c26b0ULL || rel >= 0x10c2740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2740 size=16 callers=0 calls=0
*/
void sub_10c2740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2740ULL || rel >= 0x10c2750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2750 size=16 callers=0 calls=0
*/
void sub_10c2750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2750ULL || rel >= 0x10c2760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2760 size=144 callers=0 calls=0
*/
void sub_10c2760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2760ULL || rel >= 0x10c27f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c27f0 size=144 callers=0 calls=0
*/
void sub_10c27f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c27f0ULL || rel >= 0x10c2880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2880 size=16 callers=0 calls=0
*/
void sub_10c2880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2880ULL || rel >= 0x10c2890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2890 size=16 callers=0 calls=0
*/
void sub_10c2890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2890ULL || rel >= 0x10c28a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c28a0 size=16 callers=0 calls=0
*/
void sub_10c28a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c28a0ULL || rel >= 0x10c28b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c28b0 size=144 callers=0 calls=0
*/
void sub_10c28b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c28b0ULL || rel >= 0x10c2940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2940 size=144 callers=0 calls=0
*/
void sub_10c2940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2940ULL || rel >= 0x10c29d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c29d0 size=64 callers=0 calls=0
*/
void sub_10c29d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c29d0ULL || rel >= 0x10c2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2a10 size=16 callers=0 calls=0
*/
void sub_10c2a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2a10ULL || rel >= 0x10c2a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2a20 size=16 callers=0 calls=0
*/
void sub_10c2a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2a20ULL || rel >= 0x10c2a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2a30 size=16 callers=0 calls=0
*/
void sub_10c2a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2a30ULL || rel >= 0x10c2a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2a40 size=16 callers=0 calls=0
*/
void sub_10c2a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2a40ULL || rel >= 0x10c2a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2a50 size=16 callers=0 calls=0
*/
void sub_10c2a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2a50ULL || rel >= 0x10c2a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2a60 size=16 callers=0 calls=0
*/
void sub_10c2a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2a60ULL || rel >= 0x10c2a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2a70 size=96 callers=0 calls=0
*/
void sub_10c2a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2a70ULL || rel >= 0x10c2ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2ad0 size=16 callers=0 calls=0
*/
void sub_10c2ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2ad0ULL || rel >= 0x10c2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2ae0 size=48 callers=0 calls=0
*/
void sub_10c2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2ae0ULL || rel >= 0x10c2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2b10 size=464 callers=3 calls=0
*/
void sub_10c2b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2b10ULL || rel >= 0x10c2ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2ce0 size=288 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10c2ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2ce0ULL || rel >= 0x10c2e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2e00 size=128 callers=0 calls=0
*/
void sub_10c2e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2e00ULL || rel >= 0x10c2e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c2e80 size=432 callers=0 calls=2
   calls: sub_10c32a0, sub_6a0d90
*/
void sub_10c2e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c2e80ULL || rel >= 0x10c3030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3030 size=64 callers=0 calls=0
*/
void sub_10c3030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3030ULL || rel >= 0x10c3070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3070 size=16 callers=0 calls=0
*/
void sub_10c3070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3070ULL || rel >= 0x10c3080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3080 size=16 callers=0 calls=0
*/
void sub_10c3080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3080ULL || rel >= 0x10c3090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3090 size=16 callers=0 calls=0
*/
void sub_10c3090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3090ULL || rel >= 0x10c30a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c30a0 size=112 callers=0 calls=0
*/
void sub_10c30a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c30a0ULL || rel >= 0x10c3110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3110 size=112 callers=0 calls=0
*/
void sub_10c3110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3110ULL || rel >= 0x10c3180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3180 size=64 callers=0 calls=0
*/
void sub_10c3180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3180ULL || rel >= 0x10c31c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c31c0 size=16 callers=0 calls=0
*/
void sub_10c31c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c31c0ULL || rel >= 0x10c31d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c31d0 size=16 callers=0 calls=0
*/
void sub_10c31d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c31d0ULL || rel >= 0x10c31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c31e0 size=16 callers=0 calls=0
*/
void sub_10c31e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c31e0ULL || rel >= 0x10c31f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c31f0 size=16 callers=0 calls=0
*/
void sub_10c31f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c31f0ULL || rel >= 0x10c3200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3200 size=96 callers=0 calls=0
*/
void sub_10c3200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3200ULL || rel >= 0x10c3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3260 size=16 callers=0 calls=0
*/
void sub_10c3260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3260ULL || rel >= 0x10c3270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3270 size=48 callers=0 calls=0
*/
void sub_10c3270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3270ULL || rel >= 0x10c32a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c32a0 size=464 callers=1 calls=0
*/
void sub_10c32a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c32a0ULL || rel >= 0x10c3470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3470 size=128 callers=0 calls=0
*/
void sub_10c3470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3470ULL || rel >= 0x10c34f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c34f0 size=160 callers=0 calls=3
   calls: sub_10c4040, sub_10c4210, sub_10c4360
*/
void sub_10c34f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c34f0ULL || rel >= 0x10c3590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3590 size=160 callers=0 calls=3
   calls: sub_10c4040, sub_10c4210, sub_10c4360
*/
void sub_10c3590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3590ULL || rel >= 0x10c3630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3630 size=32 callers=0 calls=0
*/
void sub_10c3630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3630ULL || rel >= 0x10c3650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3650 size=32 callers=0 calls=0
*/
void sub_10c3650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3650ULL || rel >= 0x10c3670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3670 size=688 callers=0 calls=7
   calls: sub_10c4040, sub_10c4850, sub_6a4240, sub_6a42c0, sub_6a42d0, sub_6a5940, sub_6a59a0
*/
void sub_10c3670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3670ULL || rel >= 0x10c3920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3920 size=64 callers=0 calls=0
*/
void sub_10c3920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3920ULL || rel >= 0x10c3960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3960 size=16 callers=0 calls=0
*/
void sub_10c3960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3960ULL || rel >= 0x10c3970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3970 size=16 callers=0 calls=0
*/
void sub_10c3970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3970ULL || rel >= 0x10c3980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3980 size=16 callers=0 calls=0
*/
void sub_10c3980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3980ULL || rel >= 0x10c3990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3990 size=144 callers=0 calls=0
*/
void sub_10c3990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3990ULL || rel >= 0x10c3a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3a20 size=144 callers=0 calls=0
*/
void sub_10c3a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3a20ULL || rel >= 0x10c3ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3ab0 size=240 callers=0 calls=0
*/
void sub_10c3ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3ab0ULL || rel >= 0x10c3ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3ba0 size=144 callers=0 calls=0
*/
void sub_10c3ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3ba0ULL || rel >= 0x10c3c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3c30 size=144 callers=0 calls=0
*/
void sub_10c3c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3c30ULL || rel >= 0x10c3cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3cc0 size=16 callers=0 calls=0
*/
void sub_10c3cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3cc0ULL || rel >= 0x10c3cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3cd0 size=16 callers=0 calls=0
*/
void sub_10c3cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3cd0ULL || rel >= 0x10c3ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3ce0 size=144 callers=0 calls=0
*/
void sub_10c3ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3ce0ULL || rel >= 0x10c3d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3d70 size=144 callers=0 calls=0
*/
void sub_10c3d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3d70ULL || rel >= 0x10c3e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3e00 size=144 callers=0 calls=0
*/
void sub_10c3e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3e00ULL || rel >= 0x10c3e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3e90 size=144 callers=0 calls=0
*/
void sub_10c3e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3e90ULL || rel >= 0x10c3f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3f20 size=64 callers=0 calls=0
*/
void sub_10c3f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3f20ULL || rel >= 0x10c3f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3f60 size=16 callers=0 calls=0
*/
void sub_10c3f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3f60ULL || rel >= 0x10c3f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3f70 size=16 callers=0 calls=0
*/
void sub_10c3f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3f70ULL || rel >= 0x10c3f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

