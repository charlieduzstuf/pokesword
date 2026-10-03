/* main functions 01028300..0103af20 (131 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01028300 size=32 callers=0 calls=0
*/
void sub_1028300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028300ULL || rel >= 0x1028320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028320 size=16 callers=0 calls=0
*/
void sub_1028320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028320ULL || rel >= 0x1028330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028330 size=16 callers=0 calls=0
*/
void sub_1028330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028330ULL || rel >= 0x1028340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028340 size=16 callers=0 calls=0
*/
void sub_1028340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028340ULL || rel >= 0x1028350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028350 size=32 callers=0 calls=0
*/
void sub_1028350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028350ULL || rel >= 0x1028370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028370 size=16 callers=0 calls=0
*/
void sub_1028370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028370ULL || rel >= 0x1028380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028380 size=16 callers=0 calls=0
*/
void sub_1028380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028380ULL || rel >= 0x1028390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028390 size=16 callers=0 calls=0
*/
void sub_1028390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028390ULL || rel >= 0x10283a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010283a0 size=32 callers=0 calls=0
*/
void sub_10283a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10283a0ULL || rel >= 0x10283c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010283c0 size=16 callers=0 calls=0
*/
void sub_10283c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10283c0ULL || rel >= 0x10283d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010283d0 size=16 callers=0 calls=0
*/
void sub_10283d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10283d0ULL || rel >= 0x10283e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010283e0 size=16 callers=0 calls=0
*/
void sub_10283e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10283e0ULL || rel >= 0x10283f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010283f0 size=32 callers=0 calls=0
*/
void sub_10283f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10283f0ULL || rel >= 0x1028410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028410 size=32 callers=0 calls=0
*/
void sub_1028410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028410ULL || rel >= 0x1028430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028430 size=400 callers=1 calls=0
*/
void sub_1028430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028430ULL || rel >= 0x10285c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010285c0 size=1344 callers=1 calls=12
   calls: sub_102a160, sub_102a470, sub_102b1a0, sub_102be90, sub_1038350, sub_103da00, sub_11045f0, sub_11046d0, sub_1377ab0, sub_6aea40, sub_76f550, sub_c3b970
*/
void sub_10285c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10285c0ULL || rel >= 0x1028b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028b00 size=880 callers=0 calls=5
   calls: sub_102b0b0, sub_11045f0, sub_11046d0, sub_619770, sub_6aeb70
*/
void sub_1028b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028b00ULL || rel >= 0x1028e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028e70 size=80 callers=1 calls=3
   calls: sub_10285c0, sub_1028ec0, sub_1029020
*/
void sub_1028e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028e70ULL || rel >= 0x1028ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01028ec0 size=352 callers=2 calls=3
   calls: sub_102bf70, sub_5cf8e0, sub_5cf8f0
*/
void sub_1028ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1028ec0ULL || rel >= 0x1029020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01029020 size=352 callers=1 calls=3
   calls: sub_102c130, sub_5cf8e0, sub_5cf8f0
*/
void sub_1029020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1029020ULL || rel >= 0x1029180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01029180 size=448 callers=1 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_1029180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1029180ULL || rel >= 0x1029340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01029340 size=240 callers=0 calls=1
   calls: sub_5cf8f0
*/
void sub_1029340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1029340ULL || rel >= 0x1029430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01029430 size=240 callers=0 calls=1
   calls: sub_5cf8f0
*/
void sub_1029430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1029430ULL || rel >= 0x1029520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01029520 size=2240 callers=1 calls=24
   calls: sub_1038a50, sub_1038ac0, sub_1038d00, sub_1038d20, sub_103e1d0, sub_103e2a0, sub_103e460, sub_103e480, sub_1048a80, sub_1048f70, sub_104bf60, sub_1052c50
   ... +12 more
*/
void sub_1029520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1029520ULL || rel >= 0x1029de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01029de0 size=144 callers=0 calls=0
*/
void sub_1029de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1029de0ULL || rel >= 0x1029e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01029e70 size=80 callers=0 calls=0
*/
void sub_1029e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1029e70ULL || rel >= 0x1029ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01029ec0 size=80 callers=0 calls=0
*/
void sub_1029ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1029ec0ULL || rel >= 0x1029f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01029f10 size=240 callers=0 calls=0
*/
void sub_1029f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1029f10ULL || rel >= 0x102a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a000 size=80 callers=0 calls=0
*/
void sub_102a000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a000ULL || rel >= 0x102a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a050 size=80 callers=0 calls=0
*/
void sub_102a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a050ULL || rel >= 0x102a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a0a0 size=16 callers=0 calls=0
*/
void sub_102a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a0a0ULL || rel >= 0x102a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a0b0 size=16 callers=0 calls=0
*/
void sub_102a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a0b0ULL || rel >= 0x102a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a0c0 size=80 callers=0 calls=0
*/
void sub_102a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a0c0ULL || rel >= 0x102a110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a110 size=80 callers=0 calls=0
*/
void sub_102a110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a110ULL || rel >= 0x102a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a160 size=464 callers=1 calls=1
   calls: sub_102a330
*/
void sub_102a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a160ULL || rel >= 0x102a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a330 size=320 callers=18 calls=0
*/
void sub_102a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a330ULL || rel >= 0x102a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a470 size=432 callers=2 calls=1
   calls: sub_102a620
*/
void sub_102a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a470ULL || rel >= 0x102a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a620 size=272 callers=2 calls=3
   calls: sub_102a330, sub_5cf8c0, sub_65d700
*/
void sub_102a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a620ULL || rel >= 0x102a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a730 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a730ULL || rel >= 0x102a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a7d0 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a7d0ULL || rel >= 0x102a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a870 size=32 callers=0 calls=0
*/
void sub_102a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a870ULL || rel >= 0x102a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a890 size=80 callers=0 calls=0
*/
void sub_102a890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a890ULL || rel >= 0x102a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a8e0 size=80 callers=0 calls=0
*/
void sub_102a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a8e0ULL || rel >= 0x102a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a930 size=48 callers=0 calls=0
*/
void sub_102a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a930ULL || rel >= 0x102a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a960 size=112 callers=0 calls=1
   calls: sub_102b0b0
*/
void sub_102a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a960ULL || rel >= 0x102a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102a9d0 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102a9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a9d0ULL || rel >= 0x102aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102aa70 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102aa70ULL || rel >= 0x102ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ab10 size=80 callers=0 calls=0
*/
void sub_102ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ab10ULL || rel >= 0x102ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ab60 size=64 callers=0 calls=0
*/
void sub_102ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ab60ULL || rel >= 0x102aba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102aba0 size=32 callers=0 calls=0
*/
void sub_102aba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102aba0ULL || rel >= 0x102abc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102abc0 size=112 callers=0 calls=1
   calls: sub_102b0b0
*/
void sub_102abc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102abc0ULL || rel >= 0x102ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ac30 size=16 callers=0 calls=0
*/
void sub_102ac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ac30ULL || rel >= 0x102ac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ac40 size=240 callers=0 calls=1
   calls: sub_5cf8f0
*/
void sub_102ac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ac40ULL || rel >= 0x102ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ad30 size=144 callers=0 calls=0
*/
void sub_102ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ad30ULL || rel >= 0x102adc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102adc0 size=112 callers=0 calls=1
   calls: sub_102b0b0
*/
void sub_102adc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102adc0ULL || rel >= 0x102ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ae30 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ae30ULL || rel >= 0x102aed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102aed0 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102aed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102aed0ULL || rel >= 0x102af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102af70 size=80 callers=0 calls=0
*/
void sub_102af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102af70ULL || rel >= 0x102afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102afc0 size=16 callers=0 calls=0
*/
void sub_102afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102afc0ULL || rel >= 0x102afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102afd0 size=80 callers=0 calls=0
*/
void sub_102afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102afd0ULL || rel >= 0x102b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b020 size=16 callers=0 calls=0
*/
void sub_102b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b020ULL || rel >= 0x102b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b030 size=16 callers=0 calls=0
*/
void sub_102b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b030ULL || rel >= 0x102b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b040 size=16 callers=0 calls=0
*/
void sub_102b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b040ULL || rel >= 0x102b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b050 size=80 callers=0 calls=0
*/
void sub_102b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b050ULL || rel >= 0x102b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b0a0 size=16 callers=0 calls=0
*/
void sub_102b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b0a0ULL || rel >= 0x102b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b0b0 size=240 callers=4 calls=0
*/
void sub_102b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b0b0ULL || rel >= 0x102b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b1a0 size=432 callers=1 calls=1
   calls: sub_102b350
