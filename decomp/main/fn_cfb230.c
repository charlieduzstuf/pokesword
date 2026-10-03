/* main functions 00cfb230..00d13760 (103 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00cfb230 size=80 callers=0 calls=0
*/
void sub_cfb230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb230ULL || rel >= 0xcfb280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb280 size=80 callers=0 calls=0
*/
void sub_cfb280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb280ULL || rel >= 0xcfb2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb2d0 size=176 callers=0 calls=1
   calls: sub_cfac80
*/
void sub_cfb2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb2d0ULL || rel >= 0xcfb380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb380 size=176 callers=0 calls=1
   calls: sub_cfac80
*/
void sub_cfb380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb380ULL || rel >= 0xcfb430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb430 size=80 callers=0 calls=0
*/
void sub_cfb430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb430ULL || rel >= 0xcfb480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb480 size=80 callers=0 calls=0
*/
void sub_cfb480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb480ULL || rel >= 0xcfb4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfb4d0 size=2688 callers=1 calls=3
   calls: sub_612f70, sub_65cd70, sub_65d220
*/
void sub_cfb4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfb4d0ULL || rel >= 0xcfbf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfbf50 size=432 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_cfbf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfbf50ULL || rel >= 0xcfc100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc100 size=80 callers=0 calls=0
*/
void sub_cfc100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc100ULL || rel >= 0xcfc150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc150 size=176 callers=0 calls=1
   calls: sub_cfac80
*/
void sub_cfc150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc150ULL || rel >= 0xcfc200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc200 size=16 callers=0 calls=0
*/
void sub_cfc200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc200ULL || rel >= 0xcfc210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc210 size=32 callers=0 calls=0
*/
void sub_cfc210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc210ULL || rel >= 0xcfc230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc230 size=16 callers=0 calls=0
*/
void sub_cfc230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc230ULL || rel >= 0xcfc240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc240 size=16 callers=0 calls=0
*/
void sub_cfc240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc240ULL || rel >= 0xcfc250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc250 size=768 callers=0 calls=2
   calls: sub_65cd70, sub_65d220
*/
void sub_cfc250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc250ULL || rel >= 0xcfc550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc550 size=16 callers=0 calls=0
*/
void sub_cfc550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc550ULL || rel >= 0xcfc560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc560 size=16 callers=0 calls=0
*/
void sub_cfc560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc560ULL || rel >= 0xcfc570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc570 size=32 callers=0 calls=0
*/
void sub_cfc570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc570ULL || rel >= 0xcfc590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc590 size=16 callers=0 calls=0
*/
void sub_cfc590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc590ULL || rel >= 0xcfc5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc5a0 size=80 callers=0 calls=0
*/
void sub_cfc5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc5a0ULL || rel >= 0xcfc5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc5f0 size=80 callers=0 calls=0
*/
void sub_cfc5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc5f0ULL || rel >= 0xcfc640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc640 size=176 callers=0 calls=1
   calls: sub_cfac80
*/
void sub_cfc640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc640ULL || rel >= 0xcfc6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc6f0 size=176 callers=0 calls=1
   calls: sub_cfac80
*/
void sub_cfc6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc6f0ULL || rel >= 0xcfc7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc7a0 size=80 callers=0 calls=0
*/
void sub_cfc7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc7a0ULL || rel >= 0xcfc7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc7f0 size=80 callers=0 calls=0
*/
void sub_cfc7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc7f0ULL || rel >= 0xcfc840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc840 size=304 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_cfc840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc840ULL || rel >= 0xcfc970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfc970 size=144 callers=0 calls=0
*/
void sub_cfc970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc970ULL || rel >= 0xcfca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfca00 size=144 callers=0 calls=0
*/
void sub_cfca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfca00ULL || rel >= 0xcfca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfca90 size=112 callers=0 calls=1
   calls: sub_cfd050
*/
void sub_cfca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfca90ULL || rel >= 0xcfcb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfcb00 size=560 callers=0 calls=6
   calls: sub_5c6830, sub_5c6850, sub_5c68f0, sub_5c6930, sub_5c8dd0, sub_967240
*/
void sub_cfcb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfcb00ULL || rel >= 0xcfcd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfcd30 size=144 callers=0 calls=0
*/
void sub_cfcd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfcd30ULL || rel >= 0xcfcdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfcdc0 size=144 callers=0 calls=0
*/
void sub_cfcdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfcdc0ULL || rel >= 0xcfce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfce50 size=112 callers=0 calls=1
   calls: sub_cfd050
*/
void sub_cfce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfce50ULL || rel >= 0xcfcec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfcec0 size=112 callers=0 calls=1
   calls: sub_cfd050
*/
void sub_cfcec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfcec0ULL || rel >= 0xcfcf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfcf30 size=144 callers=0 calls=0
*/
void sub_cfcf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfcf30ULL || rel >= 0xcfcfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfcfc0 size=144 callers=0 calls=0
*/
void sub_cfcfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfcfc0ULL || rel >= 0xcfd050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfd050 size=240 callers=3 calls=0
*/
void sub_cfd050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfd050ULL || rel >= 0xcfd140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfd140 size=336 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_cfd140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfd140ULL || rel >= 0xcfd290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfd290 size=160 callers=0 calls=0
*/
void sub_cfd290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfd290ULL || rel >= 0xcfd330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfd330 size=160 callers=0 calls=0
*/
void sub_cfd330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfd330ULL || rel >= 0xcfd3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfd3d0 size=240 callers=0 calls=0
*/
void sub_cfd3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfd3d0ULL || rel >= 0xcfd4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfd4c0 size=160 callers=0 calls=0
*/
void sub_cfd4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfd4c0ULL || rel >= 0xcfd560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfd560 size=160 callers=0 calls=0
*/
void sub_cfd560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfd560ULL || rel >= 0xcfd600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfd600 size=16 callers=0 calls=0
*/
void sub_cfd600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfd600ULL || rel >= 0xcfd610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfd610 size=16 callers=0 calls=0
*/
void sub_cfd610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfd610ULL || rel >= 0xcfd620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfd620 size=160 callers=0 calls=0
*/
void sub_cfd620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfd620ULL || rel >= 0xcfd6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfd6c0 size=160 callers=0 calls=0
*/
void sub_cfd6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfd6c0ULL || rel >= 0xcfd760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfd760 size=1056 callers=1 calls=2
   calls: sub_59a260, sub_5e2350
   ref: Field/LeftFootIKPropagate
   ref: Field/RightFootIKPropagate
*/
void RightFootIKPropagate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfd760ULL || rel >= 0xcfdb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfdb80 size=208 callers=0 calls=0
*/
void sub_cfdb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfdb80ULL || rel >= 0xcfdc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfdc50 size=208 callers=0 calls=0
*/
void sub_cfdc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfdc50ULL || rel >= 0xcfdd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfdd20 size=240 callers=0 calls=0
*/
void sub_cfdd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfdd20ULL || rel >= 0xcfde10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfde10 size=208 callers=0 calls=0
*/
void sub_cfde10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfde10ULL || rel >= 0xcfdee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfdee0 size=208 callers=0 calls=0
*/
void sub_cfdee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfdee0ULL || rel >= 0xcfdfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfdfb0 size=16 callers=0 calls=0
*/
void sub_cfdfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfdfb0ULL || rel >= 0xcfdfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfdfc0 size=16 callers=0 calls=0
*/
void sub_cfdfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfdfc0ULL || rel >= 0xcfdfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfdfd0 size=208 callers=0 calls=0
*/
void sub_cfdfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfdfd0ULL || rel >= 0xcfe0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe0a0 size=208 callers=0 calls=0
*/
void sub_cfe0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe0a0ULL || rel >= 0xcfe170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe170 size=16 callers=0 calls=0
*/
void sub_cfe170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe170ULL || rel >= 0xcfe180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe180 size=16 callers=0 calls=0
*/
void sub_cfe180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe180ULL || rel >= 0xcfe190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe190 size=1024 callers=0 calls=5
   calls: sub_5a0150, sub_5a0250, sub_5a02d0, sub_5a03d0, sub_612ef0
   ref: Target
   ref: Factor
   ref: SrcBoneIndex
*/
void SrcBoneIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe190ULL || rel >= 0xcfe590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe590 size=16 callers=0 calls=0
*/
void sub_cfe590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe590ULL || rel >= 0xcfe5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe5a0 size=16 callers=0 calls=0
*/
void sub_cfe5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe5a0ULL || rel >= 0xcfe5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe5b0 size=16 callers=0 calls=0
*/
void sub_cfe5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe5b0ULL || rel >= 0xcfe5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe5c0 size=16 callers=0 calls=0
*/
void sub_cfe5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe5c0ULL || rel >= 0xcfe5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe5d0 size=400 callers=0 calls=3
   calls: sub_5a0150, sub_5a03d0, sub_612ef0
   ref: Target
