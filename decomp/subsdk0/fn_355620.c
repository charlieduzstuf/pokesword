/* subsdk0 functions 00355620..00364130 (20 of 20). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00355620 size=448 callers=0 calls=5
   calls: sub_34ade0, sub_34ae10, sub_34b050, sub_353aa0, sub_3554b0
*/
void sub_355620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355620ULL || rel >= 0x3557e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003557e0 size=48 callers=0 calls=0
*/
void sub_3557e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3557e0ULL || rel >= 0x355810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355810 size=672 callers=0 calls=3
   calls: sub_34af30, sub_353ef0, sub_355ab0
*/
void sub_355810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355810ULL || rel >= 0x355ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355ab0 size=2272 callers=2 calls=1
   calls: sub_3568d0
*/
void sub_355ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355ab0ULL || rel >= 0x356390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356390 size=1344 callers=0 calls=3
   calls: sub_34af30, sub_353ef0, sub_355ab0
*/
void sub_356390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356390ULL || rel >= 0x3568d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003568d0 size=1344 callers=3 calls=1
   calls: sub_353b90
*/
void sub_3568d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3568d0ULL || rel >= 0x356e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356e10 size=224 callers=1 calls=1
   calls: sub_34ade0
*/
void sub_356e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356e10ULL || rel >= 0x356ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356ef0 size=624 callers=0 calls=6
   calls: sub_34ade0, sub_34ae10, sub_34b050, sub_353aa0, sub_356e10, sub_357160
*/
void sub_356ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356ef0ULL || rel >= 0x357160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357160 size=2304 callers=3 calls=0
*/
void sub_357160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357160ULL || rel >= 0x357a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357a60 size=3008 callers=2 calls=2
   calls: sub_34af30, sub_358620
*/
void sub_357a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357a60ULL || rel >= 0x358620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00358620 size=528 callers=2 calls=0
*/
void sub_358620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x358620ULL || rel >= 0x358830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00358830 size=224 callers=0 calls=0
*/
void sub_358830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x358830ULL || rel >= 0x358910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00358910 size=160 callers=0 calls=2
   calls: sub_357160, sub_357a60
*/
void sub_358910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x358910ULL || rel >= 0x3589b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003589b0 size=176 callers=0 calls=2
   calls: sub_357160, sub_357a60
*/
void sub_3589b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3589b0ULL || rel >= 0x358a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00358a60 size=5520 callers=1 calls=1
   calls: sub_359ff0
*/
void sub_358a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x358a60ULL || rel >= 0x359ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359ff0 size=336 callers=3 calls=0
*/
void sub_359ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359ff0ULL || rel >= 0x35a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035a140 size=208 callers=0 calls=2
   calls: sub_358a60, sub_359ff0
*/
void sub_35a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35a140ULL || rel >= 0x35a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035a210 size=288 callers=2 calls=3
   calls: sub_34ade0, sub_34b3f0, sub_35a330
*/
void sub_35a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35a210ULL || rel >= 0x35a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035a330 size=208 callers=2 calls=1
   calls: sub_34ade0
*/
void sub_35a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35a330ULL || rel >= 0x35a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035a400 size=1312 callers=0 calls=6
   calls: Profilestats, sub_34ae10, sub_34b050, sub_34b490, sub_35a210, sub_35a330
*/
void sub_35a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35a400ULL || rel >= 0x35a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035a920 size=4128 callers=0 calls=2
   calls: d_d_d_6, sub_34af30
*/
void sub_35a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35a920ULL || rel >= 0x35b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b940 size=96 callers=0 calls=0
*/
void sub_35b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b940ULL || rel >= 0x35b9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b9a0 size=240 callers=0 calls=1
   calls: d_d_d_lld_f_f