*/
void sub_102b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b1a0ULL || rel >= 0x102b350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b350 size=272 callers=2 calls=3
   calls: sub_102a330, sub_5cf8c0, sub_65d700
*/
void sub_102b350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b350ULL || rel >= 0x102b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b460 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102b460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b460ULL || rel >= 0x102b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b500 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b500ULL || rel >= 0x102b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b5a0 size=32 callers=0 calls=0
*/
void sub_102b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b5a0ULL || rel >= 0x102b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b5c0 size=80 callers=0 calls=0
*/
void sub_102b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b5c0ULL || rel >= 0x102b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b610 size=80 callers=0 calls=0
*/
void sub_102b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b610ULL || rel >= 0x102b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b660 size=48 callers=0 calls=0
*/
void sub_102b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b660ULL || rel >= 0x102b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b690 size=112 callers=0 calls=1
   calls: sub_102bda0
*/
void sub_102b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b690ULL || rel >= 0x102b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b700 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b700ULL || rel >= 0x102b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b7a0 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102b7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b7a0ULL || rel >= 0x102b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b840 size=80 callers=0 calls=0
*/
void sub_102b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b840ULL || rel >= 0x102b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b890 size=64 callers=0 calls=0
*/
void sub_102b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b890ULL || rel >= 0x102b8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b8d0 size=32 callers=0 calls=0
*/
void sub_102b8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b8d0ULL || rel >= 0x102b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b8f0 size=112 callers=0 calls=1
   calls: sub_102bda0
*/
void sub_102b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b8f0ULL || rel >= 0x102b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b960 size=16 callers=0 calls=0
*/
void sub_102b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b960ULL || rel >= 0x102b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102b970 size=240 callers=0 calls=1
   calls: sub_5cf8f0
*/
void sub_102b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102b970ULL || rel >= 0x102ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ba60 size=80 callers=0 calls=0
*/
void sub_102ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ba60ULL || rel >= 0x102bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102bab0 size=112 callers=0 calls=1
   calls: sub_102bda0
*/
void sub_102bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102bab0ULL || rel >= 0x102bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102bb20 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102bb20ULL || rel >= 0x102bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102bbc0 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102bbc0ULL || rel >= 0x102bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102bc60 size=80 callers=0 calls=0
*/
void sub_102bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102bc60ULL || rel >= 0x102bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102bcb0 size=16 callers=0 calls=0
*/
void sub_102bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102bcb0ULL || rel >= 0x102bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102bcc0 size=80 callers=0 calls=0
*/
void sub_102bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102bcc0ULL || rel >= 0x102bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102bd10 size=16 callers=0 calls=0
*/
void sub_102bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102bd10ULL || rel >= 0x102bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102bd20 size=16 callers=0 calls=0
*/
void sub_102bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102bd20ULL || rel >= 0x102bd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102bd30 size=16 callers=0 calls=0
*/
void sub_102bd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102bd30ULL || rel >= 0x102bd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102bd40 size=80 callers=0 calls=0
*/
void sub_102bd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102bd40ULL || rel >= 0x102bd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102bd90 size=16 callers=0 calls=0
*/
void sub_102bd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102bd90ULL || rel >= 0x102bda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102bda0 size=240 callers=3 calls=0
*/
void sub_102bda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102bda0ULL || rel >= 0x102be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102be90 size=224 callers=1 calls=1
   calls: sub_10431f0
*/
void sub_102be90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102be90ULL || rel >= 0x102bf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102bf70 size=448 callers=1 calls=0
*/
void sub_102bf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102bf70ULL || rel >= 0x102c130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c130 size=448 callers=1 calls=0
*/
void sub_102c130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c130ULL || rel >= 0x102c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c2f0 size=304 callers=0 calls=3
   calls: sub_1048a80, sub_1048de0, sub_76f6c0
*/
void sub_102c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c2f0ULL || rel >= 0x102c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c420 size=16 callers=0 calls=0
*/
void sub_102c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c420ULL || rel >= 0x102c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c430 size=16 callers=0 calls=0
*/
void sub_102c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c430ULL || rel >= 0x102c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c440 size=16 callers=0 calls=0
*/
void sub_102c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c440ULL || rel >= 0x102c450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c450 size=32 callers=0 calls=0
*/
void sub_102c450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c450ULL || rel >= 0x102c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c470 size=16 callers=0 calls=0
*/
void sub_102c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c470ULL || rel >= 0x102c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c480 size=16 callers=0 calls=0
*/
void sub_102c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c480ULL || rel >= 0x102c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c490 size=16 callers=0 calls=0
*/
void sub_102c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c490ULL || rel >= 0x102c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c4a0 size=16 callers=0 calls=0
*/
void sub_102c4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c4a0ULL || rel >= 0x102c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c4b0 size=16 callers=0 calls=0
*/
void sub_102c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c4b0ULL || rel >= 0x102c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c4c0 size=16 callers=0 calls=0
*/
void sub_102c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c4c0ULL || rel >= 0x102c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c4d0 size=16 callers=0 calls=0
*/
void sub_102c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c4d0ULL || rel >= 0x102c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c4e0 size=32 callers=0 calls=0
*/
void sub_102c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c4e0ULL || rel >= 0x102c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c500 size=16 callers=0 calls=0
*/
void sub_102c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c500ULL || rel >= 0x102c510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c510 size=16 callers=0 calls=0
*/
void sub_102c510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c510ULL || rel >= 0x102c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c520 size=16 callers=0 calls=0
*/
void sub_102c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c520ULL || rel >= 0x102c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c530 size=128 callers=0 calls=0
*/
void sub_102c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c530ULL || rel >= 0x102c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c5b0 size=736 callers=2 calls=1
   calls: sub_102a330
*/
void sub_102c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c5b0ULL || rel >= 0x102c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102c890 size=1200 callers=1 calls=13
   calls: sub_102cd40, sub_102e890, sub_102e970, sub_102f8a0, sub_102fff0, sub_1030020, sub_1037f60, sub_1038350, sub_103da00, sub_11045f0, sub_11046d0, sub_76f550
   ... +1 more
*/
void sub_102c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102c890ULL || rel >= 0x102cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102cd40 size=352 callers=1 calls=3
   calls: sub_102f6a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_102cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102cd40ULL || rel >= 0x102cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102cea0 size=16 callers=1 calls=0
*/
void sub_102cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102cea0ULL || rel >= 0x102ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ceb0 size=32 callers=1 calls=0
*/
void sub_102ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ceb0ULL || rel >= 0x102ced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ced0 size=512 callers=1 calls=7
   calls: sub_102e890, sub_1030980, sub_10380c0, sub_11045f0, sub_11046d0, sub_5cf8e0, sub_5cf8f0
*/
void sub_102ced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ced0ULL || rel >= 0x102d0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102d0d0 size=240 callers=0 calls=1
   calls: sub_5cf8f0
*/
void sub_102d0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102d0d0ULL || rel >= 0x102d1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102d1c0 size=2016 callers=2 calls=13
   calls: RequestPokemonValidation, sub_1030be0, sub_10314c0, sub_1037f50, sub_1038a50, sub_1038ac0, sub_1038d20, sub_103e1d0, sub_103e2a0, sub_103e480, sub_104bf60, sub_105c390
   ... +1 more
*/
void sub_102d1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102d1c0ULL || rel >= 0x102d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102d9a0 size=16 callers=1 calls=0
*/
void sub_102d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102d9a0ULL || rel >= 0x102d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102d9b0 size=144 callers=0 calls=0
*/
void sub_102d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102d9b0ULL || rel >= 0x102da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102da40 size=96 callers=1 calls=1
   calls: sub_10311e0