*/
void Target_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe5d0ULL || rel >= 0xcfe760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe760 size=16 callers=0 calls=0
*/
void sub_cfe760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe760ULL || rel >= 0xcfe770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe770 size=16 callers=0 calls=0
*/
void sub_cfe770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe770ULL || rel >= 0xcfe780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe780 size=16 callers=0 calls=0
*/
void sub_cfe780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe780ULL || rel >= 0xcfe790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe790 size=16 callers=0 calls=0
*/
void sub_cfe790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe790ULL || rel >= 0xcfe7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe7a0 size=16 callers=0 calls=0
*/
void sub_cfe7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe7a0ULL || rel >= 0xcfe7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe7b0 size=16 callers=0 calls=0
*/
void sub_cfe7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe7b0ULL || rel >= 0xcfe7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe7c0 size=16 callers=0 calls=0
*/
void sub_cfe7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe7c0ULL || rel >= 0xcfe7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe7d0 size=16 callers=0 calls=0
*/
void sub_cfe7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe7d0ULL || rel >= 0xcfe7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe7e0 size=16 callers=0 calls=0
*/
void sub_cfe7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe7e0ULL || rel >= 0xcfe7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe7f0 size=16 callers=0 calls=0
*/
void sub_cfe7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe7f0ULL || rel >= 0xcfe800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe800 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_cfe800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe800ULL || rel >= 0xcfe850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe850 size=16 callers=0 calls=0
*/
void sub_cfe850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe850ULL || rel >= 0xcfe860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe860 size=16 callers=0 calls=0
*/
void sub_cfe860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe860ULL || rel >= 0xcfe870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe870 size=16 callers=0 calls=0
*/
void sub_cfe870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe870ULL || rel >= 0xcfe880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe880 size=352 callers=0 calls=1
   calls: sub_967240
*/
void sub_cfe880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe880ULL || rel >= 0xcfe9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfe9e0 size=80 callers=0 calls=0
*/
void sub_cfe9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe9e0ULL || rel >= 0xcfea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfea30 size=112 callers=0 calls=1
   calls: sub_cfedc0
*/
void sub_cfea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfea30ULL || rel >= 0xcfeaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfeaa0 size=80 callers=0 calls=0
*/
void sub_cfeaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfeaa0ULL || rel >= 0xcfeaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfeaf0 size=80 callers=0 calls=0
*/
void sub_cfeaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfeaf0ULL || rel >= 0xcfeb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfeb40 size=240 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_cfeb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfeb40ULL || rel >= 0xcfec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfec30 size=240 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_cfec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfec30ULL || rel >= 0xcfed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfed20 size=80 callers=0 calls=0
*/
void sub_cfed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfed20ULL || rel >= 0xcfed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfed70 size=80 callers=0 calls=0
*/
void sub_cfed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfed70ULL || rel >= 0xcfedc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfedc0 size=176 callers=2 calls=1
   calls: sub_c657d0
*/
void sub_cfedc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfedc0ULL || rel >= 0xcfee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfee70 size=112 callers=2 calls=1
   calls: sub_c8a350
*/
void sub_cfee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfee70ULL || rel >= 0xcfeee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfeee0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cfeee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfeee0ULL || rel >= 0xcfefc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfefc0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cfefc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfefc0ULL || rel >= 0xcff0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff0a0 size=112 callers=0 calls=1
   calls: sub_cff640
*/
void sub_cff0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff0a0ULL || rel >= 0xcff110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff110 size=16 callers=0 calls=0
*/
void sub_cff110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff110ULL || rel >= 0xcff120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff120 size=32 callers=0 calls=0
*/
void sub_cff120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff120ULL || rel >= 0xcff140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff140 size=32 callers=0 calls=0
*/
void sub_cff140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff140ULL || rel >= 0xcff160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff160 size=16 callers=0 calls=0
*/
void sub_cff160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff160ULL || rel >= 0xcff170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff170 size=32 callers=0 calls=0
*/
void sub_cff170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff170ULL || rel >= 0xcff190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff190 size=32 callers=0 calls=0
*/
void sub_cff190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff190ULL || rel >= 0xcff1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff1b0 size=16 callers=0 calls=0
*/
void sub_cff1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff1b0ULL || rel >= 0xcff1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff1c0 size=32 callers=0 calls=0
*/
void sub_cff1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff1c0ULL || rel >= 0xcff1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff1e0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cff1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff1e0ULL || rel >= 0xcff2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff2c0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cff2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff2c0ULL || rel >= 0xcff3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff3a0 size=112 callers=0 calls=1
   calls: sub_cff640
*/
void sub_cff3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff3a0ULL || rel >= 0xcff410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff410 size=112 callers=0 calls=1
   calls: sub_cff640
*/
void sub_cff410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff410ULL || rel >= 0xcff480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff480 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cff480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff480ULL || rel >= 0xcff560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff560 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cff560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff560ULL || rel >= 0xcff640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff640 size=304 callers=15 calls=1
   calls: sub_967240
*/
void sub_cff640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff640ULL || rel >= 0xcff770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff770 size=288 callers=1 calls=1
   calls: sub_c8b040
*/
void sub_cff770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff770ULL || rel >= 0xcff890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cff890 size=400 callers=0 calls=2
   calls: sub_5cbcf0, sub_c8b300
*/
void sub_cff890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcff890ULL || rel >= 0xcffa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cffa20 size=352 callers=0 calls=7
   calls: sub_13ed240, sub_5cbcf0, sub_c629e0, sub_cf4d60, sub_cf4e00, sub_cf4ea0, sub_cffd30
*/
void sub_cffa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcffa20ULL || rel >= 0xcffb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cffb80 size=16 callers=0 calls=0
*/
void sub_cffb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcffb80ULL || rel >= 0xcffb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cffb90 size=16 callers=0 calls=0
*/
void sub_cffb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcffb90ULL || rel >= 0xcffba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cffba0 size=16 callers=0 calls=0
*/
void sub_cffba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcffba0ULL || rel >= 0xcffbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cffbb0 size=16 callers=0 calls=0
*/
void sub_cffbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcffbb0ULL || rel >= 0xcffbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cffbc0 size=16 callers=0 calls=0
*/
void sub_cffbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcffbc0ULL || rel >= 0xcffbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cffbd0 size=16 callers=0 calls=0
*/
void sub_cffbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcffbd0ULL || rel >= 0xcffbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cffbe0 size=16 callers=0 calls=0
*/
void sub_cffbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcffbe0ULL || rel >= 0xcffbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cffbf0 size=16 callers=0 calls=0
*/
void sub_cffbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcffbf0ULL || rel >= 0xcffc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cffc00 size=304 callers=0 calls=1
   calls: sub_967240
*/
void sub_cffc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcffc00ULL || rel >= 0xcffd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cffd30 size=352 callers=6 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_cffe90
*/
void sub_cffd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcffd30ULL || rel >= 0xcffe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cffe90 size=304 callers=2 calls=0
*/
void sub_cffe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcffe90ULL || rel >= 0xcfffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cfffc0 size=128 callers=1 calls=1
   calls: sub_c8b810
*/
void sub_cfffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfffc0ULL || rel >= 0xd00040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00040 size=16 callers=0 calls=0
*/
void sub_d00040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00040ULL || rel >= 0xd00050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00050 size=16 callers=0 calls=0
*/
void sub_d00050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00050ULL || rel >= 0xd00060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00060 size=256 callers=0 calls=1
   calls: sub_c8bba0
*/
void sub_d00060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00060ULL || rel >= 0xd00160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00160 size=16 callers=0 calls=0
*/
void sub_d00160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00160ULL || rel >= 0xd00170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00170 size=16 callers=0 calls=0
*/
void sub_d00170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00170ULL || rel >= 0xd00180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00180 size=16 callers=0 calls=0
*/
void sub_d00180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00180ULL || rel >= 0xd00190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00190 size=16 callers=0 calls=0
*/
void sub_d00190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00190ULL || rel >= 0xd001a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d001a0 size=16 callers=0 calls=0
*/
void sub_d001a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd001a0ULL || rel >= 0xd001b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d001b0 size=16 callers=0 calls=0
*/
void sub_d001b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd001b0ULL || rel >= 0xd001c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d001c0 size=16 callers=0 calls=0
*/
void sub_d001c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd001c0ULL || rel >= 0xd001d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d001d0 size=16 callers=0 calls=0
*/
void sub_d001d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd001d0ULL || rel >= 0xd001e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d001e0 size=16 callers=0 calls=0
*/
void sub_d001e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd001e0ULL || rel >= 0xd001f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d001f0 size=16 callers=0 calls=0
*/
void sub_d001f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd001f0ULL || rel >= 0xd00200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00200 size=16 callers=0 calls=0
*/
void sub_d00200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00200ULL || rel >= 0xd00210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00210 size=304 callers=0 calls=1
   calls: sub_967240