*/
void sub_35b9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b9a0ULL || rel >= 0x35ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ba90 size=16 callers=0 calls=0
*/
void sub_35ba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ba90ULL || rel >= 0x35baa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035baa0 size=16 callers=0 calls=0
*/
void sub_35baa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35baa0ULL || rel >= 0x35bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bab0 size=16 callers=0 calls=0
*/
void sub_35bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bab0ULL || rel >= 0x35bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bac0 size=16 callers=0 calls=0
*/
void sub_35bac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bac0ULL || rel >= 0x35bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bad0 size=16 callers=0 calls=0
*/
void sub_35bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bad0ULL || rel >= 0x35bae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bae0 size=16 callers=0 calls=0
*/
void sub_35bae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bae0ULL || rel >= 0x35baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035baf0 size=16 callers=0 calls=0
*/
void sub_35baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35baf0ULL || rel >= 0x35bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bb00 size=16 callers=0 calls=0
*/
void sub_35bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bb00ULL || rel >= 0x35bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bb10 size=16 callers=0 calls=0
*/
void sub_35bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bb10ULL || rel >= 0x35bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bb20 size=16 callers=0 calls=0
*/
void sub_35bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bb20ULL || rel >= 0x35bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bb30 size=16 callers=0 calls=0
*/
void sub_35bb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bb30ULL || rel >= 0x35bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bb40 size=16 callers=0 calls=0
*/
void sub_35bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bb40ULL || rel >= 0x35bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bb50 size=16 callers=0 calls=0
*/
void sub_35bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bb50ULL || rel >= 0x35bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bb60 size=16 callers=0 calls=0
*/
void sub_35bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bb60ULL || rel >= 0x35bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bb70 size=16 callers=0 calls=0
*/
void sub_35bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bb70ULL || rel >= 0x35bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bb80 size=16 callers=0 calls=0
*/
void sub_35bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bb80ULL || rel >= 0x35bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bb90 size=16 callers=0 calls=0
*/
void sub_35bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bb90ULL || rel >= 0x35bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bba0 size=16 callers=0 calls=0
*/
void sub_35bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bba0ULL || rel >= 0x35bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bbb0 size=16 callers=0 calls=0
*/
void sub_35bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bbb0ULL || rel >= 0x35bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bbc0 size=16 callers=0 calls=0
*/
void sub_35bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bbc0ULL || rel >= 0x35bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bbd0 size=16 callers=0 calls=0
*/
void sub_35bbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bbd0ULL || rel >= 0x35bbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bbe0 size=16 callers=0 calls=0
*/
void sub_35bbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bbe0ULL || rel >= 0x35bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bbf0 size=16 callers=0 calls=0
*/
void sub_35bbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bbf0ULL || rel >= 0x35bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bc00 size=16 callers=0 calls=0
*/
void sub_35bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bc00ULL || rel >= 0x35bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bc10 size=16 callers=0 calls=0
*/
void sub_35bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bc10ULL || rel >= 0x35bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bc20 size=32 callers=0 calls=0
*/
void sub_35bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bc20ULL || rel >= 0x35bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bc40 size=32 callers=0 calls=0
*/
void sub_35bc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bc40ULL || rel >= 0x35bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bc60 size=32 callers=0 calls=0
*/
void sub_35bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bc60ULL || rel >= 0x35bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bc80 size=16 callers=0 calls=0
*/
void sub_35bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bc80ULL || rel >= 0x35bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bc90 size=16 callers=0 calls=0
*/
void sub_35bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bc90ULL || rel >= 0x35bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bca0 size=48 callers=0 calls=0
*/
void sub_35bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bca0ULL || rel >= 0x35bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bcd0 size=48 callers=0 calls=0
*/
void sub_35bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bcd0ULL || rel >= 0x35bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bd00 size=48 callers=0 calls=0
*/
void sub_35bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bd00ULL || rel >= 0x35bd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bd30 size=48 callers=0 calls=0
*/
void sub_35bd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bd30ULL || rel >= 0x35bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bd60 size=48 callers=0 calls=0
*/
void sub_35bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bd60ULL || rel >= 0x35bd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bd90 size=48 callers=0 calls=0
*/
void sub_35bd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bd90ULL || rel >= 0x35bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bdc0 size=624 callers=0 calls=4
   calls: sub_34af30, sub_35f790, sub_35f810, sub_35fb90