*/
void sub_102da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102da40ULL || rel >= 0x102daa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102daa0 size=16 callers=1 calls=0
*/
void sub_102daa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102daa0ULL || rel >= 0x102dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102dab0 size=16 callers=1 calls=0
*/
void sub_102dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102dab0ULL || rel >= 0x102dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102dac0 size=16 callers=1 calls=0
*/
void sub_102dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102dac0ULL || rel >= 0x102dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102dad0 size=16 callers=1 calls=0
*/
void sub_102dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102dad0ULL || rel >= 0x102dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102dae0 size=368 callers=1 calls=2
   calls: sub_1043850, sub_76f6c0
*/
void sub_102dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102dae0ULL || rel >= 0x102dc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102dc50 size=352 callers=1 calls=2
   calls: sub_1044260, sub_76f6c0
*/
void sub_102dc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102dc50ULL || rel >= 0x102ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ddb0 size=48 callers=1 calls=1
   calls: sub_103f690
*/
void sub_102ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ddb0ULL || rel >= 0x102dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102dde0 size=48 callers=1 calls=1
   calls: sub_103f6b0
*/
void sub_102dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102dde0ULL || rel >= 0x102de10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102de10 size=1120 callers=0 calls=3
   calls: sub_1048a80, sub_1048de0, sub_76f7e0
*/
void sub_102de10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102de10ULL || rel >= 0x102e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102e270 size=1072 callers=0 calls=6
   calls: sub_102e890, sub_102fda0, sub_1104070, sub_11045f0, sub_11046d0, sub_619770
*/
void sub_102e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102e270ULL || rel >= 0x102e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102e6a0 size=16 callers=0 calls=0
*/
void sub_102e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102e6a0ULL || rel >= 0x102e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102e6b0 size=240 callers=0 calls=0
*/
void sub_102e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102e6b0ULL || rel >= 0x102e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102e7a0 size=16 callers=0 calls=0
*/
void sub_102e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102e7a0ULL || rel >= 0x102e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102e7b0 size=16 callers=0 calls=0
*/
void sub_102e7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102e7b0ULL || rel >= 0x102e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102e7c0 size=16 callers=0 calls=0
*/
void sub_102e7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102e7c0ULL || rel >= 0x102e7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102e7d0 size=16 callers=0 calls=0
*/
void sub_102e7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102e7d0ULL || rel >= 0x102e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102e7e0 size=16 callers=0 calls=0
*/
void sub_102e7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102e7e0ULL || rel >= 0x102e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102e7f0 size=16 callers=0 calls=0
*/
void sub_102e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102e7f0ULL || rel >= 0x102e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102e800 size=80 callers=0 calls=0
*/
void sub_102e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102e800ULL || rel >= 0x102e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102e850 size=64 callers=0 calls=0
*/
void sub_102e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102e850ULL || rel >= 0x102e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102e890 size=224 callers=3 calls=0
*/
void sub_102e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102e890ULL || rel >= 0x102e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102e970 size=432 callers=1 calls=1
   calls: sub_102eb20
*/
void sub_102e970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102e970ULL || rel >= 0x102eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102eb20 size=272 callers=2 calls=3
   calls: sub_102a330, sub_5cf8c0, sub_65d700
*/
void sub_102eb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102eb20ULL || rel >= 0x102ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ec30 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ec30ULL || rel >= 0x102ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ecd0 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ecd0ULL || rel >= 0x102ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ed70 size=32 callers=0 calls=0
*/
void sub_102ed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ed70ULL || rel >= 0x102ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ed90 size=80 callers=0 calls=0
*/
void sub_102ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ed90ULL || rel >= 0x102ede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ede0 size=80 callers=0 calls=0
*/
void sub_102ede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ede0ULL || rel >= 0x102ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ee30 size=48 callers=0 calls=0
*/
void sub_102ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ee30ULL || rel >= 0x102ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ee60 size=112 callers=0 calls=1
   calls: sub_102f5b0
*/
void sub_102ee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ee60ULL || rel >= 0x102eed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102eed0 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102eed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102eed0ULL || rel >= 0x102ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ef70 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ef70ULL || rel >= 0x102f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f010 size=80 callers=0 calls=0
*/
void sub_102f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f010ULL || rel >= 0x102f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f060 size=64 callers=0 calls=0
*/
void sub_102f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f060ULL || rel >= 0x102f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f0a0 size=32 callers=0 calls=0
*/
void sub_102f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f0a0ULL || rel >= 0x102f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f0c0 size=112 callers=0 calls=1
   calls: sub_102f5b0
*/
void sub_102f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f0c0ULL || rel >= 0x102f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f130 size=16 callers=0 calls=0
*/
void sub_102f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f130ULL || rel >= 0x102f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f140 size=240 callers=0 calls=1
   calls: sub_5cf8f0
*/
void sub_102f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f140ULL || rel >= 0x102f230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f230 size=144 callers=0 calls=0
*/
void sub_102f230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f230ULL || rel >= 0x102f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f2c0 size=112 callers=0 calls=1
   calls: sub_102f5b0
*/
void sub_102f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f2c0ULL || rel >= 0x102f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f330 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f330ULL || rel >= 0x102f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f3d0 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_102f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f3d0ULL || rel >= 0x102f470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f470 size=80 callers=0 calls=0
*/
void sub_102f470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f470ULL || rel >= 0x102f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f4c0 size=16 callers=0 calls=0
*/
void sub_102f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f4c0ULL || rel >= 0x102f4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f4d0 size=80 callers=0 calls=0
*/
void sub_102f4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f4d0ULL || rel >= 0x102f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f520 size=16 callers=0 calls=0
*/
void sub_102f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f520ULL || rel >= 0x102f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f530 size=16 callers=0 calls=0
*/
void sub_102f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f530ULL || rel >= 0x102f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f540 size=16 callers=0 calls=0
*/
void sub_102f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f540ULL || rel >= 0x102f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f550 size=80 callers=0 calls=0
*/
void sub_102f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f550ULL || rel >= 0x102f5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f5a0 size=16 callers=0 calls=0
*/
void sub_102f5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f5a0ULL || rel >= 0x102f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f5b0 size=240 callers=3 calls=0
*/
void sub_102f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f5b0ULL || rel >= 0x102f6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f6a0 size=448 callers=1 calls=0
*/
void sub_102f6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f6a0ULL || rel >= 0x102f860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f860 size=16 callers=0 calls=0
*/
void sub_102f860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f860ULL || rel >= 0x102f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f870 size=16 callers=0 calls=0
*/
void sub_102f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f870ULL || rel >= 0x102f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f880 size=16 callers=0 calls=0
*/
void sub_102f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f880ULL || rel >= 0x102f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f890 size=16 callers=0 calls=0
*/
void sub_102f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f890ULL || rel >= 0x102f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f8a0 size=240 callers=1 calls=1
   calls: sub_1037c60
*/
void sub_102f8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f8a0ULL || rel >= 0x102f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102f990 size=304 callers=0 calls=3
   calls: sub_1048a80, sub_1048de0, sub_76f6c0