*/
void sub_d00210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00210ULL || rel >= 0xd00340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00340 size=976 callers=1 calls=4
   calls: sub_c6cf50, sub_c85cc0, sub_c86c80, sub_ce3a10
   ref: bin/field/model/unit_obj/unit_obj_kinomitree01/unit_obj_kinomitree01.gfbanmcfg
   ref: bin/field/model/unit_obj/unit_obj_kinomitree01/unit_obj_kinomitree01.gfbmdl
*/
void unit_obj_kinomitree01_gfbmdl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00340ULL || rel >= 0xd00710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00710 size=1088 callers=0 calls=6
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2010, sub_5d7670, sub_c85770
   ref: fi_have_kinomi_parameter
*/
void fi_have_kinomi_parameter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00710ULL || rel >= 0xd00b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00b50 size=144 callers=1 calls=0
*/
void sub_d00b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00b50ULL || rel >= 0xd00be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00be0 size=16 callers=0 calls=0
*/
void sub_d00be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00be0ULL || rel >= 0xd00bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00bf0 size=208 callers=0 calls=1
   calls: sub_c634b0
*/
void sub_d00bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00bf0ULL || rel >= 0xd00cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00cc0 size=272 callers=0 calls=1
   calls: sub_c63630
*/
void sub_d00cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00cc0ULL || rel >= 0xd00dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00dd0 size=16 callers=1 calls=0
*/
void sub_d00dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00dd0ULL || rel >= 0xd00de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00de0 size=32 callers=1 calls=0
*/
void sub_d00de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00de0ULL || rel >= 0xd00e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d00e00 size=976 callers=1 calls=0
*/
void sub_d00e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd00e00ULL || rel >= 0xd011d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d011d0 size=1360 callers=1 calls=0
*/
void sub_d011d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd011d0ULL || rel >= 0xd01720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01720 size=16 callers=2 calls=0
*/
void sub_d01720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01720ULL || rel >= 0xd01730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01730 size=32 callers=1 calls=0
*/
void sub_d01730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01730ULL || rel >= 0xd01750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01750 size=16 callers=1 calls=0
*/
void sub_d01750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01750ULL || rel >= 0xd01760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01760 size=160 callers=1 calls=1
   calls: sub_1364c50
*/
void sub_d01760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01760ULL || rel >= 0xd01800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01800 size=112 callers=1 calls=1
   calls: sub_794330
   ref: Play_Prop_Gimmick_PM_drop
*/
void Play_Prop_Gimmick_PM_drop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01800ULL || rel >= 0xd01870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01870 size=112 callers=1 calls=1
   calls: sub_794330
   ref: Play_Prop_Gimmick_nut_drop
*/
void Play_Prop_Gimmick_nut_drop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01870ULL || rel >= 0xd018e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d018e0 size=112 callers=1 calls=1
   calls: sub_ea7620
*/
void sub_d018e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd018e0ULL || rel >= 0xd01950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01950 size=32 callers=1 calls=0
*/
void sub_d01950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01950ULL || rel >= 0xd01970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01970 size=80 callers=1 calls=1
   calls: sub_ea8c70
*/
void sub_d01970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01970ULL || rel >= 0xd019c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d019c0 size=128 callers=1 calls=2
   calls: sub_ea77b0, sub_ea8c70
*/
void sub_d019c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd019c0ULL || rel >= 0xd01a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01a40 size=16 callers=0 calls=0
*/
void sub_d01a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01a40ULL || rel >= 0xd01a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01a50 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d01a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01a50ULL || rel >= 0xd01aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01aa0 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d01aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01aa0ULL || rel >= 0xd01b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01b50 size=16 callers=0 calls=0
*/
void sub_d01b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01b50ULL || rel >= 0xd01b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01b60 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d01b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01b60ULL || rel >= 0xd01bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01bb0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d01bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01bb0ULL || rel >= 0xd01c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01c00 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d01c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01c00ULL || rel >= 0xd01cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01cb0 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d01cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01cb0ULL || rel >= 0xd01d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01d60 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d01d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01d60ULL || rel >= 0xd01db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01db0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d01db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01db0ULL || rel >= 0xd01e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d01e00 size=992 callers=0 calls=10
   calls: sub_59a930, sub_59b250, sub_5b9220, sub_5b9400, sub_794330, sub_b4a5e0, sub_c6a470, sub_c6ccb0, sub_ea7c40, sub_ea8c70
   ref: fi_kinomi_trigger
   ref: fi_pokemon_shake_trigger
   ref: Play_Prop_Gimmick_tree_shake
   ref: fi_have_kinomi_parameter