*/
void sub_35bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bdc0ULL || rel >= 0x35c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c030 size=2416 callers=0 calls=11
   calls: sub_34aa50, sub_34af30, sub_35e860, sub_35f220, sub_35f790, sub_35f810, sub_35fb90, sub_35fdd0, sub_35fe00, sub_35fe60, sub_35ff60
*/
void sub_35c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c030ULL || rel >= 0x35c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c9a0 size=1200 callers=0 calls=8
   calls: sub_34aa50, sub_34af30, sub_35e860, sub_35efa0, sub_35f790, sub_35fdd0, sub_35fe00, sub_35fe60
*/
void sub_35c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c9a0ULL || rel >= 0x35ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ce50 size=48 callers=0 calls=1
   calls: sub_35dc10
*/
void sub_35ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ce50ULL || rel >= 0x35ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ce80 size=1136 callers=1 calls=8
   calls: sub_34aa50, sub_34af30, sub_35e3e0, sub_35f220, sub_35f790, sub_35fdd0, sub_35fe00, sub_35fe60
*/
void sub_35ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ce80ULL || rel >= 0x35d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d2f0 size=160 callers=0 calls=0
*/
void sub_35d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d2f0ULL || rel >= 0x35d390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d390 size=48 callers=0 calls=0
*/
void sub_35d390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d390ULL || rel >= 0x35d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d3c0 size=32 callers=0 calls=0
*/
void sub_35d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d3c0ULL || rel >= 0x35d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d3e0 size=48 callers=0 calls=0
*/
void sub_35d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d3e0ULL || rel >= 0x35d410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d410 size=64 callers=0 calls=0
*/
void sub_35d410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d410ULL || rel >= 0x35d450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d450 size=80 callers=0 calls=0
*/
void sub_35d450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d450ULL || rel >= 0x35d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d4a0 size=48 callers=0 calls=0
*/
void sub_35d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d4a0ULL || rel >= 0x35d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d4d0 size=1216 callers=0 calls=4
   calls: sub_34af00, sub_34af30, sub_35efa0, sub_35f790
*/
void sub_35d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d4d0ULL || rel >= 0x35d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d990 size=640 callers=0 calls=4
   calls: sub_34af00, sub_35e3e0, sub_35efa0, sub_35f790
*/
void sub_35d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d990ULL || rel >= 0x35dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035dc10 size=896 callers=1 calls=7
   calls: sub_34af30, sub_35e3e0, sub_35efa0, sub_35f790, sub_35fdd0, sub_35fe00, sub_35fe60
*/
void sub_35dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35dc10ULL || rel >= 0x35df90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035df90 size=16 callers=0 calls=0
*/
void sub_35df90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35df90ULL || rel >= 0x35dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035dfa0 size=16 callers=0 calls=0
*/
void sub_35dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35dfa0ULL || rel >= 0x35dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035dfb0 size=144 callers=0 calls=1
   calls: sub_35ce80
*/
void sub_35dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35dfb0ULL || rel >= 0x35e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e040 size=32 callers=0 calls=0
*/
void sub_35e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e040ULL || rel >= 0x35e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e060 size=48 callers=0 calls=0
*/
void sub_35e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e060ULL || rel >= 0x35e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e090 size=32 callers=0 calls=0
*/
void sub_35e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e090ULL || rel >= 0x35e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e0b0 size=64 callers=0 calls=0
*/
void sub_35e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e0b0ULL || rel >= 0x35e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e0f0 size=80 callers=0 calls=0
*/
void sub_35e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e0f0ULL || rel >= 0x35e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e140 size=48 callers=0 calls=0
*/
void sub_35e140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e140ULL || rel >= 0x35e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e170 size=80 callers=0 calls=0
*/
void sub_35e170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e170ULL || rel >= 0x35e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e1c0 size=160 callers=2 calls=1
   calls: sub_34ade0
