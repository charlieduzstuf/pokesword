/* main functions 00b74810..00b94c60 (89 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00b74810 size=48 callers=0 calls=0
*/
void sub_b74810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74810ULL || rel >= 0xb74840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74840 size=16 callers=0 calls=0
*/
void sub_b74840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74840ULL || rel >= 0xb74850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74850 size=304 callers=7 calls=0
*/
void sub_b74850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74850ULL || rel >= 0xb74980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74980 size=64 callers=0 calls=0
   ref: bin/chara/table/dressup_preset_table.bin
*/
void dressup_preset_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74980ULL || rel >= 0xb749c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b749c0 size=1360 callers=1 calls=2
   calls: sub_b57170, sub_b57180
   ref: cycling
   ref: bottoms
   ref: eyebrow
   ref: eyelash
*/
void eyelash(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb749c0ULL || rel >= 0xb74f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74f10 size=128 callers=7 calls=2
   calls: sub_b57db0, sub_b74f90
*/
void sub_b74f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74f10ULL || rel >= 0xb74f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74f90 size=560 callers=4 calls=0
*/
void sub_b74f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74f90ULL || rel >= 0xb751c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b751c0 size=112 callers=25 calls=2
   calls: sub_b57cc0, sub_b74f90
*/
void sub_b751c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb751c0ULL || rel >= 0xb75230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75230 size=256 callers=3 calls=3
   calls: sub_b57f60, sub_b58090, sub_b74f90
*/
void sub_b75230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75230ULL || rel >= 0xb75330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75330 size=288 callers=3 calls=3
   calls: sub_b57f60, sub_b58090, sub_b74f90
*/
void sub_b75330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75330ULL || rel >= 0xb75450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75450 size=448 callers=0 calls=0
*/
void sub_b75450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75450ULL || rel >= 0xb75610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75610 size=16 callers=0 calls=0
*/
void sub_b75610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75610ULL || rel >= 0xb75620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75620 size=16 callers=0 calls=0
*/
void sub_b75620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75620ULL || rel >= 0xb75630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75630 size=16 callers=0 calls=0
*/
void sub_b75630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75630ULL || rel >= 0xb75640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75640 size=32 callers=1 calls=0
*/
void sub_b75640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75640ULL || rel >= 0xb75660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75660 size=80 callers=0 calls=0
*/
void sub_b75660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75660ULL || rel >= 0xb756b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b756b0 size=432 callers=0 calls=6
   calls: sub_5e2930, sub_793480, sub_96a5a0, sub_b76310, sub_b763b0, sub_c46830
*/
void sub_b756b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb756b0ULL || rel >= 0xb75860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75860 size=64 callers=0 calls=1
   calls: sub_b758a0
*/
void sub_b75860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75860ULL || rel >= 0xb758a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b758a0 size=512 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_b758a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb758a0ULL || rel >= 0xb75aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75aa0 size=48 callers=0 calls=0
*/
void sub_b75aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75aa0ULL || rel >= 0xb75ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75ad0 size=464 callers=0 calls=7
   calls: sub_5e26a0, sub_5e2930, sub_793480, sub_96a5a0, sub_b76310, sub_b763b0, sub_c46830
*/
void sub_b75ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75ad0ULL || rel >= 0xb75ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75ca0 size=48 callers=0 calls=0
*/
void sub_b75ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75ca0ULL || rel >= 0xb75cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75cd0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b75cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75cd0ULL || rel >= 0xb75db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75db0 size=48 callers=0 calls=0
*/
void sub_b75db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75db0ULL || rel >= 0xb75de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75de0 size=288 callers=5 calls=0
*/
void sub_b75de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75de0ULL || rel >= 0xb75f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75f00 size=16 callers=1 calls=0
*/
void sub_b75f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75f00ULL || rel >= 0xb75f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b75f10 size=352 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b75f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb75f10ULL || rel >= 0xb76070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76070 size=16 callers=0 calls=0
*/
void sub_b76070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76070ULL || rel >= 0xb76080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76080 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b76080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76080ULL || rel >= 0xb76130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76130 size=16 callers=0 calls=0
*/
void sub_b76130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76130ULL || rel >= 0xb76140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76140 size=16 callers=0 calls=0
*/
void sub_b76140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76140ULL || rel >= 0xb76150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76150 size=32 callers=0 calls=0
*/
void sub_b76150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76150ULL || rel >= 0xb76170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76170 size=16 callers=0 calls=0
*/
void sub_b76170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76170ULL || rel >= 0xb76180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76180 size=16 callers=0 calls=0
*/
void sub_b76180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76180ULL || rel >= 0xb76190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76190 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b76190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76190ULL || rel >= 0xb76240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76240 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b76240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76240ULL || rel >= 0xb762f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b762f0 size=16 callers=0 calls=0
*/
void sub_b762f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb762f0ULL || rel >= 0xb76300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76300 size=16 callers=0 calls=0
*/
void sub_b76300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76300ULL || rel >= 0xb76310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76310 size=160 callers=8 calls=1
   calls: sub_d0c0
*/
void sub_b76310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76310ULL || rel >= 0xb763b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b763b0 size=144 callers=8 calls=1
   calls: sub_d0c0
*/
void sub_b763b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb763b0ULL || rel >= 0xb76440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76440 size=144 callers=0 calls=0
*/
void sub_b76440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76440ULL || rel >= 0xb764d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b764d0 size=144 callers=0 calls=0
*/
void sub_b764d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb764d0ULL || rel >= 0xb76560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76560 size=112 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b76560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76560ULL || rel >= 0xb765d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b765d0 size=16 callers=0 calls=0
*/
void sub_b765d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb765d0ULL || rel >= 0xb765e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b765e0 size=16 callers=0 calls=0
*/
void sub_b765e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb765e0ULL || rel >= 0xb765f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b765f0 size=16 callers=0 calls=0
*/
void sub_b765f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb765f0ULL || rel >= 0xb76600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76600 size=16 callers=0 calls=0
*/
void sub_b76600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76600ULL || rel >= 0xb76610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76610 size=16 callers=0 calls=0
*/
void sub_b76610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76610ULL || rel >= 0xb76620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76620 size=16 callers=0 calls=0
*/
void sub_b76620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76620ULL || rel >= 0xb76630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76630 size=16 callers=0 calls=0
*/
void sub_b76630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76630ULL || rel >= 0xb76640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76640 size=144 callers=0 calls=0
*/
void sub_b76640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76640ULL || rel >= 0xb766d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b766d0 size=144 callers=0 calls=0
*/
void sub_b766d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb766d0ULL || rel >= 0xb76760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76760 size=112 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b76760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76760ULL || rel >= 0xb767d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b767d0 size=112 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b767d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb767d0ULL || rel >= 0xb76840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76840 size=144 callers=0 calls=0
*/
void sub_b76840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76840ULL || rel >= 0xb768d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b768d0 size=144 callers=0 calls=0
*/
void sub_b768d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb768d0ULL || rel >= 0xb76960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76960 size=304 callers=33 calls=0
*/
void sub_b76960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76960ULL || rel >= 0xb76a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76a90 size=80 callers=0 calls=0
*/
void sub_b76a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76a90ULL || rel >= 0xb76ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76ae0 size=432 callers=0 calls=6
   calls: sub_5e2930, sub_793480, sub_b76310, sub_b763b0, sub_b77710, sub_c46830
*/
void sub_b76ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76ae0ULL || rel >= 0xb76c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76c90 size=64 callers=0 calls=0
*/
void sub_b76c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76c90ULL || rel >= 0xb76cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76cd0 size=48 callers=0 calls=0
*/
void sub_b76cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76cd0ULL || rel >= 0xb76d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76d00 size=464 callers=0 calls=7
   calls: sub_5e26a0, sub_5e2930, sub_793480, sub_b76310, sub_b763b0, sub_b77710, sub_c46830
*/
void sub_b76d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76d00ULL || rel >= 0xb76ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b76ed0 size=512 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b76ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76ed0ULL || rel >= 0xb770d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b770d0 size=48 callers=0 calls=0
*/
void sub_b770d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb770d0ULL || rel >= 0xb77100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b77100 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b77100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb77100ULL || rel >= 0xb771e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b771e0 size=48 callers=0 calls=0
*/
void sub_b771e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb771e0ULL || rel >= 0xb77210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b77210 size=288 callers=3 calls=0
*/
void sub_b77210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb77210ULL || rel >= 0xb77330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b77330 size=16 callers=0 calls=0
*/
void sub_b77330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb77330ULL || rel >= 0xb77340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b77340 size=16 callers=0 calls=0
*/
void sub_b77340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb77340ULL || rel >= 0xb77350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b77350 size=352 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b77350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb77350ULL || rel >= 0xb774b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b774b0 size=16 callers=0 calls=0
*/
void sub_b774b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb774b0ULL || rel >= 0xb774c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b774c0 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b774c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb774c0ULL || rel >= 0xb77570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b77570 size=16 callers=0 calls=0
*/
void sub_b77570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb77570ULL || rel >= 0xb77580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b77580 size=16 callers=0 calls=0
*/
void sub_b77580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb77580ULL || rel >= 0xb77590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b77590 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b77590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb77590ULL || rel >= 0xb77640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b77640 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b77640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb77640ULL || rel >= 0xb776f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b776f0 size=16 callers=0 calls=0
*/
void sub_b776f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb776f0ULL || rel >= 0xb77700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b77700 size=16 callers=0 calls=0
*/
void sub_b77700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb77700ULL || rel >= 0xb77710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b77710 size=2192 callers=20 calls=7
   calls: sub_5be8a0, sub_5cf8e0, sub_5cf8f0, sub_5e2500, sub_5e6970, sub_df90, sub_e840
*/
void sub_b77710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb77710ULL || rel >= 0xb77fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b77fa0 size=64 callers=0 calls=0
*/
void sub_b77fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb77fa0ULL || rel >= 0xb77fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b77fe0 size=64 callers=0 calls=1
   calls: sub_b78020
*/
void sub_b77fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb77fe0ULL || rel >= 0xb78020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78020 size=496 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_b78020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78020ULL || rel >= 0xb78210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78210 size=320 callers=0 calls=3
   calls: sub_5e2930, sub_c46830, sub_ec20
*/
void sub_b78210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78210ULL || rel >= 0xb78350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78350 size=336 callers=0 calls=4
   calls: sub_5e26a0, sub_5e2930, sub_c46830, sub_ec20
*/
void sub_b78350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78350ULL || rel >= 0xb784a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b784a0 size=48 callers=0 calls=0
*/
void sub_b784a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb784a0ULL || rel >= 0xb784d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b784d0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b784d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb784d0ULL || rel >= 0xb785b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b785b0 size=112 callers=1 calls=0
*/
void sub_b785b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb785b0ULL || rel >= 0xb78620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78620 size=352 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b78620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78620ULL || rel >= 0xb78780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78780 size=16 callers=0 calls=0
*/
void sub_b78780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78780ULL || rel >= 0xb78790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78790 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b78790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78790ULL || rel >= 0xb78840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78840 size=16 callers=0 calls=0
*/
void sub_b78840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78840ULL || rel >= 0xb78850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78850 size=16 callers=0 calls=0
*/
void sub_b78850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78850ULL || rel >= 0xb78860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78860 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b78860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78860ULL || rel >= 0xb78910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78910 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b78910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78910ULL || rel >= 0xb789c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b789c0 size=16 callers=0 calls=0
*/
void sub_b789c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb789c0ULL || rel >= 0xb789d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b789d0 size=16 callers=0 calls=0
*/
void sub_b789d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb789d0ULL || rel >= 0xb789e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b789e0 size=224 callers=0 calls=2
   calls: sub_b78ed0, sub_b790f0
*/
void sub_b789e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb789e0ULL || rel >= 0xb78ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78ac0 size=64 callers=0 calls=1
   calls: sub_b78b00
*/
void sub_b78ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78ac0ULL || rel >= 0xb78b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78b00 size=640 callers=1 calls=2
   calls: sub_7c2d90, sub_b7a5b0
*/
void sub_b78b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78b00ULL || rel >= 0xb78d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78d80 size=144 callers=0 calls=2
   calls: sub_b78ed0, sub_b790f0
*/
void sub_b78d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78d80ULL || rel >= 0xb78e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78e10 size=192 callers=0 calls=2
   calls: sub_b78ed0, sub_b790f0
*/
void sub_b78e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78e10ULL || rel >= 0xb78ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b78ed0 size=544 callers=3 calls=3
   calls: sub_5dd790, sub_5e2930, sub_8c2c10
*/
void sub_b78ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78ed0ULL || rel >= 0xb790f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b790f0 size=368 callers=3 calls=2
   calls: sub_b3abe0, sub_b79260
*/
void sub_b790f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb790f0ULL || rel >= 0xb79260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b79260 size=464 callers=19 calls=0
*/
void sub_b79260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb79260ULL || rel >= 0xb79430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b79430 size=48 callers=0 calls=0
*/
void sub_b79430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb79430ULL || rel >= 0xb79460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b79460 size=80 callers=0 calls=1
   calls: sub_b7a5b0
*/
void sub_b79460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb79460ULL || rel >= 0xb794b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b794b0 size=48 callers=0 calls=0
*/
void sub_b794b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb794b0ULL || rel >= 0xb794e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b794e0 size=48 callers=2 calls=0
*/
void sub_b794e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb794e0ULL || rel >= 0xb79510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b79510 size=16 callers=12 calls=0
*/
void sub_b79510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb79510ULL || rel >= 0xb79520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b79520 size=208 callers=0 calls=1
   calls: sub_b7a5b0
*/
void sub_b79520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb79520ULL || rel >= 0xb795f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b795f0 size=208 callers=0 calls=1
   calls: sub_b7a5b0
*/
void sub_b795f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb795f0ULL || rel >= 0xb796c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b796c0 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b796c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb796c0ULL || rel >= 0xb79770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b79770 size=208 callers=0 calls=1
   calls: sub_b7a5b0
*/
void sub_b79770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb79770ULL || rel >= 0xb79840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b79840 size=208 callers=0 calls=1
   calls: sub_b7a5b0
*/
void sub_b79840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb79840ULL || rel >= 0xb79910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b79910 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b79910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb79910ULL || rel >= 0xb799c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b799c0 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b799c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb799c0ULL || rel >= 0xb79a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b79a70 size=208 callers=0 calls=1
   calls: sub_b7a5b0
*/
void sub_b79a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb79a70ULL || rel >= 0xb79b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b79b40 size=208 callers=0 calls=1
   calls: sub_b7a5b0
*/
void sub_b79b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb79b40ULL || rel >= 0xb79c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b79c10 size=480 callers=0 calls=3
   calls: sub_5e2930, sub_8c2c10, sub_96a5a0
*/
void sub_b79c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb79c10ULL || rel >= 0xb79df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b79df0 size=16 callers=0 calls=0
*/
void sub_b79df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb79df0ULL || rel >= 0xb79e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b79e00 size=16 callers=0 calls=0
*/
void sub_b79e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb79e00ULL || rel >= 0xb79e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b79e10 size=736 callers=0 calls=6
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_8c2c10, sub_b77710
*/
void sub_b79e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb79e10ULL || rel >= 0xb7a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7a0f0 size=32 callers=0 calls=0
*/
void sub_b7a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7a0f0ULL || rel >= 0xb7a110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7a110 size=32 callers=0 calls=0
*/
void sub_b7a110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7a110ULL || rel >= 0xb7a130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7a130 size=16 callers=0 calls=0
*/
void sub_b7a130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7a130ULL || rel >= 0xb7a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7a140 size=16 callers=0 calls=0
*/
void sub_b7a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7a140ULL || rel >= 0xb7a150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7a150 size=1056 callers=0 calls=8
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_8c2c10, sub_96a5a0, sub_b77710
*/
void sub_b7a150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7a150ULL || rel >= 0xb7a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7a570 size=32 callers=0 calls=0
*/
void sub_b7a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7a570ULL || rel >= 0xb7a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7a590 size=32 callers=0 calls=0
*/
void sub_b7a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7a590ULL || rel >= 0xb7a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7a5b0 size=480 callers=8 calls=2
   calls: sub_5e2bc0, sub_b7a790
*/
void sub_b7a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7a5b0ULL || rel >= 0xb7a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7a790 size=624 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_b7a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7a790ULL || rel >= 0xb7aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7aa00 size=64 callers=0 calls=0
*/
void sub_b7aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7aa00ULL || rel >= 0xb7aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7aa40 size=256 callers=1 calls=2
   calls: sub_b7bbd0, sub_b7e370
*/
void sub_b7aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7aa40ULL || rel >= 0xb7ab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7ab40 size=192 callers=0 calls=1
   calls: sub_7c2d90
*/
void sub_b7ab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ab40ULL || rel >= 0xb7ac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7ac00 size=32 callers=0 calls=0
*/
void sub_b7ac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ac00ULL || rel >= 0xb7ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7ac20 size=80 callers=0 calls=1
   calls: sub_b7aa40
*/
void sub_b7ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ac20ULL || rel >= 0xb7ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7ac70 size=48 callers=0 calls=0
*/
void sub_b7ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ac70ULL || rel >= 0xb7aca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7aca0 size=80 callers=0 calls=1
   calls: sub_b7de60
*/
void sub_b7aca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7aca0ULL || rel >= 0xb7acf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7acf0 size=32 callers=0 calls=0
*/
void sub_b7acf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7acf0ULL || rel >= 0xb7ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7ad10 size=48 callers=1 calls=0
*/
void sub_b7ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ad10ULL || rel >= 0xb7ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7ad40 size=240 callers=0 calls=1
   calls: sub_b7de60
*/
void sub_b7ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ad40ULL || rel >= 0xb7ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7ae30 size=240 callers=0 calls=1
   calls: sub_b7de60
*/
void sub_b7ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ae30ULL || rel >= 0xb7af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7af20 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b7af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7af20ULL || rel >= 0xb7afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7afd0 size=240 callers=0 calls=1
   calls: sub_b7de60
*/
void sub_b7afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7afd0ULL || rel >= 0xb7b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7b0c0 size=240 callers=0 calls=1
   calls: sub_b7de60
*/
void sub_b7b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7b0c0ULL || rel >= 0xb7b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7b1b0 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b7b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7b1b0ULL || rel >= 0xb7b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7b260 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b7b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7b260ULL || rel >= 0xb7b310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7b310 size=240 callers=0 calls=1
   calls: sub_b7de60
*/
void sub_b7b310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7b310ULL || rel >= 0xb7b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7b400 size=240 callers=0 calls=1
   calls: sub_b7de60
*/
void sub_b7b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7b400ULL || rel >= 0xb7b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7b4f0 size=192 callers=1 calls=1
   calls: sub_b7b5b0
*/
void sub_b7b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7b4f0ULL || rel >= 0xb7b5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7b5b0 size=896 callers=2 calls=3
   calls: sub_b7db30, sub_b7de60, sub_b7e1b0
*/
void sub_b7b5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7b5b0ULL || rel >= 0xb7b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7b930 size=528 callers=0 calls=4
   calls: sub_b7c450, sub_b7ce30, sub_b7d150, sub_b7d290
*/
void sub_b7b930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7b930ULL || rel >= 0xb7bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7bb40 size=144 callers=1 calls=1
   calls: sub_b7bbd0
*/
void sub_b7bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7bb40ULL || rel >= 0xb7bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7bbd0 size=496 callers=3 calls=3
   calls: sub_b7db30, sub_b7de60, sub_b7e1b0
*/
void sub_b7bbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7bbd0ULL || rel >= 0xb7bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7bdc0 size=720 callers=1 calls=4
   calls: sub_b7c450, sub_b7ce30, sub_b7d150, sub_b7d290
*/
void sub_b7bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7bdc0ULL || rel >= 0xb7c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7c090 size=960 callers=1 calls=2
   calls: sub_b7c890, sub_b7cac0
*/
void sub_b7c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c090ULL || rel >= 0xb7c450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7c450 size=80 callers=16 calls=0
*/
void sub_b7c450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c450ULL || rel >= 0xb7c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7c4a0 size=80 callers=2 calls=0
*/
void sub_b7c4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c4a0ULL || rel >= 0xb7c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7c4f0 size=80 callers=36 calls=0
*/
void sub_b7c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c4f0ULL || rel >= 0xb7c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7c540 size=96 callers=11 calls=0
*/
void sub_b7c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c540ULL || rel >= 0xb7c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7c5a0 size=144 callers=1 calls=0
*/
void sub_b7c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c5a0ULL || rel >= 0xb7c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7c630 size=32 callers=1 calls=0
*/
void sub_b7c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c630ULL || rel >= 0xb7c650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7c650 size=80 callers=1 calls=0
*/
void sub_b7c650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c650ULL || rel >= 0xb7c6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7c6a0 size=128 callers=2 calls=0
*/
void sub_b7c6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c6a0ULL || rel >= 0xb7c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7c720 size=320 callers=1 calls=0
*/
void sub_b7c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c720ULL || rel >= 0xb7c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7c860 size=48 callers=0 calls=1
   calls: sub_b7c720
*/
void sub_b7c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c860ULL || rel >= 0xb7c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7c890 size=560 callers=1 calls=0
*/
void sub_b7c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c890ULL || rel >= 0xb7cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7cac0 size=352 callers=1 calls=0
*/
void sub_b7cac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7cac0ULL || rel >= 0xb7cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7cc20 size=528 callers=0 calls=0
*/
void sub_b7cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7cc20ULL || rel >= 0xb7ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7ce30 size=800 callers=2 calls=3
   calls: sub_b7d460, sub_b7d540, sub_b7d7a0
*/
void sub_b7ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ce30ULL || rel >= 0xb7d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7d150 size=160 callers=9 calls=1
   calls: sub_b7d460
*/
void sub_b7d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7d150ULL || rel >= 0xb7d1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7d1f0 size=160 callers=0 calls=1
   calls: sub_b7d460
*/
void sub_b7d1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7d1f0ULL || rel >= 0xb7d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7d290 size=384 callers=17 calls=1
   calls: sub_b7c090
*/
void sub_b7d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7d290ULL || rel >= 0xb7d410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7d410 size=80 callers=42 calls=0
*/
void sub_b7d410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7d410ULL || rel >= 0xb7d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7d460 size=224 callers=3 calls=0
*/
void sub_b7d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7d460ULL || rel >= 0xb7d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7d540 size=608 callers=1 calls=0
*/
void sub_b7d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7d540ULL || rel >= 0xb7d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7d7a0 size=336 callers=1 calls=0
*/
void sub_b7d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7d7a0ULL || rel >= 0xb7d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7d8f0 size=576 callers=0 calls=0
*/
void sub_b7d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7d8f0ULL || rel >= 0xb7db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7db30 size=816 callers=2 calls=4
   calls: sub_b6c990, sub_b7e3d0, sub_b7e4b0, sub_b7e710
*/
void sub_b7db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7db30ULL || rel >= 0xb7de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7de60 size=800 callers=17 calls=4
   calls: sub_b3abe0, sub_b60780, sub_b76960, sub_b7e3d0
*/
void sub_b7de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7de60ULL || rel >= 0xb7e180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7e180 size=48 callers=0 calls=1
   calls: sub_b7de60
*/
void sub_b7e180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7e180ULL || rel >= 0xb7e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7e1b0 size=448 callers=2 calls=2
   calls: sub_b6c990, sub_b6cc90
*/
void sub_b7e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7e1b0ULL || rel >= 0xb7e370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7e370 size=80 callers=9 calls=0
*/
void sub_b7e370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7e370ULL || rel >= 0xb7e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7e3c0 size=16 callers=2 calls=0
*/
void sub_b7e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7e3c0ULL || rel >= 0xb7e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7e3d0 size=224 callers=2 calls=1
   calls: sub_b6c990
*/
void sub_b7e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7e3d0ULL || rel >= 0xb7e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7e4b0 size=608 callers=1 calls=1
   calls: sub_b6c990
*/
void sub_b7e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7e4b0ULL || rel >= 0xb7e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7e710 size=336 callers=1 calls=0
*/
void sub_b7e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7e710ULL || rel >= 0xb7e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7e860 size=560 callers=0 calls=1
   calls: sub_b6c990
*/
void sub_b7e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7e860ULL || rel >= 0xb7ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7ea90 size=80 callers=0 calls=0
*/
void sub_b7ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ea90ULL || rel >= 0xb7eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7eae0 size=432 callers=0 calls=6
   calls: sub_5e2930, sub_793480, sub_96a5a0, sub_b76310, sub_b763b0, sub_c46830
*/
void sub_b7eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7eae0ULL || rel >= 0xb7ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7ec90 size=64 callers=0 calls=1
   calls: sub_b7ecd0
*/
void sub_b7ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ec90ULL || rel >= 0xb7ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7ecd0 size=640 callers=1 calls=4
   calls: sub_5e2bc0, sub_7c2d90, sub_b3abe0, sub_b7f700
*/
void sub_b7ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ecd0ULL || rel >= 0xb7ef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7ef50 size=48 callers=0 calls=0
*/
void sub_b7ef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ef50ULL || rel >= 0xb7ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7ef80 size=464 callers=0 calls=7
   calls: sub_5e26a0, sub_5e2930, sub_793480, sub_96a5a0, sub_b76310, sub_b763b0, sub_c46830
*/
void sub_b7ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ef80ULL || rel >= 0xb7f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f150 size=48 callers=0 calls=0
*/
void sub_b7f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f150ULL || rel >= 0xb7f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f180 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b7f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f180ULL || rel >= 0xb7f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f260 size=48 callers=0 calls=0
*/
void sub_b7f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f260ULL || rel >= 0xb7f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f290 size=96 callers=4 calls=0
*/
void sub_b7f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f290ULL || rel >= 0xb7f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f2f0 size=16 callers=1 calls=0
*/
void sub_b7f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f2f0ULL || rel >= 0xb7f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f300 size=352 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b7f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f300ULL || rel >= 0xb7f460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f460 size=16 callers=0 calls=0
*/
void sub_b7f460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f460ULL || rel >= 0xb7f470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f470 size=112 callers=0 calls=1
   calls: sub_b6e8c0
*/
void sub_b7f470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f470ULL || rel >= 0xb7f4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f4e0 size=16 callers=0 calls=0
*/
void sub_b7f4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f4e0ULL || rel >= 0xb7f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f4f0 size=16 callers=0 calls=0
*/
void sub_b7f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f4f0ULL || rel >= 0xb7f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f500 size=240 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b7f500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f500ULL || rel >= 0xb7f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f5f0 size=240 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b7f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f5f0ULL || rel >= 0xb7f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f6e0 size=16 callers=0 calls=0
*/
void sub_b7f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f6e0ULL || rel >= 0xb7f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f6f0 size=16 callers=0 calls=0
*/
void sub_b7f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f6f0ULL || rel >= 0xb7f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f700 size=224 callers=5 calls=1
   calls: sub_b6b1b0
*/
void sub_b7f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f700ULL || rel >= 0xb7f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7f7e0 size=656 callers=0 calls=3
   calls: sub_5e2bc0, sub_b3abe0, sub_b7f700
*/
void sub_b7f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f7e0ULL || rel >= 0xb7fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7fa70 size=96 callers=4 calls=0
*/
void sub_b7fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7fa70ULL || rel >= 0xb7fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7fad0 size=16 callers=0 calls=0
*/
void sub_b7fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7fad0ULL || rel >= 0xb7fae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7fae0 size=112 callers=0 calls=1
   calls: sub_b6c8a0
*/
void sub_b7fae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7fae0ULL || rel >= 0xb7fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7fb50 size=16 callers=0 calls=0
*/
void sub_b7fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7fb50ULL || rel >= 0xb7fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7fb60 size=16 callers=0 calls=0
*/
void sub_b7fb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7fb60ULL || rel >= 0xb7fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7fb70 size=240 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b7fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7fb70ULL || rel >= 0xb7fc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7fc60 size=240 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b7fc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7fc60ULL || rel >= 0xb7fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7fd50 size=16 callers=0 calls=0
*/
void sub_b7fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7fd50ULL || rel >= 0xb7fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7fd60 size=16 callers=0 calls=0
*/
void sub_b7fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7fd60ULL || rel >= 0xb7fd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7fd70 size=128 callers=0 calls=1
   calls: sub_b7ffa0
*/
void sub_b7fd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7fd70ULL || rel >= 0xb7fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7fdf0 size=432 callers=0 calls=6
   calls: sub_5dd790, sub_5e2930, sub_793480, sub_b76310, sub_b763b0, sub_c46830
*/
void sub_b7fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7fdf0ULL || rel >= 0xb7ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b7ffa0 size=432 callers=1 calls=2
   calls: sub_b3abe0, sub_b659b0
*/
void sub_b7ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ffa0ULL || rel >= 0xb80150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80150 size=64 callers=0 calls=1
   calls: sub_b80190
*/
void sub_b80150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80150ULL || rel >= 0xb80190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80190 size=720 callers=1 calls=1
   calls: sub_5e2930
*/
void sub_b80190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80190ULL || rel >= 0xb80460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80460 size=48 callers=0 calls=0
*/
void sub_b80460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80460ULL || rel >= 0xb80490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80490 size=464 callers=0 calls=7
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_793480, sub_b76310, sub_b763b0, sub_c46830
*/
void sub_b80490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80490ULL || rel >= 0xb80660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80660 size=48 callers=0 calls=0
*/
void sub_b80660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80660ULL || rel >= 0xb80690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80690 size=16 callers=0 calls=0
*/
void sub_b80690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80690ULL || rel >= 0xb806a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b806a0 size=432 callers=0 calls=2
   calls: sub_b3abe0, sub_b67fd0
*/
void sub_b806a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb806a0ULL || rel >= 0xb80850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80850 size=528 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b80850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80850ULL || rel >= 0xb80a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80a60 size=16 callers=0 calls=0
*/
void sub_b80a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80a60ULL || rel >= 0xb80a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80a70 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b80a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80a70ULL || rel >= 0xb80b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80b20 size=16 callers=0 calls=0
*/
void sub_b80b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80b20ULL || rel >= 0xb80b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80b30 size=16 callers=0 calls=0
*/
void sub_b80b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80b30ULL || rel >= 0xb80b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80b40 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b80b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80b40ULL || rel >= 0xb80bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80bf0 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b80bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80bf0ULL || rel >= 0xb80ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80ca0 size=16 callers=0 calls=0
*/
void sub_b80ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80ca0ULL || rel >= 0xb80cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80cb0 size=16 callers=0 calls=0
*/
void sub_b80cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80cb0ULL || rel >= 0xb80cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80cc0 size=784 callers=0 calls=4
   calls: sub_5e2bc0, sub_5e3870, sub_b3abe0, sub_b76960
*/
void sub_b80cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80cc0ULL || rel >= 0xb80fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80fd0 size=16 callers=0 calls=0
*/
void sub_b80fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80fd0ULL || rel >= 0xb80fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80fe0 size=16 callers=0 calls=0
*/
void sub_b80fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80fe0ULL || rel >= 0xb80ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b80ff0 size=16 callers=0 calls=0
*/
void sub_b80ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80ff0ULL || rel >= 0xb81000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b81000 size=128 callers=0 calls=0
*/
void sub_b81000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81000ULL || rel >= 0xb81080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b81080 size=176 callers=0 calls=1
   calls: sub_7c2d90
*/
void sub_b81080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81080ULL || rel >= 0xb81130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b81130 size=80 callers=0 calls=0
*/
void sub_b81130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81130ULL || rel >= 0xb81180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b81180 size=96 callers=0 calls=0
*/
void sub_b81180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81180ULL || rel >= 0xb811e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b811e0 size=48 callers=0 calls=0
*/
void sub_b811e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb811e0ULL || rel >= 0xb81210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b81210 size=16 callers=0 calls=0
*/
void sub_b81210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81210ULL || rel >= 0xb81220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b81220 size=32 callers=0 calls=0
*/
void sub_b81220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81220ULL || rel >= 0xb81240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b81240 size=192 callers=0 calls=0
*/
void sub_b81240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81240ULL || rel >= 0xb81300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b81300 size=192 callers=0 calls=0
*/
void sub_b81300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81300ULL || rel >= 0xb813c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b813c0 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b813c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb813c0ULL || rel >= 0xb81470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b81470 size=192 callers=0 calls=0
*/
void sub_b81470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81470ULL || rel >= 0xb81530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b81530 size=192 callers=0 calls=0
*/
void sub_b81530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81530ULL || rel >= 0xb815f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b815f0 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b815f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb815f0ULL || rel >= 0xb816a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b816a0 size=176 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b816a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb816a0ULL || rel >= 0xb81750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b81750 size=192 callers=0 calls=0
*/
void sub_b81750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81750ULL || rel >= 0xb81810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b81810 size=192 callers=0 calls=0
*/
void sub_b81810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81810ULL || rel >= 0xb818d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b818d0 size=240 callers=0 calls=0
*/
void sub_b818d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb818d0ULL || rel >= 0xb819c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b819c0 size=592 callers=0 calls=3
   calls: sub_5e2930, sub_c46830, sub_ec20
*/
void sub_b819c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb819c0ULL || rel >= 0xb81c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b81c10 size=64 callers=0 calls=1
   calls: sub_b81c50
*/
void sub_b81c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81c10ULL || rel >= 0xb81c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b81c50 size=1136 callers=1 calls=4
   calls: sub_5e2bc0, sub_7c2d90, sub_b3abe0, sub_b7f700
*/
void sub_b81c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81c50ULL || rel >= 0xb820c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b820c0 size=48 callers=0 calls=0
*/
void sub_b820c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb820c0ULL || rel >= 0xb820f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b820f0 size=640 callers=0 calls=4
   calls: sub_5e26a0, sub_5e2930, sub_c46830, sub_ec20
*/
void sub_b820f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb820f0ULL || rel >= 0xb82370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b82370 size=48 callers=0 calls=0
*/
void sub_b82370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb82370ULL || rel >= 0xb823a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b823a0 size=752 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b823a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb823a0ULL || rel >= 0xb82690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b82690 size=48 callers=0 calls=0
*/
void sub_b82690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb82690ULL || rel >= 0xb826c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b826c0 size=192 callers=0 calls=1
   calls: sub_b82d70
*/
void sub_b826c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb826c0ULL || rel >= 0xb82780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b82780 size=192 callers=0 calls=1
   calls: sub_b82d70
*/
void sub_b82780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb82780ULL || rel >= 0xb82840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b82840 size=112 callers=0 calls=1
   calls: sub_b6e8c0
*/
void sub_b82840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb82840ULL || rel >= 0xb828b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b828b0 size=176 callers=0 calls=1
   calls: sub_b82d70
*/
void sub_b828b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb828b0ULL || rel >= 0xb82960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b82960 size=176 callers=0 calls=1
   calls: sub_b82d70
*/
void sub_b82960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb82960ULL || rel >= 0xb82a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b82a10 size=240 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b82a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb82a10ULL || rel >= 0xb82b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b82b00 size=240 callers=0 calls=1
   calls: sub_b76960
*/
void sub_b82b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb82b00ULL || rel >= 0xb82bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b82bf0 size=192 callers=0 calls=1
   calls: sub_b82d70
*/
void sub_b82bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb82bf0ULL || rel >= 0xb82cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b82cb0 size=192 callers=0 calls=1
   calls: sub_b82d70
*/
void sub_b82cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb82cb0ULL || rel >= 0xb82d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b82d70 size=400 callers=12 calls=1
   calls: sub_5e2bc0
*/
void sub_b82d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb82d70ULL || rel >= 0xb82f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b82f00 size=176 callers=2 calls=0
*/
void sub_b82f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb82f00ULL || rel >= 0xb82fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b82fb0 size=288 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_b82fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb82fb0ULL || rel >= 0xb830d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b830d0 size=16 callers=0 calls=0
*/
void sub_b830d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb830d0ULL || rel >= 0xb830e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b830e0 size=16 callers=0 calls=0
*/
void sub_b830e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb830e0ULL || rel >= 0xb830f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b830f0 size=16 callers=0 calls=0
*/
void sub_b830f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb830f0ULL || rel >= 0xb83100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83100 size=320 callers=1 calls=4
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_8c2c10
*/
void sub_b83100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83100ULL || rel >= 0xb83240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83240 size=384 callers=1 calls=5
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_1106cd0, sub_1106f30
   ref: nameHash
   ref: categoryHash
*/
void categoryHash(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83240ULL || rel >= 0xb833c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b833c0 size=1296 callers=1 calls=8
   calls: sub_1106200, sub_1106220, sub_1106280, sub_1106320, sub_11063e0, sub_11067c0, sub_1106cd0, sub_1106f30
   ref: ikFrameMin
   ref: slideMax
   ref: ikDegreeMax
   ref: changeTimingL
   ref: slideMin
   ref: nameHash
   ref: categoryHash
   ref: changeTiming
*/
void turnAngleFactor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb833c0ULL || rel >= 0xb838d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b838d0 size=64 callers=0 calls=0
   ref: bin/chara/table/turnwalk_table.prmb
*/
void turnwalk_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb838d0ULL || rel >= 0xb83910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83910 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_b83910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83910ULL || rel >= 0xb83950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83950 size=32 callers=0 calls=0
*/
void sub_b83950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83950ULL || rel >= 0xb83970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83970 size=48 callers=0 calls=0
*/
void sub_b83970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83970ULL || rel >= 0xb839a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b839a0 size=32 callers=0 calls=0
*/
void sub_b839a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb839a0ULL || rel >= 0xb839c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b839c0 size=48 callers=0 calls=0
*/
void sub_b839c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb839c0ULL || rel >= 0xb839f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b839f0 size=16 callers=0 calls=0
*/
void sub_b839f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb839f0ULL || rel >= 0xb83a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83a00 size=48 callers=1 calls=0
*/
void sub_b83a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83a00ULL || rel >= 0xb83a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83a30 size=512 callers=1 calls=0
*/
void sub_b83a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83a30ULL || rel >= 0xb83c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83c30 size=64 callers=0 calls=0
   ref: bin/chara/table/cycling_wear_color_table.bin
*/
void cycling_wear_color_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83c30ULL || rel >= 0xb83c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83c70 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_b83c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83c70ULL || rel >= 0xb83cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83cb0 size=32 callers=0 calls=0
*/
void sub_b83cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83cb0ULL || rel >= 0xb83cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83cd0 size=48 callers=0 calls=0
*/
void sub_b83cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83cd0ULL || rel >= 0xb83d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83d00 size=32 callers=0 calls=0
*/
void sub_b83d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83d00ULL || rel >= 0xb83d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83d20 size=48 callers=0 calls=0
*/
void sub_b83d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83d20ULL || rel >= 0xb83d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83d50 size=16 callers=0 calls=0
*/
void sub_b83d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83d50ULL || rel >= 0xb83d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83d60 size=432 callers=1 calls=1
   calls: sub_ead710
*/
void sub_b83d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83d60ULL || rel >= 0xb83f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b83f10 size=1056 callers=0 calls=1
   calls: sub_ead710
*/
void sub_b83f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb83f10ULL || rel >= 0xb84330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b84330 size=64 callers=0 calls=0
   ref: bin/chara/table/orion_npc_table.bin
*/
void orion_npc_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb84330ULL || rel >= 0xb84370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b84370 size=48 callers=1 calls=1
   calls: sub_b491e0
*/
void sub_b84370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb84370ULL || rel >= 0xb843a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b843a0 size=16 callers=0 calls=0
*/
void sub_b843a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb843a0ULL || rel >= 0xb843b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b843b0 size=48 callers=0 calls=1
   calls: sub_b49230
*/
void sub_b843b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb843b0ULL || rel >= 0xb843e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b843e0 size=16 callers=0 calls=0
*/
void sub_b843e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb843e0ULL || rel >= 0xb843f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b843f0 size=1184 callers=7 calls=3
   calls: sub_607750, sub_612f70, sub_793ea0
*/
void sub_b843f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb843f0ULL || rel >= 0xb84890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b84890 size=48 callers=1 calls=1
   calls: sub_b843f0
*/
void sub_b84890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb84890ULL || rel >= 0xb848c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b848c0 size=736 callers=2 calls=3
   calls: sub_793f30, sub_ce0300, sub_ce04c0
   ref: GroundAttributes
*/
void GroundAttributes_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb848c0ULL || rel >= 0xb84ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b84ba0 size=592 callers=1 calls=3
   calls: AnmSnd_08x, Wwise, sub_612ef0
*/
void sub_b84ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb84ba0ULL || rel >= 0xb84df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b84df0 size=368 callers=2 calls=2
   calls: sub_59a260, sub_5db1b0
   ref: Sound/Wwise
*/
void Wwise(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb84df0ULL || rel >= 0xb84f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b84f60 size=304 callers=0 calls=0
*/
void sub_b84f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb84f60ULL || rel >= 0xb85090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85090 size=16 callers=0 calls=0
*/
void sub_b85090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85090ULL || rel >= 0xb850a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b850a0 size=16 callers=0 calls=0
*/
void sub_b850a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb850a0ULL || rel >= 0xb850b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b850b0 size=16 callers=0 calls=0
*/
void sub_b850b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb850b0ULL || rel >= 0xb850c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b850c0 size=16 callers=0 calls=0
*/
void sub_b850c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb850c0ULL || rel >= 0xb850d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b850d0 size=16 callers=0 calls=0
*/
void sub_b850d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb850d0ULL || rel >= 0xb850e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b850e0 size=32 callers=0 calls=0
*/
void sub_b850e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb850e0ULL || rel >= 0xb85100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85100 size=32 callers=0 calls=0
*/
void sub_b85100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85100ULL || rel >= 0xb85120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85120 size=96 callers=0 calls=2
   calls: GroundAttributes_2, sub_b843f0
*/
void sub_b85120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85120ULL || rel >= 0xb85180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85180 size=880 callers=1 calls=5
   calls: AnmSnd_08x, Wwise, sub_65d700, sub_793fb0, sub_b86950
   ref: PM_Visible
*/
void PM_Visible_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85180ULL || rel >= 0xb854f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b854f0 size=400 callers=0 calls=0
*/
void sub_b854f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb854f0ULL || rel >= 0xb85680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85680 size=16 callers=0 calls=0
*/
void sub_b85680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85680ULL || rel >= 0xb85690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85690 size=16 callers=0 calls=0
*/
void sub_b85690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85690ULL || rel >= 0xb856a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b856a0 size=16 callers=0 calls=0
*/
void sub_b856a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb856a0ULL || rel >= 0xb856b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b856b0 size=16 callers=0 calls=0
*/
void sub_b856b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb856b0ULL || rel >= 0xb856c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b856c0 size=16 callers=0 calls=0
*/
void sub_b856c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb856c0ULL || rel >= 0xb856d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b856d0 size=128 callers=0 calls=1
   calls: sub_b843f0
*/
void sub_b856d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb856d0ULL || rel >= 0xb85750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85750 size=128 callers=0 calls=1
   calls: sub_b843f0
*/
void sub_b85750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85750ULL || rel >= 0xb857d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b857d0 size=112 callers=1 calls=1
   calls: sub_612ef0
*/
void sub_b857d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb857d0ULL || rel >= 0xb85840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85840 size=64 callers=3 calls=0
*/
void sub_b85840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85840ULL || rel >= 0xb85880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85880 size=160 callers=0 calls=3
   calls: GroundAttributes_2, sub_612ef0, sub_b843f0
*/
void sub_b85880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85880ULL || rel >= 0xb85920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85920 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_b85920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85920ULL || rel >= 0xb859d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b859d0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_b859d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb859d0ULL || rel >= 0xb85a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85a80 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_b85a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85a80ULL || rel >= 0xb85b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85b30 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_b85b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85b30ULL || rel >= 0xb85be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85be0 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_b85be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85be0ULL || rel >= 0xb85c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85c90 size=176 callers=0 calls=1
   calls: sub_607750
*/
void sub_b85c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85c90ULL || rel >= 0xb85d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85d40 size=256 callers=0 calls=0
*/
void sub_b85d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85d40ULL || rel >= 0xb85e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85e40 size=16 callers=0 calls=0
*/
void sub_b85e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85e40ULL || rel >= 0xb85e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85e50 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_b85e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85e50ULL || rel >= 0xb85ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85ec0 size=256 callers=0 calls=0
*/
void sub_b85ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85ec0ULL || rel >= 0xb85fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85fc0 size=16 callers=0 calls=0
*/
void sub_b85fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85fc0ULL || rel >= 0xb85fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b85fd0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_b85fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85fd0ULL || rel >= 0xb86040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b86040 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_b86040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb86040ULL || rel >= 0xb860b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b860b0 size=256 callers=0 calls=0
*/
void sub_b860b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb860b0ULL || rel >= 0xb861b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b861b0 size=16 callers=0 calls=0
*/
void sub_b861b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb861b0ULL || rel >= 0xb861c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b861c0 size=112 callers=0 calls=1
   calls: PostEvent
*/
void sub_b861c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb861c0ULL || rel >= 0xb86230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b86230 size=16 callers=0 calls=0
*/
void sub_b86230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb86230ULL || rel >= 0xb86240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b86240 size=640 callers=1 calls=3
   calls: sub_5a0150, sub_5a0340, sub_5a03d0
   ref: Attribute
   ref: PostEvent
*/
void PostEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb86240ULL || rel >= 0xb864c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b864c0 size=16 callers=0 calls=0
*/
void sub_b864c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb864c0ULL || rel >= 0xb864d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b864d0 size=16 callers=0 calls=0
*/
void sub_b864d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb864d0ULL || rel >= 0xb864e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b864e0 size=464 callers=2 calls=2
   calls: sub_5e2350, sub_793d10
   ref: AnmSnd%08x
*/
void AnmSnd_08x(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb864e0ULL || rel >= 0xb866b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b866b0 size=320 callers=0 calls=1
   calls: sub_793de0
*/
void sub_b866b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb866b0ULL || rel >= 0xb867f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b867f0 size=16 callers=0 calls=0
*/
void sub_b867f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb867f0ULL || rel >= 0xb86800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b86800 size=240 callers=0 calls=0
*/
void sub_b86800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb86800ULL || rel >= 0xb868f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b868f0 size=16 callers=0 calls=0
*/
void sub_b868f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb868f0ULL || rel >= 0xb86900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b86900 size=16 callers=0 calls=0
*/
void sub_b86900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb86900ULL || rel >= 0xb86910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b86910 size=16 callers=0 calls=0
*/
void sub_b86910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb86910ULL || rel >= 0xb86920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b86920 size=16 callers=0 calls=0
*/
void sub_b86920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb86920ULL || rel >= 0xb86930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b86930 size=16 callers=0 calls=0
*/
void sub_b86930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb86930ULL || rel >= 0xb86940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b86940 size=16 callers=0 calls=0
*/
void sub_b86940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb86940ULL || rel >= 0xb86950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b86950 size=640 callers=1 calls=0
*/
void sub_b86950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb86950ULL || rel >= 0xb86bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b86bd0 size=64 callers=0 calls=0
*/
void sub_b86bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb86bd0ULL || rel >= 0xb86c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b86c10 size=768 callers=1 calls=1
   calls: sub_b7b4f0
*/
void sub_b86c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb86c10ULL || rel >= 0xb86f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b86f10 size=656 callers=0 calls=0
*/
void sub_b86f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb86f10ULL || rel >= 0xb871a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b871a0 size=16 callers=0 calls=0
*/
void sub_b871a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb871a0ULL || rel >= 0xb871b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b871b0 size=16 callers=0 calls=0
*/
void sub_b871b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb871b0ULL || rel >= 0xb871c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b871c0 size=16 callers=0 calls=0
*/
void sub_b871c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb871c0ULL || rel >= 0xb871d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b871d0 size=16 callers=0 calls=0
*/
void sub_b871d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb871d0ULL || rel >= 0xb871e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b871e0 size=16 callers=0 calls=0
*/
void sub_b871e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb871e0ULL || rel >= 0xb871f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b871f0 size=416 callers=0 calls=3
   calls: sub_b3abe0, sub_b659b0, sub_b87390
*/
void sub_b871f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb871f0ULL || rel >= 0xb87390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b87390 size=224 callers=1 calls=5
   calls: EffectTex, sub_12eff80, sub_12f0100, sub_12f0120, sub_12f0840
*/
void sub_b87390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb87390ULL || rel >= 0xb87470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b87470 size=320 callers=0 calls=3
   calls: sub_b3abe0, sub_b67390, sub_b875b0
*/
void sub_b87470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb87470ULL || rel >= 0xb875b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b875b0 size=1120 callers=1 calls=6
   calls: sub_967240, sub_986200, sub_b364c0, sub_b87a10, sub_ea9e40, sub_ea9e50
*/
void sub_b875b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb875b0ULL || rel >= 0xb87a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b87a10 size=368 callers=1 calls=2
   calls: sub_12f6d30, sub_b364c0
*/
void sub_b87a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb87a10ULL || rel >= 0xb87b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b87b80 size=96 callers=0 calls=1
   calls: sub_b87be0
*/
void sub_b87b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb87b80ULL || rel >= 0xb87be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b87be0 size=288 callers=2 calls=2
   calls: sub_b3abe0, sub_b60780
*/
void sub_b87be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb87be0ULL || rel >= 0xb87d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b87d00 size=48 callers=0 calls=1
   calls: sub_b87be0
*/
void sub_b87d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb87d00ULL || rel >= 0xb87d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b87d30 size=5376 callers=0 calls=26
   calls: sub_12efab0, sub_59bee0, sub_5cfad0, sub_5d99d0, sub_612ef0, sub_615bd0, sub_615c50, sub_671cf0, sub_967240, sub_b364c0, sub_b36ea0, sub_b43300
   ... +14 more
*/
void sub_b87d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb87d30ULL || rel >= 0xb89230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b89230 size=192 callers=1 calls=5
   calls: sub_5d99d0, sub_671d00, sub_b8ae40, sub_b8af50, sub_b8b050
*/
void sub_b89230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb89230ULL || rel >= 0xb892f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b892f0 size=544 callers=1 calls=5
   calls: sub_598de0, sub_967240, sub_b44bb0, sub_b6c550, sub_b79510
*/
void sub_b892f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb892f0ULL || rel >= 0xb89510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b89510 size=272 callers=1 calls=2
   calls: sub_5d99d0, sub_ede0e0
*/
void sub_b89510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb89510ULL || rel >= 0xb89620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b89620 size=432 callers=1 calls=3
   calls: eye01_03_2, sub_b37010, sub_b491e0
   ref: to_eye_blink03
   ref: to_eye_blink02
   ref: to_eye_blink01
*/
void to_eye_blink03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb89620ULL || rel >= 0xb897d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b897d0 size=1952 callers=0 calls=11
   calls: sub_12f1940, sub_967240, sub_9862e0, sub_b43770, sub_b43a90, sub_b44040, sub_b6c550, sub_b79510, sub_b8c030, sub_b8c350, sub_b8c5d0
*/
void sub_b897d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb897d0ULL || rel >= 0xb89f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b89f70 size=32 callers=0 calls=0
*/
void sub_b89f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb89f70ULL || rel >= 0xb89f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b89f90 size=80 callers=0 calls=0
*/
void sub_b89f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb89f90ULL || rel >= 0xb89fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b89fe0 size=64 callers=0 calls=0
*/
void sub_b89fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb89fe0ULL || rel >= 0xb8a020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8a020 size=80 callers=0 calls=0
*/
void sub_b8a020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8a020ULL || rel >= 0xb8a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8a070 size=448 callers=0 calls=5
   calls: sub_598de0, sub_967240, sub_b44bb0, sub_b6c550, sub_b79510
*/
void sub_b8a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8a070ULL || rel >= 0xb8a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8a230 size=416 callers=0 calls=5
   calls: sub_599a80, sub_967240, sub_b44bb0, sub_b6c550, sub_b79510
*/
void sub_b8a230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8a230ULL || rel >= 0xb8a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8a3d0 size=64 callers=0 calls=0
*/
void sub_b8a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8a3d0ULL || rel >= 0xb8a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8a410 size=528 callers=0 calls=5
   calls: sub_598de0, sub_967240, sub_b44bb0, sub_b6c550, sub_b79510
*/
void sub_b8a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8a410ULL || rel >= 0xb8a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8a620 size=16 callers=0 calls=0
*/
void sub_b8a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8a620ULL || rel >= 0xb8a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8a630 size=16 callers=0 calls=0
*/
void sub_b8a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8a630ULL || rel >= 0xb8a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8a640 size=160 callers=0 calls=3
   calls: sub_12f2d20, sub_619060, sub_96ccf0
*/
void sub_b8a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8a640ULL || rel >= 0xb8a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8a6e0 size=1072 callers=3 calls=2
   calls: sub_b364c0, sub_b494a0
   ref: Top/eye01_default/eye_blink/eye01_01_start
   ref: Top/eye01_default/eye_blink/eye01_01_end
   ref: Top/eye01_default/eye_blink/eye01_03
   ref: Top/eye01_default/eye_blink/eye01_02
*/
void eye01_03_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8a6e0ULL || rel >= 0xb8ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ab10 size=64 callers=2 calls=0
*/
void sub_b8ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ab10ULL || rel >= 0xb8ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ab50 size=64 callers=2 calls=0
*/
void sub_b8ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ab50ULL || rel >= 0xb8ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ab90 size=64 callers=2 calls=0
*/
void sub_b8ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ab90ULL || rel >= 0xb8abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8abd0 size=112 callers=0 calls=1
   calls: sub_b42430
*/
void sub_b8abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8abd0ULL || rel >= 0xb8ac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ac40 size=16 callers=0 calls=0
*/
void sub_b8ac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ac40ULL || rel >= 0xb8ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ac50 size=16 callers=0 calls=0
*/
void sub_b8ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ac50ULL || rel >= 0xb8ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ac60 size=240 callers=0 calls=1
   calls: sub_b39cf0
*/
void sub_b8ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ac60ULL || rel >= 0xb8ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ad50 size=240 callers=0 calls=1
   calls: sub_b39cf0
*/
void sub_b8ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ad50ULL || rel >= 0xb8ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ae40 size=272 callers=7 calls=2
   calls: sub_5d99d0, sub_6160e0
*/
void sub_b8ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ae40ULL || rel >= 0xb8af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8af50 size=256 callers=1 calls=2
   calls: sub_5d99d0, sub_670860
*/
void sub_b8af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8af50ULL || rel >= 0xb8b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8b050 size=240 callers=7 calls=1
   calls: sub_598a60
*/
void sub_b8b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8b050ULL || rel >= 0xb8b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8b140 size=224 callers=1 calls=1
   calls: sub_12ef8f0
*/
void sub_b8b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8b140ULL || rel >= 0xb8b220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8b220 size=336 callers=1 calls=1
   calls: PM_Visible_3
*/
void sub_b8b220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8b220ULL || rel >= 0xb8b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8b370 size=512 callers=12 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_b8b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8b370ULL || rel >= 0xb8b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8b570 size=480 callers=1 calls=0
*/
void sub_b8b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8b570ULL || rel >= 0xb8b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8b750 size=368 callers=0 calls=4
   calls: sub_670800, sub_670830, sub_671e80, sub_967240
*/
void sub_b8b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8b750ULL || rel >= 0xb8b8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8b8c0 size=16 callers=0 calls=0
*/
void sub_b8b8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8b8c0ULL || rel >= 0xb8b8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8b8d0 size=16 callers=0 calls=0
*/
void sub_b8b8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8b8d0ULL || rel >= 0xb8b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8b8e0 size=16 callers=0 calls=0
*/
void sub_b8b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8b8e0ULL || rel >= 0xb8b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8b8f0 size=816 callers=0 calls=2
   calls: sub_670800, sub_967240
*/
void sub_b8b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8b8f0ULL || rel >= 0xb8bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8bc20 size=16 callers=0 calls=0
*/
void sub_b8bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8bc20ULL || rel >= 0xb8bc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8bc30 size=16 callers=0 calls=0
*/
void sub_b8bc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8bc30ULL || rel >= 0xb8bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8bc40 size=16 callers=0 calls=0
*/
void sub_b8bc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8bc40ULL || rel >= 0xb8bc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8bc50 size=720 callers=0 calls=2
   calls: sub_670800, sub_967240
*/
void sub_b8bc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8bc50ULL || rel >= 0xb8bf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8bf20 size=16 callers=0 calls=0
*/
void sub_b8bf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8bf20ULL || rel >= 0xb8bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8bf30 size=16 callers=0 calls=0
*/
void sub_b8bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8bf30ULL || rel >= 0xb8bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8bf40 size=16 callers=0 calls=0
*/
void sub_b8bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8bf40ULL || rel >= 0xb8bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8bf50 size=224 callers=1 calls=1
   calls: sub_b8c8f0
*/
void sub_b8bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8bf50ULL || rel >= 0xb8c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8c030 size=800 callers=3 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_b8c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8c030ULL || rel >= 0xb8c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8c350 size=640 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_96ccf0
*/
void sub_b8c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8c350ULL || rel >= 0xb8c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8c5d0 size=800 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_b8c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8c5d0ULL || rel >= 0xb8c8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8c8f0 size=64 callers=2 calls=1
   calls: sub_b46560
*/
void sub_b8c8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8c8f0ULL || rel >= 0xb8c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8c930 size=176 callers=7 calls=1
   calls: sub_b33b10
*/
void sub_b8c930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8c930ULL || rel >= 0xb8c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8c9e0 size=176 callers=13 calls=1
   calls: sub_b33b80
*/
void sub_b8c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8c9e0ULL || rel >= 0xb8ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ca90 size=16 callers=0 calls=0
*/
void sub_b8ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ca90ULL || rel >= 0xb8caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8caa0 size=112 callers=0 calls=1
   calls: sub_b3a8e0
*/
void sub_b8caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8caa0ULL || rel >= 0xb8cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cb10 size=16 callers=0 calls=0
*/
void sub_b8cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cb10ULL || rel >= 0xb8cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cb20 size=16 callers=0 calls=0
*/
void sub_b8cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cb20ULL || rel >= 0xb8cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cb30 size=112 callers=0 calls=1
   calls: sub_b3a8e0
*/
void sub_b8cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cb30ULL || rel >= 0xb8cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cba0 size=112 callers=0 calls=1
   calls: sub_b3a8e0
*/
void sub_b8cba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cba0ULL || rel >= 0xb8cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cc10 size=16 callers=0 calls=0
*/
void sub_b8cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cc10ULL || rel >= 0xb8cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cc20 size=16 callers=0 calls=0
*/
void sub_b8cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cc20ULL || rel >= 0xb8cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cc30 size=368 callers=0 calls=2
   calls: sub_b7d150, sub_b7de60
*/
void sub_b8cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cc30ULL || rel >= 0xb8cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cda0 size=16 callers=0 calls=0
*/
void sub_b8cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cda0ULL || rel >= 0xb8cdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cdb0 size=16 callers=0 calls=0
*/
void sub_b8cdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cdb0ULL || rel >= 0xb8cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cdc0 size=16 callers=0 calls=0
*/
void sub_b8cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cdc0ULL || rel >= 0xb8cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cdd0 size=16 callers=0 calls=0
*/
void sub_b8cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cdd0ULL || rel >= 0xb8cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cde0 size=16 callers=0 calls=0
*/
void sub_b8cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cde0ULL || rel >= 0xb8cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cdf0 size=64 callers=0 calls=0
*/
void sub_b8cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cdf0ULL || rel >= 0xb8ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ce30 size=48 callers=0 calls=0
*/
void sub_b8ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ce30ULL || rel >= 0xb8ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ce60 size=32 callers=0 calls=0
*/
void sub_b8ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ce60ULL || rel >= 0xb8ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ce80 size=64 callers=0 calls=0
*/
void sub_b8ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ce80ULL || rel >= 0xb8cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cec0 size=80 callers=0 calls=1
   calls: sub_b8cf10
*/
void sub_b8cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cec0ULL || rel >= 0xb8cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8cf10 size=288 callers=1 calls=3
   calls: sub_b7c4f0, sub_b7c540, sub_b7d410
*/
void sub_b8cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cf10ULL || rel >= 0xb8d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8d030 size=304 callers=0 calls=5
   calls: sub_59b2c0, sub_607750, sub_b3b430, sub_b8d160, sub_b8d460
*/
void sub_b8d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8d030ULL || rel >= 0xb8d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8d160 size=768 callers=1 calls=8
   calls: sub_b7c4f0, sub_b7c540, sub_b7c6a0, sub_b7d410, sub_b8e8a0, sub_b8ee70, sub_b92ec0, sub_b934f0
*/
void sub_b8d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8d160ULL || rel >= 0xb8d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8d460 size=320 callers=2 calls=2
   calls: sub_b659b0, sub_b94160
*/
void sub_b8d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8d460ULL || rel >= 0xb8d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8d5a0 size=464 callers=0 calls=4
   calls: sub_b35490, sub_b3b9f0, sub_b8d770, sub_b92ec0
*/
void sub_b8d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8d5a0ULL || rel >= 0xb8d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8d770 size=1168 callers=2 calls=10
   calls: sub_b35490, sub_b364c0, sub_b6ffa0, sub_b70440, sub_b71e40, sub_b72950, sub_b8ddd0, sub_b8e1b0, sub_b8e370, sub_b94160
*/
void sub_b8d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8d770ULL || rel >= 0xb8dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8dc00 size=464 callers=0 calls=4
   calls: sub_b35490, sub_b3b9f0, sub_b8d770, sub_b92ec0
*/
void sub_b8dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8dc00ULL || rel >= 0xb8ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ddd0 size=992 callers=1 calls=4
   calls: sub_b67390, sub_b6f8c0, sub_b7bb40, sub_b94160
*/
void sub_b8ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ddd0ULL || rel >= 0xb8e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8e1b0 size=448 callers=1 calls=0
*/
void sub_b8e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8e1b0ULL || rel >= 0xb8e370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8e370 size=480 callers=1 calls=0
*/
void sub_b8e370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8e370ULL || rel >= 0xb8e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8e550 size=416 callers=0 calls=5
   calls: sub_b3c800, sub_b43130, sub_b60780, sub_b934f0, sub_b94160
*/
void sub_b8e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8e550ULL || rel >= 0xb8e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8e6f0 size=432 callers=0 calls=6
   calls: sub_b3caf0, sub_b43130, sub_b60780, sub_b8e8a0, sub_b934f0, sub_b94160
*/
void sub_b8e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8e6f0ULL || rel >= 0xb8e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8e8a0 size=736 callers=2 calls=4
   calls: sub_b60780, sub_b7d150, sub_b7de60, sub_b94160
*/
void sub_b8e8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8e8a0ULL || rel >= 0xb8eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8eb80 size=752 callers=0 calls=7
   calls: sub_5d99d0, sub_967240, sub_b36ea0, sub_b3cb20, sub_b45be0, sub_b8ee70, sub_b94280
*/
void sub_b8eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8eb80ULL || rel >= 0xb8ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ee70 size=2624 callers=3 calls=20
   calls: Col0SecondaryColor_2, num3Skin_vis, sub_59a510, sub_59a520, sub_607750, sub_967240, sub_b364c0, sub_b43130, sub_b45040, sub_b49680, sub_b49780, sub_b7c4f0
   ... +8 more
*/
void sub_b8ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ee70ULL || rel >= 0xb8f8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8f8b0 size=448 callers=0 calls=4
   calls: sub_967240, sub_b3e830, sub_b8fa70, sub_b94360
*/
void sub_b8f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8f8b0ULL || rel >= 0xb8fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8fa70 size=432 callers=2 calls=5
   calls: sub_b49680, sub_b49780, sub_b7c4f0, sub_b7c540, sub_b7d410
*/
void sub_b8fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8fa70ULL || rel >= 0xb8fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8fc20 size=16 callers=0 calls=0
*/
void sub_b8fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8fc20ULL || rel >= 0xb8fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8fc30 size=16 callers=0 calls=0
*/
void sub_b8fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8fc30ULL || rel >= 0xb8fc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8fc40 size=16 callers=0 calls=0
*/
void sub_b8fc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8fc40ULL || rel >= 0xb8fc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8fc50 size=464 callers=0 calls=5
   calls: sub_967240, sub_b3f430, sub_b3f6c0, sub_b7c4f0, sub_b7d410
*/
void sub_b8fc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8fc50ULL || rel >= 0xb8fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8fe20 size=416 callers=0 calls=4
   calls: sub_967240, sub_b3f990, sub_b7c4f0, sub_b7d410
*/
void sub_b8fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8fe20ULL || rel >= 0xb8ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b8ffc0 size=672 callers=0 calls=3
   calls: sub_967240, sub_b7c4f0, sub_b7d410
*/
void sub_b8ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ffc0ULL || rel >= 0xb90260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b90260 size=16 callers=0 calls=0
*/
void sub_b90260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb90260ULL || rel >= 0xb90270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b90270 size=432 callers=0 calls=3
   calls: sub_b3fc60, sub_b7c4f0, sub_b7d410
*/
void sub_b90270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb90270ULL || rel >= 0xb90420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b90420 size=48 callers=0 calls=1
   calls: sub_b40070
*/
void sub_b90420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb90420ULL || rel >= 0xb90450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b90450 size=4816 callers=2 calls=22
   calls: sub_619060, sub_6191c0, sub_793f30, sub_967240, sub_97e1a0, sub_986bc0, sub_b4c080, sub_b57190, sub_b571e0, sub_b57200, sub_b57cc0, sub_b57fb0
   ... +10 more
   ref: Col0SkinColor
   ref: Barefoot
   ref: Col0SecondaryColor
   ref: Col0PrimaryColor
*/
void Col0SecondaryColor_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb90450ULL || rel >= 0xb91720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b91720 size=48 callers=0 calls=1
   calls: sub_b406e0
*/
void sub_b91720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb91720ULL || rel >= 0xb91750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b91750 size=80 callers=2 calls=1
   calls: sub_b917a0
*/
void sub_b91750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb91750ULL || rel >= 0xb917a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b917a0 size=320 callers=1 calls=5
   calls: sub_b6ffa0, sub_b70440, sub_b71e40, sub_b72950, sub_b94160
*/
void sub_b917a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb917a0ULL || rel >= 0xb918e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b918e0 size=16 callers=3 calls=0
*/
void sub_b918e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb918e0ULL || rel >= 0xb918f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b918f0 size=16 callers=2 calls=0
*/
void sub_b918f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb918f0ULL || rel >= 0xb91900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b91900 size=976 callers=2 calls=11
   calls: Col0SecondaryColor_2, sub_599d40, sub_59a7f0, sub_59b2d0, sub_59b2e0, sub_5cfad0, sub_607750, sub_b7c4f0, sub_b7d410, sub_b91cd0, sub_b946e0
*/
void sub_b91900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb91900ULL || rel >= 0xb91cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b91cd0 size=608 callers=4 calls=5
   calls: sub_59a7b0, sub_607750, sub_b7c4f0, sub_b7d410, sub_b946e0
*/
void sub_b91cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb91cd0ULL || rel >= 0xb91f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b91f30 size=656 callers=4 calls=4
   calls: sub_615bd0, sub_615c50, sub_97e1a0, sub_b946e0
*/
void sub_b91f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb91f30ULL || rel >= 0xb921c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b921c0 size=928 callers=1 calls=6
   calls: num3Skin_vis_2, sub_615bd0, sub_615c50, sub_96ccf0, sub_b7c4f0, sub_b7d410
   ref: inner_num
   ref: num1Skin_vis
   ref: num2Skin_vis
   ref: bottoms_num
   ref: num3Skin_vis
*/
void num3Skin_vis(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb921c0ULL || rel >= 0xb92560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b92560 size=1360 callers=2 calls=4
   calls: sub_614680, sub_615bd0, sub_615c50, sub_96ccf0
   ref: num1Skin_vis
   ref: num2Skin_vis
   ref: num3Skin_vis
*/
void num3Skin_vis_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb92560ULL || rel >= 0xb92ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b92ab0 size=336 callers=1 calls=3
   calls: sub_b659b0, sub_b94160, sub_b947d0
*/
void sub_b92ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb92ab0ULL || rel >= 0xb92c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b92c00 size=320 callers=1 calls=4
   calls: sub_b364c0, sub_b7c4f0, sub_b7d410, sub_b948f0
*/
void sub_b92c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb92c00ULL || rel >= 0xb92d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b92d40 size=384 callers=1 calls=4
   calls: sub_b364c0, sub_b72950, sub_b7c4f0, sub_b7d410
*/
void sub_b92d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb92d40ULL || rel >= 0xb92ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b92ec0 size=912 callers=3 calls=12
   calls: sub_b659b0, sub_b7bdc0, sub_b7c4a0, sub_b7c540, sub_b7d410, sub_b8ee70, sub_b92ab0, sub_b92c00, sub_b92d40, sub_b93250, sub_b94160, sub_b94f80
*/
void sub_b92ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb92ec0ULL || rel >= 0xb93250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b93250 size=672 callers=1 calls=6
   calls: sub_607750, sub_b7c4f0, sub_b7c650, sub_b7d410, sub_b946e0, sub_ee17c0
*/
void sub_b93250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb93250ULL || rel >= 0xb934f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b934f0 size=416 callers=3 calls=5
   calls: sub_b7c4f0, sub_b7c540, sub_b7c6a0, sub_b7d410, sub_b8fa70
*/
void sub_b934f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb934f0ULL || rel >= 0xb93690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b93690 size=496 callers=0 calls=6
   calls: sub_b40db0, sub_b43130, sub_b60780, sub_b7c4f0, sub_b7d410, sub_b94160
*/
void sub_b93690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb93690ULL || rel >= 0xb93880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b93880 size=512 callers=0 calls=5
   calls: sub_b40de0, sub_b43130, sub_b7c4f0, sub_b7d410, sub_b946e0
*/
void sub_b93880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb93880ULL || rel >= 0xb93a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b93a80 size=592 callers=0 calls=6
   calls: sub_b364c0, sub_b67390, sub_b7c4f0, sub_b7d410, sub_b8d460, sub_b94160
   ref: p2_base/anime/p2_anim_nx64.gfbanmcfg
   ref: p1_base/anime/p1_anim_nx64.gfbanmcfg
*/
void p2_anim_nx64_gfbanmcfg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb93a80ULL || rel >= 0xb93cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b93cd0 size=224 callers=0 calls=2
   calls: sub_b7c4f0, sub_b7d410
*/
void sub_b93cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb93cd0ULL || rel >= 0xb93db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b93db0 size=880 callers=0 calls=8
   calls: sub_598de0, sub_967240, sub_b40db0, sub_b43130, sub_b44bb0, sub_b7c4f0, sub_b7d410, sub_b946e0
*/
void sub_b93db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb93db0ULL || rel >= 0xb94120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b94120 size=16 callers=0 calls=0
*/
void sub_b94120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb94120ULL || rel >= 0xb94130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b94130 size=16 callers=0 calls=0
*/
void sub_b94130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb94130ULL || rel >= 0xb94140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b94140 size=16 callers=0 calls=0
*/
void sub_b94140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb94140ULL || rel >= 0xb94150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b94150 size=16 callers=0 calls=0
*/
void sub_b94150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb94150ULL || rel >= 0xb94160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b94160 size=288 callers=40 calls=0
*/
void sub_b94160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb94160ULL || rel >= 0xb94280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b94280 size=224 callers=1 calls=1
   calls: sub_b95150
*/
void sub_b94280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb94280ULL || rel >= 0xb94360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b94360 size=656 callers=3 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_b945f0
*/
void sub_b94360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb94360ULL || rel >= 0xb945f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b945f0 size=240 callers=12 calls=1
   calls: sub_607750
*/
void sub_b945f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb945f0ULL || rel >= 0xb946e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b946e0 size=240 callers=14 calls=1
   calls: sub_b39cf0
*/
void sub_b946e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb946e0ULL || rel >= 0xb947d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b947d0 size=288 callers=2 calls=1
   calls: sub_b39cf0
*/
void sub_b947d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb947d0ULL || rel >= 0xb948f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b948f0 size=880 callers=1 calls=4
   calls: sub_b7c4a0, sub_b7c5a0, sub_b947d0, sub_b94c60
*/
void sub_b948f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb948f0ULL || rel >= 0xb94c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b94c60 size=464 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_b94c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb94c60ULL || rel >= 0xb94e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

