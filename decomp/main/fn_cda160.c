/* main functions 00cda160..00cfb220 (102 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00cda160 size=16 callers=0 calls=0
*/
void sub_cda160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda160ULL || rel >= 0xcda170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda170 size=16 callers=0 calls=0
*/
void sub_cda170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda170ULL || rel >= 0xcda180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda180 size=64 callers=0 calls=0
*/
void sub_cda180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda180ULL || rel >= 0xcda1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda1c0 size=16 callers=0 calls=0
*/
void sub_cda1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda1c0ULL || rel >= 0xcda1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda1d0 size=32 callers=0 calls=0
*/
void sub_cda1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda1d0ULL || rel >= 0xcda1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda1f0 size=16 callers=0 calls=0
*/
void sub_cda1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda1f0ULL || rel >= 0xcda200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda200 size=16 callers=0 calls=0
*/
void sub_cda200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda200ULL || rel >= 0xcda210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda210 size=16 callers=0 calls=0
*/
void sub_cda210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda210ULL || rel >= 0xcda220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda220 size=16 callers=0 calls=0
*/
void sub_cda220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda220ULL || rel >= 0xcda230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda230 size=16 callers=0 calls=0
*/
void sub_cda230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda230ULL || rel >= 0xcda240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda240 size=16 callers=0 calls=0
*/
void sub_cda240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda240ULL || rel >= 0xcda250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda250 size=816 callers=0 calls=4
   calls: sub_13a6cd0, sub_972c70, sub_c840d0, sub_cda580
*/
void sub_cda250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda250ULL || rel >= 0xcda580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda580 size=400 callers=1 calls=2
   calls: sub_cca0a0, sub_d047b0
*/
void sub_cda580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda580ULL || rel >= 0xcda710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda710 size=176 callers=0 calls=0
*/
void sub_cda710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda710ULL || rel >= 0xcda7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda7c0 size=176 callers=0 calls=0
*/
void sub_cda7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda7c0ULL || rel >= 0xcda870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda870 size=16 callers=0 calls=0
*/
void sub_cda870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda870ULL || rel >= 0xcda880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda880 size=16 callers=0 calls=0
*/
void sub_cda880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda880ULL || rel >= 0xcda890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda890 size=64 callers=0 calls=0
*/
void sub_cda890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda890ULL || rel >= 0xcda8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda8d0 size=16 callers=0 calls=0
*/
void sub_cda8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda8d0ULL || rel >= 0xcda8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda8e0 size=32 callers=0 calls=0
*/
void sub_cda8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda8e0ULL || rel >= 0xcda900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda900 size=16 callers=0 calls=0
*/
void sub_cda900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda900ULL || rel >= 0xcda910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda910 size=32 callers=0 calls=0
*/
void sub_cda910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda910ULL || rel >= 0xcda930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda930 size=16 callers=0 calls=0
*/
void sub_cda930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda930ULL || rel >= 0xcda940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda940 size=16 callers=0 calls=0
*/
void sub_cda940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda940ULL || rel >= 0xcda950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda950 size=16 callers=0 calls=0
*/
void sub_cda950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda950ULL || rel >= 0xcda960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda960 size=16 callers=0 calls=0
*/
void sub_cda960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda960ULL || rel >= 0xcda970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cda970 size=816 callers=0 calls=4
   calls: sub_13a6cd0, sub_972c70, sub_c840d0, sub_cdaca0
*/
void sub_cda970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcda970ULL || rel >= 0xcdaca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdaca0 size=400 callers=1 calls=2
   calls: sub_cca0a0, sub_cfee70
*/
void sub_cdaca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdaca0ULL || rel >= 0xcdae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdae30 size=96 callers=0 calls=0
*/
void sub_cdae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdae30ULL || rel >= 0xcdae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdae90 size=16 callers=0 calls=0
*/
void sub_cdae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdae90ULL || rel >= 0xcdaea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdaea0 size=16 callers=0 calls=0
*/
void sub_cdaea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdaea0ULL || rel >= 0xcdaeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdaeb0 size=16 callers=0 calls=0
*/
void sub_cdaeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdaeb0ULL || rel >= 0xcdaec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdaec0 size=1776 callers=3 calls=4
   calls: sub_cdaec0, sub_cdb5b0, sub_cdb8d0, sub_cdbaa0
*/
void sub_cdaec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdaec0ULL || rel >= 0xcdb5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdb5b0 size=448 callers=5 calls=0
*/
void sub_cdb5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdb5b0ULL || rel >= 0xcdb770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdb770 size=352 callers=2 calls=1
   calls: sub_cdb5b0
*/
void sub_cdb770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdb770ULL || rel >= 0xcdb8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdb8d0 size=464 callers=2 calls=1
   calls: sub_cdb770
*/
void sub_cdb8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdb8d0ULL || rel >= 0xcdbaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdbaa0 size=576 callers=2 calls=3
   calls: sub_cdb5b0, sub_cdb770, sub_cdb8d0
*/
void sub_cdbaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdbaa0ULL || rel >= 0xcdbce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdbce0 size=64 callers=0 calls=0
*/
void sub_cdbce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdbce0ULL || rel >= 0xcdbd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdbd20 size=16 callers=0 calls=0
*/
void sub_cdbd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdbd20ULL || rel >= 0xcdbd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdbd30 size=16 callers=0 calls=0
*/
void sub_cdbd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdbd30ULL || rel >= 0xcdbd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdbd40 size=16 callers=0 calls=0
*/
void sub_cdbd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdbd40ULL || rel >= 0xcdbd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdbd50 size=288 callers=0 calls=5
   calls: sub_cc5dc0, sub_cc5f20, sub_cc61f0, sub_cc6360, sub_cc64a0
*/
void sub_cdbd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdbd50ULL || rel >= 0xcdbe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdbe70 size=16 callers=0 calls=0
*/
void sub_cdbe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdbe70ULL || rel >= 0xcdbe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdbe80 size=16 callers=0 calls=0
*/
void sub_cdbe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdbe80ULL || rel >= 0xcdbe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdbe90 size=16 callers=0 calls=0
*/
void sub_cdbe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdbe90ULL || rel >= 0xcdbea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdbea0 size=400 callers=1 calls=2
   calls: sub_cca0a0, sub_d34b00
*/
void sub_cdbea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdbea0ULL || rel >= 0xcdc030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc030 size=32 callers=0 calls=0
*/
void sub_cdc030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc030ULL || rel >= 0xcdc050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc050 size=16 callers=0 calls=0
*/
void sub_cdc050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc050ULL || rel >= 0xcdc060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc060 size=16 callers=0 calls=0
*/
void sub_cdc060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc060ULL || rel >= 0xcdc070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc070 size=16 callers=0 calls=0
*/
void sub_cdc070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc070ULL || rel >= 0xcdc080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc080 size=32 callers=0 calls=0
*/
void sub_cdc080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc080ULL || rel >= 0xcdc0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc0a0 size=16 callers=0 calls=0
*/
void sub_cdc0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc0a0ULL || rel >= 0xcdc0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc0b0 size=16 callers=0 calls=0
*/
void sub_cdc0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc0b0ULL || rel >= 0xcdc0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc0c0 size=16 callers=0 calls=0
*/
void sub_cdc0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc0c0ULL || rel >= 0xcdc0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc0d0 size=304 callers=4 calls=1
   calls: sub_967240
*/
void sub_cdc0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc0d0ULL || rel >= 0xcdc200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc200 size=304 callers=4 calls=1
   calls: sub_967240
*/
void sub_cdc200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc200ULL || rel >= 0xcdc330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc330 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cdc330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc330ULL || rel >= 0xcdc3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc3f0 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cdc3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc3f0ULL || rel >= 0xcdc4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc4b0 size=32 callers=0 calls=0
*/
void sub_cdc4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc4b0ULL || rel >= 0xcdc4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc4d0 size=48 callers=0 calls=0
*/
void sub_cdc4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc4d0ULL || rel >= 0xcdc500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc500 size=672 callers=0 calls=8
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e6180, sub_76d200, sub_c49fc0, sub_cc8c30
   ref: bin/trainer/trainer_type/trainer_type_%03d.bin
*/
void trainer_type__03d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc500ULL || rel >= 0xcdc7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc7a0 size=16 callers=0 calls=0
*/
void sub_cdc7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc7a0ULL || rel >= 0xcdc7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc7b0 size=32 callers=0 calls=0
*/
void sub_cdc7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc7b0ULL || rel >= 0xcdc7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc7d0 size=32 callers=0 calls=0
*/
void sub_cdc7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc7d0ULL || rel >= 0xcdc7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdc7f0 size=704 callers=1 calls=0
*/
void sub_cdc7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdc7f0ULL || rel >= 0xcdcab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdcab0 size=48 callers=0 calls=0
*/
void sub_cdcab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdcab0ULL || rel >= 0xcdcae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdcae0 size=16 callers=0 calls=0
*/
void sub_cdcae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdcae0ULL || rel >= 0xcdcaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdcaf0 size=16 callers=0 calls=0
*/
void sub_cdcaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdcaf0ULL || rel >= 0xcdcb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdcb00 size=16 callers=0 calls=0
*/
void sub_cdcb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdcb00ULL || rel >= 0xcdcb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdcb10 size=448 callers=3 calls=0
*/
void sub_cdcb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdcb10ULL || rel >= 0xcdccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdccd0 size=208 callers=0 calls=1
   calls: sub_cdcb10