*/
void sub_35e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e1c0ULL || rel >= 0x35e260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e260 size=384 callers=1 calls=2
   calls: sub_34ae10, sub_35e1c0
*/
void sub_35e260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e260ULL || rel >= 0x35e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e3e0 size=1152 callers=9 calls=0
*/
void sub_35e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e3e0ULL || rel >= 0x35e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e860 size=1856 callers=4 calls=0
*/
void sub_35e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e860ULL || rel >= 0x35efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035efa0 size=640 callers=6 calls=0
*/
void sub_35efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35efa0ULL || rel >= 0x35f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f220 size=1392 callers=4 calls=0
*/
void sub_35f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f220ULL || rel >= 0x35f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f790 size=128 callers=13 calls=0
*/
void sub_35f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f790ULL || rel >= 0x35f810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f810 size=896 callers=2 calls=0
*/
void sub_35f810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f810ULL || rel >= 0x35fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035fb90 size=576 callers=2 calls=0
*/
void sub_35fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35fb90ULL || rel >= 0x35fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035fdd0 size=48 callers=4 calls=0
*/
void sub_35fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35fdd0ULL || rel >= 0x35fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035fe00 size=96 callers=5 calls=0
*/
void sub_35fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35fe00ULL || rel >= 0x35fe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035fe60 size=256 callers=4 calls=0
*/
void sub_35fe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35fe60ULL || rel >= 0x35ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ff60 size=144 callers=1 calls=0
*/
void sub_35ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ff60ULL || rel >= 0x35fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035fff0 size=304 callers=1 calls=1
   calls: sub_34ade0
*/
void sub_35fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35fff0ULL || rel >= 0x360120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360120 size=1712 callers=0 calls=4
   calls: sub_34ae10, sub_34b050, sub_35fff0, sub_3607d0
*/
void sub_360120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360120ULL || rel >= 0x3607d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003607d0 size=1152 callers=1 calls=1
   calls: sub_34aff0
*/
void sub_3607d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3607d0ULL || rel >= 0x360c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360c50 size=896 callers=0 calls=0
*/
void sub_360c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360c50ULL || rel >= 0x360fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360fd0 size=320 callers=0 calls=3
   calls: sub_34af30, sub_361110, sub_364130
*/
void sub_360fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360fd0ULL || rel >= 0x361110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361110 size=576 callers=2 calls=3
   calls: sub_34af30, sub_361680, sub_364130
*/
void sub_361110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361110ULL || rel >= 0x361350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361350 size=64 callers=0 calls=1
   calls: sub_361110
*/
void sub_361350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361350ULL || rel >= 0x361390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361390 size=752 callers=0 calls=2
   calls: sub_34af30, sub_361680
*/
void sub_361390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361390ULL || rel >= 0x361680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361680 size=848 callers=5 calls=4
   calls: sub_35f220, sub_35f790, sub_3623c0, sub_362e40
*/
void sub_361680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361680ULL || rel >= 0x3619d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003619d0 size=2544 callers=0 calls=7
   calls: sub_34af30, sub_35e3e0, sub_35efa0, sub_35f790, sub_361680, sub_3623c0, sub_362e40
*/
void sub_3619d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3619d0ULL || rel >= 0x3623c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003623c0 size=2688 callers=4 calls=3
   calls: sub_35e860, sub_35f220, sub_35f790
*/
void sub_3623c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3623c0ULL || rel >= 0x362e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362e40 size=4848 callers=5 calls=1
   calls: sub_35e860
*/
void sub_362e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362e40ULL || rel >= 0x364130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00364130 size=61824 callers=2 calls=5
   calls: sub_35e3e0, sub_35efa0, sub_35f790, sub_3623c0, sub_362e40
*/
void sub_364130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x364130ULL || rel >= 0x3732b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

