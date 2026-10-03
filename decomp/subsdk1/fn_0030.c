/* subsdk1 functions 00000030..00024230 (1 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00000030 size=320 callers=0 calls=0
*/
void _start(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ULL || rel >= 0x170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000170 size=64 callers=0 calls=0
*/
void sub_170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170ULL || rel >= 0x1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000001b0 size=16 callers=0 calls=0
*/
void sub_1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b0ULL || rel >= 0x1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000001c0 size=16 callers=0 calls=0
*/
void sub_1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0ULL || rel >= 0x1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000001d0 size=16 callers=0 calls=0
*/
void sub_1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d0ULL || rel >= 0x1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000001e0 size=16 callers=0 calls=0
*/
void sub_1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e0ULL || rel >= 0x1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000001f0 size=16 callers=0 calls=0
*/
void sub_1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0ULL || rel >= 0x200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000200 size=16 callers=0 calls=0
*/
void sub_200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x200ULL || rel >= 0x210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000210 size=16 callers=7 calls=0
*/
void sub_210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x210ULL || rel >= 0x220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000220 size=16 callers=35 calls=0
*/
void sub_220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220ULL || rel >= 0x230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000230 size=16 callers=4 calls=0
*/
void sub_230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230ULL || rel >= 0x240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000240 size=16 callers=2 calls=0
*/
void sub_240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x240ULL || rel >= 0x250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000250 size=16 callers=2 calls=0
*/
void sub_250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x250ULL || rel >= 0x260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000260 size=16 callers=1 calls=0
*/
void sub_260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260ULL || rel >= 0x270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000270 size=64 callers=288 calls=0
*/
void sub_270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270ULL || rel >= 0x2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000002b0 size=16 callers=196 calls=0
*/
void sub_2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b0ULL || rel >= 0x2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000002c0 size=16 callers=612 calls=0
*/
void sub_2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c0ULL || rel >= 0x2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000002d0 size=16 callers=93 calls=0
*/
void sub_2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d0ULL || rel >= 0x2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000002e0 size=560 callers=4 calls=0
*/
void sub_2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0ULL || rel >= 0x510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000510 size=32 callers=2 calls=0
*/
void sub_510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x510ULL || rel >= 0x530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000530 size=48 callers=1 calls=0
*/
void sub_530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530ULL || rel >= 0x560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000560 size=64 callers=1 calls=0
*/
void sub_560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x560ULL || rel >= 0x5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000005a0 size=96 callers=1 calls=0
*/
void sub_5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a0ULL || rel >= 0x600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000600 size=32 callers=3 calls=0
*/
void sub_600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x600ULL || rel >= 0x620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000620 size=16 callers=9 calls=0
*/
void sub_620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620ULL || rel >= 0x630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000630 size=16 callers=5 calls=0
*/
void sub_630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x630ULL || rel >= 0x640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000640 size=400 callers=1 calls=3
   calls: sub_2880, sub_3670, sub_7d0
   ref: <undefined>
*/
void undefined(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x640ULL || rel >= 0x7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000007d0 size=512 callers=3 calls=2
   calls: sub_2880, sub_3910
*/
void sub_7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0ULL || rel >= 0x9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000009d0 size=336 callers=1 calls=2
   calls: sub_7d0, sub_df0
*/
void sub_9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9d0ULL || rel >= 0xb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000b20 size=400 callers=4 calls=0
*/
void sub_b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb20ULL || rel >= 0xcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000cb0 size=320 callers=1 calls=3
   calls: sub_2880, sub_3670, sub_9d0
*/
void sub_cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb0ULL || rel >= 0xdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000df0 size=288 callers=2 calls=3
   calls: sub_2880, sub_b20, sub_cb0
*/
void sub_df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf0ULL || rel >= 0xf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00000f10 size=496 callers=0 calls=3
   calls: sub_7d0, sub_b20, sub_df0
*/
void sub_f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf10ULL || rel >= 0x1100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001100 size=256 callers=0 calls=1
   calls: sub_b20
*/
void sub_1100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1100ULL || rel >= 0x1200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001200 size=80 callers=4 calls=2
   calls: sub_3670, undefined
*/
void sub_1200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1200ULL || rel >= 0x1250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001250 size=16 callers=8 calls=0
*/
void sub_1250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1250ULL || rel >= 0x1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001260 size=48 callers=12 calls=0
*/
void sub_1260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260ULL || rel >= 0x1290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001290 size=16 callers=1 calls=0
*/
void sub_1290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290ULL || rel >= 0x12a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000012a0 size=16 callers=1 calls=0
*/
void sub_12a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0ULL || rel >= 0x12b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000012b0 size=16 callers=0 calls=0
*/
void sub_12b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b0ULL || rel >= 0x12c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000012c0 size=192 callers=0 calls=0
   ref: <internal error: bad soffset>
   ref: <invalid atom %d>
   ref: <null atom>
*/
void null_atom(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c0ULL || rel >= 0x1380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001380 size=16 callers=0 calls=0
*/
void sub_1380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1380ULL || rel >= 0x1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001390 size=64 callers=1 calls=0
*/
void sub_1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1390ULL || rel >= 0x13d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000013d0 size=608 callers=18 calls=1
   calls: sub_54b30
*/
void sub_13d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0ULL || rel >= 0x1630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001630 size=528 callers=59 calls=0
*/
void sub_1630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1630ULL || rel >= 0x1840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001840 size=32 callers=2 calls=0
*/
void sub_1840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1840ULL || rel >= 0x1860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001860 size=16 callers=2 calls=0
*/
void sub_1860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1860ULL || rel >= 0x1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001870 size=1120 callers=1 calls=0
*/
void sub_1870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1870ULL || rel >= 0x1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001cd0 size=336 callers=10 calls=0
*/
void sub_1cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cd0ULL || rel >= 0x1e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001e20 size=16 callers=25 calls=0
*/
void sub_1e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e20ULL || rel >= 0x1e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001e30 size=16 callers=78 calls=0
*/
void sub_1e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e30ULL || rel >= 0x1e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001e40 size=16 callers=126 calls=0
*/
void sub_1e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e40ULL || rel >= 0x1e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001e50 size=288 callers=19 calls=0
*/
void sub_1e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e50ULL || rel >= 0x1f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001f70 size=48 callers=0 calls=0
*/
void sub_1f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f70ULL || rel >= 0x1fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001fa0 size=80 callers=3 calls=0
*/
void sub_1fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa0ULL || rel >= 0x1ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00001ff0 size=48 callers=27 calls=0
*/
void sub_1ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff0ULL || rel >= 0x2020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002020 size=64 callers=1 calls=0
*/
void sub_2020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2020ULL || rel >= 0x2060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002060 size=96 callers=29 calls=0
*/
void sub_2060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2060ULL || rel >= 0x20c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000020c0 size=240 callers=4 calls=0
*/
void sub_20c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20c0ULL || rel >= 0x21b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000021b0 size=112 callers=5 calls=0
*/
void sub_21b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21b0ULL || rel >= 0x2220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002220 size=192 callers=51 calls=1
   calls: sub_2220
*/
void sub_2220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2220ULL || rel >= 0x22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000022e0 size=112 callers=2 calls=0
*/
void sub_22e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e0ULL || rel >= 0x2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002350 size=16 callers=6 calls=0
*/
void sub_2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2350ULL || rel >= 0x2360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002360 size=112 callers=1 calls=0
*/
void sub_2360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2360ULL || rel >= 0x23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000023d0 size=112 callers=1 calls=0
*/
void sub_23d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d0ULL || rel >= 0x2440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002440 size=112 callers=1 calls=0
*/
void sub_2440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2440ULL || rel >= 0x24b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000024b0 size=112 callers=1 calls=0
*/
void sub_24b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24b0ULL || rel >= 0x2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002520 size=112 callers=1 calls=0
*/
void sub_2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2520ULL || rel >= 0x2590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002590 size=112 callers=1 calls=0
*/
void sub_2590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2590ULL || rel >= 0x2600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002600 size=16 callers=15 calls=0
*/
void sub_2600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2600ULL || rel >= 0x2610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002610 size=96 callers=1 calls=0
*/
void sub_2610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2610ULL || rel >= 0x2670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002670 size=224 callers=1 calls=1
   calls: sub_2750
*/
void sub_2670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2670ULL || rel >= 0x2750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002750 size=304 callers=6 calls=1
   calls: sub_28a0
*/
void sub_2750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2750ULL || rel >= 0x2880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002880 size=32 callers=61 calls=0
*/
void sub_2880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2880ULL || rel >= 0x28a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000028a0 size=272 callers=2 calls=0
*/
void sub_28a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28a0ULL || rel >= 0x29b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000029b0 size=112 callers=37 calls=0
*/
void sub_29b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b0ULL || rel >= 0x2a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002a20 size=384 callers=0 calls=1
   calls: sub_2750
*/
void sub_2a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a20ULL || rel >= 0x2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002ba0 size=816 callers=0 calls=1
   calls: sub_2750
*/
void sub_2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ba0ULL || rel >= 0x2ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002ed0 size=64 callers=0 calls=1
   calls: sub_2f10
*/
void sub_2ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ed0ULL || rel >= 0x2f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00002f10 size=448 callers=1 calls=2
   calls: sub_3240, sub_32a0
*/
void sub_2f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f10ULL || rel >= 0x30d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000030d0 size=368 callers=0 calls=0
*/
void sub_30d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d0ULL || rel >= 0x3240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003240 size=96 callers=2 calls=1
   calls: sub_3240
*/
void sub_3240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3240ULL || rel >= 0x32a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000032a0 size=368 callers=3 calls=1
   calls: sub_32a0
*/
void sub_32a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a0ULL || rel >= 0x3410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003410 size=144 callers=0 calls=0
*/
void sub_3410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3410ULL || rel >= 0x34a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000034a0 size=16 callers=0 calls=0
*/
void sub_34a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a0ULL || rel >= 0x34b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000034b0 size=16 callers=0 calls=0
*/
void sub_34b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b0ULL || rel >= 0x34c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000034c0 size=144 callers=0 calls=0
*/
void sub_34c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c0ULL || rel >= 0x3550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003550 size=80 callers=67 calls=0
*/
void sub_3550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3550ULL || rel >= 0x35a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000035a0 size=48 callers=127 calls=0
*/
void sub_35a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35a0ULL || rel >= 0x35d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000035d0 size=32 callers=1 calls=0
*/
void sub_35d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d0ULL || rel >= 0x35f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000035f0 size=48 callers=188 calls=0
*/
void sub_35f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f0ULL || rel >= 0x3620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003620 size=48 callers=91 calls=0
*/
void sub_3620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3620ULL || rel >= 0x3650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003650 size=32 callers=10 calls=0
*/
void sub_3650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3650ULL || rel >= 0x3670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003670 size=32 callers=730 calls=0
*/
void sub_3670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3670ULL || rel >= 0x3690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003690 size=224 callers=4 calls=1
   calls: sub_2750
*/
void sub_3690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3690ULL || rel >= 0x3770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003770 size=224 callers=36 calls=1
   calls: sub_2750
*/
void sub_3770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3770ULL || rel >= 0x3850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003850 size=16 callers=8 calls=0
*/
void sub_3850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3850ULL || rel >= 0x3860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003860 size=16 callers=2 calls=0
*/
void sub_3860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3860ULL || rel >= 0x3870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003870 size=32 callers=250 calls=0
*/
void sub_3870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3870ULL || rel >= 0x3890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003890 size=32 callers=116 calls=0
*/
void sub_3890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3890ULL || rel >= 0x38b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000038b0 size=32 callers=57 calls=0
*/
void sub_38b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b0ULL || rel >= 0x38d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000038d0 size=32 callers=27 calls=0
*/
void sub_38d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d0ULL || rel >= 0x38f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000038f0 size=32 callers=0 calls=0
*/
void sub_38f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f0ULL || rel >= 0x3910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003910 size=32 callers=3 calls=0
*/
void sub_3910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3910ULL || rel >= 0x3930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003930 size=16 callers=0 calls=0
*/
void sub_3930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3930ULL || rel >= 0x3940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003940 size=16 callers=0 calls=0
*/
void sub_3940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3940ULL || rel >= 0x3950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003950 size=16 callers=0 calls=0
*/
void sub_3950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3950ULL || rel >= 0x3960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003960 size=16 callers=0 calls=0
*/
void sub_3960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3960ULL || rel >= 0x3970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003970 size=16 callers=0 calls=0
*/
void sub_3970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3970ULL || rel >= 0x3980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003980 size=16 callers=2 calls=0
*/
void sub_3980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3980ULL || rel >= 0x3990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003990 size=48 callers=599 calls=0
*/
void sub_3990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3990ULL || rel >= 0x39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000039c0 size=416 callers=10 calls=1
   calls: sub_3b60
   ref: Unknown profile option '%s' ignored
*/
void Unknown_profile_option_s_ignored(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c0ULL || rel >= 0x3b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003b60 size=128 callers=5 calls=0
*/
void sub_3b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b60ULL || rel >= 0x3be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003be0 size=32 callers=0 calls=0
   ref: %s%s: %s
*/
void s_s_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be0ULL || rel >= 0x3c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003c00 size=48 callers=2 calls=0
*/
void sub_3c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c00ULL || rel >= 0x3c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003c30 size=16 callers=0 calls=0
*/
void sub_3c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c30ULL || rel >= 0x3c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003c40 size=48 callers=4 calls=0
*/
void sub_3c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c40ULL || rel >= 0x3c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003c70 size=16 callers=0 calls=0
*/
void sub_3c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c70ULL || rel >= 0x3c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003c80 size=32 callers=288 calls=0
*/
void sub_3c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c80ULL || rel >= 0x3ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003ca0 size=16 callers=0 calls=0
*/
void sub_3ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca0ULL || rel >= 0x3cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003cb0 size=32 callers=287 calls=0
*/
void sub_3cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cb0ULL || rel >= 0x3cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003cd0 size=192 callers=0 calls=1
   calls: sub_3b60
   ref: Profile option '%s' value (%d) too large; clamped to %d
   ref: Profile option '%s' value (%d) too small; clamped to %d
*/
void Profile_option_s_value_d_too_small_clamped_to_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd0ULL || rel >= 0x3d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003d90 size=48 callers=0 calls=0
   ref: %s%s=<val>: %s
*/
void s_s_val_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d90ULL || rel >= 0x3dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003dc0 size=48 callers=4 calls=0
*/
void sub_3dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc0ULL || rel >= 0x3df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003df0 size=160 callers=0 calls=1
   calls: sub_3b60
   ref: Profile option '%s' value (%d) too large; clamped to %d
   ref: Profile option '%s' value (%d) too small; clamped to %d
*/
void Profile_option_s_value_d_too_small_clamped_to_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df0ULL || rel >= 0x3e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003e90 size=272 callers=1 calls=2
   calls: sub_2880, sub_3670
*/
void sub_3e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e90ULL || rel >= 0x3fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00003fa0 size=128 callers=375 calls=0
*/
void sub_3fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa0ULL || rel >= 0x4020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00004020 size=16 callers=1 calls=0
*/
void sub_4020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4020ULL || rel >= 0x4030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00004030 size=16 callers=0 calls=0
*/
void sub_4030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4030ULL || rel >= 0x4040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00004040 size=416 callers=10 calls=0
*/
void sub_4040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4040ULL || rel >= 0x41e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000041e0 size=128 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_41e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e0ULL || rel >= 0x4260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00004260 size=112 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_4260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4260ULL || rel >= 0x42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000042d0 size=112 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42d0ULL || rel >= 0x4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00004340 size=144 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4340ULL || rel >= 0x43d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000043d0 size=128 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_43d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43d0ULL || rel >= 0x4450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00004450 size=128 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_4450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4450ULL || rel >= 0x44d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000044d0 size=144 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_44d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d0ULL || rel >= 0x4560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00004560 size=128 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_4560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4560ULL || rel >= 0x45e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000045e0 size=128 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_45e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45e0ULL || rel >= 0x4660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00004660 size=640 callers=0 calls=3
   calls: sub_3670, sub_3990, sub_3cb0
   ref: ARB_draw_buffers
   ref: use upper left pixel origin
   ref: NV_shader_buffer_load
   ref: use NV_parameter_buffer_object2 extension
   ref: NV_parameter_buffer_object2
   ref: ATI_draw_buffers
   ref: use integer pixel centers
   ref: use the ARB_draw_buffers option
*/
void pixel_center_integer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4660ULL || rel >= 0x48e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000048e0 size=912 callers=0 calls=4
   calls: sub_3670, sub_3990, sub_3c80, sub_3cb0
   ref: LINE_OUT
   ref: LINE_STRIP
   ref: Vertices
   ref: NV_shader_buffer_load
   ref: use NV_parameter_buffer_object2 extension
   ref: TRIANGLES_ADJACENCY
   ref: TRIANGLES
   ref: NV_parameter_buffer_object2
*/
void NV_shader_buffer_load(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48e0ULL || rel >= 0x4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00004c70 size=464 callers=0 calls=3
   calls: sub_3670, sub_3990, sub_3cb0
   ref: NV_shader_buffer_load
   ref: use NV_parameter_buffer_object2 extension
   ref: NV_parameter_buffer_object2
   ref: PosInv
   ref: use NV_shader_buffer_load extension
   ref: collapse
   ref: binding
   ref: list complete aggregate bindings
*/
void NV_shader_buffer_load_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c70ULL || rel >= 0x4e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00004e40 size=1488 callers=0 calls=3
   calls: sub_3670, sub_3990, sub_3cb0
   ref: ARB_draw_buffers
   ref: use upper left pixel origin
   ref: NV_stereo_secondary_view_offset
   ref: use NV_sample_mask_override_coverage extension
   ref: NV_shader_atomic_float
   ref: use NV_shader_atomic_float64 extension
   ref: use NV_shader_atomic_float extension
   ref: NV_shader_buffer_load
*/
void pixel_center_integer_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e40ULL || rel >= 0x5410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00005410 size=3488 callers=0 calls=4
   calls: sub_3670, sub_3990, sub_3c80, sub_3cb0
   ref: Set input primitive to patches of size 4
   ref: Set input primitive to patches of size 14
   ref: Set input primitive to patches of size 15
   ref: Set input primitive to patches of size 20
   ref: Set input primitive to patches of size 29
   ref: PATCH_32
   ref: Set input primitive to patches of size 3
   ref: PATCH_14
*/
void NV_stereo_view_rendering(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5410ULL || rel >= 0x61b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000061b0 size=5200 callers=0 calls=5
   calls: sub_3670, sub_3990, sub_3c40, sub_3c80, sub_3cb0
   ref: PATCH_32
   ref: Set control patch output size 11
   ref: Set control patch output size 16
   ref: PATCHOUT_26
   ref: PATCH_14
   ref: PATCH_18
   ref: PATCH_22
   ref: PATCHOUT_22
*/
void NV_stereo_view_rendering_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61b0ULL || rel >= 0x7600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00007600 size=3408 callers=0 calls=5
   calls: sub_3670, sub_3990, sub_3c40, sub_3c80, sub_3cb0
   ref: PATCH_32
   ref: PATCH_14
   ref: PATCH_18
   ref: PATCH_22
   ref: NV_stereo_secondary_view_offset
   ref: PATCH_2
   ref: PATCH_28
   ref: Set control patch input size 6
*/
void NV_stereo_view_rendering_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7600ULL || rel >= 0x8350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008350 size=1120 callers=0 calls=3
   calls: sub_3670, sub_3990, sub_3cb0
   ref: NV_stereo_secondary_view_offset
   ref: NV_shader_atomic_float
   ref: use NV_shader_atomic_float64 extension
   ref: use NV_shader_atomic_float extension
   ref: use NV_viewport_array2
   ref: NV_shader_buffer_load
   ref: use NV_parameter_buffer_object2 extension
   ref: NV_parameter_buffer_object2
*/
void NV_stereo_view_rendering_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8350ULL || rel >= 0x87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000087b0 size=944 callers=0 calls=3
   calls: sub_3670, sub_3990, sub_3cb0
   ref: NV_stereo_secondary_view_offset
   ref: NV_shader_atomic_float
   ref: use NV_shader_atomic_float64 extension
   ref: use NV_shader_atomic_float extension
   ref: NV_shader_buffer_load
   ref: use NV_parameter_buffer_object2 extension
   ref: NV_parameter_buffer_object2
   ref: NV_bindless_texture
*/
void NV_stereo_view_rendering_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87b0ULL || rel >= 0x8b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008b60 size=672 callers=0 calls=3
   calls: sub_3670, sub_3990, sub_3cb0
   ref: ARB_draw_buffers
   ref: use upper left pixel origin
   ref: NV_shader_buffer_load
   ref: use NV_parameter_buffer_object2 extension
   ref: NV_parameter_buffer_object2
   ref: ATI_draw_buffers
   ref: use integer pixel centers
   ref: use the ARB_draw_buffers option
*/
void pixel_center_integer_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b60ULL || rel >= 0x8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00008e00 size=944 callers=0 calls=4
   calls: sub_3670, sub_3990, sub_3c80, sub_3cb0
   ref: LINE_OUT
   ref: LINE_STRIP
   ref: Vertices
   ref: NV_shader_buffer_load
   ref: use NV_parameter_buffer_object2 extension
   ref: TRIANGLES_ADJACENCY
   ref: TRIANGLES
   ref: NV_parameter_buffer_object2
*/
void NV_shader_buffer_load_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e00ULL || rel >= 0x91b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000091b0 size=480 callers=0 calls=3
   calls: sub_3670, sub_3990, sub_3cb0
   ref: NV_shader_buffer_load
   ref: use NV_parameter_buffer_object2 extension
   ref: NV_parameter_buffer_object2
   ref: PosInv
   ref: use NV_shader_buffer_load extension
   ref: collapse
   ref: binding
   ref: list complete aggregate bindings
*/
void NV_shader_buffer_load_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91b0ULL || rel >= 0x9390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009390 size=1504 callers=0 calls=3
   calls: sub_3670, sub_3990, sub_3cb0
   ref: ARB_draw_buffers
   ref: use upper left pixel origin
   ref: NV_stereo_secondary_view_offset
   ref: use NV_sample_mask_override_coverage extension
   ref: NV_shader_atomic_float
   ref: use NV_shader_atomic_float64 extension
   ref: use NV_shader_atomic_float extension
   ref: NV_shader_buffer_load
*/
void pixel_center_integer_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9390ULL || rel >= 0x9970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00009970 size=3520 callers=0 calls=4
   calls: sub_3670, sub_3990, sub_3c80, sub_3cb0
   ref: Set input primitive to patches of size 4
   ref: Set input primitive to patches of size 14
   ref: Set input primitive to patches of size 15
   ref: Set input primitive to patches of size 20
   ref: Set input primitive to patches of size 29
   ref: PATCH_32
   ref: Set input primitive to patches of size 3
   ref: PATCH_14
*/
void NV_stereo_view_rendering_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9970ULL || rel >= 0xa730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000a730 size=5248 callers=0 calls=5
   calls: sub_3670, sub_3990, sub_3c40, sub_3c80, sub_3cb0
   ref: PATCH_32
   ref: Set control patch output size 11
   ref: Set control patch output size 16
   ref: PATCHOUT_26
   ref: PATCH_14
   ref: PATCH_18
   ref: PATCH_22
   ref: PATCHOUT_22
*/
void NV_stereo_view_rendering_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa730ULL || rel >= 0xbbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000bbb0 size=3456 callers=0 calls=5
   calls: sub_3670, sub_3990, sub_3c40, sub_3c80, sub_3cb0
   ref: PATCH_32
   ref: PATCH_14
   ref: PATCH_18
   ref: PATCH_22
   ref: NV_stereo_secondary_view_offset
   ref: PATCH_2
   ref: PATCH_28
   ref: Set control patch input size 6
*/
void NV_stereo_view_rendering_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbb0ULL || rel >= 0xc930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000c930 size=1152 callers=0 calls=3
   calls: sub_3670, sub_3990, sub_3cb0
   ref: NV_stereo_secondary_view_offset
   ref: NV_shader_atomic_float
   ref: use NV_shader_atomic_float64 extension
   ref: use NV_shader_atomic_float extension
   ref: use NV_viewport_array2
   ref: NV_shader_buffer_load
   ref: use NV_parameter_buffer_object2 extension
   ref: NV_parameter_buffer_object2
*/
void NV_stereo_view_rendering_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc930ULL || rel >= 0xcdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000cdb0 size=960 callers=0 calls=3
   calls: sub_3670, sub_3990, sub_3cb0
   ref: NV_stereo_secondary_view_offset
   ref: NV_shader_atomic_float
   ref: use NV_shader_atomic_float64 extension
   ref: use NV_shader_atomic_float extension
   ref: NV_shader_buffer_load
   ref: use NV_parameter_buffer_object2 extension
   ref: NV_parameter_buffer_object2
   ref: NV_bindless_texture
*/
void NV_stereo_view_rendering_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdb0ULL || rel >= 0xd170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d170 size=112 callers=0 calls=1
   calls: sub_d1e0
   ref: Incompatable options %s and %s
*/
void Incompatable_options_s_and_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd170ULL || rel >= 0xd1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d1e0 size=128 callers=1 calls=0
*/
void sub_d1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1e0ULL || rel >= 0xd260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d260 size=144 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd260ULL || rel >= 0xd2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d2f0 size=128 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2f0ULL || rel >= 0xd370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d370 size=160 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd370ULL || rel >= 0xd410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d410 size=144 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_d410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd410ULL || rel >= 0xd4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d4a0 size=128 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a0ULL || rel >= 0xd520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d520 size=144 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd520ULL || rel >= 0xd5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d5b0 size=128 callers=0 calls=2
   calls: sub_13d0, sub_3670
*/
void sub_d5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5b0ULL || rel >= 0xd630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000d630 size=2384 callers=51 calls=0
*/
void sub_d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd630ULL || rel >= 0xdf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000df80 size=32 callers=0 calls=0
*/
void sub_df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf80ULL || rel >= 0xdfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000dfa0 size=48 callers=0 calls=0
*/
void sub_dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfa0ULL || rel >= 0xdfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000dfd0 size=16 callers=0 calls=0
*/
void sub_dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd0ULL || rel >= 0xdfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000dfe0 size=32 callers=4 calls=0
*/
void sub_dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfe0ULL || rel >= 0xe000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000e000 size=112 callers=2 calls=1
   calls: sub_35f0
*/
void sub_e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe000ULL || rel >= 0xe070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000e070 size=128 callers=3 calls=1
   calls: sub_35f0
*/
void sub_e070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe070ULL || rel >= 0xe0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000e0f0 size=16 callers=1 calls=0
*/
void sub_e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0f0ULL || rel >= 0xe100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000e100 size=272 callers=4 calls=1
   calls: sub_3620
*/
void sub_e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe100ULL || rel >= 0xe210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000e210 size=3696 callers=13 calls=4
   calls: sub_2880, sub_2ed20, sub_3670, sub_37be0
*/
void sub_e210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe210ULL || rel >= 0xf080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f080 size=160 callers=9 calls=0
*/
void sub_f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf080ULL || rel >= 0xf120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f120 size=16 callers=8 calls=0
*/
void sub_f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf120ULL || rel >= 0xf130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f130 size=224 callers=1 calls=2
   calls: sub_29b0, sub_3770
*/
void sub_f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf130ULL || rel >= 0xf210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f210 size=16 callers=1 calls=0
*/
void sub_f210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf210ULL || rel >= 0xf220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f220 size=80 callers=14 calls=1
   calls: sub_3620
*/
void sub_f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf220ULL || rel >= 0xf270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f270 size=96 callers=18 calls=1
   calls: sub_3620
*/
void sub_f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf270ULL || rel >= 0xf2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f2d0 size=144 callers=1 calls=1
   calls: sub_3980
*/
void sub_f2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2d0ULL || rel >= 0xf360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f360 size=128 callers=0 calls=2
   calls: sub_2610, sub_35f0
*/
void sub_f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf360ULL || rel >= 0xf3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f3e0 size=64 callers=0 calls=1
   calls: sub_35f0
*/
void sub_f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3e0ULL || rel >= 0xf420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f420 size=16 callers=0 calls=0
*/
void sub_f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf420ULL || rel >= 0xf430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f430 size=16 callers=0 calls=0
*/
void sub_f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf430ULL || rel >= 0xf440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f440 size=112 callers=1 calls=1
   calls: sub_3770
*/
void sub_f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf440ULL || rel >= 0xf4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f4b0 size=416 callers=1 calls=0
*/
void sub_f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b0ULL || rel >= 0xf650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f650 size=160 callers=1 calls=0
*/
void sub_f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf650ULL || rel >= 0xf6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f6f0 size=448 callers=0 calls=1
   calls: sub_f080
   ref: %s limit exceeded at %s; more than %d registers needed to compile program
   ref: Constant register limit exceeded; more than %d constant registers needed to compile program
   ref: Constant register
*/
void Constant_register(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6f0ULL || rel >= 0xf8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000f8b0 size=384 callers=0 calls=0
*/
void sub_f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b0ULL || rel >= 0xfa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000fa30 size=384 callers=3 calls=3
   calls: sub_1e20, sub_1e30, sub_fa30
*/
void sub_fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa30ULL || rel >= 0xfbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000fbb0 size=304 callers=0 calls=0
*/
void sub_fbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbb0ULL || rel >= 0xfce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000fce0 size=592 callers=1 calls=4
   calls: sub_1e40, sub_2060, sub_fa30, sub_ff30
*/
void sub_fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfce0ULL || rel >= 0xff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000ff30 size=112 callers=2 calls=1
   calls: sub_ff30
*/
void sub_ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff30ULL || rel >= 0xffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0000ffa0 size=192 callers=0 calls=2
   calls: sub_2220, sub_34be0
*/
void sub_ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffa0ULL || rel >= 0x10060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010060 size=16 callers=0 calls=0
*/
void sub_10060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10060ULL || rel >= 0x10070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010070 size=64 callers=0 calls=0
*/
void sub_10070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10070ULL || rel >= 0x100b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000100b0 size=112 callers=0 calls=1
   calls: sub_1d9b0
*/
void sub_100b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x100b0ULL || rel >= 0x10120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010120 size=400 callers=0 calls=1
   calls: sub_f080
   ref: Sampler limit exceeded; more than %d samplers needed to compile program
*/
void Sampler_limit_exceeded_more_than_d_samplers_needed_to_co(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10120ULL || rel >= 0x102b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000102b0 size=272 callers=0 calls=1
   calls: sub_3620
*/
void sub_102b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b0ULL || rel >= 0x103c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000103c0 size=208 callers=0 calls=1
   calls: sub_1da20
*/
void sub_103c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103c0ULL || rel >= 0x10490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010490 size=96 callers=0 calls=0
*/
void sub_10490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10490ULL || rel >= 0x104f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000104f0 size=48 callers=0 calls=0
*/
void sub_104f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104f0ULL || rel >= 0x10520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010520 size=496 callers=0 calls=1
   calls: sub_3ae70
*/
void sub_10520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10520ULL || rel >= 0x10710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010710 size=160 callers=0 calls=0
*/
void sub_10710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10710ULL || rel >= 0x107b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000107b0 size=16 callers=0 calls=0
*/
void sub_107b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b0ULL || rel >= 0x107c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000107c0 size=32 callers=0 calls=0
*/
void sub_107c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107c0ULL || rel >= 0x107e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000107e0 size=32 callers=0 calls=0
*/
void sub_107e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107e0ULL || rel >= 0x10800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010800 size=16 callers=0 calls=0
*/
void sub_10800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10800ULL || rel >= 0x10810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010810 size=64 callers=3 calls=0
*/
void sub_10810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10810ULL || rel >= 0x10850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010850 size=128 callers=0 calls=1
   calls: sub_10810
*/
void sub_10850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10850ULL || rel >= 0x108d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000108d0 size=32 callers=0 calls=0
*/
void sub_108d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108d0ULL || rel >= 0x108f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000108f0 size=32 callers=0 calls=0
*/
void sub_108f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x108f0ULL || rel >= 0x10910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00010910 size=2384 callers=1 calls=1
   calls: sub_3fa0
   ref: IPARAM
   ref: EXIT.KEEPREFCOUNT
   ref: OPARAM
   ref: GLOBAL:%d
   ref: subop=%02x,%02x
   ref: subop=%02x
   ref: ISAFEADD
*/
void ISAFEADD(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10910ULL || rel >= 0x11260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011260 size=48 callers=0 calls=0
*/
void sub_11260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11260ULL || rel >= 0x11290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011290 size=16 callers=0 calls=0
*/
void sub_11290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11290ULL || rel >= 0x112a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000112a0 size=16 callers=0 calls=0
*/
void sub_112a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112a0ULL || rel >= 0x112b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000112b0 size=16 callers=0 calls=0
*/
void sub_112b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112b0ULL || rel >= 0x112c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000112c0 size=16 callers=0 calls=0
*/
void sub_112c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112c0ULL || rel >= 0x112d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000112d0 size=16 callers=0 calls=0
*/
void sub_112d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112d0ULL || rel >= 0x112e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000112e0 size=16 callers=0 calls=0
*/
void sub_112e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e0ULL || rel >= 0x112f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000112f0 size=48 callers=0 calls=0
*/
void sub_112f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f0ULL || rel >= 0x11320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011320 size=16 callers=0 calls=0
*/
void sub_11320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11320ULL || rel >= 0x11330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011330 size=16 callers=0 calls=0
*/
void sub_11330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11330ULL || rel >= 0x11340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011340 size=32 callers=0 calls=0
*/
void sub_11340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11340ULL || rel >= 0x11360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011360 size=16 callers=0 calls=0
*/
void sub_11360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11360ULL || rel >= 0x11370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011370 size=16 callers=0 calls=0
*/
void sub_11370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11370ULL || rel >= 0x11380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011380 size=16 callers=2 calls=0
*/
void sub_11380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11380ULL || rel >= 0x11390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011390 size=48 callers=4 calls=0
*/
void sub_11390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11390ULL || rel >= 0x113c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000113c0 size=96 callers=3 calls=0
*/
void sub_113c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c0ULL || rel >= 0x11420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011420 size=32 callers=1 calls=0
*/
void sub_11420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11420ULL || rel >= 0x11440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011440 size=736 callers=0 calls=3
   calls: sub_35320, sub_37660, sub_3af50
*/
void sub_11440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11440ULL || rel >= 0x11720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011720 size=48 callers=0 calls=0
*/
void sub_11720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11720ULL || rel >= 0x11750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011750 size=240 callers=0 calls=0
*/
void sub_11750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11750ULL || rel >= 0x11840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011840 size=400 callers=0 calls=3
   calls: sub_31700, sub_35a0, sub_36040
*/
void sub_11840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11840ULL || rel >= 0x119d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000119d0 size=288 callers=2 calls=3
   calls: sub_31700, sub_35a0, sub_3af50
*/
void sub_119d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x119d0ULL || rel >= 0x11af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00011af0 size=2096 callers=0 calls=9
   calls: internal_sym_d_2, sub_12320, sub_310a0, sub_31700, sub_351c0, sub_35a0, sub_36310, sub_39040, sub_40c10
*/
void sub_11af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11af0ULL || rel >= 0x12320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00012320 size=368 callers=7 calls=2
   calls: internal_sym_d_2, sub_310a0
*/
void sub_12320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12320ULL || rel >= 0x12490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00012490 size=864 callers=1 calls=1
   calls: sub_3b630
*/
void sub_12490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12490ULL || rel >= 0x127f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000127f0 size=64 callers=0 calls=0
*/
void sub_127f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127f0ULL || rel >= 0x12830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00012830 size=1200 callers=0 calls=10
   calls: internal_sym_d_2, sub_12490, sub_310a0, sub_39040, sub_3af40, sub_3b600, sub_3b630, sub_3b680, sub_3b710, sub_44dc0
*/
void sub_12830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12830ULL || rel >= 0x12ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00012ce0 size=352 callers=0 calls=6
   calls: sub_31700, sub_35a0, sub_36310, sub_36350, sub_40c10, sub_44dc0
*/
void sub_12ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ce0ULL || rel >= 0x12e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00012e40 size=1264 callers=0 calls=4
   calls: sub_31b90, sub_35a0, sub_391e0, sub_44e30
*/
void sub_12e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e40ULL || rel >= 0x13330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013330 size=320 callers=0 calls=4
   calls: sub_37660, sub_391e0, sub_40c10, sub_45080
*/
void sub_13330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13330ULL || rel >= 0x13470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013470 size=544 callers=0 calls=4
   calls: sub_35ec0, sub_36310, sub_3cb30, sub_40c10
*/
void sub_13470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13470ULL || rel >= 0x13690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013690 size=144 callers=0 calls=1
   calls: sub_3cb30
*/
void sub_13690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13690ULL || rel >= 0x13720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013720 size=144 callers=0 calls=0
*/
void sub_13720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13720ULL || rel >= 0x137b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000137b0 size=752 callers=0 calls=4
   calls: sub_351c0, sub_36040, sub_3ae70, sub_40c10
*/
void sub_137b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137b0ULL || rel >= 0x13aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013aa0 size=560 callers=0 calls=2
   calls: sub_35f40, sub_36310
*/
void sub_13aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa0ULL || rel >= 0x13cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013cd0 size=96 callers=0 calls=1
   calls: sub_36310
*/
void sub_13cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cd0ULL || rel >= 0x13d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013d30 size=16 callers=1 calls=0
*/
void sub_13d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d30ULL || rel >= 0x13d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013d40 size=64 callers=3 calls=0
*/
void sub_13d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d40ULL || rel >= 0x13d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013d80 size=592 callers=3 calls=3
   calls: sub_36310, sub_3af40, sub_44dc0
*/
void sub_13d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d80ULL || rel >= 0x13fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00013fd0 size=96 callers=0 calls=2
   calls: sub_13d80, sub_3ae70
*/
void sub_13fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fd0ULL || rel >= 0x14030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014030 size=160 callers=0 calls=0
*/
void sub_14030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14030ULL || rel >= 0x140d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000140d0 size=384 callers=6 calls=4
   calls: sub_34be0, sub_34d70, sub_34d90, sub_3af50
*/
void sub_140d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d0ULL || rel >= 0x14250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014250 size=1264 callers=0 calls=4
   calls: sub_35320, sub_3af50, sub_3cb30, sub_44dc0
*/
void sub_14250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14250ULL || rel >= 0x14740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014740 size=48 callers=2 calls=0
*/
void sub_14740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14740ULL || rel >= 0x14770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014770 size=1408 callers=1 calls=5
   calls: sub_55140, sub_55270, sub_55320, sub_55400, sub_55d40
*/
void sub_14770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14770ULL || rel >= 0x14cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00014cf0 size=816 callers=0 calls=7
   calls: sub_14770, sub_306d0, sub_35f0, sub_41510, sub_55190, sub_552e0, sub_555c0
*/
void sub_14cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cf0ULL || rel >= 0x15020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00015020 size=448 callers=2 calls=1
   calls: sub_36040
*/
void sub_15020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15020ULL || rel >= 0x151e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000151e0 size=1792 callers=1 calls=23
   calls: sub_15020, sub_158e0, sub_2ebc0, sub_2ece0, sub_2f070, sub_2f350, sub_30930, sub_30f90, sub_30fa0, sub_35f0, sub_3770, sub_3d510
   ... +11 more
*/
void sub_151e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151e0ULL || rel >= 0x158e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000158e0 size=192 callers=4 calls=1
   calls: sub_158e0
*/
void sub_158e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158e0ULL || rel >= 0x159a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000159a0 size=2800 callers=1 calls=17
   calls: sub_1e40, sub_2ebc0, sub_310a0, sub_34be0, sub_34d70, sub_35f0, sub_36310, sub_37e40, sub_388c0, sub_39920, sub_39a40, sub_40c00
   ... +5 more
*/
void sub_159a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159a0ULL || rel >= 0x16490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00016490 size=112 callers=0 calls=0
*/
void sub_16490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16490ULL || rel >= 0x16500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00016500 size=272 callers=0 calls=1
   calls: sub_1e40
*/
void sub_16500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16500ULL || rel >= 0x16610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00016610 size=16 callers=0 calls=0
*/
void sub_16610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16610ULL || rel >= 0x16620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00016620 size=48 callers=0 calls=0
*/
void sub_16620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16620ULL || rel >= 0x16650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00016650 size=816 callers=0 calls=9
   calls: sub_2ebc0, sub_314f0, sub_35a0, sub_35f0, sub_36310, sub_363c0, sub_39920, sub_39b60, sub_39d80
   ref: f[TEX00]
*/
void f_TEX00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16650ULL || rel >= 0x16980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00016980 size=16 callers=0 calls=0
*/
void sub_16980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16980ULL || rel >= 0x16990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00016990 size=16 callers=0 calls=0
*/
void sub_16990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16990ULL || rel >= 0x169a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000169a0 size=240 callers=0 calls=2
   calls: sub_36040, sub_3ab80
*/
void sub_169a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a0ULL || rel >= 0x16a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00016a90 size=1760 callers=0 calls=2
   calls: sub_36310, sub_40af0
*/
void sub_16a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a90ULL || rel >= 0x17170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00017170 size=32 callers=1 calls=0
*/
void sub_17170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17170ULL || rel >= 0x17190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00017190 size=32 callers=1 calls=0
*/
void sub_17190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17190ULL || rel >= 0x171b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000171b0 size=96 callers=7 calls=0
*/
void sub_171b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171b0ULL || rel >= 0x17210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00017210 size=960 callers=1 calls=2
   calls: sub_351c0, sub_3b450
*/
void sub_17210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17210ULL || rel >= 0x175d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000175d0 size=112 callers=1 calls=1
   calls: sub_39040
*/
void sub_175d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x175d0ULL || rel >= 0x17640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00017640 size=16 callers=4 calls=0
*/
void sub_17640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17640ULL || rel >= 0x17650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00017650 size=16 callers=1 calls=0
*/
void sub_17650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17650ULL || rel >= 0x17660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00017660 size=64 callers=4 calls=0
*/
void sub_17660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17660ULL || rel >= 0x176a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000176a0 size=768 callers=9 calls=2
   calls: sub_29b0, sub_3770
*/
void sub_176a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x176a0ULL || rel >= 0x179a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000179a0 size=176 callers=0 calls=2
   calls: sub_310a0, sub_45080
*/
void sub_179a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a0ULL || rel >= 0x17a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00017a50 size=112 callers=0 calls=1
   calls: sub_3ab80
*/
void sub_17a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a50ULL || rel >= 0x17ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00017ac0 size=128 callers=0 calls=1
   calls: sub_34be0
*/
void sub_17ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac0ULL || rel >= 0x17b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00017b40 size=608 callers=0 calls=2
   calls: sub_35ec0, sub_364d0
*/
void sub_17b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b40ULL || rel >= 0x17da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00017da0 size=112 callers=0 calls=1
   calls: sub_17e10
*/
void sub_17da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17da0ULL || rel >= 0x17e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00017e10 size=528 callers=5 calls=2
   calls: sub_176a0, sub_17e10
*/
void sub_17e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e10ULL || rel >= 0x18020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00018020 size=224 callers=0 calls=0
*/
void sub_18020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18020ULL || rel >= 0x18100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00018100 size=160 callers=0 calls=1
   calls: sub_34d90
*/
void sub_18100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18100ULL || rel >= 0x181a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000181a0 size=464 callers=1 calls=3
   calls: sub_176a0, sub_181a0, sub_364d0
*/
void sub_181a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181a0ULL || rel >= 0x18370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00018370 size=384 callers=0 calls=1
   calls: sub_176a0
*/
void sub_18370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18370ULL || rel >= 0x184f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000184f0 size=224 callers=0 calls=1
   calls: sub_35e70
*/
void sub_184f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184f0ULL || rel >= 0x185d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000185d0 size=720 callers=0 calls=2
   calls: sub_3aba0, sub_3af50
*/
void sub_185d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185d0ULL || rel >= 0x188a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000188a0 size=384 callers=0 calls=1
   calls: sub_34be0
*/
void sub_188a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188a0ULL || rel >= 0x18a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00018a20 size=304 callers=0 calls=2
   calls: sub_3aba0, sub_3abc0
*/
void sub_18a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18a20ULL || rel >= 0x18b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00018b50 size=128 callers=0 calls=0
*/
void sub_18b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18b50ULL || rel >= 0x18bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00018bd0 size=80 callers=0 calls=0
*/
void sub_18bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18bd0ULL || rel >= 0x18c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00018c20 size=1968 callers=0 calls=7
   calls: sub_31700, sub_35a0, sub_38f80, sub_39a40, sub_39f70, sub_3af50, sub_482e0
*/
void sub_18c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18c20ULL || rel >= 0x193d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000193d0 size=96 callers=0 calls=1
   calls: sub_37be0
*/
void sub_193d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x193d0ULL || rel >= 0x19430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019430 size=16 callers=0 calls=0
*/
void sub_19430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19430ULL || rel >= 0x19440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019440 size=496 callers=1 calls=1
   calls: sub_37660
*/
void sub_19440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19440ULL || rel >= 0x19630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019630 size=16 callers=0 calls=0
*/
void sub_19630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19630ULL || rel >= 0x19640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019640 size=16 callers=0 calls=0
*/
void sub_19640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19640ULL || rel >= 0x19650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019650 size=16 callers=0 calls=0
*/
void sub_19650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19650ULL || rel >= 0x19660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019660 size=16 callers=0 calls=0
*/
void sub_19660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19660ULL || rel >= 0x19670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019670 size=16 callers=0 calls=0
*/
void sub_19670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19670ULL || rel >= 0x19680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019680 size=16 callers=0 calls=0
*/
void sub_19680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19680ULL || rel >= 0x19690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019690 size=16 callers=0 calls=0
*/
void sub_19690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19690ULL || rel >= 0x196a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000196a0 size=16 callers=0 calls=0
*/
void sub_196a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x196a0ULL || rel >= 0x196b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000196b0 size=16 callers=0 calls=0
*/
void sub_196b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x196b0ULL || rel >= 0x196c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000196c0 size=16 callers=0 calls=0
*/
void sub_196c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x196c0ULL || rel >= 0x196d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000196d0 size=16 callers=0 calls=0
*/
void sub_196d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x196d0ULL || rel >= 0x196e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000196e0 size=16 callers=0 calls=0
*/
void sub_196e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x196e0ULL || rel >= 0x196f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000196f0 size=16 callers=0 calls=0
*/
void sub_196f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x196f0ULL || rel >= 0x19700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019700 size=16 callers=0 calls=0
*/
void sub_19700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19700ULL || rel >= 0x19710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019710 size=48 callers=0 calls=0
*/
void sub_19710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19710ULL || rel >= 0x19740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019740 size=880 callers=1 calls=5
   calls: sub_31700, sub_34be0, sub_35a0, sub_388c0, sub_48280
*/
void sub_19740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19740ULL || rel >= 0x19ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019ab0 size=80 callers=0 calls=0
*/
void sub_19ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ab0ULL || rel >= 0x19b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019b00 size=736 callers=1 calls=4
   calls: sub_34be0, sub_34d70, sub_388c0, sub_48e30
*/
void sub_19b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19b00ULL || rel >= 0x19de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00019de0 size=560 callers=0 calls=6
   calls: sub_31700, sub_351c0, sub_35a0, sub_3cb30, sub_40c10, sub_44dc0
*/
void sub_19de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19de0ULL || rel >= 0x1a010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a010 size=16 callers=0 calls=0
*/
void sub_1a010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a010ULL || rel >= 0x1a020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a020 size=16 callers=0 calls=0
*/
void sub_1a020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a020ULL || rel >= 0x1a030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a030 size=16 callers=0 calls=0
*/
void sub_1a030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a030ULL || rel >= 0x1a040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a040 size=32 callers=0 calls=0
*/
void sub_1a040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a040ULL || rel >= 0x1a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a060 size=16 callers=0 calls=0
*/
void sub_1a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a060ULL || rel >= 0x1a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a070 size=80 callers=0 calls=1
   calls: sub_48c20
*/
void sub_1a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a070ULL || rel >= 0x1a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a0c0 size=288 callers=0 calls=3
   calls: sub_34be0, sub_388c0, sub_48e30
*/
void sub_1a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0c0ULL || rel >= 0x1a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a1e0 size=16 callers=1 calls=0
*/
void sub_1a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a1e0ULL || rel >= 0x1a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a1f0 size=16 callers=0 calls=0
*/
void sub_1a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a1f0ULL || rel >= 0x1a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a200 size=144 callers=0 calls=1
   calls: sub_44dc0
*/
void sub_1a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a200ULL || rel >= 0x1a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a290 size=544 callers=0 calls=2
   calls: sub_36070, sub_40c10
*/
void sub_1a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a290ULL || rel >= 0x1a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a4b0 size=64 callers=5 calls=1
   calls: sub_44f80
*/
void sub_1a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a4b0ULL || rel >= 0x1a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a4f0 size=112 callers=0 calls=1
   calls: sub_388c0
*/
void sub_1a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a4f0ULL || rel >= 0x1a560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a560 size=96 callers=1 calls=1
   calls: sub_2220
*/
void sub_1a560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a560ULL || rel >= 0x1a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a5c0 size=256 callers=0 calls=1
   calls: sub_1e40
*/
void sub_1a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a5c0ULL || rel >= 0x1a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a6c0 size=112 callers=4 calls=1
   calls: sub_34be0
*/
void sub_1a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a6c0ULL || rel >= 0x1a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a730 size=80 callers=0 calls=0
*/
void sub_1a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a730ULL || rel >= 0x1a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a780 size=112 callers=4 calls=1
   calls: sub_34be0
*/
void sub_1a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a780ULL || rel >= 0x1a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a7f0 size=112 callers=1 calls=1
   calls: sub_34be0
*/
void sub_1a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a7f0ULL || rel >= 0x1a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001a860 size=528 callers=0 calls=2
   calls: sub_35e70, sub_3cb30
*/
void sub_1a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a860ULL || rel >= 0x1aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001aa70 size=80 callers=0 calls=1
   calls: sub_37830
*/
void sub_1aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1aa70ULL || rel >= 0x1aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001aac0 size=720 callers=1 calls=4
   calls: sub_1adf0, sub_34be0, sub_40c30, sub_41a40
*/
void sub_1aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1aac0ULL || rel >= 0x1ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001ad90 size=32 callers=0 calls=0
*/
void sub_1ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ad90ULL || rel >= 0x1adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001adb0 size=32 callers=0 calls=0
*/
void sub_1adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1adb0ULL || rel >= 0x1add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001add0 size=32 callers=0 calls=0
*/
void sub_1add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1add0ULL || rel >= 0x1adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001adf0 size=1216 callers=1 calls=8
   calls: sub_1dcd0, sub_2ebc0, sub_314f0, sub_31fa0, sub_34be0, sub_35a0, sub_35f0, sub_363c0
*/
void sub_1adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1adf0ULL || rel >= 0x1b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001b2b0 size=80 callers=0 calls=2
   calls: sub_151e0, sub_1aac0
*/
void sub_1b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b2b0ULL || rel >= 0x1b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001b300 size=416 callers=0 calls=0
   ref: gl_InvocationID
*/
void gl_InvocationID(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b300ULL || rel >= 0x1b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001b4a0 size=80 callers=0 calls=0
*/
void sub_1b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b4a0ULL || rel >= 0x1b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001b4f0 size=16 callers=0 calls=0
*/
void sub_1b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b4f0ULL || rel >= 0x1b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001b500 size=128 callers=0 calls=1
   calls: sub_388c0
*/
void sub_1b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b500ULL || rel >= 0x1b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001b580 size=2528 callers=0 calls=18
   calls: sub_140d0, sub_159a0, sub_2f070, sub_2f350, sub_2f8a0, sub_30410, sub_34780, sub_34be0, sub_34d70, sub_35f0, sub_388c0, sub_3ce50
   ... +6 more
*/
void sub_1b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b580ULL || rel >= 0x1bf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001bf60 size=112 callers=0 calls=0
*/
void sub_1bf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bf60ULL || rel >= 0x1bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001bfd0 size=448 callers=0 calls=2
   calls: sub_34be0, sub_34d70
*/
void sub_1bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bfd0ULL || rel >= 0x1c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001c190 size=224 callers=0 calls=0
*/
void sub_1c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c190ULL || rel >= 0x1c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001c270 size=240 callers=0 calls=0
*/
void sub_1c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c270ULL || rel >= 0x1c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001c360 size=544 callers=2 calls=1
   calls: sub_176a0
*/
void sub_1c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c360ULL || rel >= 0x1c580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001c580 size=1216 callers=0 calls=6
   calls: sub_1c360, sub_34be0, sub_35ec0, sub_3e1e0, sub_3e260, sub_3e3b0
*/
void sub_1c580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c580ULL || rel >= 0x1ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001ca40 size=400 callers=0 calls=0
*/
void sub_1ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca40ULL || rel >= 0x1cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001cbd0 size=272 callers=0 calls=1
   calls: sub_34be0
*/
void sub_1cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cbd0ULL || rel >= 0x1cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001cce0 size=432 callers=0 calls=0
*/
void sub_1cce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cce0ULL || rel >= 0x1ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001ce90 size=80 callers=0 calls=0
*/
void sub_1ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce90ULL || rel >= 0x1cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001cee0 size=1440 callers=0 calls=17
   calls: sub_19440, sub_2eca0, sub_34780, sub_34d70, sub_3690, sub_37600, sub_3770, sub_38010, sub_3ce50, sub_41c50, sub_41c90, sub_45150
   ... +5 more
*/
void sub_1cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cee0ULL || rel >= 0x1d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d480 size=16 callers=0 calls=0
*/
void sub_1d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d480ULL || rel >= 0x1d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d490 size=16 callers=0 calls=0
*/
void sub_1d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d490ULL || rel >= 0x1d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d4a0 size=16 callers=0 calls=0
*/
void sub_1d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4a0ULL || rel >= 0x1d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d4b0 size=16 callers=0 calls=0
*/
void sub_1d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4b0ULL || rel >= 0x1d4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d4c0 size=16 callers=0 calls=0
*/
void sub_1d4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4c0ULL || rel >= 0x1d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d4d0 size=16 callers=0 calls=0
*/
void sub_1d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4d0ULL || rel >= 0x1d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d4e0 size=16 callers=0 calls=0
*/
void sub_1d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4e0ULL || rel >= 0x1d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d4f0 size=16 callers=0 calls=0
*/
void sub_1d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4f0ULL || rel >= 0x1d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d500 size=16 callers=0 calls=0
*/
void sub_1d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d500ULL || rel >= 0x1d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d510 size=16 callers=0 calls=0
*/
void sub_1d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d510ULL || rel >= 0x1d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d520 size=16 callers=0 calls=0
*/
void sub_1d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d520ULL || rel >= 0x1d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d530 size=16 callers=0 calls=0
*/
void sub_1d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d530ULL || rel >= 0x1d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d540 size=16 callers=0 calls=0
*/
void sub_1d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d540ULL || rel >= 0x1d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d550 size=16 callers=0 calls=0
*/
void sub_1d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d550ULL || rel >= 0x1d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d560 size=16 callers=0 calls=0
*/
void sub_1d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d560ULL || rel >= 0x1d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d570 size=16 callers=0 calls=0
*/
void sub_1d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d570ULL || rel >= 0x1d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d580 size=16 callers=0 calls=0
*/
void sub_1d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d580ULL || rel >= 0x1d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d590 size=16 callers=0 calls=0
*/
void sub_1d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d590ULL || rel >= 0x1d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d5a0 size=16 callers=0 calls=0
*/
void sub_1d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5a0ULL || rel >= 0x1d5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d5b0 size=16 callers=0 calls=0
*/
void sub_1d5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5b0ULL || rel >= 0x1d5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d5c0 size=16 callers=0 calls=0
*/
void sub_1d5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5c0ULL || rel >= 0x1d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d5d0 size=16 callers=0 calls=0
*/
void sub_1d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5d0ULL || rel >= 0x1d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d5e0 size=16 callers=0 calls=0
*/
void sub_1d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5e0ULL || rel >= 0x1d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d5f0 size=16 callers=0 calls=0
*/
void sub_1d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5f0ULL || rel >= 0x1d600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d600 size=16 callers=0 calls=0
*/
void sub_1d600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d600ULL || rel >= 0x1d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d610 size=16 callers=0 calls=0
*/
void sub_1d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d610ULL || rel >= 0x1d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d620 size=16 callers=0 calls=0
*/
void sub_1d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d620ULL || rel >= 0x1d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d630 size=16 callers=0 calls=0
*/
void sub_1d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d630ULL || rel >= 0x1d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d640 size=16 callers=0 calls=0
*/
void sub_1d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d640ULL || rel >= 0x1d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d650 size=16 callers=0 calls=0
*/
void sub_1d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d650ULL || rel >= 0x1d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d660 size=16 callers=0 calls=0
*/
void sub_1d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d660ULL || rel >= 0x1d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d670 size=16 callers=0 calls=0
*/
void sub_1d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d670ULL || rel >= 0x1d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d680 size=16 callers=0 calls=0
*/
void sub_1d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d680ULL || rel >= 0x1d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d690 size=16 callers=0 calls=0
*/
void sub_1d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d690ULL || rel >= 0x1d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d6a0 size=16 callers=0 calls=0
*/
void sub_1d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6a0ULL || rel >= 0x1d6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d6b0 size=16 callers=0 calls=0
*/
void sub_1d6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6b0ULL || rel >= 0x1d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d6c0 size=16 callers=0 calls=0
*/
void sub_1d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6c0ULL || rel >= 0x1d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d6d0 size=16 callers=0 calls=0
*/
void sub_1d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6d0ULL || rel >= 0x1d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d6e0 size=16 callers=0 calls=0
*/
void sub_1d6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6e0ULL || rel >= 0x1d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d6f0 size=16 callers=0 calls=0
*/
void sub_1d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6f0ULL || rel >= 0x1d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d700 size=16 callers=0 calls=0
*/
void sub_1d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d700ULL || rel >= 0x1d710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d710 size=16 callers=0 calls=0
*/
void sub_1d710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d710ULL || rel >= 0x1d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d720 size=16 callers=0 calls=0
*/
void sub_1d720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d720ULL || rel >= 0x1d730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d730 size=16 callers=0 calls=0
*/
void sub_1d730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d730ULL || rel >= 0x1d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d740 size=16 callers=0 calls=0
*/
void sub_1d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d740ULL || rel >= 0x1d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d750 size=16 callers=0 calls=0
*/
void sub_1d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d750ULL || rel >= 0x1d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d760 size=16 callers=0 calls=0
*/
void sub_1d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d760ULL || rel >= 0x1d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d770 size=16 callers=0 calls=0
*/
void sub_1d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d770ULL || rel >= 0x1d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d780 size=16 callers=0 calls=0
*/
void sub_1d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d780ULL || rel >= 0x1d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d790 size=16 callers=0 calls=0
*/
void sub_1d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d790ULL || rel >= 0x1d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d7a0 size=16 callers=0 calls=0
*/
void sub_1d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7a0ULL || rel >= 0x1d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d7b0 size=16 callers=0 calls=0
*/
void sub_1d7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7b0ULL || rel >= 0x1d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d7c0 size=16 callers=0 calls=0
*/
void sub_1d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7c0ULL || rel >= 0x1d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d7d0 size=16 callers=0 calls=0
*/
void sub_1d7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7d0ULL || rel >= 0x1d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d7e0 size=16 callers=0 calls=0
*/
void sub_1d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7e0ULL || rel >= 0x1d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d7f0 size=16 callers=0 calls=0
*/
void sub_1d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7f0ULL || rel >= 0x1d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d800 size=16 callers=0 calls=0
*/
void sub_1d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d800ULL || rel >= 0x1d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d810 size=16 callers=0 calls=0
*/
void sub_1d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d810ULL || rel >= 0x1d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d820 size=16 callers=0 calls=0
*/
void sub_1d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d820ULL || rel >= 0x1d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d830 size=16 callers=0 calls=0
*/
void sub_1d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d830ULL || rel >= 0x1d840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d840 size=16 callers=0 calls=0
*/
void sub_1d840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d840ULL || rel >= 0x1d850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d850 size=16 callers=0 calls=0
*/
void sub_1d850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d850ULL || rel >= 0x1d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d860 size=16 callers=0 calls=0
*/
void sub_1d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d860ULL || rel >= 0x1d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d870 size=16 callers=0 calls=0
*/
void sub_1d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d870ULL || rel >= 0x1d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d880 size=16 callers=0 calls=0
*/
void sub_1d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d880ULL || rel >= 0x1d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d890 size=16 callers=0 calls=0
*/
void sub_1d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d890ULL || rel >= 0x1d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d8a0 size=16 callers=0 calls=0
*/
void sub_1d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8a0ULL || rel >= 0x1d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d8b0 size=16 callers=0 calls=0
*/
void sub_1d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8b0ULL || rel >= 0x1d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d8c0 size=16 callers=0 calls=0
*/
void sub_1d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8c0ULL || rel >= 0x1d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d8d0 size=16 callers=0 calls=0
*/
void sub_1d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8d0ULL || rel >= 0x1d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d8e0 size=16 callers=0 calls=0
*/
void sub_1d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8e0ULL || rel >= 0x1d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d8f0 size=16 callers=0 calls=0
*/
void sub_1d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d8f0ULL || rel >= 0x1d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d900 size=16 callers=0 calls=0
*/
void sub_1d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d900ULL || rel >= 0x1d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d910 size=16 callers=0 calls=0
*/
void sub_1d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d910ULL || rel >= 0x1d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d920 size=16 callers=0 calls=0
*/
void sub_1d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d920ULL || rel >= 0x1d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d930 size=16 callers=0 calls=0
*/
void sub_1d930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d930ULL || rel >= 0x1d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d940 size=16 callers=0 calls=0
*/
void sub_1d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d940ULL || rel >= 0x1d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d950 size=16 callers=0 calls=0
*/
void sub_1d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d950ULL || rel >= 0x1d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d960 size=16 callers=0 calls=0
*/
void sub_1d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d960ULL || rel >= 0x1d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d970 size=16 callers=0 calls=0
*/
void sub_1d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d970ULL || rel >= 0x1d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d980 size=16 callers=0 calls=0
*/
void sub_1d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d980ULL || rel >= 0x1d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d990 size=16 callers=0 calls=0
*/
void sub_1d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d990ULL || rel >= 0x1d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d9a0 size=16 callers=0 calls=0
*/
void sub_1d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9a0ULL || rel >= 0x1d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001d9b0 size=112 callers=2 calls=1
   calls: sub_1d9b0
*/
void sub_1d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9b0ULL || rel >= 0x1da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001da20 size=144 callers=2 calls=1
   calls: sub_1da20
*/
void sub_1da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1da20ULL || rel >= 0x1dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001dab0 size=208 callers=0 calls=0
*/
void sub_1dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dab0ULL || rel >= 0x1db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001db80 size=336 callers=0 calls=0
*/
void sub_1db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1db80ULL || rel >= 0x1dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001dcd0 size=144 callers=2 calls=1
   calls: sub_1dcd0
*/
void sub_1dcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dcd0ULL || rel >= 0x1dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001dd60 size=464 callers=0 calls=2
   calls: sub_35ec0, sub_35f40
*/
void sub_1dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dd60ULL || rel >= 0x1df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001df30 size=64 callers=1 calls=0
*/
void sub_1df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1df30ULL || rel >= 0x1df70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001df70 size=16 callers=0 calls=0
*/
void sub_1df70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1df70ULL || rel >= 0x1df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001df80 size=192 callers=0 calls=1
   calls: sub_3620
*/
void sub_1df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1df80ULL || rel >= 0x1e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e040 size=32 callers=1 calls=0
*/
void sub_1e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e040ULL || rel >= 0x1e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e060 size=16 callers=1 calls=0
*/
void sub_1e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e060ULL || rel >= 0x1e070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e070 size=528 callers=0 calls=1
   calls: sub_3fa0
*/
void sub_1e070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e070ULL || rel >= 0x1e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e280 size=176 callers=0 calls=2
   calls: sub_3af50, sub_3af80
*/
void sub_1e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e280ULL || rel >= 0x1e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e330 size=192 callers=0 calls=2
   calls: sub_3af50, sub_3af80
   ref: 0x%llx
*/
void f_0x_llx(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e330ULL || rel >= 0x1e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e3f0 size=16 callers=0 calls=0
*/
void sub_1e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e3f0ULL || rel >= 0x1e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e400 size=32 callers=0 calls=0
*/
void sub_1e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e400ULL || rel >= 0x1e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e420 size=96 callers=0 calls=0
*/
void sub_1e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e420ULL || rel >= 0x1e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e480 size=448 callers=0 calls=0
   ref: in[aL+%d]
   ref: out[%02x]
   ref: r-zero
   ref: <<< ? >>>
   ref: CTA_ID
   ref: SHARED_ADDR
   ref: NCTA_ID
   ref: INVALID
*/
void SHARED_ADDR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e480ULL || rel >= 0x1e640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e640 size=688 callers=4 calls=1
   calls: sub_42830
   ref: %s%d%s
   ref: %s%dcc
*/
void s_dcc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e640ULL || rel >= 0x1e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e8f0 size=144 callers=4 calls=1
   calls: sub_1e8f0
*/
void sub_1e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e8f0ULL || rel >= 0x1e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e980 size=16 callers=0 calls=0
*/
void sub_1e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e980ULL || rel >= 0x1e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001e990 size=304 callers=2 calls=0
   ref: <<VAR:NotReg>>
   ref: <<VARYING>>
*/
void VARYING(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e990ULL || rel >= 0x1eac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001eac0 size=128 callers=0 calls=0
   ref: <<OP=%x>>
*/
void OP_x(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eac0ULL || rel >= 0x1eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001eb40 size=1280 callers=36 calls=1
   calls: sub_3fa0
   ref: <<COLOR=ZERO>>
   ref: un%dcc
   ref: <<OP=%x>>
   ref: vr%dcc
*/
void vr_dcc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eb40ULL || rel >= 0x1f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001f040 size=128 callers=0 calls=0
   ref: <<COLOR=ZERO>>
   ref: un%dcc
   ref: vr%dcc
*/
void vr_dcc_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f040ULL || rel >= 0x1f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001f0c0 size=48 callers=0 calls=0
*/
void sub_1f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0c0ULL || rel >= 0x1f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001f0f0 size=480 callers=0 calls=0
   ref: SHADOWARRAY2D
   ref: SHADOWCUBE
   ref: ARRAY2DMS
   ref: SHADOWRECT
   ref: RENDERBUFFER
   ref: SHADOWARRAYCUBE
   ref: SHADOWARRAY1D
   ref: SHADOW2D
*/
void SHADOWARRAYCUBE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0f0ULL || rel >= 0x1f2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001f2d0 size=128 callers=0 calls=1
   calls: sub_3cc80
   ref: <<BAD_TEXUNIT>>
*/
void BAD_TEXUNIT(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2d0ULL || rel >= 0x1f350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001f350 size=16 callers=0 calls=0
*/
void sub_1f350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f350ULL || rel >= 0x1f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001f360 size=1120 callers=2 calls=3
   calls: sub_3af50, sub_3af80, sub_3fa0
   ref: 0x%llx
*/
void f_0x_llx_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f360ULL || rel >= 0x1f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001f7c0 size=1056 callers=3 calls=10
   calls: VARYING, f_0x_08x_0x_08x, f_0x_llx_2, prototype, s_d_d, s_dcc, sub_1e8f0, sub_3cc80, sub_3fa0, unnamed
   ref: <<COLOR=ZERO>>
   ref: <<BAD_TEXUNIT>>
   ref: generic %s
   ref: <<BadChild>>
   ref: iparam[%d]
   ref: prototype
   ref: local[%d]
   ref: <<UNDEF>>
*/
void prototype(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7c0ULL || rel >= 0x1fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001fbe0 size=768 callers=46 calls=5
   calls: s_dcc, sub_35e70, sub_360e0, sub_3fa0, unnamed
   ref: <<COLOR=ZERO>>
   ref: (%s * %s)
   ref: %s%s%s%s%s%s%s%s%s
*/
void unnamed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fbe0ULL || rel >= 0x1fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0001fee0 size=608 callers=21 calls=3
   calls: s_dcc, sub_36430, sub_3fa0
   ref: %s%s%s
   ref: <<COLOR=ZERO>>
*/
void s_s_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fee0ULL || rel >= 0x20140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00020140 size=32 callers=0 calls=0
*/
void sub_20140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20140ULL || rel >= 0x20160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00020160 size=624 callers=0 calls=0
*/
void sub_20160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20160ULL || rel >= 0x203d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000203d0 size=384 callers=5 calls=2
   calls: sub_360e0, sub_3fa0
   ref: <<COLOR=ZERO>>
   ref: un%dcc
   ref: vr%dcc
*/
void vr_dcc_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x203d0ULL || rel >= 0x20550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00020550 size=96 callers=0 calls=0
*/
void sub_20550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20550ULL || rel >= 0x205b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000205b0 size=272 callers=1 calls=1
   calls: sub_3fa0
   ref: %sBB%d
   ref: <<JumpTable>>
*/
void sBB_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x205b0ULL || rel >= 0x206c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000206c0 size=8352 callers=4 calls=13
   calls: SHADOWARRAYCUBE_2, f_0x_08x_0x_08x, f_0x_llx_2, prototype, sBB_d, s_s_s_2, sub_1e8f0, sub_31140, sub_3cc80, sub_3fa0, unnamed, vr_dcc
   ... +1 more
   ref: # %s  %s
   ref: %-6s %s, BB%d, BB%d;
   ref: SHADOWARRAY2D
   ref: %-6s %s
   ref: %-6s %s;
   ref: %-6s %s, %s, %s, %s;
   ref: %-6s %s, %s;
   ref: SHADOWCUBE
*/
void SHADOWARRAYCUBE_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x206c0ULL || rel >= 0x22760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00022760 size=16 callers=0 calls=0
*/
void sub_22760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22760ULL || rel >= 0x22770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00022770 size=544 callers=1 calls=2
   calls: SHADOWARRAYCUBE_2, sub_2880
*/
void sub_22770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22770ULL || rel >= 0x22990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00022990 size=16 callers=0 calls=0
*/
void sub_22990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22990ULL || rel >= 0x229a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000229a0 size=16 callers=0 calls=0
*/
void sub_229a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229a0ULL || rel >= 0x229b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000229b0 size=80 callers=1 calls=0
*/
void sub_229b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229b0ULL || rel >= 0x22a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00022a00 size=96 callers=0 calls=0
   ref: %s[%d]
*/
void unnamed_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a00ULL || rel >= 0x22a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00022a60 size=448 callers=1 calls=1
   calls: Jan_30_2019
   ref: vendor 
   ref: program 
   ref: profile 
   ref: version 
   ref:  COP Build Date 
*/
void version(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a60ULL || rel >= 0x22c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00022c20 size=16 callers=0 calls=0
*/
void sub_22c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c20ULL || rel >= 0x22c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00022c30 size=384 callers=0 calls=1
   calls: sub_3fa0
   ref: %ssemantic 
*/
void ssemantic(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c30ULL || rel >= 0x22db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00022db0 size=16 callers=0 calls=0
*/
void sub_22db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22db0ULL || rel >= 0x22dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00022dc0 size=224 callers=2 calls=1
   calls: sub_3fa0
   ref: %0.*s%d
*/
void f_0_s_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22dc0ULL || rel >= 0x22ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00022ea0 size=1344 callers=6 calls=3
   calls: sub_1e30, sub_1e40, sub_3fa0
   ref: _STATE
   ref: _SAMPLE
   ref: $vout.
   ref: .NOPERSPECTIVE
   ref: _CENTROID
   ref: $vnone.
   ref: %0.*s%d
   ref: %s%s%d
*/
void NOPERSPECTIVE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ea0ULL || rel >= 0x233e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000233e0 size=48 callers=3 calls=0
*/
void sub_233e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x233e0ULL || rel >= 0x23410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00023410 size=96 callers=0 calls=1
   calls: unnamed_3
*/
void sub_23410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23410ULL || rel >= 0x23470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00023470 size=1776 callers=3 calls=7
   calls: NOPERSPECTIVE, s_d_d_d, sub_1e20, sub_1e30, sub_3a250, sub_3fa0, unnamed_3
   ref: %sfunction %d %s
   ref: %svar %s%d %s
   ref: %svar %s%dx%d 
   ref: %sprototype %s
   ref: %ssubroutine %d %s
   ref:  : %d : %d
   ref: texunit %d
   ref: %svar texture%s %s
*/
void unnamed_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23470ULL || rel >= 0x23b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00023b60 size=80 callers=0 calls=1
   calls: sconst_s_d
*/
void sub_23b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23b60ULL || rel >= 0x23bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00023bb0 size=464 callers=2 calls=5
   calls: sconst_s_d, sub_1e20, sub_1e30, sub_2020, sub_3fa0
   ref: %sconst %s[%d] =
*/
void sconst_s_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23bb0ULL || rel >= 0x23d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00023d80 size=96 callers=0 calls=1
   calls: sdefault_s
*/
void sub_23d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d80ULL || rel >= 0x23de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00023de0 size=752 callers=3 calls=3
   calls: sdefault_s, sub_1ff0, sub_3fa0
   ref: %sdefault %s
*/
void sdefault_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23de0ULL || rel >= 0x240d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000240d0 size=160 callers=0 calls=1
   calls: version
*/
void sub_240d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x240d0ULL || rel >= 0x24170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00024170 size=16 callers=0 calls=0
*/
void sub_24170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24170ULL || rel >= 0x24180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00024180 size=48 callers=0 calls=0
*/
void sub_24180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24180ULL || rel >= 0x241b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000241b0 size=128 callers=0 calls=0
*/
void sub_241b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x241b0ULL || rel >= 0x24230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00024230 size=16 callers=0 calls=0
*/
void sub_24230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24230ULL || rel >= 0x24240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