*/
void sub_cdccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdccd0ULL || rel >= 0xcdcda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdcda0 size=16 callers=0 calls=0
*/
void sub_cdcda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdcda0ULL || rel >= 0xcdcdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdcdb0 size=32 callers=0 calls=0
*/
void sub_cdcdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdcdb0ULL || rel >= 0xcdcdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdcdd0 size=32 callers=0 calls=0
*/
void sub_cdcdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdcdd0ULL || rel >= 0xcdcdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdcdf0 size=112 callers=0 calls=4
   calls: sub_c73850, sub_c739f0, sub_cc61f0, sub_cc6360
*/
void sub_cdcdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdcdf0ULL || rel >= 0xcdce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdce60 size=16 callers=0 calls=0
*/
void sub_cdce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdce60ULL || rel >= 0xcdce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdce70 size=16 callers=0 calls=0
*/
void sub_cdce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdce70ULL || rel >= 0xcdce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdce80 size=16 callers=0 calls=0
*/
void sub_cdce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdce80ULL || rel >= 0xcdce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdce90 size=368 callers=0 calls=0
*/
void sub_cdce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdce90ULL || rel >= 0xcdd000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdd000 size=464 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdd000ULL || rel >= 0xcdd1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdd1d0 size=688 callers=2 calls=0
*/
void sub_cdd1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdd1d0ULL || rel >= 0xcdd480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdd480 size=560 callers=2 calls=0
*/
void sub_cdd480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdd480ULL || rel >= 0xcdd6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdd6b0 size=144 callers=3 calls=2
   calls: sub_136b690, sub_cdd480
*/
void sub_cdd6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdd6b0ULL || rel >= 0xcdd740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdd740 size=1136 callers=5 calls=17
   calls: sub_1367890, sub_136b690, sub_13ed240, sub_762930, sub_762d70, sub_7670a0, sub_7670b0, sub_767160, sub_784960, sub_c99bb0, sub_cdd480, sub_cddbb0
   ... +5 more
*/
void sub_cdd740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdd740ULL || rel >= 0xcddbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cddbb0 size=352 callers=1 calls=0
*/
void sub_cddbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcddbb0ULL || rel >= 0xcddd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cddd10 size=128 callers=1 calls=0
*/
void sub_cddd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcddd10ULL || rel >= 0xcddd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cddd90 size=208 callers=3 calls=1
   calls: sub_cdde60
*/
void sub_cddd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcddd90ULL || rel >= 0xcdde60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdde60 size=432 callers=2 calls=1
   calls: sub_12fa460
*/
void sub_cdde60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdde60ULL || rel >= 0xcde010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cde010 size=64 callers=1 calls=0
*/
void sub_cde010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcde010ULL || rel >= 0xcde050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cde050 size=192 callers=3 calls=1
   calls: sub_cde110
*/
void sub_cde050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcde050ULL || rel >= 0xcde110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cde110 size=480 callers=1 calls=3
   calls: sub_76f5d0, sub_cdeca0, sub_cdee00
*/
void sub_cde110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcde110ULL || rel >= 0xcde2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cde2f0 size=1552 callers=2 calls=15
   calls: sub_12fa460, sub_1379660, sub_76c420, sub_76c470, sub_76c4a0, sub_76c5e0, sub_7803f0, sub_782940, sub_782980, sub_7829a0, sub_782c90, sub_782cb0
   ... +3 more
*/
void sub_cde2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcde2f0ULL || rel >= 0xcde900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cde900 size=288 callers=2 calls=2
   calls: sub_76bc60, sub_76bc80
*/
void sub_cde900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcde900ULL || rel >= 0xcdea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdea20 size=640 callers=2 calls=2
   calls: sub_d63270, sub_eaec80
*/
void sub_cdea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdea20ULL || rel >= 0xcdeca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdeca0 size=352 callers=1 calls=0
*/
void sub_cdeca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdeca0ULL || rel >= 0xcdee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdee00 size=320 callers=2 calls=7
   calls: sub_762d90, sub_763dd0, sub_763e00, sub_764df0, sub_766220, sub_7664a0, sub_cde900
*/
void sub_cdee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdee00ULL || rel >= 0xcdef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdef40 size=768 callers=3 calls=8
   calls: sub_135a760, sub_cb3460, sub_cde2f0, sub_cdf240, sub_cdf480, sub_cdf8d0, sub_cdfc70, sub_cdfda0
*/
void sub_cdef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdef40ULL || rel >= 0xcdf240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdf240 size=576 callers=1 calls=0
*/
void sub_cdf240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdf240ULL || rel >= 0xcdf480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdf480 size=1104 callers=5 calls=2
   calls: sub_76bc60, sub_76bc80
*/
void sub_cdf480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdf480ULL || rel >= 0xcdf8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdf8d0 size=928 callers=1 calls=4
   calls: sub_1379a10, sub_1379d60, sub_137a050, sub_137a070
*/
void sub_cdf8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdf8d0ULL || rel >= 0xcdfc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdfc70 size=304 callers=1 calls=0
*/
void sub_cdfc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdfc70ULL || rel >= 0xcdfda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdfda0 size=272 callers=1 calls=5
   calls: sub_12fa460, sub_76bc60, sub_76bc80, sub_cdea20, sub_cdffd0
*/
void sub_cdfda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdfda0ULL || rel >= 0xcdfeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdfeb0 size=288 callers=1 calls=1
   calls: sub_135a760
*/
void sub_cdfeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdfeb0ULL || rel >= 0xcdffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cdffd0 size=224 callers=1 calls=0
*/
void sub_cdffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdffd0ULL || rel >= 0xce00b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce00b0 size=16 callers=0 calls=0
*/
void sub_ce00b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce00b0ULL || rel >= 0xce00c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce00c0 size=16 callers=0 calls=0
*/
void sub_ce00c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce00c0ULL || rel >= 0xce00d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce00d0 size=16 callers=0 calls=0
*/
void sub_ce00d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce00d0ULL || rel >= 0xce00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce00e0 size=304 callers=9 calls=0
*/
void sub_ce00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce00e0ULL || rel >= 0xce0210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0210 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_ce0210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0210ULL || rel >= 0xce0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0250 size=32 callers=0 calls=0
*/
void sub_ce0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0250ULL || rel >= 0xce0270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0270 size=48 callers=0 calls=0
*/
void sub_ce0270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0270ULL || rel >= 0xce02a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce02a0 size=32 callers=0 calls=0
*/
void sub_ce02a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce02a0ULL || rel >= 0xce02c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce02c0 size=48 callers=0 calls=0
*/
void sub_ce02c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce02c0ULL || rel >= 0xce02f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce02f0 size=16 callers=0 calls=0
*/
void sub_ce02f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce02f0ULL || rel >= 0xce0300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0300 size=256 callers=13 calls=0
*/
void sub_ce0300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0300ULL || rel >= 0xce0400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0400 size=64 callers=4 calls=0
*/
void sub_ce0400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0400ULL || rel >= 0xce0440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0440 size=64 callers=5 calls=0
*/
void sub_ce0440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0440ULL || rel >= 0xce0480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0480 size=64 callers=2 calls=0
*/
void sub_ce0480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0480ULL || rel >= 0xce04c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce04c0 size=176 callers=1 calls=0
*/
void sub_ce04c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce04c0ULL || rel >= 0xce0570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0570 size=224 callers=6 calls=0
*/
void sub_ce0570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0570ULL || rel >= 0xce0650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0650 size=64 callers=0 calls=0
   ref: bin/field/param/ground_attribute/field_attribute_table.bin
*/
void field_attribute_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0650ULL || rel >= 0xce0690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0690 size=144 callers=1 calls=0
*/
void sub_ce0690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0690ULL || rel >= 0xce0720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0720 size=464 callers=2 calls=6
   calls: sub_136f5c0, sub_137fc10, sub_13a10f0, sub_13a1100, sub_13a1150, sub_eac930
*/
void sub_ce0720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0720ULL || rel >= 0xce08f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce08f0 size=16 callers=2 calls=0
*/
void sub_ce08f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce08f0ULL || rel >= 0xce0900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0900 size=976 callers=2 calls=8
   calls: sub_1105bc0, sub_1105be0, sub_136f5d0, sub_13a1100, sub_13a11f0, sub_5f8760, sub_ce0e10, sub_eac9a0
*/
void sub_ce0900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0900ULL || rel >= 0xce0cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0cd0 size=96 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_ce0cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0cd0ULL || rel >= 0xce0d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0d30 size=96 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_ce0d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0d30ULL || rel >= 0xce0d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0d90 size=80 callers=0 calls=2
   calls: sub_13a1150, sub_13a11f0