*/
void sub_102f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102f990ULL || rel >= 0x102fac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fac0 size=16 callers=0 calls=0
*/
void sub_102fac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fac0ULL || rel >= 0x102fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fad0 size=16 callers=0 calls=0
*/
void sub_102fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fad0ULL || rel >= 0x102fae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fae0 size=16 callers=0 calls=0
*/
void sub_102fae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fae0ULL || rel >= 0x102faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102faf0 size=32 callers=0 calls=0
*/
void sub_102faf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102faf0ULL || rel >= 0x102fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fb10 size=16 callers=0 calls=0
*/
void sub_102fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fb10ULL || rel >= 0x102fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fb20 size=16 callers=0 calls=0
*/
void sub_102fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fb20ULL || rel >= 0x102fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fb30 size=16 callers=0 calls=0
*/
void sub_102fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fb30ULL || rel >= 0x102fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fb40 size=96 callers=0 calls=0
*/
void sub_102fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fb40ULL || rel >= 0x102fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fba0 size=64 callers=0 calls=0
*/
void sub_102fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fba0ULL || rel >= 0x102fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fbe0 size=48 callers=0 calls=0
*/
void sub_102fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fbe0ULL || rel >= 0x102fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fc10 size=48 callers=0 calls=0
*/
void sub_102fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fc10ULL || rel >= 0x102fc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fc40 size=48 callers=0 calls=0
*/
void sub_102fc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fc40ULL || rel >= 0x102fc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fc70 size=64 callers=0 calls=0
*/
void sub_102fc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fc70ULL || rel >= 0x102fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fcb0 size=48 callers=0 calls=0
*/
void sub_102fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fcb0ULL || rel >= 0x102fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fce0 size=48 callers=0 calls=0
*/
void sub_102fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fce0ULL || rel >= 0x102fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fd10 size=16 callers=0 calls=0
*/
void sub_102fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fd10ULL || rel >= 0x102fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fd20 size=16 callers=0 calls=0
*/
void sub_102fd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fd20ULL || rel >= 0x102fd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fd30 size=16 callers=0 calls=0
*/
void sub_102fd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fd30ULL || rel >= 0x102fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fd40 size=16 callers=0 calls=0
*/
void sub_102fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fd40ULL || rel >= 0x102fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fd50 size=32 callers=0 calls=0
*/
void sub_102fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fd50ULL || rel >= 0x102fd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fd70 size=16 callers=0 calls=0
*/
void sub_102fd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fd70ULL || rel >= 0x102fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fd80 size=16 callers=0 calls=0
*/
void sub_102fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fd80ULL || rel >= 0x102fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fd90 size=16 callers=0 calls=0
*/
void sub_102fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fd90ULL || rel >= 0x102fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fda0 size=464 callers=1 calls=0
*/
void sub_102fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fda0ULL || rel >= 0x102ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102ff70 size=128 callers=0 calls=0
*/
void sub_102ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ff70ULL || rel >= 0x102fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0102fff0 size=48 callers=1 calls=0
*/
void sub_102fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102fff0ULL || rel >= 0x1030020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01030020 size=896 callers=1 calls=8
   calls: sub_10303a0, sub_1030690, sub_1031b00, sub_1032c70, sub_10332c0, sub_1034100, sub_1061830, sub_6d7610
*/
void sub_1030020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1030020ULL || rel >= 0x10303a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010303a0 size=752 callers=1 calls=9
   calls: sub_1033920, sub_1033f90, sub_6be8b0, sub_6bee70, sub_6d0a20, sub_6d1530, sub_6d1540, sub_6d7840, sub_6d7aa0
*/
void sub_10303a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10303a0ULL || rel >= 0x1030690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01030690 size=352 callers=1 calls=3
   calls: sub_1034e00, sub_5cf8e0, sub_5cf8f0
*/
void sub_1030690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1030690ULL || rel >= 0x10307f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010307f0 size=16 callers=0 calls=0
*/
void sub_10307f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10307f0ULL || rel >= 0x1030800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01030800 size=320 callers=0 calls=4
   calls: sub_1032920, sub_6d1530, sub_6d7910, sub_89a0f0
*/
void sub_1030800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1030800ULL || rel >= 0x1030940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01030940 size=64 callers=0 calls=1
   calls: sub_6d1070
*/
void sub_1030940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1030940ULL || rel >= 0x1030980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01030980 size=368 callers=1 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_1030980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1030980ULL || rel >= 0x1030af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01030af0 size=240 callers=0 calls=1
   calls: sub_5cf8f0
*/
void sub_1030af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1030af0ULL || rel >= 0x1030be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01030be0 size=64 callers=1 calls=1
   calls: sub_1030c20
*/
void sub_1030be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1030be0ULL || rel >= 0x1030c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01030c20 size=1120 callers=1 calls=16
   calls: sub_1034fc0, sub_1035100, sub_1035390, sub_172bd80, sub_6cf5a0, sub_6cf8f0, sub_6cfbd0, sub_6d1070, sub_6d12e0, sub_6d13b0, sub_6d1450, sub_6d1490
   ... +4 more
*/
void sub_1030c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1030c20ULL || rel >= 0x1031080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031080 size=352 callers=0 calls=4
   calls: sub_1031530, sub_1036690, sub_65da00, sub_65daf0
*/
void sub_1031080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031080ULL || rel >= 0x10311e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010311e0 size=416 callers=1 calls=8
   calls: sub_1031380, sub_1035a50, sub_65da00, sub_65daf0, sub_6f6640, sub_76f7d0, sub_c70, sub_ce0
*/
void sub_10311e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10311e0ULL || rel >= 0x1031380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031380 size=288 callers=1 calls=5
   calls: sub_1035100, sub_1035480, sub_65da00, sub_65daf0, sub_6d7ab0
*/
void sub_1031380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031380ULL || rel >= 0x10314a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010314a0 size=16 callers=0 calls=0
*/
void sub_10314a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10314a0ULL || rel >= 0x10314b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010314b0 size=16 callers=0 calls=0
*/
void sub_10314b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10314b0ULL || rel >= 0x10314c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010314c0 size=16 callers=1 calls=0
*/
void sub_10314c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10314c0ULL || rel >= 0x10314d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010314d0 size=16 callers=0 calls=0
*/
void sub_10314d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10314d0ULL || rel >= 0x10314e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010314e0 size=16 callers=0 calls=0
*/
void sub_10314e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10314e0ULL || rel >= 0x10314f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010314f0 size=16 callers=0 calls=0
*/
void sub_10314f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10314f0ULL || rel >= 0x1031500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031500 size=16 callers=0 calls=0
*/
void sub_1031500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031500ULL || rel >= 0x1031510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031510 size=16 callers=0 calls=0
*/
void sub_1031510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031510ULL || rel >= 0x1031520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031520 size=16 callers=0 calls=0
*/
void sub_1031520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031520ULL || rel >= 0x1031530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031530 size=288 callers=1 calls=5
   calls: sub_1035100, sub_10355b0, sub_65da00, sub_65daf0, sub_6d7ab0
*/
void sub_1031530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031530ULL || rel >= 0x1031650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031650 size=32 callers=0 calls=0
*/
void sub_1031650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031650ULL || rel >= 0x1031670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031670 size=32 callers=0 calls=0
*/
void sub_1031670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031670ULL || rel >= 0x1031690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031690 size=160 callers=0 calls=0
*/
void sub_1031690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031690ULL || rel >= 0x1031730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031730 size=96 callers=0 calls=0
*/
void sub_1031730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031730ULL || rel >= 0x1031790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031790 size=416 callers=0 calls=0
*/
void sub_1031790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031790ULL || rel >= 0x1031930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031930 size=192 callers=0 calls=0
*/
void sub_1031930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031930ULL || rel >= 0x10319f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010319f0 size=192 callers=0 calls=0
*/
void sub_10319f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10319f0ULL || rel >= 0x1031ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031ab0 size=16 callers=0 calls=0
*/
void sub_1031ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031ab0ULL || rel >= 0x1031ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031ac0 size=16 callers=0 calls=0
*/
void sub_1031ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031ac0ULL || rel >= 0x1031ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031ad0 size=16 callers=0 calls=0
*/
void sub_1031ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031ad0ULL || rel >= 0x1031ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031ae0 size=16 callers=0 calls=0
*/
void sub_1031ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031ae0ULL || rel >= 0x1031af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031af0 size=16 callers=0 calls=0
*/
void sub_1031af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031af0ULL || rel >= 0x1031b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031b00 size=608 callers=1 calls=4
   calls: sub_102a330, sub_6d04c0, sub_6d70e0, sub_899e80
*/
void sub_1031b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031b00ULL || rel >= 0x1031d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031d60 size=496 callers=0 calls=3
   calls: sub_1032920, sub_6d0670, sub_89a0f0
*/
void sub_1031d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031d60ULL || rel >= 0x1031f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031f50 size=16 callers=0 calls=0
*/
void sub_1031f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031f50ULL || rel >= 0x1031f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01031f60 size=240 callers=0 calls=0
*/
void sub_1031f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1031f60ULL || rel >= 0x1032050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032050 size=32 callers=0 calls=0
*/
void sub_1032050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032050ULL || rel >= 0x1032070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032070 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_1032070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032070ULL || rel >= 0x10320d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010320d0 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_10320d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10320d0ULL || rel >= 0x1032160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032160 size=368 callers=0 calls=2
   calls: sub_6ae9d0, sub_89a310
*/
void sub_1032160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032160ULL || rel >= 0x10322d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010322d0 size=384 callers=0 calls=3
   calls: sub_6ae9d0, sub_6d7e60, sub_89a310