*/
void fi_pokemon_shake_trigger(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd01e00ULL || rel >= 0xd021e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d021e0 size=16 callers=0 calls=0
*/
void sub_d021e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd021e0ULL || rel >= 0xd021f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d021f0 size=16 callers=0 calls=0
*/
void sub_d021f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd021f0ULL || rel >= 0xd02200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d02200 size=16 callers=0 calls=0
*/
void sub_d02200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd02200ULL || rel >= 0xd02210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d02210 size=128 callers=1 calls=1
   calls: sub_c8c0d0
*/
void sub_d02210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd02210ULL || rel >= 0xd02290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d02290 size=1056 callers=0 calls=2
   calls: sub_13ca4c0, sub_13ed240
*/
void sub_d02290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd02290ULL || rel >= 0xd026b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d026b0 size=16 callers=0 calls=0
*/
void sub_d026b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd026b0ULL || rel >= 0xd026c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d026c0 size=16 callers=0 calls=0
*/
void sub_d026c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd026c0ULL || rel >= 0xd026d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d026d0 size=16 callers=0 calls=0
*/
void sub_d026d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd026d0ULL || rel >= 0xd026e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d026e0 size=16 callers=0 calls=0
*/
void sub_d026e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd026e0ULL || rel >= 0xd026f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d026f0 size=16 callers=0 calls=0
*/
void sub_d026f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd026f0ULL || rel >= 0xd02700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d02700 size=16 callers=0 calls=0
*/
void sub_d02700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd02700ULL || rel >= 0xd02710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d02710 size=16 callers=0 calls=0
*/
void sub_d02710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd02710ULL || rel >= 0xd02720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d02720 size=16 callers=0 calls=0
*/
void sub_d02720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd02720ULL || rel >= 0xd02730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d02730 size=304 callers=1 calls=1
   calls: sub_967240
*/
void sub_d02730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd02730ULL || rel >= 0xd02860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d02860 size=544 callers=1 calls=3
   calls: sub_c85cc0, sub_c86c80, sub_ce3a10
   ref: bin/field/model/unit_obj/unit_obj_nesuto01/unit_obj_nesuto01.gfbmdl
   ref: bin/field/model/unit_obj/unit_obj_nesuto01/unit_obj_nesuto01.gfbanmcfg
*/
void unit_obj_nesuto01_gfbmdl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd02860ULL || rel >= 0xd02a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d02a80 size=1200 callers=0 calls=8
   calls: sub_136c810, sub_136c860, sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2010, sub_5d7670, sub_c85770
   ref: looppattern_int
*/
void looppattern_int(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd02a80ULL || rel >= 0xd02f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d02f30 size=16 callers=0 calls=0
*/
void sub_d02f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd02f30ULL || rel >= 0xd02f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d02f40 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d02f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd02f40ULL || rel >= 0xd02f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d02f90 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d02f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd02f90ULL || rel >= 0xd03040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03040 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d03040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03040ULL || rel >= 0xd03090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03090 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d03090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03090ULL || rel >= 0xd030e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d030e0 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d030e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd030e0ULL || rel >= 0xd03190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03190 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d03190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03190ULL || rel >= 0xd03240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03240 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d03240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03240ULL || rel >= 0xd03290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03290 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d03290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03290ULL || rel >= 0xd032e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d032e0 size=688 callers=0 calls=4
   calls: sub_136c810, sub_136c860, sub_c6a470, sub_c6c980
*/
void sub_d032e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd032e0ULL || rel >= 0xd03590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03590 size=16 callers=0 calls=0
*/
void sub_d03590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03590ULL || rel >= 0xd035a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d035a0 size=16 callers=0 calls=0
*/
void sub_d035a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd035a0ULL || rel >= 0xd035b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d035b0 size=16 callers=0 calls=0
*/
void sub_d035b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd035b0ULL || rel >= 0xd035c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d035c0 size=160 callers=0 calls=1
   calls: sub_1c0
   ref: on_trigger
   ref: off_trigger
*/
void off_trigger(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd035c0ULL || rel >= 0xd03660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03660 size=176 callers=1 calls=2
   calls: sub_c6cf50, sub_c8c840
*/
void sub_d03660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03660ULL || rel >= 0xd03710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03710 size=800 callers=0 calls=6
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2010, sub_5d7670, sub_c8ce70
*/
void sub_d03710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03710ULL || rel >= 0xd03a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03a30 size=16 callers=0 calls=0
*/
void sub_d03a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03a30ULL || rel >= 0xd03a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03a40 size=16 callers=0 calls=0
*/
void sub_d03a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03a40ULL || rel >= 0xd03a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03a50 size=16 callers=0 calls=0
*/
void sub_d03a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03a50ULL || rel >= 0xd03a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03a60 size=16 callers=0 calls=0
*/
void sub_d03a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03a60ULL || rel >= 0xd03a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03a70 size=48 callers=1 calls=0
*/
void sub_d03a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03a70ULL || rel >= 0xd03aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03aa0 size=16 callers=0 calls=0
*/
void sub_d03aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03aa0ULL || rel >= 0xd03ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03ab0 size=112 callers=0 calls=1
   calls: sub_d03c40
*/
void sub_d03ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03ab0ULL || rel >= 0xd03b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03b20 size=16 callers=0 calls=0
*/
void sub_d03b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03b20ULL || rel >= 0xd03b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03b30 size=16 callers=0 calls=0
*/
void sub_d03b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03b30ULL || rel >= 0xd03b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03b40 size=112 callers=0 calls=1
   calls: sub_d03c40
*/
void sub_d03b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03b40ULL || rel >= 0xd03bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03bb0 size=112 callers=0 calls=1
   calls: sub_d03c40
*/
void sub_d03bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03bb0ULL || rel >= 0xd03c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03c20 size=16 callers=0 calls=0
*/
void sub_d03c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03c20ULL || rel >= 0xd03c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03c30 size=16 callers=0 calls=0
*/
void sub_d03c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03c30ULL || rel >= 0xd03c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03c40 size=304 callers=3 calls=1
   calls: sub_967240
*/
void sub_d03c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03c40ULL || rel >= 0xd03d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03d70 size=208 callers=0 calls=4
   calls: sub_c6a470, sub_c6ccb0, sub_c6ceb0, sub_c8cd60
*/
void sub_d03d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03d70ULL || rel >= 0xd03e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03e40 size=16 callers=0 calls=0
*/
void sub_d03e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03e40ULL || rel >= 0xd03e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03e50 size=16 callers=0 calls=0
*/
void sub_d03e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03e50ULL || rel >= 0xd03e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03e60 size=16 callers=0 calls=0
*/
void sub_d03e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03e60ULL || rel >= 0xd03e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03e70 size=128 callers=1 calls=1
   calls: sub_c8b810
*/
void sub_d03e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03e70ULL || rel >= 0xd03ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03ef0 size=16 callers=0 calls=0
*/
void sub_d03ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03ef0ULL || rel >= 0xd03f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03f00 size=16 callers=0 calls=0
*/
void sub_d03f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03f00ULL || rel >= 0xd03f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d03f10 size=256 callers=0 calls=1
   calls: sub_c8bba0
*/
void sub_d03f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd03f10ULL || rel >= 0xd04010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04010 size=16 callers=0 calls=0
*/
void sub_d04010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04010ULL || rel >= 0xd04020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04020 size=16 callers=0 calls=0
*/
void sub_d04020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04020ULL || rel >= 0xd04030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04030 size=16 callers=0 calls=0
*/
void sub_d04030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04030ULL || rel >= 0xd04040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04040 size=16 callers=0 calls=0
*/
void sub_d04040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04040ULL || rel >= 0xd04050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04050 size=16 callers=0 calls=0
*/
void sub_d04050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04050ULL || rel >= 0xd04060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04060 size=16 callers=0 calls=0
*/
void sub_d04060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04060ULL || rel >= 0xd04070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04070 size=16 callers=0 calls=0
*/
void sub_d04070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04070ULL || rel >= 0xd04080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04080 size=16 callers=0 calls=0
*/
void sub_d04080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04080ULL || rel >= 0xd04090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04090 size=16 callers=0 calls=0
*/
void sub_d04090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04090ULL || rel >= 0xd040a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d040a0 size=16 callers=0 calls=0
*/
void sub_d040a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd040a0ULL || rel >= 0xd040b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d040b0 size=16 callers=0 calls=0
*/
void sub_d040b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd040b0ULL || rel >= 0xd040c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d040c0 size=304 callers=0 calls=1
   calls: sub_967240
*/
void sub_d040c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd040c0ULL || rel >= 0xd041f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d041f0 size=64 callers=1 calls=1
   calls: sub_ce3a10
*/
void sub_d041f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd041f0ULL || rel >= 0xd04230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04230 size=480 callers=0 calls=2
   calls: sub_135a1a0, sub_c85770
*/
void sub_d04230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04230ULL || rel >= 0xd04410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04410 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d04410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04410ULL || rel >= 0xd04460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04460 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d04460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04460ULL || rel >= 0xd04510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04510 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d04510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04510ULL || rel >= 0xd04560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04560 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d04560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04560ULL || rel >= 0xd045b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d045b0 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d045b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd045b0ULL || rel >= 0xd04660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04660 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d04660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04660ULL || rel >= 0xd04710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04710 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d04710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04710ULL || rel >= 0xd04760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04760 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d04760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04760ULL || rel >= 0xd047b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d047b0 size=64 callers=1 calls=1
   calls: sub_ce3a10
*/
void sub_d047b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd047b0ULL || rel >= 0xd047f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d047f0 size=528 callers=0 calls=2
   calls: sub_135a1a0, sub_c85770
   ref: pc_birthday_bool
*/
void pc_birthday_bool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd047f0ULL || rel >= 0xd04a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04a00 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d04a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04a00ULL || rel >= 0xd04a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04a50 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d04a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04a50ULL || rel >= 0xd04b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04b00 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d04b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04b00ULL || rel >= 0xd04b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04b50 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d04b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04b50ULL || rel >= 0xd04ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04ba0 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d04ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04ba0ULL || rel >= 0xd04c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04c50 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d04c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04c50ULL || rel >= 0xd04d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04d00 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d04d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04d00ULL || rel >= 0xd04d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04d50 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d04d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04d50ULL || rel >= 0xd04da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04da0 size=144 callers=1 calls=1
   calls: sub_c70100
*/
void sub_d04da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04da0ULL || rel >= 0xd04e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04e30 size=256 callers=0 calls=1
   calls: sub_c70840
*/
void sub_d04e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04e30ULL || rel >= 0xd04f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04f30 size=16 callers=0 calls=0
*/
void sub_d04f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04f30ULL || rel >= 0xd04f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04f40 size=16 callers=0 calls=0
*/
void sub_d04f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04f40ULL || rel >= 0xd04f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d04f50 size=272 callers=0 calls=2
   calls: sub_13b1c90, sub_c62c30
*/
void sub_d04f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd04f50ULL || rel >= 0xd05060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05060 size=192 callers=1 calls=1
   calls: sub_13f67a0
*/
void sub_d05060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05060ULL || rel >= 0xd05120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05120 size=288 callers=1 calls=1
   calls: sub_135a1a0
*/
void sub_d05120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05120ULL || rel >= 0xd05240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05240 size=160 callers=0 calls=0
*/
void sub_d05240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05240ULL || rel >= 0xd052e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d052e0 size=160 callers=0 calls=0
*/
void sub_d052e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd052e0ULL || rel >= 0xd05380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05380 size=16 callers=0 calls=0
*/
void sub_d05380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05380ULL || rel >= 0xd05390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05390 size=160 callers=0 calls=0
*/
void sub_d05390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05390ULL || rel >= 0xd05430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05430 size=160 callers=0 calls=0
*/
void sub_d05430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05430ULL || rel >= 0xd054d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d054d0 size=16 callers=0 calls=0
*/
void sub_d054d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd054d0ULL || rel >= 0xd054e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d054e0 size=16 callers=0 calls=0
*/
void sub_d054e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd054e0ULL || rel >= 0xd054f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d054f0 size=160 callers=0 calls=0
*/
void sub_d054f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd054f0ULL || rel >= 0xd05590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05590 size=160 callers=0 calls=0
*/
void sub_d05590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05590ULL || rel >= 0xd05630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05630 size=128 callers=1 calls=1
   calls: sub_c8b810
*/
void sub_d05630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05630ULL || rel >= 0xd056b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d056b0 size=16 callers=0 calls=0
*/
void sub_d056b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd056b0ULL || rel >= 0xd056c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d056c0 size=16 callers=0 calls=0
*/
void sub_d056c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd056c0ULL || rel >= 0xd056d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d056d0 size=256 callers=0 calls=1
   calls: sub_c8bba0
*/
void sub_d056d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd056d0ULL || rel >= 0xd057d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d057d0 size=16 callers=0 calls=0
*/
void sub_d057d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd057d0ULL || rel >= 0xd057e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d057e0 size=16 callers=0 calls=0
*/
void sub_d057e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd057e0ULL || rel >= 0xd057f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d057f0 size=656 callers=0 calls=2
   calls: sub_5cbcf0, sub_c8bd10
*/
void sub_d057f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd057f0ULL || rel >= 0xd05a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05a80 size=320 callers=3 calls=0
*/
void sub_d05a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05a80ULL || rel >= 0xd05bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05bc0 size=304 callers=1 calls=0
*/
void sub_d05bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05bc0ULL || rel >= 0xd05cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05cf0 size=16 callers=0 calls=0
*/
void sub_d05cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05cf0ULL || rel >= 0xd05d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05d00 size=16 callers=0 calls=0
*/
void sub_d05d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05d00ULL || rel >= 0xd05d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05d10 size=16 callers=0 calls=0
*/
void sub_d05d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05d10ULL || rel >= 0xd05d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05d20 size=16 callers=0 calls=0
*/
void sub_d05d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05d20ULL || rel >= 0xd05d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05d30 size=16 callers=0 calls=0
*/
void sub_d05d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05d30ULL || rel >= 0xd05d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05d40 size=16 callers=0 calls=0
*/
void sub_d05d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05d40ULL || rel >= 0xd05d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05d50 size=16 callers=0 calls=0
*/
void sub_d05d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05d50ULL || rel >= 0xd05d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05d60 size=16 callers=0 calls=0
*/
void sub_d05d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05d60ULL || rel >= 0xd05d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05d70 size=112 callers=0 calls=0
*/
void sub_d05d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05d70ULL || rel >= 0xd05de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05de0 size=128 callers=1 calls=1
   calls: sub_c8b040
*/
void sub_d05de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05de0ULL || rel >= 0xd05e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05e60 size=16 callers=0 calls=0
*/
void sub_d05e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05e60ULL || rel >= 0xd05e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05e70 size=16 callers=0 calls=0
*/
void sub_d05e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05e70ULL || rel >= 0xd05e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05e80 size=16 callers=0 calls=0
*/
void sub_d05e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05e80ULL || rel >= 0xd05e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05e90 size=16 callers=0 calls=0
*/
void sub_d05e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05e90ULL || rel >= 0xd05ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05ea0 size=16 callers=0 calls=0
*/
void sub_d05ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05ea0ULL || rel >= 0xd05eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05eb0 size=16 callers=0 calls=0
*/
void sub_d05eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05eb0ULL || rel >= 0xd05ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05ec0 size=16 callers=0 calls=0
*/
void sub_d05ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05ec0ULL || rel >= 0xd05ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05ed0 size=16 callers=0 calls=0
*/
void sub_d05ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05ed0ULL || rel >= 0xd05ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d05ee0 size=304 callers=14 calls=1
   calls: sub_967240
*/
void sub_d05ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd05ee0ULL || rel >= 0xd06010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d06010 size=656 callers=1 calls=1
   calls: sub_c8d300
*/
void sub_d06010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd06010ULL || rel >= 0xd062a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d062a0 size=1408 callers=0 calls=4
   calls: sub_13ed240, sub_c628d0, sub_de96f0, sub_e38ce0
*/
void sub_d062a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd062a0ULL || rel >= 0xd06820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d06820 size=352 callers=0 calls=4
   calls: sub_13ed240, sub_c629e0, sub_c8e490, sub_e38ce0
*/
void sub_d06820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd06820ULL || rel >= 0xd06980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d06980 size=80 callers=0 calls=3
   calls: sub_c64330, sub_d069d0, sub_d06c10
*/
void sub_d06980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd06980ULL || rel >= 0xd069d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d069d0 size=576 callers=1 calls=3
   calls: sub_135a1a0, sub_13ed240, sub_c8dd50
*/
void sub_d069d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd069d0ULL || rel >= 0xd06c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d06c10 size=640 callers=1 calls=3
   calls: sub_c8dd80, sub_d087b0, sub_e37b80
*/
void sub_d06c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd06c10ULL || rel >= 0xd06e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d06e90 size=80 callers=0 calls=1
   calls: sub_c634b0
*/
void sub_d06e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd06e90ULL || rel >= 0xd06ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d06ee0 size=160 callers=0 calls=1
   calls: sub_c63630
*/
void sub_d06ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd06ee0ULL || rel >= 0xd06f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d06f80 size=1264 callers=1 calls=4
   calls: sub_972c70, sub_d0b480, sub_e371c0, sub_e37ec0
*/
void sub_d06f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd06f80ULL || rel >= 0xd07470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d07470 size=336 callers=0 calls=2
   calls: sub_d087b0, sub_e37b80
*/
void sub_d07470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd07470ULL || rel >= 0xd075c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d075c0 size=208 callers=1 calls=2
   calls: sub_d087b0, sub_e37b80
*/
void sub_d075c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd075c0ULL || rel >= 0xd07690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d07690 size=240 callers=0 calls=1
   calls: sub_135a1a0
*/
void sub_d07690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd07690ULL || rel >= 0xd07780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d07780 size=1504 callers=0 calls=11
   calls: lu__u, sub_5c6850, sub_5c68f0, sub_5c6930, sub_972c70, sub_c62830, sub_cb2d50, sub_cb3390, sub_d0b480, sub_e371c0, sub_e37ec0
*/
void sub_d07780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd07780ULL || rel >= 0xd07d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d07d60 size=48 callers=1 calls=0
*/
void sub_d07d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd07d60ULL || rel >= 0xd07d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d07d90 size=320 callers=1 calls=2
   calls: sub_135a2d0, sub_135a3c0
*/
void sub_d07d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd07d90ULL || rel >= 0xd07ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d07ed0 size=144 callers=0 calls=1
   calls: sub_d083b0
*/
void sub_d07ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd07ed0ULL || rel >= 0xd07f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d07f60 size=144 callers=0 calls=1
   calls: sub_d083b0
*/
void sub_d07f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd07f60ULL || rel >= 0xd07ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d07ff0 size=112 callers=0 calls=1
   calls: sub_d086c0
*/
void sub_d07ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd07ff0ULL || rel >= 0xd08060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08060 size=16 callers=0 calls=0
*/
void sub_d08060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08060ULL || rel >= 0xd08070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08070 size=160 callers=0 calls=1
   calls: sub_d083b0
*/
void sub_d08070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08070ULL || rel >= 0xd08110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08110 size=160 callers=0 calls=1
   calls: sub_d083b0
*/
void sub_d08110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08110ULL || rel >= 0xd081b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d081b0 size=112 callers=0 calls=1
   calls: sub_d086c0
*/
void sub_d081b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd081b0ULL || rel >= 0xd08220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08220 size=112 callers=0 calls=1
   calls: sub_d086c0
*/
void sub_d08220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08220ULL || rel >= 0xd08290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08290 size=144 callers=0 calls=1
   calls: sub_d083b0
*/
void sub_d08290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08290ULL || rel >= 0xd08320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08320 size=144 callers=0 calls=1
   calls: sub_d083b0
*/
void sub_d08320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08320ULL || rel >= 0xd083b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d083b0 size=256 callers=12 calls=0
*/
void sub_d083b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd083b0ULL || rel >= 0xd084b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d084b0 size=80 callers=0 calls=1
   calls: sub_d083b0
*/
void sub_d084b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd084b0ULL || rel >= 0xd08500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08500 size=80 callers=0 calls=1
   calls: sub_d083b0
*/
void sub_d08500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08500ULL || rel >= 0xd08550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08550 size=16 callers=0 calls=0
*/
void sub_d08550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08550ULL || rel >= 0xd08560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08560 size=80 callers=0 calls=1
   calls: sub_d083b0
*/
void sub_d08560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08560ULL || rel >= 0xd085b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d085b0 size=80 callers=0 calls=1
   calls: sub_d083b0
*/
void sub_d085b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd085b0ULL || rel >= 0xd08600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08600 size=16 callers=0 calls=0
*/
void sub_d08600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08600ULL || rel >= 0xd08610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08610 size=16 callers=0 calls=0
*/
void sub_d08610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08610ULL || rel >= 0xd08620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08620 size=80 callers=0 calls=1
   calls: sub_d083b0
*/
void sub_d08620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08620ULL || rel >= 0xd08670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08670 size=80 callers=0 calls=1
   calls: sub_d083b0
*/
void sub_d08670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08670ULL || rel >= 0xd086c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d086c0 size=240 callers=3 calls=1
   calls: sub_967240
*/
void sub_d086c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd086c0ULL || rel >= 0xd087b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d087b0 size=288 callers=13 calls=1
   calls: sub_13b1c90
*/
void sub_d087b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd087b0ULL || rel >= 0xd088d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d088d0 size=128 callers=0 calls=0
*/
void sub_d088d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd088d0ULL || rel >= 0xd08950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08950 size=1264 callers=1 calls=4
   calls: sub_793d10, sub_c6cf50, sub_d4e390, sub_deb970
   ref: SymbolEncount
*/
void SymbolEncount(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08950ULL || rel >= 0xd08e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08e40 size=160 callers=0 calls=2
   calls: sub_c6cf50, sub_d08ee0
*/
void sub_d08e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08e40ULL || rel >= 0xd08ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08ee0 size=272 callers=1 calls=2
   calls: sub_c6cf50, sub_d0b620
*/
void sub_d08ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08ee0ULL || rel >= 0xd08ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d08ff0 size=2336 callers=0 calls=21
   calls: sub_13ca4c0, sub_13ca950, sub_13ed240, sub_5d99d0, sub_672070, sub_b8b370, sub_c63670, sub_c70cc0, sub_c71c40, sub_c73370, sub_c73490, sub_cef0b0
   ... +9 more
*/
void sub_d08ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd08ff0ULL || rel >= 0xd09910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d09910 size=48 callers=1 calls=2
   calls: sub_672070, sub_b8b370
*/
void sub_d09910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd09910ULL || rel >= 0xd09940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d09940 size=624 callers=1 calls=2
   calls: sub_13ca4c0, sub_c70cc0
*/
void sub_d09940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd09940ULL || rel >= 0xd09bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d09bb0 size=368 callers=2 calls=2
   calls: sub_13ca4c0, sub_c73370
*/
void sub_d09bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd09bb0ULL || rel >= 0xd09d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d09d20 size=80 callers=0 calls=1
   calls: sub_d4f630
*/
void sub_d09d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd09d20ULL || rel >= 0xd09d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d09d70 size=368 callers=0 calls=5
   calls: sub_13ed240, sub_c64330, sub_cef430, sub_d09ee0, sub_e37b80
*/
void sub_d09d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd09d70ULL || rel >= 0xd09ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d09ee0 size=544 callers=1 calls=5
   calls: sub_13ca4c0, sub_c63670, sub_c73490, sub_c73880, sub_d0a120
*/
void sub_d09ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd09ee0ULL || rel >= 0xd0a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0a100 size=16 callers=0 calls=0
*/
void sub_d0a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0a100ULL || rel >= 0xd0a110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0a110 size=16 callers=0 calls=0
*/
void sub_d0a110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0a110ULL || rel >= 0xd0a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0a120 size=480 callers=2 calls=6
   calls: sub_5c6850, sub_5c68f0, sub_5c6930, sub_ce0300, sub_ce0400, sub_ce0480
*/
void sub_d0a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0a120ULL || rel >= 0xd0a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0a300 size=816 callers=0 calls=10
   calls: sub_68d930, sub_68da30, sub_793ea0, sub_c64330, sub_c6ccb0, sub_c6ceb0, sub_c6d2d0, sub_c6d590, sub_d0a630, sub_d4f5c0
*/
void sub_d0a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0a300ULL || rel >= 0xd0a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0a630 size=720 callers=1 calls=5
   calls: sub_13ca4c0, sub_c63670, sub_deb990, sub_dee680, sub_e38770
*/
void sub_d0a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0a630ULL || rel >= 0xd0a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0a900 size=256 callers=0 calls=1
   calls: sub_13ca4c0
*/
void sub_d0a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0a900ULL || rel >= 0xd0aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0aa00 size=48 callers=0 calls=1
   calls: sub_d4f850
*/
void sub_d0aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0aa00ULL || rel >= 0xd0aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0aa30 size=80 callers=0 calls=1
   calls: sub_d4f930
*/
void sub_d0aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0aa30ULL || rel >= 0xd0aa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0aa80 size=64 callers=1 calls=0
*/
void sub_d0aa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0aa80ULL || rel >= 0xd0aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0aac0 size=240 callers=0 calls=3
   calls: sub_13ca4c0, sub_5cbe50, sub_c62e30
*/
void sub_d0aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0aac0ULL || rel >= 0xd0abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0abb0 size=288 callers=0 calls=2
   calls: sub_13ca4c0, sub_c63170
*/
void sub_d0abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0abb0ULL || rel >= 0xd0acd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0acd0 size=624 callers=1 calls=2
   calls: sub_13ca4c0, sub_c70cc0
*/
void sub_d0acd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0acd0ULL || rel >= 0xd0af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0af40 size=432 callers=0 calls=3
   calls: sub_6707f0, sub_b8b370, sub_cf00e0
*/
void sub_d0af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0af40ULL || rel >= 0xd0b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b0f0 size=64 callers=1 calls=2
   calls: sub_6707f0, sub_b8b370
*/
void sub_d0b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b0f0ULL || rel >= 0xd0b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b130 size=16 callers=0 calls=0
*/
void sub_d0b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b130ULL || rel >= 0xd0b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b140 size=96 callers=0 calls=2
   calls: sub_c6c5c0, sub_d4fae0
*/
void sub_d0b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b140ULL || rel >= 0xd0b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b1a0 size=80 callers=1 calls=0
*/
void sub_d0b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b1a0ULL || rel >= 0xd0b1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b1f0 size=16 callers=1 calls=0
*/
void sub_d0b1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b1f0ULL || rel >= 0xd0b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b200 size=16 callers=1 calls=0
*/
void sub_d0b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b200ULL || rel >= 0xd0b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b210 size=16 callers=1 calls=0
*/
void sub_d0b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b210ULL || rel >= 0xd0b220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b220 size=16 callers=0 calls=0
*/
void sub_d0b220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b220ULL || rel >= 0xd0b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b230 size=592 callers=0 calls=2
   calls: sub_13ca4c0, sub_c70cc0
*/
void sub_d0b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b230ULL || rel >= 0xd0b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b480 size=32 callers=2 calls=0
*/
void sub_d0b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b480ULL || rel >= 0xd0b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b4a0 size=208 callers=1 calls=0
*/
void sub_d0b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b4a0ULL || rel >= 0xd0b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b570 size=16 callers=1 calls=0
*/
void sub_d0b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b570ULL || rel >= 0xd0b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b580 size=160 callers=1 calls=4
   calls: sub_5c6830, sub_5c6850, sub_5c68f0, sub_5c8dd0
*/
void sub_d0b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b580ULL || rel >= 0xd0b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b620 size=240 callers=2 calls=2
   calls: sub_ce0300, sub_ce0480
*/
void sub_d0b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b620ULL || rel >= 0xd0b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b710 size=320 callers=0 calls=6
   calls: sub_68d940, sub_68da30, sub_c6ccb0, sub_c6d380, sub_c6d590, sub_d0b620
*/
void sub_d0b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b710ULL || rel >= 0xd0b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b850 size=176 callers=2 calls=5
   calls: sub_68d940, sub_68da30, sub_c6ccb0, sub_c6d2d0, sub_c6d590
*/
void sub_d0b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b850ULL || rel >= 0xd0b900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b900 size=64 callers=0 calls=0
*/
void sub_d0b900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b900ULL || rel >= 0xd0b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0b940 size=1088 callers=1 calls=0
   ref: to_ba01_landC01
   ref: to_ba01_land_state
   ref: to_ba02_roar01
   ref: to_ba02_megaappeal01
*/
void to_ba02_megaappeal01_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0b940ULL || rel >= 0xd0bd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0bd80 size=176 callers=1 calls=1
   calls: sub_794040
   ref: Play_UI_Common_runaway
   ref: Play_UI_common_encount
*/
void Play_UI_common_encount(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0bd80ULL || rel >= 0xd0be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0be30 size=544 callers=0 calls=1
   calls: sub_794040
   ref: Play_PM_Common_hidden_shake
   ref: Play_PM_Common_Appear_Grass
   ref: Play_PM_Common_Appear_Snow
   ref: Play_PM_Common_Disappear_Grass
   ref: Play_PM_Common_Appear_Sand
   ref: Play_PM_Common_Appear_Water
   ref: Play_PM_Common_Disappear_Snow
   ref: Play_PM_Common_Disappear_Sand
*/
void Play_PM_Common_jump_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0be30ULL || rel >= 0xd0c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c050 size=176 callers=0 calls=3
   calls: sub_793de0, sub_c83380, sub_dee710
*/
void sub_d0c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c050ULL || rel >= 0xd0c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c100 size=432 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_d0c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c100ULL || rel >= 0xd0c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c2b0 size=16 callers=0 calls=0
*/
void sub_d0c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c2b0ULL || rel >= 0xd0c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c2c0 size=112 callers=0 calls=1
   calls: sub_13ca860
*/
void sub_d0c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c2c0ULL || rel >= 0xd0c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c330 size=112 callers=0 calls=0
*/
void sub_d0c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c330ULL || rel >= 0xd0c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c3a0 size=16 callers=0 calls=0
*/
void sub_d0c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c3a0ULL || rel >= 0xd0c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c3b0 size=16 callers=0 calls=0
*/
void sub_d0c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c3b0ULL || rel >= 0xd0c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c3c0 size=16 callers=0 calls=0
*/
void sub_d0c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c3c0ULL || rel >= 0xd0c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c3d0 size=240 callers=0 calls=1
   calls: sub_13b1c90
*/
void sub_d0c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c3d0ULL || rel >= 0xd0c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c4c0 size=240 callers=0 calls=1
   calls: sub_13b1c90
*/
void sub_d0c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c4c0ULL || rel >= 0xd0c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c5b0 size=16 callers=0 calls=0
*/
void sub_d0c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c5b0ULL || rel >= 0xd0c5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c5c0 size=16 callers=0 calls=0
*/
void sub_d0c5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c5c0ULL || rel >= 0xd0c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c5d0 size=288 callers=7 calls=3
   calls: sub_5cf8c0, sub_5db1b0, sub_c75110
*/
void sub_d0c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c5d0ULL || rel >= 0xd0c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c6f0 size=224 callers=1 calls=1
   calls: sub_d0c810
*/
void sub_d0c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c6f0ULL || rel >= 0xd0c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c7d0 size=64 callers=0 calls=0
   ref: WildCommon
*/
void WildCommon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c7d0ULL || rel >= 0xd0c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c810 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_d0c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c810ULL || rel >= 0xd0c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c880 size=128 callers=0 calls=0
*/
void sub_d0c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c880ULL || rel >= 0xd0c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0c900 size=384 callers=0 calls=2
   calls: sub_c816a0, sub_d0ce20
*/
void sub_d0c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c900ULL || rel >= 0xd0ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ca80 size=16 callers=0 calls=0
*/
void sub_d0ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ca80ULL || rel >= 0xd0ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ca90 size=16 callers=0 calls=0
*/
void sub_d0ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ca90ULL || rel >= 0xd0caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0caa0 size=304 callers=0 calls=1
   calls: sub_d0d380
*/
void sub_d0caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0caa0ULL || rel >= 0xd0cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0cbd0 size=128 callers=0 calls=0
*/
void sub_d0cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0cbd0ULL || rel >= 0xd0cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0cc50 size=128 callers=0 calls=1
   calls: sub_d0d380
*/
void sub_d0cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0cc50ULL || rel >= 0xd0ccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ccd0 size=32 callers=0 calls=0
*/
void sub_d0ccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ccd0ULL || rel >= 0xd0ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ccf0 size=224 callers=1 calls=0
*/
void sub_d0ccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ccf0ULL || rel >= 0xd0cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0cdd0 size=80 callers=0 calls=0
*/
void sub_d0cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0cdd0ULL || rel >= 0xd0ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ce20 size=1328 callers=1 calls=5
   calls: sub_13c9e50, sub_65d220, sub_972c70, sub_9733f0, sub_d0d500
*/
void sub_d0ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ce20ULL || rel >= 0xd0d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0d350 size=16 callers=0 calls=0
*/
void sub_d0d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0d350ULL || rel >= 0xd0d360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0d360 size=32 callers=0 calls=0
*/
void sub_d0d360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0d360ULL || rel >= 0xd0d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0d380 size=304 callers=2 calls=1
   calls: to_ba02_megaappeal01_2
*/
void sub_d0d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0d380ULL || rel >= 0xd0d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0d4b0 size=80 callers=0 calls=0
*/
void sub_d0d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0d4b0ULL || rel >= 0xd0d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0d500 size=544 callers=4 calls=2
   calls: sub_13c9e50, sub_9733f0
*/
void sub_d0d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0d500ULL || rel >= 0xd0d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0d720 size=80 callers=0 calls=0
*/
void sub_d0d720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0d720ULL || rel >= 0xd0d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0d770 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d0d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0d770ULL || rel >= 0xd0d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0d820 size=48 callers=0 calls=0
*/
void sub_d0d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0d820ULL || rel >= 0xd0d850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0d850 size=80 callers=0 calls=0
*/
void sub_d0d850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0d850ULL || rel >= 0xd0d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0d8a0 size=80 callers=0 calls=0
*/
void sub_d0d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0d8a0ULL || rel >= 0xd0d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0d8f0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d0d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0d8f0ULL || rel >= 0xd0d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0d9a0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d0d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0d9a0ULL || rel >= 0xd0da50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0da50 size=80 callers=0 calls=0
*/
void sub_d0da50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0da50ULL || rel >= 0xd0daa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0daa0 size=80 callers=0 calls=0
*/
void sub_d0daa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0daa0ULL || rel >= 0xd0daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0daf0 size=128 callers=0 calls=0
*/
void sub_d0daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0daf0ULL || rel >= 0xd0db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0db70 size=1120 callers=1 calls=2
   calls: sub_c88aa0, sub_d0e410
*/
void sub_d0db70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0db70ULL || rel >= 0xd0dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0dfd0 size=192 callers=2 calls=0
*/
void sub_d0dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0dfd0ULL || rel >= 0xd0e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0e090 size=112 callers=3 calls=0
*/
void sub_d0e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0e090ULL || rel >= 0xd0e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0e100 size=80 callers=0 calls=1
   calls: sub_d0e150
*/
void sub_d0e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0e100ULL || rel >= 0xd0e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0e150 size=624 callers=1 calls=3
   calls: sub_ce9be0, sub_d0ea50, sub_d0ec10
*/
void sub_d0e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0e150ULL || rel >= 0xd0e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0e3c0 size=80 callers=0 calls=2
   calls: sub_c88f00, sub_d0e410
*/
void sub_d0e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0e3c0ULL || rel >= 0xd0e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0e410 size=496 callers=2 calls=1
   calls: sub_972c70
*/
void sub_d0e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0e410ULL || rel >= 0xd0e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0e600 size=112 callers=1 calls=0
*/
void sub_d0e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0e600ULL || rel >= 0xd0e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0e670 size=224 callers=2 calls=0
*/
void sub_d0e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0e670ULL || rel >= 0xd0e750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0e750 size=32 callers=3 calls=0
*/
void sub_d0e750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0e750ULL || rel >= 0xd0e770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0e770 size=64 callers=2 calls=0
*/
void sub_d0e770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0e770ULL || rel >= 0xd0e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0e7b0 size=144 callers=4 calls=0
*/
void sub_d0e7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0e7b0ULL || rel >= 0xd0e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0e840 size=464 callers=1 calls=1
   calls: sub_ead150
*/
void sub_d0e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0e840ULL || rel >= 0xd0ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ea10 size=64 callers=4 calls=0
*/
void sub_d0ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ea10ULL || rel >= 0xd0ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ea50 size=448 callers=1 calls=0
*/
void sub_d0ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ea50ULL || rel >= 0xd0ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ec10 size=432 callers=1 calls=1
   calls: sub_d0e840
*/
void sub_d0ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ec10ULL || rel >= 0xd0edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0edc0 size=144 callers=0 calls=0
*/
void sub_d0edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0edc0ULL || rel >= 0xd0ee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ee50 size=16 callers=0 calls=0
*/
void sub_d0ee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ee50ULL || rel >= 0xd0ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ee60 size=144 callers=0 calls=0
*/
void sub_d0ee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ee60ULL || rel >= 0xd0eef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0eef0 size=144 callers=0 calls=0
*/
void sub_d0eef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0eef0ULL || rel >= 0xd0ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ef80 size=16 callers=0 calls=0
*/
void sub_d0ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ef80ULL || rel >= 0xd0ef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ef90 size=16 callers=0 calls=0
*/
void sub_d0ef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ef90ULL || rel >= 0xd0efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0efa0 size=144 callers=0 calls=0
*/
void sub_d0efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0efa0ULL || rel >= 0xd0f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0f030 size=144 callers=0 calls=0
*/
void sub_d0f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0f030ULL || rel >= 0xd0f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0f0c0 size=304 callers=0 calls=1
   calls: sub_967240
*/
void sub_d0f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0f0c0ULL || rel >= 0xd0f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0f1f0 size=128 callers=0 calls=0
*/
void sub_d0f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0f1f0ULL || rel >= 0xd0f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0f270 size=368 callers=1 calls=2
   calls: sub_c6cf50, sub_c8e520
*/
void sub_d0f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0f270ULL || rel >= 0xd0f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0f3e0 size=1008 callers=0 calls=11
   calls: sub_c44210, sub_c6a470, sub_c6ccb0, sub_c6ceb0, sub_c6d380, sub_cb20e0, sub_cb33d0, sub_d0f7d0, sub_d25bd0, sub_d42e80, sub_d46a20
*/
void sub_d0f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0f3e0ULL || rel >= 0xd0f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0f7d0 size=768 callers=4 calls=5
   calls: sub_972c70, sub_c6ccb0, sub_c6ceb0, sub_c6d380, sub_ead150
*/
void sub_d0f7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0f7d0ULL || rel >= 0xd0fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0fad0 size=80 callers=2 calls=0
*/
void sub_d0fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0fad0ULL || rel >= 0xd0fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0fb20 size=224 callers=0 calls=1
   calls: sub_5cbcf0
*/
void sub_d0fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0fb20ULL || rel >= 0xd0fc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0fc00 size=320 callers=0 calls=1
   calls: sub_c634b0
*/
void sub_d0fc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0fc00ULL || rel >= 0xd0fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0fd40 size=480 callers=0 calls=1
   calls: sub_c63630
*/
void sub_d0fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0fd40ULL || rel >= 0xd0ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ff20 size=16 callers=0 calls=0
*/
void sub_d0ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ff20ULL || rel >= 0xd0ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ff30 size=112 callers=0 calls=1
   calls: sub_d100d0
*/
void sub_d0ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ff30ULL || rel >= 0xd0ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ffa0 size=16 callers=0 calls=0
*/
void sub_d0ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ffa0ULL || rel >= 0xd0ffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ffb0 size=16 callers=0 calls=0
*/
void sub_d0ffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ffb0ULL || rel >= 0xd0ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ffc0 size=16 callers=0 calls=0
*/
void sub_d0ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ffc0ULL || rel >= 0xd0ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d0ffd0 size=112 callers=0 calls=1
   calls: sub_d100d0
*/
void sub_d0ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ffd0ULL || rel >= 0xd10040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d10040 size=112 callers=0 calls=1
   calls: sub_d100d0
*/
void sub_d10040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd10040ULL || rel >= 0xd100b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d100b0 size=16 callers=0 calls=0
*/
void sub_d100b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd100b0ULL || rel >= 0xd100c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d100c0 size=16 callers=0 calls=0
*/
void sub_d100c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd100c0ULL || rel >= 0xd100d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d100d0 size=304 callers=3 calls=1
   calls: sub_967240
*/
void sub_d100d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd100d0ULL || rel >= 0xd10200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d10200 size=464 callers=1 calls=3
   calls: sub_c6cf50, sub_c6d400, sub_ce3a10
*/
void sub_d10200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd10200ULL || rel >= 0xd103d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d103d0 size=688 callers=0 calls=5
   calls: sub_13f67a0, sub_b334c0, sub_b334e0, sub_b4c060, sub_c697c0
*/
void sub_d103d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd103d0ULL || rel >= 0xd10680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d10680 size=208 callers=0 calls=3
   calls: sub_b33510, sub_b4c060, sub_c69e60
*/
void sub_d10680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd10680ULL || rel >= 0xd10750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d10750 size=1152 callers=0 calls=11
   calls: sub_607750, sub_96ccf0, sub_b33570, sub_b33760, sub_b33800, sub_b33a30, sub_b4c060, sub_c69f10, sub_c6db90, sub_c6dcd0, sub_ed2fe0
*/
void sub_d10750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd10750ULL || rel >= 0xd10bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d10bd0 size=96 callers=0 calls=2
   calls: sub_c6a470, sub_c9f940
*/
void sub_d10bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd10bd0ULL || rel >= 0xd10c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d10c30 size=512 callers=1 calls=5
   calls: sub_13ca4c0, sub_c6ccb0, sub_c9f940, sub_d10e30, sub_d11010
*/
void sub_d10c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd10c30ULL || rel >= 0xd10e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d10e30 size=480 callers=5 calls=6
   calls: sub_13ca4c0, sub_5cbe70, sub_5cc040, sub_5d99d0, sub_c74370, sub_d0c5d0
*/
void sub_d10e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd10e30ULL || rel >= 0xd11010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d11010 size=640 callers=1 calls=1
   calls: sub_13ca4c0
*/
void sub_d11010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd11010ULL || rel >= 0xd11290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d11290 size=416 callers=1 calls=4
   calls: sub_13ca4c0, sub_c6ceb0, sub_c9f940, sub_d10e30
*/
void sub_d11290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd11290ULL || rel >= 0xd11430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d11430 size=48 callers=3 calls=0
*/
void sub_d11430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd11430ULL || rel >= 0xd11460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d11460 size=192 callers=0 calls=3
   calls: sub_b33700, sub_b4c060, sub_c6d5e0
*/
void sub_d11460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd11460ULL || rel >= 0xd11520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d11520 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d11520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd11520ULL || rel >= 0xd11570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d11570 size=112 callers=0 calls=1
   calls: sub_d11910
*/
void sub_d11570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd11570ULL || rel >= 0xd115e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d115e0 size=16 callers=0 calls=0
*/
void sub_d115e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd115e0ULL || rel >= 0xd115f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d115f0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d115f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd115f0ULL || rel >= 0xd11640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d11640 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d11640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd11640ULL || rel >= 0xd11690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d11690 size=240 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_d11690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd11690ULL || rel >= 0xd11780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d11780 size=240 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_d11780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd11780ULL || rel >= 0xd11870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d11870 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d11870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd11870ULL || rel >= 0xd118c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d118c0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d118c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd118c0ULL || rel >= 0xd11910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d11910 size=176 callers=2 calls=1
   calls: sub_13a6920
*/
void sub_d11910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd11910ULL || rel >= 0xd119c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d119c0 size=256 callers=1 calls=1
   calls: sub_d4e390
*/
void sub_d119c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd119c0ULL || rel >= 0xd11ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d11ac0 size=3424 callers=0 calls=10
   calls: sub_13ca4c0, sub_13ed240, sub_17c1b50, sub_5c6830, sub_5c6850, sub_5c68f0, sub_5c6930, sub_5c8dd0, sub_68da30, sub_d4f5c0
*/
void sub_d11ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd11ac0ULL || rel >= 0xd12820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d12820 size=240 callers=0 calls=3
   calls: sub_13ca4c0, sub_5cbe50, sub_c62e30
*/
void sub_d12820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd12820ULL || rel >= 0xd12910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d12910 size=16 callers=0 calls=0
*/
void sub_d12910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd12910ULL || rel >= 0xd12920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d12920 size=1104 callers=0 calls=13
   calls: sub_13ca4c0, sub_13ca950, sub_5d99d0, sub_68d630, sub_98eec0, sub_c63670, sub_c71c40, sub_c73370, sub_c74370, sub_d0c5d0, sub_d10e30, sub_d138e0
   ... +1 more
*/
void sub_d12920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd12920ULL || rel >= 0xd12d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d12d70 size=848 callers=0 calls=4
   calls: sub_5e2bc0, sub_c6e010, sub_d4e9a0, sub_ddecb0
*/
void sub_d12d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd12d70ULL || rel >= 0xd130c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d130c0 size=64 callers=0 calls=1
   calls: sub_d4eca0
*/
void sub_d130c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd130c0ULL || rel >= 0xd13100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d13100 size=352 callers=1 calls=2
   calls: sub_13a6cd0, sub_d137f0
*/
void sub_d13100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13100ULL || rel >= 0xd13260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d13260 size=48 callers=2 calls=1
   calls: sub_68d9f0
*/
void sub_d13260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13260ULL || rel >= 0xd13290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d13290 size=16 callers=4 calls=0
*/
void sub_d13290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13290ULL || rel >= 0xd132a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d132a0 size=224 callers=0 calls=1
   calls: sub_d139c0
*/
void sub_d132a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd132a0ULL || rel >= 0xd13380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d13380 size=224 callers=0 calls=1
   calls: sub_d139c0
*/
void sub_d13380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13380ULL || rel >= 0xd13460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d13460 size=16 callers=0 calls=0
*/
void sub_d13460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13460ULL || rel >= 0xd13470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d13470 size=512 callers=0 calls=2
   calls: sub_5cf8d0, sub_5e2bc0
*/
void sub_d13470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13470ULL || rel >= 0xd13670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d13670 size=16 callers=0 calls=0
*/
void sub_d13670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13670ULL || rel >= 0xd13680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d13680 size=16 callers=0 calls=0
*/
void sub_d13680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13680ULL || rel >= 0xd13690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d13690 size=16 callers=0 calls=0
*/
void sub_d13690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13690ULL || rel >= 0xd136a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d136a0 size=16 callers=0 calls=0
*/
void sub_d136a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd136a0ULL || rel >= 0xd136b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d136b0 size=16 callers=0 calls=0
*/
void sub_d136b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd136b0ULL || rel >= 0xd136c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d136c0 size=16 callers=0 calls=0
*/
void sub_d136c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd136c0ULL || rel >= 0xd136d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d136d0 size=16 callers=0 calls=0
*/
void sub_d136d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd136d0ULL || rel >= 0xd136e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d136e0 size=16 callers=0 calls=0
*/
void sub_d136e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd136e0ULL || rel >= 0xd136f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d136f0 size=16 callers=0 calls=0
*/
void sub_d136f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd136f0ULL || rel >= 0xd13700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d13700 size=48 callers=0 calls=1
   calls: sub_5c6850
*/
void sub_d13700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13700ULL || rel >= 0xd13730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d13730 size=48 callers=0 calls=1
   calls: sub_5c6870
*/
void sub_d13730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13730ULL || rel >= 0xd13760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d13760 size=144 callers=0 calls=1
   calls: sub_5c6880
*/
void sub_d13760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13760ULL || rel >= 0xd137f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