*/
void sub_ce0d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0d90ULL || rel >= 0xce0de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0de0 size=16 callers=0 calls=0
*/
void sub_ce0de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0de0ULL || rel >= 0xce0df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0df0 size=16 callers=0 calls=0
*/
void sub_ce0df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0df0ULL || rel >= 0xce0e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0e00 size=16 callers=0 calls=0
*/
void sub_ce0e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0e00ULL || rel >= 0xce0e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce0e10 size=512 callers=1 calls=3
   calls: sub_5cf8c0, sub_5e2350, sub_65d700
*/
void sub_ce0e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce0e10ULL || rel >= 0xce1010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce1010 size=224 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ce1010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce1010ULL || rel >= 0xce10f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce10f0 size=224 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ce10f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce10f0ULL || rel >= 0xce11d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce11d0 size=240 callers=0 calls=0
*/
void sub_ce11d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce11d0ULL || rel >= 0xce12c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce12c0 size=224 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ce12c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce12c0ULL || rel >= 0xce13a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce13a0 size=224 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ce13a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce13a0ULL || rel >= 0xce1480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce1480 size=16 callers=0 calls=0
*/
void sub_ce1480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce1480ULL || rel >= 0xce1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce1490 size=16 callers=0 calls=0
*/
void sub_ce1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce1490ULL || rel >= 0xce14a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce14a0 size=224 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ce14a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce14a0ULL || rel >= 0xce1580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce1580 size=224 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ce1580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce1580ULL || rel >= 0xce1660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce1660 size=208 callers=0 calls=2
   calls: sub_13a1150, sub_5cf8f0
*/
void sub_ce1660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce1660ULL || rel >= 0xce1730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce1730 size=64 callers=0 calls=0
*/
void sub_ce1730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce1730ULL || rel >= 0xce1770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce1770 size=48 callers=0 calls=0
*/
void sub_ce1770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce1770ULL || rel >= 0xce17a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce17a0 size=32 callers=0 calls=0
*/
void sub_ce17a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce17a0ULL || rel >= 0xce17c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce17c0 size=384 callers=1 calls=1
   calls: sub_607550
*/
void sub_ce17c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce17c0ULL || rel >= 0xce1940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce1940 size=128 callers=1 calls=2
   calls: sub_607550, sub_ed34f0
*/
void sub_ce1940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce1940ULL || rel >= 0xce19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce19c0 size=480 callers=2 calls=3
   calls: sub_135f4f0, sub_607550, sub_ce1ba0
*/
void sub_ce19c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce19c0ULL || rel >= 0xce1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce1ba0 size=560 callers=2 calls=2
   calls: sub_607550, sub_ed34f0
*/
void sub_ce1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce1ba0ULL || rel >= 0xce1dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce1dd0 size=528 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_ce1dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce1dd0ULL || rel >= 0xce1fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce1fe0 size=64 callers=0 calls=3
   calls: sub_ce1ba0, sub_ce2020, sub_ce21b0
*/
void sub_ce1fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce1fe0ULL || rel >= 0xce2020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce2020 size=400 callers=1 calls=2
   calls: sub_ed3290, sub_ed32d0
*/
void sub_ce2020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce2020ULL || rel >= 0xce21b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce21b0 size=528 callers=1 calls=2
   calls: sub_ed3290, sub_ed32d0
*/
void sub_ce21b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce21b0ULL || rel >= 0xce23c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce23c0 size=624 callers=0 calls=2
   calls: sub_ed3290, sub_ed32d0
*/
void sub_ce23c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce23c0ULL || rel >= 0xce2630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce2630 size=320 callers=1 calls=2
   calls: sub_ed3290, sub_ed32d0
*/
void sub_ce2630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce2630ULL || rel >= 0xce2770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce2770 size=160 callers=0 calls=0
*/
void sub_ce2770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce2770ULL || rel >= 0xce2810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce2810 size=160 callers=0 calls=0
*/
void sub_ce2810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce2810ULL || rel >= 0xce28b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce28b0 size=240 callers=0 calls=0
*/
void sub_ce28b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce28b0ULL || rel >= 0xce29a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce29a0 size=160 callers=0 calls=0
*/
void sub_ce29a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce29a0ULL || rel >= 0xce2a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce2a40 size=160 callers=0 calls=0
*/
void sub_ce2a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce2a40ULL || rel >= 0xce2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce2ae0 size=16 callers=0 calls=0
*/
void sub_ce2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce2ae0ULL || rel >= 0xce2af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce2af0 size=16 callers=0 calls=0
*/
void sub_ce2af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce2af0ULL || rel >= 0xce2b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce2b00 size=160 callers=0 calls=0
*/
void sub_ce2b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce2b00ULL || rel >= 0xce2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce2ba0 size=160 callers=0 calls=0
*/
void sub_ce2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce2ba0ULL || rel >= 0xce2c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce2c40 size=368 callers=0 calls=0
*/
void sub_ce2c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce2c40ULL || rel >= 0xce2db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce2db0 size=2656 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: field::Heap::BG_SUB
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: field::Heap::RESIDENT_ARC_MAIN
   ref: field::ResidentHeap::ACTION_COMMAND
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: field::ResidentHeap::AI_SCRIPT
*/
void skybox_01_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce2db0ULL || rel >= 0xce3810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce3810 size=176 callers=0 calls=0
*/
void sub_ce3810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3810ULL || rel >= 0xce38c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce38c0 size=208 callers=0 calls=0
*/
void sub_ce38c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce38c0ULL || rel >= 0xce3990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce3990 size=32 callers=6 calls=0
*/
void sub_ce3990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3990ULL || rel >= 0xce39b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce39b0 size=32 callers=7 calls=0
*/
void sub_ce39b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce39b0ULL || rel >= 0xce39d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce39d0 size=32 callers=3 calls=0
*/
void sub_ce39d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce39d0ULL || rel >= 0xce39f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce39f0 size=32 callers=3 calls=0
*/
void sub_ce39f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce39f0ULL || rel >= 0xce3a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce3a10 size=144 callers=9 calls=1
   calls: gfbanm
*/
void sub_ce3a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3a10ULL || rel >= 0xce3aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce3aa0 size=176 callers=0 calls=1
   calls: sub_5cbcf0
*/
void sub_ce3aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3aa0ULL || rel >= 0xce3b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce3b50 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_ce3b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3b50ULL || rel >= 0xce3ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce3ba0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_ce3ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3ba0ULL || rel >= 0xce3bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce3bf0 size=112 callers=0 calls=1
   calls: sub_96c590
*/
void sub_ce3bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3bf0ULL || rel >= 0xce3c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce3c60 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_ce3c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3c60ULL || rel >= 0xce3cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce3cb0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_ce3cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3cb0ULL || rel >= 0xce3d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce3d00 size=112 callers=0 calls=1
   calls: sub_96c590
*/
void sub_ce3d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3d00ULL || rel >= 0xce3d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce3d70 size=112 callers=0 calls=1
   calls: sub_96c590
*/
void sub_ce3d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3d70ULL || rel >= 0xce3de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce3de0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_ce3de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3de0ULL || rel >= 0xce3e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce3e30 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_ce3e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3e30ULL || rel >= 0xce3e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce3e80 size=1904 callers=1 calls=2
   calls: FieldObject__lu, sub_e91100
*/
void sub_ce3e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3e80ULL || rel >= 0xce45f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce45f0 size=320 callers=0 calls=6
   calls: sub_c545c0, sub_c54640, sub_c546a0, sub_c546d0, sub_c54770, sub_ce4730
*/
void sub_ce45f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce45f0ULL || rel >= 0xce4730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce4730 size=288 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_ce4730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce4730ULL || rel >= 0xce4850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce4850 size=16 callers=0 calls=0
*/
void sub_ce4850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce4850ULL || rel >= 0xce4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce4860 size=16 callers=0 calls=0
*/
void sub_ce4860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce4860ULL || rel >= 0xce4870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce4870 size=16 callers=0 calls=0
*/
void sub_ce4870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce4870ULL || rel >= 0xce4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce4880 size=16 callers=0 calls=0
*/
void sub_ce4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce4880ULL || rel >= 0xce4890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce4890 size=16 callers=0 calls=0
*/
void sub_ce4890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce4890ULL || rel >= 0xce48a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce48a0 size=640 callers=0 calls=7
   calls: fel_900_03_chara_gfbmad, sub_135a760, sub_137e480, sub_c54640, sub_c546d0, sub_c54b90, sub_c628b0
   ref: fel_%03d
*/
void fel__03d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce48a0ULL || rel >= 0xce4b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce4b20 size=80 callers=0 calls=2
   calls: sub_c545c0, sub_c628c0
*/
void sub_ce4b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce4b20ULL || rel >= 0xce4b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce4b70 size=2080 callers=1 calls=13
   calls: sub_1c0, sub_5cfaf0, sub_5e2930, sub_5e2bc0, sub_5e3980, sub_5e6180, sub_5e6770, sub_5e7a30, sub_76d200, sub_c49fc0, sub_ce5390, sub_ce6410
   ... +1 more
   ref: bin/field/model/%s/%s_%02d.gfbprb