*/
void sub_10322d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10322d0ULL || rel >= 0x1032450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032450 size=464 callers=0 calls=4
   calls: sub_6ae9d0, sub_6d7aa0, sub_6d7e60, sub_89a310
*/
void sub_1032450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032450ULL || rel >= 0x1032620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032620 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_1032620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032620ULL || rel >= 0x10326d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010326d0 size=16 callers=0 calls=0
*/
void sub_10326d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10326d0ULL || rel >= 0x10326e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010326e0 size=16 callers=0 calls=0
*/
void sub_10326e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10326e0ULL || rel >= 0x10326f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010326f0 size=16 callers=0 calls=0
*/
void sub_10326f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10326f0ULL || rel >= 0x1032700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032700 size=16 callers=0 calls=0
*/
void sub_1032700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032700ULL || rel >= 0x1032710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032710 size=16 callers=0 calls=0
*/
void sub_1032710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032710ULL || rel >= 0x1032720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032720 size=16 callers=0 calls=0
*/
void sub_1032720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032720ULL || rel >= 0x1032730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032730 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_1032730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032730ULL || rel >= 0x1032790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032790 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_1032790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032790ULL || rel >= 0x1032820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032820 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_1032820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032820ULL || rel >= 0x10328d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010328d0 size=16 callers=0 calls=0
*/
void sub_10328d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10328d0ULL || rel >= 0x10328e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010328e0 size=16 callers=0 calls=0
*/
void sub_10328e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10328e0ULL || rel >= 0x10328f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010328f0 size=16 callers=0 calls=0
*/
void sub_10328f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10328f0ULL || rel >= 0x1032900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032900 size=32 callers=0 calls=0
*/
void sub_1032900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032900ULL || rel >= 0x1032920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032920 size=208 callers=3 calls=2
   calls: sub_65da00, sub_65daf0
*/
void sub_1032920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032920ULL || rel >= 0x10329f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010329f0 size=80 callers=0 calls=1
   calls: sub_6d12e0
*/
void sub_10329f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10329f0ULL || rel >= 0x1032a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032a40 size=16 callers=0 calls=0
*/
void sub_1032a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032a40ULL || rel >= 0x1032a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032a50 size=16 callers=0 calls=0
*/
void sub_1032a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032a50ULL || rel >= 0x1032a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032a60 size=16 callers=0 calls=0
*/
void sub_1032a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032a60ULL || rel >= 0x1032a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032a70 size=128 callers=0 calls=4
   calls: sub_6d7ac0, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_1032a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032a70ULL || rel >= 0x1032af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032af0 size=16 callers=0 calls=0
*/
void sub_1032af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032af0ULL || rel >= 0x1032b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032b00 size=32 callers=0 calls=0
*/
void sub_1032b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032b00ULL || rel >= 0x1032b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032b20 size=32 callers=0 calls=0
*/
void sub_1032b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032b20ULL || rel >= 0x1032b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032b40 size=224 callers=0 calls=5
   calls: sub_6d7aa0, sub_6d7d80, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_1032b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032b40ULL || rel >= 0x1032c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032c20 size=16 callers=0 calls=0
*/
void sub_1032c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032c20ULL || rel >= 0x1032c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032c30 size=32 callers=0 calls=0
*/
void sub_1032c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032c30ULL || rel >= 0x1032c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032c50 size=32 callers=0 calls=0
*/
void sub_1032c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032c50ULL || rel >= 0x1032c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032c70 size=352 callers=2 calls=2
   calls: sub_1032dd0, sub_89b480
*/
void sub_1032c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032c70ULL || rel >= 0x1032dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032dd0 size=416 callers=1 calls=1
   calls: sub_102a330
*/
void sub_1032dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032dd0ULL || rel >= 0x1032f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032f70 size=80 callers=0 calls=0
*/
void sub_1032f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032f70ULL || rel >= 0x1032fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01032fc0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_1032fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1032fc0ULL || rel >= 0x1033030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033030 size=16 callers=0 calls=0
*/
void sub_1033030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033030ULL || rel >= 0x1033040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033040 size=64 callers=0 calls=0
*/
void sub_1033040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033040ULL || rel >= 0x1033080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033080 size=32 callers=0 calls=0
*/
void sub_1033080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033080ULL || rel >= 0x10330a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010330a0 size=80 callers=0 calls=0
*/
void sub_10330a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10330a0ULL || rel >= 0x10330f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010330f0 size=80 callers=0 calls=0
*/
void sub_10330f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10330f0ULL || rel >= 0x1033140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033140 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_1033140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033140ULL || rel >= 0x10331b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010331b0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_10331b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10331b0ULL || rel >= 0x1033220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033220 size=80 callers=0 calls=0
*/
void sub_1033220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033220ULL || rel >= 0x1033270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033270 size=80 callers=0 calls=0
*/
void sub_1033270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033270ULL || rel >= 0x10332c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010332c0 size=352 callers=2 calls=2
   calls: sub_1033420, sub_89b480
*/
void sub_10332c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10332c0ULL || rel >= 0x1033420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033420 size=416 callers=1 calls=1
   calls: sub_102a330
*/
void sub_1033420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033420ULL || rel >= 0x10335c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010335c0 size=80 callers=0 calls=0
*/
void sub_10335c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10335c0ULL || rel >= 0x1033610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033610 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_1033610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033610ULL || rel >= 0x1033680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033680 size=16 callers=0 calls=0
*/
void sub_1033680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033680ULL || rel >= 0x1033690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033690 size=48 callers=0 calls=0
*/
void sub_1033690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033690ULL || rel >= 0x10336c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010336c0 size=64 callers=0 calls=0
*/
void sub_10336c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10336c0ULL || rel >= 0x1033700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033700 size=80 callers=0 calls=0
*/
void sub_1033700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033700ULL || rel >= 0x1033750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033750 size=80 callers=0 calls=0
*/
void sub_1033750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033750ULL || rel >= 0x10337a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010337a0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_10337a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10337a0ULL || rel >= 0x1033810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033810 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_1033810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033810ULL || rel >= 0x1033880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033880 size=80 callers=0 calls=0
*/
void sub_1033880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033880ULL || rel >= 0x10338d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010338d0 size=80 callers=0 calls=0
*/
void sub_10338d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10338d0ULL || rel >= 0x1033920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033920 size=368 callers=2 calls=1
   calls: sub_102a330
*/
void sub_1033920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033920ULL || rel >= 0x1033a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033a90 size=160 callers=0 calls=0
*/
void sub_1033a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033a90ULL || rel >= 0x1033b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033b30 size=480 callers=0 calls=6
   calls: gflnet3_message_lite_2, network_box_sync_state_5, sub_1035ca0, sub_10371e0, sub_65da00, sub_65daf0
*/
void sub_1033b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033b30ULL || rel >= 0x1033d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033d10 size=160 callers=0 calls=0
*/
void sub_1033d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033d10ULL || rel >= 0x1033db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033db0 size=160 callers=0 calls=0
*/
void sub_1033db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033db0ULL || rel >= 0x1033e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033e50 size=160 callers=0 calls=0
*/
void sub_1033e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033e50ULL || rel >= 0x1033ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033ef0 size=160 callers=0 calls=0
*/
void sub_1033ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033ef0ULL || rel >= 0x1033f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01033f90 size=368 callers=3 calls=1
   calls: sub_102a330
*/
void sub_1033f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1033f90ULL || rel >= 0x1034100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034100 size=432 callers=1 calls=1
   calls: sub_10342b0
*/
void sub_1034100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034100ULL || rel >= 0x10342b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010342b0 size=272 callers=2 calls=3
   calls: sub_102a330, sub_5cf8c0, sub_65d700
*/
void sub_10342b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10342b0ULL || rel >= 0x10343c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010343c0 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_10343c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10343c0ULL || rel >= 0x1034460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034460 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_1034460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034460ULL || rel >= 0x1034500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034500 size=32 callers=0 calls=0
*/
void sub_1034500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034500ULL || rel >= 0x1034520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034520 size=80 callers=0 calls=0
*/
void sub_1034520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034520ULL || rel >= 0x1034570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034570 size=80 callers=0 calls=0
*/
void sub_1034570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034570ULL || rel >= 0x10345c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010345c0 size=48 callers=0 calls=0
*/
void sub_10345c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10345c0ULL || rel >= 0x10345f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010345f0 size=112 callers=0 calls=1
   calls: sub_1034d10