*/
void s__02d_gfbprb(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce4b70ULL || rel >= 0xce5390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce5390 size=1328 callers=1 calls=1
   calls: sub_e9ab60
*/
void sub_ce5390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce5390ULL || rel >= 0xce58c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce58c0 size=64 callers=1 calls=0
*/
void sub_ce58c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce58c0ULL || rel >= 0xce5900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce5900 size=224 callers=1 calls=2
   calls: sub_64ad80, sub_ee79e0
*/
void sub_ce5900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce5900ULL || rel >= 0xce59e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce59e0 size=1392 callers=0 calls=8
   calls: sub_5e2bc0, sub_603250, sub_64a740, sub_64a890, sub_c55af0, sub_c628d0, sub_ce7370, sub_ee7830
*/
void sub_ce59e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce59e0ULL || rel >= 0xce5f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce5f50 size=48 callers=0 calls=1
   calls: sub_c629e0
*/
void sub_ce5f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce5f50ULL || rel >= 0xce5f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce5f80 size=48 callers=0 calls=1
   calls: sub_c62c30
*/
void sub_ce5f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce5f80ULL || rel >= 0xce5fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce5fb0 size=96 callers=1 calls=1
   calls: sub_c545c0
*/
void sub_ce5fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce5fb0ULL || rel >= 0xce6010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce6010 size=64 callers=1 calls=1
   calls: sub_c545c0
*/
void sub_ce6010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce6010ULL || rel >= 0xce6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce6050 size=16 callers=1 calls=0
*/
void sub_ce6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce6050ULL || rel >= 0xce6060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce6060 size=352 callers=5 calls=2
   calls: sub_c55af0, sub_ee7830
*/
void sub_ce6060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce6060ULL || rel >= 0xce61c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce61c0 size=112 callers=0 calls=1
   calls: sub_c6eac0
*/
void sub_ce61c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce61c0ULL || rel >= 0xce6230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce6230 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_ce6230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce6230ULL || rel >= 0xce6320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce6320 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_ce6320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce6320ULL || rel >= 0xce6410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce6410 size=832 callers=1 calls=2
   calls: sub_5e2bc0, sub_ce6750
*/
void sub_ce6410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce6410ULL || rel >= 0xce6750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce6750 size=448 callers=1 calls=0
*/
void sub_ce6750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce6750ULL || rel >= 0xce6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce6910 size=2192 callers=1 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e2500, sub_5e6970, sub_656d60, sub_df90, sub_e840
*/
void sub_ce6910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce6910ULL || rel >= 0xce71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce71a0 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_ce71a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce71a0ULL || rel >= 0xce7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce7260 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_ce7260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce7260ULL || rel >= 0xce7320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce7320 size=32 callers=0 calls=0
*/
void sub_ce7320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce7320ULL || rel >= 0xce7340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce7340 size=48 callers=0 calls=0
*/
void sub_ce7340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce7340ULL || rel >= 0xce7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce7370 size=304 callers=1 calls=1
   calls: sub_ce1dd0
*/
void sub_ce7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce7370ULL || rel >= 0xce74a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce74a0 size=128 callers=0 calls=0
*/
void sub_ce74a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce74a0ULL || rel >= 0xce7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce7520 size=112 callers=1 calls=1
   calls: sub_c84310
*/
void sub_ce7520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce7520ULL || rel >= 0xce7590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce7590 size=16 callers=0 calls=0
*/
void sub_ce7590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce7590ULL || rel >= 0xce75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce75a0 size=16 callers=0 calls=0
*/
void sub_ce75a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce75a0ULL || rel >= 0xce75b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce75b0 size=16 callers=0 calls=0
*/
void sub_ce75b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce75b0ULL || rel >= 0xce75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce75c0 size=16 callers=0 calls=0
*/
void sub_ce75c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce75c0ULL || rel >= 0xce75d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce75d0 size=16 callers=0 calls=0
*/
void sub_ce75d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce75d0ULL || rel >= 0xce75e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce75e0 size=16 callers=0 calls=0
*/
void sub_ce75e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce75e0ULL || rel >= 0xce75f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce75f0 size=16 callers=0 calls=0
*/
void sub_ce75f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce75f0ULL || rel >= 0xce7600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce7600 size=16 callers=0 calls=0
*/
void sub_ce7600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce7600ULL || rel >= 0xce7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce7610 size=1824 callers=1 calls=6
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2010, sub_5d7670, sub_c88aa0
*/
void sub_ce7610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce7610ULL || rel >= 0xce7d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce7d30 size=224 callers=0 calls=1
   calls: sub_c62dd0
*/
void sub_ce7d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce7d30ULL || rel >= 0xce7e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce7e10 size=624 callers=0 calls=8
   calls: sub_13576a0, sub_13576d0, sub_c88ef0, sub_ce8080, sub_ce8420, sub_ce85f0, sub_ce8ca0, sub_ce9be0
*/
void sub_ce7e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce7e10ULL || rel >= 0xce8080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce8080 size=928 callers=1 calls=7
   calls: sub_13575e0, sub_65d220, sub_967240, sub_972c70, sub_9733f0, sub_ea3d10, sub_ea4760
*/
void sub_ce8080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce8080ULL || rel >= 0xce8420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce8420 size=464 callers=1 calls=3
   calls: sub_13575e0, sub_ea3d10, sub_ea47f0
*/
void sub_ce8420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce8420ULL || rel >= 0xce85f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce85f0 size=528 callers=1 calls=3
   calls: sub_13575e0, sub_ea3d10, sub_ea4760
*/
void sub_ce85f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce85f0ULL || rel >= 0xce8800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce8800 size=16 callers=0 calls=0
*/
void sub_ce8800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce8800ULL || rel >= 0xce8810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce8810 size=80 callers=0 calls=1
   calls: sub_c634b0
*/
void sub_ce8810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce8810ULL || rel >= 0xce8860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce8860 size=352 callers=0 calls=2
   calls: sub_9733f0, sub_c63630
*/
void sub_ce8860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce8860ULL || rel >= 0xce89c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce89c0 size=736 callers=1 calls=2
   calls: sub_972c70, sub_ce8ca0
*/
void sub_ce89c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce89c0ULL || rel >= 0xce8ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce8ca0 size=432 callers=15 calls=1
   calls: sub_967240
*/
void sub_ce8ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce8ca0ULL || rel >= 0xce8e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce8e50 size=784 callers=1 calls=6
   calls: sub_13575e0, sub_13c9e50, sub_ce8ca0, sub_ea3d10, sub_ea47d0, sub_ea47e0
*/
void sub_ce8e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce8e50ULL || rel >= 0xce9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce9160 size=2496 callers=1 calls=8
   calls: sub_13c9e50, sub_5c6850, sub_5c68f0, sub_5c6930, sub_5c8c30, sub_972c70, sub_c62830, sub_ce8ca0
*/
void sub_ce9160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce9160ULL || rel >= 0xce9b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce9b20 size=192 callers=1 calls=0
*/
void sub_ce9b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce9b20ULL || rel >= 0xce9be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce9be0 size=368 callers=6 calls=3
   calls: sub_65d220, sub_971950, sub_972c70
*/
void sub_ce9be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce9be0ULL || rel >= 0xce9d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce9d50 size=144 callers=0 calls=0
*/
void sub_ce9d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce9d50ULL || rel >= 0xce9de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce9de0 size=144 callers=0 calls=0
*/
void sub_ce9de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce9de0ULL || rel >= 0xce9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce9e70 size=16 callers=0 calls=0
*/
void sub_ce9e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce9e70ULL || rel >= 0xce9e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce9e80 size=16 callers=0 calls=0
*/
void sub_ce9e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce9e80ULL || rel >= 0xce9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce9e90 size=16 callers=0 calls=0
*/
void sub_ce9e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce9e90ULL || rel >= 0xce9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce9ea0 size=32 callers=0 calls=0
*/
void sub_ce9ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce9ea0ULL || rel >= 0xce9ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce9ec0 size=16 callers=0 calls=0
*/
void sub_ce9ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce9ec0ULL || rel >= 0xce9ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce9ed0 size=144 callers=0 calls=0
*/
void sub_ce9ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce9ed0ULL || rel >= 0xce9f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce9f60 size=144 callers=0 calls=0
*/
void sub_ce9f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce9f60ULL || rel >= 0xce9ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ce9ff0 size=16 callers=0 calls=0
*/
void sub_ce9ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce9ff0ULL || rel >= 0xcea000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea000 size=16 callers=0 calls=0
*/
void sub_cea000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea000ULL || rel >= 0xcea010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea010 size=144 callers=0 calls=0
*/
void sub_cea010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea010ULL || rel >= 0xcea0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea0a0 size=144 callers=0 calls=0
*/
void sub_cea0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea0a0ULL || rel >= 0xcea130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea130 size=304 callers=1 calls=1
   calls: sub_967240
*/
void sub_cea130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea130ULL || rel >= 0xcea260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea260 size=128 callers=0 calls=4
   calls: sub_c88f00, sub_ce89c0, sub_ce8e50, sub_ce9160
*/
void sub_cea260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea260ULL || rel >= 0xcea2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea2e0 size=16 callers=0 calls=0
*/
void sub_cea2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea2e0ULL || rel >= 0xcea2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea2f0 size=16 callers=0 calls=0
*/
void sub_cea2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea2f0ULL || rel >= 0xcea300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea300 size=16 callers=0 calls=0
*/
void sub_cea300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea300ULL || rel >= 0xcea310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea310 size=400 callers=0 calls=0
*/
void sub_cea310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea310ULL || rel >= 0xcea4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea4a0 size=128 callers=1 calls=1
   calls: sub_c89a00
*/
void sub_cea4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea4a0ULL || rel >= 0xcea520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea520 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_cea520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea520ULL || rel >= 0xcea570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea570 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_cea570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea570ULL || rel >= 0xcea5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea5c0 size=112 callers=0 calls=1
   calls: sub_cea850
*/
void sub_cea5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea5c0ULL || rel >= 0xcea630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea630 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_cea630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea630ULL || rel >= 0xcea680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea680 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_cea680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea680ULL || rel >= 0xcea6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea6d0 size=112 callers=0 calls=1
   calls: sub_cea850
*/
void sub_cea6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea6d0ULL || rel >= 0xcea740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea740 size=112 callers=0 calls=1
   calls: sub_cea850
*/
void sub_cea740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea740ULL || rel >= 0xcea7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea7b0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_cea7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea7b0ULL || rel >= 0xcea800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea800 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_cea800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea800ULL || rel >= 0xcea850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea850 size=304 callers=3 calls=1
   calls: sub_967240
*/
void sub_cea850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea850ULL || rel >= 0xcea980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cea980 size=368 callers=0 calls=0
*/
void sub_cea980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea980ULL || rel >= 0xceaaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ceaaf0 size=720 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: EndBTire
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
*/
void skybox_01_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xceaaf0ULL || rel >= 0xceadc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ceadc0 size=1440 callers=1 calls=4
   calls: sub_65d700, sub_c692c0, sub_c6cf50, sub_c6cfa0
*/
void sub_ceadc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xceadc0ULL || rel >= 0xceb360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ceb360 size=496 callers=0 calls=4
   calls: sub_b334c0, sub_b334e0, sub_b4c060, sub_c697c0
*/
void sub_ceb360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xceb360ULL || rel >= 0xceb550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ceb550 size=208 callers=0 calls=3
   calls: sub_b33510, sub_b4c060, sub_c69e60
*/
void sub_ceb550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xceb550ULL || rel >= 0xceb620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ceb620 size=3696 callers=0 calls=31
   calls: sub_135a760, sub_59b070, sub_59b0d0, sub_59b0e0, sub_59b140, sub_59b150, sub_59b1c0, sub_5a1d00, sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2010
   ... +19 more
*/
void sub_ceb620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xceb620ULL || rel >= 0xcec490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cec490 size=640 callers=4 calls=3
   calls: sub_13a6920, sub_971950, sub_972c70
*/
void sub_cec490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcec490ULL || rel >= 0xcec710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cec710 size=208 callers=1 calls=1
   calls: sub_135a760
*/
void sub_cec710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcec710ULL || rel >= 0xcec7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cec7e0 size=16 callers=0 calls=0
*/
void sub_cec7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcec7e0ULL || rel >= 0xcec7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cec7f0 size=352 callers=1 calls=3
   calls: sub_13a6920, sub_c6a470, sub_c6ceb0
*/
void sub_cec7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcec7f0ULL || rel >= 0xcec950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cec950 size=1472 callers=0 calls=14
   calls: sub_65d220, sub_971950, sub_972c70, sub_c6ccb0, sub_c6ceb0, sub_ce00e0, sub_ce0300, sub_ce0440, sub_ce0570, sub_ced290, sub_d25c50, sub_d63270
   ... +2 more
   ref: bin/field/effect/particle/ef_cyc_running/%s.ptcl
*/
void unnamed_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcec950ULL || rel >= 0xcecf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cecf10 size=256 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_cecf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcecf10ULL || rel >= 0xced010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ced010 size=448 callers=1 calls=4
   calls: sub_59b0c0, sub_59b130, sub_59b1a0, sub_607750
*/
void sub_ced010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xced010ULL || rel >= 0xced1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ced1d0 size=192 callers=0 calls=3
   calls: sub_b33700, sub_b4c060, sub_c6d5e0
*/
void sub_ced1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xced1d0ULL || rel >= 0xced290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ced290 size=1648 callers=1 calls=7
   calls: sub_13c9e50, sub_5c6850, sub_5c68f0, sub_5c6930, sub_971950, sub_972c70, sub_c62830
*/
void sub_ced290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xced290ULL || rel >= 0xced900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ced900 size=256 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_ced900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xced900ULL || rel >= 0xceda00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ceda00 size=464 callers=0 calls=3
   calls: sub_614680, sub_96ccf0, sub_c6e4b0
*/
void sub_ceda00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xceda00ULL || rel >= 0xcedbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cedbd0 size=208 callers=0 calls=0
*/
void sub_cedbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcedbd0ULL || rel >= 0xcedca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cedca0 size=208 callers=0 calls=0
*/
void sub_cedca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcedca0ULL || rel >= 0xcedd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cedd70 size=112 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_cedd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcedd70ULL || rel >= 0xcedde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cedde0 size=208 callers=0 calls=0
*/
void sub_cedde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcedde0ULL || rel >= 0xcedeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cedeb0 size=208 callers=0 calls=0
*/
void sub_cedeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcedeb0ULL || rel >= 0xcedf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cedf80 size=112 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_cedf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcedf80ULL || rel >= 0xcedff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cedff0 size=112 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_cedff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcedff0ULL || rel >= 0xcee060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cee060 size=208 callers=0 calls=0
*/
void sub_cee060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcee060ULL || rel >= 0xcee130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cee130 size=208 callers=0 calls=0
*/
void sub_cee130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcee130ULL || rel >= 0xcee200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cee200 size=448 callers=1 calls=0
*/
void sub_cee200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcee200ULL || rel >= 0xcee3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cee3c0 size=448 callers=3 calls=0
*/
void sub_cee3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcee3c0ULL || rel >= 0xcee580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cee580 size=304 callers=1 calls=1
   calls: sub_cafce0
*/
void sub_cee580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcee580ULL || rel >= 0xcee6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cee6b0 size=16 callers=0 calls=0
*/
void sub_cee6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcee6b0ULL || rel >= 0xcee6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cee6c0 size=16 callers=0 calls=0
*/
void sub_cee6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcee6c0ULL || rel >= 0xcee6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cee6d0 size=16 callers=0 calls=0
*/
void sub_cee6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcee6d0ULL || rel >= 0xcee6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cee6e0 size=16 callers=0 calls=0
*/
void sub_cee6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcee6e0ULL || rel >= 0xcee6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cee6f0 size=368 callers=0 calls=0
*/
void sub_cee6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcee6f0ULL || rel >= 0xcee860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cee860 size=736 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcee860ULL || rel >= 0xceeb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ceeb40 size=224 callers=5 calls=2
   calls: sub_5cf8c0, sub_c82090
*/
void sub_ceeb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xceeb40ULL || rel >= 0xceec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ceec20 size=800 callers=5 calls=7
   calls: PlayVfx, sub_5d99d0, sub_c829d0, sub_cef110, sub_cf2bc0, sub_cf2cf0, sub_cf2ef0
*/
void sub_ceec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xceec20ULL || rel >= 0xceef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ceef40 size=368 callers=1 calls=4
   calls: sub_59a260, sub_5d99d0, sub_98eec0, sub_b44bb0
   ref: Field/PlayVfx
*/
void PlayVfx(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xceef40ULL || rel >= 0xcef0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cef0b0 size=96 callers=1 calls=0
*/
void sub_cef0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcef0b0ULL || rel >= 0xcef110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cef110 size=336 callers=1 calls=2
   calls: sub_59bee0, sub_967240
*/
void sub_cef110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcef110ULL || rel >= 0xcef260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cef260 size=464 callers=3 calls=2
   calls: sub_13a6920, sub_c82900
*/
void sub_cef260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcef260ULL || rel >= 0xcef430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cef430 size=80 callers=4 calls=1
   calls: sub_c6a2d0
*/
void sub_cef430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcef430ULL || rel >= 0xcef480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cef480 size=2384 callers=0 calls=9
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750, sub_967240, sub_986bc0, sub_b33cd0, sub_b46170, sub_b4c060, sub_cf2a60
*/
void sub_cef480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcef480ULL || rel >= 0xcefdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cefdd0 size=784 callers=4 calls=2
   calls: eye_move_v_2, sub_c6a470
   ref: eye_move_v
   ref: eye_move_u
*/
void eye_move_v(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcefdd0ULL || rel >= 0xcf00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf00e0 size=208 callers=2 calls=2
   calls: sub_c634b0, sub_ca0b90
*/
void sub_cf00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf00e0ULL || rel >= 0xcf01b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf01b0 size=208 callers=2 calls=3
   calls: sub_c63630, sub_c9be80, sub_ca0b90
*/
void sub_cf01b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf01b0ULL || rel >= 0xcf0280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf0280 size=224 callers=3 calls=3
   calls: sub_13ca950, sub_cf3680, sub_cf37c0
*/
void sub_cf0280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf0280ULL || rel >= 0xcf0360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf0360 size=144 callers=4 calls=2
   calls: sub_cf3680, sub_cf38a0
*/
void sub_cf0360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf0360ULL || rel >= 0xcf03f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf03f0 size=176 callers=0 calls=1
   calls: sub_5cbcf0
*/
void sub_cf03f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf03f0ULL || rel >= 0xcf04a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf04a0 size=304 callers=0 calls=2
   calls: sub_13a6920, sub_c6af80
*/
void sub_cf04a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf04a0ULL || rel >= 0xcf05d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf05d0 size=304 callers=0 calls=2
   calls: sub_13a6920, sub_c6b1f0
*/
void sub_cf05d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf05d0ULL || rel >= 0xcf0700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf0700 size=304 callers=0 calls=2
   calls: sub_13a6920, sub_c6b560
*/
void sub_cf0700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf0700ULL || rel >= 0xcf0830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf0830 size=288 callers=0 calls=2
   calls: sub_13a6920, sub_c6b6c0
*/
void sub_cf0830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf0830ULL || rel >= 0xcf0950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf0950 size=272 callers=1 calls=2
   calls: sub_13a6920, sub_c6b9f0
*/
void sub_cf0950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf0950ULL || rel >= 0xcf0a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf0a60 size=272 callers=0 calls=2
   calls: sub_13a6920, sub_c6bc90
*/
void sub_cf0a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf0a60ULL || rel >= 0xcf0b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf0b70 size=272 callers=0 calls=2
   calls: sub_13a6920, sub_c6bde0
*/
void sub_cf0b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf0b70ULL || rel >= 0xcf0c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf0c80 size=304 callers=0 calls=2
   calls: sub_13a6920, sub_c6bf30
*/
void sub_cf0c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf0c80ULL || rel >= 0xcf0db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf0db0 size=288 callers=0 calls=2
   calls: sub_13a6920, sub_c6c0d0
*/
void sub_cf0db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf0db0ULL || rel >= 0xcf0ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf0ed0 size=544 callers=2 calls=1
   calls: sub_13a6920
*/
void sub_cf0ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf0ed0ULL || rel >= 0xcf10f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf10f0 size=384 callers=1 calls=2
   calls: sub_13a6920, sub_cf1270
*/
void sub_cf10f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf10f0ULL || rel >= 0xcf1270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf1270 size=304 callers=6 calls=1
   calls: sub_13a6920
*/
void sub_cf1270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf1270ULL || rel >= 0xcf13a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf13a0 size=528 callers=7 calls=2
   calls: sub_59b100, sub_607750
   ref: eye_move_v
   ref: eye_move_u
*/
void eye_move_v_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf13a0ULL || rel >= 0xcf15b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf15b0 size=416 callers=12 calls=3
   calls: sub_59b250, sub_5b9220, sub_607750
*/
void sub_cf15b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf15b0ULL || rel >= 0xcf1750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf1750 size=208 callers=2 calls=2
   calls: sub_ce0300, sub_ce0440
*/
void sub_cf1750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf1750ULL || rel >= 0xcf1820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf1820 size=160 callers=0 calls=2
   calls: sub_c62750, sub_cf38a0
*/
void sub_cf1820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf1820ULL || rel >= 0xcf18c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf18c0 size=528 callers=1 calls=3
   calls: sub_13a6920, sub_c627e0, sub_cec490
*/
void sub_cf18c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf18c0ULL || rel >= 0xcf1ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf1ad0 size=464 callers=0 calls=2
   calls: sub_b4c060, sub_b98710
*/
void sub_cf1ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf1ad0ULL || rel >= 0xcf1ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf1ca0 size=480 callers=1 calls=2
   calls: sub_13a6920, sub_cec490
*/
void sub_cf1ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf1ca0ULL || rel >= 0xcf1e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf1e80 size=400 callers=1 calls=2
   calls: sub_13a6920, sub_cec490
*/
void sub_cf1e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf1e80ULL || rel >= 0xcf2010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2010 size=416 callers=15 calls=1
   calls: sub_13a6920
*/
void sub_cf2010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2010ULL || rel >= 0xcf21b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf21b0 size=272 callers=4 calls=3
   calls: sub_13a6920, sub_cf1270, sub_d57130
*/
void sub_cf21b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf21b0ULL || rel >= 0xcf22c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf22c0 size=272 callers=1 calls=3
   calls: sub_13a6920, sub_cf1270, unit_obj_tent01_cloth01_01_01_bld
*/
void sub_cf22c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf22c0ULL || rel >= 0xcf23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf23d0 size=16 callers=0 calls=0
*/
void sub_cf23d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf23d0ULL || rel >= 0xcf23e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf23e0 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_cf23e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf23e0ULL || rel >= 0xcf2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2470 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_cf2470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2470ULL || rel >= 0xcf2500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2500 size=176 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_cf2500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2500ULL || rel >= 0xcf25b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf25b0 size=16 callers=0 calls=0
*/
void sub_cf25b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf25b0ULL || rel >= 0xcf25c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf25c0 size=16 callers=0 calls=0
*/
void sub_cf25c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf25c0ULL || rel >= 0xcf25d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf25d0 size=32 callers=0 calls=0
*/
void sub_cf25d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf25d0ULL || rel >= 0xcf25f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf25f0 size=32 callers=0 calls=0
*/
void sub_cf25f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf25f0ULL || rel >= 0xcf2610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2610 size=32 callers=0 calls=0
*/
void sub_cf2610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2610ULL || rel >= 0xcf2630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2630 size=16 callers=0 calls=0
*/
void sub_cf2630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2630ULL || rel >= 0xcf2640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2640 size=32 callers=0 calls=0
*/
void sub_cf2640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2640ULL || rel >= 0xcf2660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2660 size=32 callers=0 calls=0
*/
void sub_cf2660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2660ULL || rel >= 0xcf2680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2680 size=16 callers=0 calls=0
*/
void sub_cf2680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2680ULL || rel >= 0xcf2690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2690 size=32 callers=0 calls=0
*/
void sub_cf2690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2690ULL || rel >= 0xcf26b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf26b0 size=16 callers=0 calls=0
*/
void sub_cf26b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf26b0ULL || rel >= 0xcf26c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf26c0 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_cf26c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf26c0ULL || rel >= 0xcf2750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2750 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_cf2750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2750ULL || rel >= 0xcf27e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf27e0 size=176 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_cf27e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf27e0ULL || rel >= 0xcf2890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2890 size=176 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_cf2890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2890ULL || rel >= 0xcf2940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2940 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_cf2940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2940ULL || rel >= 0xcf29d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf29d0 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_cf29d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf29d0ULL || rel >= 0xcf2a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2a60 size=352 callers=1 calls=0
*/
void sub_cf2a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2a60ULL || rel >= 0xcf2bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2bc0 size=304 callers=1 calls=1
   calls: sub_cafce0
*/
void sub_cf2bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2bc0ULL || rel >= 0xcf2cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2cf0 size=512 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_cf2cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2cf0ULL || rel >= 0xcf2ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2ef0 size=256 callers=1 calls=2
   calls: sub_5db1b0, sub_cf5120
*/
void sub_cf2ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2ef0ULL || rel >= 0xcf2ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf2ff0 size=192 callers=0 calls=0
*/
void sub_cf2ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2ff0ULL || rel >= 0xcf30b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf30b0 size=192 callers=0 calls=0
*/
void sub_cf30b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf30b0ULL || rel >= 0xcf3170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf3170 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cf3170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf3170ULL || rel >= 0xcf31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf31e0 size=96 callers=0 calls=0
*/
void sub_cf31e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf31e0ULL || rel >= 0xcf3240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf3240 size=192 callers=0 calls=0
*/
void sub_cf3240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf3240ULL || rel >= 0xcf3300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf3300 size=192 callers=0 calls=0
*/
void sub_cf3300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf3300ULL || rel >= 0xcf33c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf33c0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cf33c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf33c0ULL || rel >= 0xcf3430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf3430 size=96 callers=0 calls=0
*/
void sub_cf3430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf3430ULL || rel >= 0xcf3490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf3490 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cf3490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf3490ULL || rel >= 0xcf3500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf3500 size=192 callers=0 calls=0
*/
void sub_cf3500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf3500ULL || rel >= 0xcf35c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf35c0 size=192 callers=0 calls=0
*/
void sub_cf35c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf35c0ULL || rel >= 0xcf3680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf3680 size=320 callers=2 calls=1
   calls: sub_c657d0
*/
void sub_cf3680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf3680ULL || rel >= 0xcf37c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf37c0 size=224 callers=1 calls=1
   calls: sub_cfe800
*/
void sub_cf37c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf37c0ULL || rel >= 0xcf38a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf38a0 size=240 callers=3 calls=1
   calls: sub_c657d0
*/
void sub_cf38a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf38a0ULL || rel >= 0xcf3990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf3990 size=2144 callers=0 calls=14
   calls: sub_17c1a10, sub_5a02d0, sub_5a03d0, sub_5cf8e0, sub_5cf8f0, sub_5e2bc0, sub_612ef0, sub_612f70, sub_68d630, sub_68d950, sub_68da30, sub_96ccf0
   ... +2 more
*/
void sub_cf3990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf3990ULL || rel >= 0xcf41f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf41f0 size=16 callers=0 calls=0
*/
void sub_cf41f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf41f0ULL || rel >= 0xcf4200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4200 size=416 callers=1 calls=0
*/
void sub_cf4200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4200ULL || rel >= 0xcf43a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf43a0 size=16 callers=0 calls=0
*/
void sub_cf43a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf43a0ULL || rel >= 0xcf43b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf43b0 size=16 callers=0 calls=0
*/
void sub_cf43b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf43b0ULL || rel >= 0xcf43c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf43c0 size=16 callers=0 calls=0
*/
void sub_cf43c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf43c0ULL || rel >= 0xcf43d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf43d0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_cf43d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf43d0ULL || rel >= 0xcf4410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4410 size=32 callers=0 calls=0
*/
void sub_cf4410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4410ULL || rel >= 0xcf4430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4430 size=16 callers=0 calls=0
*/
void sub_cf4430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4430ULL || rel >= 0xcf4440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4440 size=16 callers=0 calls=0
*/
void sub_cf4440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4440ULL || rel >= 0xcf4450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4450 size=208 callers=0 calls=3
   calls: sub_5c6850, sub_5c68f0, sub_5c6930
*/
void sub_cf4450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4450ULL || rel >= 0xcf4520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4520 size=16 callers=0 calls=0
*/
void sub_cf4520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4520ULL || rel >= 0xcf4530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4530 size=576 callers=1 calls=3
   calls: sub_5db3d0, sub_5e2350, sub_cfa610
*/
void sub_cf4530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4530ULL || rel >= 0xcf4770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4770 size=192 callers=0 calls=0
*/
void sub_cf4770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4770ULL || rel >= 0xcf4830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4830 size=192 callers=0 calls=0
*/
void sub_cf4830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4830ULL || rel >= 0xcf48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf48f0 size=192 callers=0 calls=0
*/
void sub_cf48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf48f0ULL || rel >= 0xcf49b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf49b0 size=192 callers=0 calls=0
*/
void sub_cf49b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf49b0ULL || rel >= 0xcf4a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4a70 size=192 callers=0 calls=0
*/
void sub_cf4a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4a70ULL || rel >= 0xcf4b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4b30 size=192 callers=0 calls=0
*/
void sub_cf4b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4b30ULL || rel >= 0xcf4bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4bf0 size=16 callers=1 calls=0
*/
void sub_cf4bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4bf0ULL || rel >= 0xcf4c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4c00 size=144 callers=4 calls=0
*/
void sub_cf4c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4c00ULL || rel >= 0xcf4c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4c90 size=32 callers=20 calls=0
*/
void sub_cf4c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4c90ULL || rel >= 0xcf4cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4cb0 size=32 callers=10 calls=0
*/
void sub_cf4cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4cb0ULL || rel >= 0xcf4cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4cd0 size=144 callers=1 calls=0
*/
void sub_cf4cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4cd0ULL || rel >= 0xcf4d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4d60 size=160 callers=1 calls=0
*/
void sub_cf4d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4d60ULL || rel >= 0xcf4e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4e00 size=160 callers=1 calls=0
*/
void sub_cf4e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4e00ULL || rel >= 0xcf4ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4ea0 size=96 callers=1 calls=0
*/
void sub_cf4ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4ea0ULL || rel >= 0xcf4f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4f00 size=144 callers=0 calls=0
*/
void sub_cf4f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4f00ULL || rel >= 0xcf4f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4f90 size=16 callers=0 calls=0
*/
void sub_cf4f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4f90ULL || rel >= 0xcf4fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4fa0 size=16 callers=0 calls=0
*/
void sub_cf4fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4fa0ULL || rel >= 0xcf4fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4fb0 size=16 callers=0 calls=0
*/
void sub_cf4fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4fb0ULL || rel >= 0xcf4fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf4fc0 size=336 callers=0 calls=1
   calls: sub_cf7cd0
*/
void sub_cf4fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf4fc0ULL || rel >= 0xcf5110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf5110 size=16 callers=0 calls=0
*/
void sub_cf5110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5110ULL || rel >= 0xcf5120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf5120 size=80 callers=3 calls=1
   calls: sub_cfad70
*/
void sub_cf5120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5120ULL || rel >= 0xcf5170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf5170 size=80 callers=2 calls=1
   calls: sub_cfbf50
*/
void sub_cf5170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5170ULL || rel >= 0xcf51c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf51c0 size=80 callers=1 calls=1
   calls: sub_cfc840
*/
void sub_cf51c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf51c0ULL || rel >= 0xcf5210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf5210 size=160 callers=1 calls=2
   calls: sub_5db3d0, sub_cfd140
*/
void sub_cf5210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5210ULL || rel >= 0xcf52b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf52b0 size=192 callers=0 calls=0
*/
void sub_cf52b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf52b0ULL || rel >= 0xcf5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf5370 size=192 callers=0 calls=0
*/
void sub_cf5370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5370ULL || rel >= 0xcf5430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf5430 size=192 callers=0 calls=0
*/
void sub_cf5430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5430ULL || rel >= 0xcf54f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf54f0 size=192 callers=0 calls=0
*/
void sub_cf54f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf54f0ULL || rel >= 0xcf55b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf55b0 size=192 callers=0 calls=0
*/
void sub_cf55b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf55b0ULL || rel >= 0xcf5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf5670 size=192 callers=0 calls=0
*/
void sub_cf5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5670ULL || rel >= 0xcf5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf5730 size=16 callers=1 calls=0
*/
void sub_cf5730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5730ULL || rel >= 0xcf5740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf5740 size=1152 callers=0 calls=1
   calls: sub_59a260
   ref: Field/LeftFootIK
   ref: Field/RightFootIK
   ref: Field/FactorLerp
   ref: Field/WaistOffset
*/
void WaistOffset(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5740ULL || rel >= 0xcf5bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf5bc0 size=16 callers=0 calls=0
*/
void sub_cf5bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5bc0ULL || rel >= 0xcf5bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf5bd0 size=752 callers=0 calls=0
*/
void sub_cf5bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5bd0ULL || rel >= 0xcf5ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf5ec0 size=16 callers=0 calls=0
*/
void sub_cf5ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5ec0ULL || rel >= 0xcf5ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf5ed0 size=16 callers=0 calls=0
*/
void sub_cf5ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5ed0ULL || rel >= 0xcf5ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf5ee0 size=3472 callers=0 calls=10
   calls: sub_59b100, sub_59b140, sub_59b250, sub_59b2e0, sub_5b9220, sub_5b93e0, sub_5b9400, sub_5b9430, sub_607750, sub_d239a0
*/
void sub_cf5ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5ee0ULL || rel >= 0xcf6c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf6c70 size=16 callers=0 calls=0
*/
void sub_cf6c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf6c70ULL || rel >= 0xcf6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf6c80 size=304 callers=1 calls=2
   calls: RightFootIKPropagate, sub_5db3d0
*/
void sub_cf6c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf6c80ULL || rel >= 0xcf6db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf6db0 size=192 callers=0 calls=0
*/
void sub_cf6db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf6db0ULL || rel >= 0xcf6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf6e70 size=192 callers=0 calls=0
*/
void sub_cf6e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf6e70ULL || rel >= 0xcf6f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf6f30 size=192 callers=0 calls=0
*/
void sub_cf6f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf6f30ULL || rel >= 0xcf6ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf6ff0 size=192 callers=0 calls=0
*/
void sub_cf6ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf6ff0ULL || rel >= 0xcf70b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf70b0 size=192 callers=0 calls=0
*/
void sub_cf70b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf70b0ULL || rel >= 0xcf7170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf7170 size=192 callers=0 calls=0
*/
void sub_cf7170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf7170ULL || rel >= 0xcf7230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf7230 size=16 callers=2 calls=0
*/
void sub_cf7230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf7230ULL || rel >= 0xcf7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf7240 size=144 callers=1 calls=0
*/
void sub_cf7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf7240ULL || rel >= 0xcf72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf72d0 size=16 callers=0 calls=0
*/
void sub_cf72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf72d0ULL || rel >= 0xcf72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf72e0 size=1520 callers=0 calls=2
   calls: sub_607750, sub_65cd70
*/
void sub_cf72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf72e0ULL || rel >= 0xcf78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf78d0 size=16 callers=0 calls=0
*/
void sub_cf78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf78d0ULL || rel >= 0xcf78e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf78e0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cf78e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf78e0ULL || rel >= 0xcf7950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf7950 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cf7950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf7950ULL || rel >= 0xcf79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf79c0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cf79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf79c0ULL || rel >= 0xcf7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf7a30 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cf7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf7a30ULL || rel >= 0xcf7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf7aa0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cf7aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf7aa0ULL || rel >= 0xcf7b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf7b10 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cf7b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf7b10ULL || rel >= 0xcf7b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf7b80 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cf7b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf7b80ULL || rel >= 0xcf7bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf7bf0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cf7bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf7bf0ULL || rel >= 0xcf7c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf7c60 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cf7c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf7c60ULL || rel >= 0xcf7cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf7cd0 size=3600 callers=1 calls=8
   calls: sub_5c6850, sub_5c68f0, sub_5c6930, sub_612f70, sub_967240, sub_c66360, sub_cf8ae0, sub_cf8d20
*/
void sub_cf7cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf7cd0ULL || rel >= 0xcf8ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf8ae0 size=576 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_cf8ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf8ae0ULL || rel >= 0xcf8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf8d20 size=576 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_cf8d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf8d20ULL || rel >= 0xcf8f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf8f60 size=1152 callers=0 calls=4
   calls: sub_5a0150, sub_5a0250, sub_5a02d0, sub_5a0340
   ref: ToeFactor
   ref: EnableHeelOffsetThreshold
   ref: CondFrames
   ref: UseCurrentHeelOffset
   ref: EnableToe
   ref: EnableCondFactor
   ref: HeelOffsetThreshold
   ref: FootFactor
*/
void UseCurrentHeelOffset(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf8f60ULL || rel >= 0xcf93e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf93e0 size=16 callers=0 calls=0
*/
void sub_cf93e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf93e0ULL || rel >= 0xcf93f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf93f0 size=1152 callers=0 calls=4
   calls: sub_5a0150, sub_5a0250, sub_5a02d0, sub_5a0340
   ref: ToeFactor
   ref: EnableHeelOffsetThreshold
   ref: CondFrames
   ref: UseCurrentHeelOffset
   ref: EnableToe
   ref: EnableCondFactor
   ref: HeelOffsetThreshold
   ref: FootFactor
*/
void UseCurrentHeelOffset_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf93f0ULL || rel >= 0xcf9870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf9870 size=16 callers=0 calls=0
*/
void sub_cf9870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf9870ULL || rel >= 0xcf9880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf9880 size=784 callers=0 calls=4
   calls: sub_5a0150, sub_5a0250, sub_5a02d0, sub_5a0340
   ref: EnableHeelOffsetThreshold
   ref: CondFrames
   ref: EnableCondFactor
   ref: Enable
   ref: Factor
   ref: HeelOffsetThreshold
*/
void EnableHeelOffsetThreshold(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf9880ULL || rel >= 0xcf9b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf9b90 size=16 callers=0 calls=0
*/
void sub_cf9b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf9b90ULL || rel >= 0xcf9ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cf9ba0 size=1664 callers=0 calls=5
   calls: sub_5a00d0, sub_5a0110, sub_5a0150, sub_5a0250, sub_5a02d0
   ref: Target
   ref: Easing
*/
void Target(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf9ba0ULL || rel >= 0xcfa220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa220 size=288 callers=0 calls=2
   calls: sub_5a0150, sub_5a0250
   ref: Target
*/
void Target_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa220ULL || rel >= 0xcfa340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa340 size=32 callers=0 calls=0
*/
void sub_cfa340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa340ULL || rel >= 0xcfa360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa360 size=16 callers=0 calls=0
*/
void sub_cfa360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa360ULL || rel >= 0xcfa370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa370 size=32 callers=0 calls=0
*/
void sub_cfa370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa370ULL || rel >= 0xcfa390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa390 size=32 callers=0 calls=0
*/
void sub_cfa390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa390ULL || rel >= 0xcfa3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa3b0 size=256 callers=0 calls=0
*/
void sub_cfa3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa3b0ULL || rel >= 0xcfa4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa4b0 size=16 callers=0 calls=0
*/
void sub_cfa4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa4b0ULL || rel >= 0xcfa4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa4c0 size=240 callers=0 calls=0
*/
void sub_cfa4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa4c0ULL || rel >= 0xcfa5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa5b0 size=16 callers=0 calls=0
*/
void sub_cfa5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa5b0ULL || rel >= 0xcfa5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa5c0 size=16 callers=0 calls=0
*/
void sub_cfa5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa5c0ULL || rel >= 0xcfa5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa5d0 size=16 callers=0 calls=0
*/
void sub_cfa5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa5d0ULL || rel >= 0xcfa5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa5e0 size=16 callers=0 calls=0
*/
void sub_cfa5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa5e0ULL || rel >= 0xcfa5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa5f0 size=16 callers=0 calls=0
*/
void sub_cfa5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa5f0ULL || rel >= 0xcfa600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa600 size=16 callers=0 calls=0
*/
void sub_cfa600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa600ULL || rel >= 0xcfa610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa610 size=384 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_cfa610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa610ULL || rel >= 0xcfa790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa790 size=80 callers=0 calls=0
*/
void sub_cfa790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa790ULL || rel >= 0xcfa7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa7e0 size=112 callers=0 calls=1
   calls: sub_cfac80
*/
void sub_cfa7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa7e0ULL || rel >= 0xcfa850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa850 size=16 callers=0 calls=0
*/
void sub_cfa850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa850ULL || rel >= 0xcfa860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa860 size=32 callers=0 calls=0
*/
void sub_cfa860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa860ULL || rel >= 0xcfa880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa880 size=16 callers=0 calls=0
*/
void sub_cfa880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa880ULL || rel >= 0xcfa890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa890 size=16 callers=0 calls=0
*/
void sub_cfa890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa890ULL || rel >= 0xcfa8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfa8a0 size=448 callers=0 calls=3
   calls: sub_612ef0, sub_612f70, sub_65cd90
*/
void sub_cfa8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfa8a0ULL || rel >= 0xcfaa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfaa60 size=80 callers=0 calls=0
*/
void sub_cfaa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfaa60ULL || rel >= 0xcfaab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfaab0 size=80 callers=0 calls=0
*/
void sub_cfaab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfaab0ULL || rel >= 0xcfab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfab00 size=112 callers=0 calls=1
   calls: sub_cfac80
*/
void sub_cfab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfab00ULL || rel >= 0xcfab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfab70 size=112 callers=0 calls=1
   calls: sub_cfac80
*/
void sub_cfab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfab70ULL || rel >= 0xcfabe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfabe0 size=80 callers=0 calls=0
*/
void sub_cfabe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfabe0ULL || rel >= 0xcfac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfac30 size=80 callers=0 calls=0
*/
void sub_cfac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfac30ULL || rel >= 0xcfac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfac80 size=240 callers=9 calls=0
*/
void sub_cfac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfac80ULL || rel >= 0xcfad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfad70 size=512 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_cfad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfad70ULL || rel >= 0xcfaf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfaf70 size=80 callers=0 calls=0
*/
void sub_cfaf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfaf70ULL || rel >= 0xcfafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfafc0 size=176 callers=0 calls=1
   calls: sub_cfac80
*/
void sub_cfafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfafc0ULL || rel >= 0xcfb070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb070 size=16 callers=0 calls=0
*/
void sub_cfb070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb070ULL || rel >= 0xcfb080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb080 size=32 callers=0 calls=0
*/
void sub_cfb080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb080ULL || rel >= 0xcfb0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb0a0 size=16 callers=0 calls=0
*/
void sub_cfb0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb0a0ULL || rel >= 0xcfb0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb0b0 size=16 callers=0 calls=0
*/
void sub_cfb0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb0b0ULL || rel >= 0xcfb0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb0c0 size=144 callers=0 calls=1
   calls: sub_cfb4d0
*/
void sub_cfb0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb0c0ULL || rel >= 0xcfb150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb150 size=32 callers=0 calls=0
*/
void sub_cfb150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb150ULL || rel >= 0xcfb170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb170 size=16 callers=0 calls=0
*/
void sub_cfb170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb170ULL || rel >= 0xcfb180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb180 size=16 callers=0 calls=0
*/
void sub_cfb180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb180ULL || rel >= 0xcfb190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb190 size=16 callers=0 calls=0
*/
void sub_cfb190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb190ULL || rel >= 0xcfb1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb1a0 size=16 callers=0 calls=0
*/
void sub_cfb1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb1a0ULL || rel >= 0xcfb1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb1b0 size=16 callers=0 calls=0
*/
void sub_cfb1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb1b0ULL || rel >= 0xcfb1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb1c0 size=16 callers=0 calls=0
*/
void sub_cfb1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb1c0ULL || rel >= 0xcfb1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb1d0 size=16 callers=0 calls=0
*/
void sub_cfb1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb1d0ULL || rel >= 0xcfb1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb1e0 size=32 callers=0 calls=0
*/
void sub_cfb1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb1e0ULL || rel >= 0xcfb200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb200 size=16 callers=0 calls=0
*/
void sub_cfb200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb200ULL || rel >= 0xcfb210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb210 size=16 callers=0 calls=0
*/
void sub_cfb210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb210ULL || rel >= 0xcfb220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb220 size=16 callers=0 calls=0
*/
void sub_cfb220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb220ULL || rel >= 0xcfb230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