*/
void sub_10345f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10345f0ULL || rel >= 0x1034660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034660 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_1034660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034660ULL || rel >= 0x1034700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034700 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_1034700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034700ULL || rel >= 0x10347a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010347a0 size=80 callers=0 calls=0
*/
void sub_10347a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10347a0ULL || rel >= 0x10347f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010347f0 size=64 callers=0 calls=0
*/
void sub_10347f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10347f0ULL || rel >= 0x1034830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034830 size=32 callers=0 calls=0
*/
void sub_1034830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034830ULL || rel >= 0x1034850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034850 size=112 callers=0 calls=1
   calls: sub_1034d10
*/
void sub_1034850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034850ULL || rel >= 0x10348c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010348c0 size=16 callers=0 calls=0
*/
void sub_10348c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10348c0ULL || rel >= 0x10348d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010348d0 size=240 callers=0 calls=1
   calls: sub_5cf8f0
*/
void sub_10348d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10348d0ULL || rel >= 0x10349c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010349c0 size=96 callers=0 calls=0
*/
void sub_10349c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10349c0ULL || rel >= 0x1034a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034a20 size=112 callers=0 calls=1
   calls: sub_1034d10
*/
void sub_1034a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034a20ULL || rel >= 0x1034a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034a90 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_1034a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034a90ULL || rel >= 0x1034b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034b30 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_1034b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034b30ULL || rel >= 0x1034bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034bd0 size=80 callers=0 calls=0
*/
void sub_1034bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034bd0ULL || rel >= 0x1034c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034c20 size=16 callers=0 calls=0
*/
void sub_1034c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034c20ULL || rel >= 0x1034c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034c30 size=80 callers=0 calls=0
*/
void sub_1034c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034c30ULL || rel >= 0x1034c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034c80 size=16 callers=0 calls=0
*/
void sub_1034c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034c80ULL || rel >= 0x1034c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034c90 size=16 callers=0 calls=0
*/
void sub_1034c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034c90ULL || rel >= 0x1034ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034ca0 size=16 callers=0 calls=0
*/
void sub_1034ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034ca0ULL || rel >= 0x1034cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034cb0 size=80 callers=0 calls=0
*/
void sub_1034cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034cb0ULL || rel >= 0x1034d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034d00 size=16 callers=0 calls=0
*/
void sub_1034d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034d00ULL || rel >= 0x1034d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034d10 size=240 callers=3 calls=0
*/
void sub_1034d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034d10ULL || rel >= 0x1034e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034e00 size=448 callers=1 calls=0
*/
void sub_1034e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034e00ULL || rel >= 0x1034fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01034fc0 size=320 callers=1 calls=0
*/
void sub_1034fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1034fc0ULL || rel >= 0x1035100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035100 size=288 callers=4 calls=3
   calls: sub_1035220, sub_65da00, sub_65daf0
*/
void sub_1035100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035100ULL || rel >= 0x1035220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035220 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_1035220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035220ULL || rel >= 0x1035390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035390 size=240 callers=3 calls=3
   calls: sub_1032920, sub_6d7d80, sub_89a0f0
*/
void sub_1035390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035390ULL || rel >= 0x1035480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035480 size=304 callers=1 calls=7
   calls: sub_1035a50, sub_10361a0, sub_10371e0, sub_1037480, sub_65da00, sub_65daf0, sub_c70
*/
void sub_1035480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035480ULL || rel >= 0x10355b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010355b0 size=304 callers=1 calls=7
   calls: sub_1036690, sub_1036cf0, sub_10371e0, sub_1037480, sub_65da00, sub_65daf0, sub_c70
*/
void sub_10355b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10355b0ULL || rel >= 0x10356e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010356e0 size=128 callers=0 calls=0
*/
void sub_10356e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10356e0ULL || rel >= 0x1035760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035760 size=256 callers=0 calls=9
   calls: network_box_send_pokemon_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: box_send_pokemon.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
   ref: CHECK failed: file != NULL: 
*/
void network_box_send_pokemon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035760ULL || rel >= 0x1035860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035860 size=272 callers=5 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: box_send_pokemon.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
*/
void network_box_send_pokemon_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035860ULL || rel >= 0x1035970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035970 size=80 callers=0 calls=0
*/
void sub_1035970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035970ULL || rel >= 0x10359c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010359c0 size=144 callers=0 calls=4
   calls: gflnet3_message_4, network_box_send_pokemon_2, sub_6fff50, sub_7007d0
*/
void sub_10359c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10359c0ULL || rel >= 0x1035a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035a50 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1035a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035a50ULL || rel >= 0x1035af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035af0 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
*/
void network_box_send_pokemon_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035af0ULL || rel >= 0x1035b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035b50 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1035b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035b50ULL || rel >= 0x1035bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035bf0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1035bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035bf0ULL || rel >= 0x1035c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035c90 size=16 callers=0 calls=0
*/
void sub_1035c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035c90ULL || rel >= 0x1035ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035ca0 size=64 callers=3 calls=1
   calls: network_box_send_pokemon_2
*/
void sub_1035ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035ca0ULL || rel >= 0x1035ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035ce0 size=192 callers=0 calls=4
   calls: sub_1035da0, sub_6fff50, sub_7007d0, sub_c70
*/
void sub_1035ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035ce0ULL || rel >= 0x1035da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035da0 size=32 callers=1 calls=0
*/
void sub_1035da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035da0ULL || rel >= 0x1035dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035dc0 size=64 callers=0 calls=0
*/
void sub_1035dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035dc0ULL || rel >= 0x1035e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035e00 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_1035e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035e00ULL || rel >= 0x1035f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035f30 size=48 callers=0 calls=0
*/
void sub_1035f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035f30ULL || rel >= 0x1035f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035f60 size=64 callers=0 calls=0
*/
void sub_1035f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035f60ULL || rel >= 0x1035fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01035fa0 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_1035fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1035fa0ULL || rel >= 0x1036040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036040 size=272 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_box_send_pokemon_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
*/
void network_box_send_pokemon_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036040ULL || rel >= 0x1036150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036150 size=80 callers=0 calls=0
*/
void sub_1036150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036150ULL || rel >= 0x10361a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010361a0 size=112 callers=1 calls=0
*/
void sub_10361a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10361a0ULL || rel >= 0x1036210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036210 size=16 callers=0 calls=0
*/
void sub_1036210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036210ULL || rel >= 0x1036220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036220 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1036220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036220ULL || rel >= 0x1036290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036290 size=16 callers=0 calls=0
*/
void sub_1036290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036290ULL || rel >= 0x10362a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010362a0 size=32 callers=0 calls=0
*/
void sub_10362a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10362a0ULL || rel >= 0x10362c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010362c0 size=16 callers=0 calls=0
*/
void sub_10362c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10362c0ULL || rel >= 0x10362d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010362d0 size=16 callers=0 calls=0
*/
void sub_10362d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10362d0ULL || rel >= 0x10362e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010362e0 size=16 callers=0 calls=0
*/
void sub_10362e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10362e0ULL || rel >= 0x10362f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010362f0 size=400 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
   ref: box_sync_state.proto
*/
void network_box_sync_state(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10362f0ULL || rel >= 0x1036480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036480 size=160 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
   ref: box_sync_state.proto
*/
void network_box_sync_state_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036480ULL || rel >= 0x1036520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036520 size=80 callers=0 calls=0
*/
void sub_1036520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036520ULL || rel >= 0x1036570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036570 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
   ref: box_sync_state.proto
*/
void network_box_sync_state_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036570ULL || rel >= 0x1036690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036690 size=32 callers=4 calls=0
*/
void sub_1036690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036690ULL || rel >= 0x10366b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010366b0 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
*/
void network_box_sync_state_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10366b0ULL || rel >= 0x10366e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010366e0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_10366e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10366e0ULL || rel >= 0x1036740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036740 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1036740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036740ULL || rel >= 0x10367a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010367a0 size=16 callers=0 calls=0
*/
void sub_10367a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10367a0ULL || rel >= 0x10367b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010367b0 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
   ref: box_sync_state.proto
*/
void network_box_sync_state_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10367b0ULL || rel >= 0x1036880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036880 size=96 callers=0 calls=2
   calls: sub_10368e0, sub_c70
*/
void sub_1036880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036880ULL || rel >= 0x10368e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010368e0 size=32 callers=1 calls=0
*/
void sub_10368e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10368e0ULL || rel >= 0x1036900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036900 size=16 callers=0 calls=0
*/
void sub_1036900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036900ULL || rel >= 0x1036910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036910 size=304 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_1036910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036910ULL || rel >= 0x1036a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036a40 size=32 callers=0 calls=0
*/
void sub_1036a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036a40ULL || rel >= 0x1036a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036a60 size=96 callers=0 calls=0
*/
void sub_1036a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036a60ULL || rel >= 0x1036ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036ac0 size=112 callers=1 calls=1
   calls: sub_70d000
*/
void sub_1036ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036ac0ULL || rel >= 0x1036b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036b30 size=368 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
   ref: box_sync_state.proto
*/
void network_box_sync_state_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036b30ULL || rel >= 0x1036ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036ca0 size=80 callers=0 calls=0
*/
void sub_1036ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036ca0ULL || rel >= 0x1036cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036cf0 size=64 callers=1 calls=0
*/
void sub_1036cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036cf0ULL || rel >= 0x1036d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036d30 size=16 callers=0 calls=0
*/
void sub_1036d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036d30ULL || rel >= 0x1036d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036d40 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1036d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036d40ULL || rel >= 0x1036db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036db0 size=16 callers=0 calls=0
*/
void sub_1036db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036db0ULL || rel >= 0x1036dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036dc0 size=32 callers=0 calls=0
*/
void sub_1036dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036dc0ULL || rel >= 0x1036de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036de0 size=16 callers=0 calls=0
*/
void sub_1036de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036de0ULL || rel >= 0x1036df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036df0 size=16 callers=0 calls=0
*/
void sub_1036df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036df0ULL || rel >= 0x1036e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036e00 size=160 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
   ref: box_sync_state.proto
*/
void network_box_sync_state_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036e00ULL || rel >= 0x1036ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01036ea0 size=352 callers=0 calls=10
   calls: network_box_sync_state_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
   ref: CHECK failed: file != NULL: 
   ref: box_sync_state_data_holder.proto
*/
void network_box_sync_state_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1036ea0ULL || rel >= 0x1037000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037000 size=240 callers=3 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, network_box_send_pokemon_2, network_box_sync_state_2, network_box_sync_state_5, sub_1035ca0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
   ref: box_sync_state_data_holder.proto
*/
void network_box_sync_state_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037000ULL || rel >= 0x10370f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010370f0 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_10370f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10370f0ULL || rel >= 0x1037150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037150 size=144 callers=0 calls=4
   calls: gflnet3_message_4, network_box_sync_state_data_holder_2, sub_6fff50, sub_7007d0
*/
void sub_1037150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037150ULL || rel >= 0x10371e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010371e0 size=32 callers=3 calls=0
*/
void sub_10371e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10371e0ULL || rel >= 0x1037200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037200 size=352 callers=0 calls=6
   calls: gflnet3_generated_message_util, network_box_sync_state_5, sub_1035a50, sub_1035ca0, sub_1036690, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
*/
void network_box_sync_state_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037200ULL || rel >= 0x1037360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037360 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1037360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037360ULL || rel >= 0x10373f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010373f0 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_10373f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10373f0ULL || rel >= 0x1037480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037480 size=80 callers=2 calls=0
*/
void sub_1037480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037480ULL || rel >= 0x10374d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010374d0 size=16 callers=0 calls=0
*/
void sub_10374d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10374d0ULL || rel >= 0x10374e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010374e0 size=96 callers=0 calls=2
   calls: sub_1037540, sub_c70
*/
void sub_10374e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10374e0ULL || rel >= 0x1037540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037540 size=32 callers=1 calls=0
*/
void sub_1037540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037540ULL || rel >= 0x1037560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037560 size=80 callers=0 calls=0
*/
void sub_1037560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037560ULL || rel >= 0x10375b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010375b0 size=736 callers=0 calls=10
   calls: sub_1035a50, sub_1035e00, sub_1036690, sub_1036910, sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_c70
*/
void sub_10375b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10375b0ULL || rel >= 0x1037890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037890 size=96 callers=0 calls=1
   calls: sub_714af0
*/
void sub_1037890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037890ULL || rel >= 0x10378f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010378f0 size=224 callers=0 calls=0
*/
void sub_10378f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10378f0ULL || rel >= 0x10379d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010379d0 size=144 callers=0 calls=3
   calls: sub_1035fa0, sub_1036ac0, sub_70d000
*/
void sub_10379d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10379d0ULL || rel >= 0x1037a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037a60 size=208 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_box_sync_state_data_holder_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_stat
*/
void network_box_sync_state_data_holder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037a60ULL || rel >= 0x1037b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037b30 size=80 callers=0 calls=0
*/
void sub_1037b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037b30ULL || rel >= 0x1037b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037b80 size=16 callers=0 calls=0
*/
void sub_1037b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037b80ULL || rel >= 0x1037b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037b90 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1037b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037b90ULL || rel >= 0x1037c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037c00 size=16 callers=0 calls=0
*/
void sub_1037c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037c00ULL || rel >= 0x1037c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037c10 size=32 callers=0 calls=0
*/
void sub_1037c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037c10ULL || rel >= 0x1037c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037c30 size=16 callers=0 calls=0
*/
void sub_1037c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037c30ULL || rel >= 0x1037c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037c40 size=16 callers=0 calls=0
*/
void sub_1037c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037c40ULL || rel >= 0x1037c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037c50 size=16 callers=0 calls=0
*/
void sub_1037c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037c50ULL || rel >= 0x1037c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037c60 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_1037c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037c60ULL || rel >= 0x1037cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037cd0 size=80 callers=0 calls=0
*/
void sub_1037cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037cd0ULL || rel >= 0x1037d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037d20 size=80 callers=0 calls=0
*/
void sub_1037d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037d20ULL || rel >= 0x1037d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037d70 size=80 callers=0 calls=0
*/
void sub_1037d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037d70ULL || rel >= 0x1037dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037dc0 size=80 callers=0 calls=0
*/
void sub_1037dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037dc0ULL || rel >= 0x1037e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037e10 size=80 callers=0 calls=0
*/
void sub_1037e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037e10ULL || rel >= 0x1037e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037e60 size=80 callers=0 calls=0
*/
void sub_1037e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037e60ULL || rel >= 0x1037eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037eb0 size=80 callers=0 calls=0
*/
void sub_1037eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037eb0ULL || rel >= 0x1037f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037f00 size=80 callers=0 calls=0
*/
void sub_1037f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037f00ULL || rel >= 0x1037f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037f50 size=16 callers=1 calls=0
*/
void sub_1037f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037f50ULL || rel >= 0x1037f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01037f60 size=352 callers=1 calls=2
   calls: sub_104dfb0, sub_6aea40
*/
void sub_1037f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1037f60ULL || rel >= 0x10380c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010380c0 size=208 callers=1 calls=2
   calls: sub_104dfd0, sub_6aeb70
*/
void sub_10380c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10380c0ULL || rel >= 0x1038190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01038190 size=16 callers=0 calls=0
*/
void sub_1038190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1038190ULL || rel >= 0x10381a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010381a0 size=16 callers=0 calls=0
*/
void sub_10381a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10381a0ULL || rel >= 0x10381b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010381b0 size=16 callers=0 calls=0
*/
void sub_10381b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10381b0ULL || rel >= 0x10381c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010381c0 size=240 callers=0 calls=0
*/
void sub_10381c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10381c0ULL || rel >= 0x10382b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010382b0 size=16 callers=0 calls=0
*/
void sub_10382b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10382b0ULL || rel >= 0x10382c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010382c0 size=16 callers=0 calls=0
*/
void sub_10382c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10382c0ULL || rel >= 0x10382d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010382d0 size=128 callers=0 calls=0
*/
void sub_10382d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10382d0ULL || rel >= 0x1038350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01038350 size=80 callers=2 calls=0
*/
void sub_1038350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1038350ULL || rel >= 0x10383a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010383a0 size=960 callers=1 calls=8
   calls: sub_102a470, sub_1038760, sub_1039e00, sub_103af70, sub_1061830, sub_5ecfa0, sub_6d7610, sub_76f550
*/
void sub_10383a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10383a0ULL || rel >= 0x1038760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01038760 size=752 callers=1 calls=10
   calls: sub_1033f90, sub_103b5d0, sub_103bc00, sub_6be8b0, sub_6bee70, sub_6d0a20, sub_6d1530, sub_6d1540, sub_6d7840, sub_6d7aa0
*/
void sub_1038760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1038760ULL || rel >= 0x1038a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01038a50 size=112 callers=2 calls=4
   calls: sub_1028ec0, sub_10383a0, sub_5ed5e0, sub_76f7d0
*/
void sub_1038a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1038a50ULL || rel >= 0x1038ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01038ac0 size=576 callers=2 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_1038ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1038ac0ULL || rel >= 0x1038d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01038d00 size=32 callers=1 calls=0
*/
void sub_1038d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1038d00ULL || rel >= 0x1038d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01038d20 size=400 callers=2 calls=3
   calls: sub_1038eb0, sub_1039310, sub_6d1070
*/
void sub_1038d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1038d20ULL || rel >= 0x1038eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01038eb0 size=1120 callers=1 calls=16
   calls: sub_103bd70, sub_103beb0, sub_103c140, sub_172bd80, sub_6cf5a0, sub_6cf8f0, sub_6cfbd0, sub_6d1070, sub_6d12e0, sub_6d13b0, sub_6d1450, sub_6d1490
   ... +4 more
*/
void sub_1038eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1038eb0ULL || rel >= 0x1039310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039310 size=320 callers=1 calls=4
   calls: sub_103ac20, sub_6d1530, sub_6d7910, sub_89a0f0
*/
void sub_1039310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039310ULL || rel >= 0x1039450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039450 size=448 callers=0 calls=4
   calls: sub_1039610, sub_6ae9d0, sub_6d7ac0, sub_89b390
*/
void sub_1039450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039450ULL || rel >= 0x1039610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039610 size=304 callers=2 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_1039610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039610ULL || rel >= 0x1039740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039740 size=736 callers=0 calls=11
   calls: sub_1039a20, sub_103c6d0, sub_172bdd0, sub_65da00, sub_65daf0, sub_6f6640, sub_762d50, sub_76f7e0, sub_89b390, sub_c70, sub_ce0
*/
void sub_1039740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039740ULL || rel >= 0x1039a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039a20 size=480 callers=1 calls=4
   calls: sub_103ac20, sub_103c230, sub_65da00, sub_65daf0
*/
void sub_1039a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039a20ULL || rel >= 0x1039c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039c00 size=16 callers=0 calls=0
*/
void sub_1039c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039c00ULL || rel >= 0x1039c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039c10 size=192 callers=0 calls=0
*/
void sub_1039c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039c10ULL || rel >= 0x1039cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039cd0 size=192 callers=0 calls=0
*/
void sub_1039cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039cd0ULL || rel >= 0x1039d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039d90 size=16 callers=0 calls=0
*/
void sub_1039d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039d90ULL || rel >= 0x1039da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039da0 size=16 callers=0 calls=0
*/
void sub_1039da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039da0ULL || rel >= 0x1039db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039db0 size=16 callers=0 calls=0
*/
void sub_1039db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039db0ULL || rel >= 0x1039dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039dc0 size=16 callers=0 calls=0
*/
void sub_1039dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039dc0ULL || rel >= 0x1039dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039dd0 size=16 callers=0 calls=0
*/
void sub_1039dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039dd0ULL || rel >= 0x1039de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039de0 size=16 callers=0 calls=0
*/
void sub_1039de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039de0ULL || rel >= 0x1039df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039df0 size=16 callers=0 calls=0
*/
void sub_1039df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039df0ULL || rel >= 0x1039e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01039e00 size=608 callers=1 calls=4
   calls: sub_102a330, sub_6d04c0, sub_6d70e0, sub_899e80
*/
void sub_1039e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1039e00ULL || rel >= 0x103a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103a060 size=496 callers=0 calls=3
   calls: sub_103ac20, sub_6d0670, sub_89a0f0
*/
void sub_103a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a060ULL || rel >= 0x103a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103a250 size=16 callers=0 calls=0
*/
void sub_103a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a250ULL || rel >= 0x103a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103a260 size=240 callers=0 calls=0
*/
void sub_103a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a260ULL || rel >= 0x103a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103a350 size=32 callers=0 calls=0
*/
void sub_103a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a350ULL || rel >= 0x103a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103a370 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_103a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a370ULL || rel >= 0x103a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103a3d0 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_103a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a3d0ULL || rel >= 0x103a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103a460 size=368 callers=0 calls=2
   calls: sub_6ae9d0, sub_89a310
*/
void sub_103a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a460ULL || rel >= 0x103a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103a5d0 size=384 callers=0 calls=3
   calls: sub_6ae9d0, sub_6d7e60, sub_89a310
*/
void sub_103a5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a5d0ULL || rel >= 0x103a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103a750 size=464 callers=0 calls=4
   calls: sub_6ae9d0, sub_6d7aa0, sub_6d7e60, sub_89a310
*/
void sub_103a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a750ULL || rel >= 0x103a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103a920 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_103a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a920ULL || rel >= 0x103a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103a9d0 size=16 callers=0 calls=0
*/
void sub_103a9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a9d0ULL || rel >= 0x103a9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103a9e0 size=16 callers=0 calls=0
*/
void sub_103a9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a9e0ULL || rel >= 0x103a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103a9f0 size=16 callers=0 calls=0
*/
void sub_103a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a9f0ULL || rel >= 0x103aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103aa00 size=16 callers=0 calls=0
*/
void sub_103aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103aa00ULL || rel >= 0x103aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103aa10 size=16 callers=0 calls=0
*/
void sub_103aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103aa10ULL || rel >= 0x103aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103aa20 size=16 callers=0 calls=0
*/
void sub_103aa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103aa20ULL || rel >= 0x103aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103aa30 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_103aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103aa30ULL || rel >= 0x103aa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103aa90 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_103aa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103aa90ULL || rel >= 0x103ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ab20 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_103ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ab20ULL || rel >= 0x103abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103abd0 size=16 callers=0 calls=0
*/
void sub_103abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103abd0ULL || rel >= 0x103abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103abe0 size=16 callers=0 calls=0
*/
void sub_103abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103abe0ULL || rel >= 0x103abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103abf0 size=16 callers=0 calls=0
*/
void sub_103abf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103abf0ULL || rel >= 0x103ac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ac00 size=32 callers=0 calls=0
*/
void sub_103ac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ac00ULL || rel >= 0x103ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ac20 size=208 callers=5 calls=2
   calls: sub_65da00, sub_65daf0
*/
void sub_103ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ac20ULL || rel >= 0x103acf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103acf0 size=80 callers=0 calls=1
   calls: sub_6d12e0
*/
void sub_103acf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103acf0ULL || rel >= 0x103ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ad40 size=16 callers=0 calls=0
*/
void sub_103ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ad40ULL || rel >= 0x103ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ad50 size=16 callers=0 calls=0
*/
void sub_103ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ad50ULL || rel >= 0x103ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ad60 size=16 callers=0 calls=0
*/
void sub_103ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ad60ULL || rel >= 0x103ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ad70 size=128 callers=0 calls=4
   calls: sub_6d7ac0, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_103ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ad70ULL || rel >= 0x103adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103adf0 size=16 callers=0 calls=0
*/
void sub_103adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103adf0ULL || rel >= 0x103ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ae00 size=32 callers=0 calls=0
*/
void sub_103ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ae00ULL || rel >= 0x103ae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ae20 size=32 callers=0 calls=0
*/
void sub_103ae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ae20ULL || rel >= 0x103ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103ae40 size=224 callers=0 calls=5
   calls: sub_6d7aa0, sub_6d7d80, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_103ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ae40ULL || rel >= 0x103af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0103af20 size=16 callers=0 calls=0
*/
void sub_103af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103af20ULL || rel >= 0x103af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

